#include <stdio.h>


int n1,n2, a[2];

int ler_dados()
{
	if(scanf("%d",&n1) != 1) return 0;
	
	scanf("%d",&n2);

	return 1;

}

void processa(){
	int resto;
	a[0] = n1;
	a[1] = n2;
	//Utilizo uma propriedade da aritmética modular mod(a,b) = c....= se b < a , mod(b,c)...assim sucessivamente.
	int mdc;
	do{	
		if(a[0] > a[1]){
			resto = (a[0] % a[1]);
			a[0] = a[1];
			a[1] = resto;
			mdc = a[0];
		}else{
			resto = (a[1] % a[0]);
			a[1] = a[0];
			a[0] = resto;
			mdc = a[1];
		}
	}while(resto != 0);

	printf("%d",mdc);

}

int main(){
	freopen("questao9.in","r",stdin);
	freopen("questao9.out","w",stdout);


	while(ler_dados()){
		processa();
	}

	return 0;
}