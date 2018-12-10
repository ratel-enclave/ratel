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

static struct patval barrierspat0[] = {
  {721,5},	{684,2},	{758,2}
};

static struct patval barrierspat1[] = {
  {721,5},	{720,5},	{758,2},	{684,2},
  {683,4},	{757,4}
};

static struct patval barrierspat2[] = {
  {721,5},	{758,1},	{684,1},	{757,3},
  {720,3},	{683,3},	{685,3},	{722,3},
  {759,3}
};

static struct patval barrierspat3[] = {
  {721,5},	{720,5},	{758,1},	{684,1},
  {683,0},	{757,0}
};

static struct patval barrierspat4[] = {
  {647,5},	{684,2}
};

static struct patval barrierspat5[] = {
  {685,5},	{684,1},	{721,3},	{648,3},
  {647,3},	{722,3}
};

static struct patval barrierspat6[] = {
  {647,5},	{648,5},	{684,1},	{685,0}
};

static struct patval barrierspat7[] = {
  {685,5},	{721,1},	{684,2},	{722,0}
};

static struct patval barrierspat8[] = {
  {722,5},	{685,5},	{721,1},	{684,1}
};

static struct patval barrierspat9[] = {
  {647,5},	{685,5},	{648,2},	{684,2}
};

static struct patval barrierspat10[] = {
  {647,5},	{685,5},	{648,1},	{684,1}
};

static struct patval barrierspat11[] = {
  {722,5},	{684,1},	{685,2},	{721,2}
};

static struct patval barrierspat12[] = {
  {722,5},	{721,1},	{685,1},	{684,2}
};

static struct patval barrierspat13[] = {
  {722,5},	{721,5},	{759,2},	{684,2},
  {758,0}
};

static struct patval barrierspat14[] = {
  {722,5},	{721,5},	{758,1},	{685,1},
  {684,1},	{759,1}
};

static struct patval barrierspat15[] = {
  {722,5},	{721,5},	{759,1},	{685,1},
  {684,1},	{758,4}
};

static struct patval barrierspat16[] = {
  {722,5},	{721,5},	{759,1},	{684,1},
  {757,3},	{758,3},	{685,3},	{683,3},
  {720,3},	{686,3},	{723,3},	{760,3}
};

static struct patval barrierspat17[] = {
  {722,5},	{721,5},	{759,1},	{684,1},
  {685,0},	{758,0}
};

static struct patval barrierspat18[] = {
  {722,5},	{721,5},	{758,1},	{759,1},
  {684,1},	{685,0}
};

static struct patval barrierspat19[] = {
  {722,5},	{721,5},	{759,1},	{684,1},
  {685,2},	{758,0}
};

static struct patval barrierspat20[] = {
  {722,5},	{721,5},	{759,1},	{684,1},
  {685,2},	{758,2}
};

static struct patval barrierspat21[] = {
  {758,5},	{721,5},	{684,2},	{795,2},
  {796,4},	{722,0},	{759,0},	{685,0}
};

static struct patval barrierspat22[] = {
  {758,5},	{721,5},	{684,2},	{795,2},
  {685,2},	{796,4},	{759,0},	{722,0}
};

static struct patval barrierspat23[] = {
  {721,5},	{758,5},	{795,1},	{684,1},
  {757,3},	{794,3},	{720,3},	{683,3},
  {756,3},	{719,3},	{685,3},	{722,3},
  {759,3},	{796,3},	{723,3},	{760,3}
};

static struct patval barrierspat24[] = {
  {721,5},	{758,5},	{795,1},	{684,1},
  {794,3},	{796,3},	{685,3},	{683,3},
  {720,0},	{722,0},	{759,0},	{757,0}
};

static struct patval barrierspat25[] = {
  {721,5},	{758,5},	{722,5},	{759,5},
  {684,1},	{795,1},	{720,3},	{757,3},
  {794,3},	{831,3},	{647,3},	{646,3},
  {682,3},	{719,3},	{683,3},	{832,3},
  {648,3},	{685,3},	{756,3},	{793,3},
  {796,3},	{833,3},	{649,3},	{686,3},
  {723,3},	{760,3},	{797,3},	{834,3}
};

static struct patval barrierspat26[] = {
  {722,5},	{759,5},	{684,1},	{795,1},
  {685,3},	{797,3},	{760,3},	{796,3},
  {686,3},	{723,3},	{721,0},	{758,0}
};

static struct patval barrierspat27[] = {
  {759,5},	{721,5},	{684,2},	{796,2},
  {685,0},	{722,0},	{758,0},	{795,0}
};

static struct patval barrierspat28[] = {
  {759,5},	{722,5},	{686,2},	{684,2},
  {796,2},	{685,4},	{648,4},	{795,0},
  {721,0},	{758,0},	{723,0},	{760,0},
  {797,0}
};

static struct patval barrierspat29[] = {
  {721,5},	{759,5},	{796,1},	{684,1},
  {757,3},	{794,3},	{719,3},	{720,3},
  {761,3},	{795,3},	{685,3},	{797,3},
  {756,3},	{683,3},	{686,3},	{723,3},
  {760,3},	{724,3},	{722,0},	{758,0}
};

static struct patval barrierspat30[] = {
  {759,5},	{721,5},	{684,1},	{796,1},
  {685,3},	{795,3},	{758,0},	{722,0}
};

static struct patval barrierspat31[] = {
  {686,5},	{685,5},	{684,2},	{648,4},
  {721,4},	{722,4},	{649,4},	{647,4},
  {723,4}
};

static struct patval barrierspat32[] = {
  {686,5},	{685,5},	{684,1},	{648,3},
  {721,3},	{722,3},	{649,3},	{647,3},
  {723,3}
};

static struct patval barrierspat33[] = {
  {647,5},	{648,5},	{685,1},	{684,2}
};

static struct patval barrierspat34[] = {
  {685,5},	{722,1},	{721,2},	{684,2}
};

static struct patval barrierspat35[] = {
  {721,5},	{723,5},	{722,5},	{685,1},
  {684,2},	{759,4},	{758,4},	{760,4},
  {612,4},	{649,0},	{686,0},	{648,0},
  {647,0}
};

static struct patval barrierspat36[] = {
  {685,5},	{723,5},	{722,5},	{648,1},
  {684,2},	{758,4},	{759,4},	{760,4},
  {721,4},	{686,0},	{649,0}
};

static struct patval barrierspat37[] = {
  {759,5},	{760,5},	{684,1},	{722,1},
  {721,2},	{797,4},	{758,4},	{796,4},
  {795,4},	{723,0},	{686,0},	{685,0}
};

static struct patval barrierspat38[] = {
  {723,5},	{722,5},	{684,1},	{721,2},
  {760,4},	{759,4},	{758,4},	{686,0},
  {685,0}
};

static struct patval barrierspat39[] = {
  {722,5},	{723,5},	{759,1},	{684,1},
  {721,2},	{758,2},	{686,0},	{685,0}
};

static struct patval barrierspat40[] = {
  {686,5},	{723,5},	{760,5},	{722,5},
  {759,5},	{685,5},	{684,2},	{758,2},
  {648,4},	{796,4},	{649,4},	{647,4},
  {795,4},	{721,4},	{797,4}
};

static struct patval barrierspat41[] = {
  {686,5},	{723,5},	{760,5},	{722,5},
  {759,5},	{685,5},	{684,1},	{758,1},
  {648,3},	{796,3},	{649,3},	{647,3},
  {795,3},	{721,3},	{797,3}
};

static struct patval barrierspat42[] = {
  {722,5},	{760,5},	{759,5},	{721,1},
  {684,2},	{797,3},	{758,3},	{796,3},
  {795,3},	{723,0},	{686,0},	{685,0}
};

static struct patval barrierspat43[] = {
  {722,5},	{685,5},	{721,1},	{758,2},
  {684,2}
};

static struct patval barrierspat44[] = {
  {649,5},	{686,5},	{650,5},	{687,5},
  {684,2},	{611,2},	{574,4},	{724,4},
  {722,4},	{575,4},	{647,4},	{573,4},
  {610,4},	{723,4},	{576,4},	{613,0},
  {612,0},	{648,0},	{685,0}
};

static struct patval barrierspat45[] = {
  {649,5},	{686,5},	{650,5},	{687,5},
  {684,1},	{611,1},	{574,3},	{724,3},
  {722,3},	{575,3},	{647,3},	{573,3},
  {610,3},	{723,3},	{576,3},	{613,0},
  {612,0},	{648,0},	{685,0}
};

static struct patval barrierspat46[] = {
  {759,5},	{722,5},	{758,1},	{795,2},
  {684,2},	{796,2},	{685,0},	{721,0}
};

static struct patval barrierspat47[] = {
  {759,5},	{722,5},	{758,1},	{795,2},
  {684,2},	{721,0},	{685,0},	{796,0}
};

static struct patval barrierspat48[] = {
  {722,5},	{721,1},	{759,2},	{684,2},
  {685,0}
};

static struct patval barrierspat49[] = {
  {722,5},	{760,5},	{759,5},	{684,1},
  {795,2},	{685,2},	{797,4},	{648,4},
  {796,4},	{649,4},	{686,0},	{723,0},
  {721,0},	{758,0}
};

static struct patval barrierspat50[] = {
  {685,5},	{723,5},	{722,5},	{684,1},
  {648,2},	{758,2},	{760,4},	{649,0},
  {686,0},	{721,0},	{759,0}
};

static struct patval barrierspat51[] = {
  {723,5},	{760,5},	{759,5},	{722,5},
  {685,1},	{795,1},	{758,1},	{684,1},
  {686,0},	{796,0},	{721,0},	{797,0}
};

static struct patval barrierspat52[] = {
  {686,5},	{723,5},	{759,5},	{684,1},
  {648,2},	{758,2},	{760,4},	{722,0},
  {649,0},	{647,0},	{685,0},	{721,0}
};

static struct patval barrierspat53[] = {
  {686,5},	{723,5},	{687,5},	{724,5},
  {761,5},	{722,5},	{760,5},	{759,5},
  {685,5},	{758,2},	{684,2},	{795,4},
  {796,4},	{648,4},	{612,4},	{649,4},
  {610,4},	{647,4},	{832,4},	{797,4},
  {834,4},	{613,4},	{650,4},	{611,4},
  {721,4},	{833,4},	{798,4},	{835,4}
};

static struct patval barrierspat54[] = {
  {685,5},	{722,5},	{686,5},	{687,5},
  {724,5},	{761,5},	{759,5},	{760,5},
  {723,5},	{758,1},	{684,1},	{610,3},
  {795,3},	{721,3},	{611,3},	{648,3},
  {609,3},	{646,3},	{831,3},	{796,3},
  {833,3},	{612,3},	{649,3},	{683,3},
  {647,3},	{832,3},	{797,3},	{834,3},
  {613,3},	{650,3},	{720,3},	{757,3},
  {794,3},	{798,3},	{835,3}
};

static struct patval barrierspat55[] = {
  {723,5},	{722,5},	{685,5},	{760,2},
  {684,2},	{686,0},	{759,0},	{721,0}
};

static struct patval barrierspat56[] = {
  {723,5},	{685,5},	{722,5},	{760,2},
  {684,2},	{686,0}
};

static struct patval barrierspat57[] = {
  {758,5},	{721,5},	{684,2},	{795,2},
  {683,4},	{720,0}
};

static struct patval barrierspat58[] = {
  {649,5},	{648,5},	{685,1},	{684,2},
  {610,4},	{611,4},	{721,0},	{647,0},
  {759,0},	{612,0},	{722,0},	{686,0},
  {723,0},	{760,0}
};

static struct patval barrierspat59[] = {
  {686,5},	{685,1},	{648,2},	{722,2},
  {684,2},	{723,3},	{649,0}
};

static struct patval barrierspat60[] = {
  {685,5},	{722,5},	{759,5},	{684,1},
  {758,1},	{721,2},	{647,3},	{757,3},
  {794,3},	{795,3},	{648,3},	{646,3},
  {683,3},	{796,3},	{720,0},	{649,0},
  {686,0},	{723,0},	{760,0},	{797,0}
};

static struct patval barrierspat61[] = {
  {759,5},	{722,5},	{721,1},	{795,2},
  {684,2},	{685,0},	{758,0},	{796,0}
};

static struct patval barrierspat62[] = {
  {759,5},	{760,5},	{684,1},	{722,1},
  {648,1},	{685,2},	{721,2},	{647,3},
  {758,4},	{686,0},	{723,0},	{649,0}
};

static struct patval barrierspat63[] = {
  {759,5},	{760,5},	{684,1},	{686,1},
  {648,1},	{685,2},	{721,2},	{647,3},
  {758,4},	{649,0},	{723,0},	{722,0}
};

static struct patval barrierspat64[] = {
  {721,5},	{684,1},	{685,2}
};

static struct patval barrierspat65[] = {
  {720,5},	{721,1},	{758,2},	{684,2},
  {683,4},	{757,4}
};

static struct patval barrierspat66[] = {
  {683,5},	{684,1},	{721,2},	{720,0}
};

static struct patval barrierspat67[] = {
  {686,7},	{687,7},	{684,1},	{721,0},
  {685,0},	{722,0},	{649,0},	{647,0},
  {723,0},	{650,0},	{648,0},	{724,0}
};

static struct patval barrierspat68[] = {
  {685,5},	{687,7},	{686,7},	{684,2},
  {721,0},	{722,0},	{649,0},	{647,0},
  {723,0},	{650,0},	{648,0},	{724,0}
};

static struct patval barrierspat69[] = {
  {609,7},	{723,7},	{572,7},	{724,7},
  {648,1},	{684,2},	{645,4},	{571,4},
  {756,4},	{759,4},	{758,4},	{757,4},
  {608,4},	{761,4},	{760,4},	{682,4},
  {719,4},	{683,0},	{574,0},	{611,0},
  {721,0},	{685,0},	{720,0},	{647,0},
  {575,0},	{612,0},	{649,0},	{686,0},
  {573,0},	{722,0},	{576,0},	{613,0},
  {650,0},	{687,0},	{610,0},	{646,0}
};

