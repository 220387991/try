#include <stdio.h> 
int main() 
{
    printf("请输入数字 1 or -1 or 0");
    int num=0;
    while(1){
        scanf("%d",&num);
        if(num==0){
            printf("helloworld\n");
        }
        else if(num==1){
            printf("HELLOWORLD\n");
        }
        else if (num==-1){
            break;
        }
    }
    return 0;
}


