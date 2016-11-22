//
//  main.c
//  Esercizi 26-08-16
//
//  Created by giacomo osso on 26/10/16.
//  Copyright © 2016 Giacomo Osso. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>.

void es1(){
    
    int array[10] = {1,2,3,4,5,6,7,8,9};
    int i;
    
    for(i = 0; i < 9 ; i++){
        printf("[ %d ] = %d \n", i , array[i]);
    }
}

void es2(){
    int array[10] = {1,2,3,4,5,6,7,8,9};
    int i;
    int somma=0;
    
    for(i = 0; i <10; i++){
        somma += array[i];
    }
    
    printf("somma: %d \n", somma);
    
}
/*
 void es3(int array_size){
 
 // Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
 
 int my_array[array_size];
 
 int sott = 0;
 
 for(int i = 0; i < array_size; i++){
 my_array[i] = i;
 printf("Valore[%d] \n", my_array[i]);
 }
 
 for(int j = 0; j < array_size; j++){
 sott = sott - my_array[j];
 }
 
 printf("Sottrazione: %d", sott);
 
 }

 */
void es3(){
    
}

void es4(){
    float array[6] = {35.4 , 46.7, 77.55, 11.1, 9.04, 0.75 };
    
    for(int i = 0; i < 6; i++){
        
        my_array[i] = i + 0.00;
        
        printf("Valore[%2.2f] \n", my_array[i]);
        
    }
}


void es5(){
    float array[6] = {35.4 , 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i;
    float ris=0;
    for(i=0; i < 6 ; i++){
        ris -=array[i] ;
    }
    printf("Ris: %.2f \n", ris);
    
}

void es6(){
    float array[6]= { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i;
    float media=0;
    for(i=0; i<6 ; i++){
        media+=array[i];
    }
    media =media/6;
    
    printf("media: %.2f \n", media);
}

void es7(){
    int i ;
    float peso=5;
    float ris=0, ris2=0;
    float array [6]={35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    for(i=0;i<6;i++){
        ris=(array[i]*peso)+ris;
        ris2=ris2+peso;
        peso--;
    }
    ris=ris/ris2;
    printf("il risultato è %f",ris);
}

void es8(){
    int i ;
    float valoreMin,valoreMax;
    float ris=0;
    float array [6]={35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    valoreMin=array[0];
    valoreMax=array[0];
    for(i=1;i<6;i++){
        if(array[i]<valoreMin){
            valoreMin=array[i];
        }
        if(array[i]>valoreMax){
            valoreMax=array[i];
        }
        ris=ris+array[i];
    }
    ris=ris/6;
    printf("il valore minore è %f \n",valoreMin);
   	printf("il valore maggiore è %f \n",valoreMax);
    printf("il valore medio è %f \n",ris);
}

void es9(){
    int i,j ;
    float p=0;
    float array [6]={35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    printf("ordinamento crescente \n");
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(array[i]>array[j]){
                p=array[j];
                array[j]=array[i];
                array[i]=p;
            }
        }
    }
    for(i=0;i<6;i++){
        printf("%.2f \n",array[i]);
    }
    
    printf("ordinamento decrescente \n");
    for(i=0;i<6-1;i++){
        for(j=i+1;j<6;j++){
            if(array[i]<array[j]){
                p=array[j];
                array[j]=array[i];
                array[i]=p;
            }
        }
    }
    for(i=0;i<6;i++){
        printf("%.2f \n",array[i]);
    }
    
}

int wantcontinue(int menu){
    printf("Vuoi eseguirne un altro ? (true o false)\n ");
    scanf("%d" , &menu);
    return menu;
    }

int main(int argc, const char * argv[]) {
    
    int menu = true;
    int s;
    
    while(menu){
    
        printf("Menù \n");
        printf("------------------------- \n");
        printf("1 : Stampa gli elementi nell'array con la loro posizione \n \n");
        printf("2 : Somma gli elementi dell'array \n");
        printf("3 : Sottrae gli elementi dell'array \n");
        printf("4 : Moltiplica gli elementi di tipo float dell'array \n");
        printf("5 : Sottrae gli elementi di tipo float dell'array \n");
        printf("6 : Media aritmetica di elemtni di tipo float \n");
        printf("7 : Media ponderata di elementi di tipo float \n");
        printf("8 : Indica l'elemento valore maggiore , minore e media di un array \n");
        printf("9 : Esegue l'ordinamento crescente e decrescente \n");
        printf("------------------------- \n \n");
        printf("Quale esercizio vuoi che eseguo ? \n");
        scanf("%d", &s);
        
        
        if( s==1){
            es1();
            wantcontinue(&menu);
        }else if(s==2)
        
            es2();
            wantcontinue(&menu);
            }else if(s==3)
        
            es3();
            wantcontinue(&menu);
                }else if(s==4){
                    es4();
                    wantcontinue(&menu);
                }else if(s==5){
                        es5();


        case s==5:
            es5();
            wantcontinue(&menu);
            break;
            es6();
            wantcontinue(&menu);
        case s==6:
            es6();
            wantcontinue(&menu);
            break;
        case s==7:
            es7();
            wantcontinue(&menu);
            break;
        case s==8:
            es8();
            wantcontinue(&menu);
            break;
        case s==9:
            es9();
            wantcontinue(&menu);
            break;
        }
        
    }
    
}



