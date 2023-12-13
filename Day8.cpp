#include<iostream>
#include<vector>
using namespace std;
//----------------------------------------KADANES ALGORITHM FOR SUM OF SUBARRAY--------------------------------------------------
int kadanesalgo(vector<int>&a,int n)
{
	int sum=0;
	int maxsum=0;
for(int i=0;i<n;i++)
{
	sum+=a[i];
	if(sum<0)
	{
		sum=0;
	}
if(sum>maxsum)
{
	maxsum=sum;
}
}
return sum;	
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
cout<<kadanesalgo(v,n);
return 0;
}
