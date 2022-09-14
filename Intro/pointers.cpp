int TripleNum(int *num)
{
    int trippleNum = *num;
    
    num = &trippleNum;
    *num = *num*3;
    
    return trippleNum;
}