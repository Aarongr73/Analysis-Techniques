#ifndef DATOS
#define DATOS
#include <iostream>
using namespace std;

class Datos {

  public:

    // CADA NUMERO REPRESENTA UNA UNIDAD DE 5
    // 1 = 5 MIN
    // 2 = 10 MIN
    // ...

    int m = 36; // Filas

    int n = 8; // Columnas

                            // T  S  B  CC P  CL D  SM
    const int * disfrute = (int []) {1, 1, 1, 1, 1, 1, 1, 1};


                                                         // T   S   B   CC  P  CL   D   SM
    const int ** espera = (const int *[])
                              { /*0 9:00 */ (const int []) {1,  1,  2,  0,  0,  0,  0,  0},
                                /*1 9:05 */ (const int []) {1,  1,  1,  0,  0,  0,  0,  0},
                                /*2 9:10 */ (const int []) {1,  1,  0,  0,  0,  0,  0,  0},
                                /*3 9:15 */ (const int []) {1,  2,  0,  0,  0,  1,  0,  0},
                                /*4 9:20 */ (const int []) {1,  2,  0,  0,  1,  1,  0,  0},
                                /*5 9:25 */ (const int []) {1,  3,  0,  0,  2,  1,  0,  0},
                                /*6 9:30 */ (const int []) {1,  2,  0,  0,  1,  1,  0,  0},
                                /*7 9:35 */ (const int []) {1,  3,  0,  0,  2,  1,  0,  0},
                                /*8 9:40 */ (const int []) {1,  3,  0,  0,  1,  1,  0,  0},
                                /*9 9:45 */ (const int []) {1,  3,  0,  0,  1,  1,  1,  0},
                                /*10 9:50 */ (const int []) {1,  2,  0,  1,  1,  1,  1,  0},
                                /*11 9:55 */ (const int []) {1,  2,  0,  0,  1,  1,  1,  1},
                               /*12 10:00 */ (const int []) {1,  2,  0,  1,  0,  2,  1,  1},
                               /*13 10:05 */ (const int []) {1,  3,  0,  0,  1,  2,  1,  1},
                               /*14 10:10 */ (const int []) {1,  4,  0,  0,  1,  2,  2,  2},
                               /*15 10:15 */ (const int []) {1,  3,  0,  0,  1,  2,  1,  1},
                               /*16 10:20 */ (const int []) {1,  4,  0,  0,  1,  2,  1,  2},
                               /*17 10:25 */ (const int []) {1,  5,  0,  0,  2,  1,  1,  2},
                               /*18 10:30 */ (const int []) {2,  4,  0,  0,  3,  2,  1,  1},
                               /*19 10:35 */ (const int []) {1,  4,  0,  0,  4,  1,  1,  2},
                               /*20 10:40 */ (const int []) {1,  5,  0,  0,  3,  1,  1,  3},
                               /*21 10:45 */ (const int []) {1,  4,  0,  0,  3,  1,  1,  2},
                               /*22 10:50 */ (const int []) {1,  4,  1,  0,  2,  3,  1,  3},
                               /*23 10:55 */ (const int []) {1,  4,  0,  0,  4,  2,  2,  2},
                               /*24 11:00 */ (const int []) {1,  4,  1,  0,  4,  3,  1,  2},
                               /* 11:05 */ (const int []) {1,  5,  0,  0,  3,  3,  1,  1},
                               /* 11:10 */ (const int []) {1,  8,  0,  1,  3,  2,  1,  2},
                               /* 11:15 */ (const int []) {1,  5,  0,  1,  3,  2,  1,  1},
                               /* 11:20 */ (const int []) {2,  4,  0,  0,  3,  2,  1,  2},
                               /* 11:25 */ (const int []) {1,  4,  0,  1,  4,  2,  2,  1},
                               /* 11:30 */ (const int []) {1,  4,  0,  1,  4,  2,  2,  1},
                               /* 11:35 */ (const int []) {1,  5,  1,  0,  4,  3,  1,  2},
                               /* 11:40 */ (const int []) {1,  5,  0,  0,  3,  3,  1,  2},
                               /* 11:45 */ (const int []) {1,  4,  0,  0,  2,  2,  1,  3},
                               /* 11:50 */ (const int []) {1,  5,  1,  0,  4,  1,  1,  2},
                               /* 11:55 */ (const int []) {1,  4,  0,  1,  3,  2,  1,  3},
                               };



                                              //              T  S  B  CC P  CL D  SM OUT
    const int ** traslado = (const int *[])
                                { /* IN */    (const int []) {1, 1, 1, 2, 1, 1, 1, 1, 0},
                                  /* T */     (const int []) {0, 1, 1, 1, 1, 1, 1, 1, 1},
                                  /* S */     (const int []) {1, 0, 1, 1, 1, 1, 1, 1, 1},
                                  /* B */     (const int []) {1, 1, 0, 2, 1, 1, 1, 1, 1},
                                  /* CC */    (const int []) {1, 1, 2, 0, 1, 1, 1, 1, 2},
                                  /* P */     (const int []) {1, 1, 1, 1, 0, 1, 1, 1, 1},
                                  /* CL */    (const int []) {1, 1, 1, 1, 1, 0, 1, 1, 1},
                                  /* D */     (const int []) {1, 1, 1, 1, 1, 1, 0, 1, 1},
                                  /* SM */    (const int []) {1, 1, 1, 1, 1, 1, 1, 0, 1},
                                };




};
#endif

