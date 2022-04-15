#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int i32;
typedef unsigned int intptr;
typedef float fnum;

#define errorf printf
#define debugf printf

#include "loader.c"


char* NextLine( char* pzCur , int* puSizeOut ) {
	char* pzNext = strchr( pzCur , '\n' )
	if (pzNext) {
		pzNext[0]=0; //process both LF and CRLF
		if (pzCur != pzNext) && (pzNext[-1] == '\r') { pzNext[-1]=0; }
		//save size of line (optional)
		if (puSizeOut) { *puSizeOut = (int)(((intptr)pzNext)-((intptr)pzCur)); }
		//return pointer to next line
		return pzNext+1;
	}
	//save size of line
	if (puSizeOut) { *puSizeOut = strlen(pzCur); }
	//no next line, so return null
	return 0;	
}

int main() {
	//printf("%i",sizeof(temp));
	
	/*
	u32 uLen;
	void* pTemp = LoadFile( "c:\\puzzlum.zip" , &uLen );
	printf("%p %i\n",pTemp,uLen);
	*/
	
	char *pzChar = "1 0 0 0 0 0 0 0 0 1 0 0 0 1 3024.dat" , *pzPos = pzChar, *pzTemp;
	
	int uType,uRead=0,uResu;
	uResu = sscanf( pzPos , "%i %n" , &uType , &uRead );
	pzPos += uRead; printf("%i(%i) ",uResu,uRead);	
	int iColor;
	fnum fX,fY,fZ,fA,fB,fC,fD,fE,fF,fG,fH,fI;
	uResu = sscanf( pzPos , "%i %f %f %f %f %f %f %f %f %f %f %f %f %n" , 
	&iColor, &fX,&fY,&fZ,&fA,&fB,&fC,&fD,&fE,&fF,&fG,&fH,&fI , &uRead );
	pzPos += uRead; printf("%i(%i) ",uResu,uRead);		
	if ( (pzTemp = strchr( pzPos , '\n' )) ) {		
		pzTemp[0]=0 ; if (pzTemp[-1] == '\r') { pzTemp[-1]=0; }
	} else {
		pzTemp = pzPos+strlen(pzTemp);
	}
	printf("'%s'\n",pzPos);
	pzPos = pzTemp;
	
	getchar();
	return 0;
}