static struct patval barrierspat70[] = {
  {649,7},	{684,1},	{722,2},	{647,3},
  {685,0},	{648,0},	{612,0},	{611,0},
  {686,0},	{723,0}
};

static struct patval barrierspat71[] = {
  {686,5},	{723,5},	{685,5},	{684,1},
  {648,2},	{647,4},	{722,0},	{759,0},
  {649,0},	{721,0},	{758,0},	{760,0},
  {650,0},	{687,0},	{724,0},	{761,0}
};

static struct patval barrierspat72[] = {
  {685,5},	{723,5},	{760,5},	{722,5},
  {684,1},	{648,2},	{647,4},	{759,0},
  {649,0},	{686,0},	{758,0},	{721,0},
  {650,0},	{687,0},	{724,0},	{761,0}
};

static struct patval barrierspat73[] = {
  {686,5},	{685,5},	{648,1},	{684,2},
  {649,3},	{721,0},	{722,0},	{723,0}
};

static struct patval barrierspat74[] = {
  {724,5},	{688,5},	{687,5},	{686,1},
  {684,1},	{723,2},	{611,0},	{647,0},
  {685,0},	{722,0},	{759,0},	{796,0},
  {612,0},	{649,0},	{648,0},	{721,0},
  {760,0},	{797,0},	{613,0},	{650,0},
  {758,0},	{610,0},	{761,0},	{798,0},
  {614,0},	{651,0},	{795,0},	{725,0},
  {762,0},	{799,0},	{615,0},	{652,0},
  {689,0},	{726,0},	{763,0},	{800,0}
};

static struct patval barrierspat75[] = {
  {610,7},	{573,7},	{683,1},	{684,2},
  {645,3},	{571,3},	{608,3},	{682,3},
  {646,0},	{609,0},	{647,0},	{572,0}
};

static struct patval barrierspat76[] = {
  {647,7},	{683,1},	{572,1},	{684,2},
  {682,3},	{608,3},	{645,3},	{571,3},
  {573,0},	{610,0},	{609,0},	{646,0}
};

static struct patval barrierspat77[] = {
  {610,7},	{572,1},	{683,1},	{684,2},
  {608,3},	{571,3},	{645,3},	{682,3},
  {573,0},	{609,0},	{647,0},	{646,0}
};

static struct patval barrierspat78[] = {
  {609,7},	{572,7},	{683,1},	{684,2},
  {682,3},	{608,3},	{645,3},	{571,3},
  {573,0},	{610,0},	{647,0},	{646,0}
};

static struct patval barrierspat79[] = {
  {611,7},	{574,7},	{609,1},	{684,2},
  {572,3},	{646,3},	{647,0},	{573,0},
  {610,0},	{648,0},	{685,0}
};

static struct patval barrierspat80[] = {
  {611,7},	{574,7},	{646,1},	{684,2},
  {572,3},	{609,3},	{647,0},	{573,0},
  {610,0},	{648,0},	{685,0}
};

static struct patval barrierspat81[] = {
  {685,7},	{649,7},	{648,7},	{758,1},
  {722,1},	{647,1},	{721,2},	{684,2},
  {759,0},	{686,0},	{723,0},	{760,0}
};

static struct patval barrierspat82[] = {
  {649,7},	{648,7},	{610,1},	{721,1},
  {685,1},	{684,2},	{647,0},	{722,0},
  {612,0},	{611,0},	{686,0},	{723,0}
};

static struct patval barrierspat83[] = {
  {648,7},	{685,1},	{721,1},	{684,2},
  {647,0},	{722,0}
};

static struct patval barrierspat84[] = {
  {722,7},	{685,7},	{648,1},	{721,1},
  {684,2},	{649,3},	{686,0},	{723,0}
};

static struct patval barrierspat85[] = {
  {759,7},	{722,7},	{686,1},	{721,1},
  {684,2},	{760,3},	{758,0},	{723,0},
  {685,0}
};

static struct patval barrierspat86[] = {
  {722,7},	{685,7},	{721,1},	{684,2}
};

static struct patval barrierspat87[] = {
  {721,7},	{758,7},	{757,1},	{722,1},
  {683,1},	{684,2},	{720,0},	{759,0}
};

static struct patval barrierspat88[] = {
  {722,7},	{683,1},	{721,1},	{684,2},
  {685,0},	{720,0}
};

static struct patval barrierspat89[] = {
  {610,7},	{573,7},	{646,1},	{683,2},
  {684,2},	{645,3},	{608,3},	{571,3},
  {572,0},	{647,0},	{609,0}
};

static struct patval barrierspat90[] = {
  {686,7},	{685,1},	{684,2},	{648,0},
  {721,0},	{722,0},	{649,0},	{647,0},
  {723,0},	{650,0},	{687,0},	{724,0}
};

static struct patval barrierspat91[] = {
  {647,7},	{722,7},	{721,7},	{648,7},
  {685,1},	{684,2},	{649,0},	{686,0},
  {723,0},	{650,0},	{687,0},	{724,0}
};

static struct patval barrierspat92[] = {
  {722,7},	{685,1},	{684,2},	{647,4},
  {721,4},	{648,0},	{649,0},	{686,0},
  {723,0}
};

static struct patval barrierspat93[] = {
  {649,7},	{648,7},	{575,1},	{574,1},
  {685,1},	{610,2},	{684,2},	{647,4},
  {722,0},	{612,0},	{611,0},	{686,0},
  {723,0},	{576,0},	{613,0},	{650,0},
  {687,0},	{724,0}
};

static struct patval barrierspat94[] = {
  {687,7},	{686,7},	{685,7},	{648,1},
  {722,1},	{684,2},	{721,2},	{649,0},
  {723,0},	{760,0},	{650,0},	{759,0},
  {724,0},	{761,0}
};

static struct patval barrierspat95[] = {
  {649,7},	{685,1},	{723,1},	{684,2},
  {722,2},	{647,4},	{721,4},	{686,0},
  {648,0}
};

static struct patval barrierspat96[] = {
  {722,7},	{721,7},	{685,7},	{760,1},
  {684,2},	{723,3},	{686,0},	{758,0},
  {759,0}
};

static struct patval barrierspat97[] = {
  {722,7},	{721,7},	{686,1},	{760,1},
  {684,2},	{723,3},	{759,0},	{758,0},
  {685,0}
};

static struct patval barrierspat98[] = {
  {758,7},	{721,7},	{723,1},	{719,1},
  {684,2},	{756,3},	{686,3},	{760,3},
  {682,3},	{685,4},	{683,4},	{759,0},
  {720,0},	{757,0},	{722,0}
};

static struct patval barrierspat99[] = {
  {721,7},	{723,1},	{683,1},	{684,2},
  {760,3},	{686,3},	{685,4},	{722,0},
  {759,0},	{758,0},	{720,0},	{757,0}
};

static struct patval barrierspat100[] = {
  {721,7},	{722,7},	{685,1},	{648,2},
  {684,2},	{647,4}
};

static struct patval barrierspat101[] = {
  {722,7},	{758,1},	{684,2},	{686,3},
  {685,0},	{759,0},	{721,0},	{723,0},
  {760,0}
};

static struct patval barrierspat102[] = {
  {721,7},	{757,1},	{684,2},	{685,3},
  {683,4},	{720,4},	{758,0},	{722,0},
  {759,0}
};

static struct patval barrierspat103[] = {
  {723,7},	{758,1},	{684,2},	{721,0},
  {722,0},	{759,0},	{686,0},	{685,0},
  {760,0}
};

static struct patval barrierspat104[] = {
  {722,7},	{759,7},	{684,2},	{685,0},
  {758,0},	{721,0}
};

static struct patval barrierspat105[] = {
  {721,7},	{758,7},	{683,2},	{684,2},
  {757,0},	{720,0}
};

static struct patval barrierspat106[] = {
  {609,7},	{646,7},	{610,7},	{647,1},
  {720,2},	{684,2},	{683,0},	{721,0},
  {611,0},	{648,0},	{685,0},	{722,0},
  {612,0},	{649,0},	{686,0},	{723,0}
};

static struct patval barrierspat107[] = {
  {609,7},	{646,7},	{722,7},	{685,1},
  {647,1},	{684,2},	{720,2},	{610,0},
  {611,0},	{648,0},	{721,0},	{683,0},
  {612,0},	{649,0},	{686,0},	{723,0}
};

static struct patval barrierspat108[] = {
  {723,7},	{722,7},	{684,2},	{685,0},
  {721,0},	{759,0},	{686,0},	{758,0},
  {760,0},	{687,0},	{724,0},	{761,0}
};

static struct patval barrierspat109[] = {
  {686,7},	{685,7},	{722,1},	{684,2},
  {611,3},	{612,0},	{649,0},	{648,0},
  {723,0},	{613,0},	{650,0},	{687,0},
  {724,0}
};

static struct patval barrierspat110[] = {
  {723,7},	{687,7},	{686,7},	{684,2},
  {646,4},	{683,4},	{719,4},	{757,4},
  {645,4},	{682,4},	{756,4},	{758,4},
  {720,4},	{647,0},	{722,0},	{759,0},
  {649,0},	{685,0},	{648,0},	{760,0},
  {650,0},	{721,0},	{724,0},	{761,0}
};

static struct patval barrierspat111[] = {
  {723,7},	{687,7},	{686,7},	{647,1},
  {684,2},	{683,4},	{646,4},	{757,4},
  {719,4},	{682,4},	{756,4},	{758,4},
  {645,4},	{720,4},	{722,0},	{759,0},
  {649,0},	{685,0},	{648,0},	{760,0},
  {650,0},	{721,0},	{724,0},	{761,0}
};

static struct patval barrierspat112[] = {
  {686,7},	{722,7},	{685,7},	{647,1},
  {684,2},	{646,4},	{683,4},	{720,4},
  {648,0},	{649,0},	{721,0},	{723,0},
  {687,0}
};

static struct patval barrierspat113[] = {
  {685,7},	{647,1},	{684,2},	{720,4},
  {683,4},	{646,4},	{648,0},	{721,0},
  {722,0},	{686,0}
};

static struct patval barrierspat114[] = {
  {685,7},	{721,1},	{647,1},	{683,2},
  {684,2},	{720,4},	{646,4},	{648,0},
  {722,0},	{686,0}
};

static struct patval barrierspat115[] = {
  {685,7},	{721,1},	{647,1},	{684,2},
  {720,4},	{646,4},	{648,0},	{683,0},
  {722,0},	{686,0}
};

static struct patval barrierspat116[] = {
  {685,7},	{687,7},	{686,7},	{722,1},
  {648,1},	{646,1},	{684,2},	{574,0},
  {611,0},	{610,0},	{572,0},	{609,0},
  {575,0},	{612,0},	{649,0},	{647,0},
  {723,0},	{576,0},	{613,0},	{650,0},
  {573,0},	{724,0}
};

static struct patval barrierspat117[] = {
  {721,7},	{685,1},	{720,1},	{684,2},
  {722,3}
};

static struct patval barrierspat118[] = {
  {721,7},	{722,1},	{720,1},	{684,2},
  {685,4}
};

static struct patval barrierspat119[] = {
  {647,7},	{646,1},	{684,2}
};

static struct patval barrierspat120[] = {
  {722,7},	{721,7},	{720,1},	{759,1},
  {684,2},	{757,3},	{685,4},	{758,0}
};

static struct patval barrierspat121[] = {
  {720,7},	{683,1},	{684,2}
};

static struct patval barrierspat122[] = {
  {721,7},	{720,7},	{683,1},	{684,2}
};

static struct patval barrierspat123[] = {
  {648,7},	{685,1},	{647,1},	{684,2},
  {646,2},	{683,4},	{721,4},	{720,4},
  {611,0},	{610,0},	{722,0},	{612,0},
  {649,0},	{686,0},	{723,0}
};

static struct patval barrierspat124[] = {
  {648,7},	{611,7},	{646,1},	{647,1},
  {683,2},	{684,2},	{685,4},	{573,0},
  {610,0}
};

static struct patval barrierspat125[] = {
  {648,7},	{611,7},	{647,1},	{684,2},
  {685,4},	{610,0}
};

static struct patval barrierspat126[] = {
  {611,7},	{648,7},	{683,1},	{647,1},
  {684,2},	{721,4},	{685,4},	{609,0},
  {646,0},	{610,0}
};

static struct patval barrierspat127[] = {
  {648,7},	{685,1},	{610,1},	{684,2},
  {721,4},	{611,0},	{647,0},	{722,0},
  {612,0},	{649,0},	{686,0},	{723,0}
};

static struct patval barrierspat128[] = {
  {722,7},	{648,7},	{685,1},	{684,2},
  {758,3},	{761,3},	{760,3},	{612,3},
  {610,3},	{613,3},	{647,0},	{611,0},
  {686,0},	{723,0},	{721,0},	{759,0},
  {650,0},	{687,0},	{724,0},	{649,0}
};

static struct patval barrierspat129[] = {
  {794,7},	{756,1},	{684,2},	{683,4},
  {757,0},	{793,0},	{831,0},	{720,0},
  {721,0},	{758,0},	{795,0},	{832,0}
};

static struct patval barrierspat130[] = {
  {758,7},	{719,1},	{759,1},	{684,2},
  {757,0},	{720,0},	{721,0},	{756,0},
  {685,0},	{722,0},	{683,0}
};

static struct patval barrierspat131[] = {
  {685,7},	{722,7},	{721,1},	{647,1},
  {684,2},	{648,0}
};

static struct patval barrierspat132[] = {
  {758,7},	{721,1},	{684,2},	{757,0},
  {720,0},	{685,0},	{722,0},	{759,0}
};

