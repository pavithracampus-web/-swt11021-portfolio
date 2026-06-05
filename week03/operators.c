#include <stdio.h>
int main(){
    int a = 20;
    int b = 15;
    /*arithmetic operators*/
    printf("=========Arithmetic operators==============\n");
    printf("addition of a & B = %d\n", a+b);
    printf("subtraction of a & B = %d\n", a-b);
    printf("multiplication of a & B = %d\n", a*b);
    printf("division of a & B = %d\n", a/b);
    printf("remainder of a & B = %d\n", a%b);
    /*relational operators */
    printf("===============Relational operators==========\n");
    printf("a==b =%d\n",a==b);//equal
    printf("a!=b =%d\n",a!=b);//not equal
    printf("a>b =%d\n",a>b);//greater than
    printf("a<b =%d\n",a<b);//less than
    printf("a>=b =%d\n",a>=b);//greater than or equal to
    printf("a<=b =%d\n",a<=b);//less than or equal to
    /*Logical operators*/
    printf("=============Logical operators=============\n");
    printf("a&&b =%d\n",a&&b);//logical AND
    printf("a||b =%d\n",a||b);//logical OR
    printf("!a =%d\n",!a);//logical NOT

    /*Bitwise operators*/
    printf("============Bitwise operators===============\n");
    printf("a&b =%d\n",a&b);//bitwise AND 10100 & 01111 = 00100 = 4
    printf("a|b =%d\n",a|b);//bitwise OR 10100 | 01111 = 11111 = 15
    printf("a^b =%d\n",a^b);//bitwise XOR   10100 ^ 01111 = 11011 = 27
    printf("~a =%d\n",~a);//bitwise NOT 
    printf("a<<1 =%d\n",a<<1);//left shift
    printf("a>>1 =%d\n",a>>1);//right shift
    printf("a<<b =%d\n",a<<b);//left shift
    printf("a>>b =%d\n",a>>b);//right shift

    return 0;


}

