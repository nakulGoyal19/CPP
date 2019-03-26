#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter +ve elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>m)
        m=a[i];
        m++;
    int b[m]={0};
    for(int i=0;i<n;i++)
    {
        b[a[i]]=a[i];
    }
    cout<<"Array after rearranging: "<<endl;
    for(int i=0;i<m;i++)
        cout<<b[i]<<" ";
}