static struct patval barrierspat133[] = {
  {686,7},	{648,1},	{722,1},	{684,2},
  {649,0},	{685,0},	{723,0}
};

static struct patval barrierspat134[] = {
  {648,7},	{722,7},	{647,1},	{721,1},
  {685,1},	{683,2},	{684,2}
};

static struct patval barrierspat135[] = {
  {721,7},	{683,1},	{722,1},	{684,2},
  {757,3},	{758,0},	{685,0},	{720,0},
  {759,0}
};

static struct patval barrierspat136[] = {
  {758,7},	{720,7},	{683,1},	{721,1},
  {684,2},	{757,0}
};

static struct patval barrierspat137[] = {
  {611,7},	{647,1},	{683,1},	{684,2},
  {721,4},	{685,4},	{722,4},	{610,0},
  {648,0},	{646,0},	{609,0}
};

static struct patval barrierspat138[] = {
  {685,1},	{759,1},	{758,2},	{684,2},
  {721,3},	{722,4}
};

static struct patval barrierspat139[] = {
  {685,1},	{759,1},	{684,2},	{721,3},
  {722,4},	{758,0}
};

static struct patval barrierspat140[] = {
  {684,1},	{759,2},	{685,2},	{722,3},
  {721,4},	{758,0}
};

static struct patval barrierspat141[] = {
  {685,1},	{684,2},	{612,2},	{649,3},
  {611,3},	{647,3},	{648,0}
};

static struct patval barrierspat142[] = {
  {612,1},	{684,1},	{685,2},	{649,4},
  {611,4},	{647,4},	{648,0}
};

static struct patval barrierspat143[] = {
  {685,1},	{684,2},	{647,3},	{648,4}
};

static struct patval barrierspat144[] = {
  {686,1},	{684,2},	{649,3},	{685,0},
  {648,0}
};

static struct patval barrierspat145[] = {
  {684,1},	{686,2},	{649,4},	{685,0},
  {648,0}
};

static struct patval barrierspat146[] = {
  {684,1},	{722,2},	{648,0},	{685,0},
  {647,0}
};

static struct patval barrierspat147[] = {
  {684,1},	{722,2},	{648,0},	{685,0},
  {647,0}
};

static struct patval barrierspat148[] = {
  {684,1},	{722,2},	{610,0},	{611,0},
  {648,0},	{685,0},	{647,0}
};

static struct patval barrierspat149[] = {
  {684,1},	{721,2},	{647,3},	{722,4},
  {685,0},	{648,0}
};

static struct patval barrierspat150[] = {
  {684,1},	{721,2},	{647,0},	{648,0},
  {685,0},	{722,0}
};

static struct patval barrierspat151[] = {
  {574,1},	{684,1},	{649,2},	{612,4},
  {647,0},	{611,0},	{648,0},	{573,0},
  {610,0}
};

static struct patval barrierspat152[] = {
  {684,1},	{758,1},	{721,2},	{756,3},
  {720,0},	{757,0},	{683,0},	{682,0},
  {719,0}
};

static struct patval barrierspat153[] = {
  {686,1},	{685,1},	{721,1},	{648,2},
  {684,2},	{647,4},	{649,0},	{722,0},
  {723,0}
};

static struct patval barrierspat154[] = {
  {684,2},	{683,0},	{721,0}
};

static struct patval barrierspat155[] = {
  {684,1},	{683,0},	{721,0}
};

static struct patval barrierspat156[] = {
  {721,1},	{684,2},	{720,0},	{683,0},
  {682,0}
};

static struct patval barrierspat157[] = {
  {721,1},	{684,2},	{719,0},	{683,0},
  {720,0},	{681,0},	{682,0}
};

static struct patval barrierspat158[] = {
  {684,1},	{686,1},	{649,2},	{648,0},
  {685,0},	{646,0},	{647,0}
};

static struct patval barrierspat159[] = {
  {684,1},	{722,1},	{721,2},	{683,0},
  {685,0},	{720,0}
};

static struct patval barrierspat160[] = {
  {685,1},	{722,2},	{684,2},	{721,0}
};

static struct patval barrierspat161[] = {
  {684,1},	{759,2},	{721,2},	{722,3},
  {758,4},	{685,0},	{647,0},	{648,0}
};

static struct patval barrierspat162[] = {
  {684,1},	{721,2},	{759,2},	{722,3},
  {758,4},	{610,0},	{648,0},	{685,0},
  {647,0},	{611,0}
};

static struct patval barrierspat163[] = {
  {684,1},	{685,2},	{647,0},	{648,0},
  {646,0}
};

static struct patval barrierspat164[] = {
  {684,1},	{685,2},	{648,0},	{647,0}
};

static struct patval barrierspat165[] = {
  {684,1},	{648,2},	{647,0},	{683,0},
  {646,0}
};

static struct patval barrierspat166[] = {
  {684,1},	{648,2},	{647,0},	{646,0}
};

static struct patval barrierspat167[] = {
  {684,2},	{721,0}
};

static struct patval barrierspat168[] = {
  {684,1},	{721,0}
};

static struct patval barrierspat169[] = {
  {684,1},	{721,2},	{685,0},	{722,0}
};

static struct patval barrierspat170[] = {
  {648,1},	{684,1},	{686,1},	{649,2},
  {611,2},	{647,0},	{685,0}
};

static struct patval barrierspat171[] = {
  {684,2},	{721,0},	{758,0}
};

static struct patval barrierspat172[] = {
  {684,2},	{685,3},	{721,0},	{722,0}
};

static struct patval barrierspat173[] = {
  {648,1},	{721,2},	{684,2},	{758,0},
  {685,0},	{722,0},	{759,0}
};

static struct patval barrierspat174[] = {
  {684,1},	{721,1},	{648,2},	{758,0},
  {685,0},	{722,0},	{759,0}
};

static struct patval barrierspat175[] = {
  {684,1},	{721,1},	{758,1},	{648,2},
  {795,0},	{685,0},	{722,0},	{759,0},
  {796,0}
};

static struct patval barrierspat176[] = {
  {612,1},	{684,2},	{610,0},	{611,0},
  {648,0},	{685,0},	{647,0},	{649,0},
  {686,0}
};

static struct patval barrierspat177[] = {
  {684,1},	{760,1},	{758,2},	{685,0},
  {722,0},	{759,0},	{686,0},	{723,0},
  {721,0}
};

static struct patval barrierspat178[] = {
  {648,1},	{686,2},	{684,2},	{685,2},
  {649,3},	{610,3},	{612,0},	{611,0},
  {647,0}
};

static struct patval barrierspat179[] = {
  {685,1},	{684,2},	{610,0},	{611,0},
  {648,0},	{647,0}
};

static struct patval barrierspat180[] = {
  {759,1},	{721,1},	{684,2},	{722,2},
  {723,4},	{686,0},	{685,0}
};

static struct patval barrierspat181[] = {
  {684,1},	{722,1},	{759,2},	{723,3},
  {685,0},	{686,0},	{721,0}
};

static struct patval barrierspat182[] = {
  {759,1},	{721,1},	{684,2},	{722,2},
  {760,2},	{685,0},	{723,0},	{686,0}
};

static struct patval barrierspat183[] = {
  {684,1},	{760,1},	{722,1},	{759,2},
  {758,2},	{685,0},	{686,0},	{723,0},
  {721,0}
};

static struct patval barrierspat184[] = {
  {685,1},	{684,1},	{648,2},	{647,4},
  {721,0},	{722,0},	{649,0},	{686,0},
  {723,0},	{650,0},	{687,0},	{724,0}
};

static struct patval barrierspat185[] = {
  {611,1},	{686,1},	{684,2},	{722,2},
  {721,4},	{647,4},	{685,0},	{612,0},
  {649,0},	{648,0}
};

static int
autohelperbarrierspat3(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);

  return !(play_break_through_n(color, 2, a, b, c, b, d)==WIN);
}

static int
autohelperbarrierspat6(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(color, 1, 3, a, b, c, a, c) || !play_attack_defend2_n(color, 1, 2, a, b, b, d);
}

static int
autohelperbarrierspat7(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(684, trans, move);

  return !DEFEND_MACRO(a);
}

static int
autohelperbarrierspat12(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return !safe_move(a, color) || play_attack_defend2_n(color, 0, 1, a, b, c);
}

static int
autohelperbarrierspat15(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);

  return !play_attack_defend2_n(color, 1, 2, a, b, b, c);
}

static int
autohelperbarrierspat17(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(758, trans, move);
  f = AFFINE_TRANSFORM(685, trans, move);

  return (play_attack_defend2_n(color, 1, 3, a, b, f, a, f) || !play_attack_defend2_n(color, 1, 2, a, b, c, d))&& (play_attack_defend2_n(color, 1, 3, b, a, e, b, e) || !play_attack_defend2_n(color, 1, 2, b, a, c, d));
}

static int
autohelperbarrierspat18(int trans, int move, int color, int action)
{
  int a, b, c, d, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);
  f = AFFINE_TRANSFORM(685, trans, move);

  return (play_attack_defend2_n(color, 1, 3, a, b, f, a, f) || !play_attack_defend2_n(color, 1, 2, a, b, c, d))&& !play_attack_defend_n(color, 1, 2, b, a, c);
}

static int
autohelperbarrierspat19(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend2_n(color, 1, 2, a, b, c, d)&& (play_attack_defend2_n(color, 1, 3, b, a, e, b, e) || !play_attack_defend2_n(color, 1, 2, b, a, c, d));
}

static int
autohelperbarrierspat20(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);

  return !play_attack_defend2_n(color, 1, 2, a, b, c, d) && !play_attack_defend2_n(color, 1, 2, b, a, c, d);
}

static int
autohelperbarrierspat21(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(684, trans, move);

  return !play_break_through_n(color, 3, a, b, c, a, c, d);
}

static int
autohelperbarrierspat22(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(795, trans, move);

  return !play_attack_defend2_n(color, 1, 3, a, b, c, a, c) || !play_attack_defend2_n(color, 1, 3, b, a, d, d, e);
}

static int
autohelperbarrierspat24(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d) && !play_attack_defend2_n(color, 1, 4, d, c, b, a, c, a);
}

static int
autohelperbarrierspat26(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d) && !play_attack_defend2_n(color, 1, 4, d, c, b, a, c, a);
}

static int
autohelperbarrierspat27(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);

  return play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d) || !play_attack_defend2_n(color, 0, 4, a, b, c, d, a, c);
}

static int
autohelperbarrierspat30(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d) && !play_attack_defend2_n(color, 1, 4, d, c, b, a, c, a);
}

static int
autohelperbarrierspat33(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(color, 1, 1, a, a, b);
}

static int
autohelperbarrierspat37(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  return play_attack_defend_n(color, 1, 1, a, B);
}

static int
autohelperbarrierspat39(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(759, trans, move);

  return ATTACK_MACRO(A);
}

static int
autohelperbarrierspat42(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)>3 || (!is_legal(b, color))|| (countlib(A)>2 && (accuratelib(b, color, MAX_LIBERTIES, NULL) <= 2 || play_attack_defend2_n(color, 1, 3, c, d, b, b, c)));
}

static int
autohelperbarrierspat43(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)==1;
}

static int
autohelperbarrierspat46(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend2_n(color, 1, 3, a, b, c, a, c);
}

static int
autohelperbarrierspat47(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(796, trans, move);
  e = AFFINE_TRANSFORM(795, trans, move);

  return play_attack_defend2_n(color, 0, 4, a, b, c, d, a, e);
}

static int
autohelperbarrierspat48(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  D = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend2_n(color, 1, 2, a, b, b, D) || play_attack_defend2_n(color, 0, 2, a, b, a, c);
}

static int
autohelperbarrierspat50(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(color, 1, 4, a, b, c, d, d, b) && !play_attack_defend2_n(color, 0, 3, a, c, b, c, E);
}

static int
autohelperbarrierspat58(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 1, 1, a, b);
}

static int
autohelperbarrierspat60(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(684, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperbarrierspat61(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(795, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)<=3 && countlib(b)>=3 && countlib(c)>=3;
}

static int
autohelperbarrierspat62(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);

  return !play_attack_defend_n(color, 1, 1, a, b);
}

static int
autohelperbarrierspat63(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return safe_move(a, color);
}

static int
autohelperbarrierspat64(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(684, trans, move);

  return countlib(A)==1;
}

static int
autohelperbarrierspat65(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return countlib(A)<=2 && countlib(b)>1 && countlib(c)>1;
}

static int
autohelperbarrierspat66(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);

  return play_attack_defend_n(color, 1, 2, a, b, b);
}

static int
autohelperbarrierspat72(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);

  return !play_attack_defend_n(color, 1, 3, a, b, c, c);
}

static int
autohelperbarrierspat73(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);

  return play_attack_defend_n(color, 1, 2, a, b, C);
}

static int
autohelperbarrierspat75(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(571, trans, move);
  b = AFFINE_TRANSFORM(534, trans, move);
  c = AFFINE_TRANSFORM(533, trans, move);

  return (countlib(a)>2 || (countlib(a) == 2 && connect_and_cut_helper(a, b, c)));;

  return 0;
}

static int
autohelperbarrierspat76(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(571, trans, move);
  b = AFFINE_TRANSFORM(534, trans, move);
  c = AFFINE_TRANSFORM(533, trans, move);

  return (countlib(a)>2 || (countlib(a) == 2 && connect_and_cut_helper(a, b, c)));;

  return 0;
}

static int
autohelperbarrierspat77(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(497, trans, move);
  b = AFFINE_TRANSFORM(571, trans, move);
  c = AFFINE_TRANSFORM(534, trans, move);
  d = AFFINE_TRANSFORM(533, trans, move);

  if (!action)
    return safe_move(a, color);
  return (countlib(b)>2 || (countlib(b) == 2 && connect_and_cut_helper(b, c, d)));;

  return 0;
}

