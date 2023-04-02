//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ",		"~/Scripts/vol.sh",			1,		      0},

	{" ", 		"~/Scripts/mem.sh",			5,		      0},

	{"", 		"~/Scripts/date.sh",			1,		      0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
