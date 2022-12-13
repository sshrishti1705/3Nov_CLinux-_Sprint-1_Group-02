/***********************************************************
** FILENAME : common.c
**
** DESCRIPTION: Perform the function for Main Menu Calendar Menu
**
** Revision History :
** DATE                NAME            REFERENCE          REASON
** ----------------------------------------------------------------------
** 24 NOV 2022         GROUP 2       	 New        Initial Creation
**
**
** Copyright @ 2019 Altran Group All Rights Reserved
**
***********************************************************/
#include <common.h>

/******************************************************************************
*
*       Function Name   : mainMenu
*
*       Description     : Display the Main Menu
*
*       Returns         : Success
*
*******************************************************************************/

int mainMenu()
{
	int ch;
	printf("\n\t*******************************************************\n");
	printf("\n\t            WELCOME TO My Calendar Schedule           \n");
	printf("\n\t*******************************************************\n");
	printf("\n\t==================EMPLOYEE LOGIN========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. Login");
	printf("\n\t2. Exit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;
}


/******************************************************************************
*
*       Function Name   : Calendar Menu
*
*       Description     : Display the Calendar Menu
*
*       Returns         : Success
*
*******************************************************************************/

int CalendarMenu()
{
	system("clear");
	int ch;
	printf("\n\t==================Calendar Menu========================\n");
	printf("\n\t1. Schedule Meeting");
	printf("\n\t2. Send Notification");
	printf("\n\t3. Send Reply");
	printf("\n\t4. Display Calendar");
	printf("\n\t5. Display Meeting");
	printf("\n\t6. Cancel Meeting");
	printf("\n\t0. Quit");
	printf("\n\tEnter Choice: ");
	scanf("%d",&ch);
	return ch;
}


/******************************************************************************
*
*       Function Name   : removeLeading
*
*       Description     : Removing the space
*
*       Returns         : Success
*
*******************************************************************************/

void removeLeading(char *str, char *str1)
{
    int idx = 0, j, k = 0;

    /* Iterate String until last */
    /* leading space character*/
    while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
    {
        idx++;
    }

    /* Run a for loop from index until the original */
    /* string ends and copy the content of str to str1*/
    for (j = idx; str[j] != '\0'; j++)
    {
        str1[k] = str[j];
        k++;
    }

    /* Insert a string terminating character */
    /* at the end of new string */
    str1[k] = '\0';

}

/******************************************************************************
*
*       Function Name   : removeTrailing
*
*       Description     : Removing the space
*
*       Returns         : Success
*
*******************************************************************************/

void removeTrailing(char *str)
{
	if((str[strlen(str)-1] == ' ' || str[strlen(str)-1] == '\t' || str[strlen(str)-1] == '\n'))
    {
    	str[strlen(str)-1] = '\0';
    }

}

