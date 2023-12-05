#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

//QUESTION NO.1------------LONGEST SUBARRAY WITH SUM K-------------
//SUBARRAY-----it means that contigous part of array
//----------------------------------------------O(n*n*n)-----------------------
int lOfsub(vector<int>&v,int n,int k){
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int m=i;m<=j;m++)
			{
			  sum+=v[m];	
			}
			if(sum==k)
			{
			c++;	
			}
		}
	}
	return c;
}
//------------O(n*n)--------------
int lenofsubarray(vector<int>&v,int n,int k)
{
	int len=0;
for(int i=0;i<n;i++)
{
	int sum=0;
	for(int j=i;j<n;j++)
	{
			sum+=v[j];
	if(sum==k)
	{
	len++;	
	}	
		
	}	
}
return len;	
}
//----------------------o(n)----------------------------
int lenofsub(vector<int>&v,int n,int k){
	map<int,int>mp;
	mp[0]=1;
	int prefixsum=0, c=0;
	for(int i=0;i<n;i++)
	{
		prefixsum+=v[i];
	int remove=prefixsum-k;
	c+=mp[remove];
	mp[prefixsum]+=1;	
	}
	return c;
} 
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	cout<<lenofsubarray(v,n,k);
	cout<<endl;
	cout<<lOfsub(v,n,k);
	cout<<endl;
	cout<<lenofsub(v,n,k);
	return 0;
}
