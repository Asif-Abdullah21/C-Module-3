// #include<stdio.h>
// int main()
// {
//     int i;//for loop
//     for(i=1;i<=5;i=i+1)//i++-> i=i+1
//     {
//         printf("I am sorry\n");
//     }
  
// }

// #include<stdio.h>
// int main()
// {
//     int i;//for loop
//     for(i=1;i<=5;i++)//i++-> i=i+1
//     {
//         printf("%d ",i);
//     }
  
// }

// #include<stdio.h>
// int main()
// {
//     int i;//for loop
//     for(i=1;i<=20;i=i+2)//i++-> i=i+1
//     {
//         printf("%d ",i);
//     }
  
// }

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=20;i=i*2)//i++-> i=i+1
//     {
//         printf("%d ",i);
//     }
  
// }


#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//i++-> i=i+1
    {
        sum +=i;
    }

    printf("%d\n",sum);
  
}