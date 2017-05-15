#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (int argc, string argv[])
{
    // iterate through number of arguments given
   for (int i =0; i<argc; i ++)
   {
       // print argument one by one
       printf("%s\n",argv[i]);
       
       // iterate through eah character of the argument
       for (int j = 0, n = strlen(argv[i]); j<n ; j++)
       {
           // print each character from the arguemnt
           printf("%c\n",argv[i][j]);
       }
   }
}