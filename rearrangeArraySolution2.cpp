#include<iostream>
using namespace std;
void rearrange(int* a,int s,int e,int* b)
{
    if(s<=e)
    {
    int x=a[s];
    a[s]=0;
    rearrange(a,s+1,e,b);
    b[x]=x;
    }
}
int main()
{
     int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter +ve elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        int s=0,e=n-1;
        int m=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>m)
        m=a[i];
        m++;
    int b[m]={0};
        rearrange(a,s,e,b);
         cout<<"Array after rearranging: "<<endl;
        for(int i=0;i<m;i++)
        cout<<b[i]<<" ";
}
