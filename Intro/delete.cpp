// We need to return a pointer
// a way we can do tht is by using 'new', new is like calloc, malloc etc
// so since we take in an int we need to save it and be able to turn it into a pointer
// 

int* TripleNum(int num) const
{
    // first get the value num * 3 since it is an int
    int num1 = 3*num;

    // create space with an *variable
    int *trippledValue = new int;

    // now u can set this int variable with a pointer
    *trippledValue = num1;
   
    
    return trippledValue;
}

