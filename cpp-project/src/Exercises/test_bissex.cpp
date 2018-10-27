#include <stdio.h>
#include <stdlib.h>
#include "bissex.h"

void test_bissex();

int main()
{
    test_bissex();

    return 0;
}

void test_bissex() {
    
    int i, test_val[3]={2004,2000,1000};
    
    for (i=0;i<3;i++) {
        if (bissex(test_val[i])) {
            printf("TECHIO> success true");   
        }
        else {
            printf("TECHIO> success false");
            printf("TECHIO> message --channel Erreur la fonction ne passe pas le test (%d)",test_val[i]);
        }
    }
    
}
