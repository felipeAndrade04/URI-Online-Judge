#include <stdio.h>

int main () {

    int masterKung, masterLu, i;
    int num;

    for (i = 1; i <= 16; i++) {   
        scanf("%d", &num);
        
        if (num == 1) masterKung = i;
        if (num == 9) masterLu = i;
    }

    if (masterKung <= 8 && masterLu <= 8)
    {
        if (masterKung <= 4 && masterLu <= 4)
        {
            if (masterKung <= 2 && masterLu >= 3) printf("quartas\n");
            else if (masterKung >= 3 && masterLu <= 2) printf("quartas\n");

            else if (masterKung <= 2 && masterLu <= 2) printf("oitavas\n");
            else if (masterKung >= 3 && masterLu >= 3) printf("oitavas\n");
        }

        else if (masterKung >= 5 && masterLu >= 5)
        {
            if (masterKung <= 6 && masterLu >= 7) printf("quartas\n");
            else if (masterKung >= 7 && masterLu <= 6) printf("quartas\n");

            else if (masterKung <= 6 && masterLu <= 6) printf("oitavas\n");
            else if (masterKung >= 7 && masterLu >= 7) printf("oitavas\n");
        }

        else if (masterKung <= 4 && masterLu >= 5) printf("semifinal\n");
        else if (masterKung >= 5 && masterLu <= 4) printf("semifinal\n");
    }
    else if (masterKung >= 9 && masterLu >= 9)
    {
        if (masterKung <= 12 && masterLu <= 12)
        {
            if (masterKung <= 10 && masterLu >= 11) printf("quartas\n");
            else if (masterKung >= 11 && masterLu <= 10) printf("quartas\n");

            else if (masterKung <= 10 && masterLu <= 10) printf("oitavas\n");
            else if (masterKung >= 11 && masterLu >= 11) printf("oitavas\n");
        }
        else if (masterKung >= 13 && masterLu >= 13)
        {
            if (masterKung <= 14 && masterLu >= 15) printf("quartas\n");
            else if (masterKung >= 15 && masterLu <= 14) printf("quartas\n");

            else if (masterKung <= 14 && masterLu <= 14) printf("oitavas\n");
            else if (masterKung >= 15 && masterLu >= 15) printf("oitavas\n");
        }

        else if (masterKung <= 12 && masterLu >= 13) printf("semifinal\n");
        else if (masterKung >= 13 && masterLu <= 12) printf("semifinal\n");
    }

    else printf("final\n");

    return 0;
}