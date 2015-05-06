#include <stdio.h>

int n, a[10]; //coloquei 10 pois acho um número suficiente de casos de teste.

int ler_dados()
{
	scanf("%d",&n);
	if(n == 0){
		return 0;
	}
	int i = 0;
	for(;i<n;i++){ //Ler os N numeros da linha seguinte.
		scanf("%d",&a[i]);
	}
	return 1;

}

void processa(){
	int tamanho = 1;
	int begin,i,j;
	//Comeco a partir dos subconjuntos de 1 element e sigo ate n-1;
	
	 do{
	 	begin = 0;
	 	while(begin < n){
	 		if((n - begin) >= tamanho){
		 		for(j = begin;j<begin+tamanho;j++){
		 			if(j < n){
		 				printf("%d ",a[j]);
		 			}
		 		}
	 		
	 			printf("\n");
	 		}
			for(i = 0; i < n;i++){
		 		if(i < begin){
		 			printf("%d ",a[i]);
		 		}
		 			
		 		if((n - begin) >= tamanho){
			 		for(j = begin;j<begin+tamanho;j++){
			 			if(j < n){
			 				printf("%d ",a[j]);
			 			}

			 		}
		 		}
		 		if(i > begin+tamanho){
		 			printf("%d ",a[i]);
		 		}

		 		printf("\n");
	 		}
	 		

	 		//printf("\n");
		 	begin++;
	 	}
		

	 	tamanho++;

	 }while(tamanho < n);
		

}

int main(){
	freopen("questao11.in","r",stdin);
	freopen("questao11.out","w",stdout);


	while(ler_dados()){
		processa();
	}

	return 0;
}