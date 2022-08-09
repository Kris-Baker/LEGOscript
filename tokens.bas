declare function GetTok(TEXTO as string, NUM as long, CHAR as long = asc(" ") , bOptionalTokens as byte = 0) as string
declare function FindTok(TEXTO as string, TOLOOK as string, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as long
declare function NumToks(TEXTO as string, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as long

function GetTok(TEXTO as string, NUM as long, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as string  
  dim as long TOKS=1,POSI,STRA  
  if NUM < 1 then return ""
  if bOptionalTokens=0 then
    while TEXTO[POSI]=CHAR
      POSI += 1
    wend
  end if
  POSI += 1: if TEXTO[POSI]=0 then return ""
  do    
    if TOKS = NUM then STRA = POSI
    POSI = instr(POSI,TEXTO,chr(CHAR))
    if POSI = 0 or TOKS = NUM then exit do
    var N=POSI
    if bOptionalTokens=0 then
      do
        if TEXTO[N]<>CHAR then 
          if TEXTO[N]=0 then exit do,do
          exit do
        end if
        N += 1
      loop
    end if
    TOKS += 1: POSI = N+1
  loop
  if POSI = 0 then
    if STRA then return mid(TEXTO,STRA)
    return ""
  else
    return mid(TEXTO,STRA,POSI-STRA)
  end if
end function
function FindTok(TEXTO as string, TOLOOK as string, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as long
  dim as long TOKS=1,POSI=0,STRA=1
  if len(TEXTO) = 0 then return 0  
  if bOptionalTokens=0 then
    while TEXTO[POSI]=CHAR
      POSI += 1
    wend
  end if
  POSI += 1: if TEXTO[POSI]=0 then return 0
  do    
    STRA = POSI
    POSI = instr(POSI,TEXTO,chr(CHAR))        
    if POSI = 0 then
      if mid(TEXTO,STRA) = TOLOOK then return TOKS
      return 0
    else
      if mid(TEXTO,STRA,POSI-STRA) = TOLOOK then return TOKS
    end if
    if POSI = 0 then return 0    
    if bOptionalTokens=0 then
      while TEXTO[POSI]=CHAR
        POSI += 1
      wend
    end if
    TOKS += 1: POSI += 1
  loop  
end function
function FindTokI(TEXTO as string, TOLOOK as string, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as long
  dim as long TOKS=1,POSI=0,STRA=1
  var TOLOOKI = lcase(TOLOOK)
  if len(TEXTO) = 0 then return 0  
  if bOptionalTokens=0 then
    while TEXTO[POSI]=CHAR
      POSI += 1
    wend
  end if
  POSI += 1: if TEXTO[POSI]=0 then return 0
  do    
    STRA = POSI
    POSI = instr(POSI,TEXTO,chr(CHAR))        
    if POSI = 0 then
      if mid(TEXTO,STRA) = TOLOOK then return TOKS
      return 0
    else
      if lcase(mid(TEXTO,STRA,POSI-STRA)) = TOLOOKI then return TOKS
    end if
    if POSI = 0 then return 0    
    if bOptionalTokens=0 then
      while TEXTO[POSI]=CHAR
        POSI += 1
      wend
    end if
    TOKS += 1: POSI += 1
  loop  
end function
function NumToks(TEXTO as string, CHAR as long = asc(" "), bOptionalTokens as byte = 0) as long  
  dim as long TOKS,POSI=0
  if len(TEXTO) = 0 then return 0
  if bOptionalTokens=0 then
    while TEXTO[POSI]=CHAR
      POSI += 1
    wend
  end if
  POSI += 1: if TEXTO[POSI]=0 then return 0
  do
    POSI = instr(POSI,TEXTO,chr(CHAR))
    TOKS += 1    
    if POSI = 0 then return TOKS
    if bOptionalTokens=0 then
      do
        if TEXTO[POSI]<>CHAR then
          if TEXTO[POSI]=0 then return TOKS
          exit do
        end if
        POSI += 1
      loop
    end if
    POSI += 1
  loop  
end function