#define _WINSOCK_DEPRECATED_NO_WARNINGS

/* _WINSOCK_DEPRECATED_NO_WARNINGS
* is needed for inet_addr();
* could be changed out with
* InetPton(); Seach up doc. 
* on Microsoft.learn.com 
*/

#include "process.hpp"

#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
	if (argc != 3) {
		printf("Program Inputs Failed.\nUsage: <program> <server_ip> <host_name>\n");
		system("PAUSE");
		return 1;
	}

	const char* putty = "putty.exe ";
	const char* alf = "@";

	// +1 for the null operator
	size_t len = strlen(putty) + strlen(argv[2]) + strlen(alf) + strlen(argv[1]) + 1;
	char* sargv = new char[len];

	strcpy_s(sargv, len, putty);
	strcat_s(sargv, len, argv[2]);
	strcat_s(sargv, len, alf);
	strcat_s(sargv, len, argv[1]);

	prcs::PING_INET_ADDR(argv[1]);

	printf("\nConnect to your session? (y/n) ");
	if (std::cin.peek() == 'y' || std::cin.peek() == 'Y') {
		printf("\nConnecting to you session...\n");
		prcs::EXECUTECOMMAND(sargv);
		printf("Session ended.\n");
	}
	else {
		printf("Not connecting to session.\n");
	}
	
	delete[] sargv;

	system("PAUSE");
	return 0;
}
