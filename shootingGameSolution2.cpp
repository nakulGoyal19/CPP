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
        int sum=0,max=n-1;
       for(int i=n-1;i>0;i--)
       {
          if(a[i]<a[max])
            max--;
            else
            sum+=a[i];
       }
       cout<<"Mininmum possible sum of skills of alive engineers: "<<sum;
       return 0;
}
