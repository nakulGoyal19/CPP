vector<int> Solution::plusOne(vector<int> &A) {
    if(A[A.size()-1]!=9)
    {
        A[A.size()-1]+=1;
    }
    else
    {
        for(int i=A.size()-1;i>=0;i--)
        {
            if(A[i]==9)
            {A[i]=0;}
            else
            {
                A[i]+=1;break;
            }
        }
        int c=0;
       for(int i=0;i<A.size()-1;i++)
       {
           if(A[i]!=0)
           {c=1;break;}
       }
       if(c==0)
       A.insert(A.begin(),1);
    }
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]==0)
        {
            A.erase(A.begin());i--;
        }
        else
        break;
    }
    return A;
}
