#include <stdio.h>
#include <math.h>
#include <locale.h>

#define TOTAL_NUMBER_OF_WEEKS   63
#define STARS_CONSTANT          50
#define ITERATIONS              5

int main(){
    short int weeklyCases[] = {9, 20, 104, 223, 223, 268, 281, 363, 149, 134, 105, 64,
                            56, 35, 22, 29, 29, 40, 74, 200, 129, 76, 63, 128, 118, 127,
                            234, 323, 454, 645, 721, 609, 501, 571, 394, 396, 253, 281, 291,
                            315, 281, 364, 668, 987, 909, 644, 408, 348, 289, 384, 362, 390,
                            461, 550, 709, 1216, 1543, 2199, 1600, 1160, 854, 683, 552};

    int i;
    int sum = 0;
    int max = weeklyCases[0];

    setlocale(LC_NUMERIC, "");
    for(i = 0; i < TOTAL_NUMBER_OF_WEEKS; i++){
        sum += weeklyCases[i];
    }

    printf("Their were %'d cases in total over the %d weeks.\n", sum, TOTAL_NUMBER_OF_WEEKS);

    float average = (float)sum / TOTAL_NUMBER_OF_WEEKS;
    printf("The average is %0.1f cases per week.\n", average);

    for(i = 0; i < TOTAL_NUMBER_OF_WEEKS; i++){
        if(weeklyCases[i] > max){
            max = weeklyCases[i];
        }
    }

    printf("The worst week had %d cases.\n", max);
    printf("\n");

    printf("Here is the weekly cases histogram:\n");

    float x = (float) max / STARS_CONSTANT;

    for(i = 0; i < TOTAL_NUMBER_OF_WEEKS; i++){
        int result = ceil(weeklyCases[i] / x);
        printf("Week %2d: ", i);

        for(int j = 0; j < result; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    printf("Here is the weekly cases histogram after averaging:\n");

    for(int y = 0; y < ITERATIONS; y++){

        for(i = 0; i < TOTAL_NUMBER_OF_WEEKS; i++){
            if(i != 0 || i != TOTAL_NUMBER_OF_WEEKS - 1){
                 weeklyCases[i] = (weeklyCases[i-1] + weeklyCases[i] + weeklyCases[i+1]) / 3;

            } else if(i == 0){
                 weeklyCases[i] = (weeklyCases[i] + weeklyCases[i+1]) / 2;
            } else {
                 weeklyCases[i] = (weeklyCases[i-1] + weeklyCases[i]) / 2;
            }

        }
    }

    for(i = 0; i < TOTAL_NUMBER_OF_WEEKS; i++){
        printf("Week %2d: ", i);
        for(int j = 0; j < weeklyCases[i] / x; j++){
            printf("*");
        }
        printf("\n");


    }

    return 0;

}

