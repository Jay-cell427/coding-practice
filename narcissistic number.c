#include <stdbool.h>
#include<math.h>

bool narcissistic(int num){
int result=0, digit_count=0, original_num=num;
while(num !=0){
  digit_count++;
    num /=10;
}
num=original_num;
while(num !=0){
  int digit = num %10;
  result +=pow(digit, digit_count);
  num /= 10;
}
if (result == original_num){
  return true;
}
  
    return false;
}