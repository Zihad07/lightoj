+/******************************************************************
+*                                      *                                                                                            *
+* zihadnayem8@gmail.com             *     *                          
+*                                      *                                                                                            *
+* Dept: CSTE in NSTU,bd                                     
+*                                      *                                                                                            *
+* Time : 564ms                      *     *                                                                                         *
+*                                      *                                                                                             *
+*******************************************************************/
#include<cstdio>
#include<iostream>
#define llu  unsigned long long
#define M 5000003

using namespace std;
llu phi[M];

  void calculatePhi() {
      ///calling phi function...
  for (llu i = 1; i < M; i++) {
    phi[i] = i;
  }
  for (llu p = 2; p < M; p++) {
    if (phi[p] == p) { // p is a prime
      for (llu k = p; k < M; k += p) {
        phi[k] -= phi[k] / p;
      }
    }
  }

 for(llu i=2;i<M;i++)
      {
          phi[i]=phi[i]*phi[i];
          phi[i]=phi[i]+phi[i-1];
      }
// for(ll i=0;i<M;i++)
//       printf("phi[%lld]=%lld\n",i,phi[i]);
//       cout<<endl;
}
// void sum()
//  {
////      for(llu i=2;i<M;i++)
////      {
////          phi[i]=phi[i]*phi[i];
////          phi[i]=phi[i]+phi[i-1];
////      }
////      for(ll i=0;i<M;i++)
////       printf("phi[%lld]=%lld\n",i,phi[i]);
//  }
int main()
{
    calculatePhi(); 

   /*calling phi function for creating relativ prime and sqare
    and summntion to the privous index value of phi fountion
    phi[i]=phi[i]*phi[i],
    phi[i]+=phi[i-1]
    print(phi[b]-phi[a-1])   where a<b.
    */

    int test;
    llu sum,a,b;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%llu %llu",&a,&b);
        if(a>b)
        {
            llu t=a;
            a=b;
            b=t;
        }


        printf("Case %d: %llu\n",i,phi[b]-phi[a-1]);
    }
    return 0;
}

