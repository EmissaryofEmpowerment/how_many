#ifndef how_many_H
#define how_many_H

const int kMaxSize = 20;


template <typename T>

int HowMany(T givenValue, std::array<T, kMaxSize> tArray, int valuesAmount)
{
    int counter = 0;
    for (int i = 1; i < valuesAmount; i ++)
    {
        if (tArray[i] == givenValue)
        {
            counter++;
        }
    }
}

#endif