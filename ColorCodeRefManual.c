#include "ColorCodeMain.h"

void ColorCodeReferenceManual()
{
    int Pair_Num=1;
    printf("\nColorCode\tMajorColor\tMinorColor");
    for(int MajorColor=0;MajorColor<numberOfMajorColors;MajorColor++)
    {
        for(int MinorColor=0;MinorColor<numberOfMinorColors;MinorColor++,Pair_Num++)
        {
            printf("\n%d\t\t%s\t\t%s",Pair_Num,MajorColorNames[MajorColor],MinorColorNames[MinorColor]); 
        }
    }
}

