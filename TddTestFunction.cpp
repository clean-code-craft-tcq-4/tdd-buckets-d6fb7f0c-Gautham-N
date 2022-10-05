#include "TestCases.h"
#include "CurrentSamplingModule.h"

bool SampleRangeReadings(unsigned int Current_Samples[], int Current_Samples_size, int ReadingsCount)
{
    int GetReadingsCount = ConsecutiveRanges(Current_Samples, Current_Samples_size);

    if(GetReadingsCount == ReadingsCount)
    {
        return true;
    }
    else
    {
        return false;
    }

}
