#include <stdio.h>


int n, a[10][100];
int sum;
int size;
int ler_dados()
{
    int i,j;
	if(scanf("%d",&n) != 1) return 0;
	for( i =0; i < n;i++){
		scanf("%d",&size);
		for( j = 0; j < size;j++){
				scanf("%d",&a[i][j]);
		}
	}

	return 1;

}

void processa(){
	int newsum; //Variavel da "soma " temporaria, utilizada para verificar se prosseguir pelos numeros negativos vale a pena.
	int i,j;
	for( i = 0;i < n; i++){
		newsum = 0;
		sum = 0;
		for( j = 0; j < 100;j++){
            if(a[i][j] > 0){
                if(newsum >= 0){
                    newsum += a[i][j];
                }else{
                    newsum = 0;
                }

                if(newsum >= sum){
                    sum = newsum;
                }

            }else{
                if(sum == 0) sum = newsum;
                newsum += a[i][j];
                if(newsum < 0) newsum = 0;
            }
		}
		printf("Soma : %d \n", sum);
	}





}

int main(){
	freopen("questao6.in","r",stdin);
	freopen("questao6.out","w",stdout);


	while(ler_dados()){
		processa();
	}

	return 0;


}
