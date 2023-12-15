
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
using namespace std;
//--------------------------------------PASCAL'S TRIANGLE--------------------------------------------------
//------------------------FIND ELEMENT FROM PASCAL TRIANGLE------ TC-O(n)----SC-o(1)-----
int pascalele(int n,int r)
{
	int result=1;
	for(int i=0;i<r;i++)
	{
	result=result*(n-i);
	result=result/(i+1);
	}
	return result;
}
//-------------------------FIND ROW FROM PASCALS TRIANLE-----------TC-O(n)----SC-O(1)-------
void pascalrow(int n)
{
	int ans=1;
	cout<<ans<<" ";
for(int c=1;c<n;c++)
{
ans=ans*(n-c);
ans=ans/(c);
cout<<ans<<" ";	
}	
}
//------------------------------CREATE PASCAL TRIANGLE ----------------------------
vector<int>generaterow(int n)
{
    int ans=1;
vector<int>row;
row.push_back(ans);
for(int c=1;c<n;c++)
{
ans=ans*(n-c);
ans=ans/(c);
row.push_back(ans);
}
return row;
}
vector<vector<int> >pascal(int k)
{
	vector<vector<int> >ans;
        for(int i=1;i<=k;i++)
        {
            ans.push_back(generaterow(i));
        }
        return ans;
}
int main()
{
	/*int n,r;
	cin>>n>>r;
	cout<<pascalele(n,r);*/
	/*int n;
	cin>>n;
	pascalrow(n);*/
	int n;
	cin>>n;
	vector<vector<int> >ans=pascal(n);
	
	for(int i=0;i<=ans.size();i++)
	{
	for(int j=0;j<=ans.size();j++)
	{
		cout<<ans[i][j];
	}
	cout<<endl;	
	}
return 0;
}
