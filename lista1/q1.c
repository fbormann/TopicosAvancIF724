#include <stdio.h>


int n, a[50],count[10];

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	return 1;

}

/*
	Retorna o maior valor possivel para aquele numero;
*/



void processa(){
	
	printf("caso %d: ",n);

	int k = 0;	 //numeros de digitos presentes em n
	int digit; //O digito em si
	do{
		digit = n %10;
		count[digit] += 1;
		n /= 10;
		k++;
	}while(n > 0);
	int j = 9;
	for(; j > -1;j--){
		int i =0;
		for(; i < count[j];i++){ //Escrevo o maior numero as k vezes que ele apareceu.
			printf("%d",j); 
		}
	}
	
}

int main(){
	freopen("questao1.in","r",stdin);
	freopen("questao1.out","w",stdout);


	while(ler_dados()){
		processa();
	}
	
	return 0;


}