#include <stdio.h>

int main() {
    printf("arithmatic progration\n");
    int a,b,sum,difference,multi;
    printf("a=");
    scanf("%d",&a);    
    printf("b=");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    multi=a*b;
    float divide=(float)a/b;
    printf("sum =%d\n",sum);    
    printf("difference =%d\n",difference);
    printf("multiply =%d\n", multi);
    printf("divide =%.2f\n",divide);    
    return 0;

}