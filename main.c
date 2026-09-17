#include <stdio.h>

int main(void) {

char c;

printf("input a character : ");
scanf("%c", &c);

printf("The next character is %c (%i) is %c (%i)\n", c, c, c+1, c+1);


return 0;

}