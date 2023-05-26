#include<stdio.h>

main()
{
	char ch[]="amisha gohil";
	int i;
	
	for(i=0;ch[i]!=NULL;i++)
	{
	    ch[i]=ch[i]-32;
	    printf("%c",ch[i]);
    }
	

}
