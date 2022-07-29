#include <stdio.h>
int ReadAndValidateLine( char* pzBuffer , int iLimit ) {
    int iChar, iLen=0, iParenthesisCount=0;
    while (iChar=getchar()) {
        if (iLen>=iLimit) { iChar = '\n'; }
        switch (iChar) {
        case '(':
          iParenthesisCount++;
          break;
        case ')':
          iParenthesisCount--;
          break;
        case EOF:
        case '\n':
          pzBuffer[iLen]=0;
          if (iParenthesisCount) {
              puts("Mistmatch parenthesis");
              return 0;
          }
          return iLen;
        }
        pzBuffer[iLen++] = iChar;
    }
}

int main() {
    char zLine[4096];
    if (!ReadAndValidateLine( zLine , 4095 )) {
        puts("error");
    } else {
        puts("ok");
        printf("'%s'\n",zLine);
    }
}

