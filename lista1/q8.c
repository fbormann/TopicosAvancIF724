#include <stdio.h>


int n, a[50];

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	int i = 0;
	for(; i < n;i++){
		scanf("%d", &a[i]);
	}
	return 1;

}
void processa(){
	int temp = 0;
	
	
	int i =0;
	for(;i<n;){
		if(a[i] != i+1){ //Caso o valor de a naquela posicao nao seja o valor indicado dele proprio (ou seja, sua posicao i+1)
			temp = a[i]; 
			a[i] = a[temp-1];
			a[temp-1] = temp;
		}else
			i++;
	}
	int j =0;
	for(;j < n;j++){
		printf("%d",a[j]);
	}

}

int main(){
	freopen("questao8.in","r",stdin);
	freopen("questao8.out","w",stdout);


	while(ler_dados()){
		processa();
	}

	return 0;


}
