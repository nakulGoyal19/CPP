#include<iostream>
using namespace std;
int main()
{
int a;
cin>>a;
int usedBits;
for(int i=0;i<=31;i++)
if(a&(1<<i))
usedBits=i;
usedBits=usedBits+1;
cout<<"used_bits for "<<a<<" are "<<usedBits<<endl;

if(a&a-1)
    cout<<a <<" is not power of 2"<<endl;
else cout<<a <<" is power of 2"<<endl;

int x=a>>1&0x55555555;
int y=a<<1&0xAAAAAAAA;
int Alt_swap=x|y;
cout<<"After swaping adjacent pairs "<<a<<" is "<<Alt_swap<<endl;

int negateUsedBits=(~a&~(-1<<(usedBits)));
cout<<a<<" after negating the used bits = "<<negateUsedBits;


}
