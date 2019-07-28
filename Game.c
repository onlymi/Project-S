#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int i, j;

int MainMap[51][51] =
{
   2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
   4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5
};

int SmallTitle[3][10] =
{
	2, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	6, 0, 0, 0, 0, 0, 0, 0, 0, 6,
	4, 1, 1, 1, 1, 1, 1, 1, 1, 5,
};

int BigTitle[5][15] =
{
	2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
	6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
	6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
	6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
	4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5
};

void gotoxy(int x, int y); //좌표 이동
void CursorView(char show); //커서 안보임
void text_color(int color_num); //글자 색
void CountDown(int time); //time만큼 CountDown

/*맵 출력*/
void MainMap_Output();
void SmallTitle_Output(int y);
void BigTitle_Output(int y);

/*BMP 출력*/
void MainPicture(int x, int y);
void Player(int x, int y);
void CuteMonster1(int x, int y);

/*MOVE*/
void Move_Player();
void Move_CuteMonster1();

/*MAP*/
void MainManu();
void HowToPlay();
void Battlefield();

int main()
{
	system("mode con cols=101 lines=55");
	MainManu();
}

void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void text_color(int color_num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_num);
}

void CountDown(int time)
{
	for (i = time; i > 0; i--)
	{
		printf("%d", i);
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(".");
		Sleep(200);
		printf(" ");
		Sleep(200);
	}

	text_color(7);
}

/*맵 출력*/
void MainMap_Output()
{
	for (i = 0; i < 51; i++)
	{
		for (j = 0; j < 51; j++)
		{
			if (MainMap[i][j] == 0)
				printf("  ");

			else if (MainMap[i][j] == 1)
				printf("──");

			else if (MainMap[i][j] == 2)
				printf("┌");

			else if (MainMap[i][j] == 3)
				printf("┐");

			else if (MainMap[i][j] == 4)
				printf("└");

			else if (MainMap[i][j] == 5)
				printf("┘");

			else if (MainMap[i][j] == 6)
				printf("│");

			else if (MainMap[i][j] == 7)
				printf("┬");

			else if (MainMap[i][j] == 8)
				printf("┴");
		}
		printf("\n");
	}
}

void SmallTitle_Output(int y)
{
	for (i = 0; i < 3; i++)
	{
		gotoxy(81, y + i - 1);

		for (j = 0; j < 10; j++)
		{
			if (SmallTitle[i][j] == 0)
				printf("  ");

			else if (SmallTitle[i][j] == 1)
				printf("──");

			else if (SmallTitle[i][j] == 2)
				printf("┌");

			else if (SmallTitle[i][j] == 3)
				printf("┐");

			else if (SmallTitle[i][j] == 4)
				printf("└");

			else if (SmallTitle[i][j] == 5)
				printf("┘");

			else if (SmallTitle[i][j] == 6)
				printf("│");
		}
	}
}

void BigTitle_Output(int y)
{
	for (i = 0; i < 5; i++)
	{
		gotoxy(71, y + i - 2);

		for (j = 0; j < 15; j++)
		{
			if (BigTitle[i][j] == 0)
				printf("  ");

			else if (BigTitle[i][j] == 1)
				printf("──");

			else if (BigTitle[i][j] == 2)
				printf("┌");

			else if (BigTitle[i][j] == 3)
				printf("┐");

			else if (BigTitle[i][j] == 4)
				printf("└");

			else if (BigTitle[i][j] == 5)
				printf("┘");

			else if (BigTitle[i][j] == 6)
				printf("│");
		}
	}
}

/*BMP 출력*/

