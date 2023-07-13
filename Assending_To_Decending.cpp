// Assending To Decending
#include<iostream>
using namespace std;
int main()
{
    int t,temp;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    cout<<"Printing unsortted form\n";
    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\nPrint sortted form\n";
    for(int i=0;i<t;i++)
    {
        for(int  j=i+1;j<t;j++)
        {
             if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<t;i++)
    {
     cout<<a[i]<<"  ";   
    }
}