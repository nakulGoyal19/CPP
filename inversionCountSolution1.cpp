#include<iostream>
using namespace std;
int invCnt(int* a,int n)
{
    int c=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        if(a[i]>a[j])
        c++;
    return c;
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
        cout<<"inversion count = "<<invCnt(a,n)<<endl;

}
