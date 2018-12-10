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

static struct patval conn0[] = {
  {685,7},	{647,1},	{611,2},	{684,2},
  {648,0}
};

static struct patval conn1[] = {
  {649,7},	{685,7},	{647,1},	{611,2},
  {684,2},	{612,0},	{648,0},	{686,0}
};

static struct patval conn2[] = {
  {722,7},	{758,7},	{720,7},	{647,1},
  {684,2},	{646,3},	{648,3},	{683,0},
  {685,0},	{721,0}
};

static struct patval conn3[] = {
  {723,7},	{686,7},	{685,7},	{610,1},
  {684,2},	{722,3},	{611,0},	{612,0},
  {649,0},	{647,0},	{648,0}
};

static struct patval conn4[] = {
  {723,7},	{686,7},	{610,1},	{722,2},
  {684,2},	{721,3},	{685,0},	{648,0},
  {612,0},	{649,0},	{647,0},	{611,0}
};

static struct patval conn5[] = {
  {723,7},	{759,7},	{685,7},	{721,1},
  {684,2},	{758,2},	{686,0},	{722,0},
  {760,0}
};

static struct patval conn6[] = {
  {649,7},	{650,7},	{685,7},	{647,1},
  {684,2},	{611,2},	{612,0},	{686,0},
  {613,0},	{648,0},	{687,0}
};

static struct patval conn7[] = {
  {722,7},	{723,7},	{683,1},	{684,2},
  {758,2},	{720,3},	{685,0},	{759,0},
  {686,0},	{721,0},	{760,0}
};

static struct patval conn8[] = {
  {686,7},	{722,7},	{648,1},	{684,2},
  {649,2},	{685,0},	{723,0}
};

static struct patval conn9[] = {
  {686,7},	{683,1},	{647,1},	{721,1},
  {684,2},	{648,2},	{722,2},	{649,0},
  {685,0},	{723,0}
};

static struct patval conn10[] = {
  {723,7},	{685,7},	{758,1},	{759,2},
  {684,2},	{721,0},	{686,0},	{722,0},
  {760,0}
};

static struct patval conn11[] = {
  {723,7},	{722,7},	{759,7},	{685,7},
  {757,1},	{720,1},	{684,2},	{758,2},
  {795,0},	{796,0},	{686,0},	{721,0},
  {760,0},	{797,0}
};

static struct patval conn12[] = {
  {759,7},	{760,7},	{722,7},	{757,1},
  {795,2},	{684,2},	{758,0},	{685,0},
  {796,0},	{686,0},	{723,0},	{721,0},
  {797,0}
};

static struct patval conn13[] = {
  {722,7},	{720,1},	{684,2},	{758,2},
  {685,4},	{759,4},	{721,0}
};

static struct patval conn14[] = {
  {723,7},	{760,7},	{761,7},	{759,7},
  {722,7},	{757,1},	{795,2},	{684,2},
  {685,0},	{686,0},	{758,0},	{796,0},
  {797,0},	{687,0},	{724,0},	{721,0},
  {798,0}
};

static struct patval conn15[] = {
  {685,7},	{723,7},	{721,1},	{684,2},
  {760,2},	{759,2},	{649,0},	{686,0},
  {722,0},	{648,0}
};

static struct patval conn16[] = {
  {759,7},	{757,1},	{684,2},	{795,2},
  {796,4},	{685,0},	{722,0},	{721,0},
  {758,0}
};

static struct patval conn17[] = {
  {686,7},	{724,7},	{760,7},	{723,7},
  {685,7},	{759,7},	{721,1},	{720,1},
  {758,2},	{684,2},	{687,0},	{722,0},
  {761,0}
};

static struct patval conn18[] = {
  {649,7},	{685,7},	{610,1},	{611,2},
  {684,2},	{647,0},	{612,0},	{648,0},
  {686,0}
};

static struct patval conn19[] = {
  {647,7},	{610,1},	{684,2},	{611,2},
  {648,0},	{685,0}
};

static struct patval conn20[] = {
  {686,7},	{724,7},	{760,7},	{723,7},
  {685,7},	{759,7},	{720,1},	{721,1},
  {796,2},	{684,2},	{722,0},	{687,0},
  {758,0},	{761,0}
};

static struct patval conn21[] = {
  {722,7},	{723,7},	{685,7},	{759,7},
  {720,1},	{684,2},	{758,2},	{648,0},
  {721,0},	{649,0},	{686,0},	{647,0},
  {760,0}
};

static struct patval conn22[] = {
  {649,7},	{686,7},	{687,7},	{723,7},
  {721,1},	{647,1},	{683,1},	{722,2},
  {684,2},	{648,2},	{612,0},	{611,0},
  {613,0},	{650,0},	{685,0},	{724,0}
};

static struct patval conn23[] = {
  {723,7},	{685,7},	{758,1},	{760,2},
  {684,2},	{759,0},	{686,0},	{722,0},
  {721,0}
};

static struct patval conn24[] = {
  {648,7},	{646,7},	{682,1},	{684,2},
  {685,4},	{647,0},	{611,0},	{683,0},
  {610,0}
};

static struct patval conn25[] = {
  {723,7},	{721,7},	{684,2},	{759,2},
  {722,0},	{685,0},	{686,0},	{758,0},
  {760,0}
};

static struct patval conn26[] = {
  {648,1},	{686,2},	{684,2},	{722,2},
  {685,0},	{721,0},	{723,0}
};

static struct patval conn27[] = {
  {648,1},	{686,2},	{684,2},	{722,2},
  {685,0},	{721,0},	{723,0}
};

static struct patval conn28[] = {
  {649,1},	{723,2},	{687,2},	{684,2},
  {722,0},	{686,0},	{721,0},	{685,0},
  {724,0}
};

static struct patval conn29[] = {
  {649,1},	{723,2},	{687,2},	{684,2},
  {722,0},	{686,0},	{721,0},	{685,0},
  {724,0}
};

static struct patval conn30[] = {
  {685,7},	{721,7},	{759,1},	{684,2},
  {723,2},	{758,2},	{686,0},	{722,0}
};

static struct patval conn31[] = {
  {721,7},	{759,1},	{684,2},	{723,2},
  {758,2},	{722,0},	{686,0},	{685,0}
};

static struct patval conn32[] = {
  {722,7},	{686,7},	{647,1},	{684,2},
  {648,2},	{685,0}
};

