
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//---------------------------------------MERGE TWO SORTED ARRAY without extra space --------------------------------------------------
//-------------------------BRUTE FORCE-------TC-O(n+m)---SC-O(n+m)------
void sort(vector<int>&v,vector<int>&v1,int n,int n1){
	int m=n1+n;
	vector<int>ans(m);
	int i=0;
	int j=0;
	int idx=0;
	while(i<n&&j<n1)
	{
	 if(v[i]>=v1[j])
	 {
	 ans[idx]=v1[j];
	 j++;
	 idx++;	
	 }
	else
	 {
	ans[idx]=v[i];
	 i++;
	 idx++;		
	 }
	 }
	 while(i<n)
	 {
	 	ans[idx]=v[i];
	 	idx++;
	 	i++;
	 }
	  while(j<n1)
	 {
	 	ans[idx]=v1[j];
	 	j++;
	 	idx++;
	 }
	//return ans;
	for(int i=0;i<m;i++)
	{
		if(i<n){
			v[i]=ans[i];
		}
		else
		{
			v1[i-n]=ans[i];
		}
	}
}
//------------------------TC=O(min(n,m))+O(nlogn)+O(mlogm)===O(nlogn)----------SC-O(1)--------
void sort1(vector<int>&v,vector<int>&v1,int n,int n1){
	int i=n-1;
	int j=0;
	while(i>=0&&j<n1)//TC=O(min(n,m);
	{
	  if(v[i]>v1[j])
	  {
	  swap(v[i],v1[j]);
	  i--;
	  j++;	
	}
	else{
		break;
	}	
	}
	sort(v.begin(),v.end());//O(nlogn)
	sort(v1.begin(),v1.end());//O(n1logn1)
}
//----------using GAP METHOD----------------------------------
void swapele(vector<int>&v,vector<int>v1,int n,int m)
{
	if(v[n]>v1[m])
	{
		swap(v[n],v1[m]);
	}
}
void sort2(vector<int>&v,vector<int>&v1,int n,int n1){
	int l=n+n1;
	int gap=(l/2)+(l%2);
	while(gap>0)
	{
		int left=0;
		int right=left+gap;
	    while(right<l)
	    {
	    	if(left<n&&right>=n)
	    	{
	    	swapele(v,v1,left,right-n);	
			}
			else if(left>=n)
			{
			swapele(v1,v1,left-n,right-n);	
			}
			else
			{
			swapele(v,v,left,right);	
			}
			left++;
			right++;
		}
		if(gap==1)break;
		gap=(gap/2)+(gap%2);
	}
}
int main()
{
	int n,n1;
	cin>>n>>n1;
    vector<int> v(n); 
     vector<int> v1(n1); 
	for(int i=0;i<n;i++)
	{
	cin>>v[i];
	}
		for(int i=0;i<n1;i++)
	{
	cin>>v1[i];
	}
/*vector<int>ans=sort(v,v1,n,n1);
	int m=ans.size();
	for(int i=0;i<m;i++)
	{
	cout<<ans[i]<<" ";
	}*/
	sort2(v,v1,n,n1); 
	for(int i=0;i<n;i++)
	{
	cout<<v[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<n1;i++)
	{
     cout<<v1[i]<<" ";
	}
return 0;
}
