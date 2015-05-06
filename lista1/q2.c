#include <stdio.h>
#include <string.h>


int n,time[50];
char words[50][256];
int howmany;
char text[100][256];
int totaltime;

int ler_dados()
{
	if(scanf("%d",&n) != 1) return 0;
	
	for(int i = 0; i < n;i++){
		scanf("%s",&words[i]); //the word itself
		scanf("%d",&time[i]); //the milisseconds needed to read it.
	}

	scanf("%d",&howmany);
	for(int j = 0; j < howmany;j++){
		scanf("%s",&text[j]);
	}
	
	return 1;

}

void processa(){
	
	for(int i  = 0; i < howmany;i++){
		for(int j = 0; j < n;j++){
			if(strcmp(text[i],words[j]) == 0){ //If the words are equal
				totaltime += time[j];
				j = n;
			}
		}
	}

	printf("caso 1:  %d milissegundos" , totaltime);
	
}

int main(){
	freopen("questao2.in","r",stdin);
	freopen("questao2.out","w",stdout);


	while(ler_dados()){
		processa();
	}
	
	return 0;


}