static struct patval conn33[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn34[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn35[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn36[] = {
  {686,7},	{722,1},	{723,2},	{687,2},
  {684,2},	{650,3},	{724,4},	{649,0},
  {648,0},	{685,0}
};

static struct patval conn37[] = {
  {649,7},	{610,1},	{687,1},	{650,1},
  {684,2},	{611,2},	{612,2},	{685,0},
  {686,0},	{647,0},	{648,0}
};

static struct patval conn38[] = {
  {722,7},	{720,7},	{757,1},	{685,1},
  {684,2},	{758,2},	{759,4},	{683,4},
  {721,0}
};

static struct patval conn39[] = {
  {723,7},	{685,7},	{759,1},	{721,1},
  {722,2},	{648,2},	{724,2},	{684,2},
  {760,2},	{686,0}
};

static struct patval conn40[] = {
  {723,7},	{685,7},	{759,1},	{721,1},
  {722,2},	{648,2},	{724,2},	{684,2},
  {760,2},	{686,0}
};

static struct patval conn41[] = {
  {722,7},	{685,1},	{684,2},	{759,2},
  {720,3},	{757,3},	{758,0},	{721,0}
};

static struct patval conn42[] = {
  {649,7},	{647,7},	{612,1},	{611,2},
  {686,2},	{684,2},	{685,0},	{610,0},
  {648,0}
};

static struct patval conn43[] = {
  {720,7},	{685,1},	{684,2},	{758,2},
  {722,3},	{682,3},	{756,3},	{759,3},
  {719,3},	{757,0},	{683,0},	{721,0}
};

static struct patval conn44[] = {
  {685,7},	{759,7},	{647,1},	{758,2},
  {648,2},	{722,2},	{684,2},	{721,0}
};

static struct patval conn45[] = {
  {685,7},	{759,7},	{721,1},	{758,2},
  {722,2},	{684,2},	{720,0}
};

static struct patval conn46[] = {
  {685,7},	{759,7},	{721,1},	{758,2},
  {722,2},	{684,2},	{720,0}
};

static struct patval conn47[] = {
  {687,7},	{649,1},	{650,2},	{684,2},
  {686,2},	{648,3},	{685,0}
};

static struct patval conn48[] = {
  {685,7},	{721,7},	{758,2},	{684,2},
  {686,2},	{722,0}
};

static struct patval conn49[] = {
  {719,1},	{683,1},	{721,1},	{757,1},
  {684,2},	{722,2},	{758,2},	{720,0},
  {759,0}
};

static struct patval conn50[] = {
  {723,7},	{685,7},	{721,1},	{759,1},
  {722,2},	{760,2},	{684,2},	{686,0}
};

static struct patval conn51[] = {
  {683,1},	{685,1},	{684,2},	{758,4},
  {757,4},	{720,0},	{721,0},	{722,0}
};

static struct patval conn52[] = {
  {795,2},	{684,2},	{719,4},	{833,4},
  {649,4},	{834,4},	{647,4},	{756,4},
  {648,4},	{832,4},	{683,0},	{758,0},
  {721,0},	{685,0},	{722,0},	{759,0},
  {796,0},	{720,0},	{757,0},	{686,0},
  {723,0},	{760,0},	{797,0},	{794,0}
};

static struct patval conn53[] = {
  {795,2},	{684,2},	{869,4},	{870,4},
  {610,4},	{611,4},	{612,4},	{871,4},
  {721,0},	{647,0},	{832,0},	{757,0},
  {683,0},	{648,0},	{685,0},	{720,0},
  {759,0},	{796,0},	{833,0},	{794,0},
  {758,0},	{649,0},	{686,0},	{723,0},
  {760,0},	{797,0},	{834,0},	{722,0}
};

static struct patval conn54[] = {
  {684,2},	{758,2},	{721,0},	{685,0},
  {722,0},	{759,0},	{686,0},	{723,0},
  {760,0}
};

static struct patval conn55[] = {
  {758,2},	{684,2},	{650,4},	{796,4},
  {794,4},	{647,4},	{648,4},	{649,4},
  {646,4},	{795,4},	{798,4},	{797,4},
  {722,0},	{720,0},	{757,0},	{721,0},
  {686,0},	{723,0},	{760,0},	{685,0},
  {683,0},	{687,0},	{724,0},	{761,0},
  {759,0}
};

static struct patval conn56[] = {
  {758,2},	{684,2},	{798,4},	{646,4},
  {797,4},	{683,0},	{721,0},	{757,0},
  {648,0},	{720,0},	{722,0},	{759,0},
  {796,0},	{649,0},	{686,0},	{723,0},
  {760,0},	{647,0},	{650,0},	{687,0},
  {724,0},	{761,0},	{685,0}
};

static struct patval conn57[] = {
  {684,2},	{796,2},	{758,0},	{685,0},
  {722,0},	{759,0},	{721,0}
};

static struct patval conn58[] = {
  {648,2},	{684,2},	{647,0},	{685,0}
};

static struct patval conn59[] = {
  {684,2},	{721,2},	{723,2},	{686,2},
  {722,0},	{685,0}
};

static struct patval conn60[] = {
  {684,2},	{795,2},	{756,4},	{719,4},
  {646,4},	{797,4},	{833,4},	{686,4},
  {723,4},	{831,4},	{647,4},	{682,4},
  {648,4},	{760,4},	{793,4},	{832,4},
  {721,0},	{685,0},	{722,0},	{759,0},
  {796,0},	{720,0},	{757,0},	{794,0},
  {758,0},	{683,0}
};

static struct patval conn61[] = {
  {684,2},	{796,2},	{719,4},	{646,4},
  {724,4},	{761,4},	{798,4},	{794,4},
  {831,4},	{647,4},	{682,4},	{649,4},
  {686,4},	{834,4},	{832,4},	{648,4},
  {833,4},	{756,4},	{759,0},	{722,0},
  {685,0},	{721,0},	{758,0},	{723,0},
  {760,0},	{797,0},	{795,0},	{683,0},
  {720,0},	{757,0}
};

static struct patval conn62[] = {
  {684,2},	{758,2},	{719,4},	{723,4},
  {760,4},	{682,4},	{686,4},	{756,4},
  {647,0},	{720,0},	{721,0},	{794,0},
  {795,0},	{648,0},	{685,0},	{722,0},
  {759,0},	{796,0},	{757,0},	{646,0},
  {683,0}
};

static struct patval conn63[] = {
  {758,2},	{684,2},	{724,2},	{650,4},
  {798,4},	{648,4},	{797,4},	{649,4},
  {796,4},	{759,0},	{722,0},	{686,0},
  {723,0},	{760,0},	{685,0},	{647,0},
  {687,0},	{721,0},	{761,0},	{795,0}
};

static struct patval conn64[] = {
  {758,2},	{684,2},	{687,2},	{761,2},
  {797,4},	{649,4},	{796,4},	{648,4},
  {795,0},	{647,0},	{721,0},	{686,0},
  {723,0},	{760,0},	{685,0},	{650,0},
  {759,0},	{724,0},	{722,0},	{798,0}
};

static struct patval conn65[] = {
  {684,2},	{724,2},	{758,2},	{685,0},
  {722,0},	{759,0},	{686,0},	{723,0},
  {760,0},	{687,0},	{721,0},	{761,0}
};

static struct patval conn66[] = {
  {684,2},	{724,2},	{758,4},	{795,4},
  {797,4},	{761,4},	{759,4},	{796,4},
  {798,4},	{760,4},	{723,0},	{685,0},
  {687,0},	{721,0},	{722,0},	{686,0}
};

static struct patval conn67[] = {
  {684,2},	{721,2},	{686,2},	{722,0},
  {685,0},	{723,0}
};

static struct patval conn68[] = {
  {723,1},	{684,2},	{721,2},	{686,2},
  {722,0},	{685,0}
};

static struct patval conn69[] = {
  {647,1},	{686,1},	{684,2},	{649,2},
  {685,0},	{648,0}
};

static struct patval conn70[] = {
  {684,2},	{686,2},	{685,0}
};

static struct patval conn71[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn72[] = {
  {684,2},	{759,2},	{723,4},	{686,4},
  {760,4},	{722,0},	{685,0},	{758,0},
  {721,0}
};

static struct patval conn73[] = {
  {686,2},	{684,2},	{721,2},	{797,2},
  {647,4},	{795,0},	{685,0},	{722,0},
  {759,0},	{796,0},	{649,0},	{648,0},
  {723,0},	{760,0},	{758,0}
};

static struct patval conn74[] = {
  {647,1},	{685,1},	{648,2},	{684,2}
};

static struct patval conn75[] = {
  {721,1},	{684,2},	{722,2},	{685,0}
};

static struct patval conn76[] = {
  {685,1},	{721,2},	{684,2},	{722,2},
  {687,2},	{723,0},	{686,0},	{724,0}
};

static struct patval conn77[] = {
  {684,2},	{686,2},	{648,0},	{685,0},
  {722,0},	{721,0},	{723,0}
};

static struct patval conn78[] = {
  {684,2},	{759,2},	{758,0},	{685,0},
  {722,0},	{721,0}
};

static struct patval conn79[] = {
  {649,2},	{684,2},	{687,2},	{650,4},
  {648,0},	{686,0},	{647,0},	{685,0}
};

static struct patval conn80[] = {
  {684,2},	{759,2},	{758,0},	{685,0},
  {722,0},	{721,0},	{686,0},	{723,0},
  {760,0}
};

static struct patval conn81[] = {
  {684,2},	{796,2},	{685,2},	{795,2},
  {758,0},	{722,0},	{759,0},	{721,0}
};

static struct patval conn82[] = {
  {684,2},	{685,2},	{795,2},	{758,0},
  {721,0},	{722,0},	{759,0},	{796,0}
};

static struct patval conn83[] = {
  {684,2},	{685,2},	{795,2},	{758,0},
  {721,0},	{722,0},	{759,0},	{796,0}
};

static struct patval conn84[] = {
  {648,1},	{686,2},	{684,2},	{722,2},
  {685,0},	{721,0},	{723,0}
};

static struct patval conn85[] = {
  {649,1},	{723,2},	{687,2},	{684,2},
  {722,0},	{686,0},	{721,0},	{685,0},
  {724,0}
};

static struct patval conn86[] = {
  {648,2},	{684,2},	{647,3},	{685,0}
};

static struct patval conn87[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn88[] = {
  {648,2},	{684,2},	{647,0},	{685,0}
};

static struct patval conn89[] = {
  {684,2},	{686,2},	{685,0}
};

static struct patval conn90[] = {
  {647,1},	{684,2},	{648,2},	{685,0}
};

static struct patval conn91[] = {
  {647,1},	{685,1},	{648,2},	{684,2}
};

static struct patval conn92[] = {
  {684,2},	{687,2},	{686,0},	{685,0}
};

static struct patval conn93[] = {
  {685,1},	{687,2},	{684,2},	{722,4},
  {721,0},	{723,0},	{686,0},	{724,0}
};

static struct patval conn94[] = {
  {684,2},	{723,2},	{721,3},	{686,3},
  {722,0},	{685,0}
};

static struct patval conn95[] = {
  {722,1},	{723,2},	{684,2},	{686,3},
  {685,0}
};

static struct patval conn96[] = {
  {684,2},	{724,2},	{687,3},	{721,3},
  {686,0},	{723,0},	{685,0},	{722,0}
};

static struct patval conn97[] = {
  {648,2},	{684,2},	{647,0},	{685,0}
};

static struct patval conn98[] = {
  {647,1},	{684,2},	{648,2},	{687,4},
  {649,4},	{686,4},	{685,0}
};

static struct patval conn99[] = {
  {647,1},	{685,1},	{648,2},	{684,2},
  {649,4},	{686,0}
};

static struct patval conn100[] = {
  {647,1},	{684,2},	{648,2},	{686,4},
  {649,4},	{685,0}
};

static int
autohelperconn6(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, a, b, b) || !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, a, c, c);
}

static int
autohelperconn7(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, c) && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, b, a, a);
}

static int
autohelperconn9(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a) || play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, b);
}

