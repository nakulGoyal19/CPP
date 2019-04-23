int Solution::maxSubArray(const vector<int> &A) {
    int sum=A[0],max=A[0];
    for(int i=1;i<A.size();i++)
    {
        int temp;
        temp=sum+A[i];
        if(A[i]>temp)
        sum=A[i];
        else
        sum=temp;
        if(sum>max)
        max=sum;
    }
    return max;
}
