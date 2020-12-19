#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

void gotoxy(int col, int lin)

{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
	                              (COORD){col-1,lin-1});
}

int main(){
	
	system("color 2");
	
	unsigned int coluna = 33, linha = 11;
	char x, resposta, esc_modulo, nome[50], hobby[30], enter = 0;
	double base, area_figura, altura, diagonal_menor, diagonal_maior, aresta, num1, num2, resultado, Xa, Xb, Xc, Ya, Yb, Yc, p1, p2, area_triangulo_1, area_triangulo_2;
    int operacao, escolha_op, escolha_livro, escolha_jogos;

    printf("\n Program");
    printf("\n\n                                        Menu");
    printf("\n\n\n 'A' - Basic Operations");
    printf("\n 'B' - Area of figures calculator");
    printf("\n 'C' - Conversation");
    printf("\n 'D' - Exit program");
    printf("\n\n\n Choose the option: ");
    fflush(stdin);
    scanf("%c", &esc_modulo);
    esc_modulo = toupper(esc_modulo);
    printf("\a");
    
    while(esc_modulo == 'A' || esc_modulo =='B' || esc_modulo == 'C'){
	
    switch(esc_modulo){
	 
    case 'A':
	
	system("cls");

    printf("\n Program -> Basic Operations ");
	printf("\n\n\n                                  Basic Operations");
	printf("\n\n 1 - Adittion");
	printf("\n 2 - Subtraction");
	printf("\n 3 - Multiplication");
	printf("\n 4 - Division");
	printf("\n 5 - Potentiation");
	printf("\n 6 - Hipotenuse Calculation");
	printf("\n 7 - Heron's Formula");
	printf("\n 8 - Exit this module\n");
	printf("\n\n Choose the option: ");
	fflush(stdin);
	scanf("%d", &operacao); 
	printf("\a");
	
	while(operacao == 1 || operacao == 2 || operacao == 3 || operacao == 4 || operacao == 5 || operacao == 6 || operacao == 7 || operacao == 8){
	
	switch(operacao){
		
	case 1:
		
		printf("\n\n ADITTION");
		printf("\n Type the first number: ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
		printf("\n Type the second number: ");
		fflush(stdin);
		scanf("%lf", &num2);
				printf("\a");
		
		resultado = num1 + num2;
		
		printf("\n\n %.2lf + %.2lf = %.2lf\n\n\n", num1, num2, resultado);
		system("pause & cls");
	    break;
	
	case 2:
		
        printf("\n\n SUBTRACTION");
	    printf("\n Type the first number: ");
		fflush(stdin);
		scanf("%lf", &num1);
	    printf("\a");
		
     	printf("\n Type the second number: ");
	 	fflush(stdin);
		scanf("%lf", &num2);
				printf("\a");
	
		resultado = num1 - num2;
		
		printf("\n\n %.2lf [-] %.2lf = %.2f\n\n\n", num1, num2, resultado);

		system("pause & cls");
	    break;
	    
	case 3:
	    
		printf("\n\n MULTIPLICATION");	
	    printf("\n Type the first number: ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
     	printf("\n Type the second number: ");
		fflush(stdin);
		scanf("%lf", &num2);
		printf("\a");
		
		resultado = num1 * num2;
		
		printf("\n\n %.2lf * %.2lf = %.2lf\n\n\n", num1, num2, resultado);
		system("pause & cls");
	    break;
	    
    case 4:
	    
		printf("\n\n DIVISION");	
		printf("\n Type the first number: ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
     	printf("\n Type the second number: ");
		fflush(stdin);
		scanf("%lf", &num2);
		printf("\a");
		
		while(num1 == 0 || num2 == 0){
		
		printf("\n Impossible to perform calculation!\n\n\n");
		
		printf("\n Type the first number: ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
     	printf("\n Type the second number: ");
		fflush(stdin);
		scanf("%lf", &num2);
		printf("\a");
			
}
			
		resultado = num1 / num2;
		
		printf("\n\n %.2lf / %.2lf = %.2lf\n\n\n", num1, num2, resultado);
		system("pause & cls");
		break;

	    
	case 5:
	    
		printf("\n\n POTENTIATION");	
		printf("\n Type the first number (base) of the potentiation: ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
		printf("\n Type the second number (exponent) of the potentiation: ");
		fflush(stdin);
		scanf("%lf", &num2);
		printf("\a");
		
		resultado = pow(num1,num2);
		
		printf("\n\n %.2lf ^ %.2lf = %.2lf\n\n\n", num1, num2, resultado);
		system("pause & cls");
	    break;
	    
	case 6:
	    
		printf("\n\n HIPOTENUSE CALCULATION");	
		printf("\n Cathetus (a): ");
		fflush(stdin);
		scanf("%lf", &num1);
		printf("\a");
		
		printf("\n Cathetus (b): ");
		fflush(stdin);
		scanf("%lf", &num2);
		printf("\a");
		
		resultado = sqrt(pow((num1),2) + pow((num2),2));
		
		printf("\n\n Cathetus (a) - %.2lf", num1);
		printf("\n Cathetus (b) - %.2lf", num2);
		printf("\n Hipotenuse(x) = %.2lf\n\n\n", resultado);
		system("pause & cls");
	    break;
	    
	case 7:
		
		printf("\n\n HERON'S FORMULA");
		printf("\n Type the side (a) of the X triangle: ");
		fflush(stdin);
		scanf("%lf", &Xa);
		printf("\a");
		
		printf("\n Type the side (b) of the X triangle: ");
		fflush(stdin);
		scanf("%lf", &Xb);
		printf("\a");
		
		printf("\n Type the side (c) of the X triangle: ");
		fflush(stdin);
		scanf("%lf", &Xc);
		printf("\a");
		
		printf("\n Type the side (a) of the Y triangle: ");
		fflush(stdin);
		scanf("%lf", &Ya);
		printf("\a");
		
		printf("\n Type the side (b) of the Y triangle: ");
		fflush(stdin);
		scanf("%lf", &Yb);
		printf("\a");
		
		printf("\n Type the side (c) of the Y triangle: ");
		fflush(stdin);
		scanf("%lf", &Yc);
		printf("\a");
		
		p1 = (Xa + Xb + Xc) / 2;
        p2 = (Ya + Yb + Yc) / 2; 
        
        area_triangulo_1 = sqrt(p1 * (p1 - Xa) * (p1 - Xb) * (p1 - Xc));
        area_triangulo_2 = sqrt(p2 * (p2 - Ya) * (p2 - Yb) * (p2 - Yc));
	
	    printf("\n");
	    
	    printf("\n Area of the X triangle = %.4lf", area_triangulo_1);
	    printf("\n Area of the Y triangle = %.4lf", area_triangulo_2);
	    
	    if(area_triangulo_1 > area_triangulo_2)
	    
	    printf("\n\n Triangle of greater area: X\n\n\n\n\n");
	    
	    else if(area_triangulo_2 > area_triangulo_1)
	    
	    printf("\n\n Triangle of greater area: Y\n\n\n\n\n");
	    
	    else
	    
	    printf("\n\n Both triangle have the same area. \n\n\n\n\n");
	    system("pause & cls");
		break;

	case 8:
	    
	    printf("\n\n Are you sure you want to exit this module ['Y': YES] ['N': NO]?: ");
	    fflush(stdin);
	    scanf("%c", &resposta);
	    resposta = toupper(resposta);
	    printf("\a");
	    
	    if(resposta == 'Y'){
	
    	system("cls");
        printf("\n Program");
        printf("\n\n                                        Menu");
	    printf("\n\n 'A' - Basic Operations");
        printf("\n 'B' - Area of figures calculator");;
    	printf("\n 'C' - Conversation");
   	    printf("\n 'D' - Exit program");
        printf("\n\n\n Choose the option: ");
        fflush(stdin);
        scanf("%c", &esc_modulo);
        esc_modulo = toupper(esc_modulo);
       	printf("\a");	
       	break;
}
	else if(resposta == 'N'){
		
	system("cls");
	break;
}

	else{
		
	break;	
}

}
    
	system("cls");
    printf("\n Program -> Basic Operations ");
	printf("\n\n\n                                  Basic Operations");
	printf("\n 1 - Adittion");
	printf("\n 2 - Subtraction");
	printf("\n 3 - Multiplication");
	printf("\n 4 - Division");
	printf("\n 5 - Potentiation");
	printf("\n 6 - Hipotenuse Calculation");
	printf("\n 7 - Heron's Formula");
	printf("\n 8 - Exit this module\n");
	printf("\n Choose the option: ");
	fflush(stdin);
	scanf("%d", &operacao); 
	printf("\a");
	
}
	
	case 'B':
	
	system("cls");	
	printf("\n     Program -> Area of figures calculator");
	printf("\n\n     1 - Rectangle");
	printf("\n     2 - Triangle");
	printf("\n     3 - Lozenge");
	printf("\n     4 - Cube");
	printf("\n     5 - Exit this Module");
	printf("\n\n     Choose the option: ");
	fflush(stdin);
	scanf("%d", &escolha_op);
	
	while(escolha_op == 1 || escolha_op == 2 || escolha_op == 3 || escolha_op == 4 || escolha_op == 5){
		
	switch(escolha_op){
	
	case 1:
		
	printf("\a");
	coluna = 33; linha = 11;
		
    for(coluna = 33; coluna <= 43; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	

	for(linha = 11; linha <= 21; ++linha)
		
		{
			gotoxy(43, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	
	printf("\a");    
	
    for(coluna = 43; coluna >= 33; --coluna)
       
	    {
			gotoxy(coluna, 21);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
		
	printf("\a");	
	
	for(linha = 21; linha >= 11; --linha)
		
		{
			gotoxy(33, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");	
	    }
	    	    
	gotoxy(30,16); printf("(h)");
	
    gotoxy(37, 22); printf("(b)");
    
    printf("\a");
    
    printf("\n\n\n Formula: base * height");
    
	printf("\n\n\n Enter the base(b) of the rectangle: ");
	fflush(stdin);
	scanf("%lf", &base);
	gotoxy(36, 22);  printf("\a"); printf("(%.2lf)", base);
	
	printf("\n\n\n\n\n\n\n\n Enter the height(h) of the rectangle: ");
	fflush(stdin);
	scanf("%lf", &altura);
	printf("\a");
	
	if(altura <= 9)
	
	{	
	gotoxy(27,16); printf("(%.2lf)", altura);
    }
	
	else
	
	{
	gotoxy(26,16); printf("(%.2lf)", altura);
    }

	area_figura = base * altura;
	
	gotoxy(36,16); printf("Area:");
	gotoxy(35,17); printf("=%.2lf= ", area_figura);
	gotoxy(37,18); printf("cm2");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause & cls");
	break;
	
	case 2:
		
	printf("\a");	
	coluna = 33; linha = 11;
		
	for(coluna = 33; coluna <= 34; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	
	coluna = 33; linha = 12;	

	for(coluna = 34; coluna <= 35; ++coluna)
		
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	    
	printf("\a");	
	coluna = 33; linha = 13;
	
	for(coluna = 35; coluna <= 36; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	
	coluna = 33; linha = 14;	

	for(coluna = 36; coluna <= 37; ++coluna)
		
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	    
	printf("\a");	
	coluna = 33; linha = 15;
	    
	    for(coluna = 37; coluna <= 38; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	
	coluna = 33; linha = 16;	

	for(coluna = 38; coluna <= 39; ++coluna)
		
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	    
	printf("\a");	
	coluna = 33; linha = 17;
	    
	for(coluna = 39; coluna <= 40; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	
	coluna = 33; linha = 17;
	
    for(coluna = 38; coluna >= 26; --coluna)
       
	    {
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	   
	gotoxy(26, 17);  printf("%c\n", 219); 
	fflush(stdin);
	usleep(2000);
			
    gotoxy(27, 16);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(28, 15);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(29, 14);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
   	gotoxy(30, 13);  printf("%c\n", 219);
   	fflush(stdin);
	usleep(2000);
			
    gotoxy(31, 12);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(32, 11);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(33, 11);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    printf("\n\n\n\n\n\n\n\n\n");
	
	gotoxy(25,14); printf("(h)");
	
    gotoxy(32, 18); printf("(b)");
    
    printf("\a");
    printf("\n\n\n Formula: (base * height) / 2");
    
	printf("\n\n\n Enter the base(b) of the triangle: ");
	fflush(stdin);
	scanf("%lf", &base);
	gotoxy(30, 18);  printf("\a"); printf("(%.2lf)", base);
	
	printf("\n\n\n\n\n\n\n\n Enter the height(h) of the triangle: ");
	fflush(stdin);
	scanf("%lf", &altura);
	printf("\a");
	
	if(altura <= 9)
	
	{	
	gotoxy(22,14); printf("(%.2lf)", altura);
    }
	
	else
	
	{
	gotoxy(21,14); printf("(%.2lf)", altura);
    }

	area_figura = (base * altura) / 2;
	
	gotoxy(31,14); printf("Area:");
	gotoxy(29,15); printf("=%.2lf=", area_figura);
	gotoxy(31,16); printf("cm2");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause & cls");
	break;

	case 3:
		
	// BEGIN - Primeira parte do Lozango // 
			
    gotoxy(33, 11);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(34, 12);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(35, 13);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
   	gotoxy(36, 14);  printf("%c\n", 219);
   	fflush(stdin);
	usleep(2000);
			
    gotoxy(37, 15);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(38, 16);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(39, 17);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	gotoxy(40, 18);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);
			
	gotoxy(41, 19);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	gotoxy(42, 20);  printf("%c\n", 219); 
    	fflush(stdin);
			usleep(2000);
			
	// END - Primeira parte do Lozango //		
			
			
	// BEGIN - Segunda parte do Lozango //
	
    gotoxy(41, 21);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(40, 22);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(39, 23);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
   	gotoxy(38, 24);  printf("%c\n", 219);
   	fflush(stdin);
	usleep(2000);
			
    gotoxy(37, 25);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(36, 26);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(35, 27);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	gotoxy(34, 28);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);
			
	gotoxy(33, 29);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	// END - Segunda parte do Lozango
	
	
	// BEGIN - Terceira parte do Lozango
				
	gotoxy(32, 28);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);
			
    gotoxy(31, 27);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(30, 26);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(29, 25);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
   	gotoxy(28, 24);  printf("%c\n", 219);
   	fflush(stdin);
	usleep(2000);
			
    gotoxy(27, 23);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(26, 22);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);
			
    gotoxy(25, 21);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(24, 20);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);
			
	// END - Terceira parte do Lozango		
			
	
	// BEGIN - Quarta parte do Lozango
			
	gotoxy(25, 19);  printf("%c\n", 219); 
    fflush(stdin);
	usleep(2000);		
			
	gotoxy(26, 18);  printf("%c\n", 219); 
	fflush(stdin);
	usleep(2000);
		
    gotoxy(27, 17);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
    gotoxy(28, 16);  printf("%c\n", 219);
    fflush(stdin);
    usleep(2000);
			
    gotoxy(29, 15);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
   	gotoxy(30, 14);  printf("%c\n", 219);
   	fflush(stdin);
	usleep(2000);
			
	gotoxy(31, 13);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	gotoxy(32, 12);  printf("%c\n", 219);
    fflush(stdin);
	usleep(2000);
			
	printf("\a"); 
	coluna = 25; linha = 20;	
		
    for(coluna = 26; coluna <= 40; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	 
	coluna = 33; linha = 30;
	 
	for(linha = 13; linha <= 27; ++linha)
		
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }		
		
	printf("\a");	 
	coluna = 25; linha = 32;
			
	for(coluna = 25; coluna <= 43; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	 
	coluna = 47; linha = 10;
	 
	for(linha = 11; linha <= 29; ++linha)
		
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }		
    
    gotoxy(32, 33); printf("(d)");
	
    gotoxy(49, 20); printf("(D)");
    
    printf("\a");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n Formula: (lower diagonal * higher diagonal) / 2");
    
	printf("\n\n\n\n Enter the lower diagonal(d) of the lozenge: ");
	fflush(stdin);
	scanf("%lf", &diagonal_menor);
	gotoxy(32, 33);  printf("\a"); printf("(%.2lf)", diagonal_menor);
	
	printf("\n\n\n\n\n\n\n\n\n\n Enter the higher diagonal(D) of the lozenge: ");
	fflush(stdin);
	scanf("%lf", &diagonal_maior);
	gotoxy(49, 20);  printf("\a"); printf("(%.2lf)", diagonal_maior);
	
	area_figura = (diagonal_menor * diagonal_maior) / 2;
	
	gotoxy(32,19); printf("Area:");
	gotoxy(30,20); printf("=%.2lf= ", area_figura);
	gotoxy(32,21); printf("cm2");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause & cls");
	break;

    case 4:
    	
    printf("\a");
	coluna = 33; linha = 14;
		
    for(coluna = 33; coluna <= 43; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");	

	for(linha = 14; linha <= 19; ++linha)
		
		{
			gotoxy(43, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
	    }
	
	printf("\a");    
	
    for(coluna = 43; coluna >= 33; --coluna)
       
	    {
			gotoxy(coluna, 19);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
		
	printf("\a");	
	
	for(linha = 19; linha >= 14; --linha)
		
		{
			gotoxy(33, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");	
	    }	
	    
    gotoxy(33,13); printf("%c\n", 219);
    gotoxy(34,12); printf("%c\n", 219);
    gotoxy(35,11); printf("%c\n", 219);
    gotoxy(36,10); printf("%c\n", 219);
    
    gotoxy(43,13); printf("%c\n", 219);
    gotoxy(44,12); printf("%c\n", 219);
    gotoxy(45,11); printf("%c\n", 219);
    gotoxy(46,10); printf("%c\n", 219);
    
    gotoxy(44,19); printf("%c\n", 219);
    gotoxy(45,18); printf("%c\n", 219);
    gotoxy(46,17); printf("%c\n", 219);
    
    printf("\a");
	coluna = 35; linha = 10;
		
    for(coluna = 36; coluna <= 46; ++coluna)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
	
	printf("\a");
	
	coluna = 46; linha = 11;
	
	for(linha = 11; linha <= 17; ++linha)
    
		{
			gotoxy(coluna, linha);
			printf("%c\n", 219);
			fflush(stdin);
			usleep(15000);
			system("color 2");
		}
		
    printf("\a");
    printf("\n\n\n\n\n Formula: (aresta * aresta) * 6  ");
    
	printf("\n\n\n Enter aresta measure: ");
	fflush(stdin);
	scanf("%lf", &aresta);
	printf("\a");
	
	area_figura = (aresta * aresta) * 6;
	
	if(area_figura < 100)
	{
    gotoxy(36,16); printf("Area:");
	gotoxy(35,17); printf("=%.2lf", area_figura);
	gotoxy(37,18); printf("cm2");
	}
	
	else{
	
	gotoxy(36,16); printf("Area:");
	gotoxy(35,17); printf("=%.2lf", area_figura);
	gotoxy(37,18); printf("cm2=");
    }
    
 	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause & cls");
	break;

	case 5:
	    
	printf("\n\n     Are you sure you want to exit this module ['Y': YES] ['N': NO]?: ");
	fflush(stdin);
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	printf("\a");
	    
	if(resposta == 'Y'){
	    
    system("cls");
    printf("\n Program");
    printf("\n\n                                        Menu");
	printf("\n\n 'A' - Basic Operations");
    printf("\n 'B' - Area of figures calculator");
    printf("\n 'C' - Conversation");
    printf("\n 'D' - Exit program");
    printf("\n\n\n Choose the option: ");
    fflush(stdin);
    scanf("%c", &esc_modulo);
    esc_modulo = toupper(esc_modulo);
    printf("\a");	
    break;
	}
	
	else 

    system("cls");
    
}
    system("cls");	
	printf("\n     Program -> Area of figures calculator");
	printf("\n\n     1 - Rectangle");
	printf("\n     2 - Triangle");
	printf("\n     3 - Lozenge");
	printf("\n     4 - Cube");
	printf("\n     5 - Exit this Module");
	printf("\n\n     Choose the option: ");
	fflush(stdin);
	scanf("%d", &escolha_op);
    
}

	case 'C':
		
	system("cls");	
	printf("\n Program -> Conversation");
    printf("\n\n 1 - Play videogames");
    printf("\n 2 - Read");
    printf("\n 3 - Exit this module");
    printf("\n\n Choose the option: ");
    fflush(stdin);
    scanf("%d", &escolha_op);
    printf("\a");
	
    while(escolha_op == 1 || escolha_op == 2 || escolha_op == 3){
    	
    switch(escolha_op){
			
    case 1:
	
    printf("\n\n A list of games you may like: ");
    printf("\n\n     [1] Battlefield         [4] FIFA             [7] Call of Duty");
    printf("\n     [2] Fortnite            [5] PUBG             [8] APEX LEGENDS");
    printf("\n     [3] Minecraft           [6] Star Wars        [9] Skyrim");
    printf("\n\n     [10] Exit Module");
    printf("\n\n\n Insert the videogame number here to enter its Youtube page: ");
    fflush(stdin);
    scanf("%d", &escolha_jogos);
    
    while(escolha_jogos == 1 || escolha_jogos == 2 || escolha_jogos == 3 || escolha_jogos == 4 || escolha_jogos == 5 || escolha_jogos == 6 || escolha_jogos == 7 || escolha_jogos == 8 || escolha_jogos == 9 || escolha_jogos == 10){
	
    switch(escolha_jogos){
	
    case 1:
    
    printf("\a");
    system("start https://www.youtube.com/user/Battlefield");
    break;
    
	case 4:
    
    printf("\a");
    system("start https://www.youtube.com/channel/UC-IwOQhOm_nRpdTU9rzhFUQ/home");
    break;
    
    case 7: 
    
    printf("\a");
    system("start https://www.youtube.com/user/CALLOFDUTY");
    break;

    case 2:
    
    printf("\a");
    system("start https://www.youtube.com/channel/UClG8odDC8TS6Zpqk9CGVQiQ"); 
    break;

    case 5: 
    
    printf("\a");
    system("start https://www.youtube.com/channel/UCnXDQbqIdp-HQuDyM4p12ng");
    break;

    case 8:
    
    printf("\a");
    system("start https://www.youtube.com/channel/UC0ZV6M2THA81QT9hrVWJG3A");
    break;

    case 3:
    
    printf("\a");
    system("start https://www.youtube.com/user/TeamMojang");
    break;

    case 6:
    
    printf("\a");
    system("start https://www.youtube.com/user/EAStarWars");
    break;
    
    case 9:
    
    printf("\a");
    system("start https://www.youtube.com/channel/UCLtQ_vIDyS_BAiWep8UtobA");
    break;
    
    case 10:
	 
	printf("\a");    
	printf("\n\n Are you sure you want to exit this module ['Y': YES] ['N': NO]?: ");
	fflush(stdin);
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	printf("\a");
	    
	if(resposta == 'Y'){
	
	system("cls");	
	printf("\n Program -> Conversation");
    printf("\n\n 1 - Play videogames");
    printf("\n 2 - Read");
    printf("\n 3 - Exit this module");
    printf("\n\n Choose the option: ");
    fflush(stdin);
    scanf("%d", &escolha_op);
    break;
    	
}
	else if(resposta == 'N'){ 
		
	system("cls");
	break;
}
	else{
		
	}

}
    
    system("cls");
    printf("\n Program -> Conversation");
	printf("\n\n A list of games you may like: ");
    printf("\n\n     [1] Battlefield         [4] FIFA             [7] Call of Duty");
    printf("\n     [2] Fortnite            [5] PUBG             [8] APEX LEGENDS");
    printf("\n     [3] Minecraft           [6] Star Wars        [9] Skyrim");
    printf("\n\n     [10] Exit Module");
    printf("\n\n\n Insert the videogame number here to enter its Youtube page: ");
    fflush(stdin);
    scanf("%d", &escolha_jogos);

}
	case 2:
   
   	system("cls");
   	printf("\n Program -> Conversation");
	printf("\n\n 1 - Action / Adventure ");
	printf("\n 2 - Sci-fi");
	printf("\n 3 - Horror");
	printf("\n 4 - Romance");
	printf("\n 5 - Exit Module");
	printf("\n\n What is your favorite type of reading?: ");
	fflush(stdin);
	scanf("%d", &escolha_livro);
	printf("\a");
	
	while(escolha_livro == 1 || escolha_livro == 2 || escolha_livro == 3 || escolha_livro == 4 || escolha_livro == 5){
	
	switch(escolha_livro){
	
	case 1:
	
	printf("\n\nTop 10 Action / Adventure books list");
	
	printf("\n\n\n 1 - Angels and Demons by Dan Brown");
	printf("\n 2 - The Maze Runner by James Dashner");
	printf("\n 3 - The name of the Wind by Patrick Rothfuss");
	printf("\n 4 - Life of Pi by Yan Martel");
	printf("\n 5 - Mistborn by Brandon Sanderson");
	printf("\n 6 - The Last of the Wizards by Lisa Maxwell");
	printf("\n 7 - World War Z by Max Brooks");
	printf("\n 8 - Red Order: Children of Degradation by Felipe Castilho");
	printf("\n 9 - Conjurer: The Apprentice by Taran Matharu");
	printf("\n 10 - The eye of the World by Roberto Jordan");
	printf("\n\n Press enter... ");
	fflush(stdin);
	scanf("%c", &enter);
	printf("\a");
	break;

    case 2:
    
	printf("\n\nTop 10 Sci-fi books list");
	
	printf("\n\n\n 1 - The Time Machine by H. G. Wells");
	printf("\n 2 - The War of the Worlds by H. G. Wells");
	printf("\n 3 - I, Robot by Isaac Asimov");
	printf("\n 4 - 2001: A Space Odyssey by Arthur C. Clarke");
	printf("\n 5 - Do Androids Dream of Electric Sheep? by Philip K. Dick");
	printf("\n 6 - The Hitchhikers Guide to the Galaxy by Douglas Adams");
	printf("\n 7 - Neuromancer by William Gibson");
	printf("\n 8 - Ender´s Game by Orson Scott Card");
	printf("\n 9 - Snow Crash by Neal Stephenson");
	printf("\n 10 - Ready Player One by Ernest Cline");
	printf("\n\n Press enter... ");
	fflush(stdin);
	scanf("%c", &enter);
	printf("\a");
	break;
	
	case 3:
		
	printf("\n\n Top 10 Horror books list");
	
	printf("\n\n\n 1 - The Euins by Scott Smith");
	printf("\n 2 - The Exorcist by William Peter Blatty");
	printf("\n 3 - The Village by Raphael Montes");
	printf("\n 4 - The Illuminated by Stephen King");
	printf("\n 5 - The Rise of the Antichrist by Tulio Siqueira");
	printf("\n 6 - I'm Thinking of Ending It All by Iain Reid");
	printf("\n 7 - The Rosemary's Baby by Ira Levin");
	printf("\n 8 - Horror in Amityville by Jay Anson");
	printf("\n 9 - A Submerged Girl by Caitlín Kiernan");
	printf("\n 10 - The Ghost Bride by Yangze Choo");
	printf("\n\n Press enter... ");
	fflush(stdin);
	scanf("%c", &enter);
	printf("\a");
	break;	
	
	case 4:
			
	printf("\n\n Top 10 Romance books list");
	
	printf("\n\n\n 1 - Pride and Prejudice by Jane Austen");
	printf("\n 2 - The Miserables by Victor Hugo");
	printf("\n 3 - Dom Casmurro by Machado de Assis");
	printf("\n 4 - Anna Karenina by Liev Tolstoi");
	printf("\n 5 - The Scavengers of Shells by Rosamunde Pilcher");
	printf("\n 6 - Wuthering Heights by Emily Bronte");
	printf("\n 7 - Love in the Time of Cholera by Gabriel Garcia Marquez");
	printf("\n 8 - The Portrait of Dorian Gray by Oscar Wilde");
	printf("\n 9 - One Hundred Years of Loneliness by Gabriel Garcia Marquez");
	printf("\n 10 - Crime and Punishment by Fiodor Dostoievski");
	printf("\n\n Press enter... ");
	fflush(stdin);
	scanf("%c", &enter);
	printf("\a");
	break;	
	
	case 5: 
	
	printf("\n\n Are you sure you want to exit this module ['Y': YES] ['N': NO]?: ");
	fflush(stdin);
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	printf("\a");
	    
	if(resposta == 'Y'){
	
	system("cls");	
	printf("\n Program -> Conversation");
    printf("\n\n 1 - Play videogames");
    printf("\n 2 - Read");
    printf("\n 3 - Exit this module");
    printf("\n\n Choose the option: ");
    fflush(stdin);
    scanf("%d", &escolha_op);
    printf("\a");
    break;
    	
}
	else if(resposta == 'N'){ 
		
	system("cls");
	break;
}
	else{
		
	break;
	
	}

}

	system("cls");
   	printf("\n Program -> Conversation");
	printf("\n\n 1 - Action / Adventure ");
	printf("\n 2 - Sci-fi");
	printf("\n 3 - Horror");
	printf("\n 4 - Romance");
	printf("\n 5 - Exit Module");
	printf("\n\n What is your favorite type of reading?: ");
	fflush(stdin);
	scanf("%d", &escolha_livro);
	printf("\a");

}
	
	case 3:
	    
	printf("\n\n Are you sure you want to exit this module ['Y': YES] ['N': NO]?: ");
	fflush(stdin);
	scanf("%c", &resposta);
	resposta = toupper(resposta);
	printf("\a");
	    
	if(resposta == 'Y'){
	
	system("cls");
    printf("\n Program");
    printf("\n\n                                        Menu");
    printf("\n\n\n 'A' - Basic Operations");
    printf("\n 'B' - Area of figures calculator");
    printf("\n 'C' - Conversation");
    printf("\n 'D' - Exit program");
    printf("\n\n\n Choose the option: ");
    fflush(stdin);
    scanf("%c", &esc_modulo);
    esc_modulo = toupper(esc_modulo);
    printf("\a");
}

	else if(resposta == 'N')
		
	system("cls");
	
	else{
		
	}

    system("cls");
    printf("\n Program -> Conversation");
    printf("\n\n 1 - Play videogames");
    printf("\n 2 - Read");
    printf("\n 3 - Exit this module");
    printf("\n\n Choose the option: ");
    fflush(stdin);
    scanf("%d", &escolha_op);
    printf("\a");
}	
    case 'D':
	
	system("pause & cls");
	break;

}
	printf("\n Program");
    printf("\n\n                                        Menu");
    printf("\n\n\n 'A' - Basic Operations");
    printf("\n 'B' - Area of figures calculator");
    printf("\n 'C' - Conversation");
    printf("\n 'D' - Exit program");
    printf("\n\n\n Choose the option: ");
    fflush(stdin);
    scanf("%c", &esc_modulo);
    esc_modulo = toupper(esc_modulo);
    printf("\a");
		}
	}
}

