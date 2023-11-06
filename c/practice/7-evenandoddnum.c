#include <stdio.h>

int main(){


    // -------odd and even----//

    // int  a, b;
    // printf("enter a number \n ");
    // scanf("%d", &a);

    // if (a % 2==0)
    // {
    //     printf("%d is even\n ", a);
    // }
    // else
    // {
    //     printf("%d is odd\n ", a);
    // }
    // return 0;

    ////-----------age-----///

    int age;
    printf("enter your age \n");
    scanf("%d", &age );
    if (age>90){
        printf("you are above 90, you cannot drive ");
    }
    else{
        printf("you can drive");
    }

    if (age==50)
    {
        printf("its my half century");
    }
    
 
 
    return 0;

}