/*
 ============================================================================
 Name        : Files_functions.c
 Author      : L.
 Version     : 0.0.1
 Copyright   : GPL 3.0
 Description :
 ============================================================================
 */

#include "Auditing-AIX-Minimal.h"

void show_intro(void){
	system("clear");
	printf("%s",C_CYAN);
	printf("\n*************************************************************************************************************************************");
	printf("\n*");
	printf("\n* %sAuditing AIX by L.%s", C_HCYAN, C_CYAN);
	printf("\n*");
	printf("\n* v0.0.1");
	printf("\n*");
	printf("\n* This is just a minimal/example version. ");
	printf("\n*");
	printf("\n* For in-deep version, as well, for others systems/plattforms (Cybersecurity, Oracle, MySQL, SAP HANA, among others), pls, contact me!");
	printf("\n*");
	printf("\n* Email: luis.alfie@gmail.com");
	printf("\n*");
	printf("\n*************************************************************************************************************************************");
	printf("%s",C_HWHITE);
	time_t timestamp = time(NULL);
	struct tm tm = *localtime(&timestamp);
	printf("\n\nStarting at: %d/%02d/%02d %02d:%02d:%02d\n",tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("%s",C_DEFAULT);
	return;
}

void show_title(char *title, int style){
	(style==NORMAL_TITLE)?(printf("%s\n",C_WHITE)):(printf("%s\n",C_HWHITE));
	printf("%s", title);
	printf("%s\n",C_DEFAULT);
	return;
}

void show_error(char *errMsg, int errnum){
	printf("%s",C_HRED);
	(errnum==0)?(printf("%s\n", errMsg)):(printf("%s Error %d (%s)\n", errMsg, errnum, strerror(errnum)));
	printf("%s",C_DEFAULT);
	return;
}
