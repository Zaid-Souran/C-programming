#include <stdio.h>
//WEIGHT CONVERTER PROGRAM//

int main(){
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;
    
    printf("Weight conversion calculator\n ");
    printf("1. Kilograms to pounds\n ");
    printf("2. pounds to kilograms\n ");
    printf("Enter your choice (1. or 2.): ");
    scanf("%d", &choice);

    if(choice ==1. ){
        //kilograms to pounds converter//
        printf("Enter the weight in kilograms\n ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilogram is equal to %.2f pounds", kilograms, pounds);
    }
    else if(choice ==2.){
        //pounds to kilograms converter//
        printf("Enter the weight in pounds\n ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms", pounds, kilograms);
    }
    else{
        printf("Invalid choice ! please choose 1 or 2\n");
    }


}