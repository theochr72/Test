#include <string.h>
#include <stdio.h>

void vuln(char *arg) {
char buffer[20]; 
strcpy(buffer, arg); 
printf("\n Hello %s ! \n", buffer);
}

int main(int argc, char** argv) {
vuln(argv[1]);
return 0;
}
