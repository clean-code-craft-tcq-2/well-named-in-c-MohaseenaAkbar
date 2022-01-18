#ifndef MAIN_H
#define MAIN_H

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    ColorCodeReferenceManual();

    return 0;
}

#endif
