#include<stdio.h>
#define MAX_USERS 5
struct User
{
    int id;
    char name[100];
    int balance;
};

int main(){
    struct User users[MAX_USERS];
    for(int i=0; i<MAX_USERS; i++)
    {
        printf("Enter the id: ");
        scanf("%d", &users[i].id);
        printf("Enter the id: ");
        scanf("%d", &users[i].balance);
    }
    for(int i=0; i<MAX_USERS; i++)
    {
        printf("UserID: %d\n", users[i].id);
        printf("Balance: %d\n",  users[i].balance);
    }
    int find;
    printf("Enter the UserID to check the balance: ");
    scanf("%d", &find);

    for(int i=0; i<MAX_USERS; i++)
    {
      if(find==users[i].id){
        printf("Balance of user %d: %d", find, users[i].balance);
      }
    }


}

