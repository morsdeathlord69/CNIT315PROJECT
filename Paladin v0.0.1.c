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
    printf("Peter can access this wghen the stars align properly :) \n");
    
    return 0;
}