static int
autohelperconn10(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, b);
}

static int
autohelperconn11(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 4, move, a, b, c, a, c);
}

static int
autohelperconn12(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 4, move, a, b, c, a);
}

static int
autohelperconn13(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, b, c);
}

static int
autohelperconn14(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  e = AFFINE_TRANSFORM(686, trans, move);
  f = AFFINE_TRANSFORM(723, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 1, 7, move, a, b, c, d, e, f, move, f);
}

static int
autohelperconn16(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 4, move, a, b, c, a, c);
}

static int
autohelperconn18(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, d)&& (play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, d) || play_attack_defend2_n(OTHER_COLOR(color), 1, 4, move, b, c, a, a, d));
}

static int
autohelperconn19(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperconn21(int trans, int move, int color, int action)
{
  int D;
  UNUSED(color);
  UNUSED(action);

  D = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(D)==3;
}

static int
autohelperconn22(int trans, int move, int color, int action)
{
  int D;
  UNUSED(color);
  UNUSED(action);

  D = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(D)==3;
}

static int
autohelperconn24(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend_n(OTHER_COLOR(color), 0, 1, move, a);
}

static int
autohelperconn25(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, c, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, b, c, d);
}

static int
autohelperconn26(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, a, b, move, b) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, b, a, move, a);
}

static int
autohelperconn27(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn28(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, a, b, move, b) && play_attack_defend2_n(OTHER_COLOR(color), 0, 4, move, b, a, c, move, a);
}

static int
autohelperconn29(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn30(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return countlib(a)==2 || countlib(b) == 2;
}

static int
autohelperconn31(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn34(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return ATTACK_MACRO(A) && safe_move(move, OTHER_COLOR(color));
}

static int
autohelperconn35(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return ATTACK_MACRO(A);
}

static int
autohelperconn37(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 0, 2, move, a, move, B);
}

static int
autohelperconn38(int trans, int move, int color, int action)
{
  int a, d, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 0, 2, move, a, move, B) && play_attack_defend2_n(OTHER_COLOR(color), 0, 2, move, d, move, C);
}

static int
autohelperconn39(int trans, int move, int color, int action)
{
  int a, b, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(719, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return !ATTACK_MACRO(A) && !ATTACK_MACRO(B) && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, a, b, move) && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, b, a, move);
}

static int
autohelperconn40(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn41(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 0, 2, move, a, move, B);
}

static int
autohelperconn42(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, move, b);
}

static int
autohelperconn43(int trans, int move, int color, int action)
{
  int a, b, d, e, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  F = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, d, e) && play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, e, d) && play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, b, a, a, F);
}

static int
autohelperconn44(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, A) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, b, c, c, move);
}

static int
autohelperconn45(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);

  return  !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, b, a, move, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, a, b, move, b);
}

static int
autohelperconn46(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn47(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);

  return play_connect_n(OTHER_COLOR(color), 1, 0, a, b) && !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn48(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperconn49(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(645, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, A)<WIN && !play_connect_n(OTHER_COLOR(color), 1, 3, move, NO_MOVE, b, c, d);
}

static int
autohelperconn50(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(719, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return  !ATTACK_MACRO(A) && !ATTACK_MACRO(B) && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, c, d, move) && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, d, c, move);
}

static int
autohelperconn51(int trans, int move, int color, int action)
{
  int a, b, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  return  !ATTACK_MACRO(A) && !ATTACK_MACRO(B) && somewhere(color, 0, 2, a, b);
}

static int
autohelperconn54(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);

  return !play_attack_defend_n(OTHER_COLOR(color), 0, 4, a, b, c, d, c) && !play_attack_defend_n(OTHER_COLOR(color), 0, 4, a, b, d, c, d);
}

