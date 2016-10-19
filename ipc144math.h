//ipc144math.h
/*
Power Function
this function is a mathematical function
that accepts two whole numbers as arguments
it computes and provies a result back to the caller
specifically, it computes the result of the base raised to the power of the exponent

notice that arguments are separated by commas
*/
int power(int base, int exponent ){
        int result = 1;

        //use a loop to compute the result
        for(int i = 0; i <= exponent ; i++){
                result = result * base;
                printf("DEBUG: base %d, exponent %d, result %d, i %d\n", base, exponent, result, i);
        }
        //recall that if your function's return type is not void
        //your function needs to return a value back to the caller
        return result;
}

