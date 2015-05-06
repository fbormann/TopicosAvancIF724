#include <stdio.h>

int n, a[100000],b[100000]; //n e o tamanho do array

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

	//order them in ascending order.
	int found = 0;
	int smaller = 1;
	int index = 0;
	int i =0;
	for(;i<n;i++){ 
		if(a[i] > 0){
			b[a[i]] = 1;
			index++;
		}

	} 

	for(i=1;i<index;i++){
		if(b[i] == 0){
			smaller = i;
			i = index;
			found = 1;
		}else{
			smaller++;
		}
	}	

	if(!found){
		smaller++;
	}

	printf("%d ", smaller);
	

}

int main(){
	freopen("questao10.in","r",stdin);
	freopen("questao10.out","w",stdout);
	
	

	while(ler_dados()){
		processa();
	}

	return 0;
}