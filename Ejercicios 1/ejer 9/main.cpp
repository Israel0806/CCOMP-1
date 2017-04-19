#include <iostream>

using namespace std;

int main()
{
    int j, temp,length=5,arr[]={4,3,2,1,5};
    cout<<"La lista antes de ser ordenada\n";
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
	for (int i=0;i<length;i++)
    {
		j = i;
		while (j>0 and arr[j]<arr[j-1])
            {
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
            }
	}
	cout<<"La lista ordenada\n";
	for (int i=0;i<length;i++)
        {
            cout<<arr[i]<<endl;
        }
    return 0;
}
