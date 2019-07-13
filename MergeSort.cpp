#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int left,int right){
    int mid = (left+right)/2;

    int i = left;
    int j = mid+1;
    int k = left;

    int temp[100];

    while(i<=mid && j<=right){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=right){
        temp[k++]  = a[j++];
    }

    //We need to copy all element to original arrays
    for(int i=left;i<=right;i++){
        a[i] = temp[i];
    }


}

void mergeSort(int a[],int left,int right){
    //Base case - 1 or 0 elements
    if(left>=right){
        return;
    }

    //Follow 3 steps
    //1. Divide
    int mid = (left+right)/2;

    //Recursively the arrays - s,mid and mid+1,e
    mergeSort(a,left,mid);
    mergeSort(a,mid+1,right);

    //Merge the two parts
    Merge(a,left,right);

}




int main(){

	int a[100];
	int n;
	freopen("in.txt","r",stdin);
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Inputed Array : "<<endl;
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" , ";
	}
	mergeSort(a,0,n);
	cout<<endl;
	cout<<"Sorted Array : "<<endl;
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" , ";
	}
}
