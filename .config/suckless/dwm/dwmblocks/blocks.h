//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{" ",       "~/Scripts/pacmanup.sh",	 			  3600,      	        0},

	{"󰊚 ",		"~/Scripts/cpu.sh",							 1,    	   	   	    0},

	{"﨎",		"~/Scripts/temp.sh",						 1,		      	    0},

	{" ",		"~/Scripts/diskfree.sh",	   				60,		      	    0},

	{"󰒋 ", 		"~/Scripts/mem.sh",							 5,		      	    0},

	{" ", 		"python3 ~/Scripts/date.py",			             1,		      	    0},

	{"",        "python3 ~/Scripts/connection.py",           1,                 0},
  {"",        "~/Teste/script.sh",  1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
