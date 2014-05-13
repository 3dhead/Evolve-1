#include "settings.h"

int N_POLY_POINTS = 6;
int N_COLOR_VAR = 5;
int N_POS_VAR = 10;
int SHAPE_OPT_FREQ = 0;
int GUI_REFRESH_RATE = 1;
int AUTOFOCUS_RES = 2;
int N_CORES = 4;

int FOCUS_LEFT=0, FOCUS_RIGHT=100, FOCUS_TOP=0, FOCUS_BOTTOM=100;

int POLYS_MIN=5, POLYS_MAX=100;

// Rates of mutation in % of odds per generation
int POLYS_ADD_RATE=50;
int POLYS_REMOVE_RATE=10;
int POLYS_REORDER_RATE=30;
