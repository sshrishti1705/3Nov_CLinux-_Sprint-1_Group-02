/***************************************************************************
*                       MACROS
***************************************************************************/
#ifndef LOGIN_H
#define LOGIN_H




/***************************************************************************
*                       STRUCTURES
***************************************************************************/



typedef struct employee                 /*Structure of type employee*/
{                          
	int employeeID;                         /*initialization of variables*/
	char employeePassword[10];
	char employeeName[50];
	char department[10];
	long mobileNumber;
	char email[30];
	char skypeID[20];
	struct employee *next;

}EMP;
/***************************************************************************
*                       LOCAL FUNCTIONS
***************************************************************************/
                          /*Function call*/
int login();
void maskpassword (char password[]);
void encrypt (char password[], int key);
void decrypt (char password[], int key);

#endif
/*END OF MACRO*/
