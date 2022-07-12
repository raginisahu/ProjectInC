#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct key_value
{
    char* name;
    char* dial_code;
};

int main(void)
{
    int number_of_keys = 20;
    int i;   
    char code[20];
    struct key_value *kv = malloc(sizeof(struct key_value) * number_of_keys);
    if (kv == NULL) {
        perror("Malloc");
        exit(EXIT_FAILURE);
    }
    printf("enter the dial code=");
    scanf("%s",code);
        kv[0].name= "Palau";
        kv[0].dial_code= "680";

        kv[1].name= "Panama";
        kv[1].dial_code= "507";

        kv[2].name= "Papua New Guinea";
        kv[2].dial_code= "675";

        kv[3].name= "Paraguay";
        kv[3].dial_code= "595";

        kv[4].name= "Peru";
        kv[4].dial_code= "51";

        kv[5].name= "Philippines";
        kv[5].dial_code= "63";

        kv[6].name= "Poland";
        kv[6].dial_code= "48";

        kv[7].name= "Portugal";
        kv[7].dial_code= "351";

        kv[8].name= "Qatar";
        kv[8].dial_code= "974";

        kv[9].name= "Romania";
        kv[9].dial_code= "40";

        kv[10].name= "Russia";
        kv[10].dial_code= "7";

        kv[11].name= "Rwanda";
        kv[11].dial_code= "250";

        kv[12].name= "Somalia";
        kv[12].dial_code= "252";

        kv[13].name= "South Africa";
        kv[13].dial_code= "27";

        kv[14].name= "Spain";
        kv[14].dial_code= "34";

        kv[15].name= "Sri Lanka";
        kv[15].dial_code= "94";

        kv[16].name= "Sudan";
        kv[16].dial_code= "249";

        kv[17].name= "Suriname";
        kv[17].dial_code= "597";

        kv[18].name= "Swaziland";
        kv[18].dial_code= "268";

        kv[19].name= "Sweden";
        kv[19].dial_code= "46";

        kv[20].name= "Switzerland";
        kv[20].dial_code= "41";

        for(i=0;i<20;i++){  
            // printf("sdjhjdh %s,%s ,%d",code,kv[i].dial_code,strcmp(code, kv[i].dial_code));
            if(strcmp(code, kv[i].dial_code)==0) {
             printf("\nDial Code:%s, Country:%s",kv[i].dial_code,kv[i].name);  
             break;  
            } 
        }  
        // printf("Key = %d\nKey value = %s\n", kv[0].key, kv[0].value);
        // printf("Key = %d\nKey value = %s\n", kv[1].key, kv[1].value);


    free(kv);
    return 0;
}