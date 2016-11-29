//
//  main.c
//  2016 es sui file
//
//  Created by giacomo osso on 23/11/16.
//  Copyright © 2016 Giacomo Osso. All rights reserved.
//

#include <stdio.h>

void es1();
void es2();
void es3();
void random();
void myrandom();

int main(int argc, const char * argv[]) {
   printf("Esercizio sui file!\n \n");
    
    
    es1();
    es2();
    es3();
    random();
    
    return 0;
}

void es1(){
    char * str;
    FILE * file;
    
    //apre il file
    file = fopen("/Users/Jack/Git_C/2016 es sui file/2016 es sui file/numbers.txt", "r");
    
    if(file!=NULL){
        while(!feof(file)){
            // allocare in memoria la stringa
            str = malloc(sizeof(char));
            fscanf(file, "%s", str);
            printf("\n %s", str);
        }
        printf("\n");
        fclose(file);
    }else {
        printf("Errore, impossibile aprire il file \n");
    }

}

void es2(){
    int * num;
    int somma;
    FILE * file;
    
    file = fopen("/Users/Jack/Git_C/2016 es sui file/2016 es sui file/numbers.txt", "r");
    
    if(file!=NULL){
        somma=0;
        while(!feof(file)){
            fscanf(file, "%d" , num);
            somma = somma + *num;
        }
        fclose(file);
        printf("\n Somma: %d \n", somma);
        
    }else{
        printf("Errore apertura file");
    }
    
}


void es3(){
    int * num;
    FILE * file;
    int sotr;
    file = fopen("/Users/Jack/Git_C/2016 es sui file/2016 es sui file/numbers.txt", "r");
    
    if(file!=NULL){
        sotr = 0;
        while(!feof(file)){
            fscanf(file, "%d" , num);
            sotr = sotr - *num;
        }
        fclose(file);
        printf("\n Somma: %d \n", sotr);
        
    }else{
        printf("Errore apertura file");
    }

    }

void random(){
    void scritturaFile(int k){
        int i;
        srand(time(NULL));
        
        
        FILE * file;
        file = fopen("C:\\Users\\Federico Platania\\ClionProjects\\casualNumber\\numeri.txt","a");
        
        if(file!=NULL){
            for(int j=0;j < k;j++){
                i = rand() % 1000+ 1;
                fprintf(file,"%i \n",i);
            }
            
            fclose(file);
            
        }else{
            printf("Errore,impossibile aprire il file!");
        }
        
    }
    
    void myRandom(){
        int i;
        srand(time(NULL));
        i = rand() % 1000+ 1;
        scritturaFile(i);
       
   
}


















