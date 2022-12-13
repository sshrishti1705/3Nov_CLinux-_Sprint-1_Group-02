#include <common.h>
#include <scheduleMeeting.h>
#include <participants.h>

/*function to store meeting info. */
MEET * scheduleMeeting(MEET * head)
{
	system("clear");
	MEET *newNode = NULL;
    MEET *tmpNode = NULL;	
	tmpNode = head;

	newNode = (MEET *)malloc (sizeof(MEET) );
	newNode ->next = NULL;
	
	if(head == NULL)
	{
		tmpNode = newNode;
		head = newNode;
	}
	else
	{
		while(head ->next != NULL)
		{
			head = head ->next;
		}
		head ->next = newNode;
		head = head->next;
	}
	printf("\n\t########################Schedule Meeting#############################\n");
	printf("\n\tEnter Meeting ID : ");
	scanf("%d", &newNode->meetingID);
	printf("\n\tEnter Org. Employee ID : ");
	scanf("%d", &newNode->orgEmpID );
	printf("\n\tEnter Meeting Description : ");
	getchar();
	fgets( &newNode->meetingDesc , 30, stdin ); 
	printf("\n\tEnter Date - DD/MM/YY format : ");
	int dd, mm, yy;
	int dateTmp;
	scanf("%d/%d/%d", &dd, &mm, &yy);
        
   	 /*adding dd,mm,yy into date*/
	 /*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
	*      *can be stored in 1 byte, 1 byte and in rest of 2 bytes
	*           *we can store year.*/
	dateTmp = 0;
	dateTmp |= (dd & 0xff); /*dd storing in byte 0*/
	dateTmp |= (mm & 0xff) << 8; /*mm storing in byte 1*/
	dateTmp |= (yy & 0xffff) << 16; /*yy storing in byte 2 and 3*/

	newNode->date=dateTmp;
	printf("\n\tEnter Meeting Duration (in minutes ) : ");
	scanf("%d", &newNode->meetingDur );	
	printf("\n\tEnter Meeting Status (a character value) : ");
	getchar();
	scanf("%c", &newNode->meetingStatus );
	printf("\n\tEnter Location 1 - Google Meet , 2 - MS Team , 3 -Zoom Team : ");
	scanf("%d", &newNode->location );
	printf("\n\tEnter Number of Participants : "); 
	scanf("%d", &newNode->numOfParticipant );
	
	/* data for participants.txt */

	PART *newNode1 = NULL;
	PART *tmpNode1 = NULL;
	tmpNode = head ;
	newNode1 = (PART *)malloc (sizeof(PART) );
    newNode1 ->next = NULL;
	
	newNode1->meetingID = newNode->meetingID;
	newNode1->empID = newNode->orgEmpID;
	newNode1->notificationSent = 'N';
	newNode1->responseRecieved = 'N';
	strcpy(newNode1->responseType , " ");
	newNode1->next = NULL;

	FILE *fp = NULL ;
        fp = fopen("./data/participants.txt","wt");
        fseek(fp, 0L, SEEK_END );
        if(head == NULL )
        {
              printf("\n\t No Records Present \n");
        }
        while(head != NULL)
        {
            fprintf(fp,"%d %d %c %c %s ", newNode1->meetingID ,newNode1->empID ,newNode1->notificationSent ,newNode1->responseRecieved, newNode1->responseType );
            head = head->next;
        }
         fclose(fp);
	return tmpNode;
}

/* function to store meeting in file */ 
int saveMeeting(MEET* head)
{
	FILE *fp = NULL ;
	fp = fopen("./data/meetings.txt","wt");
	fseek(fp, 0L, SEEK_END );
	if(head == NULL )
	{
		printf("\n\t No Records Present \n");
	}
	while(head != NULL)
	{
		fprintf(fp,"%d %d %s %d %d %c %d %d ", head->meetingID ,head->orgEmpID ,head->meetingDesc ,head->date, head->meetingDur, head->meetingStatus, head->location, head->numOfParticipant );
	    head = head->next;	
	}
	fclose(fp);
	return 0;
}	

/*
MEET *loadMeetingDetails()
{
	FILE *fp = NULL ;
	MEET *newNode =  (MEET *)malloc(sizeof(MEET));
	MEET *head = NULL;
	MEET *meet;
	int fSize = 0;
	char *tmpBuff[1024] = {'\0' };
	fp = fopen("./data/meetings.txt ","r");
	if(fp == NULL )
	{
		perror("\n\tfopen() " );
		return NULL ;
	}
	fseek(fp , 0L, SEEK_SET );
	fseek(fp , 0L, SEEK_END );
        fSize = ftell(fp);

	if(fSize == 0)
	{
		head = NULL;
	}	
	else
	{
		fseek(fp,0L , SEEK_SET );
		memset(tmpBuff , '\0' ,MAX );
		while(fgets(tmpBuff , MAX , fp) )
		{
		if(head == NULL )
		{
		newNode->next = NULL;
		head = newNode ;
		meet = newNode ;
		int ret=tokenizeMeet(newNode, tmpBuff );
		}
		else
		{
	        newNode->next = NULL;
		meet->next = newNode;
		int ret=tokenizeMeet(newNode, tmpBuff );
		meet = meet->next;
		}
		memset(tmpBuff,'\0', MAX);
		}
	}
	fclose(fp);
	return head;
}

int tokenizeMeet(MEET *meet, char *tmpBuff[])
{
	char *tokens;
	
	if(tmpBuff != NULL)
	{
	tokens = strtok(tmpBuff, ",");
	meet->meetingID = atoi(tokens);
	tokens = strtok(tmpBuff, ",");
	meet->orgEmpID = atoi(tokens);
//	tokens = strtok(tmpBuff, ",");
//	strcpy(meet->meetingDesc, tokens ) ;
//	tokens = strtok(tmpBuff, ",");
//	meet->meetingStatus = *tokens;
	tokens = strtok(tmpBuff, ",");
	meet->location = atoi(tokens);
	tokens = strtok(tmpBuff, ",");
         meet->numOfParticipant = atoi(tokens);


/*	removeLeading(tokens,meet->meetingID);
	tokens = strtok(tmpBuff, ",");
	removeLeading(tokens,trip->dst);
	tokens = strtok(tmpBuff, ",");
	removeLeading(tokens,meet->date);

	}

return 0;
}

*/







