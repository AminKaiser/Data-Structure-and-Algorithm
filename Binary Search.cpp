#include<bits/stdc++.h>
using namespace std;

Binary_Search(int a[],int k,int n)
{
    int left = 0;
    int right = n-1;
    int middle;

    int i = 0;
    while(left <= right)
    {
        middle = ( left + right )/2;
        if(a[middle] == k)
        {
            return middle;
        }
        else if (a[middle]<k)
        {
            left = middle +1;
        }
        else
        {
            right = middle-1;
        }
        i++;
    }
    if(left > right)
	{
		return -1;
	}
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
    int result = Binary_Search(a,k,n);
    if(result == -1)
        cout<<"Not Found";
    else
        cout<<"Found "<<endl<<"Position : "<<result+1;
}
