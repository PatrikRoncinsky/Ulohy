/*
Autor: Patrik Ron�insk�, 1.N
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,e,f,g;
	
    printf("Zadaj rozmer trojuholnika: ");
    scanf("%d %d %d",&a,&b,&c);
    e=(a+b);
    f=(b+c);
    g=(c+a);
    if ((a<=0) or (b<=0) or (c<=0))
    
    {
        printf("Trojuholnik nieje mo�n� zostrojit");
	}
    else
    {
		if ((e<=c) or (f<=a) or (g<=b))
    	{
    	    printf("Trojuholnik nieje mo�n� zostrojit");
		}
		else
		{
		    printf("Trojuholnik je mo�n� zostrojit");
		}
	}
}