static int
autohelperconn55(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return (whose_moyo(OPPOSITE_INFLUENCE(color), a) == color);
}

static int
autohelperconn56(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  f = AFFINE_TRANSFORM(610, trans, move);
  g = AFFINE_TRANSFORM(648, trans, move);
  h = AFFINE_TRANSFORM(611, trans, move);
  i = AFFINE_TRANSFORM(609, trans, move);
  j = AFFINE_TRANSFORM(645, trans, move);

  return !play_attack_defend_n(OTHER_COLOR(color), 1, 10, a, b, c, d, e, f, g, h, i, j, j);
}

static int
autohelperconn57(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(758, trans, move);
  f = AFFINE_TRANSFORM(796, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, c, a) && !play_attack_defend_n(OTHER_COLOR(color), 1, 2, d, e, f)&& !play_attack_defend_n(OTHER_COLOR(color), 1, 4, b, a, e, d, d);
}

static int
autohelperconn58(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !cut_possible(b, OTHER_COLOR(color));
}

static int
autohelperconn65(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(686, trans, move);
  f = AFFINE_TRANSFORM(723, trans, move);
  g = AFFINE_TRANSFORM(760, trans, move);

  return (whose_moyo(OPPOSITE_INFLUENCE(color), a) == color) && (whose_area(OPPOSITE_INFLUENCE(color), c) == color) && (whose_area(OPPOSITE_INFLUENCE(color), f) == color)&& (((whose_moyo(OPPOSITE_INFLUENCE(color), b) == color) + (whose_moyo(OPPOSITE_INFLUENCE(color), c) == color) + (whose_moyo(OPPOSITE_INFLUENCE(color), d) == color) + (whose_moyo(OPPOSITE_INFLUENCE(color), e) == color) + (whose_moyo(OPPOSITE_INFLUENCE(color), f) == color) +(whose_moyo(OPPOSITE_INFLUENCE(color), g) == color)) >= 3);
}

static int
autohelperconn66(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(724, trans, move);

  return (whose_moyo(OPPOSITE_INFLUENCE(color), a) == color) && (whose_moyo(OPPOSITE_INFLUENCE(color), b) == color) && countlib(c)>=4 && countlib(d)>=4;
}

static int
autohelperconn67(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, a, c);
}

static int
autohelperconn68(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  C = AFFINE_TRANSFORM(723, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 2, a, b, a, C);
}

static int
autohelperconn69(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  C = AFFINE_TRANSFORM(649, trans, move);
  D = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 2, a, b, C, D) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 2, b, a, C, D);
}

static int
autohelperconn70(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return !safe_move(A, OTHER_COLOR(color)) && !is_ko_point(A) && !cut_possible(A, OTHER_COLOR(color));
}

static int
autohelperconn71(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(571, trans, move);
  d = AFFINE_TRANSFORM(535, trans, move);
  A = AFFINE_TRANSFORM(572, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return  (((somewhere(OTHER_COLOR(color), 0, 1, c) || somewhere(color, 0, 1, c) || !cut_possible(c, OTHER_COLOR(color)))    && (somewhere(OTHER_COLOR(color), 0, 1, d) || somewhere(color, 0, 1, c) || !cut_possible(d, OTHER_COLOR(color)))) && ATTACK_MACRO(A)) || (!is_ko_point(B) && !cut_possible(B, OTHER_COLOR(color)) && !safe_move(B, OTHER_COLOR(color)));
}

static int
autohelperconn72(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, a, c) == WIN && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, a, d, b, d) == WIN;
}

static int
autohelperconn73(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(686, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);
  f = AFFINE_TRANSFORM(611, trans, move);
  g = AFFINE_TRANSFORM(612, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 7, a, b, c, d, e, f, g, a, g);
}

static int
autohelperconn74(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  return ATTACK_MACRO(A) && ATTACK_MACRO(B) && !play_attack_defend2_n(color, 0, 0, A, B);
}

static int
autohelperconn75(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend2_n(OTHER_COLOR(color), 1, 1, a, a, B) == WIN;
}

static int
autohelperconn76(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(724, trans, move);
  D = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, a, c) && !play_attack_defend_n(OTHER_COLOR(color), 0, 2, b, a, D);
}

static int
autohelperconn77(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(684, trans, move);
  e = AFFINE_TRANSFORM(686, trans, move);
  f = AFFINE_TRANSFORM(649, trans, move);
  g = AFFINE_TRANSFORM(647, trans, move);

  return accuratelib(c, color, MAX_LIBERTIES, NULL)>1 && (play_attack_defend_n(OTHER_COLOR(color), 1, 5, a, b, c, d, e, e) || play_attack_defend_n(OTHER_COLOR(color), 1, 5, a, b, c, e, d, d))&& !play_attack_defend_n(OTHER_COLOR(color), 1, 2, a, b, f) && !play_attack_defend_n(OTHER_COLOR(color), 1, 2, a, b, g);
}

static int
autohelperconn78(int trans, int move, int color, int action)
{
  int a, b, c, d, E, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  E = AFFINE_TRANSFORM(684, trans, move);
  F = AFFINE_TRANSFORM(759, trans, move);

  return countlib(E)>2 && countlib(F)>2&& play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, a, c)==WIN&& play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, a, d, b, d)==WIN;
}

static int
autohelperconn79(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return (play_attack_defend_n(OTHER_COLOR(color), 1, 3, a, b, c, a) || play_attack_defend_n(OTHER_COLOR(color), 1, 3, a, b, c, c))&& (play_attack_defend_n(OTHER_COLOR(color), 1, 3, b, a, d, b) || play_attack_defend_n(OTHER_COLOR(color), 1, 3, b, a, d, d))&& !cut_possible(c, OTHER_COLOR(color));
}

static int
autohelperconn80(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(723, trans, move);
  f = AFFINE_TRANSFORM(759, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 3, a, b, c, a, c) == WIN&& (play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, a, d, b, d) == WIN || !play_break_through_n(OTHER_COLOR(color), 4, b, d, a, e, d, e, f));
}

static int
autohelperconn81(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 4, a, b, c, d, a, c) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 4, b, a, d, c, b, d);
}

static int
autohelperconn82(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(796, trans, move);

  return play_attack_defend2_n(OTHER_COLOR(color), 1, 5, a, b, c, d, e, c, e) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 4, a, b, d, c, a, d)&& play_attack_defend_n(OTHER_COLOR(color), 1, 3, b, a, c, c);
}

static int
autohelperconn83(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);
  e = AFFINE_TRANSFORM(796, trans, move);
  f = AFFINE_TRANSFORM(795, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 4, a, b, c, d, a, c) && play_attack_defend2_n(OTHER_COLOR(color), 1, 5, a, b, d, c, e, d, e)&& (!play_attack_defend_n(OTHER_COLOR(color), 0, 4, d, c, b, a, d)    || (play_attack_defend_n(OTHER_COLOR(color), 1, 5, d, c, b, a, e, d) && play_attack_defend_n(OTHER_COLOR(color), 1, 5, d, c, b, a, e, b)        && play_attack_defend_n(OTHER_COLOR(color), 1, 5, a, c, b, a, e, e)))&& play_attack_defend2_n(OTHER_COLOR(color), 0, 3, d, c, e, c, f);
}

static int
autohelperconn84(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return cut_possible(a, OTHER_COLOR(color));
  amalgamate_most_valuable_helper(b, c, d);;

  return 0;
}