static int
autohelperbarrierspat78(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(459, trans, move);
  b = AFFINE_TRANSFORM(534, trans, move);
  c = AFFINE_TRANSFORM(533, trans, move);

  return !play_attack_defend_n(color, 0, 3, a, b, c, b);
}

static int
autohelperbarrierspat79(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(462, trans, move);
  b = AFFINE_TRANSFORM(535, trans, move);
  c = AFFINE_TRANSFORM(536, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 3, a, b, c, d);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, d));;

  return 0;
}

static int
autohelperbarrierspat80(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(462, trans, move);
  b = AFFINE_TRANSFORM(535, trans, move);
  c = AFFINE_TRANSFORM(536, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 3, a, b, c, d);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, d));;

  return 0;
}

static int
autohelperbarrierspat81(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, C);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, d));;

  return 0;
}

static int
autohelperbarrierspat82(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, C);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, d));;

  return 0;
}

static int
autohelperbarrierspat83(int trans, int move, int color, int action)
{
  int a, b, c, f, D, E;
  UNUSED(color);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  f = AFFINE_TRANSFORM(647, trans, move);
  D = AFFINE_TRANSFORM(648, trans, move);
  E = AFFINE_TRANSFORM(684, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 3, a, b, c, D, E);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, f));;

  return 0;
}

static int
autohelperbarrierspat84(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, a));;

  return 0;
}

static int
autohelperbarrierspat85(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  if (!action)
    return countlib(A)==2;
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, c));;

  return 0;
}

static int
autohelperbarrierspat86(int trans, int move, int color, int action)
{
  int a, b, c, C;
  UNUSED(color);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  if (!action)
    return play_attack_defend2_n(color, 1, 2, a, b, C, b);;
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, c));;

  return 0;
}

static int
autohelperbarrierspat87(int trans, int move, int color, int action)
{
  int a, c, B;
  UNUSED(color);

  a = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 1, a, B) && !ATTACK_MACRO(B);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, c));;

  return 0;
}

static int
autohelperbarrierspat88(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 2, a, b, C);
}

static int
autohelperbarrierspat89(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);

  a = AFFINE_TRANSFORM(534, trans, move);
  b = AFFINE_TRANSFORM(497, trans, move);
  d = AFFINE_TRANSFORM(571, trans, move);
  C = AFFINE_TRANSFORM(533, trans, move);

  if (!action)
    return play_attack_defend2_n(color, 1, 2, a, b, b, C);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, d));;

  return 0;
}

static int
autohelperbarrierspat90(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend_n(color, 1, 2, a, b, b) && play_attack_defend_n(color, 1, 2, c, d, d);
}

static int
autohelperbarrierspat91(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend_n(color, 1, 2, a, b, b) || play_attack_defend_n(color, 1, 2, c, d, d);
}

static int
autohelperbarrierspat92(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  if (!action)
    return somewhere(color, 0, 1, b) || play_attack_defend2_n(color, 1, 2, a, b, b, C);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, d));;

  return 0;
}

static int
autohelperbarrierspat93(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(499, trans, move);

  return countlib(a)>=2 && countlib(b)>=2;
}

static int
autohelperbarrierspat94(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);

  return play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d);
}

static int
autohelperbarrierspat95(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(612, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 3, a, b, c, a);
  return (countlib(d)>2 && countlib(e)>2 && !play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, e));;

  return 0;
}

static int
autohelperbarrierspat99(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat100(int trans, int move, int color, int action)
{
  int b, c, d, e, f, A;
  UNUSED(color);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(684, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(611, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  if (!action)
    return countlib(A)==2 && !play_attack_defend_n(color, 1, 1, b, b);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, c, d) && play_attack_defend2_n(OTHER_COLOR(color), 0, 1, e, d, f));;

  return 0;
}

static int
autohelperbarrierspat101(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat102(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat103(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat104(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(684, trans, move);

  if (!action)
    return play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, b, e));;

  return 0;
}

static int
autohelperbarrierspat105(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat109(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(612, trans, move);
  c = AFFINE_TRANSFORM(575, trans, move);
  d = AFFINE_TRANSFORM(574, trans, move);

  return play_attack_defend2_n(color, 1, 4, a, b, c, d, b, d);
}

static int
autohelperbarrierspat111(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(609, trans, move);
  e = AFFINE_TRANSFORM(684, trans, move);
  f = AFFINE_TRANSFORM(682, trans, move);

  return play_attack_defend_n(color, 1, 6, a, b, c, d, e, f, f);
}

static int
autohelperbarrierspat112(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat113(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat115(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(645, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, b);
  return 0;;

  return 0;
}

static int
autohelperbarrierspat116(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(535, trans, move);
  b = AFFINE_TRANSFORM(498, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);
  d = AFFINE_TRANSFORM(574, trans, move);
  e = AFFINE_TRANSFORM(537, trans, move);
  f = AFFINE_TRANSFORM(499, trans, move);

  return play_attack_defend_n(color, 1, 6, a, b, c, d, e, f, d);
}

static int
autohelperbarrierspat117(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  if (!action)
    return safe_move(a, color);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat118(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  if (!action)
    return safe_move(a, color);
   return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat119(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  if (!action)
    return safe_move(a, color);
   return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat120(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  if (!action)
    return safe_move(a, color);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat121(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return countlib(A)==1 && ATTACK_MACRO(A);
}

static int
autohelperbarrierspat122(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return countlib(A)==1;
}

static int
autohelperbarrierspat123(int trans, int move, int color, int action)
{
  int a, b, c, e, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(535, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(608, trans, move);
  D = AFFINE_TRANSFORM(610, trans, move);

  return (somewhere(color, 0, 1, e) || !safe_move(e, OTHER_COLOR(color))) && !play_attack_defend_n(color, 0, 3, a, b, c, D);
}

static int
autohelperbarrierspat124(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(536, trans, move);
  c = AFFINE_TRANSFORM(498, trans, move);
  d = AFFINE_TRANSFORM(499, trans, move);
  A = AFFINE_TRANSFORM(534, trans, move);

  return countlib(A)==2 && !ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 3, b, c, d, d);
}

static int
autohelperbarrierspat125(int trans, int move, int color, int action)
{
  int a, b, c, e, f, D;
  UNUSED(color);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(537, trans, move);
  c = AFFINE_TRANSFORM(536, trans, move);
  e = AFFINE_TRANSFORM(611, trans, move);
  f = AFFINE_TRANSFORM(610, trans, move);
  D = AFFINE_TRANSFORM(573, trans, move);

  if (!action)
    return safe_move(a, color)&& (somewhere(color, 0, 1, e) || play_attack_defend_n(color, 1, 2, a, e, e))&& !play_attack_defend2_n(color, 0, 3, a, b, c, b, D);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, f) && (somewhere(color, 0, 1, e) || (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, e, f))));;

  return 0;
}

static int
autohelperbarrierspat126(int trans, int move, int color, int action)
{
  int a, b, c, d, e, h, F, G;
  UNUSED(color);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(536, trans, move);
  d = AFFINE_TRANSFORM(571, trans, move);
  e = AFFINE_TRANSFORM(535, trans, move);
  h = AFFINE_TRANSFORM(609, trans, move);
  F = AFFINE_TRANSFORM(572, trans, move);
  G = AFFINE_TRANSFORM(608, trans, move);

  if (!action)
    return safe_move(a, color)&& (somewhere(color, 0, 1, b) || play_attack_defend_n(color, 1, 2, a, b, b))&& !play_attack_defend2_n(color, 0, 4, a, c, d, e, F, G);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, h));;

  return 0;
}

static int
autohelperbarrierspat127(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);

  return safe_move(a, color) && play_attack_defend_n(color, 1, 2, a, b, C);
}

static int
autohelperbarrierspat128(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(574, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 1, 3, a, b, c, d);
}

static int
autohelperbarrierspat129(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return countlib(a)>2;
}

static int
autohelperbarrierspat131(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 1, a, b) && ! ATTACK_MACRO(b);
  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, c));;

  return 0;
}

static int
autohelperbarrierspat132(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend2_n(color, 1, 3, a, b, c, c, d);
}

static int
autohelperbarrierspat133(int trans, int move, int color, int action)
{
  int a, b, e, C, D;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);
  D = AFFINE_TRANSFORM(685, trans, move);

  if (!action)
    return play_break_through_n(color, 2, a, b, C, b, D);
  return(!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, e));;

  return 0;
}

static int
autohelperbarrierspat134(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return (play_break_through_n(color, 0, a, b, c)==WIN);
}

static int
autohelperbarrierspat135(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return (!play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b));;

  return 0;
}

static int
autohelperbarrierspat136(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend_n(color, 0, 1, a, B);
}

static int
autohelperbarrierspat137(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, G;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(573, trans, move);
  e = AFFINE_TRANSFORM(571, trans, move);
  f = AFFINE_TRANSFORM(535, trans, move);
  G = AFFINE_TRANSFORM(608, trans, move);

  return (somewhere(color, 0, 1, a) || somewhere(color, 0, 1, b) || somewhere(color, 0, 1, c))&& (somewhere(color, 0, 1, a) || play_attack_defend_n(color, 1, 2, d, a, a)) && play_attack_defend_n(color, 1, 2, e, f, G);
}

