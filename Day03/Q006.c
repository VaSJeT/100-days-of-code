#include <stdio.h>

int main() {
    int a,b,temp;
    printf("no. a=");
    scanf("%d", &a);
    printf("no. b=");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("swaping a= %d, b=%d", a,b);
    return 0;

}