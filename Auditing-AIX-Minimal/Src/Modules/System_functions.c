/*
 ============================================================================
 Name        : System_functions.c
 Author      : L.
 Version     : 1.0.5
 Copyright   : GNU General Public License v3.0
 Description :
 ============================================================================
 */

#include "Auditing-AIX-Minimal.h"

int perform_system_call(char *cmd){
	printf("%s\n", C_RESULTS);
	system(cmd);
	return RETURN_OK;
}
