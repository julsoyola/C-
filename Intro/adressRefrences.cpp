int* TimesThree(int &num)
{
    // using the & which gets the memory address 
    // we need to intialize the int pointer name r with adress of num
    int *r = &num;
    
    // We can multiply with the poiter since pointer is storing the value num has
    *r = 3 * (*r);
    
    // now when we return it will return the value which has the adress of num
    return r;
}