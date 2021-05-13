#include <iostream>
// number of primes
using namespace std;
   int a[1000];
   int N=1000;
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
    int n;
    cout<<"Enter  any intger to list of primes";
    cin>>n;
    if(n>=1 && n<=1000)
    {
    for(int i=0;i<n;i++)
    {   if(a[i]==1)
       {  cout<<i<<"\t";
         }
    }
    }
    
    return 0;
}
