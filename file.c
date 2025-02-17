#include<stdio.h>
int main(){
FILE* fpnt;
fpnt=fopen("filename.txt", "r");
char myfilename[5];
fgets(myfilename, 5, fpnt);
printf("%s", myfilename);
fclose(fpnt);
return 0;
}
