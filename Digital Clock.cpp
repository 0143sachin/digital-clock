#include<stdio.h>     //for printf()
#include<conio.h>     //for getch()
#include<windows.h>   //for delay function
int main()
{
	int hr,min,sec;
	int d=1000;      // for adding delay of 1000 ms and it will be used in sleep functions.
	printf("Enter Current time( in HH:MM:SS): \n");
	scanf("%d%d%d",&hr,&min,&sec);
	
	if(hr>12 || min>60 || sec>60)
	{
		printf("!!ERROR!!");
		exit(0);
	}
	while(1)         //Infinite loop
	{
		sec++;
		if(sec>59)
		{
			min++;
			sec=0;
		}
		if(min>59)
		{
			hr++;
			min=0;
		}
		if(hr>12)
		{
			hr=1;
		}
		printf("\n Clock : ");
		printf("\n %02d:%02d:%02d",hr,min,sec);
		Sleep(d);             // here sleep functions slow down the while loop and make it more like a real clock
		system("cls");        // for clearing the screen
	}
}
