#include<stdio.h>
int main(){
    char light;
    printf("enter trafic light(R = Red, Y=Yello, G = Green): ");
    scanf("%c",&light);
    if(light == 'R'){
        printf("stop\n");
    }
    else if(light =='Y'){
        printf("start\n");
    }
    else if(light =='G'){
        printf("go\n");
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}