#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void parse_line(const char *line, const char *end){
    // While we have not reached the end of the line
    while (line < end){
        const char *start = line;

        // Find the end of the current token, which ends at ',' or ')'
        line = strpbrk(line, ",)");

        // If there is no end, we are done
        if (!line) break;

        // This is the length of the token
        size_t length = line - start;

        // Print the token and a comma
        printf("%.*s,", (int)length, start);

        // Done with token, try to find the next one
        line++;
    }
    printf("\n");
}

void parse_text(const char *text){
    // While there is text to parse
    while (*text){
        // Find end of line
        const char *end_of_line = strchr(text, '\n');

        // If there is no end of line, we are done
        if (!end_of_line) break;

        // Otherwise, parse the line
        parse_line(text + 1, end_of_line - 1);

        // And go to next line
        text = end_of_line + 1;
    }
}

int main(){
    parse_text("(1,0,1)\n(3,3)\n");
  
  // 0 = pinhole
  // 1 = axle hole
  // 2 = pin
  // 3 = axle
  // TODO convert 0,1,2,3 into PIH,AXH,PI,AX
  // TODO get input from user, not as a hardcoded string literal
  
    return 0;
}
