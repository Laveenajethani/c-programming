/*allocation of memory using keyword delete and deallocation of memory using delete keyword*/
#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;
    p=new(nothrow)int;
    if(!p)
      cout<<"allocation of memory is failed";
    else
    {
        *p=29;
        cout<<"value of P:"<<*p<<endl;
    }
    float *r=new float(75.25);
    cout<<"value of r:"<<*r<<endl;
    int n=5;
    int *q=new(nothrow)int[n];
    if(!q)
        cout<<"allocation of memory failed\n".;
    else
    {
        for(int i=0;i<n;i++)
            q[i]=i+1;
        cout<<"value store in block of memory\n";
        for(int i=0;i<n;i++)
            cout<<q[i]<<"";
    }
    delete p;
    delete r;
    delete []q;
    return 0;
}
