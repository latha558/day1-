#include <iostream>

using namespace std;
// count number of primes

   int a[101];
   int N=101;
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
    cout<<"Enter range to check 1 to 101";
    cin>>q;
    if(q>=1 && q<=101)
    {
    for(int i=0;i<q;i++)
    {   if(a[i]==1)
        { cout<<i<<"\t";co++; }
    }
    }
    cout<<"\n No.of Primes\t"<<co;
    return 0;
}
