#include <common.h>
#include <sendNotification.h>

void sendNotification()
{    
    printf("\n\t\t=== List of Meetings ===\n  ");
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
    int mid ;  //variable to store entered meeting id
    printf("\n\tEnter Meeting ID : ");
    scanf("%d", &mid) ;
    if (remove("./data/notifications.txt") == 0)
		printf("\n\t Notification Sent !!!!");
	else
		printf("\n\n\tUnable to Send Notifications !!!!");
     
}
