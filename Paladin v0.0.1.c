//CNIT 31500 Final Group Project
//Vivian Phan
//Peter Shoaf
//Lancia Raja
//Shyam Merchant

#include <stdio.h>
#include <string.h>
struct User {
 int uid;
 char *first_name;
 char *last_name;  
 char *userName;
 char *password;
}User;
struct Person {
    int aid;
    
    char *userName;
    char *password;
    struct node *next;
}Person;

int main()
{
    printf("Welcome to Fortress.\n");
    printf("Do you have an account? (Y/N)\n");
    printf("Peter can access this when the stars align properly :) \n");
    
    return 0;
}
User *CreateNewUser (char *fname, char *lname, char *username, char *passwd)
{
    struct User *new_user;
    new_user = malloc (sizeof (struct Node));
    if (new_user == NULL)
    {
        printf ("Error creating a new node.\n");
        exit (0);
    }
    new_user->first_name = fname;
    new_user->last_name = lname;
    new_user->userName = username;
    new_user->password = passwd;
    return new_user;
}
