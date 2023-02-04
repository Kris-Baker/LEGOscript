use TokenAlignmentChk;
use ValidTokenChk;

my $line = ('1','0','0.0','0','0','1','0','0','0','1','0','0','0','3024.dat');
my $spec = ('%d','%d','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s','%s');
my $format;
my $token;

    loop ($token = 0 ; $token <= 13 ; $token++)
    {
     $format[$token] = sprintf($spec[$token], $line[$token]);
    }

sub BadArgsChk()
{
ValidTokenChk('1' , 0);
ValidTokenChk('1' , 1);
ValidTokenChk(1 , 2);
ValidTokenChk(1.1 , 3);
ValidTokenChk(1 , 4);
ValidTokenChk(1.1 , 5);
ValidTokenChk(1 , 6);
ValidTokenChk(1.1 , 7);
ValidTokenChk(1 , 8);
ValidTokenChk(1.1 , 9);
ValidTokenChk(1 , 10);
ValidTokenChk(1.1 , 11);
ValidTokenChk(1 , 12);
ValidTokenChk(1.1 , 13);
}

BadArgsChk();
