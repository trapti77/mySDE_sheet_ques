#include<iostream>
#include<vector>
#include<map>
using namespace std;
//---------------------------------------SORT 0, 1 ,2 array--------------------------------------------------
//---------------------BRUTE SOLUTION----------------------
//{0,1,2,0,1,2,1,2,0,0,0,1}
/*vector<int> sort(vector<int>&a,int n)
{
	int c1=0;
	int c2=0;
	int c3=0;
for(int i=0;i<n;i++)
{
	if(a[i]==0)
	{
		c1++;
	}
		if(a[i]==1)
	{
		c2++;
	}
		if(a[i]==2)
	{
		c3++;
	}
}
vector<int>ans;
while(c1!=0)
{
	ans.push_back(0);
	c1--;
}
while(c2!=0)
{
	ans.push_back(1);
	c2--;
}
while(c3!=0)
{
ans.push_back(2);
	c3--;	
}
return ans;
//--------------OR--------------TC=O(n)+O(n)+O(n)==O(n)tc-- SC=O(1)--
for(int i=0;i<c1;i++){ a[i]=0;	}
for(int i=c1;i<c1+c2;i++){ a[i]=1;	}
for(int i=c1+c2;i<c3+c1+c2;i++){ a[i]=2;}
return a;
}*/
//------------------by -DUTCH NATIONAL FLAG ALGORITHM -------------------------------
//-------------optimal solution-----------
vector<int> sort1(vector<int>&a,int n){
	int low=0;
	int mid=0;
	int high=n-1;
	while(mid<=high)
	{
		if(a[mid]==0)
		{
		swap(a[low],a[mid]);
		low++;
		mid++;	
		}
		else if(a[mid]==1){
			mid++;
		}
		else
		{
		swap(a[mid],a[high]);
		high--;	
		}
	}
	return a;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
 vector<int>ans=sort1(v,n);
 for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
return 0;
}
