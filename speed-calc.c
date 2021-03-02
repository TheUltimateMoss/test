#include <stdio.h>

void main()
{
    int s[1];
    int d[1];
    int t[1];
    
    printf( "enter time:  ");
    gets( t[100] );
    
    printf("enter distance:  ");
    gets( d[100] );
    
    s[100]=d[100]/t[100];
    
    printf("%d", s[100]);
}
