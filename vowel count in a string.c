#include <stddef.h>
#include<stdio.h>

size_t get_count(const char *s){
  int vowel_count=0;

  for(int i=0; s[i]!='\0'; i++){

  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
vowel_count ++;
return vowel_count;
}

}
int main(){
  const char *s="abracadabra";
printf("number of vowels is %d",  get_count(s));

return 0;}
