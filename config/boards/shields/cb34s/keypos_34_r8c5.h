/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │ 17  18  19  20  21 │ │ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
  │  5   6   7   8   9 │ 22  23  24  25  26 │ │ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
  │ 10  11  12  13  14 │ 27  28  29  30  31 │ │ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
  ╰───────────╮ 15  16 │ 32  33 ╭───────────╯ ╰───────────╮ LH1 LH0 │ RH0 RH1 ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define LM0  5  // left-middle row
#define LM1  6
#define LM2  7
#define LM3  8
#define LM4  9

#define LB0 14  // left-bottom row
#define LB1 13
#define LB2 12
#define LB3 11
#define LB4 10

#define LH0 15  // left thumb keys
#define LH1 16

#define RT0 17  // right-top row
#define RT1 18
#define RT2 19
#define RT3 20
#define RT4 21

#define RM0 22  // right-middle row
#define RM1 23
#define RM2 24
#define RM3 25
#define RM4 26

#define RB0 27  // right-bottom row
#define RB1 28
#define RB2 29
#define RB3 30
#define RB4 31

#define RH0 32  // right thumb keys
#define RH1 33
