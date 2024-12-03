//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//Update signals must go in order, due to dwl integration
static const Block blocks[] = {
	/*Icon*/	/*Command*/		       /*Interval*/	  /*Signal*/
	{" ",       "sb-battery",               30,         4},
	{" ",      "sb-disk",                  60*5,       4},
	// {" ",     "sb-weather",             18000,	    3},
	{"",        "sb-volume",	            1,	       	2},
	{" ",      "sb-date",	                1,	       	1},
	{" ",      "echo \"$(sb-clock) \"",    1,	        1},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
//Warning: changing this will break dwl integration
static char delim[] = " | ";
static unsigned int delimLen = 3;
