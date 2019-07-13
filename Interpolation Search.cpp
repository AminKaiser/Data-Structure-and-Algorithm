#include<bits/stdc++.h>
using namespace std;

Interpolation_Search(int a[],int k,int n)
{
    int left = 0;
    int right = n-1;
    int middle;

    int i = 0;
    while(left <= right)
    {
        middle = left + ((int(right - left)/ (a[right] -a[left])) * (k - a[left]));
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
    int result = Interpolation_Search(a,k,n);
    if(result == -1)
        cout<<"Not Found";
    else
        cout<<"Found "<<endl<<"Position : "<<result+1;
}
