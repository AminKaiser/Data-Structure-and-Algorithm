#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int a[], int n)
{
    int i,j;
    for(i = 0; i<n; i++)
    {
        for(j = 0;j < n-i-1; j++)  // (n-i-1) because Last i elements are already in place
        {
            if(a[j]> a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    int n,i;
    int a[100];
    freopen("in.txt","r",stdin);
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Inputed Data : "<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    Bubble_Sort(a,n);
    cout<<"Sorted List : "<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
