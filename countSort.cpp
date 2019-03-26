#include<iostream>
using namespace std;
void countSort(int* a,int n)
{
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
    int j=0;
    for(int i=0;i<m;i++)
    {

        if(b[i]!=0)
            a[j++]=b[i];
    }
}
int main()
{
       int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter +ve unique elements except zero "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        countSort(a,n);
         cout<<"Array after sorting: "<<endl;
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
