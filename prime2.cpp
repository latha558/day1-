#include <iostream>
// number of primes
using namespace std;
   int a[1000000];
   int N=1000000;
   void gen_seive(){
       int i,j;
       for(i=0;i<N;i++) a[i]=1;
       a[0]=0;a[1]=0;
             for(i=2;i*i<N;i++){
       if (a[i]==1)
       {        for(j=i*i;j<=N;j+=i)
       
             a[j]=0;
       } }
   }

int main()
{
    gen_seive();
    int q,co=0;
    cout<<"Enter  any intger to count primes";
    cin>>q;
    if(q>=1 && q<=1000000)
    {
    for(int i=0;i<q;i++)
    {   if(a[i]==1)
       {  cout<<i<<"\t";
          co++;}
    }
    }
    cout<<"\n No of Primes\t"<<co;
    return 0;
}
