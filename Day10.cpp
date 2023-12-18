
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
using namespace std;
//---------------------------------------matrix multiplication --------------------------------------------------
//-------------------------BRUTE FORCE-------------------
int main()
{
	int n;
	cin>>n;
    vector<vector<int> > v( n , vector<int> (n, 0)); 
	vector<vector<int> > v1( n , vector<int> (n, 0)); 
	vector<vector<int> > multi;  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		
		cin>>v[i][j];
	}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		
		cin>>v1[i][j];
	}
	}
	for(int i=0;i<n;i++)
	{
		vector<int>ans;
		for(int j=0;j<n;j++)
	{
		int sum=0;
	for(int k=0;k<n;k++)
	{
	 sum+=v[i][k]*v1[k][j];
	}
	ans.push_back(sum);
	}
		multi.push_back(ans);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		
		cout<<multi[i][j];
	}
	}
return 0;
}
