// AC , ALGO : STACK , POSTFIX

#include<iostream>
#include<cstring>

using namespace std ;

int main( )
{
    int i , j , top , t ;
    char str[401] , stack[401] , ans[401] ;
    
    cin >> t ;
    t += 1 ;
    
    while( t-- )
    {
            gets( str ) ;
            
            i = j = top = 0 ;
            
            while( str[i] != '\0' )
            {
                    if( str[i] == '(' || str[i] == '-' || str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '^' || str[i] == ')' )
                    {
                            stack[top] = str[i] ;
                            top += 1 ;
                    }
                    else
                    {
                            ans[j] = str[i] ;
                            j += 1 ;
                    }
                    if( stack[top-1] == ')' )
                    {
                            top -= 2 ;
                            ans[j] = stack[top] ;
                            top -= 1 ;
                            j += 1 ;
                    }
                    i += 1 ;
            }
            ans[j] = '\0' ;
            
            puts( ans ) ;
    }
    return 0 ;
}