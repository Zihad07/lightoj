/******************************************************************
*                                      *                                                                                            *
* zihadnayem8@gmail.com             *     *                          
*                                      *                                                                                            *
* Dept: CSTE in NSTU,bd                                     
*                                      *                                                                                            *
*                                   *     *                                                                                         *
*                                      *                                                                                             *
*******************************************************************/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define max 1000001
int arr[max];
int mad()
{
    int N,m,ans=0;
    memset(arr,0,sizeof(arr));
    scanf("%d",&N);
   for(int i=1;i<=N;i++)
   {
       scanf("%d",&m);
       arr[m]++;
       if(arr[m]==m+1)
       {
           ans=ans+m+1;
           arr[m]=0;
       }
    }
    for(int i=0;i<max;i++)
    {
        if(arr[i]!=0)
            ans=ans+i+1;
    }
    return ans;
}

int main()
{
    int t,ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        ans=mad();
        printf("Case %d: %d\n",i,ans);
    }
}
