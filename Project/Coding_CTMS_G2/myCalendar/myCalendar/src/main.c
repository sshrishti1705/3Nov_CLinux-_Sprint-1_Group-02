#include <login.h>
#include <common.h>
/*function for input password and use in secure form */
void maskpassword(char password[]){
        char ch;
        int i=0;
        while((ch=getchar())!=10){
                password[i]=ch;
                printf("*");
                i++;
        }
        password[i]='\0';
}
/* for for encrypt password*/
void encrypt(char password[],int key){
    for(int i=0;i<strlen(password);i++){
        password[i] = password[i] - key;
    }
}
/*for decrypt the password*/
void decrypt(char password[],int key){
    for(int i=0;i<strlen(password);i++){
        password[i] = password[i] + key;
    }
}
int main()
{
	system("clear");
        int ch=0;
        do{
	    ch=mainMenu();
    switch(ch){
        case 1:
            printf("\t---------------------------------------------\n");
            login();

        case 2:
	        system("clear");		
	        printf("\n\n\t\n+==================================EXIT====================================================+\n\n\n");
            return 0;

	    default :
	        printf("\n!!!!!!!!!!!!!!!!_Please Enter valid choice_!!!!!!!!!!!!!!!! \n\n");
	        break;
        }

} while(ch!=1 );
return 0;
}
