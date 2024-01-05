
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char a[10],b[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&a[i]);
    }
    
   // puts(a);
    for (int i = 0, j = 9 ; j >= 0, i < 10 ; i++, j--)
    {
        b[i] = a[j];
    }
	
    // for(int i=10, j=0; i>0; j--,j++){
    //     b[j] = a[i];
    // }
     //puts(b);
    for (int i = 0; i < 10; i++)
    {
        printf("%c",b[i]);
    }

}
