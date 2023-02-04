sub TokenAlignmentChk ($l , $s) is export
{
    loop (my $t = 0 ; $t <= 13 ; $t++)
    {
        if ($l[$t] ne $s[$t])
        {
        print("misaligned tokens, starting over again...\n");
        $l = (Empty);
        }
        else
        {
        return $l[$t];
        }
    }
}