static int
autohelperconn85(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(684, trans, move);
  e = AFFINE_TRANSFORM(650, trans, move);
  f = AFFINE_TRANSFORM(686, trans, move);
  g = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return cut_possible(a, OTHER_COLOR(color));
  if (!play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, c, d, b, d) || !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, c, b, a, c, a))  join_dragons(e, f);else  amalgamate_most_valuable_helper(e, f, g);;

  return 0;
}

static int
autohelperconn86(int trans, int move, int color, int action)
{
  int c;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(648, trans, move);

  return is_suicide(c, OTHER_COLOR(color));
}

static int
autohelperconn87(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return countlib(a)>1 && countlib(b)>1 && !cut_possible(c, OTHER_COLOR(color)) && accuratelib(c, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==1 && play_attack_defend_n(OTHER_COLOR(color), 1, 1, c, c)==WIN;
}

static int
autohelperconn88(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return countlib(a)>1 && countlib(b)>1 && !cut_possible(c, OTHER_COLOR(color)) && !cut_possible(d, OTHER_COLOR(color))&& accuratelib(c, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==1 && play_attack_defend_n(OTHER_COLOR(color), 1, 1, c, c);
}

static int
autohelperconn89(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, b, c);
}

static int
autohelperconn90(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, b, c);
}

static int
autohelperconn91(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(611, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return (ATTACK_MACRO(A) || ATTACK_MACRO(B)) && !play_connect_n(color, 0, 0, c, d);
}

static int
autohelperconn92(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(687, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !cut_possible(b, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, c, d);
}

static int
autohelperconn93(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(687, trans, move);
  E = AFFINE_TRANSFORM(685, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !cut_possible(b, OTHER_COLOR(color)) && countlib(E)<=2 && !play_connect_n(color, 0, 0, c, d);
}

static int
autohelperconn94(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !cut_possible(b, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, c, d);
}

static int
autohelperconn95(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, b, c);
}

static int
autohelperconn96(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);
  e = AFFINE_TRANSFORM(684, trans, move);
  f = AFFINE_TRANSFORM(724, trans, move);

  return !cut_possible(a, OTHER_COLOR(color)) && !cut_possible(b, OTHER_COLOR(color)) && !cut_possible(c, OTHER_COLOR(color)) && !cut_possible(d, OTHER_COLOR(color)) && !play_connect_n(color, 0, 0, e, f);
}

static int
autohelperconn97(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return ATTACK_MACRO(a) && ATTACK_MACRO(b) && !cut_possible(c, OTHER_COLOR(color)) && !cut_possible(d, OTHER_COLOR(color));
}

static int
autohelperconn98(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  not_lunch_helper(a, b);;

  return 0;
}

static int
autohelperconn99(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);

  if (!action)
    return !ATTACK_MACRO(c) && !safe_move(d, OTHER_COLOR(color));
  not_lunch_helper(a, b);;

  return 0;
}

static int
autohelperconn100(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  not_lunch_helper(a, b);;

  return 0;
}

