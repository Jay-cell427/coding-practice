#include <stdbool.h>
#include <string.h>
#include<ctype.h>

bool IsIsogram( const char *string) {
   char tempString[strlen(string) + 1];
    strcpy(tempString, string);
  
    for (int i = 0; i < strlen(tempString); i++) {
      tempString[i] = tolower(tempString[i]);}
  
  for (int i = 0; i < strlen(tempString); i++) {
        for (int j = i + 1; j < strlen(tempString); j++) {
            if (tempString[i] == tempString[j]) {
                return false;  // Found a duplicate character, return false
            }
        }
    }
    return true;  // No duplicates found
}