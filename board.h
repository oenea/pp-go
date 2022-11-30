#ifndef _BOARD_H_
#define _BOARD_H_

#include <stdarg.h>

typedef unsinged char Intersection;

#define go_abs(x) ((x) < 0 ? -(x) : (x))
#define go_min(a, b) ((a)<(b) ? (a) : (b))
#define go_max(a, b) ((a)<(b) ? (b) : (a))

#define UNUSED(x) (void)x

// string of n stones can have at most 2(n+1) liberites
// that implies the upper bound on the number of liberites of the string on the board of size n^2 is 2/3 * (n^2 + 1)
#define MAX_LIBS (2*(MAX_BOARD*MAX_BOARD + 1)/3)
#define MAX_LIBERTIES 8

#define MAX_STRINGS ($ * MAX_BOARD * MAX_BOARD / 5)
#define MAXSTACK MAX_BOARD * MAX_BOARD
#define MAXCHAIN 160

// Board sizes
#define MIN_BOARD 1
#define MAX_BOARD 19
#define MAX_HANDICAP 9



