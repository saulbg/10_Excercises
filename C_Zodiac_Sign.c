///5. Write a program that display the Zodiacal Sign using the day and month of birth.
#include <stdio.h>
 
int main()
{	
	///Initiates variables
	int day;
	int month;
	int year;
	
	///Prompt user input:	Asks for birthday in day/month/year 
	printf("Input your birthday using integers:(d/m/yyyy)"); ///; the year is irrelevant but I think it looks better like this lol.
	scanf("%d/%d/%d",&day,&month,&year);
	
	///Output and process:	Checks every month and day range to see if any match a Zodiac Sign
	if((month==3) && (21<=day) && (day<=31))
	{
		printf("Aries");
	}
	else if((month==4) && (1<=day) && (day<=19))
	{
		printf("Aries");
	}


	else if((month==4) && (20<=day) && (day<=30))
	{
		printf("Taurus");
	}
	else if((month==5) && (1<=day) && (day<=20))
	{
		printf("Taurus");
	}


	else if((month==5) && (21<=day) && (day<=31))
	{
		printf("Gemini");
	}
	else if((month==6) && (1<=day) && (day<=20))
	{
		printf("Gemini");
	}

	else if((month==6) && (21<=day) && (day<=30))
	{
		printf("Cancer");
	}
	else if((month==7) && (1<=day) && (day<=22))
	{
		printf("Cancer");
	}


	else if((month==7) && (23<=day) && (day<=31))
	{
		printf("Leo");
	}
	else if((month==8) && (1<=day) && (day<=22))
	{
		printf("Leo");
	}


	else if((month==8) && (23<=day) && (day<=31))
	{
		printf("Virgo");
	}
	else if((month==9) && (1<=day) && (day<=22))
	{
		printf("Virgo");
	}


	else if((month==9) && (23<=day) && (day<=30))
	{
		printf("Libra");
	}
	else if((month==10) && (1<=day) && (day<=22))
	{
		printf("Libra");
	}


	else if((month==10) && (23<=day) && (day<=31))
	{
		printf("Scorpio");
	}
	else if((month==11) && (1<=day) && (day<=21))
	{
		printf("Scorpio");
	}


	else if((month==11) && (22<=day) && (day<=30))
	{
		printf("Sagittarius");
	}
	else if((month==12) && (1<=day) && (day<=21))
	{
		printf("Sagittarius");
	}


	else if((month==12) && (22<=day) && (day<=31))
	{
		printf("Capricorn");
	}
	else if((month==1) && (1<=day) && (day<=19))
	{
		printf("Capricorn");
	}


	else if((month==1) && (20<=day) && (day<=31))
	{
		printf("Aquarius");
	}
	else if((month==2) && (1<=day) && (day<=18))
	{
		printf("Aquarius");
	}


	else if((month==2) && (19<=day) && (day<=29))
	{
		printf("Pisces");
	}
	else if((month==3) && (1<=day) && (day<=20))
	{
		printf("Pisces");
	}


	
	return 0;
}
