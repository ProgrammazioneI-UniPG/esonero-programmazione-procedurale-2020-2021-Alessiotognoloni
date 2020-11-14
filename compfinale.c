#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 1000


int lunghezza(char stringa[]){

	int i = 0;

	while(stringa[i]!=EOF){
	i++;
	}

return i;
}



    int main(void){
    time_t t;
    srand((unsigned) time(&t));
       int scelta;
          int i;
       char input1[MAX];//dichiaro i vettori e gli int
       char input2[MAX];
       char output1[MAX];
       char output2[MAX];
       char c[MAX];
       int  a;
       printf("Inserisci la frase: ");
       fgets(input1, sizeof(input1), stdin);
       input1[lunghezza(input1) - 1] = '\0';
       printf("\nLa frase inserita e': %s\n", input1);
       
       printf("digitare 1 chiave manuale digitare qualsiasi altro per chiave automatica \n");
       scanf("%d",&scelta);
      
      if(scelta==1){
    
        
       printf("\nInserisci la chiave: ");
         scanf("\n");
       
       fgets(input2, sizeof(input2), stdin);
       input2[lunghezza(input2) - 1] = '\0';
       printf("\nLa chiave inserita e': %s", input2);

       for(i=0; i<lunghezza(input1); i++){
          output1[i] = input1[i] ^ input2[i%lunghezza(input2)];
       }
          output1[i] = '\0';
       printf("\n\nLa stringa cifrata e': '%s'\n", output1);

       for(i=0; i<lunghezza(output1); i++){
          output2[i] = output1[i] ^ input2[i%lunghezza(input2)];
       }
            output2[i] = '\0';

       printf("\n\nLa stringa decifrata e': '%s'\n\n", output2);

}else{
srand(time(0));//ciclo per la chiave random
	for(unsigned int i=0;i<10; ++i)
	 {
	 	int r=rand()%62;
	 	char c =r+'0'+(r>9)*7+(r>35)*6;
	 	printf("%c",c);
	 	}
	 	printf("   <---questa è la tua chiave \n");
	 	
	 	 for(i=0; i<lunghezza(input1); i++){
          output1[i] = input1[i] ^ c[i%lunghezza(c)];
       }
          output1[i] = '\0';
       printf("\n\nLa stringa cifrata e': '%s'\n", output1);

       for(i=0; i<lunghezza(output1); i++){
          c[i] = output1[i] ^ c[i%lunghezza(c)];
       }
            c[i] = '\0';

       printf("\n\nLa stringa decifrata e': '%s'\n\n", c);
}
       

    return 0;
    }
