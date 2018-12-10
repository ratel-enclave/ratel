/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This is GNU GO, a Go program. Contact gnugo@gnu.org, or see       *
 * http://www.gnu.org/software/gnugo/ for more information.          *
 *                                                                   *
 * Copyright 1999, 2000, 2001, 2002 and 2003                         *
 * by the Free Software Foundation.                                  *
 *                                                                   *
 * This program is free software; you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License as    *
 * published by the Free Software Foundation - version 2             *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     *
 * GNU General Public License in file COPYING for more details.      *
 *                                                                   *
 * You should have received a copy of the GNU General Public         *
 * License along with this program; if not, write to the Free        *
 * Software Foundation, Inc., 59 Temple Place - Suite 330,           *
 * Boston, MA 02111, USA.                                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h> /* for NULL */
#include "liberty.h"
#include "patterns.h"

static struct patval owl_vital_apat0[] = {
  {648,1},	{646,1},	{722,1},	{720,1},
  {684,1},	{682,3}
};

static struct patval owl_vital_apat1[] = {
  {645,1},	{682,1},	{722,1},	{759,1},
  {758,1},	{720,1},	{684,1}
};

static struct patval owl_vital_apat2[] = {
  {608,1},	{645,1},	{721,1},	{646,1},
  {684,1},	{683,3}
};

static struct patval owl_vital_apat3[] = {
  {646,1},	{683,1},	{760,1},	{684,1},
  {759,1},	{722,1},	{721,3}
};

static struct patval owl_vital_apat4[] = {
  {646,1},	{648,1},	{684,1},	{722,3},
  {723,3}
};

static struct patval owl_vital_apat5[] = {
  {610,1},	{647,1},	{684,1},	{722,1}
};

static struct patval owl_vital_apat6[] = {
  {645,1},	{682,1},	{722,1},	{684,1},
  {720,1},	{721,3},	{719,3}
};

static struct patval owl_vital_apat7[] = {
  {722,1},	{720,1},	{685,1},	{684,1},
  {758,1},	{757,3}
};

static struct patval owl_vital_apat8[] = {
  {684,1}
};

static struct patval owl_vital_apat9[] = {
  {684,1}
};

static struct patval owl_vital_apat10[] = {
  {611,7},	{683,1},	{610,1},	{758,1},
  {685,1},	{721,1},	{646,1},	{795,3},
  {796,3}
};

static struct patval owl_vital_apat11[] = {
  {685,1},	{649,1},	{722,1},	{684,1},
  {646,3},	{760,3},	{759,3},	{683,3}
};

static struct patval owl_vital_apat12[] = {
  {686,7},	{646,1},	{648,1},	{684,1},
  {721,1},	{722,1},	{683,1}
};

static struct patval owl_vital_apat13[] = {
  {721,7},	{720,1},	{685,1},	{684,1}
};

static struct patval owl_vital_apat14[] = {
  {683,1},	{758,1},	{684,1},	{722,1}
};

static struct patval owl_vital_apat15[] = {
  {611,1},	{646,1},	{684,1},	{720,1},
  {721,3}
};

static struct patval owl_vital_apat16[] = {
  {647,7},	{685,1},	{720,1},	{759,1},
  {758,1},	{683,1},	{646,3}
};

static struct patval owl_vital_apat17[] = {
  {683,7},	{646,1},	{609,1},	{648,1},
  {611,1},	{684,1}
};

static struct patval owl_vital_apat18[] = {
  {686,1},	{684,1},	{648,1},	{649,1},
  {758,3}
};

static struct patval owl_vital_apat19[] = {
  {682,1},	{646,1},	{686,1},	{720,1},
  {722,1},	{684,1},	{648,1}
};

static struct patval owl_vital_apat20[] = {
  {647,1},	{722,1}
};

static struct patval owl_vital_apat21[] = {
  {684,1},	{609,3}
};

static struct patval owl_vital_apat22[] = {
  {722,1},	{611,3}
};

static struct patval owl_vital_apat23[] = {
  {684,1}
};

static struct patval owl_vital_apat24[] = {
  {649,1},	{722,1},	{648,1},	{684,1}
};

static struct patval owl_vital_apat25[] = {
  {720,7},	{719,1},	{646,1},	{686,1},
  {682,1},	{757,1},	{610,1},	{722,1},
  {684,1},	{611,1},	{758,1},	{649,1}
};

static struct patval owl_vital_apat26[] = {
  {682,1},	{719,1},	{646,1},	{686,1},
  {722,1},	{757,1},	{610,1},	{611,1},
  {684,1},	{649,1},	{758,1}
};

static struct patval owl_vital_apat27[] = {
  {647,1},	{684,1},	{686,1},	{759,1},
  {722,3},	{760,3}
};

static struct patval owl_vital_apat28[] = {
  {646,1},	{683,1},	{685,1},	{758,1},
  {721,3},	{759,3}
};

static struct patval owl_vital_apat29[] = {
  {647,7},	{683,1},	{720,1},	{646,1},
  {685,1},	{758,1},	{759,3}
};

static struct patval owl_vital_apat30[] = {
  {758,7},	{721,1},	{684,1},	{648,1},
  {723,1},	{686,1},	{759,1}
};

static struct patval owl_vital_apat31[] = {
  {722,7},	{685,1},	{758,1},	{720,1},
  {684,1}
};

static struct patval owl_vital_apat32[] = {
  {721,7},	{686,1},	{648,1},	{684,1},
  {649,1},	{722,1}
};

static struct patval owl_vital_apat33[] = {
  {685,7},	{684,1},	{723,1},	{720,1}
};

static struct patval owl_vital_apat34[] = {
  {648,7},	{647,1},	{722,1},	{721,1},
  {683,1},	{686,1}
};

static struct patval owl_vital_apat35[] = {
  {720,1},	{757,1},	{684,1},	{759,1},
  {686,1},	{685,1}
};

static struct patval owl_vital_apat36[] = {
  {682,1},	{719,1},	{756,1},	{646,1},
  {684,1},	{723,1},	{757,1},	{647,1},
  {722,1},	{760,1}
};

static struct patval owl_vital_apat37[] = {
  {759,7},	{722,1},	{758,1},	{684,1},
  {720,1},	{683,3}
};

static struct patval owl_vital_apat38[] = {
  {646,7},	{684,1},	{609,3}
};

static struct patval owl_vital_apat39[] = {
  {647,7},	{648,1},	{721,1},	{646,1},
  {684,1}
};

static struct patval owl_vital_apat40[] = {
  {686,1},	{720,1},	{685,1},	{684,1},
  {757,3}
};

static struct patval owl_vital_apat41[] = {
  {649,7},	{647,1},	{684,1},	{723,1},
  {722,1}
};

static struct patval owl_vital_apat42[] = {
  {646,1},	{686,1},	{720,1},	{722,1},
  {684,1},	{723,1},	{648,1}
};

static struct patval owl_vital_apat43[] = {
  {647,1},	{684,1},	{721,1}
};

static struct patval owl_vital_apat44[] = {
  {684,1},	{758,1}
};

static struct patval owl_vital_apat45[] = {
  {684,1},	{722,1}
};

static struct patval owl_vital_apat46[] = {
  {646,1},	{610,1},	{648,1},	{684,1}
};

static struct patval owl_vital_apat47[] = {
  {685,1}
};

static struct patval owl_vital_apat48[] = {
  {721,7},	{684,1},	{647,1}
};

static struct patval owl_vital_apat49[] = {
  {684,1},	{722,1}
};

static struct patval owl_vital_apat50[] = {
  {684,1},	{648,1},	{721,1},	{645,3},
  {683,3},	{758,3},	{682,3},	{759,3}
};

static struct patval owl_vital_apat51[] = {
  {758,1},	{720,1},	{722,1},	{684,1},
  {759,3}
};

static int
autohelperowl_vital_apat0(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(609, trans, move);

  return  countlib(a)>2 && owl_topological_eye(b, board[A])==2 && owl_topological_eye(c, board[A])==2 && play_attack_defend_n(color, 1, 1, move, d);
}

static int
autohelperowl_vital_apat1(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(795, trans, move);

  return countlib(A)==2 && countlib(B)==2;
}

