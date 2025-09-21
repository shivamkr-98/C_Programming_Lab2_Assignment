#include <stdio.h>

int main(){
    int Hardness,Tensile_Strength;
    float carbon;
    printf("Hardness Of Steel (can vary between 10 to 100):\n");
    scanf("%d",&Hardness);
    printf("Tensile Strenth of Steel (can vary from 1000 to 8000):\n");
    scanf("%d",&Tensile_Strength);
    printf("Carbon content (Can vary from 0.1 to 1.0);\n");
    scanf("%f",&carbon);

    if(Hardness>=50){
        if(carbon<0.7){
            if(Tensile_Strength>5600){
                printf("grade10\n");
                printf("Best quality Steel\n");
            }
            else{
                printf("grade09\n");
            }
        }
        else{
             if(Tensile_Strength>5600){
                printf("grade07\n");
            }
            else{
                printf("grade06\n");
            }
        }
        
    }
    else {
        if (carbon < 0.7 && Tensile_Strength > 5600) {
            printf("Grade = 8\n");
        }
        else if (carbon < 0.7 || Tensile_Strength > 5600) {
            printf("Grade = 6\n");
        }
        else {
            printf("Grade = 5\n");
        }
    }

    return 0;
}