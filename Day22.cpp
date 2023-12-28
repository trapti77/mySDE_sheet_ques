
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
//------------------------------PASCAL TRIANGLE--------------------------------------------------
//-------------TC-O(c)--sc-O(1)----------------find element using row and column number in pascal triangle---------------------
int findelement(int r,int c)
{
	/*using formula
	nCr=n!/r!*(n-r)!;
	*/
	int a=r-1;
	int b=c-1;
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans*=a;
		ans/=i;
		a--;
	}
	return ans;
}
//----------TC-O(n)----SC-O(n)-------------find row in pascal triangle using row number------------------------
vector<int> findrow(int n)
{
/*vector<int>ans;
for(int i=0;i<n;i++)
{
ans.push_back(findelement(n,i+1));	
}
return ans;
*/
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
//------------------------find whole pascal triangle---------------------
vector<vector<int> >findpascal(int n)
{
	vector<vector<int> >ans;
	for(int i=1;i<=n;i++)
	{
	ans.push_back(findrow(i));		
	}
	return ans;
}
int main()
{
	/*int r,c;
	cin>>r>>c;
	cout<<findelement(r,c);*/
	/*int n;
	cin>>n;
	findrow(n);*/
	/*vector<int>ans=findrow(n);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}*/
	int n;
	cin>>n;
	vector<vector<int> >ans=findpascal(n);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[0].size();j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}

