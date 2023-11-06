// #include<stdio.h>

// int main (){
//   printf("hello world\n");
//   return 0;
// }

#include<stdio.h>
#include<conio.h>
int main()
{
        int n, first = 0,second = 1, next , i =2;

        printf("enter the value of n : ");
        scanf("%d \n", &n);

        printf("fibonacci series up to %d terms : %d, %d, ", n, first, second);
        do{
            next = first + second;
            printf("%d, ", next);
            first = second;
            second = next;
            i++;
        
        }
        while (i < n);
        {
        printf("\n");
     
        }
        return 0;
  
}