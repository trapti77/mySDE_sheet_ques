//write a program to find first and second largest and smallest element in the array
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int secondlarge(vector<int>&v,int n)
{
int flarge=v[0],slarge=-1;
	
	for(int i=1;i<n;i++)//O(n)---------total=O(n)
	{
	 if(v[i]>flarge)
	 {
	 	slarge=flarge;
	 	flarge=v[i];
     }
	 else if(v[i]<flarge&&v[i]>slarge)
	 {
	 slarge=v[i];	
	}	
	}
	return slarge;
}
int secondsmall(vector<int>&v,int n)
{
int fsmall=v[0],ssmall=-1;
	
	for(int i=1;i<n;i++)//O(n)---------total=O(n)
	{
	 if(v[i]<fsmall)
	 {
	 	ssmall=fsmall;
	 	fsmall=v[i];
     }
	 else if(v[i]>fsmall&&v[i]<ssmall)
	 {
	 ssmall=v[i];	
	}	
	}
	return ssmall;
}
bool check(vector<int>&v,int n){
	int f=v[0];
for(int i=1;i<n;i++)
{
	if(v[i]>=f)
	{
		f=v[i];
	}
	else
	{
			return false;
	}
}
return true;
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
	//-----------------------find first largest element----------------------------------------------------------------
	//--------------O(n)---------------------
	/*int flarge=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]>flarge)
		{
			flarge=v[i];
		}
	}
	cout<<"first largest="<<flarge<<endl;
	//--------------O(nlogn)-------------------
	sort(v.begin(),v.end());
	cout<<"first largest="<<v[n-1];*/
	//---------------------------------------second largest element--------------------------------------------------------
	//-----------brute force ------------------
/*	sort(v.begin(),v.end());//O(nlogn)
	int flarge=v[n-1];
	int slarge=-1;
	for(int i=n-2;i>=0;i--) //O(n)---------total=O(nlogn)+O(n)=O(nlogn)
	{
		if(v[i]!=flarge)
		{
		slarge=v[i];
		break;	
		}
	}
	cout<<"second largest="<<slarge<<endl;
	//-----------------------Better Solution--------
	int flarge=v[0],slarge=-1;
	//step1----
	for(int i=1;i<n;i++)//O(n)
	{
	 if(v[i]>flarge)
	 {
	 	flarge=v[i];
     }	
	}
	//step2----
	for(int i=0;i<n;i++)//O(n)-----------------total=O(n)+O(n)==O(2n)
	{
		if(v[i]<flarge&&slarge<v[i])
		{
			slarge=v[i];
		}
	}
	cout<<"second largest="<<slarge<<endl;
	//----------------------------optimal solution-------------
	int flarge=v[0],slarge=-1;
	
	for(int i=1;i<n;i++)//O(n)---------total=O(n)
	{
	 if(v[i]>flarge)
	 {
	 	slarge=flarge;
	 	flarge=v[i];
     }
	 else if(v[i]<flarge&&v[i]>slarge)
	 {
	 slarge=v[i];	
	}	
	}
	cout<<"first largest="<<flarge<<endl;
	cout<<"second largest="<<slarge<<endl;
//----------------------------------------------------------Ninjas Question----------------------------
//FIND SECOND LARGEST AND SECOND SMALLEST ELEMENT 
int slarge=secondlarge(v,n);
int ssmall=secondsmall(v,n);
cout<<"second  largest= "<<slarge<<endl<<"second smallest = "<<ssmall<<endl;



//CHECK IF THE ARRAY IS SORTED OR NOT
//-----------------------------------Brute force---------------------------
bool r=check(v,n);
if(r==1)
{
	cout<<"array is sorted";
}
else
{
cout<<"array is not sorted";	
}

//-------REMOVE DUPLICATES IN THE ARRAY--------
//------------------Brute force-----------
sort(v.begin(),v.end());//O(nlogn)
vector<int>ans;
int prev=-1;
for(int i=0;i<n;i++)//O(n)------total=O(nlogn)
{
if(v[i]!=prev)
{
ans.push_back(v[i]);
prev=v[i];	
}	
}
for(int i=0;i<ans.size();i++)
{
	cout<<ans[i]<<" ";
}
//-----------using set---------
set<int>s;
for(int i=0;i<n;i++)
{
	s.insert(v[i]);
}
int i=0;
if(s.find(v[i]) != s.end()){
      s.insert({v[i]});
    }
    else
      cout << v[i] << " is a duplicate";
  }
for(auto it:s)
{
	v[i]=e;
	i++;
}
for(int i=0;i<ans.size();i++)
{
	cout<<v[i]<<" ";
}
return 0;
}
*/


