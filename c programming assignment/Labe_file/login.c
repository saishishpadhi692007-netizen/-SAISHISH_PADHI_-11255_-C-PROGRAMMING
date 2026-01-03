
#include <stdio.h>
int main(){
     
    char username[30],password[20];
    printf("Enter username:");
    scanf("%s",username);
    printf("Enter password:");
    scanf("%s",password);

    if(strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0){
        printf("Login Succesfull");
    }
    else{
        printf("Invalid login\n");
    }
    return 0;
}
