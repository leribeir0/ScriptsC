#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>

int main (int argc, char * argv[]){
	int meusocket;
	int conecta;

	int port;
	int inicio = 80;
	int final = 65535;
	char * destino;
	destino = argv[1];

	struct sockaddr_in alvo;

	for(port=inicio;port<final;port++){
		printf("Scanning port %d\n",port);
		meusocket = socket(AF_INET, SOCK_STREAM, 0);
		alvo.sin_family = AF_INET;

		alvo.sin_port = htons(port);
		alvo.sin_addr.s_addr = inet_addr(destino);

		conecta = connect(meusocket,(struct sockaddr *)&alvo,sizeof alvo);

		if(conecta == 0){
			printf("Porta  %d - status [ABERTA]\n",port);
			close(meusocket);
			close(conecta);
			printf("teste\n");
		}else{
			printf("teste2\n");
			close(meusocket);
			close(conecta);
		}
	}
}
