#include <common.h>
#include <displayCalendar.h>

void displayCalendar()
{
    int dd, mm, yy;
	int date;
    printf("\nEnter start date (dd/mm/yy) : ") ;
	scanf("%d/%d/%d", &dd, &mm, &yy);
        
   	/*adding dd,mm,yy into date*/
	/*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
	*      *can be stored in 1 byte, 1 byte and in rest of 2 bytes
	*           *we can store year.*/
	date = 0;
	date |= (dd & 0xff); /*dd storing in byte 0*/
	date |= (mm & 0xff) << 8; /*mm storing in byte 1*/
	date |= (yy & 0xffff) << 16; /*yy storing in byte 2 and 3*/

    int dd1, mm1, yy1;
	int date1;
    printf("\nEnter end date (dd/mm/yy) : ") ;
	scanf("%d/%d/%d", &dd1, &mm1, &yy1);
        
   	/*adding dd,mm,yy into date*/
	/*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
	*      *can be stored in 1 byte, 1 byte and in rest of 2 bytes
	*           *we can store year.*/
	date1 = 0;
	date1 |= (dd & 0xff); /*dd storing in byte 0*/
	date1 |= (mm & 0xff) << 8; /*mm storing in byte 1*/
	date1 |= (yy & 0xffff) << 16; /*yy storing in byte 2 and 3*/

	
    printf("\n\t\t=== Display Calendar ===\n  ");
    FILE *fp ;       
	char str[80];
	fp = fopen("./data/meetings.txt","r+");
    if(fp == NULL)
	{    
           printf("\n\t******* No scheduled meeting..****** ");          
	} 
    printf("\n\n");	
	if(fgets(str, 80, fp) != NULL)
    {
    	puts(str);
    }
       
	fclose(fp);
}