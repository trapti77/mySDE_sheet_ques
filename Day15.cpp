
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
using namespace std;
//---------------------------------------ROTATE MATRIX--------------------------------------------------
//-------------------------BRUTE FORCE--------TC-O(n*n)---SC-O(n*n)--------
vector<vector<int> >rotate(vector<vector<int> >&v,int n){
		vector<vector<int> > multi(n,vector<int> (n,0));
		
	for(int i=0;i<n;i++)
	{
		int k=n-1;
		for(int j=0;j<n;j++)
	{
		multi[i][j]=v[k][i];
		k--;	
	}
	
	}
	return multi;
}
/*here there are two steps to solve it-
1.transpose it 
2. after transpose reverse it
then it rotate at 90 degree
*/
void rotate1(vector<vector<int> >&v,int n){
		for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
	{	
		swap(v[i][j],v[j][i]);
	}
	}
	for(int i=0;i<n;i++)
	{
		reverse(v[i].begin(),v[i].end());
	}
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
	
	/*	vector<vector<int> >ans=rotate(v,n);
		int n1=ans.size() ; 
		int m=ans[0].size();
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<ans[i][j];
			}
			cout<<endl;
		}*/
		rotate1(v,n);
		for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
	{
		
		cout<<v[i][j];
	}
	cout<<endl;
	}
return 0;
}
