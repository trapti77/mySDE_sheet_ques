#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
//QUESTION NO.-1------------------------MISSING NUMBER----------------------------------
//-------------------------BRUTE FORCE----------------------TC=O(n)
/*int missno(vector<int>&v,int n)
{
	for(int i=1;i<=n;i++)
	{
		if(v[i]!=i)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	cout<<missno(v,n);
	return 0;
	
}*/
//---------------------------BRute FORCE--------------TC=O(N*N)-----
/*int missno(vector<int>&v,int n)
{
for(int i=1;i<=n;i++)
{
	bool flag=0;
	for(int j=0;j<n;j++)
	{
		if(v[j]==i)
		{
		flag=1;
		break;	
		}
	}
if(flag==0)
{
	return i;
}
}
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
	cout<<missno(v,n);
	return 0;
	
}*/

//-------------------BETTER SOLUTION--------------TC=O(N)+O(N) it means O(n)-----------
/*int missno(vector<int>&v,int n)
{
map<int,int>m;
m[n+1]={0};
for(int i=0;i<n;i++)
{
	m[v[i]]=1;
}
for(int i=1;i<=n;i++)
{
	if(m[i]==0)
	{
		return i;
	}
}
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
	cout<<missno(v,n);
	return 0;
	
}*/

//----------------------------OPTIMAL SOLUTION------------------------------
/*int missno(vector<int>&v,int n)
{
int sum=0;
int nsum=n*(n+1)/2;
for(int i=0;i<n;i++)
{
	sum+=v[i];
}
int ans=abs(nsum-sum);
return ans;
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
	cout<<missno(v,n);
	return 0;
	
}*/
//--------------------USING XOR------
/*int missno(vector<int>&v,int n)
{
int XOR1=0;
//for(int i=1;i<=n;i++){XOR1=XOR1^i;} ---TC-O(2n) but we can also do it in O(n)
int XOR2=0;
for(int i=0;i<n-1;i++)
{
	XOR2=XOR2^v[i];
	XOR1=XOR1^(i+1);//---------TC=O(n)
}
return XOR1^XOR2;
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
	cout<<missno(v,n);
	return 0;
	
}*/

//QUESTION NO.-2----------------------------MAXIMUM CONSECUTIVE ones------------------------
//-------------------BRUTE FORCE-----------TC=O(n)
/*int consecutive(vector<int>&v,int n)
{
	int c=0;
	int maxe=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]==1)
		{
			c++;
			maxe=max(maxe,c);
		}else
		{
			c=0;
		}
	}
	return maxe;
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
	cout<<consecutive(v,n);
	return 0;
	
}*/
//QUESTION NO-3----------------------FIND THE NUMBER THAT APPEARS ONCE------------
//------------------BRUTE FORCE---------------------TC=O(N*N)---SC=O(n)-
/*int consecutive(vector<int>&v,int n)
{
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(v[i]==v[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			return v[i];
		}
	}
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
	cout<<consecutive(v,n);
	return 0;
	
}*/

//------------------------------BETTER SOLUTION-----------TC=O(nlogm)----- SC=O(n/2+1)---
/*int consecutive(vector<int>&v,int n)
{
	map<int,int>m;
	m[n]=0;
	for(int i=0;i<n;i++)
	{
		m[v[i]]++;
	}
	//for(int i=0;i<n;i++){if(m[v[i]]==1){return v[i];}
	map<int>::iterator itr;
	for(auto itr:m)
	{
		if(itr.second==1)
		{
			return itr.first;
		}
	}
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
	cout<<consecutive(v,n);
	return 0;
	
}*/

//--------------OPTIMAL SOLUTION-------------------TC=O(N)----SC=O(1)-----
int consecutive(vector<int>&v,int n)
{
int XOR=0;
for(int i=0;i<n;i++)
{
XOR=XOR^v[i];	
}
return XOR;	
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
	cout<<consecutive(v,n);
	return 0;
	
}




