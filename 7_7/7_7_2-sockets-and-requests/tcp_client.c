#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
/*
 *run the binary, which will run the client and the
 *run nc -nvlp 8765 to connect from another terminal to send a message
 * */
int main(){
	struct sockaddr_in serv; // start a struct based on the predefined structure called sockaddr_in
	serv.sin_family = AF_INET; // set family, ipv4 comms between processes
	serv.sin_port = htons(8765); // our port
	serv.sin_addr.s_addr = INADDR_ANY; // permission to bind to any address


	int sock = socket(AF_INET, SOCK_STREAM, 0);
	connect(sock, (struct sockaddr *)&serv, sizeof(serv)); // connection request, arguments point t our socket we established
	puts("Messages from the server, use 'exit' to return...");

	//we run until we break
	while(1){
		char strData[255];
		memset(strData, '\0', 255); // we clear strData with memset to avoid chars from previous loop being left over
		recv(sock, strData, sizeof(strData), 0); // receive and store bytes into strData
		if (strcmp(strData, "exit\n") == 0){
			puts("Exiting...");
			break;
		}
		printf("%s", strData);
	
	}
	shutdown(sock, SHUT_RD);

	return 0;
}
