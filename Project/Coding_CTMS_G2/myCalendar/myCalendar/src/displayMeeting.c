#include <common.h>
#include <displayMeeting.h>

void displayMeeting()
{
    printf("\n\t\t=== Display Meetings ===\n  ");
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