/*
 ============================================================================
 Name        : Auditing-AIX-Minimal.c
 Author      : L.
 Version     : 0.0.1
 Copyright   : GPLv3.0
 Description :
 ============================================================================
 */

#include <Auditing-AIX-Minimal.h>

int main(void) {
	char cmd[256]="";
	show_intro();
	//******************************************
	printf("%s\nRunning script as: %s\n", C_HWHITE, C_GREEN);
	snprintf(cmd, sizeof(cmd),"%s", "id");
	perform_system_call(cmd);
	//******************************************
	show_title("- Evaluate version installed: ", BOLD_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "uname -a");
	perform_system_call(cmd);
	//******************************************
	show_title("- Evaluate existence of root users: ", BOLD_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "grep :0:  /etc/passwd");
	perform_system_call(cmd);
	//******************************************
	show_title("- Review daemons and services files in order to evaluate their rational: ", BOLD_TITLE);
	show_title("/etc/inetd.conf: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "cat /etc/inetd.conf");
	perform_system_call(cmd);
	show_title("/etc/inittab: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "cat /etc/inittab");
	perform_system_call(cmd);
	show_title("/etc/rc.nfs: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "cat /etc/rc.nfs");
	perform_system_call(cmd);
	show_title("etc/rc.tcpip: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "cat etc/rc.tcpip");
	perform_system_call(cmd);
	//******************************************
	show_title("- Verify the correct permissions set for the following files: ", BOLD_TITLE);
	show_title("/etc/filesystems: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/filesystems");
	perform_system_call(cmd);
	show_title("/etc/hosts: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/hosts");
	perform_system_call(cmd);
	show_title("/etc/inittab: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/inittab");
	perform_system_call(cmd);
	show_title("/etc/vfs: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/vfs");
	perform_system_call(cmd);
	show_title("/etc/security/failedlogin: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/security/failedlogin");
	perform_system_call(cmd);
	show_title("/etc/security/audit/hosts: ", NORMAL_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "ls -la /etc/security/audit/hosts");
	perform_system_call(cmd);
	//******************************************
	show_title("- Evaluate if root account can login remotely (/etc/ssh/sshd_config): ", BOLD_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "grep PermitRootLogin /etc/ssh/sshd_config");
	perform_system_call(cmd);
	//******************************************
	show_title("- Evaluate if audit is enabled: ", BOLD_TITLE);
	snprintf(cmd, sizeof(cmd),"%s", "audit query");
	perform_system_call(cmd);
	//******************************************
	printf("%s\nScript finished: %sOK%s\n\n",C_HWHITE, C_HGREEN, C_DEFAULT);
	return EXIT_SUCCESS;
}
