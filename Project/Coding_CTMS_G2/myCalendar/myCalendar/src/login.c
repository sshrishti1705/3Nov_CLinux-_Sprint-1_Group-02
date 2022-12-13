#include<common.h>
#include<login.h>
#include <cancelMeeting.h>
#include <scheduleMeeting.h>
#include <sendNotification.h>
#include <displayCalendar.h>
#include <displayMeeting.h>

int login ()
{
        int emp;
        char password[10];
	
	MEET *meetHead = NULL;

        printf("Enter employee ID: \n");
        scanf("%d",&emp);
        getchar();
        printf("Enter password: \n");
        maskpassword(password);
/*    encrypt(password,7738);
      printf("\n%s ", password);
      decrypt(password,7738);
      printf("%s",password);
*/  
	int a;
        if ((emp == 1234 && strcmp(password,"sejal")==0 ) || ( emp == 5678 && strcmp(password,"ankit")==0 ) || ( emp == 2000 && strcmp(password,"shrishti")==0 ) )
		{
                printf("\n\n\t******** Succesfully login ********\n\n");
                a = CalendarMenu();
		switch(a)
		{
			case 1: 
				meetHead = scheduleMeeting(meetHead);
				saveMeeting(meetHead);
				printf("\n\t You have successfully scheduled Meeting !!!\n");
				a = CalendarMenu();
			    break;	
			case 2:
				sendNotification();
				a = CalendarMenu();
				break;

		//	case 3:
			case 4:
				displayCalendar();
				a = CalendarMenu();
				break;

			case 5:
				displayMeeting();
				a = CalendarMenu();
				break;
			
			case 6:
				cancelMeeting();
				printf("\n");
				break;

			case 0 : 
				a = CalendarMenu();
				break;

			default :
				break;

		}
		}
	 	 
        else {

                printf("\n\n\t****************** LOGIN FAILED  ******************** \n\n ");
	     }
	 return 0;
}

