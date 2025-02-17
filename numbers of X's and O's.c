#include <stdbool.h>

bool xo (const char* str)
{int number_of_x=0, number_of_o=0;
 char string[strlen(str)+1];
 strcpy(string, str);
 
 for(int i=0; i<strlen(string); i++){
   string[i]=tolower(string[i]);}
 
 for(int i=0; string[i]!='\0'; i++){
   if(string[i]=='x'){
     number_of_x++;}
   else if(string[i]=='o'){
     number_of_o++;
   }
 }if(number_of_x==number_of_o){
   return true;}
 
  return false;
}