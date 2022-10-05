#include "TestCases.h"
#include "Current_SamplingFunctionality.h"

bool SampleRangeReadings(unsigned int Current_Samples[], int Current_Samples_size, int ReadingsCount)
{
    unsigned int GetReadingsCount = ConsecutiveRanges(Current_Samples, Current_Samples_size);

    if(GetReadingsCount == ReadingsCount)
    {
        return true;
    }
    else
    {
        return false;
    }

}