static int
autohelperowl_vital_apat5(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(536, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_vital_apat7(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_vital_apat8(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && owl_big_eyespace(move)&& (owl_eye_size(move) <= 8 || !play_attack_defend_n(color, 1, 1, move, move));
}

static int
autohelperowl_vital_apat9(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)==1 && owl_big_eyespace(move) && play_attack_defend_n(color, 1, 1, move, move)!=WIN;
}

static int
autohelperowl_vital_apat10(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return ATTACK_MACRO(a) && !DEFEND_MACRO(a);
}

static int
autohelperowl_vital_apat12(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(723, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=3 && play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_vital_apat13(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);

  return countlib(b)>1 && countlib(c)>1 && owl_eyespace(a) && !ATTACK_MACRO(D);
}

static int
autohelperowl_vital_apat14(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A) == 2 && countlib(b) > 1 && !play_attack_defend_n(color, 1, 3, move, c, d, d);
}

static int
autohelperowl_vital_apat15(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_vital_apat16(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_vital_apat17(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_vital_apat18(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return countlib(A)==2 && owl_big_eyespace(move);
}

static int
autohelperowl_vital_apat19(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return  owl_topological_eye(a, board[C]) == 2 && owl_topological_eye(b, board[C]) == 2;
}

static int
autohelperowl_vital_apat20(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return owl_big_eyespace(a);
}

static int
autohelperowl_vital_apat21(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_big_eyespace(move) && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_vital_apat22(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return owl_big_eyespace(move) && play_attack_defend_n(color, 1, 4, move, a, b, c, a);
}

static int
autohelperowl_vital_apat23(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1 && owl_eyespace(move) && accuratelib(move, color, MAX_LIBERTIES, NULL) > 0;
}

static int
autohelperowl_vital_apat27(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(759, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 2, A, B);
}

static int
autohelperowl_vital_apat28(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);
  B = AFFINE_TRANSFORM(795, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 2, A, B);
}

static int
autohelperowl_vital_apat30(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return countlib(C)==2 && owl_eyespace(a) && play_attack_defend_n(color, 1, 3, move, a, b, b)!=WIN;
}

static int
autohelperowl_vital_apat34(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);

  return  play_attack_defend2_n(color, 0, 1, move, A, move);
}

static int
autohelperowl_vital_apat35(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  accuratelib(A, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==2;
}

static int
autohelperowl_vital_apat37(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(536, trans, move);

  return countlib(A) > 2;
}

static int
autohelperowl_vital_apat38(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return owl_big_eyespace(move) && !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_vital_apat39(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return  owl_eyespace(A);
}

static int
autohelperowl_vital_apat40(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  countlib(A) == 3;
}

static int
autohelperowl_vital_apat41(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A) ==2 || countlib(B) == 2;
}

static int
autohelperowl_vital_apat42(int trans, int move, int color, int action)
{
  int b, c, D;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  D = AFFINE_TRANSFORM(650, trans, move);

  return !ATTACK_MACRO(D) && play_attack_defend_n(color, 1, 1, move, b) && play_attack_defend_n(color, 1, 1, move, c);
}

static int
autohelperowl_vital_apat43(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return  !play_attack_defend_n(color, 1, 3, move, a, b, b) && !play_attack_defend_n(color, 1, 3, move, b, a, a);
}

static int
autohelperowl_vital_apat44(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  owl_proper_eye(move) && (owl_proper_eye(a) + owl_proper_eye(b) + owl_proper_eye(c) > 2) && safe_move(move, OTHER_COLOR(color)) && (owl_eye_size(move) <= 8 || !play_attack_defend_n(color, 1, 1, move, move));
}

static int
autohelperowl_vital_apat45(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return  !is_ko_point(move);
}

static int
autohelperowl_vital_apat46(int trans, int move, int color, int action)
{
  int b, A, C;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(572, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(535, trans, move);

  return  accuratelib(A, OTHER_COLOR(color), MAX_LIBERTIES, NULL) == 1 && accuratelib(A, color, MAX_LIBERTIES, NULL) == 1 && owl_topological_eye(b, board[C]) < 4 && owl_topological_eye(b, board[C]) > 0;
}

static int
autohelperowl_vital_apat47(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return vital_chain(a) && vital_chain(b) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_vital_apat49(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(B) <= 2 && owl_eyespace(A);
}

static struct pattern owl_vital_apat[] = {
  {owl_vital_apat0,6,8, "VA1",-2,-1,1,2,3,3,0x0,721,
    { 0xfcfffc00, 0xfcfdfc30, 0xfcfcfc10, 0xfcfcfc00, 0xfcfdfc00, 0xfcfffc10, 0xfcfcfc30, 0xfcfcfc00},
    { 0x88218800, 0x88208810, 0x88208800, 0x88208800, 0x88208800, 0x88218800, 0x88208810, 0x88208800}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat0,3,0.235600},
  {owl_vital_apat1,7,8, "VA2",-2,-1,1,2,3,3,0xa,647,
    { 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x09220a00, 0x022289a4, 0x80208068, 0x88200000, 0x89220200, 0x0a2209a4, 0x00208868, 0x80208000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat1,3,0.016000},
  {owl_vital_apat2,6,8, "VA3",-2,-2,1,2,3,4,0xa,758,
    { 0xd3ffff00, 0xfff4f0fc, 0xffff1f0f, 0x3c7cfcfc, 0xf0f4ffff, 0xffffd3c0, 0xfc7c3cfc, 0x1fffff00},
    { 0x81280000, 0x0a202004, 0x00a1090a, 0x20208050, 0x20200a16, 0x00288180, 0x80202040, 0x09a10000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat3,7,8, "VA4",-1,-1,2,2,3,3,0xa,686,
    { 0xf0f4ffff, 0xfcfcd0c0, 0xfc7c3c00, 0x1fffff00, 0xd0fcfc00, 0xfff4f000, 0xffff1f0f, 0x3c7cfcfc},
    { 0xa0604a02, 0x58288080, 0x84242800, 0x08a09400, 0x80285800, 0x4a60a000, 0x94a0080a, 0x28248400}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat4,5,8, "VA5",-1,-1,2,1,3,2,0xa,647,
    { 0xc0f0f4e4, 0xfcf04000, 0x7c3c0c00, 0x053eff00, 0x40f0fc00, 0xf4f0c000, 0xff3e0500, 0x0c3c7c6c},
    { 0x80209040, 0x88600000, 0x18200800, 0x00248900, 0x00608800, 0x90208000, 0x89240000, 0x08201804}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat5,4,8, "VA6",0,-2,1,2,1,4,0x2,759,
    { 0x00fcff00, 0xf0f0f0c0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfffc0000, 0x3c3c3c0c, 0x00ffff00},
    { 0x00a41800, 0x20609000, 0x916a0000, 0x18242024, 0x90602060, 0x18a40000, 0x20241800, 0x006a9100}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat5,3,0.010000},
  {owl_vital_apat6,7,8, "VA7",-2,-1,1,1,3,2,0xa,648,
    { 0xfcf4fc00, 0xffffdd00, 0xfc7cfc7c, 0xdcfcfc00, 0xddffff00, 0xfcf4fcf4, 0xfcfcdc00, 0xfc7cfc00},
    { 0x48601800, 0x16628800, 0x90248428, 0x88245000, 0x88621600, 0x186048a0, 0x50248800, 0x84249000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat7,6,8, "VA8",-1,0,1,2,2,2,0x0,683,
    { 0x3d3f3f00, 0x00fcfcf4, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3d00, 0x00fcfc7c, 0xf0f0f000},
    { 0x08222900, 0x00a08860, 0xa0208000, 0x88280000, 0x88a00000, 0x29220800, 0x00288824, 0x8020a000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat7,3,0.040000},
  {owl_vital_apat8,1,4, "VA9",0,0,0,1,0,1,0x0,721,
    { 0x003c0000, 0x00303000, 0x00f00000, 0x30300000, 0x30300000, 0x003c0000, 0x00303000, 0x00f00000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat8,3,0.175360},
  {owl_vital_apat9,1,4, "VA10",0,0,0,1,0,1,0x0,721,
    { 0x003c0000, 0x00303000, 0x00f00000, 0x30300000, 0x30300000, 0x003c0000, 0x00303000, 0x00f00000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat9,3,0.259600},
  {owl_vital_apat10,9,8, "VA11",-1,-2,1,3,2,5,0x2,722,
    { 0xf0ffff00, 0xfcfcf0f0, 0xffff3c00, 0x3cfcfc3c, 0xf0fcfcf0, 0xfffff000, 0xfcfc3c3c, 0x3cffff00},
    { 0xa05a6000, 0x58982020, 0x24962800, 0x20989420, 0x20985820, 0x605aa000, 0x94982020, 0x28962400}
   , 0x1000010,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat10,0,1.600000},
  {owl_vital_apat11,8,8, "VA12",-1,-1,2,2,3,3,0xa,686,
    { 0x50f0fdfd, 0xf4f4c040, 0xfc3c1400, 0x0f7f7f00, 0xc0f4f400, 0xfdf05000, 0x7f7f0f05, 0x143cfcfc},
    { 0x00206880, 0x40a08000, 0xa4200000, 0x08280600, 0x80a04000, 0x68200000, 0x06280800, 0x0020a408}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat12,7,8, "VA13",-1,-1,2,1,3,2,0xa,647,
    { 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc},
    { 0xa0289844, 0x8868a000, 0x98a02800, 0x29a48900, 0xa0688800, 0x9828a000, 0x89a42900, 0x28a09844}
   , 0x1000010,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat12,3,0.610000},
  {owl_vital_apat13,4,8, "VA14",-1,-1,1,1,2,2,0x2,648,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x18602400, 0x10a44800, 0x60249000, 0x84681000, 0x48a41000, 0x24601800, 0x10688400, 0x90246000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat13,3,0.235600},
  {owl_vital_apat14,4,8, "VA15",-1,0,1,2,2,2,0x0,721,
    { 0x3c3f3f00, 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c, 0xf0f0f000},
    { 0x20221800, 0x00688020, 0x90202000, 0x08a40000, 0x80680000, 0x18222000, 0x00a40820, 0x20209000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat14,3,0.376000},
  {owl_vital_apat15,5,8, "VA16",-1,-2,1,1,2,3,0x1,647,
    { 0xfcf4f000, 0xfcfc1c00, 0x3f7fff00, 0xd0fcfcfc, 0x1cfcfcfc, 0xf0f4fc00, 0xfcfcd000, 0xff7f3f00},
    { 0x88200000, 0x08200800, 0x02208800, 0x80208008, 0x08200880, 0x00208800, 0x80208000, 0x88200200}
   , 0x1000000,46.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat15,3,0.010000},
  {owl_vital_apat16,7,8, "VA17",-1,-1,1,3,2,4,0x0,721,
    { 0x7fffff00, 0xf4fcfcfc, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7f00, 0x7cfcfcfc, 0xf4fcfc00},
    { 0x29122200, 0x009808a4, 0x2010a000, 0x80980000, 0x08980000, 0x22122900, 0x00988068, 0xa0102000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat16,0,1.000000},
  {owl_vital_apat17,6,8, "VA18",-1,-2,1,1,2,3,0x0,647,
    { 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc, 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00},
    { 0x84209000, 0x88600400, 0x1a204a00, 0x40248888, 0x04608888, 0x90208400, 0x88244000, 0x4a201a00}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat17,3,1.000000},
  {owl_vital_apat18,5,8, "VA19",0,-1,2,2,2,3,0x2,722,
    { 0x00fdffff, 0xf0f0f0d0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffd0000, 0x3f3f3f1f, 0x00fcfcfc},
    { 0x006080a0, 0x90200000, 0x08240000, 0x00221a00, 0x00209000, 0x80600000, 0x1a220000, 0x00240828}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat18,3,0.016000},
  {owl_vital_apat19,7,4, "VA20",-2,-1,2,1,4,2,0x0,647,
    { 0xfcf0fc30, 0xfcffcc00, 0xfc3cfc30, 0xccfffc00, 0xccfffc00, 0xfcf0fc30, 0xfcffcc00, 0xfc3cfc30},
    { 0x88208820, 0x88228800, 0x88208820, 0x88228800, 0x88228800, 0x88208820, 0x88228800, 0x88208820}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat19,3,0.016000},
  {owl_vital_apat20,2,8, "VA21",0,-1,2,1,2,2,0x2,685,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00900800, 0x20108000, 0x80180000, 0x08102000, 0x80102000, 0x08900000, 0x20100800, 0x00188000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat20,0,0.010000},
  {owl_vital_apat21,2,8, "VA22",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0f000, 0xfcfc0000, 0x3f3f3d00, 0x00fcfc7c, 0x00fcfcf4, 0xf0f0f000, 0xfcfc0000, 0x3d3f3f00},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat21,3,0.610000},
  {owl_vital_apat22,2,8, "VA23",0,-2,3,1,3,3,0x2,685,
    { 0x0030fcfc, 0xc0f0c000, 0xfd300000, 0x0f3f0f07, 0xc0f0c040, 0xfc300000, 0x0f3f0f00, 0x0030fdff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat22,0,0.610000},
  {owl_vital_apat23,1,4, "VA24",0,0,0,1,0,1,0x0,721,
    { 0x003c0000, 0x00303000, 0x00f00000, 0x30300000, 0x30300000, 0x003c0000, 0x00303000, 0x00f00000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat23,3,0.034000},
  {owl_vital_apat24,4,8, "VA25",-1,-1,2,1,3,2,0x6,647,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x14209890, 0x80648400, 0x98205000, 0x48650a00, 0x84648000, 0x98201400, 0x0a654800, 0x50209818}
   , 0x1000000,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat25,12,8, "VA26",-2,-2,2,2,4,4,0x0,647,
    { 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c},
    { 0x922618a0, 0x08669228, 0x926218a0, 0x18668228, 0x926608a0, 0x18269228, 0x826618a0, 0x18629228}
   , 0x1000010,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat26,11,8, "VA26b",-2,-2,2,2,4,4,0x0,648,
    { 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c, 0xfffffcf0, 0xfcffff3c},
    { 0x922618a0, 0x08669228, 0x926218a0, 0x18668228, 0x926608a0, 0x18269228, 0x826618a0, 0x18629228}
   , 0x1000010,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat27,6,8, "VA27",0,-1,2,2,2,3,0x2,685,
    { 0x00f0f7fd, 0xf0f040c0, 0x7c3c0000, 0x073f3f00, 0x40f0f000, 0xf7f00000, 0x3f3f070d, 0x003c7cfc},
    { 0x00a00264, 0x20200080, 0x00280000, 0x01222100, 0x00202000, 0x02a00000, 0x21220108, 0x00280064}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat27,3,0.010000},
  {owl_vital_apat28,6,8, "VA28",-1,-1,1,2,2,3,0x2,648,
    { 0xf0f7fd00, 0xfcfcd070, 0xfc7c3c00, 0x1cfcfc00, 0xd0fcfc00, 0xfdf7f000, 0xfcfc1c34, 0x3c7cfc00},
    { 0xa0122400, 0x08984020, 0x60102800, 0x04988000, 0x40980800, 0x2412a000, 0x80980420, 0x28106000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat28,0,0.010000},
  {owl_vital_apat29,7,8, "VA29",-1,-1,1,2,2,3,0xa,722,
    { 0xfcfffd00, 0xfcfcfc70, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfdfffc00, 0xfcfcfc34, 0xfcfcfc00},
    { 0xa8126000, 0x48980820, 0x2410a800, 0x80988400, 0x08984800, 0x6012a800, 0x84988020, 0xa8102400}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_vital_apat30,7,8, "VA30",0,-1,2,2,2,3,0x0,722,
    { 0x003fff3c, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3c, 0x00f0fcf0},
    { 0x00288228, 0x80202080, 0x08a00000, 0x22220800, 0x20208000, 0x82280000, 0x08222208, 0x00a008a0}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat30,3,0.376000},
  {owl_vital_apat31,5,8, "VA31",-2,0,2,2,4,2,0x4,759,
    { 0x3f3f3f03, 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcff, 0xf0f0f000},
    { 0x18222000, 0x00a40920, 0x20209040, 0x80680000, 0x09a40000, 0x20221804, 0x00688020, 0x90202000}
   , 0x1000010,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat32,6,8, "VA32",-1,-1,2,1,3,2,0x4,720,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x106088a4, 0x90248000, 0x88241000, 0x09621a00, 0x80249000, 0x88601000, 0x1a620900, 0x10248868}
   , 0x1000010,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat33,4,8, "VA33",-1,0,2,1,3,1,0x4,686,
    { 0x0c3c3c3c, 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3c3c0c00, 0x003fff00, 0xc0f0f0f0},
    { 0x08240408, 0x00205800, 0x40608000, 0x96200000, 0x58200000, 0x04240800, 0x00209600, 0x80604080}
   , 0x1000000,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat34,6,8, "VA34",-1,-1,2,1,3,2,0x0,649,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x20981824, 0x2058a000, 0x90982000, 0x29962000, 0xa0582000, 0x18982000, 0x20962900, 0x20989060}
   , 0x1000000,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat34,0,3.000000},
  {owl_vital_apat35,6,8, "VA35",-1,0,2,2,3,2,0x6,722,
    { 0x0f3f3f3f, 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0f00, 0x003fffff, 0xc0f0f0f0},
    { 0x0a202224, 0x00a00888, 0x20208000, 0x812a0000, 0x08a00000, 0x22200a00, 0x002a8188, 0x80202060}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat35,3,0.050000},
  {owl_vital_apat36,10,8, "VA36",-2,-1,2,2,4,3,0x4,721,
    { 0xffff3f0f, 0x3cffffff, 0xf0fcfcf0, 0xfffcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcffff, 0xfcfcf0c0},
    { 0x86a1180a, 0x2862861a, 0x902848a0, 0x4a24a000, 0x86622800, 0x18a1862a, 0xa0244a92, 0x48289080}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat37,6,8, "VA37",-1,-1,1,3,2,4,0x2,796,
    { 0x1f3fff00, 0xc0f4fcfc, 0xfcf0d000, 0xfc7c0c00, 0xfcf4c000, 0xff3f1f00, 0x0c7cfcfc, 0xd0f0fc00},
    { 0x09224800, 0x40208824, 0x84208000, 0x88200400, 0x88204000, 0x48220900, 0x04208860, 0x80208400}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat37,3,0.010000},
  {owl_vital_apat38,3,8, "VA38",-2,-2,1,0,3,2,0x2,647,
    { 0xf0f0f000, 0xfcff0000, 0x3f3f3d30, 0x00fcfc7c, 0x00fffcf4, 0xf0f0f030, 0xfcfc0000, 0x3d3f3f00},
    { 0x00200000, 0x00210000, 0x00200010, 0x00200000, 0x00210000, 0x00200010, 0x00200000, 0x00200000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat38,3,0.610000},
  {owl_vital_apat39,5,8, "VA39",-1,-1,1,1,2,2,0x4,720,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x90289400, 0x88646000, 0x58a01800, 0x24648800, 0x60648800, 0x94289000, 0x88642400, 0x18a05800}
   , 0x1000010,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat39,3,0.010000},
  {owl_vital_apat40,5,8, "VA40",-1,0,2,2,3,2,0x0,759,
    { 0x3d3f3f3f, 0x00fcfcf4, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3d00, 0x00ffff7f, 0xf0f0f0f0},
    { 0x18202020, 0x00a40800, 0x20209000, 0x806a0000, 0x08a40000, 0x20201800, 0x006a8000, 0x90202020}
   , 0x1000010,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat40,3,0.010000},
  {owl_vital_apat41,5,8, "VA41",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40808, 0x20209000, 0x80680000, 0x1a202000, 0x90202000, 0x08a40000, 0x20201a00, 0x00688080}
   , 0x1000010,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat41,3,0.016000},
  {owl_vital_apat42,7,8, "VA42",-1,-1,2,1,3,2,0x0,683,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x88208868, 0x88208800, 0x88208800, 0x8a228900, 0x88208800, 0x88208800, 0x89228a00, 0x882088a4}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat42,3,1.960000},
  {owl_vital_apat43,3,8, "VA43",0,-1,1,2,1,3,0x2,722,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00a81000, 0x20602000, 0x10a80000, 0x20242000, 0x20602000, 0x10a80000, 0x20242000, 0x00a81000}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat43,3,1.600000},
  {owl_vital_apat44,2,4, "VA44",0,0,1,2,1,2,0x0,722,
    { 0x003b2e00, 0x00b0e0b0, 0xe0b00000, 0x2c380000, 0xe0b00000, 0x2e3b0000, 0x00382c38, 0x00b0e000},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x1000010,57.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat44,3,0.198794},
  {owl_vital_apat45,2,8, "VA45",0,0,1,1,1,1,0x2,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat45,3,0.010000},
  {owl_vital_apat46,4,8, "VA46",-1,-2,1,2,2,4,0x0,759,
    { 0xc0f0ff00, 0xfcf0c0c0, 0xfc3f0c00, 0x0c3cfc30, 0xc0f0fc30, 0xfff0c000, 0xfc3c0c0c, 0x0c3ffc00},
    { 0x80208400, 0x88204000, 0x48220800, 0x04208820, 0x40208820, 0x84208000, 0x88200400, 0x08224800}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat46,3,0.085760},
  {owl_vital_apat47,1,4, "VA47",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x1000000,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat47,0,1.160000},
  {owl_vital_apat48,3,8, "VA48",-1,-1,0,2,1,3,0x9,683,
    { 0xffff0000, 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000},
    { 0x00a10000, 0x20200010, 0x00280000, 0x00202000, 0x00202000, 0x00a10000, 0x20200010, 0x00280000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat49,2,8, "VA49",0,0,1,1,1,1,0x0,721,
    { 0x003c2c00, 0x00b0f000, 0xe0f00000, 0x3c380000, 0xf0b00000, 0x2c3c0000, 0x00383c00, 0x00f0e000},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_vital_apat49,3,0.016000},
  {owl_vital_apat50,8,8, "VA50",-2,-1,1,2,3,3,0xa,685,
    { 0xd0fdfd00, 0xfdf5f050, 0xfcfc1c14, 0x3c7cfc00, 0xf0f5fd00, 0xfdfdd050, 0xfc7c3c14, 0x1cfcfc00},
    { 0x40688000, 0x94202000, 0x08a40400, 0x20205800, 0x20209400, 0x80684000, 0x58202000, 0x04a40800}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_vital_apat51,5,8, "VA51",-2,0,2,2,4,2,0xa,682,
    { 0x3f3f3d3f, 0x00ffff7e, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3d3f3f3e, 0x00fffff7, 0xf0f0f0f0},
    { 0x09220804, 0x00208924, 0x80208040, 0x89200000, 0x89200000, 0x08220904, 0x00208960, 0x80208040}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0,NULL,NULL,0,0.0}
};

#include "dfa.h"
static const state_rt_t state_owl_vital_apat[1127] = {
{0,{0,0,0,0}},	{0,{0,1,2,0}},	{0,{2,3,4,0}},
{0,{4,5,6,7}},	{0,{7,7,7,0}},	{0,{0,0,7,0}},
{0,{7,0,8,0}},	{0,{8,9,10,11}},	{0,{11,12,13,0}},
{0,{13,14,14,0}},	{0,{14,0,0,0}},	{0,{14,14,14,14}},
{0,{0,0,14,0}},	{0,{14,14,15,14}},	{0,{0,0,15,0}},
{11,{15,16,17,18}},	{0,{18,19,20,21}},	{0,{21,22,23,24}},
{0,{24,25,0,0}},	{11,{25,26,27,28}},	{0,{28,29,30,31}},
{0,{31,32,33,34}},	{11,{34,35,36,0}},	{0,{36,0,36,0}},
{11,{36,0,0,0}},	{0,{36,36,37,0}},	{0,{0,0,37,0}},
{0,{37,37,37,37}},	{0,{37,36,36,36}},	{0,{37,38,0,0}},
{0,{38,39,40,41}},	{0,{41,42,43,44}},	{0,{44,45,46,43}},
{0,{42,46,41,42}},	{0,{46,47,48,47}},	{0,{48,46,47,46}},
{0,{48,45,46,45}},	{0,{48,48,49,48}},	{0,{49,50,51,0}},
{0,{51,52,50,0}},	{0,{52,53,49,0}},	{0,{50,50,48,0}},
{0,{52,0,0,0}},	{0,{52,0,0,0}},	{0,{52,53,54,55}},
{0,{55,54,54,54}},	{0,{55,56,56,56}},	{0,{52,52,52,52}},
{0,{55,37,56,37}},	{0,{56,36,55,36}},	{0,{56,35,54,35}},
{0,{34,34,53,34}},	{0,{55,56,57,0}},	{0,{57,0,56,0}},
{0,{57,0,55,0}},	{0,{0,0,54,0}},	{0,{56,57,58,57}},
{0,{58,59,58,58}},	{0,{59,60,60,60}},	{0,{60,0,0,0}},
{0,{0,0,60,0}},	{0,{60,0,0,0}},	{0,{60,0,0,0}},
{0,{0,0,60,0}},	{0,{60,60,60,60}},	{0,{60,60,60,61}},
{0,{0,0,0,61}},	{0,{0,0,0,61}},	{0,{61,61,62,63}},
{0,{63,63,64,65}},	{0,{65,65,66,67}},	{0,{67,61,61,61}},
{0,{67,67,67,68}},	{0,{59,59,68,59}},	{0,{58,58,68,58}},
{0,{57,57,57,57}},	{0,{63,63,63,67}},	{0,{67,55,56,57}},
{0,{54,54,64,56}},	{0,{53,53,54,53}},	{0,{65,66,67,68}},
{0,{68,69,69,69}},	{0,{69,68,70,68}},	{0,{62,63,63,70}},
{0,{61,62,62,62}},	{0,{65,65,65,65}},	{0,{68,64,66,64}},
{0,{68,68,69,70}},	{0,{0,0,70,71}},	{0,{0,0,71,0}},
{0,{71,71,72,73}},	{0,{0,0,67,0}},	{0,{69,69,70,72}},
{0,{72,0,65,66}},	{0,{0,0,0,72}},	{0,{0,0,0,72}},
{0,{72,72,73,74}},	{0,{35,35,35,74}},	{0,{74,74,74,75}},
{0,{33,33,33,75}},	{0,{75,76,32,74}},	{0,{76,76,77,78}},
{0,{76,76,76,77}},	{0,{77,77,78,78}},	{0,{46,46,46,78}},
{0,{78,78,79,45}},	{0,{77,77,44,44}},	{0,{78,78,79,79}},
{0,{0,0,0,79}},	{0,{0,0,0,79}},	{0,{79,79,80,80}},
{0,{80,81,0,0}},	{0,{81,82,83,82}},	{0,{81,81,82,81}},
{0,{82,82,83,82}},	{0,{83,83,84,0}},	{0,{82,82,83,84}},
{0,{84,0,85,0}},	{0,{0,0,84,0}},	{0,{82,0,0,0}},
{0,{83,83,83,83}},	{0,{0,0,83,0}},	{0,{0,0,83,0}},
{0,{0,0,83,0}},	{0,{0,83,0,0}},	{0,{83,82,0,0}},
{0,{83,84,0,0}},	{0,{0,84,0,0}},	{0,{84,0,0,0}},
{0,{84,85,86,0}},	{0,{83,84,86,0}},	{0,{86,87,88,89}},
{0,{89,0,90,0}},	{0,{90,0,89,0}},	{0,{87,0,90,0}},
{0,{90,91,92,91}},	{0,{92,90,93,90}},	{0,{88,89,93,89}},
{0,{83,0,93,0}},	{0,{82,93,83,0}},	{0,{93,94,95,96}},
{0,{82,0,96,0}},	{0,{96,0,97,0}},	{0,{78,89,81,0}},
{0,{77,0,96,0}},	{0,{76,96,0,0}},	{0,{75,86,0,0}},
{0,{74,85,95,0}},	{0,{95,96,72,72}},	{0,{72,96,0,0}},
{0,{71,0,0,0}},	{0,{70,94,95,0}},	{0,{86,0,95,0}},
{0,{80,81,83,83}},	{0,{67,0,92,0}},	{0,{93,59,93,0}},
{0,{93,58,94,0}},	{0,{94,61,95,63}},	{0,{95,0,0,0}},
{0,{95,0,0,0}},	{0,{95,0,87,0}},	{0,{0,71,0,0}},
{0,{91,70,0,0}},	{0,{73,71,73,73}},	{0,{92,68,0,0}},
{0,{0,0,92,0}},	{0,{54,54,54,54}},	{0,{69,69,69,69}},
{0,{90,91,92,0}},	{0,{92,90,93,0}},	{0,{91,89,93,0}},
{0,{50,0,93,0}},	{0,{53,54,93,54}},	{0,{52,53,93,53}},
{0,{47,0,93,0}},	{0,{93,0,94,0}},	{0,{92,0,94,0}},
{0,{91,0,94,0}},	{0,{43,0,94,0}},	{0,{42,0,94,0}},
{0,{78,79,94,0}},	{0,{80,78,78,0}},	{0,{39,0,93,0}},
{0,{85,0,93,0}},	{0,{37,0,93,0}},	{0,{89,74,89,0}},
{0,{73,73,73,0}},	{0,{0,0,91,0}},	{0,{91,0,0,0}},
{0,{87,91,87,0}},	{0,{0,90,0,0}},	{0,{85,0,90,0}},
{0,{84,0,84,0}},	{0,{0,0,89,0}},	{0,{0,0,89,0}},
{0,{89,0,88,0}},	{0,{30,30,89,30}},	{0,{89,29,88,29}},
{0,{89,0,0,0}},	{0,{89,0,0,0}},	{0,{0,89,0,0}},
{0,{0,0,89,0}},	{0,{82,0,0,0}},	{0,{23,23,23,23}},
{0,{87,0,0,0}},	{0,{87,0,0,0}},	{0,{87,0,0,0}},
{4,{0,0,0,0}},	{0,{86,0,0,0}},	{0,{85,86,0,0}},
{4,{86,0,0,0}},	{0,{85,0,0,0}},	{0,{0,85,0,0}},
{0,{85,86,86,86}},	{0,{86,0,87,0}},	{15,{85,0,87,0}},
{15,{84,0,87,0}},	{0,{87,82,82,82}},	{0,{87,0,83,0}},
{15,{87,88,83,0}},	{0,{88,0,0,0}},	{0,{78,78,78,78}},
{15,{0,0,0,0}},	{0,{76,76,86,76}},	{15,{0,83,0,0}},
{0,{85,85,85,85}},	{0,{85,85,85,85}},	{15,{84,84,84,84}},
{0,{84,82,82,82}},	{15,{84,82,82,82}},	{15,{81,84,81,81}},
{15,{0,0,0,84}},	{0,{0,0,69,0}},	{0,{83,66,66,66}},
{0,{83,0,67,0}},	{15,{82,0,0,0}},	{0,{81,0,0,0}},
{15,{0,0,81,0}},	{0,{81,61,61,61}},	{15,{81,0,0,0}},
{15,{0,81,0,0}},	{0,{81,81,82,81}},	{0,{0,0,82,0}},
{0,{82,56,56,56}},	{0,{64,0,57,0}},	{0,{77,77,77,77}},
{0,{80,0,0,0}},	{0,{73,0,0,0}},	{0,{52,0,0,0}},
{0,{51,0,78,0}},	{0,{50,0,74,0}},	{0,{77,0,0,0}},
{0,{53,0,0,0}},	{0,{0,0,74,0}},	{0,{0,0,75,0}},
{0,{65,0,72,0}},	{0,{74,0,0,0}},	{0,{0,64,0,0}},
{0,{41,41,73,41}},	{0,{0,0,73,0}},	{15,{0,0,73,0}},
{0,{38,38,73,38}},	{15,{0,0,70,0}},	{38,{0,0,69,0}},
{38,{71,0,0,0}},	{15,{71,71,71,46}},	{38,{45,45,45,45}},
{38,{0,0,0,0}},	{0,{31,31,69,31}},	{15,{0,0,69,0}},
{15,{0,0,69,0}},	{15,{69,69,70,69}},	{15,{68,68,68,68}},
{38,{67,67,67,67}},	{0,{0,0,59,0}},	{0,{67,0,0,0}},
{0,{0,0,62,0}},	{0,{66,0,0,0}},	{0,{57,0,0,0}},
{0,{65,0,0,0}},	{0,{0,0,65,0}},	{0,{0,0,65,0}},
{0,{65,66,65,65}},	{0,{64,64,64,64}},	{0,{65,65,65,65}},
{0,{65,65,65,65}},	{0,{65,65,65,65}},	{0,{65,65,65,65}},
{0,{65,65,65,65}},	{0,{65,0,0,0}},	{0,{0,65,0,0}},
{0,{65,65,65,65}},	{0,{65,65,65,65}},	{0,{65,65,65,65}},
{0,{0,0,65,0}},	{0,{0,0,65,0}},	{0,{0,0,65,0}},
{0,{0,0,65,0}},	{0,{65,65,66,65}},	{0,{0,0,66,0}},
{0,{63,63,63,63}},	{0,{65,65,65,0}},	{0,{0,65,0,0}},
{0,{65,66,65,65}},	{0,{66,66,67,66}},	{0,{65,65,65,65}},
{0,{64,64,66,64}},	{0,{0,0,66,0}},	{0,{66,66,66,66}},
{0,{66,0,67,0}},	{0,{0,67,55,0}},	{0,{0,66,0,0}},
{0,{66,67,68,0}},	{0,{65,66,65,0}},	{0,{0,63,59,0}},
{0,{0,0,66,0}},	{0,{66,66,67,66}},	{0,{65,65,65,65}},
{0,{0,0,0,66}},	{0,{59,59,61,0}},	{0,{58,58,58,0}},
{0,{64,64,64,0}},	{0,{0,0,0,64}},	{0,{43,43,43,63}},
{0,{63,63,63,63}},	{0,{49,49,63,49}},	{0,{63,63,63,63}},
{0,{63,0,0,0}},	{0,{63,42,42,42}},	{0,{63,0,63,0}},
{0,{63,0,0,0}},	{0,{63,63,64,63}},	{0,{64,64,64,64}},
{0,{61,61,61,61}},	{0,{62,62,63,62}},	{0,{63,63,63,63}},
{0,{0,63,0,0}},	{0,{63,63,64,63}},	{0,{62,62,62,62}},
{0,{61,61,61,63}},	{0,{0,0,63,0}},	{0,{59,59,63,59}},
{0,{63,63,63,0}},	{0,{0,0,63,0}},	{0,{63,0,0,0}},
{0,{0,0,0,63}},	{0,{63,63,63,63}},	{0,{0,0,63,0}},
{0,{63,63,64,0}},	{0,{64,0,0,0}},	{0,{0,27,60,0}},
{0,{62,26,0,0}},	{0,{0,0,62,0}},	{0,{62,0,61,0}},
{0,{62,62,62,62}},	{0,{56,56,56,0}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,61,0}},	{0,{0,0,61,0}},
{0,{0,0,61,0}},	{0,{61,61,61,0}},	{0,{61,61,61,0}},
{0,{0,0,61,0}},	{0,{61,61,62,61}},	{0,{60,60,60,60}},
{0,{61,61,61,0}},	{0,{0,0,61,0}},	{0,{0,0,61,0}},
{0,{0,0,61,0}},	{0,{61,61,62,61}},	{0,{62,62,63,62}},
{0,{59,59,63,59}},	{0,{0,0,63,0}},	{0,{57,57,57,57}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{62,0,0,0}},
{0,{62,62,62,62}},	{0,{62,61,61,61}},	{0,{62,62,62,62}},
{0,{0,0,62,0}},	{0,{62,62,62,62}},	{0,{62,62,62,62}},
{0,{62,0,0,0}},	{0,{62,62,62,0}},	{0,{0,0,62,0}},
{0,{0,0,62,0}},	{0,{45,45,45,45}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,62,40}},	{0,{62,62,62,0}},
{0,{62,62,62,0}},	{0,{62,63,62,0}},	{0,{63,64,63,30}},
{0,{0,64,0,0}},	{0,{28,64,28,28}},	{0,{0,0,64,0}},
{0,{40,64,0,0}},	{0,{56,56,56,0}},	{0,{57,57,57,24}},
{0,{54,62,54,0}},	{0,{62,0,0,0}},	{0,{62,52,52,0}},
{0,{62,62,62,62}},	{0,{62,0,0,0}},	{0,{62,62,62,62}},
{0,{62,0,0,0}},	{0,{62,62,62,0}},	{0,{0,0,62,0}},
{0,{62,62,62,0}},	{0,{61,61,62,0}},	{0,{0,0,62,0}},
{0,{0,0,62,0}},	{0,{0,0,62,0}},	{0,{0,0,62,0}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{62,62,62,62}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{62,62,62,62}},
{0,{62,62,62,62}},	{0,{0,0,0,62}},	{0,{62,62,62,62}},
{0,{61,61,61,62}},	{0,{62,62,62,62}},	{0,{62,0,62,0}},
{0,{62,62,63,62}},	{0,{63,61,64,61}},	{0,{0,64,0,0}},
{0,{0,63,0,54}},	{0,{54,63,54,54}},	{0,{53,62,53,54}},
{0,{0,60,62,51}},	{0,{62,62,62,62}},	{0,{62,62,62,62}},
{0,{62,62,62,62}},	{0,{0,0,0,62}},	{0,{62,62,62,62}},
{0,{61,61,61,62}},	{0,{62,62,62,62}},	{0,{62,0,0,0}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{62,62,62,62}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{0,0,62,0}},
{0,{62,62,62,62}},	{0,{62,62,62,62}},	{0,{62,63,62,0}},
{0,{61,62,61,33}},	{0,{62,0,62,0}},	{0,{59,59,59,0}},
{0,{61,61,61,61}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{0,0,61,0}},	{0,{0,0,61,0}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{0,0,61,0}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{61,61,61,61}},	{0,{61,61,61,61}},	{0,{61,61,61,0}},
{0,{61,61,61,61}},	{54,{0,0,0,0}},	{0,{60,60,60,60}},
{0,{60,60,60,60}},	{0,{60,60,60,0}},	{0,{60,0,60,0}},
{0,{0,0,60,0}},	{0,{0,0,60,0}},	{0,{0,0,60,0}},
{0,{0,0,60,0}},	{0,{60,60,60,60}},	{0,{59,59,60,59}},
{0,{0,0,60,0}},	{0,{0,0,60,0}},	{0,{0,0,60,0}},
{0,{0,0,60,0}},	{0,{0,0,60,0}},	{0,{0,0,60,0}},
{0,{60,0,0,0}},	{0,{60,51,51,51}},	{0,{60,0,0,0}},
{0,{60,60,60,0}},	{0,{60,60,60,60}},	{0,{60,60,60,60}},
{0,{60,0,0,0}},	{0,{60,60,60,60}},	{0,{60,59,59,59}},
{0,{60,60,60,60}},	{0,{0,0,0,60}},	{0,{60,0,0,0}},
{0,{60,40,40,40}},	{0,{60,60,60,0}},	{0,{0,0,60,0}},
{0,{60,60,60,60}},	{0,{0,0,60,0}},	{0,{60,60,60,60}},
{0,{60,60,60,60}},	{0,{0,0,60,0}},	{0,{40,0,59,0}},
{0,{0,59,0,0}},	{0,{0,0,59,0}},	{0,{0,0,59,0}},
{0,{28,28,59,28}},	{0,{27,27,59,27}},	{0,{0,0,59,0}},
{0,{25,25,59,25}},	{0,{0,59,0,0}},	{0,{0,0,59,0}},
{0,{59,59,60,0}},	{0,{60,60,60,60}},	{0,{59,59,60,59}},
{0,{60,60,60,60}},	{0,{0,0,60,0}},	{0,{60,60,60,60}},
{0,{0,0,60,0}},	{0,{0,0,60,0}},	{0,{60,60,60,60}},
{0,{60,0,60,0}},	{0,{60,58,60,58}},	{0,{60,60,60,60}},
{0,{60,60,60,60}},	{0,{60,60,60,60}},	{0,{60,60,60,0}},
{0,{60,60,60,61}},	{0,{61,61,61,61}},	{0,{61,61,61,61}},
{0,{0,0,0,61}},	{0,{61,61,61,61}},	{0,{0,0,61,0}},
{0,{61,0,0,0}},	{0,{61,61,61,61}},	{0,{61,60,60,60}},
{0,{0,0,61,0}},	{16,{0,0,0,0}},	{0,{60,60,60,60}},
{18,{59,59,59,59}},	{16,{58,58,58,58}},	{19,{57,57,57,57}},
{0,{57,0,0,0}},	{0,{57,52,52,52}},	{0,{0,0,0,57}},
{0,{57,57,57,57}},	{0,{57,57,57,57}},	{0,{57,57,57,57}},
{0,{0,0,0,57}},	{0,{57,57,57,57}},	{0,{56,56,56,57}},
{0,{57,57,57,57}},	{0,{0,0,0,57}},	{0,{57,0,0,0}},
{0,{57,41,41,41}},	{0,{57,57,57,57}},	{0,{0,0,0,57}},
{0,{57,57,57,57}},	{18,{0,0,0,0}},	{0,{56,56,56,56}},
{0,{56,56,56,56}},	{0,{0,56,0,0}},	{0,{0,0,0,56}},
{0,{0,0,0,56}},	{0,{56,0,0,55}},	{0,{30,30,30,56}},
{0,{56,29,29,55}},	{0,{53,0,0,0}},	{0,{54,27,27,27}},
{0,{0,0,0,54}},	{0,{54,54,54,54}},	{0,{54,54,54,54}},
{0,{53,53,53,54}},	{0,{54,54,54,54}},	{0,{53,53,53,54}},
{0,{0,0,54,0}},	{0,{0,0,54,0}},	{0,{54,54,54,54}},
{47,{0,0,0,0}},	{0,{0,0,0,53}},	{0,{53,53,53,53}},
{0,{0,0,0,53}},	{0,{51,51,51,53}},	{0,{53,53,53,53}},
{0,{53,53,53,53}},	{0,{53,53,53,53}},	{0,{53,0,0,0}},
{0,{52,0,0,53}},	{0,{0,0,0,52}},	{0,{52,52,52,52}},
{0,{52,52,52,52}},	{0,{0,0,0,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{52,52,52,52}},
{0,{52,52,52,52}},	{0,{52,52,52,52}},	{0,{52,52,52,52}},
{0,{0,0,0,52}},	{0,{47,47,47,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{0,0,0,52}},	{0,{43,43,43,52}},
{0,{52,52,52,52}},	{0,{0,0,0,52}},	{0,{50,50,50,52}},
{0,{39,39,39,52}},	{0,{0,0,0,52}},	{0,{0,0,0,52}},
{0,{36,36,36,52}},	{0,{52,52,52,52}},	{0,{0,0,0,52}},
{0,{52,52,52,52}},	{0,{52,52,52,52}},	{0,{52,52,52,52}},
{0,{0,0,0,52}},	{0,{0,0,0,52}},	{0,{0,0,0,52}},
{0,{52,52,52,52}},	{0,{26,26,26,52}},	{0,{52,52,52,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{51,51,51,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{0,0,0,52}},
{0,{50,50,50,52}},	{0,{0,0,0,52}},	{0,{52,52,52,52}},
{0,{52,52,52,53}},	{0,{53,0,0,0}},	{0,{53,0,0,0}},
{0,{0,53,0,0}},	{0,{53,53,53,53}},	{0,{0,0,0,53}},
{0,{0,0,0,53}},	{0,{0,0,0,53}},	{0,{53,53,53,53}},
{0,{53,53,53,53}},	{0,{53,53,53,53}},	{0,{53,53,53,53}},
{0,{0,0,53,0}},	{0,{0,0,0,53}},	{0,{48,48,48,53}},
{0,{0,0,0,53}},	{0,{0,0,0,53}},	{0,{53,0,0,0}},
{0,{53,44,44,44}},	{0,{53,53,53,53}},	{0,{0,53,0,0}},
{0,{51,53,51,51}},	{0,{40,53,40,40}},	{0,{0,53,0,0}},
{0,{0,0,0,53}},	{0,{37,37,37,53}},	{0,{0,53,0,0}},
{0,{53,0,0,0}},	{0,{0,0,53,0}},	{0,{0,0,53,0}},
{0,{0,0,53,0}},	{0,{0,0,0,53}},	{0,{0,0,0,53}},
{0,{53,0,53,0}},	{0,{53,53,53,53}},	{0,{53,27,53,27}},
{0,{53,53,53,53}},	{0,{0,0,0,53}},	{0,{0,0,53,0}},
{0,{53,0,0,0}},	{0,{53,0,46,0}},	{0,{53,53,53,53}},
{0,{53,52,53,52}},	{0,{0,0,0,53}},	{0,{53,53,53,0}},
{0,{0,0,0,53}},	{0,{40,53,40,0}},	{0,{53,53,53,53}},
{0,{53,0,0,0}},	{0,{53,51,51,51}},	{0,{0,53,0,0}},
{0,{53,53,53,0}},	{0,{53,0,0,0}},	{0,{52,50,0,0}},
{0,{52,0,0,0}},	{0,{52,0,0,0}},	{0,{52,0,0,0}},
{0,{52,52,52,52}},	{0,{0,0,0,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{52,52,52,52}},	{0,{52,52,52,52}},
{0,{52,52,52,52}},	{0,{52,52,52,52}},	{0,{0,52,0,0}},
{0,{0,0,0,52}},	{0,{47,47,47,52}},	{0,{0,0,0,52}},
{0,{0,0,0,52}},	{0,{0,0,52,0}},	{0,{43,43,52,43}},
{0,{52,52,52,52}},	{0,{0,52,0,0}},	{0,{50,52,50,50}},
{0,{39,52,39,39}},	{0,{0,0,0,52}},	{0,{0,0,0,52}},
{0,{36,36,36,52}},	{0,{0,0,52,0}},	{0,{52,0,0,0}},
{30,{0,0,0,0}},	{0,{51,0,0,0}},	{0,{51,51,51,0}},
{0,{0,0,0,51}},	{0,{0,0,0,51}},	{0,{0,51,0,0}},
{0,{51,51,51,51}},	{0,{26,51,26,26}},	{0,{51,51,51,51}},
{0,{0,0,0,51}},	{0,{51,51,51,0}},	{0,{0,0,51,0}},
{0,{0,44,50,0}},	{0,{50,50,50,50}},	{0,{49,50,49,49}},
{0,{0,0,0,50}},	{0,{0,0,50,0}},	{0,{0,0,0,50}},
{0,{0,50,0,0}},	{0,{50,50,50,50}},	{0,{0,0,50,0}},
{0,{48,48,50,48}},	{0,{50,50,50,50}},	{0,{50,50,50,50}},
{0,{50,50,50,50}},	{0,{50,50,50,50}},	{2,{0,0,0,0}},
{3,{0,0,0,0}},	{0,{0,0,48,0}},	{0,{48,0,48,0}},
{0,{48,0,48,0}},	{0,{48,0,0,0}},	{0,{48,48,48,48}},
{0,{48,48,0,0}},	{0,{48,48,46,46}},	{0,{48,0,0,0}},
{17,{0,0,0,0}},	{0,{47,47,47,47}},	{0,{47,47,46,46}},
{0,{0,0,47,0}},	{0,{47,0,0,0}},	{0,{47,0,0,0}},
{0,{47,39,0,0}},	{0,{47,47,47,47}},	{0,{0,0,47,0}},
{0,{45,45,47,45}},	{0,{35,35,45,0}},	{0,{46,0,46,0}},
{0,{46,46,46,46}},	{0,{46,46,45,45}},	{28,{0,0,0,0}},
{0,{0,0,45,0}},	{31,{0,0,0,0}},	{0,{0,0,44,0}},
{0,{44,0,0,0}},	{0,{44,0,44,0}},	{35,{0,0,0,0}},
{0,{43,43,43,43}},	{35,{23,23,0,0}},	{0,{42,42,41,41}},
{0,{42,42,42,42}},	{0,{42,0,0,0}},	{41,{0,0,0,0}},
{0,{41,0,0,0}},	{35,{40,0,0,0}},	{0,{40,0,0,0}},
{0,{40,40,40,0}},	{0,{40,0,0,0}},	{48,{0,0,0,0}},
{0,{0,39,0,0}},	{0,{39,0,39,0}},	{0,{38,37,38,0}},
{0,{0,0,38,0}},	{0,{38,0,0,0}},	{0,{38,0,0,0}},
{0,{38,0,38,0}},	{0,{38,38,38,38}},	{6,{0,0,0,0}},
{7,{0,0,0,0}},	{0,{36,0,0,0}},	{0,{0,0,36,0}},
{13,{0,0,0,0}},	{13,{0,0,34,0}},	{14,{0,0,0,0}},
{0,{33,0,0,0}},	{13,{32,0,0,0}},	{0,{0,0,0,32}},
{0,{32,32,32,32}},	{0,{32,32,32,32}},	{13,{31,31,31,31}},
{0,{0,0,0,31}},	{0,{31,31,31,31}},	{0,{30,30,30,31}},
{0,{0,0,0,31}},	{0,{31,0,0,0}},	{13,{30,0,0,0}},
{0,{0,0,0,30}},	{32,{0,0,0,0}},	{0,{29,0,0,0}},
{0,{0,0,0,29}},	{0,{0,0,29,0}},	{13,{0,0,28,0}},
{0,{0,0,0,28}},	{0,{28,28,28,28}},	{42,{0,0,0,0}},
{0,{0,27,0,0}},	{0,{0,0,27,0}},	{46,{0,0,0,0}},
{0,{26,26,26,26}},	{0,{0,0,0,26}},	{0,{26,26,26,26}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{26,26,26,26}},
{0,{0,26,0,0}},	{0,{26,0,26,0}},	{0,{26,26,26,26}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{0,26,0,0}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{26,26,26,26}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{26,26,26,26}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{26,26,26,26}},
{0,{26,26,26,26}},	{0,{26,26,26,26}},	{0,{0,0,0,26}},
{43,{0,0,0,0}},	{0,{25,25,25,25}},	{0,{25,25,25,25}},
{0,{25,25,25,25}},	{0,{0,0,0,25}},	{0,{0,0,0,25}},
{0,{25,25,25,25}},	{0,{25,25,25,25}},	{0,{0,25,0,0}},
{0,{25,25,25,0}},	{0,{25,25,25,25}},	{0,{25,25,25,25}},
{0,{0,25,0,0}},	{0,{0,25,0,0}},	{0,{25,25,25,25}},
{0,{25,0,0,0}},	{0,{25,25,25,25}},	{0,{25,24,24,24}},
{0,{0,25,0,0}},	{0,{25,25,25,25}},	{0,{25,25,25,0}},
{0,{0,25,0,0}},	{0,{25,25,25,0}},	{0,{25,25,25,25}},
{0,{25,25,25,25}},	{0,{0,0,25,0}},	{0,{0,0,25,0}},
{0,{25,0,25,0}},	{0,{25,25,25,0}},	{0,{0,0,25,0}},
{0,{25,0,0,0}},	{0,{25,0,25,0}},	{0,{25,25,25,25}},
{0,{25,25,25,25}},	{0,{25,25,25,25}},	{0,{0,0,0,25}},
{0,{25,25,25,25}},	{0,{0,25,0,0}},	{0,{25,25,25,25}},
{0,{25,25,25,25}},	{24,{0,0,0,0}},	{0,{24,24,24,24}},
{24,{23,23,23,23}},	{0,{0,23,0,0}},	{0,{23,23,23,23}},
{0,{23,23,23,23}},	{0,{23,23,23,0}},	{0,{23,23,23,0}},
{0,{23,23,23,23}},	{0,{23,0,23,0}},	{0,{0,0,23,0}},
{0,{0,0,23,0}},	{49,{0,0,0,0}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{0,22,0,0}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{22,22,22,22}},	{0,{22,22,22,22}},
{0,{0,0,0,22}},	{0,{22,22,22,22}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{22,22,22,22}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{22,22,22,22}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{22,22,22,22}},	{0,{22,22,22,22}},
{0,{22,22,22,22}},	{0,{22,22,22,22}},	{45,{0,0,0,0}},
{0,{21,21,21,21}},	{0,{21,21,21,21}},	{0,{21,21,21,21}},
{0,{21,21,21,21}},	{0,{21,21,21,21}},	{0,{21,21,21,21}},
{0,{21,21,21,21}},	{0,{0,0,0,21}},	{0,{21,21,21,0}},
{0,{0,0,21,0}},	{0,{21,21,21,21}},	{0,{21,21,21,21}},
{0,{21,21,21,21}},	{0,{0,0,0,21}},	{0,{21,21,21,21}},
{0,{21,21,21,21}},	{0,{0,0,21,0}},	{0,{21,0,21,0}},
{0,{21,21,21,21}},	{0,{0,0,21,0}},	{0,{21,21,21,0}},
{0,{21,21,21,21}},	{0,{21,21,21,21}},	{0,{21,21,21,21}},
{0,{21,21,21,21}},	{0,{21,21,21,21}},	{0,{21,21,21,21}},
{0,{21,21,21,0}},	{0,{21,0,0,0}},	{0,{21,0,21,0}},
{21,{0,0,0,0}},	{0,{20,20,20,20}},	{0,{20,20,20,20}},
{0,{20,20,20,20}},	{0,{0,0,0,20}},	{0,{20,0,20,0}},
{0,{0,0,0,20}},	{0,{0,20,0,0}},	{34,{0,0,0,0}},
{0,{0,0,19,0}},	{39,{0,0,0,0}},	{0,{18,18,18,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{12,{0,0,0,0}},	{20,{0,0,0,0}},
{0,{16,16,16,16}},	{0,{16,16,16,16}},	{0,{16,16,16,16}},
{0,{0,0,0,16}},	{27,{0,0,0,0}},	{0,{0,0,0,15}},
{0,{0,0,0,15}},	{36,{0,0,0,0}},	{0,{14,14,14,14}},
{0,{0,0,0,14}},	{0,{14,14,14,14}},	{0,{14,14,14,14}},
{0,{14,14,14,14}},	{0,{0,0,0,14}},	{0,{14,14,14,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{14,14,14,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{14,14,14,14}},	{0,{14,14,14,14}},
{0,{14,0,0,0}},	{0,{14,14,14,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{14,14,14,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{14,14,14,14}},	{0,{14,14,14,14}},	{0,{14,0,0,0}},
{0,{14,14,14,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{14,14,14,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{14,14,14,14}},
{0,{14,14,14,14}},	{0,{14,14,14,14}},	{0,{14,14,14,14}},
{0,{0,0,0,14}},	{0,{0,0,0,14}},	{0,{14,0,0,0}},
{0,{14,0,14,0}},	{0,{14,0,0,0}},	{0,{0,0,14,0}},
{0,{0,0,0,14}},	{0,{0,0,14,0}},	{0,{14,0,14,0}},
{0,{14,0,0,0}},	{0,{14,0,0,0}},	{0,{14,0,0,0}},
{0,{14,0,0,0}},	{0,{14,14,14,14}},	{0,{0,0,0,14}},
{0,{0,0,0,14}},	{23,{0,0,0,0}},	{25,{0,0,0,0}},
{0,{0,0,0,12}},	{29,{0,0,0,0}},	{0,{0,0,0,11}},
{0,{11,11,11,11}},	{50,{0,0,0,0}},	{51,{0,0,0,0}},
{0,{9,9,9,9}},	{53,{0,0,0,0}},	{0,{8,8,8,8}},
{0,{8,8,0,0}},	{0,{8,0,8,0}},	{0,{8,0,0,0}},
{0,{8,8,8,8}},	{0,{8,8,8,8}},	{0,{0,0,0,8}},
{0,{0,0,0,8}},	{0,{8,8,8,8}},	{0,{8,8,8,8}},
{8,{0,0,0,0}},	{22,{0,0,0,0}},	{0,{0,0,0,6}},
{0,{0,0,0,6}},	{0,{6,6,6,6}},	{0,{6,6,6,6}},
{0,{6,6,6,6}},	{0,{6,6,6,6}},	{0,{6,6,6,6}},
{0,{6,6,6,6}},	{0,{0,0,0,6}},	{0,{0,0,0,6}},
{0,{6,6,6,6}},	{0,{6,6,0,0}},	{0,{6,6,6,6}},
{0,{6,6,6,6}},	{0,{0,0,0,6}},	{0,{0,0,0,6}},
{0,{6,6,6,6}},	{5,{0,0,0,0}},	{0,{5,5,0,0}},
{0,{5,5,5,0}},	{0,{0,0,5,0}},	{0,{5,0,0,0}},
{0,{5,5,5,5}},	{26,{0,0,0,0}},	{0,{4,4,4,4}},
{40,{0,0,0,0}},	{52,{0,0,0,0}},	{0,{2,2,2,2}},
{0,{2,2,2,2}},	{0,{2,2,2,2}},	{0,{2,2,2,2}},
{0,{2,2,2,2}},	{0,{0,0,2,0}},	{0,{2,2,2,2}},
{33,{0,0,0,0}},	{0,{1,1,1,1}},	{0,{0,0,0,1}},
{0,{0,0,0,1}},	{0,{0,0,0,1}},	{0,{1,1,1,1}},
{0,{1,0,0,0}},	{1,{0,0,0,0}},	};

static const attrib_rt_t idx_owl_vital_apat[55] = {
{-1,0},	{22,0},	{20,0},	{34,0},
{47,0},	{16,0},	{29,0},	{28,0},
{10,0},	{23,0},	{8,9},	{9,10},
{15,0},	{44,0},	{46,0},	{49,0},
{0,0},	{42,0},	{19,0},	{19,16},
{38,0},	{1,0},	{37,0},	{18,0},
{48,0},	{27,0},	{51,0},	{21,0},
{32,0},	{3,0},	{33,0},	{41,0},
{30,0},	{2,0},	{50,0},	{4,0},
{17,0},	{45,0},	{49,37},	{6,0},
{36,0},	{24,0},	{14,0},	{5,0},
{26,0},	{25,44},	{43,0},	{39,0},
{12,0},	{7,0},	{11,0},	{35,0},
{31,0},	{40,0},	{13,0},	};

static dfa_rt_t dfa_owl_vital_apat = {
 "owl_vital_apat",
 0,
state_owl_vital_apat,
idx_owl_vital_apat};

struct pattern_db owl_vital_apat_db = {
  -1,
  0,
  owl_vital_apat
 ,& dfa_owl_vital_apat
};
