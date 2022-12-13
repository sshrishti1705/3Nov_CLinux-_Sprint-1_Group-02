/***************************************************************************
*                       MACROS
***************************************************************************/
#ifndef SCHEDULEMEETING_H
#define SCHEDULEMEETING_H




/***************************************************************************
*                       STRUCTURES
***************************************************************************/

typedef struct meetings                 /*Structure of type employee*/
{                          
	int meetingID;                         /*initialization of variables*/
	int orgEmpID; 
	char meetingDesc[50];
	int date;
	int meetingDur;
	char meetingStatus;
	int location;
	int numOfParticipant;
	struct meetings *next;

}MEET;
/***************************************************************************
*                       LOCAL FUNCTIONS
***************************************************************************/
                          /*Function call*/
MEET *scheduleMeeting(MEET * head);
int saveMeeting(MEET* head);
int tokenizeMeet(MEET *meet, char *tmpBuff[]);


#endif
/*END OF MACRO*/
