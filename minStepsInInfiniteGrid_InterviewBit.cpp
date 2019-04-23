int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int i,c=0,a,b,x;
    for(i=0;i<A.size()-1;i++)
    {
        a=A[i+1]-A[i];
        if(a<0)
        a=-a;
        b=B[i+1]-B[i];
        if(b<0)
        b=-b;
        x=a>b?a:b;
        c+=x;
    }
    return c;
}
