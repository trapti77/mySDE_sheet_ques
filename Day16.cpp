
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//---------------------------------------TRANSPOSE THE  MATRIX--------------------------------------------------
//-------------------------BRUTE FORCE--------TC-O(n*n)---SC-O(n*n)--------
vector<vector<int> >rotate(vector<vector<int> >&v,int n){
		vector<vector<int> > multi(n,vector<int> (n,0));
		
	for(int i=0;i<n;i++)
	{
		int k=n-1;
		for(int j=0;j<n;j++)
	{
		multi[i][j]=v[j][i];
		k--;	
		//swap(v[i][j],v[j][i]); we can also do it using swap it don,t take space 
	}
	
	}
	return multi;
	//return v;
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
	
		vector<vector<int> >ans=rotate(v,n);
		int n1=ans.size() ; 
		int m=ans[0].size();
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<ans[i][j];
			}
			cout<<endl;
		}
return 0;
}
