#include<stdio.h>

typedef enum state
{
    add,
    sub,
    mul,
    div,
    max,
}state_t;

/* Created the function ptr and set the name as func_ptr_int */
typedef state_t (*func_ptr_int)(int,int,int*);

state_t function_add(int x,int y,int *z)
{
 *z=x+y;
 return 1;
}

state_t function_sub(int x,int y,int *z)
{
 *z=x-y;
 return 2;
}

state_t function_mul(int x,int y,int *z)
{
 *z=x*y;
 return 3;
}

state_t function_div(int x,int y,int *z)
{
 *z=x/y;
 return 4;
}

 func_ptr_int maths[max]=
 {
  function_add, 
  function_sub,
  function_mul,
  function_div
};

int main()
{
 
 int a=10,b=20;
 int sum;
 int x=0;
 while(x!=5){
 x = maths[x](a,b,&sum);
//   int (*func_ptr_int)(int,int,int*) = &function_add;
// (*func_ptr_int)(a,b,&sum);
 printf("Sum is %d\n",sum);
 }
  return 0;
}