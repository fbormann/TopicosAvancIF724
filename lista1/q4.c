#include <stdio.h>

int n, a[50];

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	return 1;
}

void processa(){
	int k = 0;
	 a[0] = 1;
	 a[1] = 1;
	 for(int i = 2; i < 50;i++){
	 	a[i] = a[i-1]+ a[i-2];
	}
	
	for(int i = 0; i < 10;i++){ //Todo f(k) e multiplo do k-esimo numero de f
		if((n % a[i]) == 0){
			k = i;
		}
	}

	for(int i = 0; i < 50;i += k){  //Entao preciso somente procurar entre estes numeros;
		if(a[i] == n){
			printf("%d ",n);
		}
	}
	

	
}

int main(){
	freopen("questao4.in","r",stdin);
	freopen("questao4.out","w",stdout);

	printf("Estes numeros fazem parte da sequencia de fibonacci: \n");
	while(ler_dados()){
		processa();
	}
	
	return 0;


}