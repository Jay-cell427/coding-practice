#include<string.h>
#include<stdlib.h>
char *sort_children(char *str_out, const char *str_in){
int uppercase[27]={0};
int lowercase[27]={0};

//count occurances of each letter
for(size_t i=0; str_in !='\0'; i++){
    char ch = str_in[i];
    if(ch >= 'A' && ch <= 'Z')//check if uppercase
    uppercase[ch - 'A']++;
    else if(ch >= 'a' && ch<= 'z')//check if lowercase
    lowercase[ch - 'a']++;
}
    //write to str_out and return it
    char *ptr = str_out;
    for(int i=0; i<26; i++){
        //add uppercase letter if it exists
        if(uppercase[i] > 0)
        *ptr++ = 'A' + i;
    //add lowercase letter if it exists
    for(int j=0; j<lowercase[i]; j++)
    *ptr++ = 'a' + i;
    }
    *ptr = '\0';
    return str_out;

}