#include<stdio.h>  
const int x = 32;  
char *toUpperCase(char *a)  
{  
    for (int i=0; a[i]!='\0'; i++)  
        a[i] = a[i] & ~x;  
    return a;  
}
int main()  
{  
    char str[] = "SanjaYKannA";  
    printf("%s", toUpperCase(str));  
    return 0;  
}  