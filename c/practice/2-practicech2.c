#include<stdio.h>

 int main(){
    // q1 which of the following is invalid in c ?

    //1. inta ;b =a;
    //2. int  v= 3^3;
    // 3. char dt '21 dec 2020';

     //1//
   //  int a ; int b = a; //valid
   //  return 0;

    //2// 
   //int v= 3^3 ; //valid
   // printf("%d", v);
    //return 0;

    //3 is invalid 
   
  //  char dt '2'; //valid buy the way only  one num is work//  

  //ans : double//

//   int v = 3^3;
//   float d=(3.0/8-2);
//   printf("%d\n", v);
//   printf("%f \n",d);
//   return 0;





    // q2 what data type will 3.0/8-2 return?//
     //ans : double//

//   int v = 3^3;
//   float d=(3.0/8-2);
//   printf("%d\n", v);
//   printf("%f \n",d);
//   return 0;

     // q3 program to check whether a number  is divisible  by 97 or not //
  //ans yes//

//   int num;
//   printf("enter the number \n ");
//   scanf("%d", &num);
//   printf("divisibility test returns : %d \n ", num %97);
//   return 0;

    //q4 step by step evaluation of 3*x/y-z+k

    int x=2 , y=3, z=3, k=1;
    int result = 3 * x / y - z + k ;
   //  6/3 - 3+1
   //  2-3+1
   //  0
   printf("the value of result is %d ", result);
   return 0;
   
}