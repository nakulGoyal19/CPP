#include<iostream>
#include<stdlib.h>
using namespace std;
int comparator(const void *a,const void *b)
{
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n;
    cout<<"Enter the total no of engineers: ";
    cin>>n;
    int a[n];
    cout<<"Enter their skills"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<endl;
        qsort(a,n,sizeof(int),comparator);
       for(int i=1;i<n;i++)
       {
           for(int j=i-1;j>=0;j--)
           {
               if(a[i]>a[j]&&a[j]!=-1)
               {
                   a[j]=-1;
                   break;
               }
           }
       }
       int sum=0;
       for(int i=0;i<n;i++)
        if(a[i]!=-1)
        sum+=a[i];
       cout<<"Mininmum possible sum of skills of alive engineers: "<<sum;
       return 0;
}
