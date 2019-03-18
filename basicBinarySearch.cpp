#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a[n];
 //array a[n] must be sorted to implement binary search.
 for(int i=0;i<n;i++)
  cin>>a[i];
  int find;
  cin>>find;
 int l=0,r=n-1,m;
 while(l<=r)
 {
   m=(l+r)/2;
   if(l==r && m!=find)
   {
       l=0;
       break;
   }
   if(m==find)
        {l=m;break;}
   else if(find>m)
    l=m+1;
   else
    r=m-1;
 }
 cout<<"Index of "<<find<<" in an array is "<<l-1;
}
