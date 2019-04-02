#include<iostream>
using namespace std;
int merge(int* a,int l,int m,int r)
{
    int n1=m-l+1,n2=r-m,invCnt=0;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++)
        a1[i]=a[l+i];
    for(int i=0;i<n2;i++)
        a2[i]=a[m+i+1];
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[l+k]=a1[i];
            i++;k++;
        }
        else
        {
            invCnt+=n1-i;
            a[l+k]=a2[j];
            j++;k++;
        }
    }
        while(i<n1)
        {
            a[l+k]=a1[i];
            i++;k++;
        }
        while(j<n2)
        {
            a[l+k]=a2[j];
            j++;k++;
        }
   return invCnt;
}
int divide(int* a,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
       int c1= divide(a,l,m);
       int c2= divide(a,m+1,r);
        return c1+c2+merge(a,l,m,r);
    }
    return 0;
}
int main()
{
       int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        int l=0;int r=n-1;
        cout<<"inversion count = "<<divide(a,l,r)<<endl;

}
