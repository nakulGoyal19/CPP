#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the total no of elements to be entered in an array ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout;
        cout<<"Enter the total no of elements to count the repitition of";
        int n1;
        cin>>n1;
        cout<<"Enter elements in range of 1 to 1000"<<endl;
        int b[n1];
        for(int i=0;i<n1;i++)
            cin>>b[i];
        cout<<"Output:"<<endl;
        int c[1000]={0};
        for(int i=0;i<n;i++)
            c[a[i]]++;
        for(int i=0;i<n1;i++)
            cout<<c[b[i]]<<endl;
}
