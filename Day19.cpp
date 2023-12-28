#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//-----------------------------------FINDING MISSING NUMBER--------------------------------------------------
//-------------------------BRUTE FORCE------TC-O(nlon)-------
int solve(vector<int>&v,int n)
{
sort(v.begin(),v.end());
for(int i=0;i<=n;i++)
{
if(v[i]!=i+1)
{
return i+1;	
break;
}	
}
return -1;	
}
int solve1(vector<int>&v,int n)
{
int tsum=n*(n+1)/2;
int sum=0;
for(int i=0;i<n;i++)
{
sum+=v[i];	
}
int res=tsum-sum;
return res;
}
int main()
{
	int n;
	cin>>n;
    vector<int> v(n); 
	for(int i=0;i<n;i++)
	{
	cin>>v[i];
    }
    cout<<"missing number::"<<solve1(v,n)<<endl;
return 0;
}
