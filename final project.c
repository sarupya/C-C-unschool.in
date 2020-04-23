#include<stdio.h>
#include<math.h>
#include<conio.h>

#define TRUE    1
#define FALSE   0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};


int inputyear(void)
{
	int year;

	printf("Please enter a year (example: 1999) : ");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;

	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;

	return daycode;
}


int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );

			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;
	}
}


int main(void)
{
	int num,year, daycode, leapyear;


    printf("enter 1 to print calender and 2 to know the day");
    scanf("%d",&num);
    if(num==1)
    {
        year = inputyear();
	daycode = determinedaycode(year);
    printf("%d",daycode);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
    }

    else if(num==2)
    {
                int dat, mont, years;
                  printf("Enter the year : ");
                  scanf("%d", &years);
                  printf("\n Enter the month : ");
                  scanf("%d", &mont);
                  printf("\n Enter the date : ");
                  scanf("%d", &dat);
                  weekday(dat, mont, years);
                  return 0;
    }
else
{
    printf("invalid");
}
}
        int weekday(int date, int month, int year)

        {
           int dayWeek, yr, yd;
           yr = year % 100;
           yd = year / 100;
           printf("\nThe Date Given is : %d / %d / %d \n\n", date, month, year);
           dayWeek = 1.25 * yr + findm(month, year) + date - 2 * (yd % 4);
           dayWeek = dayWeek % 7;
           switch (dayWeek){
           case 0:  printf("Day of Week of the Date is : Saturday");
                        break;
           case 1:  printf("Day of Week of the Date is : Sunday");
                        break;
           case 2:  printf("Day of Week of the Date is : Monday");
                        break;
           case 3:  printf("Day of Week of the Date is : Tuesday");
                        break;
           case 4:  printf("Day of Week of the Date is : Wednesday");
                        break;
           case 5:  printf("Day of Week of the Date is : Thursday");
                        break;
           case 6:  printf("Day of Week of the Date is : Friday");
                        break;
           default:  printf("The Given input data is wrong");
           }
           return 0;
           }
    int findm(int months, int yearss)
    {
           int findmonth, leapyr;
           if ((yearss % 100 == 0) && (yearss % 400 != 0))
           leapyr = 0;
           else if (yearss % 4 == 0)
           leapyr = 1;
           else
           leapyr = 0;
           findmonth = 3 + (2 - leapyr) * ((months + 2) / (2 * months))
+ (5 * months + months / 9) / 2;
           findmonth = findmonth % 7;
           return findmonth;
    }




