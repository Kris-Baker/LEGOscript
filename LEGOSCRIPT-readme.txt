LEGOscript

This text describes how the LEGOscript intermediate language works, for complete documentation please visit:
https://github.com/Kris-Baker/LEGOscript/#readme.

The LEGOscript is a way for the user to more finely adjust what sort of results the LEGOscript engine produces, for
instance it might output LDRAW script that is fine but one part might not be what the user is looking for, and so the
user can either configure the LEGOscript engine to produce an output that is closer to what the user wants, or he can
even lock certain parts so that the LEGOscript engine never replaces them with something else.

the LEGOscript language is an intermediary language that sits between the LDRAW language which is used to load the
digital lego model. Unlike LDRAW it is not meant to be used to build or analize a lego model, instead, it allows the
user to take an existing digital LEGO model, and use the LEGOscript engine to reduce the number of parts, while still
maintaining the models asthetic, structural atability, and mechanical functions.

The LEGOscript language is simply just a list structure of primatives, which you wrap in parenthesis in order to group
parts, this is what is used to fine-tune what is outputted.

Lets take a simple example: here we have two primative types, stud (s) and clutch (c), there is one of each:

(s,c)

with just two primatives you could have a 1x1 plate, or even a 1x1 brick, because both contain 1 stud and 1 clutch (or
"antistud")

The way that the LEGOscript engine would decide on which one to use is by looking at the surrounding parts in the 
LDRAW script to check for collisions and for other primatives that the target part may connect to.

You can also specify more than one part: (s,c)(s,s,c,c)

in this case there is 1 stud, 1 clutch, then as a seperate part, 2 studs, and 2 clutches so it might output:

1x1 brick AND 1x2 plate
OR 
1x1 brick AND 1x2 brick
OR
1x1 plate AND 1x2 plate
OR
1x1 plare AND 1x2 brick

finally, there are some more general settings, these kind of act like compiler flags, you can tell it to ignore legacy
pats, to persist the color of a given selection, to disallow legal or semi-illegal building tequniques, etc.

If more than one part is specified like above, it will compute what to do sequentially, not all at the same time, this
is because its more efficiant this way, as two or more parts in the LEGOscript criteria might collide or also be able
to connect to themselves directly.

Let's look at the execution cycle more, returning back to the 1st example (s,c) - The LEGOscript engine ignores the
order in which primatives are specified per part, but it searches a block of binary data stored in memory which is
mapped to each .dat file of the LDRAW official and unnofficla parts library.

LDRAW file -> user enters '(ph,ph)' -> LEGOscript engine finds a pair of 1x1 technic bricks, replaces them with one
1x2 technic brick in the output file

the output file is just a copy of the LDRAW input file but with the optimiations done on it. In the above case, it
replaced a pair of 1x1 technic bricks with a single 1x2 technic brick.
