#include <stdio.h>


int n, a[50],count[10];

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	return 1;

}

void processa(){
	int mod = n%6;
	if(mod == 0){
		printf("E possivel obter %d",n);
	}else{
		printf("Nao e possivel obter %d",n);
	}
}



int main(){
	freopen("questao13.in","r",stdin);
	freopen("questao13.out","w",stdout);


	while(ler_dados()){
		processa();
	}

	return 0;


}
