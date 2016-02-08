//zihadnayem8@gmail.com
//NSTU,in DEPT: CSTE.


#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;


int main()
{
  int test,n,t;
  char name[10];
  cin>>test;
  for(int i=1;i<=test;i++)
  {
      scanf("%d %s",&n,name);
      if(strcmp("Alice",name)==0)
      {

          if(n%3==1)
          {
              printf("Case %d: Bob\n",i);
              continue;
          }
          else
          {
              printf("Case %d: Alice\n",i);
              continue;
          }
      }
      else
      {

          if(n%3==0)
          {
              printf("Case %d: Alice\n",i);
              continue;
          }
          else
          {
              printf("Case %d: Bob\n",i);
              continue;
          }
      }
  }

    return 0;
}
