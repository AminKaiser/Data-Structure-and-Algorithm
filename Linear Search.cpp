#include<bits/stdc++.h>
using namespace std;

Linear_Search(int a[],int k,int n)
{
  for(int i=0; i<n; i++)
  {
      if(a[i] == k)
      {
          return i;
          break;
      }
  }
  return -1;
}
int main()
{
    int n,a[10],k,i;
    cout<<"Enter Element No :"<<endl;
    cin>>n;
    cout<<"Enter Element :"<<endl;
    for(i = 0;i < n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Key Number to Search"<<endl;
    cin>>k;
    int result = Linear_Search(a,k,n);
    if(result == -1)
        cout<<"Not Found";
    else
        cout<<"Found "<<endl<<"Position : "<<result+1;
}
