/*

	0: Comment/META , 1: Sub-file reference , 2: Line , 3: Triangle , 4: Quadrilateral , 5: Optional Line

	0 // <comment>
	0 <comment>
	0 !<META command> <additional parameters>
	1 <colour> x   y  z  a  b  c  d  e  f  g  h  i <file>
	2 <colour> x1 y1 z1 x2 y2 z2
	3 <colour> x1 y1 z1 x2 y2 z2 x3 y3 z3
	4 <colour> x1 y1 z1 x2 y2 z2 x3 y3 z3 x4 y4 z4
	5 <colour> x1 y1 z1 x2 y2 z2 x3 y3 z3 x4 y4 z4
	
*/

typedef struct { fnum fx ,fy ,fz  , fa,fb,fc,fd,fe,ff,fg,fh,fi ; char* pzFile; } tRowType1;
typedef struct { fnum fx1,fy1,fz1 , fx2,fy2,fz2; }                               tRowType2;
typedef struct { fnum fx1,fy1,fz1 , fx2,fy2,fz2 , fx3,fy3,fz3; }                 tRowType3;
typedef struct { fnum fx1,fy1,fz1 , fx2,fy2,fz2 , fx3,fy3,fz3 , fx4,fy4,fz4; }   tRowType4;
typedef struct { fnum fx1,fy1,fz1 , fx2,fy2,fz2 , fx3,fy3,fz3 , fx4,fy4,fz4; }   tRowType5;
typedef struct { char* pzBigText; }                                              tRowType0;
typedef struct { char zText[sizeof(tRowType1)]; }                                tRowType0s;

typedef struct _tRow {
	u8 bType;
	union {
		u16 wColor;
		u16 wLen;
	};
	union {
		tRowType0  t0;
		tRowType0s t0s;
		tRowType1  t1;
		tRowType2  t2;
		tRowType3  t3;
		tRowType4  t4;
		tRowType5  t5;
	};
	
} tRow;

typedef struct _tFile {
	u32 uSize , uLines;
	tRow aLines[];
} tFile;

size_t fsize(FILE *fp){
	size_t prev=ftell(fp);
	fseek(fp, 0L, SEEK_END);
	size_t sz=ftell(fp);
	fseek(fp,prev,SEEK_SET); //go back to where we were
	return sz;
}

void* LoadFile( char* pzFile , u32* puSizeOut ) {
	FILE *pFile = fopen(pzFile,"rb");
	void *pResu = NULL, *pBuff = NULL;
	if (puSizeOut) { *puSizeOut = 0; };
	if (!pFile) {
		errorf("Failed to load '%s'\n", pzFile);
		return NULL;
	}
	while (1) {
		size_t uSz = fsize(pFile);	
		if (uSz > (1024*1024*1024)) { 
			errorf("file '%s' is too big!\n",pzFile);
			break;
		}
		
		if (!(pBuff = malloc(uSz))) { 
			errorf("failed to allocate %i bytes \n",uSz);
			break;
		}
		if (!fread( pBuff , uSz , 1 , pFile )) {
			errorf("failed to load file '%s' contents\n",pzFile);
			break;
		}
		if (puSizeOut) { *puSizeOut = uSz; };
		pResu = pBuff;
		break;
	}	
	
	fclose( pFile );
	if ((!pResu) && pBuff) { free(pBuff); }
	return pResu;
	
}

//