#include <stdio.h>
#include <conio.h>
int main(){
float x;
float y;
  printf("digita l'altezza in metri : ");
  
  scanf("%f",&x);
  
  printf("digita il tuo peso in KG: ");
  
  scanf("%f",&y);
  
  float sexo = x * x;
  
  float c = y / sexo;
  
  printf("il tuo IMC: %f\n",c);
  
  if(c < 16.5){
    printf("Sei In Sottopeso severo");
    getch();
    
    }else if (c > 16.5 && c<18.5) {
     printf("Sottpeso");
     getch();

    }else if(c> 18.5 && c <25){
    printf("Sei Normale ");
    getch();
    
    }else if(c >25 && c<30){
       printf("Sei Sovvrapeso");
       getch();
       
     }else if (c >30.1 && c< 34.9){
       printf("Sei in Obesità primo grado");
       getch();
       
       }else if(c>34.9 && c<40){
       printf("Sei in Obesità secondo grado");
       getch();
       
       }else if(c>40){
       printf("Sei in Obesità di terzo grado");
       getch();
      }


       }