static struct pattern conn[] = {
  {conn0,5,8, "EB1",0,-2,1,0,1,2,0x2,648,
    { 0x00f0f000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0x003c3f00},
    { 0x00900000, 0x20100000, 0x01180000, 0x00102004, 0x00102040, 0x00900000, 0x20100000, 0x00180100}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn1,8,8, "EB2",0,-2,2,0,2,2,0x2,648,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0x003c3f3f},
    { 0x00900000, 0x20100000, 0x01180000, 0x00102004, 0x00102040, 0x00900000, 0x20100000, 0x00180100}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn2,10,8, "EB3",-1,-1,1,2,2,3,0x2,721,
    { 0x7cff7c00, 0x74fcfc30, 0xf4fcf400, 0xfcfc7400, 0xfcfc7400, 0x7cff7c00, 0x74fcfc30, 0xf4fcf400},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn3,11,8, "EB4",0,-2,2,1,2,3,0x2,648,
    { 0x00f0f4fc, 0xf0f04000, 0x7f3f0000, 0x073f3f3f, 0x40f0f0f0, 0xf4f00000, 0x3f3f0700, 0x003f7fff},
    { 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100020, 0x00100000, 0x00100000, 0x00120000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn4,12,8, "EB4a",0,-2,2,1,2,3,0x2,648,
    { 0x00f4fcfc, 0xf0f0d000, 0xff7f0000, 0x1f3f3f3f, 0xd0f0f0f0, 0xfcf40000, 0x3f3f1f00, 0x007fffff},
    { 0x00100400, 0x00104000, 0x40120000, 0x04100020, 0x40100020, 0x04100000, 0x00100400, 0x00124000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn5,9,4, "EB5",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00190000, 0x00102010, 0x00900000, 0x20100000, 0x20100000, 0x00190000, 0x00102010, 0x00900000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn6,11,8, "EB6",0,-2,3,0,3,2,0x2,648,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0x003c3f3f},
    { 0x00900000, 0x20100000, 0x01180000, 0x00102004, 0x00102040, 0x00900000, 0x20100000, 0x00180100}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn6,0,1.600000},
  {conn7,11,8, "EB7",-1,0,2,2,3,2,0x2,721,
    { 0x343f3f3f, 0x00fcf4f0, 0xf0f07000, 0x7fff0000, 0xf4fc0000, 0x3f3f3400, 0x00ff7f3f, 0x70f0f0f0},
    { 0x20110000, 0x00180010, 0x00102000, 0x00900000, 0x00180000, 0x00112000, 0x00900010, 0x20100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn7,0,1.600000},
  {conn8,7,8, "EB8",0,-1,2,1,2,2,0x2,685,
    { 0x0030fcfc, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0x0030fcfc},
    { 0x00108040, 0x80100000, 0x08100000, 0x00100900, 0x00108000, 0x80100000, 0x09100000, 0x00100804}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn9,10,8, "EB9",-1,-1,2,1,3,2,0x2,685,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x20984400, 0x60186000, 0x44982000, 0x24902400, 0x60186000, 0x44982000, 0x24902400, 0x20984400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn9,0,1.600000},
  {conn10,9,8, "EB10",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120100, 0x00100060, 0x00100000, 0x00100000, 0x00100000, 0x01120000, 0x00100024, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn10,0,1.000000},
  {conn11,14,8, "EB11",-1,0,2,3,3,3,0x2,721,
    { 0x0f3f3f3f, 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0f00, 0x003fffff, 0xc0f0f0f0},
    { 0x0a110000, 0x00100818, 0x00108000, 0x80100000, 0x08100000, 0x00110a00, 0x00108090, 0x80100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn11,0,3.000000},
  {conn12,13,8, "EB12",-1,0,2,3,3,3,0x2,758,
    { 0x033f3f3f, 0x00f0f0fc, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0300, 0x003f3fff, 0x00f0f0f0},
    { 0x02100000, 0x00100008, 0x00100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn12,0,1.000000},
  {conn13,7,4, "EB13",-1,0,1,2,2,2,0x2,721,
    { 0x0c3f2e00, 0x00b0fcb0, 0xe0f0c000, 0xfc380000, 0xfcb00000, 0x2e3f0c00, 0x0038fc38, 0xc0f0e000},
    { 0x08110000, 0x00100810, 0x00108000, 0x80100000, 0x08100000, 0x00110800, 0x00108010, 0x80100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn13,0,3.000000},
  {conn14,17,8, "EB14",-1,0,3,3,4,3,0x2,758,
    { 0x033f3f3f, 0x00f0f0fc, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0300, 0x003f3fff, 0x00f0f0f0},
    { 0x02100000, 0x00100008, 0x00100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn14,0,3.000000},
  {conn15,10,8, "EB15",0,-1,2,2,2,3,0x2,722,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00180101, 0x00102040, 0x00900000, 0x20100000, 0x20100000, 0x01180000, 0x00102005, 0x00900000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn16,9,8, "EB16",-1,0,1,3,2,3,0x2,758,
    { 0x033f3f00, 0x00f0f0fc, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0300, 0x003c3cfc, 0x00f0f000},
    { 0x02100000, 0x00100008, 0x00100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn16,0,3.000000},
  {conn17,13,8, "EB17",-1,0,3,2,4,2,0x2,722,
    { 0x0c3f3f3f, 0x00f0fcf0, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0c00, 0x003fff3f, 0xc0f0f0f0},
    { 0x08190000, 0x00102810, 0x00908000, 0xa0100000, 0x28100000, 0x00190800, 0x0010a010, 0x80900000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn18,9,8, "EB18",0,-2,2,0,2,2,0x2,648,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f},
    { 0x00100000, 0x00100000, 0x01120000, 0x00100024, 0x00100060, 0x00100000, 0x00100000, 0x00120100}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn18,0,4.680000},
  {conn19,6,8, "EB19",0,-2,1,0,1,2,0x2,648,
    { 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00},
    { 0x00100000, 0x00100000, 0x01120000, 0x00100024, 0x00100060, 0x00100000, 0x00100000, 0x00120100}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn19,0,3.000000},
  {conn20,14,8, "EB20",-1,0,3,3,4,3,0x2,722,
    { 0x0c3f3f3f, 0x00f0fcf0, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0c00, 0x003fff3f, 0xc0f0f0f0},
    { 0x08180000, 0x00102800, 0x00908000, 0xa0100000, 0x28100000, 0x00180800, 0x0010a000, 0x80900000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn21,13,8, "EB21",-1,-1,2,2,3,3,0x2,721,
    { 0x0cffffff, 0xf0f0fcf0, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xffff0c00, 0x3f3fff3f, 0xc0fcfcfc},
    { 0x08110000, 0x00100810, 0x00108000, 0x80100000, 0x08100000, 0x00110800, 0x00108010, 0x80100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn21,0,0.010000},
  {conn22,16,8, "EB22",-1,-2,3,1,4,3,0x2,685,
    { 0x30fcfcfc, 0xf0fcf000, 0xfffc3000, 0x3fff3f0f, 0xf0fcf0c0, 0xfcfc3000, 0x3fff3f00, 0x30fcffff},
    { 0x20984400, 0x60186000, 0x44982000, 0x24902400, 0x60186000, 0x44982000, 0x24902400, 0x20984400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn22,0,0.010000},
  {conn23,9,8, "EB23",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120001, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100021, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn24,9,8, "EB24",-2,-2,1,0,3,2,0x2,647,
    { 0xf0f0e000, 0xfcbf0000, 0x2f3f3c30, 0x00f8fc3c, 0x00bffcf0, 0xe0f0f030, 0xfcf80000, 0x3c3f2f00},
    { 0x00100000, 0x00120000, 0x00100020, 0x00100000, 0x00120000, 0x00100020, 0x00100000, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn24,0,1.000000},
  {conn25,9,8, "EB25",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100100, 0x00100040, 0x00100000, 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn25,0,4.800000},
  {conn26,7,8, "CB1",0,-1,2,1,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108410, 0x80104000, 0x48100000, 0x04110800, 0x40108000, 0x84100000, 0x08110400, 0x00104810}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn26,0,4.800000},
  {conn27,7,8, "CB1b",0,-1,2,1,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108410, 0x80104000, 0x48100000, 0x04110800, 0x40108000, 0x84100000, 0x08110400, 0x00104810}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn27,0,10.000000},
  {conn28,9,8, "CB2",0,-1,3,1,3,2,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00100084, 0x00100000, 0x00100000, 0x01100200, 0x00100000, 0x00100000, 0x02100100, 0x00100048}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn28,0,4.800000},
  {conn29,9,8, "CB2b",0,-1,3,1,3,2,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00100084, 0x00100000, 0x00100000, 0x01100200, 0x00100000, 0x00100000, 0x02100100, 0x00100048}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn29,0,10.000000},
  {conn30,8,8, "CB3",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3c, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3c, 0x00f0f0f0},
    { 0x00110204, 0x00100090, 0x00100000, 0x01100000, 0x00100000, 0x02110000, 0x00100118, 0x00100040}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn30,0,0.016000},
  {conn31,8,8, "CB3b",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3c, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3c, 0x00f0f0f0},
    { 0x00110204, 0x00100090, 0x00100000, 0x01100000, 0x00100000, 0x02110000, 0x00100118, 0x00100040}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn31,0,10.000000},
  {conn32,6,4, "CB4",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fc30, 0xf0f0c000, 0xfc3c0000, 0x0c3f3c00, 0xc0f0f000, 0xfcf00000, 0x3c3f0c00, 0x003cfc30},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,basic_cut_helper
,NULL,0,0.000000},
  {conn33,4,4, "CB5",0,-1,1,0,1,1,0x0,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,basic_cut_helper
,NULL,0,0.000000},
  {conn34,4,4, "CB6",0,-1,1,0,1,1,0x0,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,ugly_cutstone_helper
,autohelperconn34,0,1.600000},
  {conn35,4,4, "CB7",0,-1,1,0,1,1,0x0,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,cutstone2_helper
,autohelperconn35,0,1.000000},
  {conn36,10,8, "CB8",0,-1,3,1,3,2,0x0,685,
    { 0x0030fcfc, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0x0030fcfc},
    { 0x00100804, 0x00108000, 0x80100000, 0x09100000, 0x80100000, 0x08100000, 0x00100900, 0x00108040}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn37,11,8, "CB9",0,-2,3,0,3,2,0x0,648,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f},
    { 0x00100000, 0x00100000, 0x01120000, 0x00100025, 0x00100060, 0x00100000, 0x00100000, 0x00120101}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn37,0,3.000000},
  {conn38,9,8, "CB10",-1,0,1,2,2,2,0x0,721,
    { 0x2f3f3e00, 0x00f8fcbc, 0xf0f0e000, 0xfcbc0000, 0xfcf80000, 0x3e3f2f00, 0x00bcfcf8, 0xe0f0f000},
    { 0x02112000, 0x00900018, 0x20100000, 0x00180000, 0x00900000, 0x20110200, 0x00180090, 0x00102000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn38,0,4.800000},
  {conn39,10,8, "CB11",0,-1,3,2,3,3,0x0,686,
    { 0x003cff3f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0f, 0x00f0fcf0},
    { 0x00184601, 0x40106080, 0x44900000, 0x24100400, 0x60104000, 0x46180000, 0x04102409, 0x00904400}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn39,0,2.176000},
  {conn40,10,8, "CB11b",0,-1,3,2,3,3,0x0,686,
    { 0x003cff3f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0f, 0x00f0fcf0},
    { 0x00184601, 0x40106080, 0x44900000, 0x24100400, 0x60104000, 0x46180000, 0x04102409, 0x00904400}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn40,0,10.000000},
  {conn41,8,8, "CB12",-1,0,1,2,2,2,0x0,721,
    { 0x053f3f00, 0x00f0f4f4, 0xf0f04000, 0x7c3c0000, 0xf4f00000, 0x3f3f0500, 0x003c7c7c, 0x40f0f000},
    { 0x00102100, 0x00900040, 0x20100000, 0x00180000, 0x00900000, 0x21100000, 0x00180004, 0x00102000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn41,0,3.000000},
  {conn42,9,8, "CB12a",0,-2,2,0,2,2,0x0,648,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f},
    { 0x00100010, 0x00100000, 0x01100000, 0x00110006, 0x00100040, 0x00100000, 0x00110000, 0x00100112}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn42,0,3.000000},
  {conn43,12,8, "CB13",-2,0,1,2,3,2,0x0,721,
    { 0x3f3f3500, 0x00fd7d7d, 0x70f0f050, 0xf4fc0000, 0x7dfd0000, 0x353f3f15, 0x00fcf4f4, 0xf0f07000},
    { 0x00112000, 0x00900010, 0x20100000, 0x00180000, 0x00900000, 0x20110000, 0x00180010, 0x00102000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn43,0,5.880000},
  {conn44,8,8, "CB14",0,-1,1,2,1,3,0x0,721,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00914400, 0x60104010, 0x44180000, 0x04102400, 0x40106000, 0x44910000, 0x24100410, 0x00184400}
   , 0x400204,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn44,0,2.800000},
  {conn45,7,8, "CB15",-1,0,1,2,2,2,0x0,720,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x00190400, 0x00106010, 0x40900000, 0x24100000, 0x60100000, 0x04190000, 0x00102410, 0x00904000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn45,0,4.800000},
  {conn46,7,8, "CB15b",-1,0,1,2,2,2,0x0,720,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x00190400, 0x00106010, 0x40900000, 0x24100000, 0x60100000, 0x04190000, 0x00102410, 0x00904000}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn46,0,10.000000},
  {conn47,7,8, "CB16",0,-1,3,0,3,1,0x0,685,
    { 0x003070f0, 0x40f00000, 0x34300000, 0x003f0700, 0x00f04000, 0x70300000, 0x073f0000, 0x0030343c},
    { 0x00100090, 0x00100000, 0x00100000, 0x00110200, 0x00100000, 0x00100000, 0x02110000, 0x00100018}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn47,0,16.000000},
  {conn48,6,4, "CB17",0,0,2,2,2,2,0x0,722,
    { 0x003f3c30, 0x00f0f030, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3f0000, 0x003f3c30, 0x00f0f030},
    { 0x00110010, 0x00100010, 0x00100000, 0x00110000, 0x00100000, 0x00110000, 0x00110010, 0x00100010}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn48,0,10.000000},
  {conn49,9,8, "CB18",-2,0,1,2,3,2,0x0,759,
    { 0x3f3f0f00, 0x003cfffc, 0xc0f0f0c0, 0xfcf00000, 0xff3c0000, 0x0f3f3f0c, 0x00f0fcfc, 0xf0f0c000},
    { 0x22190400, 0x00186218, 0x40902080, 0x24900000, 0x62180000, 0x04192208, 0x00902490, 0x20904000}
   , 0x80000200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn49,0,7.000000},
  {conn50,8,8, "CB19",0,0,2,2,2,2,0x0,686,
    { 0x003c3f3f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0f0},
    { 0x00180601, 0x00106080, 0x40900000, 0x24100000, 0x60100000, 0x06180000, 0x00102409, 0x00904000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn50,0,2.176000},
  {conn51,8,8, "CB20",-1,0,1,2,2,2,0x0,721,
    { 0x3e3e3c00, 0x00fcfc28, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3e3e00, 0x00fcfca0, 0xf0f0f000},
    { 0x20102000, 0x00980000, 0x20102000, 0x00980000, 0x00980000, 0x20102000, 0x00980000, 0x20102000}
   , 0x400200,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn51,0,1.603600},
  {conn52,24,4, "EC1",-2,-1,2,4,4,5,0x2,723,
    { 0x3fbfbfbf, 0xa0fcfefe, 0xf8f8f080, 0xffff2a00, 0xfefca000, 0xbfbf3f0a, 0x2affffff, 0xf0f8f8f8},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn53,28,4, "EC1b",-1,-2,2,5,3,7,0x2,759,
    { 0x3fffffff, 0xf0fcfcfc, 0xfefef000, 0xffff3f2a, 0xfcfcf0a0, 0xffff3f00, 0x3fffffff, 0xf0fefefe},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn54,9,4, "EC2",0,0,2,2,2,2,0x2,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn54,0,1.600000},
  {conn55,25,8, "EC3a",-1,-1,3,3,4,4,0x2,722,
    { 0xbfbfbfbf, 0xa8fcfcfc, 0xf8f8f800, 0xffffaa00, 0xfcfca800, 0xbfbfbf00, 0xaaffffff, 0xf8f8f8f8},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn55,0,0.010000},
  {conn56,23,8, "EC3b",-1,-1,3,3,4,4,0x2,722,
    { 0xbfffffff, 0xf8fcfcfc, 0xfcfcf800, 0xffffbf00, 0xfcfcf800, 0xffffbf00, 0xbfffffff, 0xf8fcfcfc},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn56,0,1.000000},
  {conn57,7,8, "EC4",0,0,1,3,1,3,0x2,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn57,0,3.960000},
  {conn58,4,2, "CC101",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn58,0,0.016000},
  {conn59,6,2, "CC102",0,0,2,1,2,1,0x0,684,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00140014, 0x00101000, 0x00500000, 0x11110000, 0x10100000, 0x00140000, 0x00111100, 0x00500050}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn60,26,2, "CC103",-2,-1,2,4,4,5,0x0,723,
    { 0xbfbfbf2a, 0xa8fefefe, 0xf8f8f8a0, 0xfefea800, 0xfefea800, 0xbfbfbf2a, 0xa8fefefe, 0xf8f8f8a0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn61,30,8, "CC104",-2,-1,3,4,5,5,0x0,723,
    { 0xbfbfbfaf, 0xa8fefefe, 0xf8f8f8a0, 0xfffeaa00, 0xfefea800, 0xbfbfbf2a, 0xaafeffff, 0xf8f8f8e8},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn62,21,2, "CC105",-2,-1,2,3,4,4,0x0,723,
    { 0xffffff2a, 0xfcfefefe, 0xfcfcfca0, 0xfefefc00, 0xfefefc00, 0xffffff2a, 0xfcfefefe, 0xfcfcfca0},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn63,20,8, "CC106",0,-1,3,3,3,4,0x0,721,
    { 0x00ffbfbf, 0xb0f0f0f0, 0xf8fc0000, 0x3f3f3a00, 0xf0f0b000, 0xbfff0000, 0x3a3f3f3f, 0x00fcf8f8},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn64,20,8, "CC107",0,-1,3,3,3,4,0x0,721,
    { 0x00ffbfbf, 0xb0f0f0f0, 0xf8fc0000, 0x3f3f3a00, 0xf0f0b000, 0xbfff0000, 0x3a3f3f3f, 0x00fcf8f8},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {conn65,12,4, "CC108",0,0,3,2,3,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn65,0,0.024748},
  {conn66,16,8, "CC109",0,0,3,3,3,3,0x0,684,
    { 0x003e3e3e, 0x00f0f0a0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3e3e0000, 0x003f3f2a, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn66,0,0.021760},
  {conn67,6,8, "CC201",0,0,2,1,2,1,0x0,684,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00140010, 0x00101000, 0x00500000, 0x10110000, 0x10100000, 0x00140000, 0x00111000, 0x00500010}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn67,0,3.000000},
  {conn68,6,8, "CC202",0,0,2,1,2,1,0x0,684,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00140018, 0x00101000, 0x00500000, 0x12110000, 0x10100000, 0x00140000, 0x00111200, 0x00500090}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn68,0,3.000000},
  {conn69,6,8, "CC203",0,-1,2,0,2,1,0x0,721,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00900060, 0x20100000, 0x00180000, 0x00122100, 0x00102000, 0x00900000, 0x21120000, 0x00180024}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn69,0,4.800000},
  {conn70,3,2, "CC204",0,0,2,0,2,0,0x0,684,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn70,0,1.009600},
  {conn71,4,4, "CC205",-1,-2,1,0,2,2,0x0,759,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn71,0,0.081015},
  {conn72,9,8, "CC206",0,0,2,2,2,2,0x0,684,
    { 0x003f3f2a, 0x00f0f0f0, 0xf0f00000, 0x3e3e0000, 0xf0f00000, 0x3f3f0000, 0x003e3e3e, 0x00f0f0a0},
    { 0x00100100, 0x00100040, 0x00100000, 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn72,0,4.800000},
  {conn73,15,8, "CC206a",0,-1,2,3,2,4,0x0,721,
    { 0x00bfffff, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc},
    { 0x00140010, 0x00101000, 0x00500000, 0x10110000, 0x10100000, 0x00140000, 0x00111000, 0x00500010}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn73,0,3.000000},
  {conn74,4,2, "CC207",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00906000, 0x60900000, 0x24180000, 0x00182400, 0x00906000, 0x60900000, 0x24180000, 0x00182400}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn74,0,2.680000},
  {conn75,4,8, "CC208",0,0,1,1,1,1,0x0,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180400, 0x00106000, 0x40900000, 0x24100000, 0x60100000, 0x04180000, 0x00102400, 0x00904000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn75,0,3.000000},
  {conn76,8,8, "CC209",0,0,3,1,3,1,0x0,684,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00142400, 0x00905000, 0x60500000, 0x14180000, 0x50900000, 0x24140000, 0x00181400, 0x00506000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn76,0,3.600000},
  {conn77,7,4, "CC302",0,-1,2,1,2,2,0x0,721,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn77,0,1.355600},
  {conn78,6,8, "CC311",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00100100, 0x00100040, 0x00100000, 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn78,0,1.744000},
  {conn79,8,8, "CC312",0,-1,3,0,3,1,0x0,721,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00100040, 0x00100000, 0x00100000, 0x00100100, 0x00100000, 0x00100000, 0x01100000, 0x00100004}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn79,0,2.177296},
  {conn80,9,8, "CC313",0,0,2,2,2,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100100, 0x00100040, 0x00100000, 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn80,0,6.600000},
  {conn81,8,2, "CC321",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn81,0,4.800000},
  {conn82,8,8, "CC322",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn82,0,5.160000},
  {conn83,8,8, "CC323",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x400080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn83,0,5.723329},
  {conn84,7,8, "CC401",0,-1,2,1,2,2,0x0,721,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108410, 0x80104000, 0x48100000, 0x04110800, 0x40108000, 0x84100000, 0x08110400, 0x00104810}
   , 0x0,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperconn84,0,0.010000},
  {conn85,9,8, "CC402",0,-1,3,1,3,2,0x0,721,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00100084, 0x00100000, 0x00100000, 0x01100200, 0x00100000, 0x00100000, 0x02100100, 0x00100048}
   , 0x0,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperconn85,0,0.010000},
  {conn86,4,4, "CC501",0,-1,1,0,1,1,0x0,721,
    { 0x0070f000, 0xd0f00000, 0x3c340000, 0x003c1c00, 0x00f0d000, 0xf0700000, 0x1c3c0000, 0x00343c00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x80000090,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn86,0,0.050000},
  {conn87,4,4, "CC502",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x80000090,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn87,0,0.160000},
  {conn88,4,4, "CC502b",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x80000090,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn88,0,0.106000},
  {conn89,3,2, "CC503",0,0,2,0,2,0,0x0,684,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn89,0,6.010000},
  {conn90,4,4, "CC504",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn90,0,6.010000},
  {conn91,4,2, "CC505",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00906000, 0x60900000, 0x24180000, 0x00182400, 0x00906000, 0x60900000, 0x24180000, 0x00182400}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn91,0,5.200000},
  {conn92,4,2, "CC506",0,0,3,0,3,0,0x0,684,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn92,0,3.616000},
  {conn93,8,8, "CC506b",0,0,3,1,3,1,0x0,684,
    { 0x003c383c, 0x00f0b000, 0xb0f00000, 0x3b3f0000, 0xb0f00000, 0x383c0000, 0x003f3b00, 0x00f0b0f0},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn93,0,2.179600},
  {conn94,6,5, "CC507",0,0,2,1,2,1,0x0,684,
    { 0x00343c1c, 0x00f0d000, 0xf0700000, 0x1f3d0000, 0xd0f00000, 0x3c340000, 0x003d1f00, 0x0070f0d0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn94,0,3.616000},
  {conn95,5,8, "CC508",0,0,2,1,2,1,0x0,684,
    { 0x00303c1c, 0x00f0c000, 0xf0300000, 0x0f3d0000, 0xc0f00000, 0x3c300000, 0x003d0f00, 0x0030f0d0},
    { 0x00100804, 0x00108000, 0x80100000, 0x09100000, 0x80100000, 0x08100000, 0x00100900, 0x00108040}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn95,0,6.010000},
  {conn96,8,5, "CC509",0,0,3,1,3,1,0x0,684,
    { 0x00343c3c, 0x00f0d000, 0xf0700000, 0x1f3f0000, 0xd0f00000, 0x3c340000, 0x003f1f00, 0x0070f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000080,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn96,0,1.317760},
  {conn97,4,4, "CC511",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x80000090,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperconn97,0,1.605760},
  {conn98,7,8, "Lunch1",0,-1,3,0,3,1,0x4,721,
    { 0x00f0f0a0, 0xf0f00000, 0x3c3c0000, 0x003e3e00, 0x00f0f000, 0xf0f00000, 0x3e3e0000, 0x003c3c28},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x10010,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperconn98,0,0.000000},
  {conn99,6,8, "Lunch2",0,-1,2,0,2,1,0x4,721,
    { 0x00f0f0b0, 0xf0f00000, 0x3c3c0000, 0x003f3e00, 0x00f0f000, 0xf0f00000, 0x3e3f0000, 0x003c3c38},
    { 0x00906000, 0x60900000, 0x24180000, 0x00182400, 0x00906000, 0x60900000, 0x24180000, 0x00182400}
   , 0x10010,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperconn99,0,1.600000},
  {conn100,6,8, "Lunch3",0,-1,2,0,2,1,0x6,721,
    { 0x00f0f0a0, 0xf0f00000, 0x3c3c0000, 0x003e3e00, 0x00f0f000, 0xf0f00000, 0x3e3e0000, 0x003c3c28},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x10010,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperconn100,0,0.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0,NULL,NULL,0,0.0}
};

struct pattern_db conn_db = {
  -1,
  0,
  conn
 , NULL
};
