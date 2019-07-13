#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int a[], int n)
{
    int i,j;
    for(i = 1; i<n; i++)
    {
        int temp = a[i];

        j = i - 1;

        while(temp < a[j] && j >= 0)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;
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
    Insertion_Sort(a,n);
    cout<<endl;
    cout<<"Sorted List : "<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
