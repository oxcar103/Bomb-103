#include <stdio.h>	    // para printf()
#include <unistd.h>	    // para fork()
#include <stdlib.h>	    // para exit()
#include <string.h>	    // para strncmp()/strlen()
#include <sys/time.h>	// para gettimeofday(), struct timeval

void platzen(int valor);
void entscharft();

//Llamamos a las constantes con una sola letra para no dar pistas
const char A[]="Mira el esternocleidomastoideo de Arnold Schwarzenegger\n";    //Contraseña buena para complicada de escribir aunque la sepas.
const char T[]="Enter\n";           //Contraseña Troll porque por la forma de pedirla, parece que te piden que pulse Enter, pero se refiere a que la escribas.
const int B = 7331;                 //Código bueno, escogido porque este número volteado es leet(que suena como élite en inglés)
const int C = 5642;                 //Códigos falsos para despistar
//Contraseñas falsas para despistar.
const char D[]="Todo depende de la topología en la que estemos\n";
const char E[]="Disfruta la fruta, Juver sin azúcar, disfuta\n";
const char F[]="Si fallas la segunda contraseña, prepárate para reiniciar\n";

//Muerte y Destrución
void death0plt(){
	fork();
    death0plt();
}

//Esta función decidirá si se desactiva la bomba o no, y puede activar Muerte y Destrucción, }:-> uajajaja
void print0plt(int valor){
	if(valor == 1){
        printf("·························\n");
	    printf("··· bomba desactivada ···\n");
	    printf("·························\n");
	    exit(0);
    }
    else{
        printf("***************\n");
	    printf("*** BOOM!!! ***\n");
	    printf("***************\n");

        if(valor == 0){    
	        death0plt();
        }
    }

}

int main(){
#define SIZE 100
	char pass[2][SIZE];
	int code, i;
#define TLIM 3600               //Dispones de una hora
	struct timeval tv1,tv2; 	// gettimeofday() secs-usecs

    printf("Prepara un folio, un editor de textos, ddd,...\n");

    for(i = 10; i != 0; i--){
        printf("%d...\n",i);
        sleep(1);
    }

	gettimeofday(&tv1,NULL);

	printf("ADVERTENCIA!!! BOMBA ACTIVADA!!!\n");
	printf("Esto es una auténtica bomba contra el SO!!!\n");

    printf(" __________\n");
    printf("< uajajaja >\n");
    printf(" ----------\n");
    printf("   \\         ,        ,\n");
    printf("    \\       /(        )`\n");
    printf("     \\      \\ \\___   / |\n");
    printf("            /- _  `-/  '\n");
    printf("           (/\\/ \\ \\   /\\\n");
    printf("           / /   | `    \\\n");
    printf("           O O   ) /    |\n");
    printf("           `-^--'`<     '\n");
    printf("          (_.)  _  )   /\n");
    printf("           `.___/`    /\n");
    printf("             `-----' /\n");
    printf("<----.     __ / __   \\\n");
    printf("<----|====O)))==) \\) /====\n");
    printf("<----'    `--' `.__,' \\\n");

    int parametro = 169;      //Si no varía adecuadamente, la bomba explota

    printf("             |        |\n");
    printf("              \\       /\n");
    printf("        ______( (_  / \\______\n");
    printf("      ,'  ,-----'   |        \\\n");
    printf("      `--{__________)        \\/\n");

    //Pedimos las dos contraseñas y el código a la vez.
	printf("Escriba la contraseña:\n");
	fgets(pass[0],SIZE,stdin);
    printf("Ahora, Enter.\n");
	fgets(pass[1],SIZE,stdin);
	printf("Introduzca el código:\n");
	scanf("%i",&code);

	gettimeofday(&tv2,NULL);
    //Posibles variaciones de parámetro

    /*En los primeros 4 if(), comparamos el primer dato pedido al usuario
    con 4 string(3 contraseñas falsas y una buena), y realizamos una serie
    de valores a parámetro que determinaran si se acertó la contraseña buena
    de una forma liosa con el único objetivo de complicar la ingeniería inversa*/
    if (!strncmp(pass[0],A,strlen(A))
    || !strncmp(pass[0],D,strlen(D))
    || !strncmp(pass[0],E,strlen(E))){
        parametro *= C;
    }
	if (!strncmp(pass[0],A,strlen(A))
    || !strncmp(pass[0],E,strlen(E))
    || !strncmp(pass[0],F,strlen(F))){
        parametro /= 13;
    }
    if (!strncmp(pass[0],D,strlen(D))
    || !strncmp(pass[0],F,strlen(F))){
        parametro += 777;
    }
    if (!strncmp(pass[0],A,strlen(A))
    || !strncmp(pass[0],D,strlen(D))
    || !strncmp(pass[0],F,strlen(F))){
        parametro -= B;
    }

	if (tv1.tv_sec - tv2.tv_sec > TLIM){
        parametro = code * 0 + C;
        entscharft();
    }
    else if (code != B){
        if (code == C){
            printf("Uy! Casi\n");
        }

        parametro = code * 0 + C;
        entscharft();
    }
    else{
        platzen(parametro);
    }
    
    //La más peligrosa: si fallas la contraseña Troll, se activará Muerte y Destrucción
    if (strncmp(pass[1],T,strlen(T))){
        parametro = 0;
    }

    //Operaciones para distraer
    for(i = 0; i < code; i++){
        code = code - C;
        tv2 = tv1;
    }
    
    print0plt(parametro);    
}

//Función de pega
void platzen(int valor){
    int i;
    for(i = 1; i < 50*valor; i*=7){
        printf("\n");
    }
}

//Función de pega
void entscharft(){
    int i;
	for(i = 0; i < 5; i++){
        printf("\n");
    }
}

