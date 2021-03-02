#include <stdio.h>

void main()
{
    int s[100];
    int d[100];
    int t[100];
    
    printf( "enter time:  ");
    gets( t[100] );
    
    printf("enter distance:  ");
    gets( d[100] );
    
    s[100]=d[100]/t[100];
    
    printf("%d", s[100]);
}
