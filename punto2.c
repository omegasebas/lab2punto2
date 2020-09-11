/*Este programa quiere que con tres cadenas de caracteres para poder comparar las palabras,mostrar las palabras al reves,
concadenarlas,mostrar su longitud y mostrar la suma en decimal de cada cadena.

 Autores:Leidy Ximena Garzón y Sebastian Babativa Veloza
 Versión:1.0
 */
 #include <stdio.h>
 #include <string.h>
 #define TAM_MAX 10
 #define MAX_TAM1 33
 #define MAX_TAM2 10
 #define TAM_MAX1 10
 
	typedef struct cadenas{
		char palabra1[TAM_MAX]; //primera palabra	 
		char palabra2[MAX_TAM2]; //segunda palabra
		char palabra3[TAM_MAX1]; //tercera palabra 
	}cadenas;

 void menu(int *opc);
 void ingresar_palabras(cadenas *pal,int *vali_palabras);
 void comparar_palabras(cadenas pal);
 void mostrar_alreves(cadenas pal);
 void concatenar_palabra(cadenas pal);	
 void longitud_palabra(cadenas pal);	
 void mostrar_suma(cadenas pal);	
 
 void main(void)
 {
	cadenas palabras;//estructura que contiene las tres palabras
	int opcion=0,validacion_pal=0;//validacion_pal es la bandera para saber si se ingresaron las palabras 
	
	  printf("\n\tBuenos días.Este programa realiza diferentes procesos con tres palabras de \n mínimo 3 caracteres y máximo 10\n\n");
	do{
	
	menu(&opcion);
	
	    switch(opcion)
       {
        case 1:
	    ingresar_palabras(&palabras,&validacion_pal);
		break;
		case 2:	
			if(validacion_pal==1)
			{  		
			comparar_palabras(palabras);
			}
			else
			{
			printf("\n\nPrimero debe ingresar las palabras\n\n");
			}
		break;
		case 3:
		    if(validacion_pal==1)
			{  
			mostrar_alreves(palabras);
			}
			else
			{
			printf("\n\nPrimero debe ingresar las palabras\n\n");
			}
		break;
		case 4:
			if(validacion_pal==1)
			{  
			concatenar_palabra(palabras);
			}
			else
			{
			printf("\n\nPrimero debe ingresar las palabras\n\n");
			}
		break;
        case 5:
			if(validacion_pal=1)
			{  		
			longitud_palabra(palabras);
			}
			else
			{
			printf("\n\nPrimero debe ingresar las palabras\n\n");
			}
	    break;
		case 6:
			if(validacion_pal==1)
			{  
			mostrar_suma(palabras);// muestra la suma decimal  de los caracteres de cada palabra
			}
			else
			{
			printf("\n\nPrimero debe ingresar las palabras\n\n");
			}
	    break;
		case 7: 	
	    printf("\n\nGracias por utilizar el programa,vuelva pronto\n\n");
	    break;
		default:
		printf("\n\nOpción incorrecta\n\n");
		break;
		}
	}while(opcion!=7);	
 }
 
 void menu(int *opc)
 {	
	 printf("\n\t Menú Principal\n");
	 printf("\n\n Inserta el número donde deseas ingresar\n\n");
	 printf("\n\n 1.Ingresar palabras \n");
	 printf("\n 2.Comparar palabras \n");
	 printf("\n 3.Mostrar palabras alreves \n");
	 printf("\n 4.Concatenar las palabras \n");
	 printf("\n 5.Longitud de cada palabra\n");
	 printf("\n 6.Mostrar la suma decimal de los caracteres de cada palabra\n");
	 printf("\n 7.Salir\n\n");
	 scanf("%d",opc);
	
 }

 void ingresar_palabras(cadenas *pal,int *vali_palabras)//palabras ingresadas por el usuario
 {
	 printf("\n\nLa forma de ingresar es palabra por palabra,mínimo 3 caracteres y máximo 10\n\n");
     printf("\n\n Ingresa la primera palabra\n");
     scanf("%s",&*pal->palabra1);
     printf("\n\n Ingrese la segunda palabra\n");
	 scanf("%s",&*pal->palabra2);
	 printf("\n\n Ingrese la tercera palabra\n");
	 scanf("%s",&*pal->palabra3);
	
	*vali_palabras=1;
     //se muestran las palabras ingresadas
     printf("\n\n La primera Palabra ingresada es: %s\n",pal->palabra1);
	 printf("\n\n La segunda Palabra ingresada es: %s\n",pal->palabra2);
	 printf("\n\n La tercera Palabra ingresada es: %s\n",pal->palabra3);
  
 }
   
   void comparar_palabras(cadenas pal)
  { 
	if(strcmp(pal.palabra1,pal.palabra2)==0){//strcmp compara dos palabras
	printf("\n\nlas dos primeras palabras son iguales\n\n");
	}
	else
	{ 
    printf("\n\nlas dos primeras palabras no son iguales\n\n"); 
	}
		
	    if(strcmp(pal.palabra1,pal.palabra3)==0){
		printf("\n\nla primera palabra y la tercer palabra son iguales\n\n");
		}
		else
		{ 
		printf("\n\nla primera palabra y la tercer palabra no iguales\n\n"); 
		}
			if(strcmp(pal.palabra2,pal.palabra3)==0){
			printf("\n\nla segunda palabra y la tercer palabra son iguales\n\n");
			}
			else
			{
			printf("\n\nla segunda palabra y la tercer palabra no iguales\n\n");  
			}
}
 void mostrar_alreves(cadenas pal)
 {
	 char str1[TAM_MAX],str2[MAX_TAM2];
	 char str3[TAM_MAX1];
	 char pal3[MAX_TAM2];
	 int cont1=0,cont11=0,cont2=0,cont22=0,cont3=0,cont33=0;
	 
	 
	for(cont1=(strlen(pal.palabra1)-1);cont1>=0;cont1--)
	{
	str1[cont11]=pal.palabra1[cont1];
	cont11++;
	}
		
		for(cont2=(strlen(pal.palabra2)-1);cont2>=0;cont2--)
		{
		str2[cont22]=pal.palabra2[cont2];
		cont22++;
		}
		
		stpcpy(pal3,pal.palabra3);
		
			
			for(cont3=(strlen(pal3)-1);cont3>=0;cont3--)
			{
			str3[cont33]=pal3[cont3];
			cont33++;
			}
		
	printf("\n la primer palabra alrevez es %s\n",str1);
	printf("\n la segunda palabra alrevez es %s\n",str2);
	printf("\n la  tercera palabra alrevez es %s\n",str3);
	
	} 
	

  void concatenar_palabra(cadenas pal)	 
 {
	 char concatenada[MAX_TAM1]; 
	 char concatenada1[MAX_TAM1];
		 
		strcpy(concatenada,pal.palabra1);//strcpy copia una cadena en otra
	 
		strcat(concatenada,pal.palabra2); //strcat concatena dos cadenas
	 
		strcpy(concatenada1,concatenada);
	 
		strcat(concatenada1,pal.palabra3);
	  
		printf("La palabra concatenada es: %s",concatenada1);
		
	  
 }
  void longitud_palabra(cadenas pal) 
 {
	 int lon1=0,lon2=0,lon3=0;

		lon1=strlen(pal.palabra1); //strlen longitud de la cadena
		lon2=strlen(pal.palabra2);
		lon3=strlen(pal.palabra3);
	 
	 
		printf("\n\n la longitud de la palabra numero 1 es : %d \n",lon1); 
		printf("\n la longitud de la palabra numero 2 es : %d \n ",lon2); 
		printf("\n la longitud de la palabra numero 3 es : %d \n ",lon3); 
		
 } 
 
 void mostrar_suma(cadenas pal)// muestra la suma decimal de los caracteres de cada palabra
  {
	int result1=0,result2=0,result3=0;
	int cont=0;
			
		for(cont=0;cont<=strlen(pal.palabra1)-1;cont++)
		{ 
		result1=result1+pal.palabra1[cont];
		}
        printf("\n\nEl resultado de la suma  decimal  de los caracteres de la primera palabra es:%d\n\n",result1);
 
			for(cont=0;cont<=strlen(pal.palabra1)-1;cont++)
			{ 
			result2=result2+pal.palabra2[cont];
			}
			printf("\n\nEl resultado de la suma  decimal  de los caracteres de la segunda palabra es:%d\n\n",result2);
				for(cont=0;cont<=strlen(pal.palabra1)-1;cont++)
				{ 
				result3=result3+pal.palabra3[cont];
				}
				printf("\n\nEl resultado de la suma  decimal  de los caracteres de la tercera palabra es:%d\n\n",result3);
				
  }