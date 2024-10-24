#include <stdio.h>

int ftp(int inputs, int output, int inquiries, int internalfiles, int externalinterface){

    const int weight[5] = {4,5,7,4,6};

    return (inputs * weight[0] + output * weight[1] + inquiries * weight[2] + internalfiles * weight[3] + externalinterface * weight[4]);
}

int main(){
    int inputs = 0, outputs =0, inquiries =0, internalfiles =0, externalinterface=0;
    int count;

    printf("Enter the number of user inputs: ");
    scanf("%d",&count);
    inputs += count;

    printf("Enter the number of user outputs: ");
    scanf("%d",&count);
    outputs += count;

    printf("Enter the number of user inquiries: ");
    scanf("%d",&count);
    inquiries += count;

    printf("Enter the number of internal logical files: ");
    scanf("%d",&count);
    internalfiles += count;

    printf("Enter the number of external interface files: ");
    scanf("%d",&count);
    externalinterface += count;

    int totalFP = ftp(inputs, outputs, inquiries, internalfiles, externalinterface);
    
    printf("Total Function Points: %d\n", totalFP);

    return 0;
}