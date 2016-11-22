//
//  main.c
//  Bancomat
//
//  Created by giacomo osso on 16/11/16.
//  Copyright © 2016 Giacomo Osso. All rights reserved.
//

// bisogna creare un sistema che permetta il prelevamento l'aggiunta di credito e che permetta di avere l'estratto conto
// switch per il menu
// movimetnti registrati
//
// costante del contante a disposizione 10k euro

#include <stdio.h>


typedef struct node {
    int importo;
    char operazione[4]; // in/out
} Elemento;

int main(int argc, const char * argv[]) {
    int const credito = 10000;
    int creditdisponibile = credito;
    int menu = 1;
    int richiesta =0;
    int scelta = 0;
    int numeroOp=0;
    
    Elemento movimenti[10];
    
    // int i, n; float x; char name[50];
    //n = scanf("%d%f%s", &i, &x, name);
    
    //menu
    do{
        printf("Menu \n");
        printf("---------\n \n");
        printf("Cosa vuoi fare ? \n \n");
        printf("1) Prelevare \n");
        printf("2) Versare \n");
        printf("3) Estratto conto \n"); // ha un sub menu controllare i movimenti o l'estratto conto
        printf("4) Exit \n");
        scanf("%d" , &scelta);
        
        if(scelta==1){ //Prelevare
            
            printf("\n Prelevare : \n");
            printf("---------- \n");
            printf("Quanto vorresti prelevare ? \n");
            scanf("%d", &richiesta);
            
            if(richiesta> 0 && richiesta < creditdisponibile){
                printf("Richiesta valida, eseguo operazione ... \n");
                numeroOp++;
                creditdisponibile = creditdisponibile - richiesta;
                //inserire nodo
                movimenti[numeroOp].importo=richiesta;
                strcpy( movimenti[numeroOp].operazione,"out");
                numeroOp++;
                
                printf("Operazione eseguita con successo \n \n");
                
                printf("saldo: %d \n", creditdisponibile);
                
                printf("Tornare al menu ? [s/n] \n");
                char ritorno[15];
                scanf("%s", ritorno);
                
                if(strcmp(ritorno,"s")==0){
                    continue;
                }else {
                    menu = 0;
                    continue;
                }
            
            }
            }else if(scelta==2){   //Versare
                
                printf("\n Versare : \n");
                printf("---------- \n");
                printf("Quanto vorresti versare ? \n");
                scanf("%d", &richiesta);
                
                if(richiesta>0){
                    printf("Richiesta valida, eseguo operazione ... \n");
                    creditdisponibile = creditdisponibile + richiesta;
                    movimenti[numeroOp].importo=richiesta;
                    strcpy( movimenti[numeroOp].operazione,"in");
                    numeroOp++;
                    printf("Operazione eseguita con successo \n \n");
                    
                    printf("saldo: %d \n", creditdisponibile);
                    
                    printf("Tornare al menu ? [s/n] \n");
                    char ritorno[2];
                    scanf("%s", ritorno);
                    
                    if(strcmp(ritorno,"s")==0){
                        continue;
                    }else {
                        menu = 0;
                        continue;
                    }

                }
            
            }else if(scelta==3){ //estratto conto
                printf("\n Estratto conto; \n");
                printf("--------- \n");
                printf("Credito disponibile: %d \n", creditdisponibile);
                for(int i=1; i < numeroOp; i++){
                    printf("Numero Operazione : %d \nImporto: %d \nTipo di operazione: %s \n -------- \n",i, movimenti[i].importo, movimenti[i].operazione);
                    continue;
                }
            }else if (scelta==4){
                break;
                
            }
        
        
    }while(menu==1);
    
    return 0;
}
