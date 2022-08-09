#include "MyTDT\tokens.bas"

dim as string sText = "  Hello   World   check  "

print "'" + GetTok(sText,2,asc(" ")) + "'"

'thid paramater if omitted equals to asc(" ")
print FindTok(sText,"World") 

'not found because this is the case sensitive version
print FindTok(sText,"world",asc(" "))

'now it finds it, because this is the Insensitive version
print FindTokI(sText,"world",asc(" "))

'number of tokens
print NumToks(sText,asc(" "))

print "-------- with optional parameters ---------"
sText = "Parm1,,Parm3"
print NumToks(sText,asc(","),1) 'otherwise this would return 2
print GetTok(sText,3,asc(","),1) 'otherwise this would return ""

sleep