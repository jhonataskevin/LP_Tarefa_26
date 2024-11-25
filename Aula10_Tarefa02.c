#include <stdio.h>

typedef struct f{
	int ladoA;
	int ladoB;
	int perimetro;
	int area;
}Figura;

int main(){
	
	Figura retangulo;
	FILE *entrada;
	
	entrada = fopen("retang.in", "r");
	if(entrada == NULL){
		
		printf("Erro ao abrir o aquivo retang.in\n");
		exit (1);
	}
	
	while(1){
		fscanf(entrada,"%d %d", &retangulo.ladoA, &retangulo.ladoB);
		
		if(retangulo.ladoA == 0 || retangulo.ladoB == 0){
			break;
		}
		
		retangulo.perimetro = retangulo.ladoA*2 + retangulo.ladoB*2;
		retangulo.area = retangulo.ladoA * retangulo.ladoB;
		
		printf("Lado A = %d - Lado B = %d\n", retangulo.ladoA, retangulo.ladoB);
		printf("Area = %d - Peremetro = %d\n", retangulo.area, retangulo.perimetro);
		printf("-----------------------------\n");
		
	}
	
}