static int
autohelperbarrierspat138(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  if (!false_eye_territory[a]) influence_mark_non_territory(a, color);if (!false_eye_territory[b]) influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat139(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  if ((is_halfeye(half_eye,a) || is_false_eye(half_eye, a))    && !false_eye_territory[a]) influence_mark_non_territory(a, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat140(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  if (is_false_eye(half_eye, a)    && !false_eye_territory[a]) influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat141(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(574, trans, move);

  if (!false_eye_territory[a]) influence_mark_non_territory(a, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat142(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(574, trans, move);

  if (!false_eye_territory[a]) influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat143(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  if (!false_eye_territory[a]) influence_mark_non_territory(a, color);if (!false_eye_territory[b]) influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat144(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat145(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  influence_mark_non_territory(a, color);influence_mark_non_territory(b, color);;

  return 0;
}

static int
autohelperbarrierspat146(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat147(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  if (!action)
    return safe_move(a, color) && play_attack_defend_n(color, 1, 3, a, b, c, a) && connect_and_cut_helper2(a, b, c, color);
  influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat148(int trans, int move, int color, int action)
{
  int a, b, c, e, D;
  UNUSED(color);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(574, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);
  e = AFFINE_TRANSFORM(537, trans, move);
  D = AFFINE_TRANSFORM(610, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 3, a, b, c, b, D);
  influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(e, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat149(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat150(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return safe_move(a, color) && !play_attack_defend2_n(color, 0, 5, a, b, c, NO_MOVE, d, b, E);
  influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat151(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(537, trans, move);
  b = AFFINE_TRANSFORM(536, trans, move);
  c = AFFINE_TRANSFORM(499, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat152(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(718, trans, move);
  b = AFFINE_TRANSFORM(755, trans, move);
  c = AFFINE_TRANSFORM(681, trans, move);
  d = AFFINE_TRANSFORM(717, trans, move);
  e = AFFINE_TRANSFORM(680, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));influence_mark_non_territory(e, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat153(int trans, int move, int color, int action)
{
  int a, c, B;
  UNUSED(color);

  a = AFFINE_TRANSFORM(612, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  if (!action)
    return safe_move(a, color) && play_attack_defend_n(color, 1, 1, a, B);
  influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat154(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat155(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  influence_mark_non_territory(a, color);influence_mark_non_territory(b, color);;

  return 0;
}

static int
autohelperbarrierspat156(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(681, trans, move);
  b = AFFINE_TRANSFORM(718, trans, move);
  c = AFFINE_TRANSFORM(680, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat157(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);

  a = AFFINE_TRANSFORM(680, trans, move);
  b = AFFINE_TRANSFORM(717, trans, move);
  c = AFFINE_TRANSFORM(679, trans, move);
  d = AFFINE_TRANSFORM(716, trans, move);
  e = AFFINE_TRANSFORM(678, trans, move);
  f = AFFINE_TRANSFORM(715, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));influence_mark_non_territory(e, OTHER_COLOR(color));influence_mark_non_territory(f, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat158(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(608, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));influence_mark_non_territory(e, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat159(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 4, a, b, NO_MOVE, c, a, d);
  influence_mark_non_territory(a, color);influence_mark_non_territory(c, color);;

  return 0;
}

static int
autohelperbarrierspat160(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(684, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
  influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat161(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 5, a, b, c, NO_MOVE, d, b, E);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat162(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);
  c = AFFINE_TRANSFORM(574, trans, move);
  d = AFFINE_TRANSFORM(537, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);
  f = AFFINE_TRANSFORM(536, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 7, a, b, c, d, e, NO_MOVE, f, d, b);
  influence_mark_non_territory(a, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));influence_mark_non_territory(f, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat163(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, move, a, a) && safe_move(move, color);
  influence_mark_non_territory(move, OTHER_COLOR(color));influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat164(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return ATTACK_MACRO(b) && play_attack_defend_n(color, 1, 1, move, b);
  influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat165(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(645, trans, move);
  c = AFFINE_TRANSFORM(608, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 2, a, b, b) && !play_attack_defend_n(color, 1, 2, b, a, a);
  influence_mark_non_territory(a, color);influence_mark_non_territory(b, color);influence_mark_non_territory(c, color);;

  return 0;
}

static int
autohelperbarrierspat166(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);

  a = AFFINE_TRANSFORM(683, trans, move);

  if (!action)
    return safe_move(move, color);
  influence_mark_non_territory(move, OTHER_COLOR(color));influence_mark_non_territory(a, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat167(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  influence_mark_non_territory(a, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat168(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat169(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(684, trans, move);

  if (!action)
    return countlib(A)==2 && connect_and_cut_helper(A, b, c);
  influence_mark_non_territory(b, color);influence_mark_non_territory(c, color);;

  return 0;
}

static int
autohelperbarrierspat170(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat171(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat172(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return safe_move(a, color);
  influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat173(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  if (!action)
    return !safe_move(a, color) && play_attack_defend_n(color, 1, 2, b, a, b);
  influence_mark_non_territory(b, color);influence_mark_non_territory(c, color);;

  return 0;
}

static int
autohelperbarrierspat174(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, b) && !play_attack_defend_n(color, 1, 3, a, c, b, b) && play_attack_defend_n(color, 1, 3, a, c, b, E);
  influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat175(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, b) && play_attack_defend_n(color, 1, 3, a, c, b, c);
  influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat176(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(575, trans, move);
  c = AFFINE_TRANSFORM(612, trans, move);
  d = AFFINE_TRANSFORM(537, trans, move);
  e = AFFINE_TRANSFORM(536, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 5, a, b, c, d, e, d);
  influence_mark_non_territory(a, color);influence_mark_non_territory(c, color);influence_mark_non_territory(e, color);;

  return 0;
}

static int
autohelperbarrierspat177(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(686, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 3, a, b, c, a) && !play_attack_defend_n(color, 1, 3, a, c, b, a);
  influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat178(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(575, trans, move);
  c = AFFINE_TRANSFORM(537, trans, move);

  if (!action)
    return safe_move(a, color)&& ((somewhere(OTHER_COLOR(color), 0, 1, b) && play_attack_defend_n(color, 1, 1, a, b))    || (!somewhere(OTHER_COLOR(color), 0, 1, b) && play_attack_defend_n(color, 1, 2, a, b, b)));
  influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat179(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(574, trans, move);
  c = AFFINE_TRANSFORM(536, trans, move);
  d = AFFINE_TRANSFORM(537, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 1, 3, a, b, c, a) && !play_attack_defend_n(color, 1, 3, a, c, b, a);
  influence_mark_non_territory(b, OTHER_COLOR(color));influence_mark_non_territory(c, OTHER_COLOR(color));influence_mark_non_territory(d, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat180(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  if (!action)
    return countlib(a)==2 && ATTACK_MACRO(a);
  influence_mark_non_territory(b, color);;

  return 0;
}

static int
autohelperbarrierspat181(int trans, int move, int color, int action)
{
  int a, c, B;
  UNUSED(color);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return countlib(B)==3 && safe_move(a, color) && play_attack_defend_n(color, 1, 1, a, B);
  influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat182(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(723, trans, move);
  b = AFFINE_TRANSFORM(760, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
  influence_mark_non_territory(a, color);;

  return 0;
}

static int
autohelperbarrierspat183(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  C = AFFINE_TRANSFORM(760, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  if (!action)
    return !play_attack_defend2_n(color, 0, 3, a, NO_MOVE, b, C, D);
  influence_mark_non_territory(b, OTHER_COLOR(color));;

  return 0;
}

static int
autohelperbarrierspat184(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(612, trans, move);
  e = AFFINE_TRANSFORM(650, trans, move);

  if (!action)
    return !play_attack_defend_n(color, 0, 4, a, b, c, d, a);
  influence_mark_non_territory(d, color);influence_mark_non_territory(e, color);;

  return 0;
}

static int
autohelperbarrierspat185(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);

  a = AFFINE_TRANSFORM(574, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(575, trans, move);

  if (!action)
    return play_attack_defend_n(color, 1, 2, a, b, b);
  influence_mark_non_territory(c, OTHER_COLOR(color));;

  return 0;
}

static struct pattern barrierspat[] = {
  {barrierspat0,3,2, "Barrier1",0,0,0,2,0,2,0x0,684,
    { 0x003f0000, 0x00303030, 0x00f00000, 0x30300000, 0x30300000, 0x003f0000, 0x00303030, 0x00f00000},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat1,6,4, "Barrier1b",-1,0,0,2,1,2,0x0,685,
    { 0x2e3f0000, 0x00383c38, 0x00f0e000, 0xf0b00000, 0x3c380000, 0x003f2e00, 0x00b0f0b0, 0xe0f00000},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat2,9,2, "Barrier2",-1,0,1,2,2,2,0x0,685,
    { 0x153f1500, 0x00747474, 0x50f05000, 0x74740000, 0x74740000, 0x153f1500, 0x00747474, 0x50f05000},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat3,6,4, "Barrier3",-1,0,0,2,1,2,0x0,685,
    { 0x3f3f0000, 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0, 0xf0f00000},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat3,3,5.000000},
  {barrierspat4,2,4, "Barrier4",0,-1,0,0,0,1,0x8,721,
    { 0x00f00000, 0x30300000, 0x003c0000, 0x00303000, 0x00303000, 0x00f00000, 0x30300000, 0x003c0000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat5,6,4, "Barrier5",0,-1,1,1,1,2,0x2,721,
    { 0x00747400, 0x50f05000, 0x74740000, 0x143c1400, 0x50f05000, 0x74740000, 0x143c1400, 0x00747400},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat6,4,8, "Barrier6",0,-1,1,0,1,1,0x2,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat6,3,4.800000},
  {barrierspat7,4,8, "Barrier6b",0,0,1,1,1,1,0x2,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat7,0,1.000000},
  {barrierspat8,4,4, "Barrier7",0,0,1,1,1,1,0x2,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat9,4,2, "Barrier8",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat10,4,2, "Barrier9",0,-1,1,0,1,1,0x0,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00208000, 0x80200000, 0x08200000, 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x00200800}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat11,4,4, "Barrier10",0,0,1,1,1,1,0x0,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat12,4,4, "Barrier11",0,0,1,1,1,1,0x0,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00182000, 0x00902000, 0x20900000, 0x20180000, 0x20900000, 0x20180000, 0x00182000, 0x00902000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat12,0,2.800000},
  {barrierspat13,5,8, "Barrier12",0,0,1,2,1,2,0x0,684,
    { 0x003f0f00, 0x0030f0f0, 0xc0f00000, 0x3c300000, 0xf0300000, 0x0f3f0000, 0x00303c3c, 0x00f0c000},
    { 0x00100100, 0x00100040, 0x00100000, 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat14,6,2, "Barrier13",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00222200, 0x00a000a0, 0x20200000, 0x00280000, 0x00a00000, 0x22220000, 0x00280028, 0x00202000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat15,6,8, "Barrier14",0,0,1,2,1,2,0x0,684,
    { 0x003e3f00, 0x00f0f0e0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3e0000, 0x003c3c2c, 0x00f0f000},
    { 0x00202200, 0x00a00080, 0x20200000, 0x00280000, 0x00a00000, 0x22200000, 0x00280008, 0x00202000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat15,3,3.000000},
  {barrierspat16,12,8, "Barrier15",-1,0,2,2,3,2,0x0,685,
    { 0x153d1f15, 0x0074f4d4, 0xd0f05000, 0x7d750000, 0xf4740000, 0x1f3d1500, 0x00757d5d, 0x50f0d050},
    { 0x00200200, 0x00200080, 0x00200000, 0x00200000, 0x00200000, 0x02200000, 0x00200008, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat17,6,5, "Barrier16",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00200200, 0x00200080, 0x00200000, 0x00200000, 0x00200000, 0x02200000, 0x00200008, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat17,3,6.528000},
  {barrierspat18,6,8, "Barrier16b",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00220200, 0x002000a0, 0x00200000, 0x00200000, 0x00200000, 0x02220000, 0x00200028, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat18,3,5.160000},
  {barrierspat19,6,8, "Barrier17",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00201200, 0x00600080, 0x10200000, 0x00240000, 0x00600000, 0x12200000, 0x00240008, 0x00201000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat19,3,5.880000},
  {barrierspat20,6,8, "Barrier18",0,0,1,2,1,2,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00211200, 0x00600090, 0x10200000, 0x00240000, 0x00600000, 0x12210000, 0x00240018, 0x00201000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat20,3,4.800000},
  {barrierspat21,8,8, "Barrier19",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat21,0,5.000000},
  {barrierspat22,8,8, "Barrier20",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat22,0,4.800000},
  {barrierspat23,16,2, "Barrier21",-2,0,2,3,4,3,0x0,686,
    { 0x153f1505, 0x00747575, 0x50f05040, 0x75740000, 0x75740000, 0x153f1505, 0x00747575, 0x50f05040},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat24,12,4, "Barrier22",-1,0,1,3,2,3,0x0,685,
    { 0x1f3f1f00, 0x0074fcfc, 0xd0f0d000, 0xfc740000, 0xfc740000, 0x1f3f1f00, 0x0074fcfc, 0xd0f0d000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat24,3,4.800000},
  {barrierspat25,28,8, "Barrier22a",-2,-1,2,4,4,5,0x2,723,
    { 0x557f5f55, 0x5475f5f5, 0xd4f45450, 0x7d755500, 0xf5755400, 0x5f7f5515, 0x55757d7d, 0x54f4d454},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat26,12,4, "Barrier22b",0,0,2,3,2,3,0x0,684,
    { 0x003f1f15, 0x0070f0f0, 0xd0f00000, 0x3d350000, 0xf0700000, 0x1f3f0000, 0x00353d3d, 0x00f0d050},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat26,3,4.800000},
  {barrierspat27,8,5, "Barrier23",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat27,0,4.800000},
  {barrierspat28,13,4, "Barrier24",0,-1,2,3,2,4,0x0,721,
    { 0x003faf3f, 0x80b0f0f0, 0xe8f00000, 0x3f3b0800, 0xf0b08000, 0xaf3f0000, 0x083b3f3f, 0x00f0e8f0},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat29,20,8, "Barrier25",-2,0,3,3,5,3,0x0,686,
    { 0x153f1f15, 0x0074f5f5, 0xd0f05040, 0x7d750000, 0xf5740000, 0x1f3f1505, 0x00757d7d, 0x50f0d050},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat30,8,5, "Barrier26",0,0,1,3,1,3,0x0,684,
    { 0x003f1f00, 0x0070f0f0, 0xd0f00000, 0x3c340000, 0xf0700000, 0x1f3f0000, 0x00343c3c, 0x00f0d000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat30,3,4.800000},
  {barrierspat31,9,4, "Barrier27",0,-1,2,1,2,2,0x2,721,
    { 0x00b8b8b8, 0xa0f0a000, 0xb8b80000, 0x2a3f2a00, 0xa0f0a000, 0xb8b80000, 0x2a3f2a00, 0x00b8b8b8},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat32,9,4, "Barrier28",0,-1,2,1,2,2,0x2,721,
    { 0x00747474, 0x50f05000, 0x74740000, 0x153f1500, 0x50f05000, 0x74740000, 0x153f1500, 0x00747474},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat33,4,8, "Barrier29",0,-1,1,0,1,1,0x2,721,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat33,0,3.000000},
  {barrierspat34,4,8, "Barrier30",0,0,1,1,1,1,0x2,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00140800, 0x00109000, 0x80500000, 0x18100000, 0x90100000, 0x08140000, 0x00101800, 0x00508000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat35,13,8, "Barrier31",0,-2,2,2,2,4,0x2,758,
    { 0x00fefefe, 0xf0f0f0a0, 0xfcfc0000, 0x3f3f3f02, 0xf0f0f000, 0xfefe0000, 0x3f3f3f2a, 0x00fcfcfe},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat36,11,8, "Barrier32",0,-1,2,2,2,3,0x2,721,
    { 0x003afefe, 0xc0f0e0a0, 0xfcb00000, 0x2f3f0f00, 0xe0f0c000, 0xfe3a0000, 0x0f3f2f2a, 0x00b0fcfc},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat37,12,8, "Barrier33",0,0,2,3,2,3,0x2,684,
    { 0x003e3f3f, 0x00f0f0e0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3e0000, 0x003f3f2f, 0x00f0f0f0},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat37,3,1.000000},
  {barrierspat38,9,8, "Barrier34",0,0,2,2,2,2,0x2,684,
    { 0x003e3e3e, 0x00f0f0a0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3e3e0000, 0x003f3f2a, 0x00f0f0f0},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat39,8,8, "Barrier34b",0,0,2,2,2,2,0x2,684,
    { 0x003f3f3c, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3c, 0x00f0f0f0},
    { 0x00250200, 0x00201090, 0x00600000, 0x10200000, 0x10200000, 0x02250000, 0x00201018, 0x00600000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat39,3,1.000000},
  {barrierspat40,15,4, "Barrier35",0,-1,2,3,2,4,0x2,721,
    { 0x00bbbfbf, 0xa0f0e0f0, 0xf8b80000, 0x2f3f2a00, 0xe0f0a000, 0xbfbb0000, 0x2a3f2f3f, 0x00b8f8f8},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat41,15,4, "Barrier36",0,-1,2,3,2,4,0x2,721,
    { 0x00777f7f, 0x50f0d0f0, 0xf4740000, 0x1f3f1500, 0xd0f05000, 0x7f770000, 0x153f1f3f, 0x0074f4f4},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat42,12,8, "Barrier37",0,0,2,3,2,3,0x2,684,
    { 0x003d3f3f, 0x00f0f0d0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3d0000, 0x003f3f1f, 0x00f0f0f0},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat42,0,0.443200},
  {barrierspat43,5,8, "Barrier38",0,0,1,2,1,2,0x2,684,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00190000, 0x00102010, 0x00900000, 0x20100000, 0x20100000, 0x00190000, 0x00102010, 0x00900000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat43,0,0.010000},
  {barrierspat44,19,8, "Barrier39",0,-3,3,1,3,4,0x2,795,
    { 0x00b0f8f8, 0xe0f08000, 0xbf3a0000, 0x0a3f2f2f, 0x80f0e0e0, 0xf8b00000, 0x2f3f0a00, 0x003abfbf},
    { 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100040, 0x00100000, 0x00100000, 0x00100100}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat45,19,8, "Barrier40",0,-3,3,1,3,4,0x2,795,
    { 0x0070f4f4, 0xd0f04000, 0x7f350000, 0x053f1f1f, 0x40f0d0d0, 0xf4700000, 0x1f3f0500, 0x00357f7f},
    { 0x00200000, 0x00200000, 0x02200000, 0x00200008, 0x00200080, 0x00200000, 0x00200000, 0x00200200}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat46,8,8, "Barrier41a",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat46,0,3.000000},
  {barrierspat47,8,8, "Barrier41b",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat47,0,3.000000},
  {barrierspat48,5,8, "Barrier42",0,0,1,2,1,2,0x0,684,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00180100, 0x00102040, 0x00900000, 0x20100000, 0x20100000, 0x01180000, 0x00102004, 0x00900000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat48,0,4.800000},
  {barrierspat49,14,8, "Barrier43",0,-1,2,3,2,4,0x2,721,
    { 0x003fbfbf, 0x80f0f0f0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3f0000, 0x0a3f3f3f, 0x00f0f8f8},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat50,11,8, "Barrier44",0,-1,2,2,2,3,0x2,721,
    { 0x003ffffe, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3e, 0x00f0fcfc},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat50,3,4.800000},
  {barrierspat51,12,8, "Barrier45",0,0,2,3,2,3,0x2,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00222000, 0x00a00020, 0x20200000, 0x00280000, 0x00a00000, 0x20220000, 0x00280020, 0x00202000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat52,12,8, "Barrier46",0,-1,2,2,2,3,0x0,721,
    { 0x00fffffe, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3e, 0x00fcfcfc},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat53,28,4, "Barrier47",0,-2,3,4,3,6,0x2,758,
    { 0x00bbbfbf, 0xa0f0e0f0, 0xfaba0000, 0x2f3f2a2a, 0xe0f0a0a0, 0xbfbb0000, 0x2a3f2f3f, 0x00bafafa},
    { 0x00110000, 0x00100010, 0x00100000, 0x00100000, 0x00100000, 0x00110000, 0x00100010, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat54,35,4, "Barrier48",-1,-2,3,4,4,6,0x2,759,
    { 0x55777f7f, 0x54f4d4f4, 0xf5755500, 0x5f7f5555, 0xd4f45454, 0x7f775500, 0x557f5f7f, 0x5575f5f5},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat55,8,4, "Barrier49",0,0,2,2,2,2,0x0,684,
    { 0x003c3f3f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0f0},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat56,6,4, "Barrier50",0,0,2,2,2,2,0x0,684,
    { 0x00303c3f, 0x00f0c000, 0xf0300000, 0x0f3f0000, 0xc0f00000, 0x3c300000, 0x003f0f03, 0x0030f0f0},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat57,6,8, "Barrier51",-1,0,0,3,1,3,0x0,685,
    { 0x2c3f0000, 0x00383c30, 0x00f0e000, 0xf0b00000, 0x3c380000, 0x003f2c00, 0x00b0f030, 0xe0f00000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat58,14,8, "Barrier52",0,-2,2,2,2,4,0x2,758,
    { 0x00fcffff, 0xf0f0f0c0, 0xfefe0000, 0x3f3f3f2b, 0xf0f0f0a0, 0xfffc0000, 0x3f3f3f0f, 0x00fefeff},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat58,0,1.000000},
  {barrierspat59,7,8, "Barrier53",0,-1,2,1,2,2,0x2,721,
    { 0x0030fcf4, 0xc0f0c000, 0xfc300000, 0x0d3f0f00, 0xc0f0c000, 0xfc300000, 0x0f3f0d00, 0x0030fc7c},
    { 0x00106400, 0x40904000, 0x64100000, 0x04180400, 0x40904000, 0x64100000, 0x04180400, 0x00106400}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat60,20,4, "Barrier54",-1,-1,2,3,3,4,0x2,722,
    { 0x5d7f7fff, 0x54f4fcf4, 0xf4f4d400, 0xff7f5700, 0xfcf45400, 0x7f7f5d00, 0x577fff7f, 0xd4f4f4fc},
    { 0x00260000, 0x00201020, 0x00600000, 0x10200000, 0x10200000, 0x00260000, 0x00201020, 0x00600000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat60,3,1.000000},
  {barrierspat61,8,8, "Barrier55",0,0,1,3,1,3,0x0,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat61,0,0.019600},
  {barrierspat62,12,8, "Barrier56",0,-1,2,2,2,3,0x2,721,
    { 0x007effff, 0xd0f0f0e0, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xff7e0000, 0x1f3f3f2f, 0x00f4fcfc},
    { 0x00249800, 0x80609000, 0x98600000, 0x18240800, 0x90608000, 0x98240000, 0x08241800, 0x00609800}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat62,3,1.000000},
  {barrierspat63,12,8, "Barrier56b",0,-1,2,2,2,3,0x2,721,
    { 0x007effff, 0xd0f0f0e0, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xff7e0000, 0x1f3f3f2f, 0x00f4fcfc},
    { 0x00249020, 0x80601000, 0x18600000, 0x10260800, 0x10608000, 0x90240000, 0x08261000, 0x00601820}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat63,3,1.000000},
  {barrierspat64,3,8, "Barrier57",0,0,1,1,1,1,0x0,684,
    { 0x003c3000, 0x00f03000, 0x30f00000, 0x303c0000, 0x30f00000, 0x303c0000, 0x003c3000, 0x00f03000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat64,3,0.010000},
  {barrierspat65,6,8, "Barrier58",-1,0,0,2,1,2,0x0,685,
    { 0x2e3f0000, 0x00383c38, 0x00f0e000, 0xf0b00000, 0x3c380000, 0x003f2e00, 0x00b0f0b0, 0xe0f00000},
    { 0x00190000, 0x00102010, 0x00900000, 0x20100000, 0x20100000, 0x00190000, 0x00102010, 0x00900000}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat65,0,0.019600},
  {barrierspat66,4,8, "Barrier59",-1,0,0,1,1,1,0x0,685,
    { 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x50,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat66,3,1.000000},
  {barrierspat67,12,4, "Barrier60a",0,-1,3,1,3,2,0x2,721,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x404,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat68,12,4, "Barrier60b",0,-1,3,1,3,2,0x2,721,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x41,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat69,36,4, "Barrier61",-2,-3,3,2,5,5,0xa,797,
    { 0xfefefefe, 0xfefefeaa, 0xffffffaa, 0xffffffff, 0xfefefefe, 0xfefefeaa, 0xffffffaa, 0xffffffff},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat70,10,8, "Barrier62",0,-2,2,1,2,3,0x0,758,
    { 0x0070fcfc, 0xd0f0c000, 0xff340000, 0x0f3f1f0f, 0xc0f0d0c0, 0xfc700000, 0x1f3f0f00, 0x0034ffff},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x45,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat71,16,8, "Barrier63",0,-1,3,2,3,3,0x2,721,
    { 0x00bfffff, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat72,16,8, "Barrier64",0,-1,3,2,3,3,0x2,721,
    { 0x00bfffff, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat72,3,1.000000},
  {barrierspat73,8,8, "Barrier65",0,-1,2,1,2,2,0x2,721,
    { 0x003cfc7c, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0x00f0fcf4},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x41,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat73,0,1.000000},
  {barrierspat74,36,8, "Barrier66",0,-2,5,3,5,5,0xa,758,
    { 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0x00ffffff},
    { 0x00200024, 0x00200000, 0x00200000, 0x01220000, 0x00200000, 0x00200000, 0x00220100, 0x00200060}
   , 0x40,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {barrierspat75,12,8, "Intrusion1",-2,-3,0,0,2,3,0x2,797,
    { 0xf0f00000, 0x3d3d0000, 0x003f3f15, 0x00f0f0f0, 0x003d3d3d, 0x00f0f050, 0xf0f00000, 0x3f3f0000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat75,0,0.000000},
  {barrierspat76,12,8, "Intrusion1b",-2,-3,0,0,2,3,0x2,797,
    { 0xf0f00000, 0x3d3d0000, 0x003f3f15, 0x00f0f0f0, 0x003d3d3d, 0x00f0f050, 0xf0f00000, 0x3f3f0000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat76,0,0.000000},
  {barrierspat77,12,8, "Intrusion1c",-2,-3,0,0,2,3,0x2,797,
    { 0xf0f00000, 0x3d3d0000, 0x003f3f15, 0x00f0f0f0, 0x003d3d3d, 0x00f0f050, 0xf0f00000, 0x3f3f0000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat77,0,1.000000},
  {barrierspat78,12,8, "Intrusion1d",-2,-3,0,0,2,3,0x2,797,
    { 0xf0f00000, 0x3d3d0000, 0x003f3f15, 0x00f0f0f0, 0x003d3d3d, 0x00f0f050, 0xf0f00000, 0x3f3f0000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat78,0,1.000000},
  {barrierspat79,11,8, "Intrusion2",-1,-3,1,0,2,3,0x2,796,
    { 0x40f0f000, 0xf4f00000, 0x3f3f0700, 0x003c7cfc, 0x00f0f4fc, 0xf0f04000, 0x7c3c0000, 0x073f3f00},
    { 0x00100000, 0x00100000, 0x00100200, 0x00100080, 0x00100008, 0x00100000, 0x00100000, 0x02100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat79,0,1.000000},
  {barrierspat80,11,8, "Intrusion3",-1,-3,1,0,2,3,0x2,796,
    { 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0x003cfc7c, 0x00f0fcf4, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00},
    { 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x00100800, 0x00108000, 0x80100000, 0x08100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat80,0,1.000000},
  {barrierspat81,12,8, "Intrusion4",0,-1,2,2,2,3,0x2,721,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00960800, 0x20109020, 0x80580000, 0x18102000, 0x90102000, 0x08960000, 0x20101820, 0x00588000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat81,0,1.000000},
  {barrierspat82,12,8, "Intrusion5a",0,-2,2,1,2,3,0x2,758,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff},
    { 0x00182000, 0x00902000, 0x20920000, 0x20180020, 0x20900020, 0x20180000, 0x00182000, 0x00922000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat82,0,1.000000},
  {barrierspat83,6,8, "Intrusion5b",0,-1,1,1,1,2,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00182000, 0x00902000, 0x20900000, 0x20180000, 0x20900000, 0x20180000, 0x00182000, 0x00902000}
   , 0x1200200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat83,0,3.000000},
  {barrierspat84,8,8, "Intrusion6",0,-1,2,1,2,2,0x0,721,
    { 0x003cfc7c, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0x00f0fcf4},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat84,0,0.000000},
  {barrierspat85,9,8, "Intrusion7a",0,0,2,2,2,2,0x0,684,
    { 0x003f3f3d, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3d, 0x00f0f0f0},
    { 0x00180020, 0x00102000, 0x00900000, 0x20120000, 0x20100000, 0x00180000, 0x00122000, 0x00900020}
   , 0x1400200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat85,0,0.010000},
  {barrierspat86,4,8, "Intrusion7b",0,0,1,1,1,1,0x0,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1200200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat86,0,3.000000},
  {barrierspat87,8,8, "Intrusion8",-1,0,1,2,2,2,0x0,685,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x22100800, 0x00188008, 0x80102000, 0x08900000, 0x80180000, 0x08102200, 0x00900880, 0x20108000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat87,0,1.600000},
  {barrierspat88,6,8, "Intrusion9",-1,0,1,1,2,1,0x0,685,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x20180000, 0x00182000, 0x00902000, 0x20900000, 0x20180000, 0x00182000, 0x00902000, 0x20900000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat88,0,1.000000},
  {barrierspat89,11,8, "Intrusion10",-2,-3,0,0,2,3,0x2,797,
    { 0xf0f00000, 0x3d3c0000, 0x003f3f05, 0x00f0f0f0, 0x003c3d3d, 0x00f0f040, 0xf0f00000, 0x3f3f0000},
    { 0x90100000, 0x08140000, 0x00101800, 0x00508000, 0x00140800, 0x00109000, 0x80500000, 0x18100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat89,0,3.000000},
  {barrierspat90,12,4, "Intrusion11",0,-1,3,1,3,2,0x2,721,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat90,0,1.600000},
  {barrierspat91,12,4, "Intrusion12a",0,-1,3,1,3,2,0x2,721,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat91,0,1.600000},
  {barrierspat92,9,8, "Intrusion12b",0,-1,2,1,2,2,0x0,721,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1200201,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat92,0,1.810000},
  {barrierspat93,18,8, "Intrusion13",0,-3,3,1,3,4,0x2,795,
    { 0x00b0fcfc, 0xe0f0c000, 0xff3b0000, 0x0f3f2f3f, 0xc0f0e0f0, 0xfcb00000, 0x2f3f0f00, 0x003bffff},
    { 0x00102000, 0x00900000, 0x20110000, 0x00180010, 0x00900010, 0x20100000, 0x00180000, 0x00112000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat93,0,0.016000},
  {barrierspat94,14,8, "Intrusion14",0,-1,3,2,3,3,0x2,721,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00148800, 0x80109000, 0x88500000, 0x18100800, 0x90108000, 0x88140000, 0x08101800, 0x00508800}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat94,0,3.000000},
  {barrierspat95,9,8, "Intrusion15",0,-1,2,1,2,2,0x0,721,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00102408, 0x00904000, 0x60100000, 0x06180000, 0x40900000, 0x24100000, 0x00180600, 0x00106080}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat95,0,1.000000},
  {barrierspat96,9,8, "Intrusion16",0,0,2,2,2,2,0x0,684,
    { 0x003f3f37, 0x00f0f0f0, 0xf0f00000, 0x3d3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3d3f, 0x00f0f070},
    { 0x00100002, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100002, 0x00100000}
   , 0x1000200,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat97,9,8, "Intrusion17",0,0,2,2,2,2,0x0,684,
    { 0x003f3f37, 0x00f0f0f0, 0xf0f00000, 0x3d3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3d3f, 0x00f0f070},
    { 0x00100022, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120002, 0x00100020}
   , 0x1000200,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat98,15,8, "Intrusion18",-2,0,2,2,4,2,0x0,686,
    { 0x2f3f2f1d, 0x00b9fffd, 0xe0f0e0d0, 0xffb90000, 0xffb90000, 0x2f3f2f1d, 0x00b9fffd, 0xe0f0e0d0},
    { 0x00100008, 0x00100200, 0x00100080, 0x02100000, 0x02100000, 0x00100008, 0x00100200, 0x00100080}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat99,12,8, "Intrusion19",-1,0,2,2,3,2,0x0,685,
    { 0x3f3f2f1d, 0x00bcfcfc, 0xe0f0f000, 0xfff90000, 0xfcbc0000, 0x2f3f3f00, 0x00f9fffd, 0xf0f0e0d0},
    { 0x20100008, 0x00180000, 0x00102000, 0x02900000, 0x00180000, 0x00102000, 0x00900200, 0x20100080}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat99,0,0.000000},
  {barrierspat100,6,8, "Intrusion20",0,-1,1,1,1,2,0x0,721,
    { 0x00bcfc00, 0xe0f0f000, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xfcbc0000, 0x2c3c3c00, 0x00f8fc00},
    { 0x00106000, 0x40900000, 0x24100000, 0x00180400, 0x00904000, 0x60100000, 0x04180000, 0x00102400}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat100,0,0.610000},
  {barrierspat101,9,8, "Intrusion21",0,0,2,2,2,2,0x0,684,
    { 0x003f3f1f, 0x00f0f0f0, 0xf0f00000, 0x3f3d0000, 0xf0f00000, 0x3f3f0000, 0x003d3f3f, 0x00f0f0d0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat101,0,0.000000},
  {barrierspat102,9,8, "Intrusion21b",-1,0,1,2,2,2,0x0,685,
    { 0x2b3f1f00, 0x0078f8fc, 0xd0f0a000, 0xbcb40000, 0xf8780000, 0x1f3f2b00, 0x00b4bcfc, 0xa0f0d000},
    { 0x02100000, 0x00100008, 0x00100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080, 0x00100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat102,0,0.000000},
  {barrierspat103,9,8, "Intrusion22",0,0,2,2,2,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x1000200,10.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat103,0,0.000000},
  {barrierspat104,6,8, "Intrusion23",0,0,1,2,1,2,0x2,684,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x1000200,10.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat104,0,3.000000},
  {barrierspat105,6,8, "Intrusion24",-1,0,0,2,1,2,0x2,685,
    { 0x3f3f0000, 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0, 0xf0f00000},
    { 0x10100000, 0x00140000, 0x00101000, 0x00500000, 0x00140000, 0x00101000, 0x00500000, 0x10100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat105,0,0.000000},
  {barrierspat106,16,8, "Intrusion25",-1,-2,2,1,3,3,0x2,759,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x04900000, 0x20100400, 0x00184000, 0x40102000, 0x04102000, 0x00900400, 0x20104000, 0x40180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat107,16,8, "Intrusion26",-1,-2,2,1,3,3,0x2,759,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat108,12,8, "Intrusion27",0,0,3,2,3,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat109,13,8, "Intrusion28",0,-2,3,1,3,3,0x2,758,
    { 0x0030fcfc, 0xc0f0c000, 0xfd300000, 0x0f3f0f07, 0xc0f0c040, 0xfc300000, 0x0f3f0f00, 0x0030fdff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat109,0,3.000000},
  {barrierspat110,24,8, "Intrusion29",-2,-1,3,2,5,3,0x0,723,
    { 0xaafeffff, 0xfafafaea, 0xfcfca8a8, 0xbfbfbf00, 0xfafafa00, 0xfffeaaaa, 0xbfbfbfaf, 0xa8fcfcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat111,24,8, "Intrusion30",-2,-1,3,2,5,3,0x0,723,
    { 0xaafeffff, 0xfafafaea, 0xfcfca8a8, 0xbfbfbf00, 0xfafafa00, 0xfffeaaaa, 0xbfbfbfaf, 0xa8fcfcfc},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat111,0,1.000000},
  {barrierspat112,13,8, "Intrusion31",-1,-1,3,1,4,2,0x0,722,
    { 0xa8fcfcfc, 0xf8f8f800, 0xfcfca800, 0xbfbfbf00, 0xf8f8f800, 0xfcfca800, 0xbfbfbf00, 0xa8fcfcfc},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat112,0,0.000000},
  {barrierspat113,10,8, "Intrusion32",-1,-1,2,1,3,2,0x0,722,
    { 0xa8fcfc30, 0xf8f8f800, 0xfcfca800, 0xbcbfbc00, 0xf8f8f800, 0xfcfca800, 0xbcbfbc00, 0xa8fcfc30},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat113,0,0.000000},
  {barrierspat114,10,8, "Intrusion33",-1,-1,2,1,3,2,0x0,722,
    { 0xb8fcfc30, 0xf8fcf800, 0xfcfcb800, 0xbcffbc00, 0xf8fcf800, 0xfcfcb800, 0xbcffbc00, 0xb8fcfc30},
    { 0x10980000, 0x20142000, 0x00981000, 0x20502000, 0x20142000, 0x00981000, 0x20502000, 0x10980000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat115,10,8, "Intrusion34",-1,-1,2,1,3,2,0x0,722,
    { 0xb8fcfc30, 0xf8fcf800, 0xfcfcb800, 0xbcffbc00, 0xf8fcf800, 0xfcfcb800, 0xbcffbc00, 0xb8fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat115,0,1.000000},
  {barrierspat116,22,8, "Intrusion35",-1,-3,3,1,4,4,0xa,796,
    { 0xc0f0fcfc, 0xfcf0c000, 0xff3f0f00, 0x0f3fffff, 0xc0f0fcfc, 0xfcf0c000, 0xff3f0f00, 0x0f3fffff},
    { 0x80108800, 0x88108000, 0x88100800, 0x08108800, 0x80108800, 0x88108000, 0x88100800, 0x08108800}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat116,0,1.000000},
  {barrierspat117,5,8, "Intrusion36",-1,0,1,1,2,1,0x0,685,
    { 0x0c3c3400, 0x00f07c00, 0x70f0c000, 0xf43c0000, 0x7cf00000, 0x343c0c00, 0x003cf400, 0xc0f07000},
    { 0x08102000, 0x00900800, 0x20108000, 0x80180000, 0x08900000, 0x20100800, 0x00188000, 0x80102000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat117,0,1.000000},
  {barrierspat118,5,8, "Intrusion37",-1,0,1,1,2,1,0x0,685,
    { 0x0c3c2c00, 0x00b0fc00, 0xe0f0c000, 0xfc380000, 0xfcb00000, 0x2c3c0c00, 0x0038fc00, 0xc0f0e000},
    { 0x08100800, 0x00108800, 0x80108000, 0x88100000, 0x88100000, 0x08100800, 0x00108800, 0x80108000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat118,0,1.000000},
  {barrierspat119,3,8, "Intrusion38",-1,-1,0,0,1,1,0x2,722,
    { 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000, 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000},
    { 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x00100800, 0x00108000, 0x80100000, 0x08100000}
   , 0x1000200,5.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat119,0,1.000000},
  {barrierspat120,8,8, "Intrusion39",-1,0,1,2,2,2,0x0,685,
    { 0x0d3f2f00, 0x00b0fcf4, 0xe0f0c000, 0xfc380000, 0xfcb00000, 0x2f3f0d00, 0x0038fc7c, 0xc0f0e000},
    { 0x08100200, 0x00100880, 0x00108000, 0x80100000, 0x08100000, 0x02100800, 0x00108008, 0x80100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat120,0,1.000000},
  {barrierspat121,3,8, "Intrusion40",-1,0,0,1,1,1,0x0,685,
    { 0x3c300000, 0x003c0c00, 0x0030f000, 0xc0f00000, 0x0c3c0000, 0x00303c00, 0x00f0c000, 0xf0300000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat121,0,0.610000},
  {barrierspat122,4,8, "Intrusion41",-1,0,0,1,1,1,0x0,685,
    { 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat122,0,0.010000},
  {barrierspat123,15,8, "Intrusion42",-1,-2,2,1,3,3,0x2,759,
    { 0xe8f8fcfc, 0xfcf8e800, 0xffbfac00, 0xafbfff3f, 0xe8f8fcf0, 0xfcf8e800, 0xffbfaf00, 0xacbfffff},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat123,0,0.970000},
  {barrierspat124,9,8, "Intrusion43",-1,-3,1,0,2,3,0x0,796,
    { 0xf0f0e000, 0xfcbc0000, 0x2f3f3c00, 0x00f8fc3c, 0x00bcfcf0, 0xe0f0f000, 0xfcf80000, 0x3c3f2f00},
    { 0x90900000, 0x28140000, 0x00181800, 0x0050a000, 0x00142800, 0x00909000, 0xa0500000, 0x18180000}
   , 0x1000200,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat124,0,0.970000},
  {barrierspat125,6,8, "Intrusion44a",0,-2,1,0,1,2,0x0,758,
    { 0x00f0e000, 0xf0b00000, 0x2f3f0000, 0x00383c3c, 0x00b0f0f0, 0xe0f00000, 0x3c380000, 0x003f2f00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat125,0,2.014000},
  {barrierspat126,10,8, "Intrusion44b",-1,-2,1,1,2,3,0x0,759,
    { 0xf0f8e000, 0xfcbc2000, 0x2fbf3f00, 0x20f8fcfc, 0x20bcfcfc, 0xe0f8f000, 0xfcf82000, 0x3fbf2f00},
    { 0x20900000, 0x20180000, 0x00182000, 0x00902000, 0x00182000, 0x00902000, 0x20900000, 0x20180000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat126,0,2.014000},
  {barrierspat127,12,8, "Intrusion45",0,-2,2,1,2,3,0x2,758,
    { 0x00f8fcfc, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0x00bfffff},
    { 0x00102000, 0x00900000, 0x20120000, 0x00180020, 0x00900020, 0x20100000, 0x00180000, 0x00122000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat127,0,1.600000},
  {barrierspat128,20,4, "Intrusion46",0,-2,3,2,3,4,0x2,758,
    { 0x00fdfffd, 0xf0f0f0d0, 0xfffd0000, 0x3f3f3f1d, 0xf0f0f0d0, 0xfffd0000, 0x3f3f3f1d, 0x00fdfffd},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000200,10.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat128,0,1.000000},
  {barrierspat129,12,8, "Intrusion47",-2,0,0,4,2,4,0x2,686,
    { 0x2f3f0000, 0x00383c3f, 0x00f0e000, 0xf0b00000, 0x3c380000, 0x003f2f03, 0x00b0f0f0, 0xe0f00000},
    { 0x00100000, 0x00100002, 0x00100000, 0x00100000, 0x00100000, 0x00100002, 0x00100000, 0x00100000}
   , 0x1000200,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat129,0,0.010000},
  {barrierspat130,11,8, "Intrusion48",-2,0,1,2,3,2,0x0,686,
    { 0x3f3f3f00, 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc, 0xf0f0f000},
    { 0x00100200, 0x00100280, 0x00100080, 0x00100000, 0x02100000, 0x02100008, 0x00100008, 0x00100000}
   , 0x1000200,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {barrierspat131,6,8, "Intrusion49",0,-1,1,1,1,2,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat131,0,1.600000},
  {barrierspat132,8,8, "Intrusion50",-1,0,1,2,2,2,0x2,685,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1000201,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat132,0,3.000000},
  {barrierspat133,7,4, "Intrusion51a",0,-1,2,1,2,2,0x0,721,
    { 0x0030fcfc, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0x0030fcfc},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat133,0,5.000000},
  {barrierspat134,7,4, "Intrusion51b",-1,-1,1,1,2,2,0x0,722,
    { 0x30fcfc00, 0xf0fcf000, 0xfcfc3000, 0x3cfc3c00, 0xf0fcf000, 0xfcfc3000, 0x3cfc3c00, 0x30fcfc00},
    { 0x10982000, 0x20942000, 0x20981000, 0x20582000, 0x20942000, 0x20981000, 0x20582000, 0x10982000}
   , 0x1000204,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat134,0,5.000000},
  {barrierspat135,9,8, "Intrusion52",-1,0,1,2,2,2,0x0,685,
    { 0x3d3f3f00, 0x00fcfcf4, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3d00, 0x00fcfc7c, 0xf0f0f000},
    { 0x20100800, 0x00188000, 0x80102000, 0x08900000, 0x80180000, 0x08102000, 0x00900800, 0x20108000}
   , 0x1000200,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat135,0,0.000000},
  {barrierspat136,6,8, "Intrusion53",-1,0,0,2,1,2,0x0,685,
    { 0x3f3f0000, 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0, 0xf0f00000},
    { 0x20180000, 0x00182000, 0x00902000, 0x20900000, 0x20180000, 0x00182000, 0x00902000, 0x20900000}
   , 0x1000200,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat136,0,1.000000},
  {barrierspat137,11,8, "Intrusion54",-1,-2,1,1,2,3,0x0,759,
    { 0xf0f8e800, 0xfcbca000, 0xafbf3f00, 0x28f8fcfc, 0xa0bcfcfc, 0xe8f8f000, 0xfcf82800, 0x3fbfaf00},
    { 0x20900000, 0x20180000, 0x00182000, 0x00902000, 0x00182000, 0x00902000, 0x20900000, 0x20180000}
   , 0x1000200,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperbarrierspat137,0,0.229120},
  {barrierspat138,6,4, "Nonterritory1",0,0,1,2,1,2,0x0,684,
    { 0x00373b00, 0x00f090f0, 0xb0700000, 0x183c0000, 0x90f00000, 0x3b370000, 0x003c183c, 0x0070b000},
    { 0x00112200, 0x00900090, 0x20100000, 0x00180000, 0x00900000, 0x22110000, 0x00180018, 0x00102000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat138,0,0.000000},
  {barrierspat139,6,8, "Nonterritory1b",0,0,1,2,1,2,0x0,684,
    { 0x00373b00, 0x00f090f0, 0xb0700000, 0x183c0000, 0x90f00000, 0x3b370000, 0x003c183c, 0x0070b000},
    { 0x00102200, 0x00900080, 0x20100000, 0x00180000, 0x00900000, 0x22100000, 0x00180008, 0x00102000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat139,0,0.000000},
  {barrierspat140,6,8, "Nonterritory1c",0,0,1,2,1,2,0x0,684,
    { 0x003b3700, 0x00f060f0, 0x70b00000, 0x243c0000, 0x60f00000, 0x373b0000, 0x003c243c, 0x00b07000},
    { 0x00201100, 0x00600040, 0x10200000, 0x00240000, 0x00600000, 0x11200000, 0x00240004, 0x00201000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat140,3,0.000000},
  {barrierspat141,7,8, "Nonterritory2",0,-2,2,0,2,2,0x0,758,
    { 0x0070f040, 0xd0f00000, 0x3d340000, 0x003c1d07, 0x00f0d040, 0xf0700000, 0x1d3c0000, 0x00343d07},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180001, 0x00900000, 0x20100000, 0x00180000, 0x00102001}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat141,0,0.000000},
  {barrierspat142,7,8, "Nonterritory3",0,-2,2,0,2,2,0x0,758,
    { 0x00b0f080, 0xe0f00000, 0x3e380000, 0x003c2e0b, 0x00f0e080, 0xf0b00000, 0x2e3c0000, 0x00383e0b},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240002, 0x00600000, 0x10200000, 0x00240000, 0x00201002}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat142,3,0.000000},
  {barrierspat143,4,8, "Nonterritory4",0,-1,1,0,1,1,0x8,721,
    { 0x0070b000, 0x90f00000, 0x38340000, 0x003c1800, 0x00f09000, 0xb0700000, 0x183c0000, 0x00343800},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat143,0,0.000000},
  {barrierspat144,5,8, "Nonterritory5",0,-1,2,0,2,1,0x8,721,
    { 0x0030f070, 0xc0f00000, 0x3c300000, 0x003f0d00, 0x00f0c000, 0xf0300000, 0x0d3f0000, 0x00303c34},
    { 0x00100020, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120000, 0x00100020}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat144,0,0.000000},
  {barrierspat145,5,8, "Nonterritory6",0,-1,2,0,2,1,0x8,721,
    { 0x0030f0b0, 0xc0f00000, 0x3c300000, 0x003f0e00, 0x00f0c000, 0xf0300000, 0x0e3f0000, 0x00303c38},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat145,3,0.000000},
  {barrierspat146,5,8, "Nonterritory7",0,-1,1,1,1,2,0x2,721,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat146,3,1.000000},
  {barrierspat147,5,8, "Nonterritory7b",0,-1,1,1,1,2,0x2,721,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat147,3,2.680000},
  {barrierspat148,7,8, "Nonterritory7c",0,-2,1,1,1,3,0x2,758,
    { 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat148,3,3.000000},
  {barrierspat149,6,8, "Nonterritory8",0,-1,1,1,1,2,0x2,721,
    { 0x007cf800, 0xd0f0b000, 0xbcf40000, 0x383c1c00, 0xb0f0d000, 0xf87c0000, 0x1c3c3800, 0x00f4bc00},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat149,3,1.000000},
  {barrierspat150,6,8, "Nonterritory8b",0,-1,1,1,1,2,0x2,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat150,3,2.800000},
  {barrierspat151,9,8, "Nonterritory9",0,-3,2,0,2,3,0x0,795,
    { 0x00f0c0c0, 0xf0300000, 0x0f3f0000, 0x00303f3e, 0x0030f0f0, 0xc0f00000, 0x3f300000, 0x003f0f0e},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat151,3,1.000000},
  {barrierspat152,9,8, "Nonterritory10",-2,0,0,2,2,2,0x0,686,
    { 0x3f3f0000, 0x003f3f3d, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3d, 0x00f0f0f0, 0xf0f00000},
    { 0x00260000, 0x00201020, 0x00600000, 0x10200000, 0x10200000, 0x00260000, 0x00201020, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat152,3,1.000000},
  {barrierspat153,9,8, "Nonterritory11",0,-1,2,1,2,2,0x2,721,
    { 0x00bcfcfc, 0xe0f0f000, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xfcbc0000, 0x2f3f3f00, 0x00f8fcfc},
    { 0x00186020, 0x40902000, 0x24900000, 0x201a0400, 0x20904000, 0x60180000, 0x041a2000, 0x00902420}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat153,0,1.600000},
  {barrierspat154,3,4, "Nonterritory12",-1,0,0,1,1,1,0x0,685,
    { 0x303c0000, 0x003c3000, 0x00f03000, 0x30f00000, 0x303c0000, 0x003c3000, 0x00f03000, 0x30f00000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat154,0,0.000000},
  {barrierspat155,3,4, "Nonterritory13",-1,0,0,1,1,1,0x0,685,
    { 0x303c0000, 0x003c3000, 0x00f03000, 0x30f00000, 0x303c0000, 0x003c3000, 0x00f03000, 0x30f00000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat155,3,0.000000},
  {barrierspat156,5,8, "Nonterritory14",-2,0,0,1,2,1,0x0,686,
    { 0x3c3c0000, 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000, 0xf0f00000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat156,0,1.000000},
  {barrierspat157,7,8, "Nonterritory15",-3,0,0,1,3,1,0x8,687,
    { 0x3c3c0000, 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000, 0xf0f00000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat157,0,1.000000},
  {barrierspat158,7,8, "Nonterritory16",-1,-1,2,0,3,1,0x8,722,
    { 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00, 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c},
    { 0x00200060, 0x00200000, 0x00200000, 0x00220100, 0x00200000, 0x00200000, 0x01220000, 0x00200024}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat158,3,1.000000},
  {barrierspat159,6,8, "Nonterritory17",-1,0,1,1,2,1,0x8,685,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat159,3,3.000000},
  {barrierspat160,4,8, "Nonterritory17b",0,0,1,1,1,1,0x8,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat160,0,3.000000},
  {barrierspat161,8,8, "Nonterritory18a",0,-1,1,2,1,3,0x2,721,
    { 0x00fef700, 0xf0f070e0, 0x7cfc0000, 0x343c3c00, 0x70f0f000, 0xf7fe0000, 0x3c3c342c, 0x00fc7c00},
    { 0x00240100, 0x00201040, 0x00600000, 0x10200000, 0x10200000, 0x01240000, 0x00201004, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat161,3,3.000000},
  {barrierspat162,10,8, "Nonterritory18b",0,-2,1,2,1,4,0x2,758,
    { 0x00fef700, 0xf0f070e0, 0x7fff0000, 0x343c3c3c, 0x70f0f0f0, 0xf7fe0000, 0x3c3c342c, 0x00ff7f00},
    { 0x00240100, 0x00201040, 0x00600000, 0x10200000, 0x10200000, 0x01240000, 0x00201004, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat162,3,3.000000},
  {barrierspat163,5,8, "Nonterritory19",-1,-1,1,0,2,1,0x0,647,
    { 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00, 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat163,3,1.600000},
  {barrierspat164,4,8, "Nonterritory20",0,-1,1,0,1,1,0x0,647,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat164,3,1.600000},
  {barrierspat165,5,8, "Nonterritory21",-1,-1,1,0,2,1,0x0,722,
    { 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00, 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat165,3,1.600000},
  {barrierspat166,4,8, "Nonterritory22",-1,-1,1,0,2,1,0x0,647,
    { 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00, 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat166,3,1.000000},
  {barrierspat167,2,4, "Nonterritory23",0,0,0,1,0,1,0x0,684,
    { 0x003c0000, 0x00303000, 0x00f00000, 0x30300000, 0x30300000, 0x003c0000, 0x00303000, 0x00f00000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat167,0,0.000000},
  {barrierspat168,2,4, "Nonterritory24",0,0,0,1,0,1,0x0,684,
    { 0x003c0000, 0x00303000, 0x00f00000, 0x30300000, 0x30300000, 0x003c0000, 0x00303000, 0x00f00000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,2,NULL,autohelperbarrierspat168,3,0.000000},
  {barrierspat169,4,8, "Nonterritory25",0,0,1,1,1,1,0x8,684,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat169,3,1.810000},
  {barrierspat170,7,8, "Nonterritory26",0,-2,2,0,2,2,0x0,758,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3c0000, 0x003f3f0c, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0x003c3f3c},
    { 0x00208060, 0x80200000, 0x09200000, 0x00220904, 0x00208040, 0x80200000, 0x09220000, 0x00200924}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat170,3,1.000000},
  {barrierspat171,3,4, "Nonterritory27",0,0,0,2,0,2,0x0,684,
    { 0x003f0000, 0x00303030, 0x00f00000, 0x30300000, 0x30300000, 0x003f0000, 0x00303030, 0x00f00000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat171,0,1.000000},
  {barrierspat172,4,8, "Nonterritory28",0,0,1,1,1,1,0x0,684,
    { 0x003c1c00, 0x0070f000, 0xd0f00000, 0x3c340000, 0xf0700000, 0x1c3c0000, 0x00343c00, 0x00f0d000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat172,0,1.000000},
  {barrierspat173,7,8, "Nonterritory29",0,-1,1,2,1,3,0x2,721,
    { 0x003fff00, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0x00f0fc00},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat173,0,1.600000},
  {barrierspat174,7,8, "Nonterritory30",0,-1,1,2,1,3,0x2,721,
    { 0x003fff00, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0x00f0fc00},
    { 0x00284000, 0x40202000, 0x04a00000, 0x20200400, 0x20204000, 0x40280000, 0x04202000, 0x00a00400}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat174,3,1.960000},
  {barrierspat175,9,8, "Nonterritory31",0,-1,1,3,1,4,0x2,721,
    { 0x003fff00, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0x00f0fc00},
    { 0x002a4000, 0x40202020, 0x04a00000, 0x20200400, 0x20204000, 0x402a0000, 0x04202020, 0x00a00400}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat175,3,1.600000},
  {barrierspat176,9,4, "Nonterritory32",0,-2,2,0,2,2,0x0,758,
    { 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0x003f3f3f},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100002, 0x00100000, 0x00100000, 0x00100000, 0x00100002}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat176,0,1.000000},
  {barrierspat177,9,4, "Nonterritory33",0,0,2,2,2,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00210002, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200012, 0x00200000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat177,3,1.600000},
  {barrierspat178,9,8, "Nonterritory34",0,-2,2,0,2,2,0x2,758,
    { 0x00f0f070, 0xf0f00000, 0x3f3d0000, 0x003f3d1f, 0x00f0f0d0, 0xf0f00000, 0x3d3f0000, 0x003d3f37},
    { 0x00109010, 0x80500000, 0x18100000, 0x00150800, 0x00508000, 0x90100000, 0x08150000, 0x00101810}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat178,0,1.497760},
  {barrierspat179,6,8, "Nonterritory35",0,-2,1,0,1,2,0x0,758,
    { 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat179,0,1.600000},
  {barrierspat180,7,8, "Nonterritory36",0,0,2,2,2,2,0x2,684,
    { 0x003c3f38, 0x00f0f0c0, 0xf0f00000, 0x3e3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3e0c, 0x00f0f0b0},
    { 0x00180600, 0x00106080, 0x40900000, 0x24100000, 0x60100000, 0x06180000, 0x00102408, 0x00904000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat180,0,0.610000},
  {barrierspat181,7,8, "Nonterritory37",0,0,2,2,2,2,0x2,684,
    { 0x003c3f34, 0x00f0f0c0, 0xf0f00000, 0x3d3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3d0c, 0x00f0f070},
    { 0x00200900, 0x00208040, 0x80200000, 0x08200000, 0x80200000, 0x09200000, 0x00200804, 0x00208000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat181,3,0.970000},
  {barrierspat182,8,8, "Nonterritory38",0,0,2,2,2,2,0x0,684,
    { 0x003c3f3f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0f0},
    { 0x00180601, 0x00106080, 0x40900000, 0x24100000, 0x60100000, 0x06180000, 0x00102409, 0x00904000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat182,0,3.000000},
  {barrierspat183,9,8, "Nonterritory39",0,0,2,2,2,2,0x0,684,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00210902, 0x00208050, 0x80200000, 0x08200000, 0x80200000, 0x09210000, 0x00200816, 0x00208000}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat183,3,3.000000},
  {barrierspat184,12,8, "Nonterritory40",0,-1,3,1,3,2,0x2,721,
    { 0x00bcfcfc, 0xe0f0f000, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xfcbc0000, 0x2f3f3f00, 0x00f8fcfc},
    { 0x00206000, 0x40a00000, 0x24200000, 0x00280400, 0x00a04000, 0x60200000, 0x04280000, 0x00202400}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat184,3,1.000000},
  {barrierspat185,10,8, "Nonterritory41",0,-2,2,1,2,3,0x0,758,
    { 0x00b8fcf0, 0xe0f0e000, 0xffb80000, 0x2c3f2f0f, 0xe0f0e0c0, 0xfcb80000, 0x2f3f2c00, 0x00b8ff3f},
    { 0x00100420, 0x00104000, 0x42100000, 0x04120008, 0x40100080, 0x04100000, 0x00120400, 0x00104220}
   , 0x80000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,3,NULL,autohelperbarrierspat185,0,1.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0,NULL,NULL,0,0.0}
};

struct pattern_db barrierspat_db = {
  -1,
  0,
  barrierspat
 , NULL
};
