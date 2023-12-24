
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//----------------------------------SPIRAL MATRIX--------------------------------------------------
//-------------------------BRUTE FORCE-------------
vector<int>spiral(vector<vector<int> > &v,int n)
{
	int m=v[0].size();
	int l=0,r=m-1;
	int t=0,b=n-1;
	vector<int>ans;
	while(l<=r&&t<=b)
	{
		for(int i=l;i<=r;i++)
		{
		ans.push_back(v[l][i]);	
		}
		t++;
		for(int i=t;i<=b;i++)
		{
			ans.push_back(v[i][r]);
		}
		r--;
		if(t<=b)
		{		
		for(int i=r;i>=l;i--)
		{
			ans.push_back(v[b][i]);
		}
		b--;
	}
		if(l<=r)
		{
		for(int i=b;i>=t;i--)
		{
			ans.push_back(v[i][l]);
		}
		l++;
	}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
    vector<vector<int> > v( n , vector<int> (n, 0)); 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		
		cin>>v[i][j];
	}
	}
	vector<int>ans=spiral(v,n);
	int m=ans.size();
	for(int j=0;j<m;j++)
	{
		
		cout<<ans[j]<<" ";
	}
return 0;
}
