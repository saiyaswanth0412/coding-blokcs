#include<stdio.h>
int main()
{
    int a[5],i,flag=1;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==2){
        flag=0;
        break;
        }
    }
    if(a[0]==5||a[1]==5||a[2]==5||a[3]==5||a[4]==5)
      {
        flag=0;
      }
      float avg=(a[0]+a[1]+a[2]+a[3]+a[4])/5.0;
    if(avg<4.0)
    {
        flag=0;
    }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
