vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int l;
    if(A.size()%2==0)
    l=A.size();
    else
    l=A.size()-1;

    for(int i=0;i<l;i=i+2)
    {
        int p=A[i];A[i]=A[i+1];A[i+1]=p;
    }
    return A;
}
