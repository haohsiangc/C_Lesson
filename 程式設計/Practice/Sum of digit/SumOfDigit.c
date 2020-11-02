int SumOfDigit(int input){
    if(input<0){
        input=-input;
    }
    while(input!=0){
        return SumOfDigit(input/10)+(input%10);
    }
}