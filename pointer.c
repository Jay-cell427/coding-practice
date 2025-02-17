#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void* a, const void* b){
return strcmp(*(const char**)a, *(const char**)b);}
int main(){
const char* arr[]={"Welcome", "to", "Geeks", "for", "Geeks"};
int n=5;
qsort(arr, n, sizeof(arr[0]), compare);

for(int i=0; i<n; i++)
printf("%s", arr[i]);
return 0;
}
