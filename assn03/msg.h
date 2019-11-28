/*
 * msg.h -- List of messages for P- compiler
 *
 * Ziad Sakr
 * Department of Computer Science
 * Trinity College 
 *
 * Date: 10-16-2019 
 * Modification History:
 * 	10-10-2019
 * 	10-13-2019
 * 	10-14-2019
 * 	10-15-2019
 * 10-16-2019
 */
#define MAX_MSG_LEN     256

/* error definitions for the scanner */
#define mnKeywordFound                        0
#define mnUnknownChar                         1
#define mnIllegalString                       2

/* error definitions for the parser */
#define mnMissingIdent                        3
#define mnMissingINT						  4
#define mnMissingEND						  5
#define mnMissingbody						  6	
#define mnMissingdecl						  7	
#define mnMissingproceduer						  8
#define mnMissingPARAMTER						  9
#define mnMissingColon						  10
#define mnMissingtype						  11
#define mnMissingfunc						  12
#define mnMissingEXPR						  13
/* Actual messages */
static char *message[] = {
    "keyword '%s' found",
    "unknown character \\%03o",
    "illegal string",
    "missing identifier",
    "missing integer",
    "missing Ending",
    "error in the body",
    "missing variable declration",
    "error in procedure",
    "missing paramter",
     "missing colon",
     "missing type",
     "error in function",
     "missing expression",
};

