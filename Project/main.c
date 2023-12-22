#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "data.c"

void start() //Topic Selection Menu
{
    int option;
    system("clear");
    printf("\n\n\t\t\t\t   ~~~~~Select a Category~~~~~\n\n");
    printf("\t\t\t\t     1) General Knowledge\n\t\t\t\t     2) Anime\n\t\t\t\t     3) Technology\n\t\t\t\t     Input any other key to go to Start Menu\n\n\n");
    printf("\t\t\t\t   Enter Category Number = ");
    scanf("%d",&option);
    switch(option)
    {
        case 1: topic0();
                break;
        case 2: topic1();
                break;
        case 3: topic2();
                break;
        default:printf("\n");
    }
}

void credits() //Credits Menu
{
    char a;
    printf("\n\n\n\t\t\t\t  ~~~~~~~~~~~Credits~~~~~~~~~~~\n\n\n\n");
    printf("\t\t\t\t  ~~~~~Database Collection~~~~~\n\t\t\t\t\t   Vatala Phalgun\n\n");
    printf("\t\t\t\t      ~~~~~Programming~~~~~\n\t\t\t\t\t      Amey Khare\n\n");
    printf("\t\t\t\t     ~~~~~User Interface~~~~~\n\t\t\t\t\t Tadivada Nikhilesh Sai Santosh");
    printf("\n\n\n\t\t\t\t ~~~~~Press ENTER to return~~~~~\n");
    getchar();
    scanf("%c",&a);
}

void main()
{
  char con;
  int inp;
  while(inp!=3)
  {
    system("clear");
    printf("\n\n");
    printf("\t ___           ¦¦¦¦¦   ¦    ¦¦  ¦¦¦¦¦¦¦¦¦¦¦¦     _¦¦¦¦  ___       ¦¦¦_ _¦¦¦¦¦¦¦¦¦¦ \n");
    printf("\t¦¦¦¦¦_       ¦¦¦¦  ¦¦¦ ¦¦  ¦¦¦¦¦¦¦¦¦ ¦ ¦ _¯¦    ¦¦¦ ¯¦¦¦¦¦¦¦_    ¦¦¦¦¯¦¯ ¦¦¦¦¦   ¯ \n");
    printf("\t¦¦¦  ¯¦_     ¦¦¦¦  ¦¦¦¦¦¦  ¦¦¦¦¦¦¦¦¦ ¦ _¯¦¦    ¦¦¦¦___¦¦¦¦  ¯¦_  ¦¦¦    ¦¦¦¦¦¦¦¦   \n");
    printf("\t¦¦¦____¦¦    ¦¦¦  ¦¯ ¦¦¦¦  ¦¦¦¦¦¦¦¦  _¯¦   ¦   ¦¦¦  ¦¦¦¦¦¦____¦¦ ¦¦¦    ¦¦¦ ¦¦¦  _ \n");
    printf("\t ¦¦   ¦¦¦¦   ¦¦¦¦¦¦¦_ ¦¦¦¦¦¦¦¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¯¦ ¦¦   ¦¦¦¦¦¦¦¦   ¦¦¦¦¦¦¦¦¦¦¦\n");
    printf("\t ¦¦   ¦¦¦¦   ¦¦ ¦¦¦ ¦ ¦¦¦¦ ¦ ¦ ¦¦  ¦¦¦ ¦¦¦¦¦    ¦¦   ¦  ¦¦   ¦¦¦¦¦ ¦¦   ¦  ¦¦¦ ¦¦ ¦\n");
    printf("\t  ¦   ¦¦ ¦    ¦ ¦¦  ¦ ¦¦¦¦ ¦ ¦  ¦ ¦¦¦¦ ¦ ¦ ¦     ¦   ¦   ¦   ¦¦ ¦¦  ¦      ¦ ¦ ¦  ¦\n");
    printf("\t  ¦   ¦         ¦   ¦  ¦¦¦ ¦ ¦  ¦ ¦¦ ¦ ¦ ¦ ¦   ¦ ¦   ¦   ¦   ¦   ¦      ¦      ¦   \n");
    printf("\t      ¦  ¦       ¦       ¦      ¦    ¦ ¦             ¦       ¦  ¦       ¦      ¦  ¦\n");
    printf("\t\t\t\t    A C Programming Project   \n\n\n\n\t\t\t\t\t    1.Start\n\t\t\t\t\t   2.Credits\n\t\t\t\t\t    3.Exit\n");
    printf("\n\n\n\n\t\t\t\t      Select your Option = ");
    scanf("%d",&inp);
    switch(inp)
    {
      case 1:start(); //goes to Topic Selection Menu
             break;
      case 2:credits(system("clear")); //goes to Credits Menu
             break;
      case 3:return; //exits the program
             break;
      default: printf("\n\t\t\t\t\t Invalid option\n\t\t\t\t\t     Bye Bye\n\n\n"); //exits the program
               return;
    }
  }
  return;
}
