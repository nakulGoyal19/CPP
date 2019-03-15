#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=a[0],maxSum=a[0],temp=0;

    for(int i=1;i<n;i++)
    {
        temp=sum+a[i];
        if(temp<a[i])
            sum=a[i];
        else
            sum=temp;
        if(sum>maxSum)
            maxSum=sum;
    }
    cout<<maxSum;
}
