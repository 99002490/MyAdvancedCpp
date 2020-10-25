int* doubleValue(int x)
{
    int value{ x * 2 };
    return &value; // return value by address here
}


int* allocateArray(int size)
{
    return new int[size];
}
 
int main()
{
    int *array{ allocateArray(25) };
 
    // do stuff with array
 
    delete[] array;
    return 0;
}
