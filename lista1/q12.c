#include <stdio.h>

int n;
int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	return 1;

}

void processa(){
	int factor = 5;
	while(factor > n){
		factor *= factor;
	}
	int numberOfZeros;
	do{
		numberOfZeros = n / factor;
		factor /= 5;
	}while(factor > 1);

	printf("Quantidade de zero a direita: %d",numberOfZeros);

}

int main(){
	freopen("questao12.in","r",stdin);
	freopen("questao12.out","w",stdout);


	while(ler_dados()){
		processa();
	}
	
	return 0;


}