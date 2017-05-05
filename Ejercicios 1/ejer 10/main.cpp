#include <iostream>

using namespace std;

void merge(int arr[], int low, int high, int mid)
{
    int arr1[6],arr2[6];
    int n1,n2,i,j,k;
    n1=mid-low+1;
    n2=high-mid;

    for(i=0;i<n1;i++)
        arr1[i]=arr[i+1];
    for(j=0;j<n2;j++)
        arr2[j]=arr[mid+j+1];
    arr1[i]=99999;
    arr2[j]=99999;

    i=0;
    j=0;
    for(k=low;k<=high;k++)
    {
        if(arr1[i]<=arr2[j])
            arr[k]=arr1[i++];
        else
            arr[k]=arr2[j++];
    }
}
void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
}

int main()
{
    int length=5,arr[]={4,3,2,1,5};
    cout<<"La lista antes de ser ordenada\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    mergesort(arr,0,4);
    cout<<"La lista ordenada\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
