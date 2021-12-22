/*
 ============================================================================
 Name        : Auditing-AIX-Minimal.h
 Author      : L.
 Version     :
 Copyright   :
 Description :
 ============================================================================
*/

#ifndef AUDITING_AIX_MINIMAL_H_
#define AUDITING_AIX_MINIMAL_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

#define RETURN_OK 1
#define RETURN_ERROR 0

#define TRUE 1
#define FALSE 0

#define C_DEFAULT "\e[0m"
#define C_RED "\e[0;31m"
#define C_HRED "\e[0;91m"
#define C_GREEN "\e[0;32m"
#define C_HGREEN "\e[0;92m"
#define C_YEL "\e[0;33m"
#define C_BLUE "\e[0;34m"
#define C_CYAN "\e[0;36m"
#define C_BCYAN "\e[1;36m"
#define C_HCYAN "\e[0;96m"
#define C_WHITE "\e[0;37m"
#define C_HWHITE "\e[0;97m"
#define C_RESULTS C_YEL

#define BOLD_TITLE 1
#define NORMAL_TITLE 0

int perform_system_call(char *cmd);
void show_intro(void);
void show_title(char *title, int style);
void show_error(char *errMsg, int errnum);

#endif /* AUDITING_AIX_MINIMAL_H_ */
