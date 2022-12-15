  
#include<stdio.h>

main()
{
	
	char a;
	printf("INFO ABOUT DAYS\n\n");
	printf("m for Monday \nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday \n\n");
	printf("ENTER THE DAY WORD : ");
	scanf("%c",&a);	
	
	switch(a)
{

case 'm':
	printf("Monday \n");
break;

case 't':
printf("Tuesday \n");
break;

case 'w':
	printf("Wednesday \n");
break;

case 'h':
	printf("Thursday \n");
break;

case 'f ':
	printf("Friday \n");
break;

case 's':
	printf("Saturday \n");
break;

case 'u':
	printf("Sunday \n");
break;

default: 
	printf("wrong input \n");
break;	
}

}
