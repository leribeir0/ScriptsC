#include <stdio.h>
#include <netdb.h>

int main (int argc, char * argv[]){
	if (argc<1){
		printf("Está errado. Exemplo de uso : ./socket 192.168.0.1 80\n");
	}else {
		int meusocket;
		int conecta;

		struct sockaddr_in alvo;

		meusocket = socket(AF_INET, SOCK_STREAM, 0);
		alvo.sin_family = AF_INET;

		alvo.sin_port = htons(8080);
		alvo.sin_addr.s_addr = inet_addr(argv[1]);

		conecta = connect(meusocket,(struct sockaddr *)&alvo,sizeof alvo);

		if(conecta == 0){
			printf("Porta aberta \n");
			close(meusocket);
			close(conecta);
		}else{
			printf("Porta Fechada \n");
		}
	}
}
