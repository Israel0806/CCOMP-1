#include <iostream>

using namespace std;

int main()
{
    int l[5],a,len=5,i;
    cout<<"Por favor ingrese una lista de 5 numeros\n";
    for (int x=0;x<len;x++){
        cin>>l[x];
    }
    for(int j=1;j<len;j++){
        a=l[j];
        i=j-1;
        cout<<"2   "<<i<<"   "<<l[i]<<"   "<<a<<endl<<endl;
        while (i>0 and l[i]>a){
            l[i+1]=l[i];
            i=i-1;
            cout<<"1 "<<l[i]<<"   "<<l[i+1]<<endl<<endl;

        }
        l[i+1]=a;
    }
    for(int x=0;x<len;x++){
        cout<<endl<<l[x]<<endl;
    }

    return 0;
}
