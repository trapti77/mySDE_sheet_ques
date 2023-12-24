
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//---------------------------------------MERGE OVERLAPPING INTERVAL--------------------------------------------------
//-------------------------BRUTE FORCE----------------
vector<vector<int> >rotate(vector<vector<int> >&v,int n,int m){
	vector<vector<int> > multi;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		if(multi.empty()||v[i][0]>v.back()[1])
		{
			multi.push_back(v[i]);
		
		}
		else
		{
		multi.back()[1]=max(multi.back()[1],v[i][1]);
		}
	}
	return multi;
}
int main()
{
	int n,m;
	cin>>n>>m;
    vector<vector<int> > v( n , vector<int> (n, 0)); 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		
		cin>>v[i][j];
	}
	}
	
		vector<vector<int> >ans=rotate(v,n,m);
		int n1=ans.size(); 
		int n2=ans[0].size();
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
			{
				cout<<ans[i][j];
			}
			cout<<endl;
		}
return 0;
}
