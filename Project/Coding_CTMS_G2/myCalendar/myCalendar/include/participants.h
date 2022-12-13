/***************************************************************************
*                       MACROS
***************************************************************************/
#ifndef PARTICIPANTS_H
#define PARTICIPANTS_H




/***************************************************************************
*                       STRUCTURES
***************************************************************************/

typedef struct participants             /*Structure of type employee*/
{                          
    int meetingID;            	/*inialization of variables*/
	int empID; 
	char notificationSent;
	char responseRecieved;
	char responseType[6];
	struct participants *next;

}PART;
/***************************************************************************
*                       LOCAL FUNCTIONS
***************************************************************************/
                          /*Function call*/



#endif
/*END OF MACRO*/
