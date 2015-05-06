#include <stdio.h>
#include <string.h>

int n, a[100];
char type[100][2];

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
		scanf("%s", &type[i]);
	}
	return 1;

}

void processa(){
	int k = 0; //K e o valor entre a posicao inicial a[0] e a posicao onde devo comecar a desenhar "X"
	for(int i = 0; i < n;i++ ){
		if(strcmp(type[i],"A") == 0){
			k = a[i]-1; 

			
			for(int j = 0; j < a[i]; j++){
				
				for(int l = 0; l < a[i]+j; l++ ){
				
					if(l >= k && l <= a[i]+j ){ //Se ele estiver entre o intervalo desejado, entao desenhe-o
						printf("X");
					}else{
						printf(" ");
					}

				}
				printf("\n");
				k--;
			}
		}else
		{
			k = 0; 
			for(int j = a[i]-1; j >= 0; j--){

				for(int l = 0; l < a[i]+j; l++ ){
				
					if(l >= k && l <= a[i]+j ){
						printf("X");
					}else{
						printf(" ");
					}

				}
				printf("\n");
				k++;
				
			}
		}

		printf("\n"); //espaco entre as piramides;
	}
	
	
}

int main(){
	freopen("questao5.in","r",stdin);
	freopen("questao5.out","w",stdout);


	while(ler_dados()){
		processa();
	}
	
	return 0;


}