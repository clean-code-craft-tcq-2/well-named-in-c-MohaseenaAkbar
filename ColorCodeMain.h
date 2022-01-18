#ifndef COLORCODEMAIN_H
#define COLORCODEMAIN_H

#include <stdio.h>
#include <assert.h>

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMinorColors;
extern int numberOfMajorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int);
void testNumberToPair(int pairNumber,enum MajorColor,enum MinorColor);
void testPairToNumber(enum MajorColor,enum MinorColor,int);
int GetPairNumberFromColor(const ColorPair*);
void ColorPairToString(const ColorPair*, char*) ;
void ColorCodeReferenceManual(void);

#endif
