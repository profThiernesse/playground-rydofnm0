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
    
    int i;
    int test_val[3]={2004,2000,1000};
    int res_val[3]={1,1,0};
    int ok=1;
    for (i=0;i<3;i++) {
        if (bissex(test_val[i])==res_val[i]) {
            ok = ok && 1;
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"user debug\" 'Erreur la fonction ne passe pas le test (%d)'\n",test_val[i]);
        }
    }
        
    if(ok)
        printf("TECHIO> success true\n");
    else  
        printf("TECHIO> success false\n");
}
