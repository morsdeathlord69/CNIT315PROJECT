//CNIT 31500 Final Group Project
//Vivian Phan
//Peter Shoaf
//Lancia Raja
//Shyam Merchant

#include <stdio.h>
#include <string.h>
typedef struct User{
 int uid;
 char *first_name;
 char *last_name;  
 char *username;
 char *passwd;
}User;
typedef struct Person {
    int aid;
    
    char *userName;
    char *password;
    struct Person *next;
}Person;

int main()
{
    int option=0;
    printf("Welcome to Paladin.\n");
    printf("Do you have an account? (Y/N)\n");
    printf("Peter can access this when the stars align properly+edit:) \n");
    struct User arr_Users[50];
    //int i;
    do{
    printf("Press 1. To enter the details of the new user: \n");
    scanf("%d",option);
    if(option==1)
    {
    for(int i=0;i<2;i++)
    {
        char *First_Name=NULL;
    First_Name = malloc (sizeof (char *));
    char *Last_Name=NULL;
    Last_Name = malloc (sizeof (char *));
    char *uname=NULL;
    uname=malloc(sizeof(char *));
    char *pass=NULL;
    pass=malloc(sizeof(char *));
        printf("Please Enter the First Name:");
        scanf("%s",First_Name);
        printf("Please Enter the Last Name:");
        scanf("%s",Last_Name);
        printf("Please Enter the Username:");
        scanf("%s",uname);
        printf("Please Enter the Password:");
        scanf("%s",pass);
        arr_Users[i].uid=i;
        arr_Users[i].first_name=First_Name;
        arr_Users[i].last_name=Last_Name;
        arr_Users[i].username=uname;
        arr_Users[i].passwd=pass;
    }
    for(int i=0;i<2;i++)
    {
    printf("***************************************** \n");
    printf("User #%d \n",arr_Users[i].uid+1);    
    printf("First Name is %s \n",arr_Users[i].first_name);
    printf("Last Name is %s  \n",arr_Users[i].last_name);
    printf("Username is %s  \n",arr_Users[i].username);
    printf("Password is %s \n",arr_Users[i].passwd);
    }
    printf("***************************************** \n");
    }
    }
    while(option!=-1);
    return 0;
}
Person *CreateNewAccount (char *username, char *passwd)
{
    struct Person *new_userAccount;
    new_userAccount = malloc (sizeof (struct Person));
    if (new_userAccount == NULL)
    {
        printf ("Error creating a new node.\n");
        exit (0);
    }
    
    
    new_userAccount->userName = username;
    new_userAccount->password = passwd;
    return new_userAccount;
}
