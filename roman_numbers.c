unsigned decode_roman ( const char *roman_number)
{const char roman_chars[]={'M','D','C','L','X','V','I'};
 int values[]={1000, 500, 100, 50, 10, 5, 1};
 unsigned result=0;
for (int i = 0; roman_number[i] != '\0'; i++) {
        int current_value = 0;
        int next_value = 0;
   for (int j = 0; j < 7; j++) {
            if (roman_number[i] == roman_chars[j]) {
                current_value = values[j];
                break;
              }
     }
  if (roman_number[i + 1] != '\0') {
            for (int j = 0; j < 7; j++) {
                if (roman_number[i + 1] == roman_chars[j]) {
                    next_value = values[j];
                    break;
                }
            }
        }
  if (current_value < next_value) {
            result += next_value - current_value;
            i++; // Skip the next character
        } else {
            result += current_value;
        }
    }

    return result;
}