#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

//QUESTION NO.1------------TWO SUM  PROBLEM-------------
//----------------------------------------------O(n*n)-----------------------
vector<int> brute(vector<int>&a,int n,int k)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if(a[i]+a[j]==k)
		{
		return {i,j};	
		}	
		}
	}
	return {};
}
//----------------------------TC---O(n*logn)--------SC-O(n)--------------------------
vector<int> better(vector<int>&a,int n,int k)
{
map<int,int>mm;
for(int i=0;i<n;i++)
{
	int dif=k-a[i];
	if(mm.find(a[i])!=mm.end())
	{
		return {mm[dif],i};
	}
	mm[a[i]]=i;
}
return {};
}
//------------------------------TC-O(n)+O(nlogn)=O(nlogn)------------------SC-O(1)------------------------
vector<int> optimal(vector<int>&a,int n,int k)
{
sort(a.begin(),a.end());
int i=0;
int j=n-1;
while(i<j)
{
 int sum=a[i]+a[j];
 if(sum<k)
 {
 	i++;
}	
else if(sum>k)
{
	j--;
}
else
{
	return {i,j};
}
}
return {};
}
//---------------------------------------int main------------------------------------------
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
vector<int>ans=brute(v,n,k);
for(int i=0;i<ans.size();i++)
{
	cout<<ans[i]<<" ";
}
cout<<endl;
vector<int>aa=better(v,n,k);
for(int i=0;i<aa.size();i++)
{
	cout<<aa[i]<<" ";
}
cout<<endl;
vector<int>a=optimal(v,n,k);
for(int i=0;i<a.size();i++)
{
	cout<<a[i]<<" ";
}
	return 0;
}
