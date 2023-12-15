
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//-----------------------------NEXT PERMUTATION-----------TC=O(3n)--==O(n)----------
vector<int>nextp(vector<int>&v)
{
	int n=v.size();
	int idx=-1;
	for(int i=n-2;i>=0;i--)
	{
	if(v[i]<v[i+1])
	{
	idx=i;
	break;	
	}	
	}
	if(idx==-1)
	{
		reverse(v.begin(),v.end());
		return v;
	}
	for(int i=n-1;i>idx;i--)
	{
		if(v[i]>v[idx])
		{
			swap(v[i],v[idx]);
			break;
		}
	}
	reverse(v.begin()+idx+1,v.end());
	return v;
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
	vector<int>ans=nextp(v);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
