public static int flipBit(int value, int bitIndex)
{
    int result = 0;
    result = (value ^ (1 << (bitIndex - 1)));
    return result;
}