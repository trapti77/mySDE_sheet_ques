
#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
#include<map>
using namespace std;
//---------------------------------------SET MATRIX WITH ZERO--------------------------------------------------
//-------------------------BRUTE FORCE----- TC -O(n*n*n)--------------
void setzero(vector<vector<int> >&v)
{
	int n=v.size();
	int m=v[0].size();
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		
		if(v[i][j]==0)
		{
			for(int k=0;k<m;k++)
			{
				if (v[i][k]!=0) {
                        v[i][k]= -1;
                    }
			}
			for(int k=0;k<n;k++)
			{
				 if (v[k][j]!=0) {
                        v[k][j] = -1;
                    }
		   }
		}
	}
	}
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		if(v[i][j]==-1)
		{
			v[i][j]=0;
		}
	}
	}		
}
//---------------------BETTER SOLUTION-----------------TC=O(n*n)--- SC-O(n)+O(m)==O(n)-
void setzero1(vector<vector<int> >&v)
{
	int n=v.size();
	int m=v[0].size();
	int mm[m]= {0};
	int nn[n]= {0};
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		if(v[i][j]==0)
		{
		 mm[j]=1;
		 nn[i]=1;	
		}
	}
	}
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		if(mm[j]==1||nn[i]==1)
		{
			v[i][j]=0;
		}
	}
	}		
}
//--------------------------OPTIMIZATION SOLUTON---------tc-O(n*n)---sc=o(1)----
void setzero2(vector<vector<int> >&v)
{
	int n=v.size();
	int m=v[0].size();
	int col=1;
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
		if(v[i][j]==0)
		{
		 v[i][0]=0;	
		 if(j!=0)
		 {
		 	v[0][j]=0;
		 }else
		{
			col=0;
		}
		}
	}
	}
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
	{
	if(v[i][j]!=0)
	{
		if(v[0][j]==0||v[i][0]==0)
		{
			v[i][j]=0;
		}
	}
	}
	}
	if(v[0][0]==0)
	{
	for(int j=0;j<n;j++)v[0][j]=0;	
	}
	if(col==0)
	{
	for(int j=0;j<n;j++)v[0][j]=0;	
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
	//setzero(v);
	//setzero1(v);
	setzero2(v);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
		
		cout<<v[i][j];
	}
	cout<<endl;
	}
return 0;
}
