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


// #include<stdio.h>
// int main()
// {
//     int i,n;
//     long long sum=0;//loop chara 1---n prjnto sum (n*(n+1))/2 krlei hoy
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)//i++-> i=i+1
//     {
//         sum +=i;
//     }

//     printf("%d\n",sum);
  
// }


// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)//i++-> i=i+1
//     {
//         if(i%2==0) printf("%d - Even\n",i);
//         else printf("%d - Odd\n",i);
//     }

// }

#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)//i++-> i=i+1
    {
        printf("%d\n",i);
        
        if(i==5)
        {
            break;
        }
    }

}