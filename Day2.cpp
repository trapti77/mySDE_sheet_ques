#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
//QUESTION NO-1.---------------LEFT ROTATE ARRAY BY ONE--------------------
/*vector<int> rotate(vector<int>&v,int n)
{
  int temp=v[0];
  for(int i=1;i<n;i++)
  {
  	v[i-1]=v[i];
  }
  v[n-1]=temp;
  return v;
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
	vector<int>ans=rotate(v,n);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}*/

//QUESTION NO.-2----------------------------LEFT ROTATED ARRAY BY K PALCES-----------------------------
//---------------------------Brute Force-------------------------
/*void leftrotate(vector<int>&v,int n,int k)
{
	k=k%n;
  vector<int>temp(k);
  for(int i=0;i<k;i++)
  {
  	temp[i]=v[i];
  }
  for(int i=k;i<n;i++)
  {
  	v[i-k]=v[i];
  }
  for(int i=n-k;i<n;i++)
  {
  	v[i]=temp[i-(n-k)];
  }
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	leftrotate(v,n,k);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/

//--------------------------------Better Approach-------------------------
/*void leftrotate(vector<int>&v,int k)
{
	int n=v.size();
	int m=n-k;
  vector<int>temp(k);
  for(int i=0;i<m;i++)
  {
  	temp[i]=v[i];
  }
  for(int i=k;i<n;i++)
  {
  	v[i-k]=v[i];
  }
  for(int i=n-k;i<n;i++)
  {
  	v[i]=temp[i-(n-k)];
  }
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	leftrotate(v,k);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/

//---------------------------------Optimal -------------------------
/*void leftrotate(vector<int>&v,int k)
{
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());
reverse(v.begin(),v.end());
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	leftrotate(v,k);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/

//QUESTION NO.-3-------------------------------MOVE ALL ZEROS AT THE END OF THE ARRAY-------------------------
//---------------------------Brute Force---------------------------
/*void endzero(vector<int>&v,int n)
{
	int c=0;
	vector<int>ans;
for(int i=0;i<n;i++)
{
	if(v[i]!=0){
	ans.push_back(v[i]);
}
}
int m=ans.size();
for(int i=0;i<m;i++)
{
v[i]=ans[i];	
}

for(int i=m;i<n;i++){
	v[i]=0;
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
	endzero(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/

//---------------------Optimal Solution------------------------------
/*void endzero(vector<int>&v,int n)
{
	int j=-1;
	for(int i=0;i<n;i++)
	{
		if(v[i]==0)
		{
			j=i;
			break;
		}
	}
	for(int i=j+1;i<n;i++)
	{
		if(v[i]!=0)
		{
			swap(v[i],v[j]);
			j++;
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
	endzero(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}*/

//QUESTION NO.-4-------------------------UNION OF TWO SORTED ARRAY--------------------------------------
//------------------------Brute Force-------------------------------
/*vector<int>uniona(vector<int>&v1,vector<int>&v2)
{
	int n=v1.size();
	int m=v2.size();
	set<int>s;
	for(int i=0;i<n;i++)
	{
		s.insert(v1[i]);
	}
	for(int i=0;i<m;i++)
	{
		s.insert(v2[i]);
	}
	int ss=s.size();
	vector<int>ans;
	 set<int>::iterator itr;
  for (itr = s.begin(); 
       itr != s.end(); itr++) 
  {
     ans.push_back(*itr);
  }
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v1(n);
	vector<int>v2(m);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>v2[i];
	}
	vector<int>ans;
	ans=uniona(v1,v2);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}*/

//------------------------Optimal Solution------------------------------
/*vector<int>uniona(vector<int>&v1,vector<int>&v2)
{
	int n=v1.size();
	int m=v2.size();
	vector<int>ans;
	int f=0;
	int s=0;
	int i=0;
	while(f<n&&s<m)//TC--O(n+m)  SC--O(n+m)
	{
		if(v1[f]<v2[s])
		{
		if(ans.size()==0||ans.back()!=v1[f]){
				ans.push_back(v1[f]);
		}
			f++;
		}
		else 
		{
			if(ans.size()==0||ans.back()!=v2[s]){
				ans.push_back(v2[s]);
		}
		s++;
		}
	}
	while(f<n)
	{
		if(ans.size()==0||ans.back()!=v1[f]){
				ans.push_back(v1[f]);
		}
			f++;
	}
	while(s<m)
	{
			if(ans.size()==0||ans.back()!=v2[s]){
				ans.push_back(v2[s]);
		}
		s++;
	}
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v1(n);
	vector<int>v2(m);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>v2[i];
	}
	vector<int>ans;
	ans=uniona(v1,v2);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}*/

//QUESTION NO.-5-------------------------INTERSECTION OF TWO SORTED ARRAY---------------------------
/*vector<int>intersect(vector<int>&v1,vector<int>&v2)
{
	int n=v1.size();
	int m=v2.size();
	vector<int>ans;
	for(int i=0;i<n;i++)//O(N)
	{
		for(int j=0;j<m;j++)//O(n)----Total=O(n*n)
		{
		if(v1[i]==v2[j])
		{
			ans.push_back(v1[i]);//SC-O(n)
		}
	    }
	}
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v1(n);
	vector<int>v2(m);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>v2[i];
	}
	vector<int>ans;
	ans=intersect(v1,v2);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}*/

//----------------------Optimal Solution--------------------------------
vector<int>intersect(vector<int>&v1,vector<int>&v2)
{
	int n=v1.size();
	int m=v2.size();
	vector<int>ans;//------SC---O(1)-we are not use extra space 
	int i=0,j=0;
	while(i<n&&j<m){// ------TC---O(n+m)
		if(v1[i]==v2[j]){
			ans.push_back(v1[i]);
			i++;
			j++;
		}
		else if(v1[i]<v2[j])
		{
			i++;
		}
		else if(v1[i]>v2[j])
		{
			j++;
		}
	}
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int>v1(n);
	vector<int>v2(m);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>v2[i];
	}
	vector<int>ans;
	ans=intersect(v1,v2);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
