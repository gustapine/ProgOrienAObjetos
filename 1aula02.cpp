#include <iostream>
#include <string>

main (){
	
	int idade;
	std::string nome;
	
	std::cout << "Qual o seu nome? ";
	std::getline (std::cin,nome);
	fflush(stdin);
	
	std::cout << "Qual a sua idade? ";
	std::cin >> idade;
	
	if(idade < 18){
		printf("Vai pra casa bebezao\n");
	}else if(idade >= 18 && idade < 60){
		printf("tutz tutz tutz...\n");
	}else{
		printf("Aproveite o fim do filme\n");
	}
	
return 0;	
}





/*#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int idade;
	char nome[10];
	
	printf("Qual o seu nome?");
	gets(nome);
	
	
	printf("Qual a sua idade?");
	scanf("%i",&idade);
	
	if(idade < 18){
		printf("Vai pra casa bebezao\n");
	}else if(idade >= 18 && idade < 60){
		printf("tutz tutz tutz...\n");
	}else{
		printf("Aproveite o fim do filme\n");
	}
	
	return 0;
}*/
