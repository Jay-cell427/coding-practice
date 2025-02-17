#include <stdlib.h>
#include<string.h>
//solution must allocate all required memory
//and return a free-able buffer to the caller.

char *disemvowel(const char *str)
{
      char *result = malloc(strlen + 1);  // Allocate memory for the result string (one extra byte for null terminator)
    
    if (result == NULL) {  // Check if memory allocation failed
        return NULL;  // Return NULL if memory allocation fails
    }
    
    int j = 0;  // Index for the result string
    for (int i = 0; i <strlen(str); i++) {
        char c = str[i];
        // Check if the character is not a vowel (case insensitive)
        if (!strchr("aeiouAEIOU", c)) {
            result[j++] = c;  // Add non-vowel character to the result
        }
    }
    
    result[j] = '\0';  // Null-terminate the result string
    return result;  // Return the result string
}