sub ValidTokenChk ($tok, $toknum) is export returns Bool
    {
        if ($toknum ~~ (0..1))
        {
            if ($tok !%% 1 || $tok ~~ Str)
            {
            print("token: ", $tok, " must be an intager value.\n");
            return False;
            }
        }
        elsif ($toknum ~~ (2..13))
        {
            if ($tok !~~ Str)
            {
            print("token: ", $tok, " must be a string value.\n");
            return False;
            }
        }
        else
        {
        print("the token number is not valid (must be an integer between 0 and 13).\n");
        return False;
        }
        print("token is: ", $tok, "\n token number is: ", $toknum, "\n");
        return True;
    }
