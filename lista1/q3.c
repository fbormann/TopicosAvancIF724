#include <stdio.h>
#include <stdlib.h>

int n, a[15][15];


int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	return 1;
}

int number_digitos(int number){
	int k =0;	 //numeros de digitos presentes em n
	do{
		number /= 10;
		k++;
	}while(number > 0);

	return k;
}

void processa(){
	int i = 0;
    int j = 0;
    
	   
	    if(n >= 1){
	        a[0][0] = 1;
	     }

		 for(;i < n;i++){ // k = o i-ésimo número
	      for(j = 0; j < n; j++){ // j irá de 0 à k-1 também pois é uma matriz quadrada
	     	if(i == j && i != 0){
	     		int x = i-1;
	     		int y = j-1;
	     		a[i][j]  = 4*a[x][y];
	      	}

	      	if(i != j && i == 0){
	      		int y = j-1;
	       		a[i][j]  = 2*a[i][y];  
	       	}

	       	if(i != j && i > 0){
	       		int x = i-1;
	       		a[i][j] = 2*a[x][j];
	       	}
	       }
		 }
	

	for(i = 0; i < n; i++){
		printf("\n");
		for(j = 0; j < n; j++){
			for(int l = 0; l < (n-number_digitos(a[i][j]));l++){ //l ira desenhar espacos ate que o numero n da ordem da matriz
				printf(" ");
			}

			printf("%d", a[i][j]);

		}
	}

	printf("\n");
	


	
}

int main(){
	freopen("questao3.in","r",stdin);
	freopen("questao3.out","w",stdout);


	while(ler_dados())
	{
		processa();
	}
	
	
	return 0;


}