void MainPicture(int x, int y)
{
	CursorView(0);

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hImage = (HBITMAP)LoadImage(NULL, TEXT("MainPicture.bmp"),
		IMAGE_BITMAP,
		0,
		0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION);

	while (1)
	{
		hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
		BitBlt(hdc, x, y, 1200, 675, hMemDC, 0, 0, SRCCOPY);

		if (_kbhit())
			break;
	}

	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

void Player(int x, int y)
{
	CursorView(0);

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hImage = (HBITMAP)LoadImage(NULL, TEXT("Chunri.bmp"),
		IMAGE_BITMAP,
		0,
		0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION);

	while (1)
	{
		hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
		BitBlt(hdc, x, y, 500, 500, hMemDC, 0, 0, SRCCOPY);

		if (_kbhit())
		{
			break;
		}
	}

	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

void CuteMonster1(int x, int y)
{
	CursorView(0);

	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(hWnd);
	HDC hMemDC = CreateCompatibleDC(hdc);

	hImage = (HBITMAP)LoadImage(NULL, TEXT("Cute_Monster1.bmp"),
		IMAGE_BITMAP,
		0,
		0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION);

	while (1)
	{
		hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
		BitBlt(hdc, x, y, 500, 500, hMemDC, 0, 0, SRCCOPY);

		if (_kbhit())
		{
			break;
		}
	}

	SelectObject(hMemDC, hOldBitmap);
	DeleteObject(hImage);
	DeleteDC(hMemDC);
	ReleaseDC(hWnd, hdc);
}

/*MOVE*/

void Move_Player()
{
	system("cls");
	CursorView(0);

	int x = 16, y = 16;
	int n_x = 2, n_y = 1;
	int Key = 0;

	MainMap_Output();
	Player(x, y);

	while (1)
	{
		if (x != n_x || y != n_y)
		{
			if (x < 16)
			{
				x = 16;
				n_x = 2;
			}

			if (y < 16)
			{
				y = 16;
				n_y = 1;
			}

			if (x > 90 * 8)
			{
				x = 90 * 8;
				n_x = 90;
			}

			if (y > 43 * 16)
			{
				y = 43 * 16;
				n_y = 43;
			}

			if (n_x == 2)
			{
				gotoxy(n_x, n_y - 1);
				printf("			");
				gotoxy(n_x, n_y + 0);
				printf("			");
				gotoxy(n_x, n_y + 1);
				printf("			");
				gotoxy(n_x, n_y + 2);
				printf("			");
				gotoxy(n_x, n_y + 3);
				printf("			");
				gotoxy(n_x, n_y + 4);
				printf("			");
				gotoxy(n_x, n_y + 5);
				printf("			");
				gotoxy(n_x, n_y + 6);
				printf("			");

				if (n_y < 43)
				{
					gotoxy(n_x, n_y + 7);
					printf("			");
				}
			}

			else
			{
				gotoxy(n_x - 2, n_y - 1);
				printf("			");
				gotoxy(n_x - 2, n_y + 0);
				printf("			");
				gotoxy(n_x - 2, n_y + 1);
				printf("			");
				gotoxy(n_x - 2, n_y + 2);
				printf("			");
				gotoxy(n_x - 2, n_y + 3);
				printf("			");
				gotoxy(n_x - 2, n_y + 4);
				printf("			");
				gotoxy(n_x - 2, n_y + 5);
				printf("	 		");
				gotoxy(n_x - 2, n_y + 6);
				printf("	 		");

				if (n_y < 43)
				{
					gotoxy(n_x - 2, n_y + 7);
					printf("			");
				}
			}

			Player(x, y);
		}

		if (_kbhit())
		{
			Key = _getch();

			if (Key == 224)
			{
				Key = _getch();

				switch (Key)
				{
				case 72:
					y -= 16;
					n_y--;
					break;
				case 80:
					y += 16;
					n_y++;
					break;
				case 77:
					x += 16;
					n_x += 2;
					break;
				case 75:
					x -= 16;
					n_x -= 2;
					break;
				default:
					break;
				}
			}
		}
	}
}

void Move_CuteMonster1()
{
	system("cls");
	CursorView(0);

	srand(time(NULL));

	int x = 16, y = 16;
	int n_x = 2, n_y = 1;

	MainMap_Output();
	CuteMonster1(x, y);

	while (1)
	{
		if (x != n_x || y != n_y)
		{
			x = (rand() % 45 + 1) * 2;
			y = (rand() % 22 + 1) * 2;

			if (x < 16)
			{
				x = 16;
				n_x = 2;
			}

			if (y < 16)
			{
				y = 16;
				n_y = 1;
			}

			if (x > 90 * 8)
			{
				x = 90 * 8;
				n_x = 90;
			}

			if (y > 44 * 16)
			{
				y = 44 * 16;
				n_y = 44;
			}

			if (n_x == 2)
			{
				gotoxy(n_x, n_y - 1);
				printf("			");
				gotoxy(n_x, n_y + 0);
				printf("			");
				gotoxy(n_x, n_y + 1);
				printf("			");
				gotoxy(n_x, n_y + 2);
				printf("			");
				gotoxy(n_x, n_y + 3);
				printf("			");
				gotoxy(n_x, n_y + 4);
				printf("			");
				gotoxy(n_x, n_y + 5);
				printf("			");
			}

			else
			{
				gotoxy(n_x - 2, n_y - 1);
				printf("			");
				gotoxy(n_x - 2, n_y + 0);
				printf("			");
				gotoxy(n_x - 2, n_y + 1);
				printf("			");
				gotoxy(n_x - 2, n_y + 2);
				printf("			");
				gotoxy(n_x - 2, n_y + 3);
				printf("			");
				gotoxy(n_x - 2, n_y + 4);
				printf("			");
				gotoxy(n_x - 2, n_y + 5);
				printf("			");
			}

			CuteMonster1(x, y);
		}
	}
}

/*MAP*/

void MainManu()
{
	system("cls");
	CursorView(0);

	int manu = 0;

	int x = 81, y = 32;
	int n_x = 81, n_y = 32;

	MainMap_Output();

	text_color(7);
	BigTitle_Output(32);
	gotoxy(x, 32);
	text_color(11);
	printf("Start Game");

	text_color(7);
	SmallTitle_Output(38);
	gotoxy(x + 4, 38);
	text_color(8);
	printf("How To Play");

	text_color(7);
	SmallTitle_Output(44);
	gotoxy(x + 8, 44);
	text_color(8);
	printf("Quit");

	MainPicture(16, 16);

	while (1)
	{
		if (x != n_x || y != n_y)
		{
			if (n_y < 32)
			{
				n_y = 32;
			}

			if (n_y > 44)
			{
				n_y = 44;
			}

			while (n_y == 32)
			{
				CursorView(0);

				for (i = 0; i < 17; i++)
				{
					gotoxy(71, 30 + i);
					printf("                            ");
				}

				text_color(7);
				BigTitle_Output(n_y);

				text_color(7);
				SmallTitle_Output(38);
				gotoxy(x + 4, 38);
				text_color(8);
				printf("How To Play");

				text_color(7);
				SmallTitle_Output(44);
				gotoxy(x + 8, 44);
				text_color(8);
				printf("Quit");

				srand(time(NULL));

				Sleep(rand() % 150 + 50);
				gotoxy(n_x, n_y);
				text_color(11);
				printf("Start Game");
				Sleep(rand() % 150 + 50);
				gotoxy(n_x, n_y);
				printf("                  ");

				if (_kbhit())
					break;
			}

			while (n_y == 38)
			{
				CursorView(0);

				for (i = 0; i < 17; i++)
				{
					gotoxy(71, 30 + i);
					printf("                            ");
				}

				text_color(7);
				BigTitle_Output(n_y);

				text_color(7);
				SmallTitle_Output(32);
				gotoxy(x + 5, 32);
				text_color(8);
				printf("Start Game");

				text_color(7);
				SmallTitle_Output(44);
				gotoxy(x + 8, 44);
				text_color(8);
				printf("Quit");

				srand(time(NULL));

				Sleep(rand() % 150 + 50);
				gotoxy(n_x, n_y);
				text_color(6);
				printf("How To Play");
				Sleep(rand() % 150 + 50);
				gotoxy(n_x, n_y);
				printf("                  ");

				if (_kbhit())
					break;
			}

			while (n_y == 44)
			{
				CursorView(0);

				for (i = 0; i < 17; i++)
				{
					gotoxy(71, 30 + i);
					printf("                            ");
				}

				text_color(7);
				BigTitle_Output(n_y);

				text_color(7);
				SmallTitle_Output(32);
				gotoxy(x + 5, 32);
				text_color(8);
				printf("Start Game");

				text_color(7);
				SmallTitle_Output(38);
				gotoxy(x + 4, 38);
				text_color(8);
				printf("How To Play");

				srand(time(NULL));

				Sleep(rand() % 150 + 50);
				gotoxy(n_x + 4, n_y);
				text_color(5);
				printf("Quit");
				Sleep(rand() % 150 + 50);
				gotoxy(n_x + 5, n_y);
				printf("    ");

				if (_kbhit())
					break;
			}

			x = n_x, y = n_y;
		}

		if (_kbhit())
		{
			MainPicture(16, 16);

			manu = _getch();

			if (manu == 224)
			{
				manu = _getch();

				switch (manu)
				{
				case 72:
					n_y -= 6;
					break;
				case 80:
					n_y += 6;
					break;
				default:
					break;
				}
			}

			else
			{
				if (manu == 13)
				{
					if (y == 32)
					{
						text_color(7);

						Battlefield();
					}

					if (y == 38)
					{
						HowToPlay();
					}

					if (y == 44)
					{
						text_color(7);

						gotoxy(n_x, 32);
						printf("				");

						gotoxy(n_x, 38);
						printf("				");

						gotoxy(n_x, 44);
						printf("				");

						gotoxy(45, 34);
						CountDown(3);

						gotoxy(45, 34);
						printf("게임을 종료합니다.\n");

						gotoxy(1, 51);
						break;
					}
				}
			}
		}
	}
}

void HowToPlay()
{
	int x = 2, y = 1;
	int key = 0;

	system("cls");
	MainMap_Output();

	gotoxy(x, y);
	printf("< 게임 방법 >\n");
	y += 2;
	gotoxy(x, y);
	printf("이 게임은 아직 완성이 되지 않았습니다.\n");
	y += 2;
	gotoxy(x, y);
	printf("돌아가려면 Backspace를 누르세요.\n");

	gotoxy(88, 49);
	printf("Made by : S");

	while (1)
	{
		if (_kbhit())
		{
			key = _getch();

			if (key == 8)
			{
				y += 2;
				gotoxy(x, y);

				printf("3초 뒤에 돌아갑니다.\n");
				y += 1;
				gotoxy(x, y);
				CountDown(3);

				MainManu();
			}
		}
	}
}

void Battlefield()
{
	Move_Player();
	Move_CuteMonster1();
}
