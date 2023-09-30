class solution
{
public:
int searchele(vector<int>&a,int n,int e)
{
  for(int i=0;i<n;i++)
{
if(a[i]==e)
{
return i;
}
}
return -1;
}
};
