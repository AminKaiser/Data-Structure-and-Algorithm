#include<bits/stdc++.h>
using namespace std;

Selection_Sort(int a[], int n)
{
    int i,j,minimum,loc;
    for(i = 0; i<n-1; i++)
    {
        minimum = a[i];
        loc = i;
        for(j = i+1; j<n; j++)
        {
            if(minimum > a[j])
            {
               minimum = a[j];
               loc = j;
            }
        }
        //int temp = arr[i];
        //arr[i] = arr[loc];
        //arr[loc]= temp;

        swap(a[loc],a[i]);
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
    Selection_Sort(a,n);

    cout<<"Sorted List : "<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

