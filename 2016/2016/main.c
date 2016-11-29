//
//  main.c
//  2016
//
//  Created by giacomo osso on 29/11/16.
//  Copyright © 2016 Giacomo Osso. All rights reserved.
//

#include <stdio.h>
void es1();
int main(int argc, const char * argv[]) {
    
    es1();
    return 0;
}

void es1(){
    /*
     Ogni mattina entro le 10 i campeggiatori che hanno terminato il proprio soggiorno devono lasciare libera la piazzola che hanno occupato.
     Ciascun campeggiatore deve dichiarare:
     - il numero di giorni trascorsi al camping
     - il numero di persone formanti il gruppo
     - il tipo di abitacolo ('T': tenda, 'R':roulotte)
     - il tipo di veicolo ('A': auto, 'M': moto)
     
     
     Calcolare e stampare quanto deve pagare ciascun gruppo in base a questo listino prezzi:
     - euro 5 per persona al giorno
     - euro 4 per tenda al giorno
     - euro 4,50 per roulotte al giorno
     - euro 5,50 per auto al giorno
     - euro 3,50 per moto al giorno
     */
    
    int ngiorni;
    int npersone;
    char* tipoAbitacolo;
    char* tipoVeicolo;
    double spesaTot=0.0;
    
    printf("\n");
    printf("Buongiorno !\n");
    printf("------------\n");
    printf("Calcolo da quanto deve pagare : \n");
    printf("Quanti giorni avete soggiornato da noi ? \n");
    scanf("%d", &ngiorni);
    printf("Quante persone ? \n");
    scanf("%d" , &npersone);
    
    do{
    printf("Dove avete soggiornato roulette o tenda ? [r/t]\n");
    scanf("%s", &tipoAbitacolo);
    }while((strcmp(&tipoAbitacolo,"T")==0)||(strcmp(&tipoAbitacolo,"R")==0));
    
    do{
        printf("Che veicolo ? [a/m]\n");
        scanf("%s", &tipoVeicolo);
    }while((strcmp(&tipoVeicolo,"A")==0)||(strcmp(&tipoVeicolo,"M")==0));
    printf("------------\n");
    printf("Calcolo spesa comlessiva : \n");
    
    spesaTot= (5 * (ngiorni) * (npersone) );
    
    if(strcmp(&tipoAbitacolo, "t")==0){
        spesaTot = spesaTot + 4 * (ngiorni);
    }else{
        spesaTot = spesaTot + 4.50 * (ngiorni);
    }
    
    if(strcmp(&tipoVeicolo, "a")==0){
        spesaTot = spesaTot + 5.50 * (ngiorni);
    }else{
        spesaTot = spesaTot + 3.50 * (ngiorni);
    }
    
    printf("Conto da pagare : %.2f euro \n" , spesaTot);
    
}
