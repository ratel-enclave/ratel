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

static struct patval owl_attackpat0[] = {
  {758,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat1[] = {
  {719,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat2[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat3[] = {
  {684,1}
};

static struct patval owl_attackpat4[] = {
  {685,1},	{647,1},	{610,1}
};

static struct patval owl_attackpat5[] = {
  {720,1},	{721,1},	{609,3},	{610,3}
};

static struct patval owl_attackpat6[] = {
  {721,1},	{685,1}
};

static struct patval owl_attackpat7[] = {
  {757,1},	{684,1},	{720,3}
};

static struct patval owl_attackpat8[] = {
  {645,1},	{610,1},	{684,1}
};

static struct patval owl_attackpat9[] = {
  {684,1}
};

static struct patval owl_attackpat10[] = {
  {684,1},	{720,3},	{721,3}
};

static struct patval owl_attackpat11[] = {
  {684,1}
};

static struct patval owl_attackpat12[] = {
  {685,1},	{648,1},	{647,1}
};

static struct patval owl_attackpat13[] = {
  {684,1},	{685,3}
};

static struct patval owl_attackpat14[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat15[] = {
  {648,1},	{682,1},	{645,3}
};

static struct patval owl_attackpat16[] = {
  {687,1},	{684,1}
};

static struct patval owl_attackpat17[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat18[] = {
  {647,1},	{685,1},	{722,1},	{610,1}
};

static struct patval owl_attackpat19[] = {
  {684,1},	{722,1},	{721,3},	{610,3}
};

static struct patval owl_attackpat20[] = {
  {722,1}
};

static struct patval owl_attackpat21[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat22[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat23[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat24[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat25[] = {
  {758,1}
};

static struct patval owl_attackpat26[] = {
  {684,1},	{722,3},	{721,3}
};

static struct patval owl_attackpat27[] = {
  {684,1},	{722,3},	{721,3},	{758,3},
  {759,3}
};

static struct patval owl_attackpat28[] = {
  {684,1},	{574,1},	{721,3},	{758,3},
  {722,3},	{759,3}
};

static struct patval owl_attackpat29[] = {
  {684,1},	{683,1}
};

static struct patval owl_attackpat30[] = {
  {684,1}
};

static struct patval owl_attackpat31[] = {
  {684,1},	{648,3},	{647,3}
};

static struct patval owl_attackpat32[] = {
  {684,1},	{647,3},	{794,3},	{648,3},
  {795,3}
};

static struct patval owl_attackpat33[] = {
  {759,1}
};

static struct patval owl_attackpat34[] = {
  {647,1},	{685,1},	{648,3}
};

static struct patval owl_attackpat35[] = {
  {721,1},	{758,1},	{648,3},	{757,3}
};

static struct patval owl_attackpat36[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat37[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat38[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat39[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat40[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat41[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat42[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat43[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat44[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat45[] = {
  {648,1},	{684,1},	{610,1}
};

static struct patval owl_attackpat46[] = {
  {758,1}
};

static struct patval owl_attackpat47[] = {
  {685,1},	{648,1}
};

static struct patval owl_attackpat48[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat49[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat50[] = {
  {646,1},	{611,1},	{647,1},	{685,1},
  {757,3},	{720,3}
};

static struct patval owl_attackpat51[] = {
  {686,1},	{648,1},	{649,3},	{758,3}
};

static struct patval owl_attackpat52[] = {
  {685,1}
};

static struct patval owl_attackpat53[] = {
  {721,1},	{685,1},	{572,3},	{573,3},
  {609,3}
};

static struct patval owl_attackpat54[] = {
  {685,1},	{609,3},	{572,3},	{646,3}
};

static struct patval owl_attackpat55[] = {
  {685,1},	{609,3},	{646,3}
};

static struct patval owl_attackpat56[] = {
  {646,1},	{685,1}
};

static struct patval owl_attackpat57[] = {
  {759,1}
};

static struct patval owl_attackpat58[] = {
  {794,1}
};

static struct patval owl_attackpat59[] = {
  {648,1}
};

static struct patval owl_attackpat60[] = {
  {649,1}
};

static struct patval owl_attackpat61[] = {
  {684,1},	{720,1},	{683,3}
};

static struct patval owl_attackpat62[] = {
  {683,1},	{720,1},	{684,1}
};

static struct patval owl_attackpat63[] = {
  {684,1},	{685,1},	{683,3},	{686,3}
};

static struct patval owl_attackpat64[] = {
  {647,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat65[] = {
  {684,1},	{722,1},	{720,1},	{611,3},
  {758,3}
};

static struct patval owl_attackpat66[] = {
  {684,1},	{721,3},	{758,3},	{648,3},
  {647,3}
};

static struct patval owl_attackpat67[] = {
  {684,1}
};

static struct patval owl_attackpat68[] = {
  {684,1}
};

static struct patval owl_attackpat69[] = {
  {684,1}
};

static struct patval owl_attackpat70[] = {
  {722,1},	{759,1}
};

static struct patval owl_attackpat71[] = {
  {722,1},	{759,1}
};

static struct patval owl_attackpat72[] = {
  {758,1},	{720,1},	{684,1},	{757,3},
  {683,3}
};

static struct patval owl_attackpat73[] = {
  {648,1},	{645,3},	{682,3},	{608,3}
};

static struct patval owl_attackpat74[] = {
  {648,1},	{645,3},	{608,3},	{682,3}
};

static struct patval owl_attackpat75[] = {
  {648,1},	{645,3},	{682,3}
};

static struct patval owl_attackpat76[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat77[] = {
  {684,1}
};

static struct patval owl_attackpat78[] = {
  {648,1},	{684,1},	{682,3},	{756,3},
  {719,3}
};

static struct patval owl_attackpat79[] = {
  {684,1},	{685,1},	{719,3},	{645,3},
  {682,3}
};

static struct patval owl_attackpat80[] = {
  {684,1}
};

static struct patval owl_attackpat81[] = {
  {684,1}
};

static struct patval owl_attackpat82[] = {
  {684,1}
};

static struct patval owl_attackpat83[] = {
  {684,1},	{680,3},	{717,3},	{643,3}
};

static struct patval owl_attackpat84[] = {
  {684,1}
};

static struct patval owl_attackpat85[] = {
  {684,1},	{611,1}
};

static struct patval owl_attackpat86[] = {
  {758,1},	{684,1},	{759,3}
};

static struct patval owl_attackpat87[] = {
  {684,1},	{687,3},	{650,3},	{724,3},
  {761,3}
};

static struct patval owl_attackpat88[] = {
  {721,1},	{685,1},	{722,3}
};

static struct patval owl_attackpat89[] = {
  {684,1},	{759,1}
};

static struct patval owl_attackpat90[] = {
  {684,1},	{759,1}
};

static struct patval owl_attackpat91[] = {
  {683,1},	{684,1},	{649,3},	{686,3},
  {760,3},	{723,3}
};

static struct patval owl_attackpat92[] = {
  {649,1},	{646,3},	{609,3}
};

static struct patval owl_attackpat93[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat94[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat95[] = {
  {683,1},	{684,1},	{795,1}
};

static struct patval owl_attackpat96[] = {
  {683,1},	{684,1},	{795,1}
};

static struct patval owl_attackpat97[] = {
  {684,1},	{610,3}
};

static struct patval owl_attackpat98[] = {
  {720,1},	{759,1},	{685,1},	{758,1}
};

static struct patval owl_attackpat99[] = {
  {720,1},	{757,1},	{684,1},	{759,1},
  {685,1}
};

static struct patval owl_attackpat100[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat101[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat102[] = {
  {720,1},	{757,1}
};

static struct patval owl_attackpat103[] = {
  {758,1},	{684,1}
};

static struct patval owl_attackpat104[] = {
  {759,1},	{684,1},	{721,3},	{760,3}
};

static struct patval owl_attackpat105[] = {
  {683,1},	{758,1},	{684,1},	{685,3},
  {759,3}
};

static struct patval owl_attackpat106[] = {
  {647,1},	{646,1},	{683,1},	{757,1}
};

static struct patval owl_attackpat107[] = {
  {684,1},	{758,3},	{760,3},	{759,3}
};

static struct patval owl_attackpat108[] = {
  {684,1},	{722,1},	{721,3}
};

static struct patval owl_attackpat109[] = {
  {684,1}
};

static struct patval owl_attackpat110[] = {
  {646,1},	{721,1},	{684,1},	{648,3}
};

static struct patval owl_attackpat111[] = {
  {722,1},	{684,1},	{796,3},	{759,3}
};

static struct patval owl_attackpat112[] = {
  {684,1}
};

static struct patval owl_attackpat113[] = {
  {684,1},	{647,1},	{611,3},	{610,3}
};

static struct patval owl_attackpat114[] = {
  {684,1},	{758,3},	{647,3}
};

static struct patval owl_attackpat115[] = {
  {647,1},	{684,1}
};

static struct patval owl_attackpat116[] = {
  {684,1}
};

static struct patval owl_attackpat117[] = {
  {610,1},	{684,1},	{647,3},	{611,3}
};

static struct patval owl_attackpat118[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat119[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat120[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat121[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat122[] = {
  {610,1},	{684,1}
};

static struct patval owl_attackpat123[] = {
  {758,1},	{684,1},	{647,1},	{720,3}
};

static struct patval owl_attackpat124[] = {
  {685,1},	{684,1},	{720,1},	{758,1}
};

static struct patval owl_attackpat125[] = {
  {609,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat126[] = {
  {609,1},	{646,1},	{684,1},	{611,1}
};

static struct patval owl_attackpat127[] = {
  {721,1},	{647,1},	{684,1}
};

static struct patval owl_attackpat128[] = {
  {646,1},	{684,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat129[] = {
  {686,1},	{720,1},	{684,1},	{685,1},
  {758,1}
};

static struct patval owl_attackpat130[] = {
  {646,1},	{683,1},	{648,1},	{647,1},
  {721,1}
};

static struct patval owl_attackpat131[] = {
  {684,1}
};

static struct patval owl_attackpat132[] = {
  {646,1},	{684,1},	{610,1},	{611,3}
};

static struct patval owl_attackpat133[] = {
  {646,1},	{684,1},	{610,1},	{686,3}
};

static struct patval owl_attackpat134[] = {
  {684,1},	{721,1},	{759,1},	{760,3}
};

static struct patval owl_attackpat135[] = {
  {758,1},	{720,1},	{684,1}
};

static struct patval owl_attackpat136[] = {
  {758,1},	{684,1}
};

static struct patval owl_attackpat137[] = {
  {722,1},	{684,1},	{758,1}
};

static struct patval owl_attackpat138[] = {
  {722,1},	{684,1},	{758,1}
};

static struct patval owl_attackpat139[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat140[] = {
  {684,1},	{720,1},	{722,3},	{683,3}
};

static struct patval owl_attackpat141[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat142[] = {
  {684,1},	{722,1},	{759,1},	{794,1},
  {795,1},	{685,3}
};

static struct patval owl_attackpat143[] = {
  {684,1},	{721,1},	{760,1},	{759,1}
};

static struct patval owl_attackpat144[] = {
  {758,1},	{759,1},	{684,1},	{685,1},
  {760,3},	{686,3}
};

static struct patval owl_attackpat145[] = {
  {684,1},	{721,1},	{649,1},	{687,1},
  {759,1},	{761,3},	{760,3}
};

static struct patval owl_attackpat146[] = {
  {686,1},	{684,1},	{721,1},	{649,3},
  {611,3},	{722,3}
};

static struct patval owl_attackpat147[] = {
  {722,1},	{758,1},	{684,1},	{757,3},
  {759,3},	{685,3}
};

static struct patval owl_attackpat148[] = {
  {758,1},	{647,1},	{685,1},	{759,1}
};

static struct patval owl_attackpat149[] = {
  {686,1},	{684,1},	{647,3},	{723,3},
  {648,3},	{721,3},	{649,3}
};

static struct patval owl_attackpat150[] = {
  {758,1},	{720,1},	{684,1},	{648,1},
  {647,3},	{683,3},	{757,3}
};

static struct patval owl_attackpat151[] = {
  {758,1},	{720,1},	{684,1},	{757,3},
  {683,3}
};

static struct patval owl_attackpat152[] = {
  {720,1},	{721,1},	{646,3},	{683,3}
};

static struct patval owl_attackpat153[] = {
  {684,1}
};

static struct patval owl_attackpat154[] = {
  {609,1},	{721,1},	{720,1},	{646,3},
  {683,3}
};

static struct patval owl_attackpat155[] = {
  {684,1},	{757,1}
};

static struct patval owl_attackpat156[] = {
  {683,1},	{684,1}
};

static struct patval owl_attackpat157[] = {
  {721,1},	{685,1}
};

static struct patval owl_attackpat158[] = {
  {609,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat159[] = {
  {758,1},	{684,1}
};

static struct patval owl_attackpat160[] = {
  {758,1},	{720,1},	{684,1},	{759,1}
};

static struct patval owl_attackpat161[] = {
  {646,1},	{759,1},	{684,1},	{721,1},
  {758,1}
};

static struct patval owl_attackpat162[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat163[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat164[] = {
  {758,1},	{683,1},	{720,1},	{646,3}
};

static struct patval owl_attackpat165[] = {
  {721,1},	{683,1},	{647,1},	{722,3}
};

static struct patval owl_attackpat166[] = {
  {721,1},	{647,1},	{720,1}
};

static struct patval owl_attackpat167[] = {
  {722,1},	{683,1},	{721,1},	{684,1},
  {759,3}
};

static struct patval owl_attackpat168[] = {
  {646,1},	{760,1},	{684,1},	{721,1},
  {722,1}
};

static struct patval owl_attackpat169[] = {
  {721,1},	{683,1},	{648,1},	{684,1},
  {722,1}
};

static struct patval owl_attackpat170[] = {
  {647,1},	{684,1},	{721,1}
};

static struct patval owl_attackpat171[] = {
  {610,1},	{611,1},	{684,1}
};

static struct patval owl_attackpat172[] = {
  {610,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat173[] = {
  {647,1},	{684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat174[] = {
  {647,1},	{684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat175[] = {
  {610,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat176[] = {
  {720,1},	{758,1},	{647,1},	{684,1},
  {757,3}
};

static struct patval owl_attackpat177[] = {
  {646,1},	{610,1},	{722,1},	{684,1},
  {686,1}
};

static struct patval owl_attackpat178[] = {
  {646,1},	{610,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat179[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat180[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat181[] = {
  {648,1},	{684,1}
};

static struct patval owl_attackpat182[] = {
  {648,1},	{684,1}
};

static struct patval owl_attackpat183[] = {
  {646,1},	{685,1}
};

static struct patval owl_attackpat184[] = {
  {646,1},	{685,1}
};

static struct patval owl_attackpat185[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat186[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat187[] = {
  {646,1},	{720,1}
};

static struct patval owl_attackpat188[] = {
  {684,1},	{758,1}
};

static struct patval owl_attackpat189[] = {
  {647,1},	{758,1}
};

static struct patval owl_attackpat190[] = {
  {609,1},	{684,1}
};

static struct patval owl_attackpat191[] = {
  {647,1},	{721,1},	{648,3},	{722,3}
};

static struct patval owl_attackpat192[] = {
  {646,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat193[] = {
  {685,1},	{684,1}
};

static struct patval owl_attackpat194[] = {
  {685,1},	{721,3},	{573,3},	{536,3}
};

static struct patval owl_attackpat195[] = {
  {684,1},	{796,1},	{685,1},	{795,1}
};

static struct patval owl_attackpat196[] = {
  {684,1},	{796,1},	{685,1},	{795,1}
};

static struct patval owl_attackpat197[] = {
  {610,1},	{722,1},	{647,3}
};

static struct patval owl_attackpat198[] = {
  {610,1},	{722,1},	{647,3}
};

static struct patval owl_attackpat199[] = {
  {646,1},	{758,1},	{684,1},	{647,3}
};

static struct patval owl_attackpat200[] = {
  {758,1},	{686,1}
};

static struct patval owl_attackpat201[] = {
  {684,1},	{796,1}
};

static struct patval owl_attackpat202[] = {
  {684,1}
};

static struct patval owl_attackpat203[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat204[] = {
  {722,1}
};

static struct patval owl_attackpat205[] = {
  {722,1}
};

static struct patval owl_attackpat206[] = {
  {684,1}
};

static struct patval owl_attackpat207[] = {
  {757,1},	{722,1}
};

static struct patval owl_attackpat208[] = {
  {647,1},	{683,1}
};

static struct patval owl_attackpat209[] = {
  {685,1},	{647,1},	{649,3},	{648,3}
};

static struct patval owl_attackpat210[] = {
  {685,1},	{721,1},	{647,1},	{648,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat211[] = {
  {685,1}
};

static struct patval owl_attackpat212[] = {
  {685,1}
};

static struct patval owl_attackpat213[] = {
  {685,1}
};

static struct patval owl_attackpat214[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat215[] = {
  {646,1},	{684,1},	{683,3}
};

static struct patval owl_attackpat216[] = {
  {684,1}
};

static struct patval owl_attackpat217[] = {
  {721,1},	{683,1},	{720,1},	{682,3}
};

static struct patval owl_attackpat218[] = {
  {646,1},	{647,1}
};

static struct patval owl_attackpat219[] = {
  {645,1},	{608,3},	{722,3}
};

static struct patval owl_attackpat220[] = {
  {646,1},	{608,3},	{645,3},	{722,3}
};

static struct patval owl_attackpat221[] = {
  {684,1},	{721,1},	{646,3},	{760,3},
  {683,3}
};

static struct patval owl_attackpat222[] = {
  {683,1},	{722,1},	{684,1},	{723,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat223[] = {
  {646,1},	{721,1}
};

static struct patval owl_attackpat224[] = {
  {646,1},	{721,1}
};

static struct patval owl_attackpat225[] = {
  {646,1},	{684,1}
};

static struct patval owl_attackpat226[] = {
  {684,1},	{759,1}
};

static struct patval owl_attackpat227[] = {
  {684,1}
};

static struct patval owl_attackpat228[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat229[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat230[] = {
  {610,1},	{722,1},	{647,3}
};

static struct patval owl_attackpat231[] = {
  {610,1},	{722,1},	{647,3}
};

static struct patval owl_attackpat232[] = {
  {721,1}
};

static struct patval owl_attackpat233[] = {
  {721,1}
};

static struct patval owl_attackpat234[] = {
  {721,1},	{685,1},	{647,1},	{719,3},
  {645,3},	{682,3}
};

static struct patval owl_attackpat235[] = {
  {684,1}
};

static struct patval owl_attackpat236[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat237[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat238[] = {
  {722,1},	{684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat239[] = {
  {648,1},	{684,1},	{647,1},	{757,3},
  {646,3}
};

static struct patval owl_attackpat240[] = {
  {685,1},	{721,1},	{648,1},	{720,3}
};

static struct patval owl_attackpat241[] = {
  {685,1}
};

static struct patval owl_attackpat242[] = {
  {684,1}
};

static struct patval owl_attackpat243[] = {
  {684,1}
};

static struct patval owl_attackpat244[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat245[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat246[] = {
  {648,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat247[] = {
  {609,1},	{684,1}
};

static struct patval owl_attackpat248[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat249[] = {
  {647,1},	{648,1},	{685,1}
};

static struct patval owl_attackpat250[] = {
  {683,1},	{684,1}
};

static struct patval owl_attackpat251[] = {
  {684,1},	{610,1},	{683,1}
};

static struct patval owl_attackpat252[] = {
  {684,1},	{685,1},	{683,1},	{610,1}
};

static struct patval owl_attackpat253[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat254[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat255[] = {
  {647,1},	{684,1},	{760,1},	{759,1}
};

static struct patval owl_attackpat256[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat257[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat258[] = {
  {646,1},	{721,1},	{759,1},	{684,1},
  {683,3},	{758,3}
};

static struct patval owl_attackpat259[] = {
  {758,1},	{684,1},	{721,3},	{759,3}
};

static struct patval owl_attackpat260[] = {
  {758,1},	{684,1},	{759,3}
};

static struct patval owl_attackpat261[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat262[] = {
  {758,1},	{683,1},	{720,1},	{647,1}
};

static struct patval owl_attackpat263[] = {
  {647,1},	{683,1},	{720,1},	{758,1}
};

static struct patval owl_attackpat264[] = {
  {721,1},	{683,1},	{759,1},	{684,1},
  {760,3}
};

static struct patval owl_attackpat265[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat266[] = {
  {683,1},	{684,1},	{609,3}
};

static struct patval owl_attackpat267[] = {
  {684,1},	{682,1},	{720,1}
};

static struct patval owl_attackpat268[] = {
  {759,1},	{684,1},	{721,1},	{760,1}
};

static struct patval owl_attackpat269[] = {
  {684,1},	{721,1},	{720,1}
};

static struct patval owl_attackpat270[] = {
  {684,1},	{722,1},	{720,1},	{721,1}
};

static struct patval owl_attackpat271[] = {
  {685,1},	{646,1},	{684,1},	{722,3}
};

static struct patval owl_attackpat272[] = {
  {758,1},	{720,1},	{759,1}
};

static struct patval owl_attackpat273[] = {
  {685,1},	{646,1},	{611,1},	{684,1},
  {722,3}
};

static struct patval owl_attackpat274[] = {
  {646,1},	{721,1},	{684,1}
};

static struct patval owl_attackpat275[] = {
  {646,1},	{721,1},	{684,1}
};

static struct patval owl_attackpat276[] = {
  {609,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat277[] = {
  {647,1},	{684,1},	{722,1},	{723,1}
};

static struct patval owl_attackpat278[] = {
  {684,1}
};

static struct patval owl_attackpat279[] = {
  {648,1},	{686,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat280[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat281[] = {
  {720,1},	{684,1},	{648,1}
};

static struct patval owl_attackpat282[] = {
  {684,1},	{646,1},	{722,1},	{610,3},
  {609,3},	{723,3},	{686,3}
};

static struct patval owl_attackpat283[] = {
  {646,1},	{684,1},	{722,3},	{723,3}
};

static struct patval owl_attackpat284[] = {
  {646,1},	{683,1},	{648,1},	{684,1},
  {721,1},	{722,1}
};

static struct patval owl_attackpat285[] = {
  {721,1},	{683,1},	{647,1}
};

static struct patval owl_attackpat286[] = {
  {686,1},	{684,1},	{759,1},	{760,3},
  {647,3},	{721,3}
};

static struct patval owl_attackpat287[] = {
  {645,1},	{682,1},	{719,1},	{759,1},
  {758,1},	{647,1},	{757,1}
};

static struct patval owl_attackpat288[] = {
  {646,1},	{683,1},	{720,1},	{647,1},
  {759,1},	{760,1},	{758,1},	{648,1}
};

static struct patval owl_attackpat289[] = {
  {648,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat290[] = {
  {685,1},	{721,1},	{720,1}
};

static struct patval owl_attackpat291[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {686,1}
};

static struct patval owl_attackpat292[] = {
  {646,1},	{683,1},	{759,1},	{760,1},
  {648,1},	{721,1},	{758,3},	{720,3}
};

static struct patval owl_attackpat293[] = {
  {758,1},	{720,1},	{722,1},	{760,1},
  {684,1},	{759,3}
};

static struct patval owl_attackpat294[] = {
  {758,1},	{720,1},	{684,1},	{757,3},
  {759,3},	{683,3}
};

static struct patval owl_attackpat295[] = {
  {646,1},	{721,1},	{720,1},	{759,1},
  {758,3}
};

static struct patval owl_attackpat296[] = {
  {719,1},	{683,1},	{685,1},	{757,1},
  {684,1}
};

static struct patval owl_attackpat297[] = {
  {685,1},	{645,1},	{648,1},	{683,1},
  {684,1}
};

static struct patval owl_attackpat298[] = {
  {721,1},	{684,1},	{683,3},	{609,3},
  {722,3},	{646,3}
};

static struct patval owl_attackpat299[] = {
  {647,1},	{684,1},	{721,1},	{648,1}
};

static struct patval owl_attackpat300[] = {
  {684,1},	{646,1}
};

static struct patval owl_attackpat301[] = {
  {720,1},	{684,1},	{647,1},	{757,3},
  {648,3},	{758,3}
};

static struct patval owl_attackpat302[] = {
  {685,1},	{684,1},	{649,1},	{646,3},
  {609,3}
};

static struct patval owl_attackpat303[] = {
  {648,1},	{682,1},	{722,1},	{721,1},
  {720,1},	{684,1},	{645,3},	{683,3}
};

static struct patval owl_attackpat304[] = {
  {684,1}
};

static struct patval owl_attackpat305[] = {
  {610,1}
};

static struct patval owl_attackpat306[] = {
  {684,1}
};

static struct patval owl_attackpat307[] = {
  {684,1}
};

static struct patval owl_attackpat308[] = {
  {720,1},	{682,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat309[] = {
  {720,1},	{682,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat310[] = {
  {720,1},	{646,1},	{683,1},	{722,1},
  {684,1},	{758,1}
};

static struct patval owl_attackpat311[] = {
  {684,1},	{759,1},	{720,3},	{757,3}
};

static struct patval owl_attackpat312[] = {
  {684,1},	{646,1},	{648,1}
};

static struct patval owl_attackpat313[] = {
  {684,1},	{646,1},	{685,1}
};

static struct patval owl_attackpat314[] = {
  {647,1},	{684,1},	{722,1},	{686,1}
};

static struct patval owl_attackpat315[] = {
  {647,1},	{684,1},	{723,1},	{722,1}
};

static struct patval owl_attackpat316[] = {
  {609,1},	{646,1},	{684,1},	{648,1}
};

static struct patval owl_attackpat317[] = {
  {609,1},	{646,1},	{685,1},	{684,1}
};

static struct patval owl_attackpat318[] = {
  {609,1},	{646,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat319[] = {
  {686,1},	{647,1},	{684,1},	{722,1},
  {610,3}
};

static struct patval owl_attackpat320[] = {
  {758,1},	{684,1},	{720,1},	{648,1}
};

static struct patval owl_attackpat321[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {649,1}
};

static struct patval owl_attackpat322[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {759,1},	{758,3}
};

static struct patval owl_attackpat323[] = {
  {722,1},	{720,1},	{684,1},	{758,1}
};

static struct patval owl_attackpat324[] = {
  {683,1},	{720,1},	{647,1},	{685,1},
  {759,1},	{758,3}
};

static int
autohelperowl_attackpat0(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A)<4;
}

static int
autohelperowl_attackpat6(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return  countlib(a)>2;
}

static int
autohelperowl_attackpat11(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return  (somewhere(color, 0, 1, a) || !somewhere(color, 0, 1, b));
}

static int
autohelperowl_attackpat14(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat17(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat18(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(608, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) || !play_attack_defend_n(color, 1, 4, move, a, b, c, move);
}

static int
autohelperowl_attackpat27(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat28(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat31(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>2;
}

static int
autohelperowl_attackpat32(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat34(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(648, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat37(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat39(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_attackpat40(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, b, c, a, b);
}

static int
autohelperowl_attackpat42(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(608, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(609, trans, move);

  return (accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==1 || countlib(b)>2) && countlib(A)<=3 && accuratelib(e, color, MAX_LIBERTIES, NULL)>1&& play_attack_defend_n(color, 1, 6, move, c, a, d, e, f, A)&& play_attack_defend_n(color, 0, 4, move, c, a, e, move);
}

static int
autohelperowl_attackpat43(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return  (owl_escape_value(b) <= 0 && owl_escape_value(c) <= 0) || !play_attack_defend_n(color, 1, 2, move, a, d);
}

static int
autohelperowl_attackpat44(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a) < 1;
}

static int
autohelperowl_attackpat46(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(B)<=3 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat47(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_attackpat49(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, C) || !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, C);
}

static int
autohelperowl_attackpat50(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat51(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat52(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat53(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat54(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat55(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat56(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_attackpat57(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_escape_value(a)+owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat59(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_attackpat63(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return  !play_attack_defend_n(color, 1, 1, move, move);
}

static int
autohelperowl_attackpat64(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return !owl_goal_dragon(A);
}

static int
autohelperowl_attackpat67(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b) && !play_attack_defend_n(color, 1, 2, move, a, b);
}

static int
autohelperowl_attackpat68(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b);
}

static int
autohelperowl_attackpat69(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return countlib(a)<=2 || accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>2;
}

static int
autohelperowl_attackpat70(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);

  return  play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat71(int trans, int move, int color, int action)
{
  int a, b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);

  return  owl_escape_value(e)>0 && play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat73(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return  (owl_escape_value(a)>0)||(owl_escape_value(b)>0);
}

static int
autohelperowl_attackpat74(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0&& (!somewhere(OTHER_COLOR(color), 0, 2, b, c)    || somewhere(color, 0, 2, b, d)    || (somewhere(color, 0, 1, c) && !safe_move(d, OTHER_COLOR(color))));
}

static int
autohelperowl_attackpat75(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0 && (play_attack_defend_n(OTHER_COLOR(color), 1, 4, b, c, move, d, d) || !play_attack_defend_n(OTHER_COLOR(color), 0, 4, move, b, d, e, e));
}

static int
autohelperowl_attackpat77(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  c = AFFINE_TRANSFORM(687, trans, move);
  d = AFFINE_TRANSFORM(724, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);

  return somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e) > 0;
}

static int
autohelperowl_attackpat78(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat79(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat80(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(794, trans, move);
  f = AFFINE_TRANSFORM(831, trans, move);
  g = AFFINE_TRANSFORM(758, trans, move);
  h = AFFINE_TRANSFORM(795, trans, move);
  i = AFFINE_TRANSFORM(832, trans, move);
  j = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0&& ((somewhere(color, 0, 3, b, c, j) && somewhere(color, 0, 6, d, e, f, g, h, i))   || (somewhere(color, 0, 1, j) && owl_escape_value(d)==0 && owl_escape_value(e)==0));
}

static int
autohelperowl_attackpat81(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(795, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(794, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  g = AFFINE_TRANSFORM(649, trans, move);
  h = AFFINE_TRANSFORM(686, trans, move);
  i = AFFINE_TRANSFORM(650, trans, move);
  j = AFFINE_TRANSFORM(687, trans, move);

  return owl_escape_value(a)>0 && somewhere(color, 0, 5, f, g, h, i, j) && somewhere(color, 0, 4, b, c, d, e);
}

static int
autohelperowl_attackpat82(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);
  d = AFFINE_TRANSFORM(608, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(645, trans, move);
  i = AFFINE_TRANSFORM(571, trans, move);
  j = AFFINE_TRANSFORM(572, trans, move);
  k = AFFINE_TRANSFORM(573, trans, move);

  return (somewhere(color, 0, 1, j) || (somewhere(color, 0, 1, i) && somewhere(color, 0, 1, k)))&& !play_attack_defend_n(color, 1, 7, move, a, b, c, d, e, f, move) && !play_attack_defend_n(color, 1, 5, move, a, b, e, f, move);
}

static int
autohelperowl_attackpat83(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(574, trans, move);
  d = AFFINE_TRANSFORM(611, trans, move);
  e = AFFINE_TRANSFORM(646, trans, move);
  f = AFFINE_TRANSFORM(758, trans, move);
  g = AFFINE_TRANSFORM(795, trans, move);
  h = AFFINE_TRANSFORM(759, trans, move);
  i = AFFINE_TRANSFORM(796, trans, move);
  j = AFFINE_TRANSFORM(760, trans, move);
  k = AFFINE_TRANSFORM(797, trans, move);

  return  somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e)>0 && somewhere(color, 0, 6, f, g, h, i, j, k);
}

static int
autohelperowl_attackpat84(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(608, trans, move);
  b = AFFINE_TRANSFORM(830, trans, move);
  c = AFFINE_TRANSFORM(831, trans, move);
  d = AFFINE_TRANSFORM(832, trans, move);
  e = AFFINE_TRANSFORM(611, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0&& owl_escape_value(b)==0&& owl_escape_value(c)==0&& owl_escape_value(d)==0&& somewhere(color, 0, 2, e, f);
}

static int
autohelperowl_attackpat85(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(A)>0 && play_attack_defend2_n(color, 0, 2, move, b, move, c);
}

static int
autohelperowl_attackpat87(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat88(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);

  return  countlib(A)>1;
}

static int
autohelperowl_attackpat89(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat90(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat91(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(e)>0 && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, c, d);
}

static int
autohelperowl_attackpat92(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat93(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(b))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat94(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(a))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat95(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat96(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat98(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat105(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)<=3 && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat107(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_eyespace(a);
}

static int
autohelperowl_attackpat110(int trans, int move, int color, int action)
{
  int b, A, C, W;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(719, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);
  W = AFFINE_TRANSFORM(720, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, W) && !play_attack_defend_n(color, 1, 4, move, A, b, C, b);
}

static int
autohelperowl_attackpat112(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat113(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  return !ATTACK_MACRO(a) && owl_proper_eye(b)&& (somewhere(OTHER_COLOR(color), 0, 1, c) || owl_proper_eye(c));
}

static int
autohelperowl_attackpat114(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_eyespace(b) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat117(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return countlib(c) > 1 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat118(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat119(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, b, a) && owl_eyespace(b);
}

static int
autohelperowl_attackpat120(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return countlib(C)==2 && countstones(C)>1 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat122(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat123(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat124(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);

  return countlib(a) > 1;
}

static int
autohelperowl_attackpat125(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  D = AFFINE_TRANSFORM(682, trans, move);

  return play_attack_defend_n(color, 1, 4, move, a, b, c, D);
}

static int
autohelperowl_attackpat126(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return !play_attack_defend_n(color, 1, 2, a, move, move);
}

static int
autohelperowl_attackpat127(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return countlib(A) == 3;
}

static int
autohelperowl_attackpat128(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(645, trans, move);

  return  !ATTACK_MACRO(C) && (!somewhere(OTHER_COLOR(color), 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) && somewhere(color, 0, 1, a)));
}

static int
autohelperowl_attackpat129(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return  countlib(A) == 3;
}

static int
autohelperowl_attackpat130(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(682, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, A, b, move);
}

static int
autohelperowl_attackpat132(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat133(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat136(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return owl_eyespace(a) && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat137(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(723, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_topological_eye(a, board[A])<=2) && (owl_topological_eye(b, board[A])==2);
}

static int
autohelperowl_attackpat138(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  (owl_topological_eye(a, board[A])==2) && ((owl_topological_eye(b, board[A])==2) || (owl_topological_eye(b, board[A])==3));
}

static int
autohelperowl_attackpat139(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_topological_eye(a, board[B])==3 && does_attack(move, B);
}

static int
autohelperowl_attackpat140(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);

  return  owl_topological_eye(a, board[A])==3 && safe_move(b, color) && safe_move(move, color) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, b);
}

static int
autohelperowl_attackpat141(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(a)==2 && owl_topological_eye(b, board[A])==3;
}

static int
autohelperowl_attackpat144(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(644, trans, move);

  return !ATTACK_MACRO(b) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b);
}

static int
autohelperowl_attackpat145(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_attackpat146(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_eyespace(b) && !owl_proper_eye(move) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat147(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat148(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  owl_big_eyespace(A) && play_attack_defend_n(color, 1, 1, move, b);
}

static int
autohelperowl_attackpat149(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  1 || play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat152(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat153(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat158(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat159(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_attackpat160(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(C) <= 3 && owl_proper_eye(a) && owl_proper_eye(b);
}

static int
autohelperowl_attackpat162(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)==1 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat163(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)<=2 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat165(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(719, trans, move);

  return countlib(a) == 1 && countlib(B) > 1;
}

static int
autohelperowl_attackpat167(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat168(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL) == 2;
}

static int
autohelperowl_attackpat170(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat171(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat173(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2 && !safe_move(b, color);
}

static int
autohelperowl_attackpat174(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !safe_move(a, color);
}

static int
autohelperowl_attackpat175(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat179(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(B)>0 || owl_escape_value(C)>0)&& !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat180(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat181(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c) && !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat182(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c);
}

static int
autohelperowl_attackpat183(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat184(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat186(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a) <= 2;
}

static int
autohelperowl_attackpat187(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat188(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && play_attack_defend_n(color, 1, 2, move, c, c);
}

static int
autohelperowl_attackpat189(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, a);
}

static int
autohelperowl_attackpat190(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat191(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat192(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  !safe_move(a, color) && countlib(b)>1;
}

static int
autohelperowl_attackpat193(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return  owl_escape_value(b)>0 && play_attack_defend2_n(color, 0, 3, move, A, b, c, b) && play_attack_defend2_n(color, 0, 3, move, A, b, b, move);
}

static int
autohelperowl_attackpat194(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(572, trans, move);
  B = AFFINE_TRANSFORM(609, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 2, A, B) && owl_escape_value(A) + owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat195(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(647, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  g = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat196(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(647, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  g = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat197(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(609, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat198(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(609, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat199(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move)&& (somewhere(color, 0, 1, b) || !play_attack_defend_n(color, 1, 2, move, b, move));
}

static int
autohelperowl_attackpat201(int trans, int move, int color, int action)
{
  int b, c, d, e, f, g, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(757, trans, move);
  f = AFFINE_TRANSFORM(682, trans, move);
  g = AFFINE_TRANSFORM(719, trans, move);
  A = AFFINE_TRANSFORM(758, trans, move);

  return !owl_goal_dragon(A) && !play_attack_defend2_n(color, 1, 5, move, b, c, d, e, c, e)&& (somewhere(color, 0, 1, f) || !play_attack_defend2_n(color, 1, 5, move, d, b, f, g, b, g));
}

static int
autohelperowl_attackpat202(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(680, trans, move);
  b = AFFINE_TRANSFORM(717, trans, move);
  c = AFFINE_TRANSFORM(754, trans, move);
  d = AFFINE_TRANSFORM(791, trans, move);
  e = AFFINE_TRANSFORM(828, trans, move);
  f = AFFINE_TRANSFORM(829, trans, move);
  g = AFFINE_TRANSFORM(830, trans, move);
  h = AFFINE_TRANSFORM(831, trans, move);
  i = AFFINE_TRANSFORM(832, trans, move);

  return (owl_escape_value(a)>0) + (owl_escape_value(b)>0)+(owl_escape_value(c)>0) + (owl_escape_value(d)>0)+(owl_escape_value(e)>0) + (owl_escape_value(f)>0)+(owl_escape_value(g)>0) + (owl_escape_value(h)>0)+(owl_escape_value(i)>0) < 2;
}

static int
autohelperowl_attackpat203(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat204(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat205(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(b)<=4 && countlib(c)<=4 && play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat206(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  vital_chain(A) && vital_chain(B) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat207(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, c);
}

static int
autohelperowl_attackpat208(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B) && !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_attackpat209(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, b);
}

static int
autohelperowl_attackpat210(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return !ATTACK_MACRO(A) && ATTACK_MACRO(a) && !play_attack_defend_n(color, 0, 1, move, B);
}

static int
autohelperowl_attackpat211(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return  vital_chain(a) && vital_chain(b) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat212(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat213(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat214(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B) > 0 && does_defend(move, a);
}

static int
autohelperowl_attackpat215(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return  somewhere(color, 0, 2, a, b) && ATTACK_MACRO(c);
}

static int
autohelperowl_attackpat218(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat219(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(687, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat220(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(650, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat222(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(C)>0 && owl_goal_dragon(D) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat223(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat224(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat225(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat226(int trans, int move, int color, int action)
{
  int a, b, c, D, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  D = AFFINE_TRANSFORM(648, trans, move);
  E = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0)&& ((somewhere(color, 0, 1, E) || somewhere(OTHER_COLOR(color), 0, 1, E)) || owl_escape_value(a) < 0)&& !play_attack_defend2_n(color, 1, 3, move, c, D, move, D);
}

static int
autohelperowl_attackpat227(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return !same_string(a, b) && (countlib(a) <= 4 || countlib(b) <= 4 || countlib(c) <= 4);
}

static int
autohelperowl_attackpat228(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !is_same_dragon(a, b) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat229(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !is_same_dragon(a, b) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat230(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat231(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat232(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(c) > 0 || owl_escape_value(b) > 0)&& play_attack_defend2_n(color, 0, 2, move, d, A, move);
}

static int
autohelperowl_attackpat233(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(d) > 0 || owl_escape_value(b) > 0 || owl_escape_value(c) > 0)&& !play_attack_defend2_n(color, 0, 2, e, move, A, e);
}

static int
autohelperowl_attackpat235(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  vital_chain(A) && vital_chain(B) && play_attack_defend2_n(OTHER_COLOR(color), 1, 1, move, A, B);
}

static int
autohelperowl_attackpat236(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat237(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat238(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);

  return  owl_escape_value(a) > 0 && play_attack_defend_n(color, 1, 1, move, b) && !play_attack_defend_n(color, 1, 3, move, c, d, d);
}

static int
autohelperowl_attackpat239(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B);
}

static int
autohelperowl_attackpat241(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  (countlib(a)==1) && (countlib(B)==1);
}

static int
autohelperowl_attackpat242(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countstones(A)>3 && countlib(A)==1;
}

static int
autohelperowl_attackpat243(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countstones(A)<=3 && countlib(A)==1 && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_attackpat244(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countstones(A)>3 && does_attack(move, A);
}

static int
autohelperowl_attackpat245(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countstones(A)<=3 && does_attack(move, A)&& (accuratelib(move, color, MAX_LIBERTIES, NULL) > 1 || is_ko_point(move));
}

static int
autohelperowl_attackpat246(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat248(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_proper_eye(move);
}

static int
autohelperowl_attackpat249(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(643, trans, move);
  b = AFFINE_TRANSFORM(644, trans, move);

  return  somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat253(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)==2 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat259(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>1 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat269(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(719, trans, move);

  return countlib(A) == 4 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat270(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return countlib(A) == 2 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat271(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat273(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat284(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=3 && DEFEND_MACRO(a) != WIN;
}

static int
autohelperowl_attackpat285(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(723, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat286(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 2, move, a, move);
}

static int
autohelperowl_attackpat287(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || (countlib(B) <= 6);
}

static int
autohelperowl_attackpat289(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a) != 0 && !play_attack_defend_n(color, 1, 1, a, b);
}

static int
autohelperowl_attackpat290(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, a, c) != 0 || play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat291(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 1, 3, move, a, b, b) && play_attack_defend_n(color, 0, 2, move, c, d);
}

static int
autohelperowl_attackpat303(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  B = AFFINE_TRANSFORM(719, trans, move);

  return countlib(a)==1 && countlib(B)<=3 && DEFEND_MACRO(a)!=WIN;
}

static int
autohelperowl_attackpat306(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat307(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat308(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat309(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat310(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(830, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return !ATTACK_MACRO(a) && !play_attack_defend_n(OTHER_COLOR(color), 0, 1, b, c);
}

static int
autohelperowl_attackpat311(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return !safe_move(a, color) && play_attack_defend_n(color, 0, 2, move, a, move) && !play_attack_defend_n(color, 1, 3, move, b, c, c);
}

static int
autohelperowl_attackpat312(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat313(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat314(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat315(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat316(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat317(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat321(int trans, int move, int color, int action)
{
  int b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(571, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(609, trans, move);
  f = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(608, trans, move);

  return countlib(A)==3 && !ATTACK_MACRO(b) && !play_attack_defend_n(color, 1, 5, move, c, d, e, f, f);
}

static int
autohelperowl_attackpat322(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(794, trans, move);

  return play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, e) && !play_attack_defend_n(color, 1, 1, move, f);
}

static int
autohelperowl_attackpat323(int trans, int move, int color, int action)
{
  int e, A, B, C, D;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(797, trans, move);
  B = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(760, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  return countlib(A) > 2 && !play_attack_defend_n(color, 0, 7, move, NO_MOVE, B, NO_MOVE, C, NO_MOVE, D, e);
}

static struct pattern owl_attackpat[] = {
  {owl_attackpat0,3,8, "A1",-1,-2,2,2,3,4,0x2,683,
    { 0xfdffffff, 0xfcfcfcf4, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfffffd00, 0xffffff7f, 0xfcffffff},
    { 0x041a0000, 0x00102420, 0x00904000, 0x60100000, 0x24100000, 0x001a0400, 0x00106020, 0x40900000}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat0,0,0.010000},
  {owl_attackpat1,3,8, "A2",-2,-2,2,2,4,4,0x2,683,
    { 0xfdffffff, 0xfffffff7, 0xfffffcfc, 0xffffff3f, 0xfffffff0, 0xfffffdff, 0xffffff7f, 0xfcffffff},
    { 0x00180000, 0x00102200, 0x00900080, 0x20100000, 0x22100000, 0x00180008, 0x00102000, 0x00900000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat2,2,8, "A3",-1,-2,2,1,3,3,0x2,646,
    { 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0x3fffffff},
    { 0x10280000, 0x00242000, 0x00a11000, 0x20600010, 0x20240010, 0x00281000, 0x00602000, 0x10a10000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat3,1,8, "A101",-1,0,2,2,3,2,0x2,721,
    { 0x383f3f3f, 0x00fcf8f0, 0xf0f0b000, 0xbfff0000, 0xf8fc0000, 0x3f3f3800, 0x00ffbf3f, 0xb0f0f0f0},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat4,3,8, "A102",-1,-2,2,2,3,4,0x2,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfffffc00, 0xffffff3f, 0xffffffff},
    { 0x40902000, 0x24900000, 0x201a0500, 0x00186060, 0x00902424, 0x20904000, 0x60180000, 0x051a2000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat5,4,8, "A103",-2,-2,1,1,3,3,0x2,646,
    { 0xfcfcfc00, 0xfffefc00, 0xfcfdfd2c, 0xfcfcfc50, 0xfcfeff14, 0xfcfcfce0, 0xfcfcfc00, 0xfdfdfc00},
    { 0x08180000, 0x01102800, 0x00908004, 0xa0100000, 0x28100100, 0x00180840, 0x0010a000, 0x80900000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat6,2,8, "A104",-1,-2,2,1,3,3,0x2,647,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcffffff},
    { 0x04182000, 0x00902400, 0x20904000, 0x60180000, 0x24900000, 0x20180400, 0x00186000, 0x40902000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat6,0,0.010000},
  {owl_attackpat7,3,8, "A105",-1,-3,2,2,3,5,0x2,647,
    { 0xf7ffffff, 0xfcfcf4fc, 0xffff7f00, 0x7fffffff, 0xf4fcfcfc, 0xfffff700, 0xffff7fff, 0x7fffffff},
    { 0x12200000, 0x00240008, 0x00201000, 0x00600000, 0x00240000, 0x00201200, 0x00600080, 0x10200000}
   , 0x1000000,99.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat8,3,8, "A106",-2,-2,1,1,3,3,0x2,683,
    { 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc, 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xffffff00},
    { 0x04240000, 0x02201400, 0x00624008, 0x50200020, 0x14200220, 0x00240480, 0x00205000, 0x40620000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat9,1,8, "A107",-1,0,2,4,3,4,0x2,758,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat10,3,8, "A108",-1,-1,1,1,2,2,0x2,646,
    { 0xf4f4fc00, 0xfcfcd400, 0xfc7c7c00, 0x5cfcfc00, 0xd4fcfc00, 0xfcf4f400, 0xfcfc5c00, 0x7c7cfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x1000020,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat11,1,8, "A109",-1,0,2,2,3,2,0x2,721,
    { 0x2e3f3f3f, 0x00f8fcf8, 0xf0f0e000, 0xffbf0000, 0xfcf80000, 0x3f3f2e00, 0x00bfffbf, 0xe0f0f0f0},
    { 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat11,3,0.016000},
  {owl_attackpat12,3,8, "A110",-1,-1,2,2,3,3,0x2,721,
    { 0xfeffffff, 0xfcfcfcf8, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffe00, 0xffffffbf, 0xfcfcfcfc},
    { 0x4090a000, 0xa4900000, 0x28180400, 0x00186800, 0x0090a400, 0xa0904000, 0x68180000, 0x04182800}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat13,2,8, "A111",-2,0,2,3,4,3,0x2,758,
    { 0x0f3f1f3f, 0x0070fffe, 0xd0f0c0c0, 0xff370000, 0xff700000, 0x1f3f0f0e, 0x0037ffff, 0xc0f0d0f0},
    { 0x00200000, 0x00200100, 0x00200040, 0x00200000, 0x01200000, 0x00200004, 0x00200000, 0x00200000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat14,2,8, "A112",-1,-2,2,1,3,3,0x2,647,
    { 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0x3fffffff},
    { 0x10280000, 0x00242000, 0x00a11000, 0x20600010, 0x20240010, 0x00281000, 0x00602000, 0x10a10000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat14,3,0.010000},
  {owl_attackpat15,3,8, "A113",-2,-3,1,0,3,3,0x8,647,
    { 0xf0f0c000, 0xfd3f0000, 0x0f3f3f37, 0x00f0fcfc, 0x003ffdff, 0xc0f0f070, 0xfcf00000, 0x3f3f0f00},
    { 0x00108000, 0x80120000, 0x08100020, 0x00100800, 0x00128000, 0x80100020, 0x08100000, 0x00100800}
   , 0x1000000,99.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat16,2,8, "A114",0,-2,3,1,3,3,0x8,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff},
    { 0x00200004, 0x00200000, 0x00200000, 0x01200000, 0x00200000, 0x00200000, 0x00200100, 0x00200040}
   , 0x1000000,99.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat17,2,8, "A115",0,-3,3,1,3,4,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0x003fffff},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat17,3,0.010000},
  {owl_attackpat18,4,8, "A201",-1,-2,2,2,3,4,0x2,759,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x40942800, 0x24909000, 0xa05a0500, 0x18186060, 0x90902424, 0x28944000, 0x60181800, 0x055aa000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat18,0,1.600000},
  {owl_attackpat19,4,8, "A203",-1,-2,1,1,2,3,0x2,647,
    { 0xc0f4fc00, 0xfcf0d000, 0xff7d0c00, 0x1c3cfc1c, 0xd0f0fcd0, 0xfcf4c000, 0xfc3c1c00, 0x0c7dff00},
    { 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x80200400, 0x08204000, 0x40200800, 0x04208000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat20,1,8, "A204",0,-2,2,2,2,4,0x2,685,
    { 0x0030fcff, 0xc0f0c000, 0xff300000, 0x0f3f0f0f, 0xc0f0c0c0, 0xfc300000, 0x0f3f0f03, 0x0030ffff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat21,2,8, "A205",-1,-1,1,1,2,2,0x2,721,
    { 0x38fcfc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xb0fcfc00},
    { 0x10a00000, 0x20240000, 0x00281000, 0x00602000, 0x00242000, 0x00a01000, 0x20600000, 0x10280000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat22,2,8, "A205b",-1,-1,1,1,2,2,0x2,721,
    { 0x38fcfc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xb0fcfc00},
    { 0x10a01000, 0x20640000, 0x10281000, 0x00642000, 0x00642000, 0x10a01000, 0x20640000, 0x10281000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat23,2,8, "A206",-1,-1,2,1,3,2,0x2,722,
    { 0x30f8fcfc, 0xf0fce000, 0xfcbc3000, 0x2fff3f00, 0xe0fcf000, 0xfcf83000, 0x3fff2f00, 0x30bcfcfc},
    { 0x10902000, 0x20940000, 0x20181000, 0x00582000, 0x00942000, 0x20901000, 0x20580000, 0x10182000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat24,2,8, "A206b",-1,-1,2,1,3,2,0x2,722,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000}
   , 0x1000000,78.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat25,1,8, "A207",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat26,3,8, "A207b",0,-2,2,1,2,3,0x2,648,
    { 0x00f4f4f0, 0xf0f05000, 0x7f7f0000, 0x143f3f3f, 0x50f0f0f0, 0xf4f40000, 0x3f3f1400, 0x007f7f3f},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x1000000,58.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat27,5,8, "A207c",0,-3,2,2,2,5,0x2,648,
    { 0x00f5f5f0, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0x007f7f3f},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x1000000,78.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat27,3,0.610000},
  {owl_attackpat28,6,8, "A207d",0,-3,2,2,2,5,0x2,648,
    { 0x00f5f5f0, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0x007f7f3f},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat28,3,1.000000},
  {owl_attackpat29,2,8, "A208a",-1,-2,1,0,2,2,0x2,610,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x20200000, 0x00280000, 0x00202100, 0x00a00040, 0x00280004, 0x00202000, 0x00a00000, 0x21200000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat30,1,8, "A208b",-1,-2,1,0,2,2,0x2,610,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x00200000, 0x00200000, 0x00200100, 0x00200040, 0x00200004, 0x00200000, 0x00200000, 0x01200000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat31,3,8, "A209",-1,-1,1,2,2,3,0x2,721,
    { 0x3a7f7f00, 0x50fcf8f8, 0xf4f4b000, 0xbcfc1400, 0xf8fc5000, 0x7f7f3a00, 0x14fcbcbc, 0xb0f4f400},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat31,3,0.010000},
  {owl_attackpat32,5,8, "A210",-1,-1,1,3,2,4,0x2,721,
    { 0x3c7f7f00, 0x50fcfcf0, 0xf4f4f000, 0xfcfc1400, 0xfcfc5000, 0x7f7f3c00, 0x14fcfc3c, 0xf0f4f400},
    { 0x14200000, 0x00240400, 0x00205000, 0x40600000, 0x04240000, 0x00201400, 0x00604000, 0x50200000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat32,3,0.010000},
  {owl_attackpat33,1,8, "A211",0,-1,3,2,3,3,0x2,723,
    { 0x0038bfbf, 0x80f0e0c0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbf380000, 0x0a3f2f0f, 0x00b0f8f8},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat34,3,8, "A214",-1,-1,1,2,2,3,0x1,721,
    { 0xffff7c00, 0x7cfcfc3c, 0xf4fcfc00, 0xfcfcf400, 0xfcfc7c00, 0x7cffff00, 0xf4fcfcf0, 0xfcfcf400},
    { 0x00902400, 0x20904000, 0x60180000, 0x04182000, 0x40902000, 0x24900000, 0x20180400, 0x00186000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat34,0,0.010000},
  {owl_attackpat35,4,8, "A215",-1,-1,2,2,3,3,0x2,685,
    { 0x2d3f7fff, 0x40f8fcf4, 0xf4f0e000, 0xffbf0700, 0xfcf84000, 0x7f3f2d00, 0x07bfff7f, 0xe0f0f4fc},
    { 0x041a0000, 0x00102420, 0x00904000, 0x60100000, 0x24100000, 0x001a0400, 0x00106020, 0x40900000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat36,2,8, "A216",-1,-1,2,1,3,2,0x2,722,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat37,2,8, "A216b",-1,-1,2,1,3,2,0x2,685,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat37,3,1.000000},
  {owl_attackpat38,2,8, "A217",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x1000000,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat39,2,8, "A217b",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat39,0,0.010000},
  {owl_attackpat40,2,8, "A217c",0,-1,2,2,2,3,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat40,0,3.000000},
  {owl_attackpat41,2,8, "A218",-1,-1,2,2,3,3,0x2,685,
    { 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc},
    { 0x051a0000, 0x00102424, 0x00904000, 0x60100000, 0x24100000, 0x001a0500, 0x00106060, 0x40900000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat42,2,8, "A219",-1,-1,2,2,3,3,0x2,722,
    { 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x1000010,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat42,0,0.277760},
  {owl_attackpat43,4,8, "A220",-2,-1,1,2,3,3,0x2,721,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat43,3,0.376000},
  {owl_attackpat44,4,8, "A221",-2,-1,1,3,3,4,0x2,758,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat44,3,0.010000},
  {owl_attackpat45,3,8, "A222",-2,-2,1,3,3,5,0x2,721,
    { 0xeaffff00, 0xfefbfaf8, 0xffffacb8, 0xbcbcfc3c, 0xfafbfef0, 0xffffeab8, 0xfcbcbcbc, 0xacffff00},
    { 0x40608000, 0x94210000, 0x08260410, 0x00205820, 0x00219420, 0x80604010, 0x58200000, 0x04260800}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat46,1,8, "A223",0,0,2,2,2,2,0x2,759,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat46,0,0.610000},
  {owl_attackpat47,2,8, "A224",-1,-1,2,2,3,3,0x2,722,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x0050a000, 0x90900000, 0x28140000, 0x00181800, 0x00909000, 0xa0500000, 0x18180000, 0x00142800}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat47,0,1.000000},
  {owl_attackpat48,3,8, "A225",0,-1,2,2,2,3,0x2,685,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat49,3,8, "A226",0,-1,2,2,2,3,0x2,685,
    { 0x00fcfffd, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0d, 0x00fcfcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat49,0,2.800000},
  {owl_attackpat50,6,8, "A227",-1,-2,1,2,2,4,0x2,721,
    { 0xf5ffff00, 0xfcfcf4f4, 0xfffc7c00, 0x7cfcfc0c, 0xf4fcfcc0, 0xfffff500, 0xfcfc7c7c, 0x7cfcff00},
    { 0x90902000, 0x28940000, 0x22181800, 0x0058a008, 0x00942880, 0x20909000, 0xa0580000, 0x18182200}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat50,0,0.010000},
  {owl_attackpat51,4,8, "A227b",0,-1,2,2,2,3,0x2,722,
    { 0x003dff7f, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xff3d0000, 0x0d3f3f1f, 0x00f0fcf4},
    { 0x00108020, 0x80100000, 0x08100000, 0x00120800, 0x00108000, 0x80100000, 0x08120000, 0x00100820}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat51,0,0.610000},
  {owl_attackpat52,1,8, "A228",0,-2,1,0,1,2,0x2,647,
    { 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat52,0,1.000000},
  {owl_attackpat53,5,8, "A229",-1,-3,1,1,2,4,0x2,647,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3d00, 0x3cfcfc7c, 0xf0fcfcf4, 0xfcfcf000, 0xfcfc3c00, 0x3dffff00},
    { 0x10182000, 0x00942000, 0x20901000, 0x20580000, 0x20940000, 0x20181000, 0x00582000, 0x10902000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat53,0,0.019600},
  {owl_attackpat54,4,8, "A229b",-1,-3,1,0,2,3,0x2,647,
    { 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0x003c7c7c, 0x00f0f4f4, 0xf0f04000, 0x7c3c0000, 0x053f3f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat54,0,0.016000},
  {owl_attackpat55,3,8, "A229c",-1,-2,1,0,2,2,0x2,647,
    { 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0x003c7c7c, 0x00f0f4f4, 0xf0f04000, 0x7c3c0000, 0x053f3f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat55,0,0.016000},
  {owl_attackpat56,2,8, "A229d",-1,-1,1,0,2,1,0x2,647,
    { 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00, 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00},
    { 0x80102000, 0x08900000, 0x20100800, 0x00188000, 0x00900800, 0x20108000, 0x80180000, 0x08102000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat56,0,0.010000},
  {owl_attackpat57,1,8, "A230",0,-1,2,2,2,3,0x2,722,
    { 0x0038ffff, 0xc0f0e0c0, 0xfcb00000, 0x2f3f0f00, 0xe0f0c000, 0xff380000, 0x0f3f2f0f, 0x00b0fcfc},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat57,0,0.016000},
  {owl_attackpat58,1,8, "A231",-1,0,1,3,2,3,0x0,758,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat59,1,8, "A232",0,-1,3,2,3,3,0x2,686,
    { 0x003cfcff, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f03, 0x00f0fcfc},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat59,0,1.000000},
  {owl_attackpat60,1,8, "A233",0,-1,3,2,3,3,0x2,686,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0c, 0x00fcfcfc},
    { 0x00500080, 0x10100000, 0x00140000, 0x00101200, 0x00101000, 0x00500000, 0x12100000, 0x00140008}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat61,3,8, "A234",-1,0,2,1,3,1,0x2,722,
    { 0x1c3c3c3c, 0x00f4fc00, 0xf0f0d000, 0xff7f0000, 0xfcf40000, 0x3c3c1c00, 0x007fff00, 0xd0f0f0f0},
    { 0x08240000, 0x00201800, 0x00608000, 0x90200000, 0x18200000, 0x00240800, 0x00209000, 0x80600000}
   , 0x1000000,20.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat62,3,8, "A235",-1,-1,1,3,2,4,0x2,758,
    { 0x3f3fff00, 0xc0fcfcfc, 0xfcf0f000, 0xfcfc0c00, 0xfcfcc000, 0xff3f3f00, 0x0cfcfcfc, 0xf0f0fc00},
    { 0x29200000, 0x00280804, 0x0020a000, 0x80a00000, 0x08280000, 0x00202900, 0x00a08040, 0xa0200000}
   , 0x1000000,77.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat63,4,8, "A236",-1,0,2,2,3,2,0x1,758,
    { 0x1f3f3f1f, 0x00f4fcfc, 0xf0f0d000, 0xff7d0000, 0xfcf40000, 0x3f3f1f00, 0x007dffff, 0xd0f0f0d0},
    { 0x00202004, 0x00a00000, 0x20200000, 0x01280000, 0x00a00000, 0x20200000, 0x00280100, 0x00202040}
   , 0x1000000,66.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat63,3,1.000000},
  {owl_attackpat64,3,8, "A301",0,-1,1,2,1,3,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00928000, 0xa0100020, 0x08180000, 0x00102800, 0x0010a000, 0x80920000, 0x28100020, 0x00180800}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat64,0,0.010000},
  {owl_attackpat65,5,8, "A302",-1,-2,1,2,2,4,0x2,648,
    { 0xbcfdfe00, 0xf8fcfc90, 0xfdfcf800, 0xfcfcbc04, 0xfcfcf840, 0xfefdbc00, 0xbcfcfc18, 0xf8fcfd00},
    { 0x18600800, 0x10248800, 0x80249000, 0x88601000, 0x88241000, 0x08601800, 0x10608800, 0x90248000}
   , 0x1000000,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat66,5,8, "A305",0,-1,2,3,2,4,0x2,686,
    { 0x00757fff, 0x50f0d0d0, 0xf4740000, 0x1f3f1700, 0xd0f05000, 0x7f750000, 0x173f1f1f, 0x0074f4fc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat67,1,8, "A401",-1,0,1,3,2,3,0x0,721,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat67,3,3.600000},
  {owl_attackpat68,1,8, "A401a",-1,0,1,3,2,3,0x0,721,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat68,3,3.000000},
  {owl_attackpat69,1,8, "A402",-1,0,2,3,3,3,0x0,720,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat69,3,0.040000},
  {owl_attackpat70,2,8, "A403",-1,0,1,2,2,2,0x0,757,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x00101a00, 0x00508080, 0x90100000, 0x08140000, 0x80500000, 0x1a100000, 0x00140808, 0x00109000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat70,0,4.800000},
  {owl_attackpat71,2,8, "A403b",-2,0,1,2,3,2,0x0,757,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x00101a00, 0x00508080, 0x90100000, 0x08140000, 0x80500000, 0x1a100000, 0x00140808, 0x00109000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat71,0,2.890000},
  {owl_attackpat72,5,4, "A404",-1,0,1,2,2,2,0x0,722,
    { 0x1d3f3f00, 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c, 0xd0f0f000},
    { 0x08220000, 0x00200820, 0x00208000, 0x80200000, 0x08200000, 0x00220800, 0x00208020, 0x80200000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat73,4,8, "A406",-2,-2,1,0,3,2,0x0,647,
    { 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0x00f0fcfc, 0x003dfdfd, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00},
    { 0x00108000, 0x80100000, 0x09100000, 0x00100804, 0x00108040, 0x80100000, 0x08100000, 0x00100900}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat73,0,0.016000},
  {owl_attackpat74,4,8, "A406b",-2,-3,1,1,3,4,0x0,647,
    { 0xf8f8c000, 0xfd3d2800, 0x0fbfbf15, 0xa0f0fcfc, 0x283dfdfd, 0xc0f8f850, 0xfcf0a000, 0xbfbf0f00},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat74,0,0.151360},
  {owl_attackpat75,3,8, "A406c",-2,-2,1,0,3,2,0x0,609,
    { 0xf0f0f000, 0xfdfd0000, 0x3f3f3f14, 0x00fcfcfc, 0x00fdfdfc, 0xf0f0f050, 0xfcfc0000, 0x3f3f3f00},
    { 0x00109000, 0x80500000, 0x18100000, 0x00140800, 0x00508000, 0x90100000, 0x08140000, 0x00101800}
   , 0x1000000,81.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat75,0,0.970000},
  {owl_attackpat76,2,8, "A407",-1,-1,2,1,3,2,0x0,647,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x48200000, 0x04200800, 0x00208400, 0x80204000, 0x08200400, 0x00204800, 0x40208000, 0x84200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat77,1,8, "A408",-2,-3,3,0,5,3,0x0,610,
    { 0xf0f0f030, 0xfffe0000, 0x3f3f3f2e, 0x00fffcfc, 0x00fefffe, 0xf0f0f0e0, 0xfcff0000, 0x3f3f3f30},
    { 0x00200000, 0x01200000, 0x00200004, 0x00200000, 0x00200100, 0x00200040, 0x00200000, 0x00200000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat77,3,0.016000},
  {owl_attackpat78,5,8, "A409",-2,-2,1,2,3,4,0x0,683,
    { 0xfffffe00, 0xfcfdfdbd, 0xfcfffe50, 0xfcfcfcb0, 0xfdfdfc38, 0xfeffff15, 0xfcfcfcf8, 0xfefffc00},
    { 0x40218400, 0x84204010, 0x48210400, 0x04204810, 0x40208410, 0x84214000, 0x48200410, 0x04214800}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat78,3,0.019600},
  {owl_attackpat79,5,4, "A410",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0xfcfc3000},
    { 0x00642000, 0x10a01000, 0x20640000, 0x10281000, 0x10a01000, 0x20640000, 0x10281000, 0x00642000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat79,3,0.010000},
  {owl_attackpat80,1,8, "A411",-3,-4,1,3,4,7,0x0,646,
    { 0xfaf08000, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0f8e8, 0x0a3fbfaf, 0x80f0fafa, 0xf8f08080, 0xbf3e0a00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat80,3,0.023834},
  {owl_attackpat81,1,8, "A411a",-3,-4,2,2,5,6,0x0,646,
    { 0xfaf08080, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0faea, 0x0a3fbfaf, 0x80f0fafa, 0xfaf08080, 0xbf3e0a0a},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat81,3,0.019600},
  {owl_attackpat82,1,8, "A413a",-3,-2,0,3,3,5,0x0,720,
    { 0xffff0000, 0x3f3f3f3f, 0x00fffefe, 0xf0f0f0b0, 0x3f3f3f3a, 0x00ffffff, 0xf0f0f0f0, 0xfeff0000},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat82,3,0.365200},
  {owl_attackpat83,4,8, "A414",-4,-3,0,3,4,6,0x0,682,
    { 0xfefc0000, 0x3f3f3f0a, 0x00fcfefe, 0xf0f0f080, 0x3f3f3f0a, 0x00fcfefe, 0xf0f0f080, 0xfefc0000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,82.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat83,3,0.019600},
  {owl_attackpat84,1,8, "A414a",-3,-3,0,3,3,6,0x0,646,
    { 0xfffe0000, 0x3f3f3f2f, 0x00feffff, 0xf0f0f0e0, 0x3f3f3f2f, 0x00feffff, 0xf0f0f0e0, 0xfffe0000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat84,3,0.023056},
  {owl_attackpat85,2,8, "A415",-1,-2,1,0,2,2,0x0,647,
    { 0xf0f0f000, 0xfcfc0000, 0x3f3f3e00, 0x00fcfcbc, 0x00fcfcf8, 0xf0f0f000, 0xfcfc0000, 0x3e3f3f00},
    { 0x00201000, 0x00600000, 0x12200000, 0x00240008, 0x00600080, 0x10200000, 0x00240000, 0x00201200}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat85,3,1.810000},
  {owl_attackpat86,3,8, "A416",-1,-2,1,2,2,4,0x0,647,
    { 0xf0fffd00, 0xfcfcf070, 0xfcff3c00, 0x3cfcfc30, 0xf0fcfc30, 0xfdfff000, 0xfcfc3c34, 0x3cfffc00},
    { 0x10220000, 0x00240020, 0x00201000, 0x00600000, 0x00240000, 0x00221000, 0x00600020, 0x10200000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat87,5,8, "A417",0,-1,3,2,3,3,0x0,722,
    { 0x003fffbf, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0e00, 0xf0f0c000, 0xff3f0000, 0x0e3f3f3f, 0x00f0fcf8},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat87,3,0.019600},
  {owl_attackpat88,3,8, "A418",-1,-2,1,1,2,3,0x0,647,
    { 0xfcfcf400, 0xfcfc7c00, 0x7fffff00, 0xf4fcfcfc, 0x7cfcfcfc, 0xf4fcfc00, 0xfcfcf400, 0xffff7f00},
    { 0x04182000, 0x00902400, 0x21904000, 0x60180004, 0x24900040, 0x20180400, 0x00186000, 0x40902100}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat88,0,0.010000},
  {owl_attackpat89,2,8, "A419",0,0,1,2,1,2,0x0,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00210200, 0x00200090, 0x00200000, 0x00200000, 0x00200000, 0x02210000, 0x00200018, 0x00200000}
   , 0x1000000,68.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat89,3,1.810000},
  {owl_attackpat90,2,8, "A419b",0,0,1,2,1,2,0x0,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00210200, 0x00200090, 0x00200000, 0x00200000, 0x00200000, 0x02210000, 0x00200018, 0x00200000}
   , 0x1000000,68.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat90,3,1.810000},
  {owl_attackpat91,6,8, "A420",-1,-1,2,2,3,3,0x0,722,
    { 0x3effff55, 0xf0fcfcf8, 0xfcfcf000, 0xfdfd3d00, 0xfcfcf000, 0xffff3e00, 0x3dfdfdbd, 0xf0fcfc54},
    { 0x20611000, 0x10680010, 0x10242000, 0x00a41000, 0x00681000, 0x10612000, 0x10a40010, 0x20241000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat91,3,1.810000},
  {owl_attackpat92,3,8, "A421",-1,-2,2,0,3,2,0x0,648,
    { 0x40f0f0c0, 0xf4f00000, 0x3f3f0500, 0x003c7f7f, 0x00f0f4f4, 0xf0f04000, 0x7f3c0000, 0x053f3f0f},
    { 0x00100080, 0x00100000, 0x00100000, 0x00100201, 0x00100000, 0x00100000, 0x02100000, 0x00100009}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat92,0,0.016000},
  {owl_attackpat93,3,8, "A422",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat93,0,6.010000},
  {owl_attackpat94,3,8, "A422a",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat94,0,6.010000},
  {owl_attackpat95,3,8, "A423",-1,0,1,3,2,3,0x0,758,
    { 0x3f3f0300, 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc, 0xf0f00000},
    { 0x20200100, 0x00280040, 0x00202000, 0x00a00000, 0x00280000, 0x01202000, 0x00a00004, 0x20200000}
   , 0x1000000,61.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat95,3,0.010000},
  {owl_attackpat96,3,8, "A423a",-1,0,1,3,2,3,0x0,758,
    { 0x3f3f0300, 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc, 0xf0f00000},
    { 0x20200100, 0x00280040, 0x00202000, 0x00a00000, 0x00280000, 0x01202000, 0x00a00004, 0x20200000}
   , 0x1000000,61.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat96,3,0.010000},
  {owl_attackpat97,2,8, "A501",0,-2,2,1,2,3,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3d0000, 0x0f3f3f1f, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0f00, 0x003dffff},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat98,4,8, "A502",-1,0,1,2,2,2,0x2,721,
    { 0x0e3f3f00, 0x00f0fcf8, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0e00, 0x003cfcbc, 0xc0f0f000},
    { 0x08122200, 0x009008a0, 0x20108000, 0x80180000, 0x08900000, 0x22120800, 0x00188028, 0x80102000}
   , 0x1000020,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat98,0,1.000000},
  {owl_attackpat99,5,8, "A503",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x0a212200, 0x00a00898, 0x20208000, 0x80280000, 0x08a00000, 0x22210a00, 0x00288098, 0x80202000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat100,2,8, "A504",0,0,1,1,1,1,0x2,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat101,2,8, "A505",0,-1,2,2,2,3,0x2,722,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat102,2,8, "A506",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x0a100000, 0x00100808, 0x00108000, 0x80100000, 0x08100000, 0x00100a00, 0x00108080, 0x80100000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat103,2,8, "A507",-1,0,1,2,2,2,0x2,721,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x04220000, 0x00200420, 0x00204000, 0x40200000, 0x04200000, 0x00220400, 0x00204020, 0x40200000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat104,4,8, "A508",0,-2,2,2,2,4,0x2,685,
    { 0x00f4fffd, 0xf0f0d0c0, 0xff7e0000, 0x1f3f3f2f, 0xd0f0f0e0, 0xfff40000, 0x3f3f1f0d, 0x007effff},
    { 0x00200200, 0x00200080, 0x01200000, 0x00200004, 0x00200040, 0x02200000, 0x00200008, 0x00200100}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat105,5,8, "A509",-1,0,1,2,2,2,0x2,721,
    { 0x3f3f1d00, 0x007cfc7c, 0xd0f0f000, 0xfcf40000, 0xfc7c0000, 0x1d3f3f00, 0x00f4fcf4, 0xf0f0d000},
    { 0x21220000, 0x00280024, 0x00202000, 0x00a00000, 0x00280000, 0x00222100, 0x00a00060, 0x20200000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat105,3,0.400000},
  {owl_attackpat106,4,8, "A510",-1,-2,1,2,2,4,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00},
    { 0xa2904000, 0x68180008, 0x04192800, 0x0090a410, 0x00186810, 0x4090a200, 0xa4900080, 0x28190400}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat107,4,8, "A511",0,-1,2,2,2,3,0x2,685,
    { 0x003dfdfd, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat107,3,0.010000},
  {owl_attackpat108,3,8, "A512",-1,-2,1,1,2,3,0x2,647,
    { 0xc0f4ec00, 0xfcb0d000, 0xef7f0f00, 0x1c38fcfc, 0xd0b0fcfc, 0xecf4c000, 0xfc381c00, 0x0f7fef00},
    { 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x80200400, 0x08204000, 0x40200800, 0x04208000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat109,1,8, "A513",-2,0,1,2,3,2,0x4,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat110,4,8, "A514",-1,-1,2,1,3,2,0x4,685,
    { 0xf8fc7cfc, 0x7cfcf800, 0xf4fcbc00, 0xbffff700, 0xf8fc7c00, 0x7cfcf800, 0xf7ffbf00, 0xbcfcf4fc},
    { 0x90280400, 0x08246000, 0x40a01800, 0x24608000, 0x60240800, 0x04289000, 0x80602400, 0x18a04000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat110,3,1.600000},
  {owl_attackpat111,4,8, "A601",-1,0,1,3,2,3,0x1,757,
    { 0x3f3f0d00, 0x003cfc7c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0d3f3f00, 0x00f0fcf4, 0xf0f0c000},
    { 0x10200800, 0x00248000, 0x80201000, 0x08600000, 0x80240000, 0x08201000, 0x00600800, 0x10208000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat112,1,8, "A602",-1,0,1,1,2,1,0x5,721,
    { 0x3c3c3800, 0x00fcbc00, 0xb0f0f000, 0xf8fc0000, 0xbcfc0000, 0x383c3c00, 0x00fcf800, 0xf0f0b000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat112,3,1.000000},
  {owl_attackpat113,4,8, "A603",0,-2,1,2,1,4,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfdfd0000, 0x3c3c3c14, 0xf0f0f050, 0xffff0000, 0x3c3c3c3c, 0x00fdfd00},
    { 0x00a10000, 0x20200010, 0x00280000, 0x00202000, 0x00202000, 0x00a10000, 0x20200010, 0x00280000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat113,3,1.011760},
  {owl_attackpat114,3,8, "A603b",0,-1,1,2,1,3,0x2,685,
    { 0x007dff00, 0xd0f0f0d0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xff7d0000, 0x1c3c3c1c, 0x00f4fc00},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat114,3,0.610000},
  {owl_attackpat115,2,8, "A604",0,-1,1,3,1,4,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00a00000, 0x20200000, 0x00280000, 0x00202000, 0x00202000, 0x00a00000, 0x20200000, 0x00280000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat116,1,8, "A605",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat117,4,8, "A606",0,-2,1,2,1,4,0x2,685,
    { 0x007fff00, 0xd0f0f0f0, 0xfdf70000, 0x3c3c1c34, 0xf0f0d070, 0xff7f0000, 0x1c3c3c3c, 0x00f7fd00},
    { 0x00214000, 0x40200010, 0x04220000, 0x00200420, 0x00204020, 0x40210000, 0x04200010, 0x00220400}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat117,3,0.610000},
  {owl_attackpat118,2,8, "A607",0,-1,1,1,1,2,0x2,685,
    { 0x007cfc00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0x00f4fc00},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x1000010,36.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat118,3,1.006000},
  {owl_attackpat119,2,8, "A607b",0,-1,1,1,1,2,0x2,685,
    { 0x007cfc00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0x00f4fc00},
    { 0x00240400, 0x00205000, 0x40600000, 0x14200000, 0x50200000, 0x04240000, 0x00201400, 0x00604000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat119,3,1.006000},
  {owl_attackpat120,2,8, "A608",0,-1,1,1,1,2,0x2,685,
    { 0x007cfc00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0x00f4fc00},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat120,3,0.378160},
  {owl_attackpat121,2,8, "A609",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat122,2,8, "A610",0,-2,1,1,1,3,0x2,648,
    { 0x00fcf000, 0xf0f03000, 0x3fff0000, 0x303c3c3c, 0x30f0f0f0, 0xf0fc0000, 0x3c3c3000, 0x00ff3f00},
    { 0x00240000, 0x00201000, 0x00620000, 0x10200020, 0x10200020, 0x00240000, 0x00201000, 0x00620000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat122,3,1.000000},
  {owl_attackpat123,4,8, "A611",-1,-1,1,2,2,3,0x2,722,
    { 0x34ffff00, 0xf0fcf4f0, 0xfcfc7000, 0x7cfc3c00, 0xf4fcf000, 0xffff3400, 0x3cfc7c3c, 0x70fcfc00},
    { 0x10a24000, 0x60240020, 0x04281000, 0x00602400, 0x00246000, 0x40a21000, 0x24600020, 0x10280400}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat123,3,0.010000},
  {owl_attackpat124,4,8, "A612",-1,-1,1,2,2,3,0x2,648,
    { 0xbcffff00, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfc00},
    { 0x18622100, 0x10a40860, 0x20249000, 0x80681000, 0x08a41000, 0x21621800, 0x10688024, 0x90242000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat124,3,0.010000},
  {owl_attackpat125,3,8, "A613",-1,-2,1,1,2,3,0x2,685,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00},
    { 0x20240000, 0x00281000, 0x00602200, 0x10a00080, 0x10280008, 0x00242000, 0x00a01000, 0x22600000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat125,3,1.000000},
  {owl_attackpat126,4,8, "A614",-1,-2,1,1,2,3,0x2,685,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00},
    { 0x90240000, 0x08241000, 0x02601a00, 0x10608088, 0x10240888, 0x00249000, 0x80601000, 0x1a600200}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat126,3,1.000000},
  {owl_attackpat127,3,4, "A615",0,-2,2,2,2,4,0x2,686,
    { 0x00fffcfc, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0x00fffcfc},
    { 0x00a90000, 0x20202010, 0x00a90000, 0x20202010, 0x20202010, 0x00a90000, 0x20202010, 0x00a90000}
   , 0x1000010,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat127,3,0.010000},
  {owl_attackpat128,4,8, "A616",-1,-2,2,1,3,3,0x4,722,
    { 0xf8fc7c7c, 0x7cfcf800, 0xf4fcbc00, 0xbffff500, 0xf8fc7c00, 0x7cfcf800, 0xf5ffbf00, 0xbcfcf4f4},
    { 0x90200000, 0x08240000, 0x00201800, 0x00608000, 0x00240800, 0x00209000, 0x80600000, 0x18200000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat128,3,1.011760},
  {owl_attackpat129,5,8, "A617",-1,0,2,2,3,2,0x2,723,
    { 0x3c3f3f3f, 0x00fcfcf0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3c00, 0x00ffff3f, 0xf0f0f0f0},
    { 0x18222120, 0x00a40860, 0x20209000, 0x806a0000, 0x08a40000, 0x21221800, 0x006a8024, 0x90202020}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat129,3,0.010000},
  {owl_attackpat130,5,8, "A618",-1,-1,1,1,2,2,0x2,722,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0xa4988000, 0xa8182400, 0x08986800, 0x6090a800, 0x2418a800, 0x8098a400, 0xa8906000, 0x68980800}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat130,0,3.000000},
  {owl_attackpat131,1,8, "A619",0,-1,1,0,1,1,0xa,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat132,4,8, "A701",-1,-2,1,1,2,3,0x0,685,
    { 0xf8fcfc00, 0xfcfcf800, 0xfdffbc00, 0xbcfcfc34, 0xf8fcfc70, 0xfcfcf800, 0xfcfcbc00, 0xbcfffd00},
    { 0x90240000, 0x08241000, 0x00621800, 0x10608020, 0x10240820, 0x00249000, 0x80601000, 0x18620000}
   , 0x1000000,79.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat132,3,0.010000},
  {owl_attackpat133,4,8, "A702",-1,-2,2,1,3,3,0x0,685,
    { 0xf8fcfc10, 0xfcfcf800, 0xffffbc00, 0xbcfdfc3c, 0xf8fcfcf0, 0xfcfcf800, 0xfcfdbc00, 0xbcffff10},
    { 0x90240400, 0x08245000, 0x40621800, 0x14608020, 0x50240820, 0x04249000, 0x80601400, 0x18624000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat133,3,0.010000},
  {owl_attackpat134,4,8, "A703",0,-1,2,2,2,3,0x0,685,
    { 0x003cff3d, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0d, 0x00f0fcf0},
    { 0x00284200, 0x40202080, 0x04a00000, 0x20200400, 0x20204000, 0x42280000, 0x04202008, 0x00a00400}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat135,3,8, "A704",-1,-1,1,2,2,3,0x0,685,
    { 0x3cfffc00, 0xf0fcfc30, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcff3c00, 0x3cfcfc30, 0xf0fcfc00},
    { 0x18660000, 0x10241820, 0x00649000, 0x90601000, 0x18241000, 0x00661800, 0x10609020, 0x90640000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat136,2,8, "A705b",-1,0,1,2,2,2,0x0,721,
    { 0x0c3f0c00, 0x0030fc30, 0xc0f0c000, 0xfc300000, 0xfc300000, 0x0c3f0c00, 0x0030fc30, 0xc0f0c000},
    { 0x00220000, 0x00200020, 0x00200000, 0x00200000, 0x00200000, 0x00220000, 0x00200020, 0x00200000}
   , 0x1000000,61.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat136,3,0.400000},
  {owl_attackpat137,3,8, "A706",-1,0,1,2,2,2,0x0,720,
    { 0x0c3f0f00, 0x0030fcf0, 0xc0f0c000, 0xfc300000, 0xfc300000, 0x0f3f0c00, 0x0030fc3c, 0xc0f0c000},
    { 0x00220800, 0x00208020, 0x80200000, 0x08200000, 0x80200000, 0x08220000, 0x00200820, 0x00208000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat137,3,0.016000},
  {owl_attackpat138,3,8, "A707",-1,0,1,2,2,2,0x0,721,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x04220800, 0x00208420, 0x80204000, 0x48200000, 0x84200000, 0x08220400, 0x00204820, 0x40208000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat138,3,0.019600},
  {owl_attackpat139,4,8, "A708",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat139,3,0.610000},
  {owl_attackpat140,4,8, "A709",-1,0,1,2,2,2,0x0,758,
    { 0x1f3f0400, 0x00347c3c, 0x40f0d000, 0xf4700000, 0x7c340000, 0x043f1f00, 0x0070f4f0, 0xd0f04000},
    { 0x08200000, 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x00200800, 0x00208000, 0x80200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat140,3,1.186000},
  {owl_attackpat141,4,8, "A710",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat141,3,0.016000},
  {owl_attackpat142,6,8, "A711",-1,0,1,3,2,3,0x0,720,
    { 0x3f3f1f00, 0x007cfcfc, 0xd0f0f000, 0xfcf40000, 0xfc7c0000, 0x1f3f3f00, 0x00f4fcfc, 0xf0f0d000},
    { 0x10200a00, 0x00248080, 0x80201000, 0x08600000, 0x80240000, 0x0a201000, 0x00600808, 0x10208000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat143,4,8, "A712",0,-1,3,2,3,3,0x0,686,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00280202, 0x00202080, 0x00a00000, 0x20200000, 0x20200000, 0x02280000, 0x0020200a, 0x00a00000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat144,6,8, "A713",-1,0,2,2,3,2,0x0,723,
    { 0x3c3f3f1d, 0x00fcfcf0, 0xf0f0f000, 0xfffd0000, 0xfcfc0000, 0x3f3f3c00, 0x00fdff3d, 0xf0f0f0d0},
    { 0x14222200, 0x00a404a0, 0x20205000, 0x40680000, 0x04a40000, 0x22221400, 0x00684028, 0x50202000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat144,3,1.600000},
  {owl_attackpat145,7,8, "A714",0,-1,3,2,3,3,0x0,686,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfc},
    { 0x00284280, 0x40202080, 0x04a00000, 0x20200600, 0x20204000, 0x42280000, 0x06202008, 0x00a00408}
   , 0x1000000,82.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat145,3,0.010000},
  {owl_attackpat146,6,8, "A715",0,-2,2,1,2,3,0x0,647,
    { 0x00fcf47c, 0xf0f07000, 0x7dfc0000, 0x373f3d04, 0x70f0f040, 0xf4fc0000, 0x3d3f3700, 0x00fc7df4},
    { 0x00280024, 0x00202000, 0x00a00000, 0x21220000, 0x20200000, 0x00280000, 0x00222100, 0x00a00060}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat146,3,0.376000},
  {owl_attackpat147,6,8, "A716",-1,0,1,2,2,2,0x0,720,
    { 0x3d3f1d00, 0x007cfc74, 0xd0f0f000, 0xfcf40000, 0xfc7c0000, 0x1d3f3d00, 0x00f4fc74, 0xf0f0d000},
    { 0x10220800, 0x00248020, 0x80201000, 0x08600000, 0x80240000, 0x08221000, 0x00600820, 0x10208000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat147,3,1.000000},
  {owl_attackpat148,4,8, "A717",-1,-1,1,2,2,3,0x0,721,
    { 0x30ff3f00, 0x30fcf0f0, 0xf0fc3000, 0x3cfc3000, 0xf0fc3000, 0x3fff3000, 0x30fc3c3c, 0x30fcf000},
    { 0x00922200, 0x209000a0, 0x20180000, 0x00182000, 0x00902000, 0x22920000, 0x20180028, 0x00182000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat148,0,0.610000},
  {owl_attackpat149,7,8, "A718",0,-1,2,2,2,3,0x0,722,
    { 0x00747f74, 0x50f0d0c0, 0xf4740000, 0x1d3f1500, 0xd0f05000, 0x7f740000, 0x153f1d0c, 0x0074f474},
    { 0x00200120, 0x00200040, 0x00200000, 0x00220000, 0x00200000, 0x01200000, 0x00220004, 0x00200020}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat149,3,1.000000},
  {owl_attackpat150,7,8, "A801",-1,-1,1,2,2,3,0x2,722,
    { 0x1d7fff00, 0xd0f4fcf4, 0xfcf4d000, 0xfc7c1c00, 0xfcf4d000, 0xff7f1d00, 0x1c7cfc7c, 0xd0f4fc00},
    { 0x08228100, 0x80200860, 0x08208000, 0x80200800, 0x08208000, 0x81220800, 0x08208024, 0x80200800}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat151,5,8, "A802",-1,0,1,2,2,2,0x2,722,
    { 0x1d3f3f00, 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c, 0xd0f0f000},
    { 0x08220100, 0x00200860, 0x00208000, 0x80200000, 0x08200000, 0x01220800, 0x00208024, 0x80200000}
   , 0x1000020,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat152,4,8, "A803",-1,-1,1,2,2,3,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfcf8d400, 0xfc7c6c00, 0xfcf4e400, 0xffbf5c00, 0x6c7cfc3c, 0xd4f8fc00},
    { 0x08190000, 0x00102810, 0x00908000, 0xa0100000, 0x28100000, 0x00190800, 0x0010a010, 0x80900000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat152,0,1.600000},
  {owl_attackpat153,1,8, "A804",0,-1,1,2,1,3,0x2,685,
    { 0x00fcfa00, 0xf0f0b080, 0xbcfc0000, 0x383c3c00, 0xb0f0f000, 0xfafc0000, 0x3c3c3808, 0x00fcbc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat153,3,1.000000},
  {owl_attackpat154,5,8, "A805",-1,-2,1,2,2,4,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfffbd700, 0xfc7c6cfc, 0xfcf4e4fc, 0xffbf5c00, 0x6c7cfc3c, 0xd7fbff00},
    { 0x08190000, 0x00102810, 0x00908200, 0xa0100080, 0x28100008, 0x00190800, 0x0010a010, 0x82900000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat155,2,8, "A806",-1,-1,1,2,2,3,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x42600000, 0x14200008, 0x00240400, 0x00205000, 0x00201400, 0x00604200, 0x50200080, 0x04240000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat156,2,8, "A807",-1,-1,1,1,2,2,0x2,721,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x20601000, 0x10680000, 0x10242000, 0x00a41000, 0x00681000, 0x10602000, 0x10a40000, 0x20241000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat157,2,8, "A808",0,-1,1,2,1,3,0xa,648,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00192400, 0x00906010, 0x60900000, 0x24180000, 0x60900000, 0x24190000, 0x00182410, 0x00906000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat158,3,8, "A809",-1,-2,1,2,2,4,0x2,685,
    { 0xfcfcff00, 0xfcfcfcc0, 0xffffff00, 0xfcfcfcfc, 0xfcfcfcfc, 0xfffcfc00, 0xfcfcfc0c, 0xffffff00},
    { 0x84240000, 0x08201400, 0x01614a00, 0x50208094, 0x14200858, 0x00248400, 0x80205000, 0x4a610100}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat158,3,0.010000},
  {owl_attackpat159,2,8, "A810",-1,0,1,2,2,2,0x0,722,
    { 0x0c3f0c00, 0x0030fc30, 0xc0f0c000, 0xfc300000, 0xfc300000, 0x0c3f0c00, 0x0030fc30, 0xc0f0c000},
    { 0x04220000, 0x00200420, 0x00204000, 0x40200000, 0x04200000, 0x00220400, 0x00204020, 0x40200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat159,3,0.010000},
  {owl_attackpat160,4,8, "A811",-1,0,1,2,2,2,0x0,722,
    { 0x3c3f3f00, 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c, 0xf0f0f000},
    { 0x08220200, 0x002008a0, 0x00208000, 0x80200000, 0x08200000, 0x02220800, 0x00208028, 0x80200000}
   , 0x1000010,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat160,3,0.019600},
  {owl_attackpat161,5,8, "A901",-1,-1,1,2,2,3,0xa,648,
    { 0xc0ffff00, 0xfcf0f0f0, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xffffc000, 0xfc3c3c3c, 0x0cfcfc00},
    { 0x806a1200, 0x186020a0, 0x10a40800, 0x20249000, 0x20601800, 0x126a8000, 0x90242028, 0x08a41000}
   , 0x1000010,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat162,2,8, "A902",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x1000010,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat162,0,0.019600},
  {owl_attackpat163,2,8, "A902b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat163,0,0.019600},
  {owl_attackpat164,4,8, "A903",-1,-1,1,2,2,3,0xa,722,
    { 0x7cffff00, 0xf4fcfcf0, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7c00, 0x7cfcfc3c, 0xf4fcfc00},
    { 0x28120000, 0x00180820, 0x0010a000, 0x80900000, 0x08180000, 0x00122800, 0x00908020, 0xa0100000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat165,4,8, "A904",-1,-1,1,1,2,2,0xa,648,
    { 0xf0fcf400, 0xfcfc7000, 0x7cfc3c00, 0x34fcfc00, 0x70fcfc00, 0xf4fcf000, 0xfcfc3400, 0x3cfc7c00},
    { 0x60980000, 0x24182000, 0x00982400, 0x20906000, 0x20182400, 0x00986000, 0x60902000, 0x24980000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat165,0,0.016000},
  {owl_attackpat166,3,8, "A905",-1,-1,1,1,2,2,0xa,648,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x48980000, 0x24102800, 0x00988400, 0xa0106000, 0x28102400, 0x00984800, 0x6010a000, 0x84980000}
   , 0x1000010,36.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat167,5,8, "A907",-1,-1,2,2,3,3,0xa,648,
    { 0xf0fcfdff, 0xfcfcf040, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfdfcf000, 0xffff3f07, 0x3cfcfcfc},
    { 0x20680800, 0x1028a000, 0x80a42000, 0x28a01000, 0xa0281000, 0x08682000, 0x10a02800, 0x20a48000}
   , 0x1000010,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat167,3,1.000000},
  {owl_attackpat168,5,8, "A908",-1,-1,2,2,3,3,0xa,686,
    { 0xc0fcfcff, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f03, 0x0cfcfcfc},
    { 0x80681842, 0x1860a000, 0x90a40800, 0x28249100, 0xa0601800, 0x18688000, 0x91242802, 0x08a49004}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat168,3,0.050000},
  {owl_attackpat169,5,8, "A909",-1,-1,2,1,3,2,0xa,649,
    { 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc},
    { 0x20689810, 0x9068a000, 0x98a42000, 0x28a51800, 0xa0689000, 0x98682000, 0x18a52800, 0x20a49810}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat170,3,8, "A910",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00a80000, 0x20202000, 0x00a80000, 0x20202000, 0x20202000, 0x00a80000, 0x20202000, 0x00a80000}
   , 0x1000010,25.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat170,3,0.010000},
  {owl_attackpat171,3,8, "A911",0,-2,1,1,1,3,0x6,685,
    { 0x00f8fc00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0x00bfff00},
    { 0x00200000, 0x00200000, 0x02220000, 0x00200028, 0x002000a0, 0x00200000, 0x00200000, 0x00220200}
   , 0x1000010,25.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat171,3,0.010000},
  {owl_attackpat172,3,8, "A912",-1,-2,1,1,2,3,0x2,648,
    { 0xf8fcfc00, 0xfcfcf800, 0xffffbf00, 0xbcfcfcfc, 0xf8fcfcfc, 0xfcfcf800, 0xfcfcbc00, 0xbfffff00},
    { 0x90240000, 0x08241000, 0x00621900, 0x10608060, 0x10240824, 0x00249000, 0x80601000, 0x19620000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat173,4,8, "A913",0,-1,1,2,1,3,0x2,722,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00a28000, 0xa0200020, 0x08280000, 0x00202800, 0x0020a000, 0x80a20000, 0x28200020, 0x00280800}
   , 0x1000010,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat173,3,0.610000},
  {owl_attackpat174,4,8, "A914",0,-1,1,2,1,3,0x2,722,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00a28000, 0xa0200020, 0x08280000, 0x00202800, 0x0020a000, 0x80a20000, 0x28200020, 0x00280800}
   , 0x1000010,25.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat174,3,1.000000},
  {owl_attackpat175,3,8, "A915",0,-2,2,2,2,4,0x2,648,
    { 0x00fafeff, 0xf0f0e0a0, 0xffbf0000, 0x2f3f3f3f, 0xe0f0f0f0, 0xfefa0000, 0x3f3f2f2b, 0x00bfffff},
    { 0x00200800, 0x00208000, 0x80220000, 0x08200020, 0x80200020, 0x08200000, 0x00200800, 0x00228000}
   , 0x1000010,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat175,3,0.010000},
  {owl_attackpat176,5,8, "A916",-1,-1,1,2,2,3,0x2,722,
    { 0x0dffff00, 0xf0f0fcf4, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0d00, 0x3c3cfc7c, 0xc0fcfc00},
    { 0x08a20000, 0x20200820, 0x00288000, 0x80202000, 0x08202000, 0x00a20800, 0x20208020, 0x80280000}
   , 0x1000010,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat177,5,4, "A917",-1,-2,2,1,3,3,0x0,648,
    { 0xc0f0fc30, 0xfcf0c000, 0xfc3f0c00, 0x0c3ffc30, 0xc0f0fc30, 0xfcf0c000, 0xfc3f0c00, 0x0c3ffc30},
    { 0x80200820, 0x08208000, 0x80220800, 0x08228020, 0x80200820, 0x08208000, 0x80220800, 0x08228020}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat178,4,8, "A918",-1,-2,2,1,3,3,0x0,648,
    { 0xc0f0fc00, 0xfcf0c000, 0xfc3f0c00, 0x0c3cfc30, 0xc0f0fc30, 0xfcf0c000, 0xfc3c0c00, 0x0c3ffc00},
    { 0x80200800, 0x08208000, 0x80220800, 0x08208020, 0x80200820, 0x08208000, 0x80200800, 0x08228000}
   , 0x1000010,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat179,2,8, "A1001",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat179,3,1.096000},
  {owl_attackpat180,2,8, "A1001b",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x1000020,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat180,3,3.000000},
  {owl_attackpat181,2,8, "A1002",-1,-3,1,0,2,3,0x0,610,
    { 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0x003f3c00},
    { 0x00209000, 0x80600000, 0x18200000, 0x00240800, 0x00608000, 0x90200000, 0x08240000, 0x00201800}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat181,3,3.160000},
  {owl_attackpat182,2,8, "A1003",-1,-3,1,0,2,3,0x0,610,
    { 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0x003f3c00},
    { 0x00209000, 0x80600000, 0x18200000, 0x00240800, 0x00608000, 0x90200000, 0x08240000, 0x00201800}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat182,3,2.800000},
  {owl_attackpat183,2,8, "A1005",-1,-1,1,0,2,1,0x0,647,
    { 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00, 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00},
    { 0x80102000, 0x08900000, 0x20100800, 0x00188000, 0x00900800, 0x20108000, 0x80180000, 0x08102000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat183,0,1.810000},
  {owl_attackpat184,2,8, "A1005b",-1,-1,1,0,2,1,0x0,647,
    { 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00, 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00},
    { 0x80102000, 0x08900000, 0x20100800, 0x00188000, 0x00900800, 0x20108000, 0x80180000, 0x08102000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat184,0,1.810000},
  {owl_attackpat185,2,8, "A1006",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat186,2,8, "A1006b",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat186,0,0.010000},
  {owl_attackpat187,2,8, "A1008",-1,-1,0,1,1,2,0x0,683,
    { 0xfc300000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0xfc300000},
    { 0x88100000, 0x08100800, 0x00108800, 0x80108000, 0x08100800, 0x00108800, 0x80108000, 0x88100000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat187,0,0.016000},
  {owl_attackpat188,2,8, "A1008b",-1,0,1,2,2,2,0x0,721,
    { 0x2a3f3c00, 0x00f8f838, 0xf0f0a000, 0xbcbc0000, 0xf8f80000, 0x3c3f2a00, 0x00bcbcb0, 0xa0f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat188,3,0.376000},
  {owl_attackpat189,2,8, "A1009",0,-1,1,2,1,3,0x2,721,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00920000, 0x20100020, 0x00180000, 0x00102000, 0x00102000, 0x00920000, 0x20100020, 0x00180000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat189,0,1.000000},
  {owl_attackpat190,2,8, "A1010",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00},
    { 0x10200000, 0x00240000, 0x00201200, 0x00600080, 0x00240008, 0x00201000, 0x00600000, 0x12200000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat190,3,1.000000},
  {owl_attackpat191,4,8, "A1011",0,-1,1,1,1,2,0x2,685,
    { 0x00fc7400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x00fc7400},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat191,0,0.016000},
  {owl_attackpat192,3,8, "A1012",-1,-1,1,2,2,3,0x0,721,
    { 0xf0ffbc00, 0xbcfcf030, 0xf8fc3c00, 0x3cfcf800, 0xf0fcbc00, 0xbcfff000, 0xf8fc3c30, 0x3cfcf800},
    { 0x80611800, 0x18608010, 0x90240800, 0x08249000, 0x80601800, 0x18618000, 0x90240810, 0x08249000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat192,3,1.006000},
  {owl_attackpat193,2,8, "A1013",-1,0,1,2,2,2,0x0,722,
    { 0x0c3f3c00, 0x00f0fc30, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3c3f0c00, 0x003cfc30, 0xc0f0f000},
    { 0x04202000, 0x00a00400, 0x20204000, 0x40280000, 0x04a00000, 0x20200400, 0x00284000, 0x40202000}
   , 0x1000000,10.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat193,3,2.890000},
  {owl_attackpat194,4,8, "A1014",0,-4,1,1,1,5,0x2,648,
    { 0x00f4fc00, 0xf0f0d000, 0xff7f0000, 0x1c3c3c3c, 0xd0f0f0f0, 0xfcf40000, 0x3c3c1c00, 0x007fff00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat194,0,0.019600},
  {owl_attackpat195,4,8, "A1015",0,0,1,3,1,3,0x0,758,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00202000, 0x00a00000, 0x20200000, 0x00280000, 0x00a00000, 0x20200000, 0x00280000, 0x00202000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat195,3,1.096000},
  {owl_attackpat196,4,8, "A1015a",0,0,1,3,1,3,0x0,758,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00202000, 0x00a00000, 0x20200000, 0x00280000, 0x00a00000, 0x20200000, 0x00280000, 0x00202000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat196,3,1.096000},
  {owl_attackpat197,3,8, "A1016",0,-2,1,1,1,3,0x2,685,
    { 0x0070fc00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0x0037fe00},
    { 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x80100020, 0x08100000, 0x00100800, 0x00128000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat197,0,0.902176},
  {owl_attackpat198,3,8, "A1016a",0,-2,1,1,1,3,0x2,685,
    { 0x0070fc00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0x0037fe00},
    { 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x80100020, 0x08100000, 0x00100800, 0x00128000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat198,0,0.902176},
  {owl_attackpat199,4,8, "A1017",-1,-1,0,2,1,3,0x0,720,
    { 0xfe7f0000, 0x1c3c3c38, 0x00f4fc00, 0xf0f0d000, 0x3c3c1c00, 0x007ffe00, 0xd0f0f0b0, 0xfcf40000},
    { 0x80220000, 0x08200020, 0x00200800, 0x00208000, 0x00200800, 0x00228000, 0x80200020, 0x08200000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat199,3,1.366000},
  {owl_attackpat200,2,8, "A1018",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3e, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3e, 0x00f0f0f0},
    { 0x00120020, 0x00100020, 0x00100000, 0x00120000, 0x00100000, 0x00120000, 0x00120020, 0x00100020}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat201,2,8, "A1019",-1,0,1,3,2,3,0x0,722,
    { 0x3b3f3f00, 0x00fcf8fc, 0xf0f0b000, 0xbcfc0000, 0xf8fc0000, 0x3f3f3b00, 0x00fcbcfc, 0xb0f0f000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat201,3,2.461600},
  {owl_attackpat202,1,4, "A1020",-3,-1,1,3,4,4,0x0,648,
    { 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat202,3,0.024748},
  {owl_attackpat203,2,8, "A1100",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00240018, 0x00201000, 0x00600000, 0x12210000, 0x10200000, 0x00240000, 0x00211200, 0x00600090}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat203,3,1.810000},
  {owl_attackpat204,1,4, "A1101",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000},
    { 0x00110800, 0x00108010, 0x80100000, 0x08100000, 0x80100000, 0x08110000, 0x00100810, 0x00108000}
   , 0x1000000,93.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat204,0,5.000000},
  {owl_attackpat205,1,4, "A1101b",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000},
    { 0x00110800, 0x00108010, 0x80100000, 0x08100000, 0x80100000, 0x08110000, 0x00100810, 0x00108000}
   , 0x1000000,94.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat205,0,1.816000},
  {owl_attackpat206,1,8, "A1101c",-1,-1,0,1,1,2,0x0,683,
    { 0xfc300000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0xfc300000},
    { 0x44200000, 0x04200400, 0x00204400, 0x40204000, 0x04200400, 0x00204400, 0x40204000, 0x44200000}
   , 0x1000000,81.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat206,3,1.160000},
  {owl_attackpat207,2,8, "A1102",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000},
    { 0x02110800, 0x00108018, 0x80100000, 0x08100000, 0x80100000, 0x08110200, 0x00100890, 0x00108000}
   , 0x1000000,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat207,0,3.000000},
  {owl_attackpat208,2,8, "A1104",-1,-1,1,1,2,2,0x0,721,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x64900000, 0x24180400, 0x00186400, 0x40906000, 0x04182400, 0x00906400, 0x60904000, 0x64180000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat208,0,1.600000},
  {owl_attackpat209,4,8, "A1105",-1,-1,2,1,3,2,0x2,721,
    { 0xfcfc7c7c, 0x7cfcfc00, 0xf4fcfc00, 0xfffff500, 0xfcfc7c00, 0x7cfcfc00, 0xf5ffff00, 0xfcfcf4f4},
    { 0x40902400, 0x24904000, 0x60180400, 0x04186000, 0x40902400, 0x24904000, 0x60180400, 0x04186000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat209,0,1.600000},
  {owl_attackpat210,6,8, "A1106",-1,-1,2,2,3,3,0x2,758,
    { 0xfcff7f5f, 0x7cfcfcf0, 0xf4fcfc00, 0xfffdf500, 0xfcfc7c00, 0x7ffffc00, 0xf5fdff3f, 0xfcfcf4d4},
    { 0x50982400, 0x24946000, 0x60981400, 0x24586000, 0x60942400, 0x24985000, 0x60582400, 0x14986000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat210,0,1.960000},
  {owl_attackpat211,1,4, "A1107",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x1000000,95.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat211,0,1.160000},
  {owl_attackpat212,1,8, "A1107b",-2,0,1,1,3,1,0x0,683,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x1000000,96.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat212,0,0.662800},
  {owl_attackpat213,1,8, "A1107c",-1,0,1,1,2,1,0x0,720,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat213,0,0.662800},
  {owl_attackpat214,2,8, "A1108",0,-1,1,1,1,2,0x0,648,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x90600000, 0x18240000, 0x00241800, 0x00609000}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat214,3,0.610000},
  {owl_attackpat215,3,8, "A1109",-1,-2,2,2,3,4,0x2,685,
    { 0xd0faffff, 0xfcf4e0e0, 0xffbc1c00, 0x2f7fff0f, 0xe0f4fcc0, 0xfffad000, 0xff7f2f2f, 0x1cbcffff},
    { 0x80600000, 0x18200000, 0x01240800, 0x00209004, 0x00201840, 0x00608000, 0x90200000, 0x08240100}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat215,3,0.610000},
  {owl_attackpat216,1,8, "A1110",0,-3,1,2,1,5,0x2,648,
    { 0x00fcfa00, 0xf0f0b080, 0xbfff0000, 0x383c3c3c, 0xb0f0f0f0, 0xfafc0000, 0x3c3c3808, 0x00ffbf00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat217,4,8, "A1111",-2,-2,2,2,4,4,0x4,647,
    { 0xffffff3f, 0xfffdffff, 0xfcffffdc, 0xfffffcf0, 0xfffdff3c, 0xffffffdf, 0xfcffffff, 0xfffffcf0},
    { 0x68180400, 0x04186800, 0x4090a400, 0xa4904000, 0x68180400, 0x04186800, 0x4090a400, 0xa4904000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat218,2,8, "A1112",-1,-1,1,2,2,3,0x2,720,
    { 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x81900000, 0x28100004, 0x00180800, 0x0010a000, 0x00102800, 0x00908100, 0xa0100040, 0x08180000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat218,0,1.000000},
  {owl_attackpat219,3,8, "A1113",-2,-2,2,2,4,4,0x0,646,
    { 0xfcfcf400, 0xffff7f00, 0x7ffffcfd, 0xf4fcfc3c, 0x7ffffff1, 0xf4fcfcfc, 0xfcfcf400, 0xfcff7f00},
    { 0x00100000, 0x02110000, 0x00110018, 0x00100010, 0x00110210, 0x00100090, 0x00100000, 0x00110000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat219,0,0.016000},
  {owl_attackpat220,4,8, "A1114",-2,-2,2,2,4,4,0x0,683,
    { 0xfcfcf400, 0xfdff7f00, 0x7ffffcf5, 0xf4fcfc3c, 0x7ffffdf1, 0xf4fcfc7c, 0xfcfcf400, 0xfcff7f00},
    { 0x80100000, 0x08110000, 0x00110810, 0x00108010, 0x00110810, 0x00108010, 0x80100000, 0x08110000}
   , 0x1000000,81.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat220,0,0.016000},
  {owl_attackpat221,5,8, "A1115",-1,-1,2,2,3,3,0x0,685,
    { 0x5f3ffffd, 0xc4f4fcfc, 0xfcf0d400, 0xff7f4f00, 0xfcf4c400, 0xff3f5f00, 0x4f7ffffd, 0xd4f0fcfc},
    { 0x04294400, 0x40206410, 0x44a04000, 0x64200400, 0x64204000, 0x44290400, 0x04206410, 0x40a04400}
   , 0x1000000,81.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat222,6,8, "A1116",-1,-1,2,1,3,2,0x0,648,
    { 0x30fcfc54, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54},
    { 0x20641800, 0x10689000, 0x90642000, 0x18a41000, 0x90681000, 0x18642000, 0x10a41800, 0x20649000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat222,3,1.096000},
  {owl_attackpat223,2,8, "A1117",-1,-1,0,1,1,2,0x0,683,
    { 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00, 0xf0f0c000, 0x3c3c0c00, 0x003cfc00, 0xc0f0f000, 0xfcf00000},
    { 0x84180000, 0x08102400, 0x00904800, 0x60108000, 0x24100800, 0x00188400, 0x80106000, 0x48900000}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat223,0,3.000000},
  {owl_attackpat224,2,8, "A1117a",-1,-1,0,1,1,2,0x0,683,
    { 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00, 0xf0f0c000, 0x3c3c0c00, 0x003cfc00, 0xc0f0f000, 0xfcf00000},
    { 0x84180000, 0x08102400, 0x00904800, 0x60108000, 0x24100800, 0x00188400, 0x80106000, 0x48900000}
   , 0x1000020,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat224,0,3.000000},
  {owl_attackpat225,2,8, "A1118",-1,-1,1,1,2,2,0x2,721,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x00241800, 0x00609000, 0x90600000, 0x18240000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat225,3,1.600000},
  {owl_attackpat226,2,8, "A1119",0,0,1,2,1,2,0x0,721,
    { 0x003c2f00, 0x00b0f0c0, 0xe0f00000, 0x3c380000, 0xf0b00000, 0x2f3c0000, 0x00383c0c, 0x00f0e000},
    { 0x00200200, 0x00200080, 0x00200000, 0x00200000, 0x00200000, 0x02200000, 0x00200008, 0x00200000}
   , 0x1000020,36.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat226,3,0.256336},
  {owl_attackpat227,1,8, "A1121",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000},
    { 0x11200400, 0x00244004, 0x40201000, 0x04600000, 0x40240000, 0x04201100, 0x00600440, 0x10204000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat227,3,0.021760},
  {owl_attackpat228,2,8, "A1122",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat228,3,6.010000},
  {owl_attackpat229,2,8, "A1122a",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat229,3,6.010000},
  {owl_attackpat230,3,8, "A1123",0,-2,1,1,1,3,0x2,685,
    { 0x0070fc00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0x0037fe00},
    { 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x80100020, 0x08100000, 0x00100800, 0x00128000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat230,0,1.096000},
  {owl_attackpat231,3,8, "A1123a",0,-2,1,1,1,3,0x2,685,
    { 0x0070fc00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0x0037fe00},
    { 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x80100020, 0x08100000, 0x00100800, 0x00128000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat231,0,1.096000},
  {owl_attackpat232,1,8, "A1124",0,-1,2,1,2,2,0x0,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat232,0,1.096000},
  {owl_attackpat233,1,8, "A1124a",0,-1,2,1,2,2,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1000000,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat233,0,0.667600},
  {owl_attackpat234,6,8, "A1125",-2,-1,1,2,3,3,0x0,683,
    { 0xfcfe3c00, 0x3dfdfd20, 0xf0fcfc54, 0xfcfcf000, 0xfdfd3d00, 0x3cfefc54, 0xf0fcfc20, 0xfcfcf000},
    { 0x44982000, 0x24902400, 0x20984400, 0x60186000, 0x24902400, 0x20984400, 0x60186000, 0x44982000}
   , 0x1000000,76.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat235,1,4, "A1126",-1,-1,0,1,1,2,0x0,683,
    { 0xfc300000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0x0c3c0c00, 0x0030fc00, 0xc0f0c000, 0xfc300000},
    { 0x44200000, 0x04200400, 0x00204400, 0x40204000, 0x04200400, 0x00204400, 0x40204000, 0x44200000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat235,3,1.160000},
  {owl_attackpat236,2,8, "A1127",-1,-1,0,1,1,2,0x0,683,
    { 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00, 0xf0f0c000, 0x3c3c0c00, 0x003cfc00, 0xc0f0f000, 0xfcf00000},
    { 0x48240000, 0x04201800, 0x00608400, 0x90204000, 0x18200400, 0x00244800, 0x40209000, 0x84600000}
   , 0x1000020,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat236,3,1.369456},
  {owl_attackpat237,2,8, "A1127a",-1,-1,0,1,1,2,0x0,683,
    { 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00, 0xf0f0c000, 0x3c3c0c00, 0x003cfc00, 0xc0f0f000, 0xfcf00000},
    { 0x48240000, 0x04201800, 0x00608400, 0x90204000, 0x18200400, 0x00244800, 0x40209000, 0x84600000}
   , 0x1000020,70.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat237,3,1.369456},
  {owl_attackpat238,4,8, "A1128",0,-1,1,2,1,3,0x0,721,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00628800, 0x90208020, 0x88240000, 0x08201800, 0x80209000, 0x88620000, 0x18200820, 0x00248800}
   , 0x1000000,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat238,3,0.970000},
  {owl_attackpat239,5,8, "A1129",-1,-1,2,2,3,3,0x0,720,
    { 0x7dfffffc, 0xf4fcfcf4, 0xfcfcf400, 0xffff7f00, 0xfcfcf400, 0xffff7d00, 0x7fffff7c, 0xf4fcfcfc},
    { 0x10a49040, 0xa0641000, 0x18681000, 0x10642900, 0x1064a000, 0x90a41000, 0x29641000, 0x10681804}
   , 0x1000000,86.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat239,3,1.000000},
  {owl_attackpat240,4,8, "A1130",-2,-3,2,1,4,4,0x0,610,
    { 0xf4fcfce0, 0xfffef400, 0xffff7f2f, 0x7cfeffff, 0xf4feffff, 0xfcfcf4e0, 0xfffe7c00, 0x7fffff2f},
    { 0x1018a400, 0x80946000, 0x68901000, 0x24580800, 0x60948000, 0xa4181000, 0x08582400, 0x10906800}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat241,1,8, "A1201",0,-1,1,1,1,2,0x0,648,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x1000000,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat241,0,0.016000},
  {owl_attackpat242,1,8, "A1203",-1,-1,0,1,1,2,0x0,683,
    { 0x30fc0000, 0x303c3000, 0x00fc3000, 0x30f03000, 0x303c3000, 0x00fc3000, 0x30f03000, 0x30fc0000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x1000010,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat242,3,0.016000},
  {owl_attackpat243,1,8, "A1204",-1,-1,0,1,1,2,0x0,683,
    { 0x30fc0000, 0x303c3000, 0x00fc3000, 0x30f03000, 0x303c3000, 0x00fc3000, 0x30f03000, 0x30fc0000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat243,3,0.034000},
  {owl_attackpat244,2,8, "A1205",-1,0,0,1,1,1,0x0,683,
    { 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000},
    { 0x08240000, 0x00201800, 0x00608000, 0x90200000, 0x18200000, 0x00240800, 0x00209000, 0x80600000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat244,3,0.610000},
  {owl_attackpat245,2,8, "A1206",-1,0,0,1,1,1,0x0,683,
    { 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000},
    { 0x08240000, 0x00201800, 0x00608000, 0x90200000, 0x18200000, 0x00240800, 0x00209000, 0x80600000}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat245,3,0.630160},
  {owl_attackpat246,3,8, "A1207",-1,-2,1,0,2,2,0x0,647,
    { 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00},
    { 0x20209000, 0x80680000, 0x18202000, 0x00a40800, 0x00688000, 0x90202000, 0x08a40000, 0x20201800}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat246,3,1.000000},
  {owl_attackpat247,2,8, "A1208",-2,-2,1,1,3,3,0x2,647,
    { 0xf8fcfc00, 0xfffefa00, 0xffffbfac, 0xbcfcfcfc, 0xfafefffc, 0xfcfcf8e8, 0xfcfcbc00, 0xbfffff00},
    { 0x00240000, 0x01201000, 0x00600204, 0x10200080, 0x10200108, 0x00240040, 0x00201000, 0x02600000}
   , 0x1000000,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat248,2,8, "A1209",0,-1,1,2,1,3,0x2,758,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00681000, 0x10602000, 0x10a40000, 0x20241000, 0x20601000, 0x10680000, 0x10242000, 0x00a41000}
   , 0x1000000,65.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat248,3,0.010000},
  {owl_attackpat249,3,8, "A1301",-2,-2,3,3,5,5,0xa,723,
    { 0xeaffffff, 0xfffaf8f8, 0xffffaf2f, 0xbfbfffff, 0xf8faffff, 0xffffeae0, 0xffbfbfbf, 0xafffffff},
    { 0x4094a000, 0xa4901000, 0x28580400, 0x10186800, 0x1090a400, 0xa0944000, 0x68181000, 0x04582800}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat249,0,0.010000},
  {owl_attackpat250,2,8, "A1302",-1,-2,1,1,2,3,0xa,647,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00},
    { 0x20240000, 0x00281000, 0x00602000, 0x10a00000, 0x10280000, 0x00242000, 0x00a01000, 0x20600000}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat251,3,8, "A1303",-1,-2,1,1,2,3,0xa,648,
    { 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00, 0x20fcfcfc, 0x20fcfcfc, 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00},
    { 0x20200000, 0x00280000, 0x00222000, 0x00a00020, 0x00280020, 0x00202000, 0x00a00000, 0x20220000}
   , 0x1000010,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat252,4,8, "A1303b",-1,-2,1,1,2,3,0xa,647,
    { 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00},
    { 0x20246000, 0x40a81000, 0x24622000, 0x10a80420, 0x10a84020, 0x60242000, 0x04a81000, 0x20622400}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat253,2,8, "A1304",0,-1,1,1,1,2,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x1000010,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat253,3,0.016000},
  {owl_attackpat254,5,8, "A1305",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x1000010,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat255,4,8, "A1305b",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a00202, 0x20200080, 0x00280000, 0x00202000, 0x00202000, 0x02a00000, 0x2020000a, 0x00280000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat256,5,8, "A1306",0,-1,2,2,2,3,0xa,686,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x1000010,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat257,6,8, "A1307",-1,-1,1,2,2,3,0xa,722,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221200, 0x086008a0, 0x10208800, 0x80248000, 0x08600800, 0x12228800, 0x80248028, 0x88201000}
   , 0x1000010,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat258,6,8, "A1308",-1,-1,1,2,2,3,0xa,685,
    { 0xd0fdff00, 0xfcf4f0d0, 0xfcfc1c00, 0x3c7cfc00, 0xf0f4fc00, 0xfffdd000, 0xfc7c3c1c, 0x1cfcfc00},
    { 0x80280200, 0x08202080, 0x00a00800, 0x20208000, 0x20200800, 0x02288000, 0x80202008, 0x08a00000}
   , 0x1000010,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat259,4,8, "A1309",0,-1,1,2,1,3,0xa,685,
    { 0x00f7fd00, 0xf0f0d070, 0xfc7c0000, 0x1c3c3c00, 0xd0f0f000, 0xfdf70000, 0x3c3c1c34, 0x007cfc00},
    { 0x00220400, 0x00204020, 0x40200000, 0x04200000, 0x40200000, 0x04220000, 0x00200420, 0x00204000}
   , 0x1000010,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat259,3,0.016000},
  {owl_attackpat260,3,8, "A1310",0,-1,1,2,1,3,0xa,647,
    { 0x00fffd00, 0xf0f0f070, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfdff0000, 0x3c3c3c34, 0x00fcfc00},
    { 0x00221400, 0x00604020, 0x50200000, 0x04240000, 0x40600000, 0x14220000, 0x00240420, 0x00205000}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat261,6,8, "A1310b",-1,-1,1,2,2,3,0xa,648,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221600, 0x086048a0, 0x50208800, 0x84248000, 0x48600800, 0x16228800, 0x80248428, 0x88205000}
   , 0x1000010,31.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat262,4,8, "A1311",-1,-1,1,2,2,3,0xa,722,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x28920000, 0x20180820, 0x0018a000, 0x80902000, 0x08182000, 0x00922800, 0x20908020, 0xa0180000}
   , 0x1000010,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat263,4,8, "A1311b",-1,-1,1,3,2,4,0xa,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x28920000, 0x20180820, 0x0018a000, 0x80902000, 0x08182000, 0x00922800, 0x20908020, 0xa0180000}
   , 0x1000010,81.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat264,5,8, "A1312",-1,-1,2,2,3,3,0xa,685,
    { 0xf0fcfffd, 0xfcfcf0c0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfffcf000, 0xffff3f0d, 0x3cfcfcfc},
    { 0x60280200, 0x04282080, 0x00a02400, 0x20a04000, 0x20280400, 0x02286000, 0x40a02008, 0x24a00000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat265,2,8, "A1313",-1,-2,2,3,3,5,0xa,722,
    { 0x0e7effff, 0xd0f0fce8, 0xfff7c300, 0xff3f1fff, 0xfcf0d0fc, 0xff7e0e00, 0x1f3fffaf, 0xc3f7ffff},
    { 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat266,3,8, "A1314",-1,-2,1,1,2,3,0xa,648,
    { 0xf0fcf800, 0xfcfcb000, 0xbfff3d00, 0x38fcfc7c, 0xb0fcfcf4, 0xf8fcf000, 0xfcfc3800, 0x3dffbf00},
    { 0x20240000, 0x00281000, 0x00602000, 0x10a00000, 0x10280000, 0x00242000, 0x00a01000, 0x20600000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat267,3,8, "A1315",-2,-1,1,2,3,3,0xa,721,
    { 0xfcffff00, 0xfffffff0, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfffffcfc, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08210000, 0x00220910, 0x00208060, 0x80200000, 0x09220000, 0x00210824, 0x00208010, 0x80200000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat268,4,8, "A1316",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00280206, 0x00202080, 0x00a00000, 0x21200000, 0x20200000, 0x02280000, 0x0020210a, 0x00a00040}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat269,3,8, "A1317",-1,-1,1,2,2,3,0xa,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08290100, 0x00202850, 0x00a08000, 0xa0200000, 0x28200000, 0x01290800, 0x0020a014, 0x80a00000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat269,3,0.610000},
  {owl_attackpat270,4,8, "A1318",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08291900, 0x0060a850, 0x90a08000, 0xa8240000, 0xa8600000, 0x19290800, 0x0024a814, 0x80a09000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat270,3,0.610000},
  {owl_attackpat271,4,8, "A1319",-1,-2,2,1,3,3,0xa,610,
    { 0xf0f0f4fc, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0x3f3f7fff},
    { 0x90202000, 0x08a40000, 0x20201800, 0x00688000, 0x00a40800, 0x20209000, 0x80680000, 0x18202000}
   , 0x1000010,61.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat271,3,1.000000},
  {owl_attackpat272,3,8, "A1319b",-1,0,2,2,3,2,0xa,685,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x09120200, 0x001008a4, 0x00108000, 0x80100000, 0x08100000, 0x02120900, 0x00108068, 0x80100000}
   , 0x1000010,30.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat273,5,8, "A1319c",-1,-2,2,1,3,3,0xa,648,
    { 0xf0f0f4fc, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0x3f3f7fff},
    { 0x90202000, 0x08a40000, 0x22211800, 0x00688018, 0x00a40890, 0x20209000, 0x80680000, 0x18212200}
   , 0x1000010,61.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat273,3,1.000000},
  {owl_attackpat274,3,8, "A1320",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x80681000, 0x18602000, 0x10a40800, 0x20249000, 0x20601800, 0x10688000, 0x90242000, 0x08a41000}
   , 0x1000010,80.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat275,3,8, "A1321",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x80281000, 0x08602000, 0x10a00800, 0x20248000, 0x20600800, 0x10288000, 0x80242000, 0x08a01000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat276,3,8, "A1322",-1,-2,1,0,2,2,0xa,648,
    { 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00},
    { 0x20200000, 0x00280000, 0x00202200, 0x00a00080, 0x00280008, 0x00202000, 0x00a00000, 0x22200000}
   , 0x1000010,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat277,4,8, "A1323",0,-1,3,1,3,2,0xa,649,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40808, 0x20209000, 0x80680000, 0x1a202000, 0x90202000, 0x08a40000, 0x20201a00, 0x00688080}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat278,1,8, "A1324",-3,-2,2,2,5,4,0xa,721,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x04200000, 0x00210400, 0x00204010, 0x40200000, 0x04210000, 0x00200410, 0x00204000, 0x40200000}
   , 0x1000000,90.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat279,4,8, "A1325",-1,-1,2,2,3,3,0x6,721,
    { 0xffffff3f, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xffffff00, 0xfcffffff, 0xfcfcfcf0},
    { 0x54208820, 0x84248400, 0x88205400, 0x48624800, 0x84248400, 0x88205400, 0x48624800, 0x54208820}
   , 0x1000000,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat280,2,8, "A1326",-2,-2,2,2,4,4,0x9,757,
    { 0xffffff80, 0xffffffff, 0xffffffff, 0xfcfcfefe, 0xffffffff, 0xffffffff, 0xfefcfcfc, 0xffffff0a},
    { 0x08211400, 0x00604810, 0x50208000, 0x84240000, 0x48600000, 0x14210800, 0x00248410, 0x80205000}
   , 0x1000000,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat281,3,8, "A1327",-2,-2,3,2,5,4,0x9,646,
    { 0xffffff80, 0xffffffff, 0xffffffff, 0xfcfcfefe, 0xffffffff, 0xffffffff, 0xfefcfcfc, 0xffffff0a},
    { 0x09219400, 0x80604814, 0x58208000, 0x84240800, 0x48608000, 0x94210900, 0x08248450, 0x80205800}
   , 0x1000010,85.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat282,7,8, "A1328",-1,-2,2,1,3,3,0xa,648,
    { 0xc0b0ecd4, 0xecb0c000, 0xef390d00, 0x0d39ef5f, 0xc0b0ecd4, 0xecb0c000, 0xef390d00, 0x0d39ef5f},
    { 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat283,4,8, "A1329",-1,-1,2,1,3,2,0xa,648,
    { 0xc0f0f4e4, 0xfcf04000, 0x7c3c0c00, 0x053eff00, 0x40f0fc00, 0xf4f0c000, 0xff3e0500, 0x0c3c7c6c},
    { 0x80601040, 0x18600000, 0x10240800, 0x00249100, 0x00601800, 0x10608000, 0x91240000, 0x08241004}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat284,6,8, "A1330",-1,-1,2,1,3,2,0xa,647,
    { 0xf0fcfcec, 0xfcfcf000, 0xfcfc3c00, 0x3ffeff00, 0xf0fcfc00, 0xfcfcf000, 0xfffe3f00, 0x3cfcfcec},
    { 0xa0289844, 0x8868a000, 0x98a02800, 0x29a48900, 0xa0688800, 0x9828a000, 0x89a42900, 0x28a09844}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat284,3,0.610000},
  {owl_attackpat285,3,8, "A1331",-1,-1,1,1,2,2,0xa,646,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x20984400, 0x60186000, 0x44982000, 0x24902400, 0x60186000, 0x44982000, 0x24902400, 0x20984400}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat285,0,1.000000},
  {owl_attackpat286,6,8, "A1332",0,-1,2,2,2,3,0xa,722,
    { 0x0074fffd, 0xd0f0d0c0, 0xfc740000, 0x1f3f1f00, 0xd0f0d000, 0xff740000, 0x1f3f1f0d, 0x0074fcfc},
    { 0x00204220, 0x40200080, 0x04200000, 0x00220400, 0x00204000, 0x42200000, 0x04220008, 0x00200420}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat286,3,1.000000},
  {owl_attackpat287,7,8, "A1333",-2,-1,1,2,3,3,0xa,683,
    { 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x02960200, 0x221212a8, 0x005800a8, 0x10102000, 0x12122200, 0x029602a8, 0x201010a8, 0x00580000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat287,0,0.016000},
  {owl_attackpat288,8,8, "A1334",-1,-1,2,2,3,3,0xa,723,
    { 0xfcffffff, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcfc},
    { 0xa8929602, 0xa85848a0, 0x5818a800, 0x8494a800, 0x4858a800, 0x9692a800, 0xa894842a, 0xa8185800}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat289,3,8, "A1335",-1,-2,1,1,2,3,0xa,610,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00},
    { 0x20249400, 0x80685000, 0x58602000, 0x14a40800, 0x50688000, 0x94242000, 0x08a41400, 0x20605800}
   , 0x1000010,41.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat289,3,1.600000},
  {owl_attackpat290,3,8, "A1335b",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08192100, 0x00902850, 0x20908000, 0xa0180000, 0x28900000, 0x21190800, 0x0018a014, 0x80902000}
   , 0x1000010,41.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat290,0,1.600000},
  {owl_attackpat291,5,8, "A1336",0,-1,2,2,2,3,0xa,649,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00a90224, 0x20202090, 0x00a80000, 0x21222000, 0x20202000, 0x02a90000, 0x20222118, 0x00a80060}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat291,3,1.600000},
  {owl_attackpat292,8,8, "A1337",-1,-1,2,2,3,3,0xa,686,
    { 0xf4fdfffb, 0xfcfcf4d0, 0xfcfc7c00, 0x7effff00, 0xf4fcfc00, 0xfffdf400, 0xffff7e1f, 0x7cfcfcbc},
    { 0xa0189602, 0x88586080, 0x58902800, 0x24948800, 0x60588800, 0x9618a000, 0x8894240a, 0x28905800}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat293,6,8, "A1338",-2,0,2,2,4,2,0xa,686,
    { 0x3f3f3d3f, 0x00ffff7e, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3d3f3f3e, 0x00fffff7, 0xf0f0f0f0},
    { 0x19220806, 0x00258924, 0x80209050, 0x89600000, 0x89250000, 0x08221914, 0x00608962, 0x90208040}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat294,6,8, "A1339",-1,0,1,2,2,2,0xa,722,
    { 0x1d3f3d00, 0x00f4fc74, 0xf0f0d000, 0xfc7c0000, 0xfcf40000, 0x3d3f1d00, 0x007cfc74, 0xd0f0f000},
    { 0x08220000, 0x00200820, 0x00208000, 0x80200000, 0x08200000, 0x00220800, 0x00208020, 0x80200000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat295,5,8, "A1340",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfdff00, 0xfcfcfcd0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffdfc00, 0xfcfcfc1c, 0xfcfcfc00},
    { 0x88180200, 0x08102880, 0x00908800, 0xa0108000, 0x28100800, 0x02188800, 0x8010a008, 0x88900000}
   , 0x1000010,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat296,5,8, "A1341",-2,0,2,2,4,2,0x6,759,
    { 0x3f3f3f3f, 0x00fcfffc, 0xf0f0f0c0, 0xffff0000, 0xfffc0000, 0x3f3f3f0c, 0x00ffffff, 0xf0f0f0f0},
    { 0x22202000, 0x00a80208, 0x20202080, 0x00a80000, 0x02a80000, 0x20202208, 0x00a80080, 0x20202000}
   , 0x1000010,40.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat297,5,8, "A1342",-2,-2,2,0,4,2,0x8,610,
    { 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0x00fcffff, 0x00ffffff, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f},
    { 0x2020a040, 0x82a90000, 0x28202018, 0x00a80900, 0x00a98200, 0xa0202090, 0x09a80000, 0x20202804}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat298,6,8, "A1343",-1,-2,1,1,2,3,0xa,648,
    { 0x50fcf400, 0xf4f47000, 0x7fff1500, 0x347c7c7c, 0x70f4f4f4, 0xf4fc5000, 0x7c7c3400, 0x15ff7f00},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x1000010,46.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat299,4,8, "A1344",0,-1,1,2,1,3,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00a88100, 0xa0202040, 0x08a80000, 0x20202800, 0x2020a000, 0x81a80000, 0x28202004, 0x00a80800}
   , 0x1000010,46.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat300,2,8, "A1345",-1,-2,1,1,2,3,0xa,647,
    { 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00},
    { 0x84240400, 0x08205400, 0x40604800, 0x54208000, 0x54200800, 0x04248400, 0x80205400, 0x48604000}
   , 0x1000010,46.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat301,6,8, "A1346",-1,-1,1,2,2,3,0x6,722,
    { 0x0dfd7f00, 0x70f0fcd4, 0xf4fcc000, 0xfc3c3400, 0xfcf07000, 0x7ffd0d00, 0x343cfc5c, 0xc0fcf400},
    { 0x08a00000, 0x20200800, 0x00288000, 0x80202000, 0x08202000, 0x00a00800, 0x20208000, 0x80280000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat302,5,8, "A1347",-1,-2,2,0,3,2,0xa,611,
    { 0x40f0f0c0, 0xf4f00000, 0x3f3f0500, 0x003c7f7f, 0x00f0f4f4, 0xf0f04000, 0x7f3c0000, 0x053f3f0f},
    { 0x00202080, 0x00a00000, 0x20200000, 0x00280201, 0x00a00000, 0x20200000, 0x02280000, 0x00202009}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat303,8,8, "A1348",-2,-1,1,1,3,2,0xa,685,
    { 0xdcfcfc00, 0xfdf7fc00, 0xfcfcdc34, 0xfc7cfc00, 0xfcf7fd00, 0xfcfcdc70, 0xfc7cfc00, 0xdcfcfc00},
    { 0x48688800, 0x9422a800, 0x88a48420, 0xa8205800, 0xa8229400, 0x88684820, 0x5820a800, 0x84a48800}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat303,3,0.376000},
  {owl_attackpat304,1,4, "A1401",0,0,3,3,3,3,0x6,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1000000,46.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat305,1,8, "A1403",0,-2,3,1,3,3,0x6,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3e, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00fffffe},
    { 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100020, 0x00100000, 0x00100000, 0x00120000}
   , 0x1000000,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {owl_attackpat306,1,8, "A1501",-1,0,0,1,1,1,0x0,721,
    { 0x0c3c0000, 0x00303c00, 0x00f0c000, 0xf0300000, 0x3c300000, 0x003c0c00, 0x0030f000, 0xc0f00000},
    { 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat306,3,0.058000},
  {owl_attackpat307,1,4, "A1502",0,0,0,2,0,2,0x0,721,
    { 0x003f0000, 0x00303030, 0x00f00000, 0x30300000, 0x30300000, 0x003f0000, 0x00303030, 0x00f00000},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat307,3,0.058000},
  {owl_attackpat308,4,8, "A1503",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000},
    { 0x88641000, 0x19621800, 0x10648824, 0x90249000, 0x18621900, 0x10648860, 0x90249000, 0x88641000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat308,3,0.016000},
  {owl_attackpat309,4,8, "A1503a",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000},
    { 0x88641000, 0x19621800, 0x10648824, 0x90249000, 0x18621900, 0x10648860, 0x90249000, 0x88641000}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat309,3,0.016000},
  {owl_attackpat310,6,8, "A1504",-1,-2,1,2,2,4,0x2,611,
    { 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00},
    { 0xa9620800, 0x18288824, 0x8024a900, 0x88a09040, 0x88281804, 0x0862a900, 0x90a08860, 0xa9248000}
   , 0x1000000,60.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat310,3,1.600000},
  {owl_attackpat311,4,8, "A1601",-1,0,1,2,2,2,0x2,722,
    { 0x053f3f00, 0x00f0f4f4, 0xf0f04000, 0x7c3c0000, 0xf4f00000, 0x3f3f0500, 0x003c7c7c, 0x40f0f000},
    { 0x00200200, 0x00200080, 0x00200000, 0x00200000, 0x00200000, 0x02200000, 0x00200008, 0x00200000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat311,3,1.960000},
  {owl_attackpat312,3,8, "A1602",-1,-2,1,1,2,3,0x2,610,
    { 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00},
    { 0x90248000, 0x88241000, 0x08601800, 0x10608800, 0x10248800, 0x80249000, 0x88601000, 0x18600800}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat312,3,1.000000},
  {owl_attackpat313,3,8, "A1603",-1,-2,1,1,2,3,0x2,610,
    { 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00},
    { 0x90242000, 0x08a41000, 0x20601800, 0x10688000, 0x10a40800, 0x20249000, 0x80681000, 0x18602000}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat313,3,1.000000},
  {owl_attackpat314,4,8, "A1604",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40920, 0x20209040, 0x81680000, 0x18222004, 0x90202040, 0x09a40000, 0x20221804, 0x00688120}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat314,3,1.000000},
  {owl_attackpat315,4,8, "A1605",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40908, 0x20209040, 0x81680000, 0x1a202004, 0x90202040, 0x09a40000, 0x20201a04, 0x00688180}
   , 0x1000010,55.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat315,3,1.000000},
  {owl_attackpat316,4,8, "A1606",-1,-2,1,1,2,3,0x2,610,
    { 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00},
    { 0x90248000, 0x88241000, 0x08601a00, 0x10608880, 0x10248808, 0x80249000, 0x88601000, 0x1a600800}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat316,3,1.000000},
  {owl_attackpat317,4,8, "A1607",-1,-2,1,1,2,3,0x2,610,
    { 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00},
    { 0x90242000, 0x08a41000, 0x20601a00, 0x10688080, 0x10a40808, 0x20249000, 0x80681000, 0x1a602000}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat317,3,1.000000},
  {owl_attackpat318,4,8, "A1608",-1,-2,1,1,2,3,0x2,647,
    { 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00},
    { 0x90248400, 0x88245000, 0x48601a00, 0x14608880, 0x50248808, 0x84249000, 0x88601400, 0x1a604800}
   , 0x1000010,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat319,5,8, "A1608b",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xfffd0000, 0x3f3f3f1f, 0xf0f0f0d0, 0xfffc0000, 0x3f3f3f0f, 0x00fdffff},
    { 0x00a40921, 0x20209040, 0x80680000, 0x18222000, 0x90202000, 0x09a40000, 0x20221805, 0x00688020}
   , 0x1000010,50.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat320,4,8, "A1609",-1,-2,1,2,2,4,0x2,722,
    { 0xfcffff00, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcffff00},
    { 0x58228000, 0x84240820, 0x09219400, 0x80604814, 0x08248450, 0x80225800, 0x48608020, 0x94210900}
   , 0x1000010,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {owl_attackpat321,5,8, "A1610",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0x00ffffff},
    { 0x00a80180, 0x20202040, 0x02a90000, 0x20202218, 0x20202090, 0x01a80000, 0x22202004, 0x00a90208}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat321,3,0.970000},
  {owl_attackpat322,6,8, "A1611",0,-2,2,3,2,5,0x2,686,
    { 0x00fdffff, 0xf0f0f0d0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffd0000, 0x3f3f3f1f, 0x00ffffff},
    { 0x00a80200, 0x20202080, 0x02a90000, 0x20202018, 0x20202090, 0x02a80000, 0x20202008, 0x00a90200}
   , 0x1000000,35.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat322,3,1.600000},
  {owl_attackpat323,4,8, "A1612",-1,-1,1,3,2,4,0x2,683,
    { 0x3c3f3f00, 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c, 0xf0f0f000},
    { 0x08220800, 0x00208820, 0x80208000, 0x88200000, 0x88200000, 0x08220800, 0x00208820, 0x80208000}
   , 0x1000000,45.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperowl_attackpat323,3,0.610000},
  {owl_attackpat324,6,8, "A1613",-1,-1,1,2,2,3,0x2,722,
    { 0x3cfdff00, 0xf0fcfcd0, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfffd3c00, 0x3cfcfc1c, 0xf0fcfc00},
    { 0x28906200, 0x60980880, 0x2418a000, 0x80982400, 0x08986000, 0x62902800, 0x24988008, 0xa0182400}
   , 0x1000010,75.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,0,0.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0,NULL,NULL,0,0.0}
};

#include "dfa.h"
static const state_rt_t state_owl_attackpat[24701] = {
{0,{0,0,0,0}},	{0,{0,1,2,0}},	{0,{2,3,4,5}},
{0,{5,6,7,8}},	{0,{8,9,10,11}},	{0,{11,12,13,14}},
{0,{14,15,16,17}},	{0,{17,17,18,0}},	{0,{18,19,20,21}},
{0,{21,22,23,24}},	{0,{24,25,26,27}},	{0,{27,28,29,0}},
{0,{29,30,31,32}},	{0,{32,33,33,34}},	{0,{34,35,36,37}},
{0,{37,38,38,0}},	{0,{38,0,39,0}},	{0,{39,0,0,0}},
{0,{39,0,40,0}},	{0,{40,0,0,0}},	{0,{40,41,42,43}},
{0,{43,44,45,46}},	{0,{46,47,48,49}},	{0,{49,50,50,51}},
{0,{51,0,0,0}},	{0,{51,0,0,0}},	{0,{51,52,53,54}},
{0,{54,55,56,57}},	{0,{57,58,59,60}},	{0,{60,61,62,63}},
{0,{63,64,65,66}},	{0,{66,67,68,69}},	{0,{69,70,71,72}},
{0,{72,73,74,0}},	{0,{74,75,76,77}},	{0,{77,78,79,0}},
{0,{79,80,81,0}},	{0,{81,81,80,0}},	{0,{81,82,82,83}},
{0,{83,0,0,0}},	{0,{83,0,0,0}},	{0,{83,84,85,86}},
{0,{86,87,88,89}},	{0,{89,86,90,88}},	{0,{90,91,92,93}},
{0,{93,94,95,0}},	{0,{95,96,97,0}},	{0,{96,95,96,0}},
{0,{96,97,98,0}},	{0,{98,99,100,0}},	{0,{100,101,102,0}},
{0,{102,103,104,0}},	{0,{104,0,0,0}},	{0,{104,0,0,0}},
{0,{104,105,105,106}},	{0,{0,0,106,0}},	{0,{106,107,107,0}},
{0,{107,108,108,0}},	{0,{108,0,0,0}},	{0,{108,0,0,0}},
{0,{108,109,110,111}},	{0,{111,112,113,114}},	{0,{110,111,114,113}},
{0,{114,115,115,116}},	{0,{116,117,118,0}},	{0,{118,119,120,0}},
{0,{117,118,118,0}},	{0,{119,117,117,0}},	{0,{119,120,121,0}},
{0,{121,115,122,0}},	{0,{122,114,114,0}},	{0,{122,113,113,0}},
{0,{122,0,0,0}},	{0,{122,0,0,0}},	{0,{122,0,0,0}},
{0,{88,88,88,0}},	{0,{89,89,89,0}},	{0,{120,121,122,123}},
{0,{123,124,125,126}},	{0,{126,127,128,129}},	{0,{129,130,131,132}},
{0,{132,133,134,135}},	{0,{135,136,137,138}},	{0,{138,139,140,141}},
{0,{141,136,142,136}},	{0,{142,143,144,0}},	{0,{144,145,146,0}},
{0,{146,147,148,0}},	{0,{148,149,144,0}},	{0,{149,0,0,0}},
{0,{149,0,0,0}},	{0,{149,0,0,0}},	{0,{149,0,0,0}},
{0,{149,150,151,152}},	{0,{152,153,154,155}},	{0,{155,156,157,157}},
{0,{157,158,158,158}},	{0,{158,159,160,161}},	{0,{161,162,163,0}},
{0,{163,164,165,0}},	{0,{165,164,164,0}},	{0,{165,166,167,0}},
{0,{167,168,0,0}},	{0,{168,169,0,0}},	{0,{0,169,0,0}},
{0,{169,0,0,0}},	{0,{169,0,0,0}},	{0,{169,0,0,0}},
{0,{169,170,171,172}},	{0,{172,173,174,174}},	{0,{174,175,175,175}},
{0,{175,175,175,175}},	{0,{175,176,177,146}},	{0,{177,0,0,0}},
{0,{177,0,0,0}},	{0,{177,153,153,0}},	{0,{177,0,0,0}},
{0,{177,0,0,0}},	{0,{177,0,0,0}},	{0,{177,178,179,180}},
{0,{179,179,179,179}},	{0,{179,179,179,179}},	{0,{167,179,167,136}},
{0,{145,145,145,0}},	{0,{178,179,180,181}},	{0,{181,182,183,184}},
{0,{184,181,182,185}},	{0,{185,186,187,188}},	{0,{188,189,190,191}},
{0,{191,192,193,194}},	{0,{194,191,192,195}},	{0,{195,190,196,192}},
{0,{184,185,186,196}},	{0,{196,197,198,199}},	{0,{199,0,200,201}},
{0,{201,0,199,0}},	{0,{201,0,198,202}},	{0,{202,0,203,0}},
{0,{203,204,205,206}},	{0,{206,207,208,207}},	{0,{205,206,207,208}},
{0,{208,209,210,194}},	{0,{210,0,211,0}},	{0,{209,0,210,192}},
{0,{210,211,211,212}},	{0,{212,213,213,214}},	{0,{214,212,212,215}},
{0,{215,216,216,188}},	{0,{216,217,217,0}},	{0,{217,216,216,218}},
{0,{218,213,213,219}},	{0,{219,214,214,220}},	{0,{220,213,213,221}},
{0,{221,212,212,182}},	{0,{216,211,211,0}},	{0,{217,210,210,212}},
{0,{219,219,219,220}},	{0,{193,193,193,0}},	{0,{219,219,219,219}},
{0,{219,219,219,219}},	{0,{219,219,219,219}},	{0,{219,0,0,0}},
{0,{219,219,219,219}},	{0,{183,183,183,183}},	{0,{218,218,218,218}},
{0,{218,218,218,218}},	{0,{218,0,0,0}},	{0,{218,218,218,218}},
{0,{218,218,218,219}},	{0,{219,220,220,221}},	{0,{221,222,222,223}},
{0,{223,223,223,224}},	{0,{224,224,224,225}},	{0,{225,226,226,227}},
{0,{227,225,225,228}},	{0,{228,228,228,229}},	{0,{223,223,223,229}},
{0,{222,222,222,229}},	{0,{221,221,221,221}},	{0,{224,224,224,224}},
{0,{227,227,227,228}},	{0,{228,228,228,228}},	{0,{228,227,227,227}},
{0,{228,228,228,229}},	{0,{229,229,229,229}},	{0,{229,228,228,228}},
{0,{227,227,227,229}},	{0,{229,230,230,231}},	{0,{231,231,231,231}},
{0,{231,231,231,231}},	{0,{231,231,221,232}},	{0,{232,222,232,222}},
{0,{219,219,219,232}},	{0,{220,220,220,232}},	{0,{232,232,232,233}},
{0,{233,233,233,234}},	{0,{0,0,0,234}},	{0,{234,235,236,237}},
{0,{237,238,239,240}},	{0,{240,241,242,243}},	{0,{243,244,244,245}},
{0,{245,246,247,248}},	{0,{248,249,250,251}},	{0,{251,252,253,254}},
{0,{254,251,251,255}},	{0,{255,256,257,258}},	{0,{258,259,260,261}},
{0,{261,262,263,264}},	{0,{264,261,261,265}},	{0,{265,266,267,268}},
{0,{268,269,270,269}},	{0,{270,264,265,271}},	{0,{271,263,263,263}},
{0,{271,272,273,274}},	{282,{274,275,276,277}},	{0,{277,274,278,279}},
{0,{279,280,281,281}},	{0,{281,282,283,284}},	{0,{284,285,284,286}},
{0,{286,287,288,289}},	{0,{289,286,289,289}},	{0,{289,290,291,292}},
{0,{292,284,293,287}},	{0,{293,283,284,285}},	{0,{293,282,285,285}},
{0,{293,281,284,294}},	{0,{294,280,281,282}},	{0,{294,295,296,297}},
{0,{297,298,299,300}},	{0,{300,297,301,302}},	{0,{302,303,304,305}},
{0,{305,0,306,0}},	{0,{306,0,307,308}},	{0,{308,300,301,309}},
{0,{309,0,303,310}},	{0,{310,0,304,305}},	{0,{310,0,311,312}},
{0,{312,0,0,0}},	{0,{312,0,0,313}},	{0,{0,0,0,313}},
{0,{0,0,0,313}},	{0,{0,0,0,313}},	{0,{313,314,313,315}},
{0,{315,316,317,318}},	{0,{318,318,318,319}},	{0,{319,319,319,320}},
{0,{320,321,320,322}},	{0,{322,323,324,325}},	{0,{325,325,325,326}},
{0,{324,324,324,323}},	{0,{325,326,325,327}},	{0,{327,328,329,330}},
{0,{330,330,330,331}},	{0,{331,331,331,332}},	{0,{330,330,330,332}},
{0,{332,333,332,334}},	{282,{334,335,336,337}},	{0,{337,337,337,337}},
{0,{337,337,337,337}},	{0,{337,338,337,339}},	{0,{339,340,341,342}},
{0,{342,341,341,341}},	{0,{342,343,342,344}},	{0,{344,337,345,339}},
{0,{338,338,338,338}},	{0,{337,337,337,344}},	{0,{344,345,344,346}},
{0,{346,347,260,348}},	{0,{258,258,258,258}},	{0,{347,348,347,349}},
{0,{349,350,267,351}},	{0,{351,352,353,354}},	{0,{347,354,265,349}},
{0,{0,0,0,354}},	{0,{354,354,354,355}},	{0,{342,342,342,342}},
{0,{354,354,354,355}},	{0,{355,356,357,358}},	{0,{358,359,360,361}},
{0,{361,362,363,364}},	{0,{364,365,366,367}},	{0,{367,368,369,370}},
{0,{370,371,372,373}},	{0,{369,370,371,368}},	{0,{372,373,374,375}},
{0,{375,376,377,374}},	{0,{377,377,377,377}},	{0,{377,377,377,378}},
{282,{378,378,378,378}},	{0,{378,378,378,378}},	{0,{378,379,379,380}},
{0,{380,380,380,381}},	{0,{381,381,381,382}},	{0,{375,376,376,0}},
{0,{377,377,377,0}},	{0,{374,374,374,0}},	{0,{379,379,379,379}},
{0,{379,379,379,379}},	{0,{379,379,379,379}},	{0,{379,379,379,379}},
{0,{379,379,379,379}},	{282,{366,366,366,366}},	{0,{378,379,380,381}},
{0,{381,378,382,380}},	{0,{382,377,381,379}},	{0,{382,383,384,385}},
{0,{385,386,387,386}},	{0,{387,385,388,385}},	{0,{388,384,387,384}},
{0,{388,383,386,383}},	{0,{388,382,383,382}},	{0,{388,381,389,381}},
{0,{389,0,390,0}},	{0,{390,0,389,0}},	{0,{390,0,388,0}},
{0,{390,0,387,0}},	{0,{390,391,392,391}},	{0,{392,390,390,390}},
{0,{392,389,389,389}},	{0,{386,0,392,0}},	{0,{392,0,393,0}},
{0,{382,0,0,0}},	{0,{392,0,0,0}},	{0,{382,0,0,0}},
{0,{391,0,389,0}},	{0,{391,0,386,0}},	{0,{391,0,0,0}},
{0,{377,0,0,0}},	{0,{390,0,383,0}},	{0,{390,0,384,0}},
{0,{390,0,0,0}},	{0,{390,0,0,0}},	{0,{390,0,379,0}},
{0,{390,0,380,0}},	{0,{390,0,0,0}},	{0,{0,0,376,0}},
{0,{389,0,377,0}},	{0,{389,0,376,0}},	{0,{389,0,373,0}},
{0,{389,0,0,0}},	{0,{389,0,0,0}},	{0,{389,340,390,342}},
{0,{339,339,339,341}},	{0,{389,338,338,340}},	{0,{344,344,389,346}},
{0,{389,347,390,347}},	{0,{346,346,346,346}},	{0,{389,345,345,345}},
{0,{389,344,390,344}},	{0,{390,358,359,358}},	{0,{357,357,357,357}},
{0,{389,356,356,356}},	{0,{389,0,361,0}},	{0,{389,0,0,0}},
{0,{389,390,391,390}},	{0,{391,389,389,389}},	{0,{391,392,393,392}},
{0,{393,394,395,394}},	{0,{395,393,393,393}},	{0,{395,392,392,392}},
{0,{395,391,392,391}},	{0,{395,396,397,390}},	{0,{397,345,346,345}},
{0,{397,344,344,344}},	{0,{397,0,349,0}},	{0,{397,0,0,0}},
{0,{397,0,347,0}},	{0,{397,398,399,0}},	{0,{399,400,340,339}},
{0,{400,0,342,0}},	{0,{400,0,343,0}},	{0,{398,0,0,0}},
{0,{399,0,341,0}},	{0,{399,400,401,0}},	{0,{401,0,339,0}},
{0,{401,401,401,401}},	{0,{401,401,401,401}},	{0,{401,401,402,403}},
{0,{314,314,403,314}},	{0,{0,0,403,0}},	{0,{0,403,0,0}},
{0,{397,397,397,399}},	{0,{402,402,402,402}},	{0,{368,368,368,368}},
{0,{0,401,0,0}},	{0,{401,401,401,401}},	{0,{401,402,403,404}},
{0,{404,405,406,407}},	{0,{407,408,307,304}},	{0,{303,407,306,303}},
{0,{407,406,305,302}},	{0,{407,408,304,301}},	{0,{408,409,303,300}},
{0,{409,408,302,299}},	{0,{0,409,308,0}},	{0,{409,408,307,0}},
{0,{409,410,409,409}},	{0,{410,411,412,412}},	{0,{412,413,0,0}},
{0,{0,412,0,0}},	{0,{404,411,0,0}},	{0,{411,410,0,0}},
{0,{411,409,0,0}},	{0,{0,411,0,0}},	{0,{400,410,0,0}},
{0,{410,406,0,0}},	{0,{410,411,412,412}},	{0,{380,412,380,383}},
{0,{412,413,412,386}},	{0,{283,413,283,283}},	{0,{413,412,414,282}},
{0,{394,414,394,394}},	{0,{397,414,397,397}},	{0,{0,414,0,0}},
{0,{414,413,0,0}},	{0,{403,414,403,403}},	{0,{414,415,416,417}},
{0,{415,414,415,416}},	{0,{416,417,418,419}},	{0,{332,419,332,332}},
{0,{419,418,331,331}},	{0,{384,419,384,384}},	{0,{419,420,387,387}},
{0,{0,420,0,0}},	{0,{420,418,385,385}},	{0,{391,420,393,393}},
{0,{420,420,420,420}},	{0,{420,420,420,420}},	{0,{377,377,377,377}},
{0,{380,380,380,380}},	{0,{388,388,388,388}},	{0,{417,418,419,420}},
{0,{420,421,422,423}},	{0,{423,420,424,422}},	{0,{424,425,426,427}},
{0,{427,428,429,428}},	{0,{429,427,430,427}},	{0,{428,426,427,426}},
{0,{429,425,430,425}},	{0,{430,431,432,431}},	{0,{432,430,433,430}},
{0,{433,429,430,429}},	{0,{433,428,434,428}},	{0,{434,435,436,435}},
{0,{436,434,435,434}},	{0,{436,433,434,433}},	{0,{436,437,438,432}},
{0,{438,439,440,431}},	{0,{440,438,441,430}},	{0,{441,442,443,444}},
{0,{444,436,445,428}},	{0,{445,435,446,427}},	{0,{444,434,443,426}},
{0,{445,433,446,425}},	{0,{446,432,447,424}},	{0,{441,431,447,423}},
{0,{447,430,445,422}},	{0,{447,429,445,421}},	{0,{447,428,448,420}},
{0,{448,427,443,419}},	{0,{448,449,450,418}},	{0,{450,451,452,417}},
{0,{452,450,453,416}},	{0,{453,454,455,456}},	{0,{456,448,457,414}},
{0,{446,447,457,413}},	{0,{445,446,455,412}},	{0,{456,445,457,411}},
{0,{457,444,458,410}},	{0,{442,443,458,409}},	{0,{444,442,456,408}},
{0,{457,441,456,407}},	{0,{457,440,455,406}},	{0,{457,439,454,405}},
{0,{457,458,459,460}},	{0,{460,459,459,459}},	{0,{460,458,461,458}},
{0,{461,462,463,463}},	{0,{463,456,464,456}},	{0,{456,455,464,455}},
{0,{455,454,462,454}},	{0,{463,453,456,453}},	{0,{463,452,452,452}},
{0,{463,451,451,451}},	{0,{463,464,465,466}},	{0,{466,467,468,469}},
{0,{466,466,469,468}},	{0,{469,470,471,472}},	{0,{472,466,473,466}},
{0,{473,465,474,465}},	{0,{464,464,471,464}},	{0,{463,463,472,463}},
{0,{472,462,473,462}},	{0,{461,461,473,461}},	{0,{473,474,469,460}},
{0,{474,475,476,475}},	{0,{476,474,475,474}},	{0,{473,473,474,473}},
{0,{475,476,477,0}},	{0,{477,0,478,0}},	{0,{473,478,479,0}},
{0,{479,480,481,482}},	{0,{482,0,483,0}},	{0,{483,0,484,0}},
{0,{480,0,483,0}},	{0,{483,0,484,0}},	{0,{484,0,481,0}},
{0,{0,0,484,0}},	{0,{484,485,479,0}},	{0,{0,0,478,0}},
{0,{484,485,465,0}},	{0,{479,0,466,0}},	{0,{0,0,467,0}},
{0,{483,484,485,486}},	{0,{486,0,471,0}},	{0,{0,0,470,0}},
{0,{485,0,473,0}},	{0,{477,0,470,0}},	{0,{0,477,484,0}},
{0,{484,485,486,487}},	{0,{0,0,469,0}},	{0,{486,487,488,489}},
{0,{489,489,490,491}},	{0,{491,488,492,490}},	{0,{492,493,494,495}},
{0,{495,496,497,488}},	{0,{487,487,487,487}},	{0,{486,486,495,486}},
{0,{495,485,496,485}},	{0,{496,492,484,484}},	{0,{496,483,483,483}},
{0,{496,482,482,482}},	{0,{496,497,498,0}},	{0,{0,0,498,0}},
{0,{498,0,499,0}},	{0,{448,499,500,448}},	{0,{500,0,501,0}},
{0,{0,0,500,0}},	{0,{500,0,0,0}},	{0,{500,0,0,0}},
{0,{500,0,0,0}},	{0,{500,501,489,0}},	{0,{501,502,503,457}},
{0,{493,503,504,0}},	{0,{0,0,504,0}},	{0,{493,501,0,0}},
{0,{503,449,504,0}},	{0,{485,0,504,0}},	{0,{458,504,458,458}},
{0,{487,0,0,0}},	{0,{503,503,503,503}},	{0,{503,503,503,503}},
{0,{431,431,431,431}},	{0,{446,446,446,446}},	{0,{452,452,452,452}},
{0,{500,501,502,503}},	{0,{499,500,503,502}},	{0,{503,504,505,506}},
{0,{506,507,508,305}},	{0,{505,506,508,304}},	{0,{508,505,509,303}},
{0,{507,504,509,302}},	{0,{509,510,511,308}},	{0,{508,509,511,307}},
{0,{511,512,513,314}},	{0,{510,511,513,313}},	{0,{513,514,515,516}},
{0,{512,513,516,515}},	{0,{516,517,518,514}},	{0,{518,317,519,309}},
{0,{517,316,519,308}},	{0,{519,315,520,307}},	{0,{520,314,521,306}},
{0,{517,313,521,305}},	{0,{521,312,519,304}},	{0,{521,522,523,524}},
{0,{520,521,524,523}},	{0,{524,525,526,527}},	{0,{527,334,528,300}},
{0,{528,333,529,299}},	{0,{529,332,530,298}},	{0,{530,331,531,297}},
{0,{531,330,532,296}},	{0,{530,329,529,295}},	{0,{531,350,350,350}},
{0,{530,531,532,349}},	{0,{529,348,531,348}},	{0,{531,531,532,533}},
{0,{530,530,533,532}},	{0,{533,533,534,535}},	{0,{535,536,537,364}},
{0,{534,535,537,363}},	{0,{534,534,537,362}},	{0,{533,533,537,361}},
{0,{360,360,537,360}},	{0,{375,375,375,375}},	{0,{536,536,537,536}},
{0,{535,535,537,535}},	{0,{537,537,536,534}},	{0,{537,0,538,0}},
{0,{536,0,538,0}},	{0,{0,0,538,0}},	{0,{0,0,538,0}},
{0,{538,0,537,0}},	{0,{538,538,539,538}},	{0,{537,537,539,537}},
{0,{539,540,541,542}},	{0,{529,0,542,0}},	{0,{0,0,542,0}},
{0,{542,542,531,0}},	{0,{542,542,543,544}},	{0,{541,541,541,543}},
{0,{543,544,545,546}},	{0,{546,400,547,400}},	{0,{545,399,545,399}},
{0,{546,398,398,398}},	{0,{516,516,546,516}},	{0,{515,515,515,515}},
{0,{545,514,546,514}},	{0,{517,0,546,0}},	{0,{516,0,516,0}},
{0,{545,0,0,0}},	{0,{520,520,545,520}},	{0,{519,519,545,519}},
{0,{518,518,545,518}},	{0,{545,523,546,523}},	{0,{510,0,546,0}},
{0,{546,0,0,0}},	{0,{546,546,546,546}},	{0,{546,546,546,546}},
{0,{512,512,512,512}},	{0,{517,517,517,517}},	{0,{544,545,546,547}},
{0,{547,544,545,546}},	{0,{547,543,544,545}},	{0,{547,548,549,220}},
{0,{549,227,550,227}},	{0,{550,226,549,226}},	{0,{550,225,548,225}},
{0,{550,224,547,224}},	{0,{550,230,433,230}},	{0,{550,229,432,229}},
{0,{550,228,431,228}},	{0,{550,227,430,227}},	{0,{550,234,433,234}},
{0,{550,233,432,233}},	{0,{550,232,431,232}},	{0,{550,231,430,231}},
{0,{550,551,552,553}},	{0,{553,550,554,552}},	{0,{554,549,553,551}},
{0,{554,235,555,227}},	{0,{555,234,554,226}},	{0,{555,233,553,225}},
{0,{555,232,552,224}},	{0,{555,231,551,223}},	{0,{555,556,557,558}},
{0,{558,555,556,557}},	{0,{558,554,555,556}},	{0,{558,253,455,219}},
{0,{558,252,454,218}},	{0,{558,251,453,217}},	{0,{558,250,452,216}},
{0,{558,271,271,271}},	{0,{558,558,558,559}},	{0,{559,559,559,289}},
{0,{559,559,559,288}},	{0,{287,287,287,287}},	{0,{558,559,558,559}},
{0,{558,558,558,558}},	{0,{558,558,558,0}},	{0,{558,558,558,558}},
{0,{558,558,558,0}},	{0,{558,558,558,559}},	{0,{559,559,559,339}},
{0,{180,180,180,180}},	{0,{187,187,187,187}},	{0,{193,193,193,193}},
{0,{200,200,200,200}},	{0,{255,255,255,255}},	{0,{554,555,556,557}},
{0,{557,558,559,558}},	{0,{559,560,561,560}},	{0,{555,556,561,556}},
{0,{561,562,563,562}},	{0,{563,557,558,557}},	{0,{563,564,565,564}},
{0,{565,565,566,565}},	{0,{551,551,552,551}},	{0,{565,553,554,553}},
{0,{549,549,554,549}},	{0,{564,544,565,546}},	{0,{547,547,547,547}},
{0,{564,549,549,549}},	{0,{552,552,552,552}},	{0,{547,547,547,547}},
{0,{554,554,562,554}},	{0,{555,555,555,555}},	{0,{561,537,558,539}},
{0,{561,553,562,553}},	{0,{554,542,542,542}},	{0,{561,561,561,562}},
{0,{562,562,562,562}},	{0,{562,562,562,562}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,563,564,556}},	{0,{564,0,0,0}},
{0,{564,0,0,0}},	{0,{564,556,556,556}},	{0,{564,556,565,556}},
{0,{565,0,0,0}},	{0,{565,557,558,550}},	{0,{565,0,0,0}},
{0,{552,552,561,552}},	{0,{564,554,555,547}},	{0,{564,551,565,551}},
{0,{545,545,545,545}},	{0,{564,549,549,549}},	{0,{564,550,551,543}},
{0,{564,545,545,545}},	{0,{564,545,554,545}},	{0,{564,565,559,545}},
{0,{565,566,567,568}},	{0,{568,568,569,568}},	{0,{569,564,565,566}},
{0,{569,563,564,565}},	{0,{569,0,570,0}},	{0,{563,563,563,563}},
{0,{563,563,563,563}},	{0,{568,569,570,509}},	{0,{570,508,509,508}},
{0,{506,507,570,507}},	{0,{570,506,507,506}},	{0,{570,565,571,505}},
{0,{571,504,504,504}},	{0,{503,503,571,503}},	{0,{571,502,502,502}},
{0,{565,501,501,501}},	{0,{570,571,572,0}},	{0,{531,0,572,0}},
{0,{572,569,570,0}},	{0,{0,0,570,0}},	{42,{571,572,573,572}},
{0,{573,571,574,571}},	{0,{574,570,573,570}},	{42,{571,569,572,569}},
{0,{573,568,571,568}},	{0,{567,567,570,567}},	{0,{572,566,569,566}},
{42,{572,565,573,565}},	{0,{564,564,564,564}},	{0,{572,563,563,563}},
{42,{562,562,562,562}},	{0,{571,561,561,561}},	{42,{571,560,568,560}},
{0,{571,559,572,559}},	{0,{558,572,558,558}},	{0,{572,557,570,557}},
{42,{572,0,573,0}},	{42,{511,0,0,0}},	{42,{572,0,571,0}},
{42,{0,0,0,0}},	{42,{571,0,569,0}},	{0,{571,0,572,0}},
{0,{0,572,0,0}},	{0,{572,0,570,0}},	{42,{572,0,0,0}},
{0,{572,0,0,0}},	{0,{572,0,0,0}},	{42,{572,0,0,0}},
{42,{572,0,0,0}},	{0,{572,0,573,0}},	{0,{0,573,0,0}},
{0,{573,0,562,0}},	{42,{573,0,0,0}},	{0,{495,0,573,0}},
{0,{0,0,572,0}},	{0,{461,461,572,461}},	{0,{572,572,573,572}},
{0,{459,459,573,459}},	{0,{570,570,570,570}},	{0,{572,572,572,572}},
{0,{0,0,572,0}},	{0,{531,531,572,531}},	{0,{0,0,572,0}},
{0,{0,0,572,0}},	{0,{572,452,453,452}},	{84,{572,573,574,573}},
{0,{574,453,454,453}},	{0,{569,449,454,449}},	{0,{573,574,575,574}},
{84,{575,569,570,569}},	{0,{575,449,450,449}},	{0,{575,445,450,445}},
{0,{444,444,575,444}},	{84,{575,565,565,565}},	{0,{568,568,568,568}},
{0,{574,575,576,441}},	{84,{576,562,577,562}},	{0,{573,573,573,439}},
{84,{576,560,577,560}},	{0,{577,577,577,563}},	{84,{577,577,577,577}},
{0,{577,577,577,577}},	{0,{577,0,0,0}},	{84,{577,0,0,0}},
{0,{577,574,574,574}},	{84,{577,0,0,0}},	{0,{577,0,0,0}},
{0,{0,0,577,0}},	{84,{577,0,0,0}},	{0,{577,0,0,0}},
{0,{577,568,568,568}},	{84,{0,0,0,0}},	{0,{566,576,566,566}},
{0,{576,0,0,0}},	{84,{576,0,0,0}},	{0,{576,0,0,0}},
{0,{576,420,421,420}},	{0,{549,419,420,419}},	{0,{575,418,419,418}},
{0,{575,417,417,417}},	{0,{416,416,575,416}},	{0,{575,415,415,415}},
{0,{558,0,0,0}},	{0,{559,0,0,0}},	{0,{561,0,0,0}},
{0,{561,0,572,0}},	{0,{564,0,0,0}},	{0,{571,485,488,485}},
{0,{571,484,487,484}},	{0,{571,483,486,483}},	{0,{571,482,485,482}},
{0,{571,481,484,481}},	{0,{571,480,483,480}},	{0,{571,479,482,479}},
{0,{571,478,481,478}},	{0,{571,477,477,477}},	{0,{571,571,571,476}},
{0,{543,0,571,0}},	{0,{571,0,0,0}},	{0,{571,0,0,0}},
{0,{571,0,572,0}},	{0,{572,0,0,0}},	{0,{572,0,0,0}},
{0,{536,0,503,0}},	{0,{539,0,502,0}},	{0,{570,571,572,573}},
{0,{573,574,575,576}},	{0,{576,577,578,579}},	{0,{579,574,574,574}},
{0,{579,580,581,581}},	{0,{570,570,571,572}},	{0,{580,573,575,575}},
{0,{570,570,570,570}},	{0,{579,580,581,577}},	{0,{581,570,571,572}},
{0,{581,582,583,584}},	{0,{584,585,565,566}},	{0,{585,586,587,569}},
{0,{587,588,564,564}},	{0,{588,589,590,590}},	{0,{590,590,590,590}},
{0,{590,591,592,591}},	{0,{592,592,592,592}},	{0,{589,589,592,589}},
{0,{592,593,594,593}},	{0,{594,594,595,587}},	{0,{595,596,597,598}},
{0,{598,598,598,598}},	{0,{598,599,598,599}},	{0,{599,599,599,599}},
{0,{597,597,597,597}},	{0,{598,599,598,597}},	{0,{599,600,601,602}},
{0,{602,602,602,594}},	{0,{602,602,602,602}},	{0,{602,602,602,602}},
{0,{602,602,602,602}},	{0,{602,602,602,602}},	{0,{602,602,602,603}},
{0,{603,604,605,606}},	{0,{606,607,607,607}},	{0,{607,608,609,608}},
{0,{609,610,610,610}},	{0,{604,604,604,604}},	{0,{609,605,605,605}},
{0,{609,610,611,607}},	{0,{611,603,612,603}},	{0,{612,613,614,615}},
{0,{615,599,599,599}},	{0,{615,600,600,600}},	{0,{615,587,587,587}},
{0,{594,592,594,594}},	{0,{614,597,615,597}},	{0,{599,599,599,599}},
{0,{595,595,614,595}},	{0,{614,607,615,607}},	{0,{615,593,612,593}},
{0,{615,586,616,588}},	{0,{592,591,592,591}},	{0,{590,590,590,590}},
{0,{596,595,596,592}},	{0,{613,614,615,601}},	{0,{583,583,583,583}},
{0,{586,586,586,614}},	{0,{598,598,598,598}},	{0,{613,614,615,616}},
{0,{616,617,617,617}},	{0,{617,618,619,618}},	{0,{619,619,619,619}},
{0,{614,614,614,614}},	{0,{618,615,615,615}},	{0,{618,619,618,616}},
{0,{619,613,614,613}},	{0,{619,620,621,622}},	{0,{622,623,609,609}},
{0,{623,624,610,610}},	{0,{624,625,561,561}},	{0,{625,602,604,604}},
{0,{625,607,626,607}},	{0,{606,606,626,606}},	{0,{626,615,615,615}},
{0,{626,604,624,604}},	{0,{626,597,598,599}},	{0,{603,602,603,602}},
{0,{601,601,601,601}},	{0,{624,625,626,610}},	{0,{595,595,595,595}},
{0,{608,608,608,625}},	{0,{625,626,627,628}},	{0,{628,629,629,629}},
{0,{629,628,630,628}},	{0,{627,627,627,627}},	{0,{629,629,629,629}},
{0,{629,630,629,628}},	{0,{626,624,626,624}},	{0,{629,630,626,626}},
{0,{630,622,622,622}},	{0,{630,621,621,621}},	{0,{618,616,618,618}},
{0,{621,619,629,619}},	{0,{618,618,629,618}},	{0,{629,613,614,615}},
{0,{629,623,630,619}},	{0,{613,613,613,613}},	{0,{629,630,631,631}},
{0,{631,632,633,633}},	{268,{633,631,632,632}},	{0,{633,631,631,631}},
{0,{633,633,634,634}},	{0,{628,628,629,629}},	{268,{633,627,628,628}},
{0,{627,627,627,627}},	{268,{632,625,626,626}},	{0,{632,633,625,625}},
{0,{633,632,624,624}},	{268,{633,634,623,623}},	{0,{634,635,622,622}},
{0,{635,618,618,618}},	{268,{635,620,620,620}},	{0,{623,623,623,623}},
{268,{618,618,618,618}},	{0,{633,614,614,614}},	{268,{633,616,616,616}},
{268,{633,615,615,615}},	{0,{633,614,614,614}},	{0,{633,613,613,613}},
{0,{633,633,633,633}},	{0,{633,633,633,633}},	{268,{632,632,632,632}},
{0,{632,632,632,632}},	{0,{632,0,0,0}},	{0,{632,0,0,0}},
{268,{632,0,0,0}},	{0,{632,633,633,633}},	{268,{633,0,0,0}},
{0,{633,0,0,0}},	{268,{633,0,0,0}},	{0,{633,634,635,0}},
{0,{635,633,636,0}},	{268,{636,0,633,0}},	{0,{636,0,0,0}},
{0,{636,0,0,0}},	{268,{636,0,0,0}},	{0,{636,623,623,623}},
{268,{0,0,0,0}},	{0,{635,0,0,0}},	{268,{635,0,0,0}},
{0,{619,619,619,619}},	{268,{634,0,0,0}},	{0,{634,0,0,0}},
{0,{634,0,0,0}},	{0,{634,634,634,634}},	{0,{634,0,0,0}},
{0,{634,635,0,0}},	{0,{635,634,0,0}},	{268,{635,636,0,0}},
{0,{636,635,0,0}},	{0,{636,628,628,628}},	{0,{636,627,627,627}},
{268,{636,0,0,0}},	{0,{636,611,0,0}},	{0,{636,610,0,0}},
{268,{636,0,0,0}},	{0,{636,0,0,0}},	{0,{636,637,638,639}},
{0,{639,640,638,638}},	{0,{640,641,637,637}},	{0,{641,636,636,636}},
{0,{639,639,635,635}},	{0,{640,638,634,634}},	{0,{633,633,633,633}},
{0,{639,640,641,632}},	{0,{641,635,631,631}},	{0,{641,642,630,630}},
{0,{642,641,629,629}},	{0,{642,640,628,628}},	{0,{642,643,627,627}},
{0,{643,644,626,626}},	{0,{625,644,625,625}},	{0,{644,624,624,624}},
{0,{644,623,623,623}},	{0,{622,622,644,622}},	{0,{644,639,620,621}},
{0,{644,645,629,620}},	{0,{645,619,646,619}},	{0,{646,647,648,0}},
{0,{648,0,649,0}},	{0,{649,0,0,0}},	{0,{579,0,0,0}},
{0,{648,649,650,0}},	{0,{650,0,0,0}},	{0,{650,0,0,0}},
{0,{650,0,0,0}},	{0,{650,639,0,0}},	{0,{584,0,0,0}},
{0,{649,637,638,0}},	{0,{649,642,643,0}},	{0,{649,0,650,0}},
{0,{650,634,635,0}},	{0,{587,650,0,0}},	{0,{650,591,0,0}},
{0,{650,590,0,0}},	{0,{650,589,0,0}},	{0,{0,646,0,0}},
{0,{649,0,0,0}},	{0,{0,0,649,0}},	{0,{649,626,627,0}},
{0,{649,0,0,0}},	{0,{649,0,0,0}},	{0,{649,0,0,0}},
{0,{649,0,0,0}},	{0,{649,650,0,0}},	{0,{650,651,652,653}},
{0,{653,654,655,656}},	{0,{656,657,658,659}},	{0,{659,367,660,367}},
{0,{660,655,656,657}},	{0,{660,661,647,648}},	{0,{661,662,663,651}},
{345,{663,664,653,654}},	{0,{664,386,655,362}},	{0,{664,665,665,665}},
{0,{665,665,665,665}},	{0,{665,666,667,667}},	{0,{667,665,666,666}},
{0,{661,661,661,661}},	{0,{666,663,664,664}},	{345,{662,662,663,663}},
{0,{665,665,665,665}},	{0,{665,665,665,665}},	{0,{665,665,665,665}},
{345,{664,664,664,664}},	{0,{664,664,664,664}},	{0,{664,664,664,664}},
{0,{664,664,664,664}},	{345,{663,663,663,663}},	{0,{663,663,664,663}},
{0,{410,410,664,410}},	{0,{664,665,666,665}},	{0,{398,398,666,398}},
{0,{663,663,664,663}},	{0,{665,665,666,665}},	{0,{666,405,659,405}},
{345,{666,660,661,660}},	{0,{666,655,655,655}},	{0,{666,658,658,658}},
{0,{666,657,657,657}},	{0,{652,652,652,652}},	{0,{654,655,655,655}},
{0,{657,657,657,657}},	{345,{653,653,653,653}},	{0,{652,652,652,652}},
{0,{661,654,654,654}},	{0,{661,661,662,661}},	{0,{429,429,662,429}},
{0,{662,663,664,663}},	{0,{381,381,664,381}},	{0,{661,661,662,661}},
{0,{663,664,657,656}},	{0,{664,438,657,424}},	{345,{664,665,659,658}},
{0,{440,440,659,376}},	{0,{664,652,652,652}},	{0,{664,655,655,655}},
{0,{664,650,650,650}},	{0,{664,653,653,653}},	{0,{664,648,648,648}},
{0,{650,651,651,651}},	{0,{663,646,646,646}},	{345,{649,649,649,649}},
{0,{644,644,644,644}},	{0,{647,647,647,647}},	{0,{660,660,660,660}},
{0,{660,445,445,445}},	{345,{444,444,444,444}},	{0,{659,462,660,463}},
{0,{660,461,659,462}},	{0,{660,461,658,461}},	{0,{660,459,657,460}},
{0,{660,470,656,459}},	{0,{660,469,655,458}},	{0,{660,470,654,457}},
{0,{660,661,661,456}},	{0,{660,660,660,455}},	{0,{660,659,659,454}},
{0,{660,658,658,453}},	{0,{660,657,657,452}},	{0,{660,656,656,451}},
{0,{660,450,450,450}},	{0,{0,0,660,0}},	{0,{660,0,659,0}},
{0,{660,0,658,0}},	{0,{660,0,657,0}},	{0,{660,0,0,0}},
{0,{660,0,0,0}},	{0,{660,0,0,0}},	{0,{654,0,0,0}},
{0,{654,0,0,0}},	{0,{0,0,658,0}},	{0,{0,0,658,0}},
{0,{650,0,657,0}},	{0,{650,0,656,0}},	{0,{656,489,655,0}},
{0,{655,488,656,0}},	{0,{656,487,653,0}},	{0,{486,486,652,0}},
{0,{655,0,0,0}},	{0,{655,0,0,0}},	{0,{644,0,0,0}},
{0,{654,498,655,494}},	{0,{655,497,654,493}},	{0,{655,492,653,492}},
{0,{655,503,652,491}},	{0,{655,502,651,490}},	{0,{655,501,650,489}},
{0,{655,504,649,488}},	{0,{655,487,487,487}},	{0,{655,486,486,486}},
{0,{655,485,485,485}},	{0,{459,0,630,0}},	{0,{654,0,629,0}},
{0,{654,0,628,0}},	{0,{654,0,0,0}},	{0,{654,0,0,0}},
{0,{454,0,654,0}},	{0,{0,0,653,0}},	{0,{452,0,631,0}},
{0,{652,464,630,0}},	{0,{652,463,629,0}},	{0,{624,0,652,0}},
{0,{652,0,0,0}},	{0,{652,0,618,0}},	{0,{652,529,617,0}},
{0,{652,653,654,654}},	{0,{654,246,248,248}},	{0,{654,536,538,538}},
{0,{654,246,246,246}},	{0,{654,655,656,656}},	{0,{656,657,658,658}},
{0,{658,658,659,659}},	{0,{659,659,242,242}},	{0,{659,659,532,532}},
{0,{659,659,659,659}},	{0,{547,547,547,547}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{0,{658,658,658,658}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{0,{658,658,658,658}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{0,{658,658,658,658}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{0,{658,659,659,659}},	{0,{659,291,291,291}},
{0,{659,660,660,660}},	{0,{660,279,279,279}},	{0,{660,661,661,661}},
{0,{661,657,657,657}},	{0,{661,662,662,662}},	{0,{662,662,662,662}},
{0,{654,654,654,654}},	{0,{650,650,650,650}},	{0,{655,655,655,655}},
{0,{657,657,657,657}},	{0,{658,657,657,657}},	{0,{658,659,660,659}},
{0,{660,314,661,314}},	{0,{661,548,662,548}},	{0,{647,266,662,266}},
{0,{662,663,664,663}},	{0,{664,665,666,665}},	{0,{666,666,666,666}},
{0,{652,652,652,652}},	{0,{659,659,659,659}},	{0,{661,661,661,661}},
{0,{663,663,663,663}},	{0,{663,358,359,359}},	{0,{663,358,358,358}},
{0,{663,663,357,357}},	{0,{663,663,663,356}},	{0,{663,0,0,0}},
{0,{663,0,0,0}},	{0,{663,0,0,0}},	{0,{661,0,663,0}},
{0,{0,663,0,0}},	{0,{663,419,415,415}},	{0,{663,414,414,414}},
{0,{663,663,413,413}},	{0,{663,664,665,666}},	{0,{666,667,668,669}},
{0,{669,670,671,672}},	{0,{672,667,673,667}},	{0,{673,673,673,673}},
{0,{665,665,665,665}},	{0,{668,668,668,668}},	{0,{671,672,671,670}},
{0,{662,672,662,662}},	{0,{665,672,665,665}},	{0,{672,672,672,672}},
{0,{672,673,673,666}},	{0,{663,658,658,658}},	{0,{672,661,661,661}},
{0,{670,672,670,663}},	{0,{668,669,672,662}},	{0,{659,654,672,654}},
{0,{672,655,673,657}},	{0,{673,652,652,652}},	{0,{673,655,655,655}},
{0,{673,674,673,673}},	{0,{674,675,676,649}},	{0,{676,677,678,648}},
{0,{678,679,678,647}},	{0,{679,675,680,646}},	{0,{680,681,682,645}},
{0,{682,644,683,644}},	{0,{664,643,683,643}},	{0,{683,0,684,0}},
{0,{682,0,684,0}},	{0,{0,684,0,0}},	{0,{680,0,0,0}},
{0,{679,0,683,0}},	{0,{683,0,0,0}},	{0,{683,684,685,686}},
{0,{686,687,688,0}},	{0,{688,689,690,0}},	{0,{690,690,690,690}},
{0,{690,690,690,689}},	{0,{690,688,688,688}},	{0,{689,687,690,687}},
{0,{690,684,691,0}},	{0,{691,691,691,691}},	{0,{691,692,693,0}},
{0,{693,693,693,0}},	{0,{693,694,695,0}},	{0,{670,0,695,0}},
{0,{669,0,695,0}},	{0,{668,0,695,0}},	{0,{695,696,697,698}},
{0,{698,697,697,697}},	{0,{697,696,698,696}},	{0,{698,695,699,695}},
{0,{699,0,0,0}},	{0,{685,685,686,699}},	{0,{667,667,668,0}},
{0,{669,669,670,0}},	{0,{0,0,655,0}},	{0,{0,0,657,0}},
{0,{695,666,673,0}},	{0,{675,675,676,0}},	{0,{678,678,679,0}},
{0,{0,0,679,0}},	{0,{0,0,679,0}},	{0,{691,691,691,613}},
{0,{603,603,603,605}},	{0,{690,690,690,608}},	{0,{690,690,690,610}},
{0,{604,604,604,606}},	{0,{624,624,624,624}},	{0,{636,636,636,600}},
{0,{687,687,687,599}},	{0,{629,629,629,598}},	{0,{626,626,626,597}},
{0,{596,596,685,596}},	{0,{643,643,643,652}},	{0,{646,646,646,0}},
{0,{683,683,683,0}},	{0,{647,647,647,0}},	{0,{660,660,660,0}},
{0,{681,682,683,684}},	{0,{684,684,684,684}},	{0,{684,684,685,684}},
{0,{681,681,681,681}},	{0,{682,682,682,682}},	{0,{683,683,683,679}},
{0,{683,684,683,685}},	{0,{685,685,685,685}},	{0,{685,685,686,677}},
{0,{676,676,686,676}},	{0,{686,686,686,675}},	{0,{674,686,674,674}},
{65,{681,681,682,673}},	{67,{685,685,685,685}},	{66,{671,671,671,671}},
{70,{670,670,670,670}},	{66,{676,676,676,676}},	{0,{682,682,683,630}},
{0,{0,0,683,0}},	{0,{683,683,684,0}},	{65,{682,682,683,0}},
{67,{0,0,0,0}},	{66,{0,0,0,0}},	{70,{0,0,0,0}},
{66,{629,629,629,629}},	{0,{674,674,679,622}},	{0,{679,621,621,621}},
{0,{0,679,0,0}},	{0,{674,674,679,0}},	{65,{673,673,678,0}},
{67,{678,678,678,678}},	{66,{678,678,678,678}},	{70,{678,678,678,678}},
{66,{678,678,678,678}},	{0,{678,678,679,0}},	{0,{679,679,679,679}},
{0,{679,679,679,679}},	{0,{679,563,553,553}},	{0,{679,680,677,677}},
{0,{680,680,680,680}},	{0,{680,594,0,0}},	{0,{0,0,680,0}},
{0,{680,680,680,680}},	{0,{680,0,680,0}},	{0,{680,680,680,680}},
{0,{680,680,680,680}},	{85,{680,680,680,680}},	{0,{680,680,680,680}},
{0,{680,680,680,680}},	{0,{676,680,676,676}},	{0,{680,680,681,680}},
{0,{539,539,681,539}},	{0,{542,542,681,542}},	{85,{681,681,681,681}},
{0,{681,682,681,681}},	{0,{680,680,680,680}},	{0,{681,681,681,534}},
{85,{670,670,670,670}},	{0,{680,681,682,683}},	{0,{531,531,683,531}},
{0,{683,530,682,530}},	{85,{683,684,684,684}},	{0,{682,683,683,683}},
{85,{683,664,664,664}},	{0,{682,663,663,663}},	{0,{525,525,682,525}},
{0,{682,682,682,682}},	{0,{0,0,682,0}},	{0,{682,682,682,682}},
{85,{681,681,681,681}},	{0,{681,681,682,681}},	{85,{682,682,682,682}},
{0,{681,681,681,681}},	{0,{681,681,681,0}},	{85,{0,0,0,0}},
{0,{680,680,680,680}},	{0,{680,0,673,0}},	{0,{680,0,681,0}},
{0,{681,681,681,681}},	{85,{681,681,681,681}},	{0,{680,680,680,680}},
{85,{644,644,644,644}},	{85,{653,653,653,653}},	{85,{507,507,507,507}},
{0,{677,506,506,506}},	{0,{677,505,505,505}},	{0,{677,0,0,0}},
{0,{677,677,677,677}},	{85,{677,677,677,677}},	{0,{677,677,677,677}},
{0,{675,675,675,675}},	{0,{676,677,676,676}},	{85,{677,678,677,677}},
{0,{678,678,678,678}},	{0,{675,675,675,675}},	{85,{590,590,590,590}},
{0,{676,676,589,589}},	{0,{676,676,676,676}},	{0,{676,676,676,676}},
{85,{654,676,654,654}},	{85,{676,0,0,0}},	{0,{675,0,0,0}},
{0,{649,649,649,649}},	{85,{657,674,657,657}},	{0,{674,675,676,677}},
{0,{677,678,679,680}},	{0,{680,681,682,679}},	{0,{682,680,683,678}},
{0,{683,684,685,686}},	{0,{686,687,688,689}},	{0,{689,690,691,688}},
{0,{688,691,690,687}},	{165,{691,692,693,694}},	{0,{694,683,695,685}},
{165,{695,688,696,684}},	{0,{694,687,695,683}},	{0,{695,696,697,698}},
{0,{698,699,700,681}},	{0,{700,698,699,680}},	{0,{700,701,702,679}},
{0,{702,703,704,705}},	{0,{705,706,707,677}},	{0,{707,708,709,676}},
{0,{709,710,711,675}},	{165,{711,712,713,714}},	{0,{714,715,716,717}},
{0,{717,718,719,720}},	{0,{720,693,721,671}},	{0,{719,692,721,670}},
{0,{721,722,723,724}},	{0,{724,725,726,716}},	{0,{726,727,728,729}},
{0,{729,723,730,714}},	{0,{676,669,730,665}},	{0,{730,731,732,719}},
{0,{732,733,734,711}},	{0,{734,735,736,649}},	{0,{736,737,738,648}},
{0,{738,739,734,647}},	{0,{659,739,659,659}},	{165,{739,740,741,742}},
{0,{742,737,743,657}},	{165,{741,736,743,656}},	{0,{743,744,745,655}},
{0,{739,734,741,654}},	{0,{744,745,746,747}},	{0,{747,741,748,652}},
{0,{748,740,747,651}},	{0,{735,730,748,650}},	{0,{734,729,748,649}},
{0,{748,749,750,635}},	{0,{722,723,750,634}},	{0,{750,725,751,633}},
{0,{723,724,751,632}},	{0,{644,724,751,644}},	{165,{728,723,751,643}},
{0,{727,722,750,642}},	{0,{729,730,750,641}},	{0,{750,751,752,640}},
{0,{752,753,754,639}},	{0,{754,755,756,638}},	{0,{732,756,757,637}},
{0,{757,725,758,636}},	{0,{730,724,755,635}},	{0,{719,714,757,634}},
{0,{757,758,759,760}},	{0,{760,761,760,760}},	{0,{761,760,762,759}},
{0,{762,763,764,758}},	{0,{764,762,765,757}},	{0,{763,761,765,756}},
{0,{765,766,767,768}},	{0,{768,769,770,753}},	{0,{770,750,771,772}},
{0,{772,749,773,751}},	{0,{773,774,775,775}},	{0,{775,751,750,750}},
{165,{775,776,777,778}},	{0,{778,749,779,748}},	{165,{777,748,778,747}},
{0,{778,751,779,746}},	{0,{777,750,779,745}},	{0,{779,780,781,782}},
{0,{782,783,784,743}},	{0,{784,785,786,742}},	{0,{780,781,786,741}},
{165,{786,787,788,789}},	{165,{789,740,770,739}},	{0,{789,790,791,792}},
{0,{792,793,794,737}},	{0,{794,741,795,736}},	{0,{790,740,792,735}},
{0,{794,795,796,797}},	{0,{797,798,799,800}},	{0,{795,793,795,795}},
{165,{799,800,801,802}},	{165,{760,731,802,730}},	{0,{759,730,801,729}},
{0,{801,802,803,804}},	{0,{804,732,784,727}},	{0,{804,727,805,726}},
{0,{805,806,807,724}},	{0,{741,721,742,723}},	{0,{806,807,808,809}},
{0,{777,778,809,722}},	{0,{809,726,810,721}},	{0,{750,721,810,720}},
{0,{810,730,811,812}},	{0,{812,733,813,717}},	{0,{813,714,814,716}},
{0,{814,713,815,715}},	{0,{815,738,739,739}},	{0,{815,715,714,714}},
{165,{815,740,816,742}},	{0,{816,713,715,712}},	{165,{815,712,714,711}},
{0,{815,715,816,710}},	{0,{816,745,817,747}},	{0,{817,748,818,708}},
{0,{818,750,819,707}},	{165,{819,753,820,755}},	{0,{820,821,822,823}},
{0,{823,824,825,826}},	{0,{826,708,827,703}},	{0,{825,707,827,702}},
{0,{827,828,829,830}},	{0,{830,831,822,822}},	{0,{831,832,833,834}},
{0,{834,829,835,820}},	{0,{835,836,835,835}},	{0,{818,827,818,818}},
{0,{835,836,794,694}},	{165,{836,763,837,765}},	{165,{797,694,837,693}},
{0,{796,693,836,692}},	{0,{836,696,816,691}},	{0,{794,691,836,690}},
{0,{836,770,837,688}},	{0,{837,838,839,688}},	{0,{810,743,812,687}},
{0,{838,691,839,686}},	{0,{808,690,839,685}},	{0,{839,840,841,842}},
{0,{842,843,844,845}},	{0,{845,846,847,844}},	{0,{847,845,848,843}},
{0,{848,849,848,848}},	{0,{0,849,0,0}},	{165,{849,850,851,852}},
{165,{0,847,0,0}},	{0,{851,852,851,0}},	{0,{852,853,852,0}},
{0,{853,854,853,0}},	{0,{854,855,854,856}},	{0,{847,856,847,0}},
{0,{856,857,858,856}},	{0,{855,856,855,855}},	{165,{0,839,857,0}},
{0,{0,838,856,0}},	{0,{856,857,858,829}},	{0,{858,859,860,0}},
{0,{840,841,860,0}},	{0,{860,860,860,861}},	{0,{861,861,861,862}},
{0,{861,861,861,861}},	{0,{861,861,861,862}},	{0,{862,862,862,863}},
{0,{862,862,862,862}},	{0,{862,862,863,864}},	{0,{864,864,864,864}},
{0,{864,864,864,865}},	{0,{864,864,864,864}},	{0,{864,864,864,865}},
{0,{865,865,865,866}},	{271,{866,866,866,867}},	{0,{867,867,867,868}},
{277,{868,868,868,869}},	{0,{869,869,869,870}},	{0,{870,870,870,865}},
{0,{870,870,870,870}},	{0,{863,863,863,863}},	{0,{869,869,844,844}},
{0,{869,869,869,869}},	{0,{869,869,869,869}},	{0,{869,869,869,870}},
{0,{870,870,870,844}},	{271,{843,843,843,843}},	{277,{842,842,842,842}},
{0,{868,868,868,868}},	{0,{868,868,868,868}},	{0,{868,868,868,868}},
{0,{868,868,868,868}},	{0,{868,868,868,868}},	{0,{868,868,869,869}},
{0,{869,869,869,869}},	{0,{869,869,869,869}},	{0,{869,869,869,869}},
{0,{869,869,869,869}},	{0,{869,869,869,869}},	{271,{869,869,869,870}},
{0,{870,870,870,0}},	{0,{870,870,870,870}},	{277,{870,870,870,870}},
{0,{870,870,870,870}},	{0,{870,870,870,870}},	{0,{870,870,870,870}},
{0,{0,0,870,0}},	{0,{870,870,870,870}},	{0,{856,856,870,856}},
{0,{870,870,870,870}},	{0,{870,870,870,871}},	{0,{871,871,871,0}},
{271,{0,0,0,0}},	{277,{0,0,0,0}},	{0,{869,869,869,869}},
{0,{779,779,779,779}},	{271,{868,868,868,869}},	{0,{869,869,869,870}},
{277,{870,870,870,870}},	{0,{870,870,870,870}},	{0,{867,867,867,867}},
{0,{869,869,869,869}},	{0,{869,869,861,861}},	{0,{869,869,869,869}},
{0,{869,869,870,870}},	{271,{870,870,870,871}},	{277,{869,869,869,869}},
{0,{870,870,870,870}},	{0,{783,783,783,783}},	{0,{869,870,869,871}},
{0,{871,871,871,872}},	{0,{872,871,872,871}},	{0,{870,870,870,870}},
{0,{871,871,871,872}},	{0,{872,873,872,868}},	{0,{873,874,873,875}},
{0,{870,870,870,866}},	{0,{874,874,874,874}},	{0,{874,874,874,875}},
{0,{875,875,875,876}},	{0,{876,876,876,862}},	{0,{876,876,876,861}},
{0,{876,876,876,877}},	{0,{877,878,877,879}},	{0,{879,879,879,880}},
{0,{880,880,881,882}},	{0,{882,882,882,883}},	{0,{880,880,880,880}},
{0,{876,876,876,876}},	{0,{881,881,881,853}},	{0,{881,881,881,852}},
{0,{851,881,851,851}},	{0,{881,881,881,881}},	{0,{881,881,881,881}},
{0,{881,881,881,881}},	{0,{881,882,881,847}},	{0,{861,882,861,846}},
{0,{882,882,882,845}},	{0,{844,844,844,882}},	{0,{882,882,882,843}},
{0,{882,883,882,884}},	{0,{884,884,884,0}},	{0,{884,0,884,0}},
{0,{731,731,731,884}},	{0,{0,0,0,884}},	{0,{884,885,884,885}},
{0,{885,885,885,886}},	{0,{886,886,886,0}},	{0,{886,886,886,0}},
{0,{886,886,886,886}},	{0,{805,805,886,805}},	{0,{886,886,886,886}},
{0,{886,886,886,0}},	{0,{886,887,886,0}},	{0,{880,887,880,0}},
{0,{0,0,0,887}},	{0,{887,887,887,0}},	{0,{887,888,887,889}},
{0,{0,889,0,0}},	{0,{889,890,889,890}},	{0,{810,810,890,810}},
{0,{890,890,890,890}},	{0,{890,890,890,795}},	{0,{890,890,890,890}},
{0,{890,891,890,882}},	{0,{714,715,714,715}},	{0,{866,866,866,866}},
{0,{724,724,726,724}},	{0,{888,888,888,888}},	{0,{888,888,888,888}},
{0,{888,888,888,888}},	{0,{888,889,890,891}},	{0,{891,892,893,894}},
{0,{894,895,896,897}},	{0,{897,898,899,892}},	{0,{899,900,901,887}},
{0,{399,400,401,890}},	{0,{900,901,902,893}},	{0,{401,404,403,888}},
{0,{901,902,903,904}},	{0,{407,396,904,398}},	{0,{904,905,906,907}},
{0,{407,400,907,396}},	{0,{907,908,909,910}},	{0,{893,902,895,904}},
{0,{909,910,911,908}},	{0,{911,912,913,914}},	{0,{914,915,916,917}},
{0,{917,918,919,912}},	{0,{445,446,447,915}},	{0,{887,896,889,880}},
{0,{917,918,919,920}},	{0,{449,443,920,434}},	{0,{920,921,922,923}},
{0,{923,924,925,926}},	{0,{926,927,928,871}},	{0,{382,462,382,870}},
{0,{927,928,929,930}},	{0,{465,930,931,380}},	{0,{464,459,930,379}},
{0,{930,931,932,933}},	{0,{458,933,934,461}},	{0,{919,920,934,864}},
{0,{375,455,482,863}},	{0,{459,454,933,374}},	{0,{933,934,935,936}},
{0,{500,501,500,935}},	{0,{501,500,935,499}},	{0,{935,931,932,498}},
{0,{935,936,937,938}},	{0,{938,939,937,937}},	{0,{939,564,940,566}},
{0,{940,495,930,494}},	{0,{940,936,941,934}},	{0,{933,935,933,933}},
{0,{940,924,925,491}},	{0,{940,929,930,931}},	{0,{514,490,940,489}},
{0,{940,941,942,943}},	{0,{943,944,945,946}},	{0,{946,947,948,949}},
{0,{949,950,951,944}},	{0,{951,952,953,954}},	{0,{954,916,517,483}},
{0,{954,955,956,957}},	{0,{957,958,956,956}},	{0,{622,549,925,551}},
{0,{583,480,915,479}},	{0,{956,955,957,953}},	{0,{952,954,952,952}},
{0,{956,957,958,598}},	{0,{955,956,958,597}},	{0,{604,605,958,596}},
{0,{958,959,960,961}},	{0,{608,603,961,594}},	{0,{961,962,963,930}},
{0,{963,931,932,933}},	{0,{959,926,961,928}},	{0,{962,933,934,927}},
{0,{938,962,501,467}},	{0,{962,963,964,965}},	{0,{640,965,640,0}},
{0,{0,634,965,0}},	{0,{965,965,965,966}},	{0,{966,966,966,966}},
{356,{966,966,966,967}},	{0,{963,963,963,963}},	{356,{961,961,961,962}},
{0,{965,965,965,966}},	{356,{966,966,966,965}},	{0,{964,964,964,964}},
{0,{965,965,965,965}},	{0,{965,965,965,965}},	{356,{965,965,965,965}},
{356,{962,962,962,962}},	{356,{964,964,964,964}},	{356,{961,961,961,961}},
{356,{652,652,652,652}},	{0,{962,962,962,962}},	{356,{698,698,698,698}},
{356,{0,0,0,0}},	{0,{960,960,960,0}},	{0,{960,960,960,960}},
{356,{960,960,960,960}},	{356,{958,958,958,958}},	{0,{959,0,0,0}},
{0,{959,959,959,959}},	{0,{959,959,959,700}},	{0,{959,959,959,959}},
{356,{698,698,698,698}},	{356,{958,958,958,958}},	{356,{958,958,958,958}},
{0,{958,958,958,959}},	{0,{959,959,959,959}},	{0,{959,959,959,960}},
{0,{956,956,956,956}},	{0,{959,959,959,960}},	{0,{960,960,960,961}},
{0,{961,962,961,963}},	{0,{959,959,959,959}},	{0,{962,962,962,962}},
{0,{962,962,962,963}},	{0,{963,964,965,964}},	{0,{965,965,965,965}},
{0,{965,965,965,965}},	{0,{965,965,965,938}},	{0,{965,966,967,966}},
{0,{967,967,967,967}},	{0,{967,967,967,967}},	{0,{967,967,967,967}},
{0,{967,967,967,967}},	{0,{967,0,0,0}},	{0,{967,967,967,967}},
{0,{967,967,967,967}},	{0,{967,968,969,970}},	{0,{970,281,971,283}},
{0,{971,286,972,282}},	{0,{972,965,973,967}},	{0,{973,964,974,966}},
{0,{974,975,976,965}},	{0,{976,962,963,964}},	{0,{976,275,965,277}},
{0,{976,280,966,276}},	{0,{976,959,960,961}},	{0,{976,272,962,274}},
{0,{976,277,963,273}},	{0,{976,977,978,272}},	{0,{971,978,961,271}},
{0,{978,979,980,270}},	{0,{980,978,981,269}},	{0,{981,348,982,268}},
{0,{982,347,981,267}},	{0,{982,346,980,266}},	{0,{980,982,979,265}},
{0,{977,344,982,264}},	{0,{978,343,981,263}},	{0,{978,342,980,262}},
{0,{976,978,979,261}},	{0,{979,389,980,388}},	{0,{980,388,979,387}},
{0,{980,387,978,386}},	{0,{978,980,977,385}},	{0,{980,981,982,983}},
{0,{983,384,984,383}},	{0,{984,985,986,986}},	{0,{986,978,987,980}},
{0,{410,381,987,380}},	{0,{983,982,983,983}},	{0,{986,981,987,982}},
{0,{987,378,969,377}},	{0,{987,979,988,980}},	{0,{983,978,988,979}},
{0,{984,375,988,374}},	{0,{988,968,965,373}},	{0,{987,967,988,372}},
{0,{988,974,980,975}},	{0,{988,371,962,370}},	{0,{988,989,990,991}},
{0,{991,971,972,972}},	{0,{991,987,989,989}},	{0,{991,969,992,970}},
{0,{992,985,993,987}},	{0,{986,984,986,986}},	{0,{992,966,972,967}},
{0,{992,363,954,362}},	{0,{992,981,982,983}},	{0,{992,963,969,964}},
{0,{992,360,951,359}},	{0,{992,978,979,980}},	{0,{987,952,992,357}},
{0,{992,526,0,0}},	{0,{992,992,992,993}},	{0,{992,992,992,992}},
{0,{992,992,992,556}},	{0,{992,992,992,992}},	{0,{992,992,992,992}},
{0,{992,992,992,992}},	{0,{992,992,992,992}},	{0,{992,992,992,992}},
{0,{992,992,992,992}},	{0,{992,992,992,993}},	{0,{992,992,992,992}},
{0,{992,992,992,620}},	{0,{992,993,994,993}},	{0,{994,992,993,992}},
{0,{994,995,996,995}},	{0,{996,996,997,996}},	{0,{997,998,999,998}},
{0,{997,997,998,997}},	{0,{998,998,999,998}},	{0,{0,0,999,0}},
{0,{999,1000,1001,1002}},	{0,{999,999,1000,1001}},	{0,{1001,1001,1002,1003}},
{0,{1003,1003,1004,1005}},	{0,{1005,0,994,0}},	{0,{1005,1005,1006,1005}},
{0,{1006,1006,1007,1006}},	{0,{1007,1008,1009,1008}},	{0,{1009,1007,1008,1007}},
{0,{1009,0,989,0}},	{0,{1009,996,997,998}},	{0,{997,997,996,997}},
{0,{1008,1000,1001,1000}},	{0,{1008,999,1000,999}},	{0,{1008,992,993,994}},
{0,{1008,997,998,997}},	{0,{1008,1009,1010,1009}},	{0,{1010,1010,1011,1010}},
{0,{1011,1012,1013,1014}},	{0,{1014,1014,1015,1016}},	{0,{989,0,1016,0}},
{0,{1001,985,1016,987}},	{0,{1016,1016,1017,1016}},	{0,{1017,1015,1016,1015}},
{0,{1017,1018,1019,1018}},	{0,{1017,1017,1018,1017}},	{0,{1018,1018,1019,1018}},
{0,{1019,1020,1021,1020}},	{0,{1019,1019,1020,1019}},	{0,{1020,1020,1021,1020}},
{0,{1021,1021,1022,1021}},	{0,{1022,1020,1021,1020}},	{0,{1022,1023,1024,1023}},
{0,{1024,1024,1025,1024}},	{0,{1025,1026,1027,1026}},	{0,{1025,1025,1026,1025}},
{0,{1026,1026,1027,1026}},	{0,{1027,0,999,0}},	{0,{1027,1027,1028,1027}},
{0,{1028,1028,1029,1028}},	{0,{969,0,0,0}},	{0,{969,969,969,969}},
{0,{968,968,1027,968}},	{0,{975,0,0,0}},	{0,{983,983,983,983}},
{0,{964,0,1025,0}},	{0,{1025,939,939,939}},	{0,{938,938,938,938}},
{0,{941,941,941,941}},	{0,{942,942,942,942}},	{0,{943,944,944,944}},
{0,{943,943,943,943}},	{0,{944,944,944,944}},	{0,{993,994,994,994}},
{0,{993,993,993,993}},	{0,{994,994,994,994}},	{0,{956,956,956,956}},
{0,{958,958,958,958}},	{0,{1014,954,954,954}},	{0,{966,966,966,966}},
{0,{994,995,995,995}},	{0,{996,996,996,996}},	{0,{976,976,976,976}},
{0,{978,979,979,979}},	{0,{978,978,978,978}},	{0,{979,979,979,979}},
{0,{985,985,985,985}},	{0,{992,993,993,993}},	{0,{992,992,992,992}},
{0,{993,993,993,993}},	{0,{995,995,995,995}},	{0,{996,996,996,996}},
{0,{0,0,1001,0}},	{0,{986,1001,987,987}},	{0,{986,1000,986,986}},
{0,{987,1000,987,987}},	{0,{0,1000,0,0}},	{0,{932,999,0,0}},
{0,{949,999,949,949}},	{0,{930,997,991,0}},	{0,{985,998,999,985}},
{0,{999,0,989,0}},	{0,{999,999,999,999}},	{0,{972,972,972,972}},
{0,{901,901,902,901}},	{0,{997,997,998,999}},	{0,{929,929,930,929}},
{0,{998,998,999,998}},	{0,{999,0,910,0}},	{0,{996,996,996,996}},
{0,{998,999,1000,1001}},	{0,{1000,998,999,1000}},	{0,{1000,1001,1002,1000}},
{0,{919,1002,920,919}},	{0,{0,1002,904,0}},	{0,{913,1002,912,913}},
{0,{912,1002,911,912}},	{0,{918,1002,919,918}},	{0,{0,998,1002,0}},
{0,{0,997,1002,0}},	{0,{0,996,1002,0}},	{0,{937,1002,938,937}},
{0,{1002,1003,1004,1002}},	{0,{1004,1005,1006,1004}},	{0,{0,1006,894,0}},
{0,{946,1006,947,946}},	{0,{0,990,1006,0}},	{0,{0,989,1006,0}},
{0,{983,983,983,983}},	{0,{983,1005,983,983}},	{0,{0,1005,0,0}},
{0,{993,993,993,993}},	{0,{995,1004,995,995}},	{0,{979,979,979,979}},
{0,{898,898,1003,898}},	{0,{0,0,1003,0}},	{0,{991,991,991,991}},
{0,{1002,1002,1002,0}},	{0,{0,1002,0,0}},	{0,{1002,1002,1002,0}},
{0,{1002,1002,1002,918}},	{0,{1002,1002,1002,1002}},	{0,{1002,1002,1002,1002}},
{0,{885,885,885,885}},	{0,{1001,1001,1002,1003}},	{0,{1003,0,873,0}},
{0,{1003,999,1000,1001}},	{0,{1003,998,999,1000}},	{0,{999,999,998,999}},
{0,{999,0,0,0}},	{0,{0,0,1001,0}},	{0,{996,1001,995,996}},
{0,{1001,0,1001,0}},	{0,{994,994,994,994}},	{0,{1000,1000,1001,1000}},
{0,{1001,999,1000,999}},	{0,{1001,0,862,0}},	{0,{1001,869,870,871}},
{0,{1001,996,997,996}},	{0,{1001,1001,1002,1001}},	{0,{1000,1000,1002,1000}},
{0,{0,0,1002,0}},	{0,{864,864,1002,866}},	{0,{1002,1003,1004,1003}},
{0,{1002,1002,1003,1002}},	{0,{1003,1001,1002,1001}},	{0,{1003,1003,1004,0}},
{0,{1004,1005,851,0}},	{0,{1005,1004,850,0}},	{0,{1005,1006,1007,0}},
{0,{0,1002,848,0}},	{0,{1006,1006,1005,0}},	{0,{1006,0,846,0}},
{0,{1006,0,845,0}},	{0,{1006,0,844,0}},	{0,{1006,0,843,0}},
{0,{1001,1001,1006,0}},	{0,{980,0,0,0}},	{0,{0,0,1005,0}},
{0,{975,975,975,975}},	{0,{980,980,980,980}},	{0,{979,979,1003,979}},
{0,{984,984,984,984}},	{0,{986,986,986,0}},	{0,{1001,1001,1001,0}},
{0,{1001,0,1001,0}},	{0,{0,0,1001,0}},	{0,{0,0,1001,0}},
{0,{1001,1001,1001,1001}},	{0,{1001,1001,1001,1001}},	{0,{1001,1001,828,0}},
{0,{1001,0,827,0}},	{0,{999,999,0,0}},	{0,{961,1000,962,961}},
{0,{960,1000,961,960}},	{0,{959,1000,960,959}},	{0,{964,1000,965,964}},
{0,{963,999,1000,963}},	{0,{968,1000,969,968}},	{0,{1000,1001,1002,1000}},
{0,{966,1002,967,966}},	{0,{0,1002,817,0}},	{0,{1002,0,1002,0}},
{0,{1002,1002,1002,957}},	{0,{995,995,995,995}},	{0,{1001,0,0,0}},
{0,{1001,1001,1001,1001}},	{0,{1001,1002,1003,1004}},	{150,{1004,1005,1006,1007}},
{0,{1007,1008,1009,1010}},	{0,{1010,1011,1012,1010}},	{0,{1012,1013,1014,1015}},
{150,{1015,1016,1017,1017}},	{0,{1017,1018,1019,1020}},	{0,{1020,1021,1020,1020}},
{0,{1021,1022,1023,1024}},	{150,{1024,1025,1026,1026}},	{0,{1026,1027,1028,1029}},
{0,{1029,1030,1031,1032}},	{0,{1032,1033,1034,1035}},	{0,{1035,1036,1037,1037}},
{150,{1037,1035,1036,1036}},	{0,{1037,1034,1035,1035}},	{0,{1034,1037,1034,1034}},
{0,{1037,1038,0,0}},	{150,{1038,1037,0,0}},	{0,{1038,1036,0,0}},
{0,{0,1038,0,0}},	{0,{1038,1037,0,0}},	{150,{1038,1036,0,0}},
{0,{1038,1035,0,0}},	{150,{1038,1034,0,0}},	{0,{1038,1039,1040,1041}},
{150,{1041,1042,1043,1044}},	{0,{1044,1045,1046,1047}},	{0,{1047,1048,1047,1049}},
{0,{1025,1026,1049,0}},	{0,{1049,1050,0,0}},	{0,{1028,1027,1047,0}},
{0,{1049,1050,0,0}},	{0,{1050,1051,1052,1052}},	{150,{1052,1050,1051,1051}},
{0,{1052,1049,1050,1050}},	{0,{1049,1048,1049,1049}},	{0,{1051,1052,1053,1054}},
{150,{1054,1055,1056,1056}},	{0,{1056,1057,1058,1052}},	{0,{1058,1049,1050,1051}},
{0,{1058,1059,1049,1050}},	{150,{1059,1060,1052,1052}},	{0,{1060,1061,1054,1048}},
{0,{1061,1062,1063,0}},	{150,{1063,1061,1064,0}},	{0,{1064,1065,1063,0}},
{0,{1062,1065,1062,0}},	{0,{1065,1066,1067,1068}},	{150,{1068,1069,1070,1070}},
{0,{1070,1071,1072,1066}},	{0,{1072,1073,1074,1075}},	{150,{1075,1076,1077,1077}},
{0,{1077,1078,1079,1073}},	{0,{1079,1080,1061,1062}},	{150,{1080,1081,1064,1064}},
{0,{1081,1082,1066,1060}},	{0,{1082,1083,1084,0}},	{150,{1084,1082,1085,0}},
{0,{1085,1086,1084,0}},	{0,{1083,1086,1083,0}},	{0,{1086,1087,1088,1089}},
{150,{1089,1090,1091,1092}},	{0,{1092,1093,1094,1087}},	{0,{1094,1095,1094,1094}},
{0,{1095,1096,1097,1098}},	{150,{1098,1099,1100,1100}},	{0,{1100,1101,1102,1096}},
{0,{1102,1103,1102,1102}},	{0,{1103,1031,1104,1022}},	{0,{1033,1104,1105,1021}},
{0,{1032,1103,1105,1020}},	{0,{1105,1106,1107,1107}},	{150,{1107,1105,1106,1106}},
{0,{1107,1108,1109,1109}},	{0,{1104,1109,1104,1104}},	{0,{1109,1110,1094,1094}},
{150,{1110,1109,1093,1093}},	{0,{1110,1108,1092,1092}},	{0,{1110,1111,1112,1100}},
{150,{1112,1110,1113,1099}},	{0,{1113,1114,1115,1098}},	{0,{1111,1115,1111,1097}},
{0,{1102,1103,1115,1087}},	{0,{1115,1116,1117,1086}},	{0,{996,997,1117,0}},
{0,{1117,1098,1093,1093}},	{150,{1117,1097,1092,1092}},	{0,{1117,1096,1091,1091}},
{0,{1117,1082,1081,1081}},	{150,{1117,1081,1080,1080}},	{0,{1117,1080,1079,1079}},
{0,{1117,1118,1119,951}},	{150,{1119,1120,1119,942}},	{0,{1120,951,952,953}},
{0,{1120,1121,923,924}},	{150,{926,1121,926,926}},	{0,{1121,1122,928,929}},
{0,{1122,943,944,945}},	{150,{936,935,936,936}},	{150,{0,958,0,0}},
{0,{1120,1121,1122,0}},	{150,{1119,1120,1119,0}},	{0,{1121,1122,1118,0}},
{0,{1117,1118,1117,0}},	{0,{0,953,973,0}},	{0,{1120,976,0,0}},
{0,{1120,1121,1122,1122}},	{0,{1122,992,982,983}},	{150,{985,993,985,985}},
{0,{1121,994,987,981}},	{0,{1121,989,1122,980}},	{150,{1122,990,1122,982}},
{0,{1122,1061,1123,978}},	{0,{1123,944,1123,0}},	{0,{1123,985,1058,976}},
{0,{1115,1058,1060,975}},	{0,{1122,1123,1056,974}},	{0,{1108,964,1084,0}},
{0,{1108,1109,1122,1110}},	{0,{1122,1123,1124,1125}},	{150,{1125,1126,1125,1125}},
{0,{1126,1127,1128,1129}},	{0,{1129,1096,902,903}},	{0,{1129,906,907,908}},
{0,{1129,912,913,914}},	{0,{1129,919,920,921}},	{0,{1129,931,0,0}},
{0,{1129,954,0,0}},	{0,{1129,975,968,962}},	{0,{1129,1004,985,986}},
{150,{988,1005,988,988}},	{0,{1128,1006,990,984}},	{0,{1128,1129,992,993}},
{150,{995,1129,995,995}},	{0,{1129,1130,997,991}},	{0,{1130,1131,1132,1133}},
{150,{1133,1134,1133,1133}},	{0,{1134,1135,1136,1137}},	{150,{1137,1138,1137,1137}},
{0,{1118,1034,1036,951}},	{0,{1097,959,1137,950}},	{0,{1137,1138,1139,1140}},
{0,{1114,939,1059,0}},	{0,{1076,1139,898,899}},	{150,{890,1139,890,890}},
{0,{1068,1139,900,901}},	{0,{880,1139,880,880}},	{0,{0,1139,0,0}},
{150,{0,1138,0,0}},	{0,{0,1137,928,0}},	{0,{1075,1137,0,0}},
{0,{1078,1137,938,939}},	{150,{941,1137,941,941}},	{0,{1077,1137,943,937}},
{0,{1083,1134,1018,936}},	{0,{1075,1136,1020,935}},	{0,{1074,1135,1136,934}},
{0,{1136,1137,1138,1139}},	{150,{1139,1140,1139,1139}},	{0,{1140,1141,1142,1143}},
{0,{1143,1144,1145,1145}},	{0,{1145,1146,857,857}},	{150,{859,1146,859,859}},
{0,{1054,1146,862,862}},	{0,{1146,1147,867,867}},	{0,{1147,1148,873,873}},
{0,{1148,1149,860,860}},	{0,{1149,1150,875,875}},	{0,{1045,1116,878,878}},
{0,{1149,1150,1151,1151}},	{150,{1150,1149,1150,1150}},	{0,{1149,1148,1149,1149}},
{0,{1149,1114,0,0}},	{0,{1149,1150,1151,1152}},	{150,{1152,1153,1152,1154}},
{0,{1154,1155,1156,1157}},	{0,{1157,1158,1157,1159}},	{0,{1159,1109,0,0}},
{0,{1159,1109,0,0}},	{0,{1159,1160,911,911}},	{0,{1160,1161,1162,910}},
{0,{1049,1109,909,909}},	{0,{1161,1162,926,0}},	{150,{925,1161,925,0}},
{0,{1161,1162,924,0}},	{0,{923,1159,923,0}},	{0,{1161,1162,929,929}},
{150,{931,1162,931,931}},	{0,{1162,1163,1164,927}},	{0,{1164,1165,936,936}},
{150,{938,1165,938,938}},	{0,{1165,1166,934,934}},	{0,{1166,1167,923,923}},
{0,{1167,1168,949,0}},	{150,{948,1167,948,0}},	{0,{1167,1168,947,0}},
{0,{946,1165,946,0}},	{0,{1139,1167,0,0}},	{0,{1167,1168,1169,1170}},
{150,{1170,1171,1170,1170}},	{0,{1171,1172,1173,1168}},	{0,{1173,1174,1173,1173}},
{0,{1174,1137,1175,888}},	{150,{1072,1175,1072,1072}},	{0,{1026,1087,886,886}},
{0,{1174,1175,1172,885}},	{0,{1024,1085,1175,884}},	{0,{1175,1176,1177,1177}},
{150,{1176,1175,1176,1176}},	{0,{1176,1177,1176,1176}},	{0,{1174,1173,1174,1174}},
{0,{1176,1177,1178,1173}},	{150,{1177,1176,1177,1172}},	{0,{1177,1178,1176,1171}},
{0,{1175,1174,1175,1170}},	{0,{1177,1178,1005,0}},	{150,{1004,1177,1004,0}},
{0,{1177,1178,1003,0}},	{0,{1002,1175,1002,0}},	{0,{1177,1178,1009,1009}},
{0,{1178,1179,1180,870}},	{150,{1180,1181,1180,872}},	{0,{1181,1182,1183,868}},
{0,{1183,1184,1183,0}},	{0,{1184,1185,1153,866}},	{0,{1111,1061,1185,0}},
{0,{1111,1061,1184,0}},	{0,{1184,1185,1017,1017}},	{150,{1017,1185,1017,1017}},
{0,{1185,1186,1021,1021}},	{0,{1186,1187,1188,1038}},	{150,{1188,1189,1038,1038}},
{0,{1189,1190,1191,1042}},	{0,{1191,1192,0,0}},	{0,{1192,1057,1193,856}},
{0,{1144,1145,1193,855}},	{0,{1193,1194,1195,1045}},	{0,{1100,1050,1195,0}},
{0,{1195,1196,1197,1058}},	{0,{1197,1198,1199,1063}},	{0,{1065,1199,1065,1065}},
{0,{1199,1200,776,777}},	{0,{975,1067,1200,783}},	{0,{1200,1201,787,788}},
{0,{1068,1069,1201,794}},	{0,{1201,1202,796,797}},	{0,{967,1038,1202,800}},
{0,{1202,1072,1073,1073}},	{0,{1202,1038,0,0}},	{0,{1202,1074,1203,1076}},
{0,{1203,1080,1081,1082}},	{0,{1199,1035,826,0}},	{0,{1202,1087,837,838}},
{0,{977,1037,1202,837}},	{0,{1202,1090,852,0}},	{0,{1202,1091,853,0}},
{0,{1202,1092,858,859}},	{0,{1101,1102,1202,858}},	{0,{1202,1096,866,867}},
{0,{1097,1098,1202,866}},	{0,{1202,1101,880,0}},	{0,{1202,1102,881,0}},
{0,{1202,1203,1204,1205}},	{150,{1205,1206,1205,1207}},	{0,{1207,1208,1209,1203}},
{0,{1209,1210,1209,1211}},	{0,{1211,1212,1213,1214}},	{150,{1214,1215,1214,1214}},
{0,{1215,1216,1217,1212}},	{0,{1217,1218,1217,1217}},	{0,{1218,1069,902,820}},
{0,{1218,1020,1219,819}},	{0,{1217,1019,1219,818}},	{0,{1219,1220,1221,1222}},
{150,{1220,1219,1220,1221}},	{0,{1221,1222,1221,1223}},	{0,{1218,1217,1218,1219}},
{0,{1222,1210,1209,1209}},	{150,{1208,1209,1208,1208}},	{0,{1221,1222,1223,1216}},
{150,{1223,1221,1223,1215}},	{0,{1223,1224,1222,1214}},	{0,{1221,1219,1221,1213}},
{0,{1216,1204,1223,1203}},	{0,{1223,1224,1202,1202}},	{0,{1210,1224,1210,1210}},
{150,{1209,1223,1209,1209}},	{0,{1223,1224,923,755}},	{150,{923,1224,923,746}},
{0,{1224,1104,933,0}},	{0,{933,1105,930,0}},	{0,{935,1106,937,937}},
{0,{1196,1047,1222,798}},	{0,{932,994,1222,0}},	{0,{1222,1223,949,950}},
{0,{1119,1120,1223,955}},	{0,{1223,1224,1225,972}},	{150,{972,1225,972,972}},
{0,{1225,1226,1227,976}},	{0,{1189,1040,978,791}},	{0,{1226,1130,1227,981}},
{0,{1188,990,1227,789}},	{0,{994,994,994,994}},	{150,{994,994,994,994}},
{0,{998,998,998,998}},	{0,{1000,1000,1000,1000}},	{0,{712,712,712,712}},
{150,{714,714,714,714}},	{0,{717,717,717,717}},	{0,{717,717,717,717}},
{0,{721,721,721,721}},	{150,{723,723,723,723}},	{0,{726,726,726,726}},
{0,{729,729,729,729}},	{0,{732,732,732,732}},	{0,{1005,1005,1005,1005}},
{150,{1004,1004,1004,1004}},	{150,{0,0,0,0}},	{0,{1007,1007,1007,1007}},
{150,{1009,1009,1009,1009}},	{0,{1012,1012,1012,1012}},	{0,{1014,1014,1014,1014}},
{0,{768,768,768,768}},	{150,{770,770,770,770}},	{0,{791,791,791,791}},
{150,{793,793,793,793}},	{0,{799,799,799,799}},	{150,{801,801,801,801}},
{0,{1201,1201,1201,1201}},	{150,{1201,1201,1201,1201}},	{0,{1201,1201,1201,1201}},
{150,{944,944,944,944}},	{0,{1200,1200,1200,1200}},	{150,{1199,1199,1199,1199}},
{0,{1199,1199,1199,1199}},	{0,{893,893,893,893}},	{0,{908,908,908,908}},
{150,{908,908,908,908}},	{0,{912,912,912,912}},	{0,{929,929,929,929}},
{150,{929,929,929,929}},	{0,{933,933,933,933}},	{0,{939,939,939,939}},
{0,{1191,1192,1193,741}},	{0,{740,1193,1192,740}},	{0,{1193,1194,1195,0}},
{0,{0,1195,1194,0}},	{0,{1195,1196,1197,702}},	{0,{701,1197,1196,701}},
{0,{1189,1190,1197,0}},	{0,{0,1191,1196,0}},	{0,{1196,1197,1198,1199}},
{0,{1199,1200,1201,1202}},	{0,{1202,1203,1200,1201}},	{0,{730,1183,1203,730}},
{0,{1203,1204,1205,1206}},	{0,{1205,1206,1204,1205}},	{0,{1206,1207,1208,0}},
{0,{750,1208,1207,0}},	{0,{1208,1209,1210,0}},	{0,{782,1210,1209,0}},
{0,{1210,1211,1212,1213}},	{0,{1213,1214,1215,1216}},	{0,{1216,1217,1218,1219}},
{0,{805,1219,1220,805}},	{0,{1220,1221,1208,1209}},	{0,{1208,1221,1207,1208}},
{0,{1221,1222,1223,1224}},	{0,{1223,1224,1222,1223}},	{0,{1224,1225,1215,800}},
{0,{808,1225,1226,808}},	{0,{1226,1227,1228,0}},	{0,{848,1228,1229,0}},
{0,{0,1229,1167,0}},	{0,{1229,1230,1231,1229}},	{0,{1231,1232,1233,1231}},
{0,{1233,1234,1235,1233}},	{0,{0,0,1235,0}},	{0,{0,0,1235,0}},
{0,{1182,1182,1235,1182}},	{0,{1235,1235,0,0}},	{0,{1235,1235,939,939}},
{0,{1235,1235,1235,1236}},	{0,{1236,1236,1236,1237}},	{0,{1237,1237,1177,1177}},
{0,{1176,1176,1176,1176}},	{0,{722,722,722,0}},	{0,{1235,1235,0,0}},
{0,{754,754,754,0}},	{0,{1234,1234,1235,1236}},	{0,{1236,1236,1237,1238}},
{0,{1238,1238,1238,1238}},	{0,{1238,1238,1238,0}},	{0,{1232,1232,1232,1232}},
{0,{1237,1237,1237,0}},	{0,{1237,1237,1237,1237}},	{0,{988,988,988,988}},
{0,{0,0,1236,0}},	{0,{822,822,822,0}},	{0,{1162,1162,1235,1162}},
{0,{0,1235,0,0}},	{0,{1202,1202,1202,1202}},	{0,{1204,1204,1204,1204}},
{0,{1206,1206,1206,1206}},	{0,{0,0,1232,0}},	{0,{1232,1232,1232,1233}},
{0,{1233,1233,1233,1234}},	{0,{1234,1234,1234,1234}},	{0,{1078,1078,1078,1078}},
{0,{1233,1233,1233,1229}},	{0,{1233,1233,1233,1234}},	{0,{1084,1084,1084,1084}},
{0,{1185,1185,1233,0}},	{0,{0,1222,1223,0}},	{0,{1204,1204,1204,1204}},
{0,{1205,1205,1205,1205}},	{0,{1230,1230,1230,1230}},	{0,{1230,1230,1230,1230}},
{0,{1230,1230,1230,1230}},	{0,{1230,1231,1232,1232}},	{0,{1232,1233,1234,1234}},
{0,{1234,1235,1234,1234}},	{0,{1235,1236,1237,1237}},	{0,{0,1118,0,0}},
{0,{1236,1237,1236,1236}},	{0,{1117,1118,624,624}},	{0,{623,1119,623,623}},
{0,{1111,1112,0,0}},	{0,{1110,1234,0,0}},	{0,{1234,1235,643,644}},
{0,{1235,1236,644,646}},	{0,{643,1236,643,645}},	{0,{652,1105,652,652}},
{0,{1130,1131,675,0}},	{0,{674,1132,674,0}},	{0,{1233,1234,1235,1235}},
{0,{1235,1236,1235,1235}},	{0,{1236,1237,1238,1238}},	{0,{1238,1239,1238,1238}},
{0,{1239,1240,1241,1232}},	{0,{1240,1241,1240,1231}},	{0,{1241,1242,1243,737}},
{0,{1243,1244,1245,736}},	{0,{1245,1246,1245,735}},	{0,{1149,1150,725,725}},
{0,{724,1138,724,724}},	{0,{1244,1245,732,732}},	{0,{1245,1246,735,735}},
{0,{730,1147,730,730}},	{0,{1245,1246,1247,729}},	{0,{1246,1247,1246,728}},
{0,{1247,1248,1247,1247}},	{0,{1207,1248,1207,1207}},	{0,{0,1248,0,0}},
{0,{766,1146,766,0}},	{0,{781,1086,781,0}},	{0,{0,1085,1246,0}},
{0,{1246,1247,1246,1246}},	{0,{1247,1248,1247,1247}},	{0,{1248,1249,1248,1248}},
{0,{1215,1249,1215,1215}},	{320,{0,1080,0,0}},	{0,{1248,1249,1248,1248}},
{0,{1249,1249,1249,1250}},	{0,{1250,1250,1250,1251}},	{0,{1251,1251,1251,1252}},
{0,{1193,1193,1193,1193}},	{0,{1193,1193,1193,1193}},	{0,{1250,1250,852,852}},
{0,{1250,1250,0,0}},	{0,{861,861,861,862}},	{0,{862,862,862,864}},
{0,{1198,1198,1198,1198}},	{0,{1198,1198,1198,1198}},	{0,{1201,1201,1201,1201}},
{0,{1201,1201,1201,1201}},	{0,{1204,1204,1204,1195}},	{0,{908,908,908,908}},
{0,{911,911,911,906}},	{0,{1219,1219,1219,1219}},	{0,{1223,1223,1223,1223}},
{0,{1224,1224,1224,1224}},	{0,{1225,1225,1225,1225}},	{320,{0,0,0,0}},
{0,{1226,1226,1226,1226}},	{0,{1235,1235,1235,1228}},	{0,{1235,1235,1235,1229}},
{0,{1230,1230,1230,1230}},	{0,{0,1234,0,0}},	{0,{1234,1234,1234,1006}},
{0,{1234,1234,1234,1005}},	{0,{1007,1007,1007,1007}},	{0,{1233,1233,1233,1003}},
{0,{1233,1233,1233,0}},	{0,{0,0,1208,0}},	{0,{1218,1218,1218,1218}},
{0,{1219,1219,1219,1219}},	{0,{587,587,587,587}},	{0,{680,680,680,680}},
{0,{670,670,670,670}},	{0,{1227,1228,1229,1230}},	{150,{1230,1231,1229,1229}},
{0,{1231,1232,1228,1228}},	{0,{1232,1233,1234,1234}},	{0,{1234,1235,1236,586}},
{150,{1236,1237,585,585}},	{0,{1237,1238,584,584}},	{0,{1238,550,0,0}},
{0,{1238,1239,1240,1241}},	{150,{1241,1242,1240,1240}},	{0,{1242,1243,1239,1239}},
{0,{1243,1244,1245,1245}},	{0,{1245,1246,1228,578}},	{150,{1246,1247,577,577}},
{0,{1247,1248,576,576}},	{0,{1248,1249,1222,1222}},	{150,{1249,1248,1250,1221}},
{0,{1250,1247,1220,1220}},	{0,{1250,1237,1238,1238}},	{150,{1250,1236,1251,1237}},
{0,{1251,1235,1236,1236}},	{0,{1251,1252,1253,1216}},	{150,{1253,1251,1254,1215}},
{0,{1254,1250,1253,1214}},	{0,{1252,1254,1252,1213}},	{0,{553,529,0,0}},
{0,{1242,1229,1253,1230}},	{150,{1242,1228,1229,1229}},	{0,{1252,1227,1228,1228}},
{0,{1227,1226,1227,1227}},	{0,{550,527,0,0}},	{0,{1250,1205,1206,1206}},
{150,{1250,1204,1205,1205}},	{0,{1250,1203,1204,1204}},	{0,{1203,1202,1203,1203}},
{0,{1228,1229,1249,1202}},	{150,{1229,1228,1201,1201}},	{0,{1248,1227,1200,1200}},
{0,{1248,1249,1250,1251}},	{150,{1251,1252,1250,1250}},	{0,{1252,1253,1254,1249}},
{0,{1254,1255,1256,1256}},	{0,{1256,1257,1258,620}},	{150,{1258,1259,619,619}},
{0,{1259,1260,618,618}},	{0,{1260,625,624,624}},	{0,{1260,1261,1251,1251}},
{150,{1261,1260,1250,1250}},	{0,{1261,1262,1263,1264}},	{0,{1264,1265,1266,1248}},
{150,{1266,1264,1267,1247}},	{0,{1267,1263,1266,1246}},	{0,{1265,1267,1265,1245}},
{0,{645,632,616,616}},	{0,{1266,1242,1243,1243}},	{150,{1266,1241,1242,1242}},
{0,{1266,1240,1241,1241}},	{0,{1240,1239,1240,1240}},	{0,{1265,1266,1267,532}},
{150,{1267,1268,1267,531}},	{0,{1268,1269,1266,530}},	{0,{1269,1270,1271,0}},
{0,{1271,1196,1178,528}},	{150,{527,1197,527,527}},	{0,{1270,1198,526,526}},
{0,{1270,1271,1272,0}},	{150,{1272,1273,1272,0}},	{0,{1273,1269,1268,0}},
{0,{1267,1268,1267,0}},	{150,{1272,1273,1272,0}},	{0,{655,487,0,0}},
{0,{1261,1260,1272,0}},	{150,{1272,1273,1272,0}},	{0,{1273,1258,1259,0}},
{0,{1258,1257,1258,0}},	{150,{1272,1273,1272,0}},	{0,{647,645,644,0}},
{0,{1272,1185,513,513}},	{0,{678,479,0,0}},	{0,{1254,1271,1161,511}},
{150,{510,759,510,510}},	{0,{1253,1270,509,509}},	{0,{1163,704,0,0}},
{0,{642,703,0,0}},	{0,{1268,1266,1249,506}},	{0,{1268,1269,1270,1164}},
{150,{1163,1270,1163,1163}},	{0,{1270,1271,1162,1162}},	{0,{1168,1271,1168,1168}},
{0,{1271,1270,1167,1167}},	{150,{1166,1269,1166,1166}},	{0,{1270,802,629,0}},
{0,{631,801,628,0}},	{0,{1269,693,0,0}},	{0,{1269,1265,1162,1162}},
{0,{1269,1264,1161,1161}},	{0,{1269,1254,1237,494}},	{0,{1269,1257,1258,1152}},
{0,{1269,1270,1269,1269}},	{0,{1270,1271,1272,0}},	{150,{1271,1270,1271,0}},
{0,{1271,1269,1270,0}},	{0,{1269,1268,1269,0}},	{0,{1270,1271,1220,487}},
{150,{1222,1271,1222,486}},	{0,{1223,1271,1221,485}},	{0,{1226,1271,1226,0}},
{0,{1271,1272,1228,0}},	{150,{1227,1271,1227,0}},	{0,{1231,1270,1226,0}},
{0,{1225,1269,1225,0}},	{0,{1269,1266,1221,0}},	{150,{1220,1265,1220,0}},
{0,{1233,1264,1219,0}},	{0,{1267,1268,1219,476}},	{150,{1268,1269,475,475}},
{0,{1269,1270,474,474}},	{0,{1270,1271,0,0}},	{0,{1271,1232,1122,472}},
{0,{1271,1272,1273,1274}},	{150,{1273,1274,1273,1273}},	{0,{1274,1275,1272,1272}},
{0,{1275,1276,1275,1275}},	{0,{1276,1275,1274,1274}},	{150,{1273,1274,1273,1273}},
{0,{1274,1273,1275,1272}},	{0,{1275,1272,1271,1271}},	{0,{1275,1276,1277,853}},
{150,{852,850,852,852}},	{0,{1276,1277,1278,851}},	{0,{1275,1276,850,850}},
{0,{1277,1278,1279,1277}},	{0,{1279,1280,1281,854}},	{150,{1281,1279,1281,853}},
{0,{1281,1278,1280,852}},	{0,{1279,1277,1279,851}},	{0,{871,851,850,850}},
{0,{1279,1237,1188,453}},	{150,{1279,1237,1188,452}},	{0,{1279,1280,1187,451}},
{0,{1280,1239,1197,0}},	{0,{1280,1236,1202,0}},	{150,{1280,697,448,448}},
{0,{1280,1207,1097,447}},	{150,{1280,695,446,446}},	{0,{1280,645,445,445}},
{0,{1280,640,0,0}},	{150,{443,443,443,443}},	{0,{1219,1219,1219,1219}},
{0,{1278,1279,1280,1088}},	{0,{1087,1280,1279,1087}},	{0,{1105,1280,1281,1105}},
{0,{1281,1282,1283,1085}},	{0,{1123,1283,1282,1084}},	{0,{1283,1284,1285,1286}},
{0,{1142,1286,1287,1142}},	{0,{1287,1288,1286,1141}},	{0,{1175,1288,1289,0}},
{0,{0,883,1289,0}},	{0,{1176,1289,1290,0}},	{0,{560,940,1290,0}},
{0,{1095,1095,1095,1095}},	{0,{1289,1289,1289,1289}},	{0,{1169,1169,1169,0}},
{0,{1171,1171,1171,0}},	{0,{1287,0,0,0}},	{0,{1231,1231,1231,1231}},
{0,{1286,1286,1286,1286}},	{0,{1286,1286,1286,1229}},	{0,{1286,1286,1286,0}},
{0,{1286,1286,1286,0}},	{0,{1256,1257,1066,1066}},	{0,{1065,1258,1065,1065}},
{0,{1083,1258,1083,1083}},	{0,{1259,1260,1102,1063}},	{0,{1101,1261,1101,1062}},
{0,{1281,1282,1283,1121}},	{0,{1282,1283,1282,1120}},	{0,{1265,1266,1119,1119}},
{0,{1118,1262,1118,1118}},	{0,{1281,1282,1137,1117}},	{0,{1280,1281,1282,1116}},
{0,{1135,1282,1135,1115}},	{0,{1149,1262,1149,0}},	{0,{1281,1282,1281,0}},
{0,{1150,1263,1150,0}},	{0,{1281,1282,1281,1283}},	{0,{1283,1284,1283,0}},
{0,{1284,1285,1284,0}},	{0,{1285,1285,1285,0}},	{0,{1181,1181,1181,0}},
{0,{1274,1274,1274,0}},	{0,{1275,1275,1275,1277}},	{0,{1277,1277,1277,0}},
{0,{1278,1278,1278,0}},	{0,{1280,1280,1280,1202}},	{0,{1280,1280,1280,790}},
{0,{1217,1217,1217,789}},	{0,{1279,1279,1279,0}},	{0,{1270,1270,1270,1270}},
{0,{1037,1037,1037,1037}},	{0,{1096,1096,1096,1096}},	{0,{1276,1277,1278,1279}},
{150,{1279,1280,1281,1281}},	{0,{1281,1282,1280,1280}},	{0,{1279,1282,1279,1279}},
{0,{1282,1283,1284,1285}},	{0,{1285,1286,0,0}},	{0,{1286,1287,1282,1283}},
{0,{1287,1288,0,0}},	{0,{1288,1273,1274,1274}},	{0,{1288,1272,1273,1273}},
{0,{1286,1271,1288,1272}},	{0,{1288,1270,1271,1271}},	{0,{1288,1273,1270,1270}},
{150,{1288,1272,1269,1269}},	{0,{1288,1271,1268,1268}},	{0,{1288,1262,1263,1264}},
{0,{1288,1271,1272,1273}},	{0,{1288,1276,1271,1272}},	{0,{1288,1259,1260,1261}},
{0,{1288,1268,1269,1270}},	{0,{1288,1273,1268,1269}},	{0,{1288,1289,1267,1268}},
{150,{1289,1290,1291,0}},	{0,{1291,1292,0,0}},	{150,{335,331,1289,0}},
{0,{1291,1287,0,0}},	{150,{1285,1286,0,0}},	{0,{1290,1285,0,0}},
{0,{1288,1284,347,0}},	{0,{1289,1283,0,0}},	{0,{1289,1263,1258,1259}},
{0,{1289,1264,0,0}},	{0,{1257,1261,1256,1257}},	{0,{1288,1260,1255,1256}},
{150,{0,321,1279,0}},	{0,{1287,1260,0,0}},	{0,{1283,1287,1252,1253}},
{0,{1283,1287,0,0}},	{0,{1251,1285,1250,1251}},	{0,{1282,1284,1249,1250}},
{150,{0,544,1273,0}},	{0,{1284,1285,1286,1238}},	{150,{1286,1287,1286,1240}},
{0,{1287,1288,1285,1239}},	{0,{1284,1285,1284,1238}},	{0,{1287,1278,1244,1244}},
{0,{1274,1287,0,0}},	{0,{1287,1288,1235,1235}},	{150,{1234,1287,1234,1234}},
{0,{1233,1286,1233,1233}},	{0,{1286,1279,1278,1232}},	{0,{1286,1278,1277,1231}},
{0,{583,532,0,0}},	{0,{1285,1286,1226,1226}},	{0,{1286,1287,1228,1228}},
{0,{1287,1268,1234,1234}},	{0,{1287,1279,1226,1226}},	{0,{1287,1278,1225,1225}},
{0,{1282,1287,1288,1224}},	{0,{1261,1274,1288,0}},	{0,{1288,1263,1229,1229}},
{0,{1259,1263,1288,0}},	{0,{1288,1277,1216,1217}},	{0,{1288,1260,1225,1226}},
{0,{1288,1289,1290,1291}},	{150,{1291,1292,1291,1291}},	{0,{1292,1293,1290,1290}},
{0,{1289,1290,1289,1289}},	{0,{1292,1267,1214,1214}},	{0,{1292,1288,1287,1287}},
{0,{1290,1265,1228,1212}},	{0,{1291,1264,1211,1211}},	{0,{1289,1285,1291,1284}},
{0,{1291,1284,1283,1283}},	{0,{1291,1265,1204,1205}},	{0,{1291,1248,1213,1214}},
{0,{1291,1277,1278,1279}},	{0,{1291,1262,1201,1202}},	{0,{1291,1245,1210,1211}},
{0,{1291,1274,1275,1276}},	{0,{1291,1244,0,0}},	{0,{1208,1208,1208,1208}},
{0,{1290,1291,1292,1200}},	{0,{1199,1292,1291,1199}},	{0,{1292,1293,760,0}},
{0,{1293,754,759,0}},	{0,{1242,1242,1242,1196}},	{0,{1195,1195,1195,1195}},
{0,{1291,1291,1291,0}},	{0,{1267,1267,1267,1267}},	{0,{1290,1290,1290,0}},
{0,{1281,1282,1191,1191}},	{0,{1190,1283,1190,1190}},	{0,{1283,1284,0,0}},
{0,{1287,1288,1287,1287}},	{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},
{0,{1286,1288,1286,1286}},	{0,{1288,1289,1288,1288}},	{0,{1287,1287,1287,1287}},
{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},
{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},
{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},	{0,{1288,1288,1288,1288}},
{0,{1288,1289,1290,1289}},	{0,{1290,1291,1292,1291}},	{0,{1292,1293,1294,1293}},
{0,{1294,1289,1295,1289}},	{0,{1295,1296,1297,1296}},	{0,{1297,1298,1299,1298}},
{0,{1299,1294,1300,1294}},	{0,{1300,0,1301,0}},	{0,{1301,1279,1302,1279}},
{0,{1302,0,1303,0}},	{0,{1303,1303,1303,1303}},	{0,{1303,1303,1303,1303}},
{0,{1303,1303,1303,1303}},	{0,{1303,1303,1303,1303}},	{0,{1303,1303,1303,1303}},
{0,{1303,1304,1303,1303}},	{0,{1302,1302,1302,1302}},	{0,{1303,1303,1303,1303}},
{0,{1303,1304,1303,1303}},	{0,{1304,1304,1304,1304}},	{0,{1304,1303,1305,1303}},
{0,{1305,1306,1305,1305}},	{0,{1294,1306,1294,1294}},	{0,{1306,1290,1307,1290}},
{0,{1307,1308,1307,1307}},	{0,{1308,1309,1308,1308}},	{0,{1307,1307,1307,1307}},
{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},
{0,{1308,1309,1310,1309}},	{0,{1310,1311,1312,1311}},	{0,{1312,1313,1314,1313}},
{0,{1314,1309,1315,1309}},	{0,{1315,1316,1317,1316}},	{0,{1317,1318,1319,1318}},
{0,{1319,1314,1320,1314}},	{0,{1320,1320,1320,1320}},	{0,{1320,1319,1321,1319}},
{0,{1321,1321,1321,1321}},	{0,{1321,1321,1321,1321}},	{0,{1321,1321,1321,1321}},
{0,{1321,1321,1321,1321}},	{0,{1321,1321,1321,1321}},	{0,{1321,1321,1321,1321}},
{0,{1321,1321,1321,1321}},	{0,{1321,1321,1321,1321}},	{0,{1242,1242,1242,1242}},
{0,{1244,1244,1244,1244}},	{0,{1246,1246,1246,1246}},	{0,{1250,1250,1250,1250}},
{0,{1252,1252,1252,1252}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},
{0,{1316,1316,1316,1316}},	{0,{1284,1284,1284,1284}},	{0,{1286,1286,1286,1286}},
{0,{1288,1288,1288,1288}},	{0,{1292,1292,1292,1292}},	{0,{1294,1294,1294,1294}},
{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},
{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},
{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},
{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},
{0,{1200,1200,1200,1200}},	{0,{1253,1253,1253,1253}},	{0,{1309,1309,1309,1309}},
{0,{1309,1309,1309,1309}},	{0,{1309,1309,1309,1309}},	{0,{1309,1309,1309,1309}},
{0,{1309,1309,1309,1309}},	{0,{1309,1309,1309,1309}},	{0,{1309,1309,1309,1309}},
{0,{1309,1309,1309,1309}},	{0,{1309,1309,1309,1309}},	{0,{1309,1310,1311,1310}},
{0,{1311,1312,1313,1312}},	{0,{1313,1308,1314,1308}},	{0,{1307,1307,1307,1307}},
{0,{1309,1309,1309,1309}},	{0,{0,0,1312,0}},	{0,{1312,1313,1313,1313}},
{0,{1313,1313,1313,1313}},	{0,{1313,1313,1313,1313}},	{0,{1310,1310,1310,1310}},
{0,{1312,1312,1312,1312}},	{0,{1312,1312,1312,1312}},	{0,{1312,1312,1312,1312}},
{0,{1312,1312,1312,1312}},	{0,{1312,1312,1312,1312}},	{0,{1312,1311,1313,1311}},
{0,{1313,1314,1315,1314}},	{0,{1315,1315,1315,1315}},	{0,{1315,1315,1316,1316}},
{0,{1316,1316,1317,1317}},	{0,{1317,1317,1184,1184}},	{0,{1317,1317,1317,1317}},
{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},
{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},
{0,{1302,1302,1302,1302}},	{0,{1316,1316,1316,1316}},	{0,{1306,1306,1306,1306}},
{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},
{0,{1315,1315,1315,1315}},	{0,{1315,1198,1315,1198}},	{0,{1315,1315,1315,1315}},
{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},
{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1315}},
{0,{1315,0,1316,0}},	{0,{1316,1160,1317,1160}},	{0,{1317,0,1318,0}},
{0,{1318,1318,1318,1319}},	{0,{1319,1317,1320,1318}},	{0,{1320,1192,1321,1192}},
{0,{1321,1321,1321,1321}},	{0,{1321,1276,1322,1276}},	{0,{1322,1322,1322,1322}},
{0,{1322,1322,1322,1322}},	{0,{1322,1322,1322,1322}},	{86,{1322,1322,1322,1320}},
{86,{1322,1322,1322,0}},	{86,{1322,1321,1323,0}},	{0,{1323,1323,1323,1323}},
{0,{1323,1323,1323,1323}},	{0,{1323,1323,1323,1323}},	{0,{1323,1323,1323,1323}},
{0,{1323,1323,1323,1323}},	{0,{1323,1322,1324,1322}},	{86,{1324,1324,1324,1325}},
{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},
{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},
{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},
{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1324}},
{0,{1324,1324,1324,1324}},	{86,{1324,1324,1324,1325}},	{86,{1323,1323,1323,1325}},
{86,{1298,1298,1298,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,0,0}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1325,1325,1325}},	{0,{1325,1225,1325,1225}},	{0,{1325,1325,0,0}},
{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},	{0,{1325,1325,1325,1325}},
{0,{1325,1326,1327,1328}},	{142,{1328,1329,1330,1330}},	{0,{1330,1330,1331,1331}},
{0,{1331,1331,1332,1332}},	{0,{1332,1333,1334,1334}},	{142,{1334,1335,1336,1336}},
{0,{1336,1336,1337,1337}},	{0,{1330,1330,1331,1331}},	{153,{1336,1337,1338,1338}},
{155,{1338,1339,1340,1340}},	{0,{1340,1340,1341,1341}},	{0,{1341,1341,1342,1342}},
{0,{1342,1342,1343,1343}},	{142,{1343,1343,1344,1344}},	{0,{1344,1344,1345,1345}},
{0,{1345,1346,1346,1347}},	{142,{1347,1348,1348,1348}},	{0,{1348,1348,1348,1348}},
{0,{1348,1348,1348,1348}},	{0,{1348,1349,1349,1349}},	{142,{1349,1350,1350,1350}},
{0,{1347,1347,1347,1347}},	{153,{1349,1350,1350,1350}},	{155,{1350,1351,1351,1351}},
{0,{1351,1351,1351,1351}},	{0,{1351,1351,1351,1351}},	{0,{1351,1351,1351,1351}},
{142,{1351,1351,1351,1351}},	{0,{1351,1352,1352,1353}},	{142,{1353,1353,1353,1353}},
{0,{1353,1353,1353,1353}},	{0,{1353,1353,1353,1353}},	{0,{1353,1354,1354,1354}},
{142,{1354,1354,1354,1354}},	{0,{1352,1352,1352,1352}},	{153,{1353,1354,1354,1354}},
{155,{1354,1354,1354,1354}},	{0,{1354,1354,1354,1354}},	{0,{1354,1354,1354,1354}},
{0,{1354,1355,1355,1356}},	{142,{1356,1356,1356,1356}},	{0,{1356,1356,1356,1356}},
{0,{1356,1356,1356,1356}},	{153,{1356,1357,1357,1357}},	{155,{1357,1357,1357,1357}},
{0,{1357,1357,1357,1357}},	{0,{1357,1357,1357,1357}},	{0,{1357,1358,1359,1359}},
{142,{1359,1360,1361,1361}},	{0,{1356,1356,1357,1357}},	{0,{1360,1355,1356,1356}},
{0,{1360,1361,1362,1362}},	{142,{1356,1356,1357,1357}},	{0,{1361,0,0,0}},
{142,{1361,1362,1362,1362}},	{0,{1362,0,0,0}},	{0,{1362,1363,1363,1363}},
{142,{1359,1359,1359,1359}},	{0,{1362,0,0,0}},	{0,{1362,0,1363,0}},
{0,{1363,1359,1359,1359}},	{0,{1363,0,0,0}},	{0,{1363,1364,1365,1365}},
{142,{1365,1366,1367,1367}},	{0,{1367,1367,1368,1368}},	{0,{1368,1368,1369,1369}},
{0,{1369,1370,1371,1371}},	{142,{1371,1372,1373,1373}},	{0,{1368,1368,1369,1369}},
{0,{1372,1372,1373,1373}},	{0,{1373,1374,1375,1375}},	{142,{1375,1376,1377,1377}},
{0,{1377,1377,1378,1378}},	{0,{1378,1378,1379,1379}},	{0,{1379,1379,1380,1380}},
{142,{1380,1380,1381,1381}},	{0,{1381,1381,1382,1382}},	{0,{1382,1382,1382,1382}},
{0,{1382,1383,1383,1383}},	{142,{1383,1384,1384,1384}},	{0,{1384,1381,1381,1381}},
{142,{1382,1382,1382,1382}},	{0,{1383,1384,0,0}},	{142,{1384,1384,1333,1333}},
{0,{1382,1382,0,0}},	{0,{1383,1381,0,0}},	{0,{1383,1384,1333,1333}},
{0,{1384,1385,1385,1385}},	{142,{1385,1386,1386,1386}},	{0,{1386,1386,1386,1386}},
{0,{1386,1386,1386,1386}},	{0,{1386,1387,1387,1387}},	{142,{1387,1388,1388,1388}},
{0,{1385,1385,1385,1385}},	{153,{1387,1388,1388,1388}},	{155,{1388,1389,1389,1389}},
{0,{1389,1389,1389,1389}},	{0,{1389,1375,1375,1375}},	{0,{1389,1374,1374,1374}},
{142,{1375,1375,1375,1375}},	{0,{1388,1378,1378,1378}},	{142,{1379,1379,1379,1379}},
{153,{1387,1380,1380,1380}},	{155,{1381,1381,1381,1381}},	{0,{1386,1387,1387,1387}},
{142,{1387,1388,1388,1388}},	{0,{1388,1388,1388,1388}},	{0,{1388,1384,1384,1384}},
{0,{1383,1383,1383,1383}},	{0,{1387,1388,1388,1388}},	{142,{1388,1389,1389,1389}},
{142,{1382,1382,1382,1382}},	{0,{1388,1389,1389,1389}},	{142,{1389,1390,1390,1390}},
{0,{1390,1390,1390,1390}},	{0,{1390,1390,1390,1390}},	{0,{1390,1391,1391,1391}},
{142,{1391,1392,1392,1392}},	{0,{1389,1389,1389,1389}},	{153,{1391,1392,1392,1392}},
{155,{1392,1393,1393,1393}},	{0,{1393,1393,1393,1393}},	{0,{1393,1394,1394,1394}},
{142,{1394,1395,1395,1395}},	{0,{1395,1395,1395,1395}},	{0,{1395,1395,1395,1395}},
{0,{1395,1396,1396,1396}},	{142,{1396,1397,1397,1397}},	{0,{1394,1394,1394,1394}},
{153,{1396,1397,1397,1397}},	{155,{1397,1398,1398,1398}},	{0,{1398,1398,1398,1398}},
{0,{1398,1369,1369,1369}},	{142,{1370,1370,1370,1370}},	{0,{1397,1373,1373,1373}},
{142,{1374,1374,1374,1374}},	{153,{1396,1375,1375,1375}},	{155,{1376,1376,1376,1376}},
{0,{1395,1396,1396,1396}},	{142,{1396,1397,1397,1397}},	{0,{1397,1397,1397,1397}},
{0,{1397,1393,1393,1393}},	{0,{1392,1392,1392,1392}},	{0,{1396,1397,1397,1397}},
{142,{1397,1398,1398,1398}},	{142,{1391,1391,1391,1391}},	{0,{1397,1398,1398,1399}},
{142,{1399,1400,1400,1400}},	{0,{1400,1400,1400,1401}},	{0,{1401,1401,1401,1401}},
{0,{1401,1402,1402,1402}},	{142,{1402,1403,1403,1403}},	{0,{1400,1400,1403,1400}},
{0,{1399,1399,1399,1399}},	{153,{1402,1403,1403,1403}},	{155,{1403,1404,1404,1404}},
{0,{1404,1404,1404,1404}},	{0,{1404,1404,1404,1404}},	{142,{1404,1404,1404,1404}},
{0,{1404,1405,1405,1405}},	{142,{1405,1406,1406,1406}},	{0,{1406,1406,1406,1406}},
{0,{1406,1406,1406,1406}},	{0,{1406,1407,1407,1407}},	{142,{1407,1408,1408,1408}},
{0,{1405,1405,1405,1405}},	{153,{1407,1408,1408,1408}},	{155,{1408,1409,1409,1409}},
{0,{1409,1409,1409,1409}},	{0,{1409,1409,1409,1409}},	{142,{1409,1409,1409,1409}},
{0,{1409,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{155,{1410,1410,1410,1410}},
{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{0,{1410,1411,1411,1411}},
{142,{1411,1412,1412,1412}},	{0,{1409,1409,1409,1409}},	{0,{1411,1408,1408,1408}},
{0,{1411,1412,1412,1412}},	{142,{1412,1413,1413,1413}},	{0,{1413,1413,1413,1413}},
{142,{1406,1406,1406,1406}},	{0,{1412,1394,1394,1394}},	{142,{1412,1394,1394,1394}},
{0,{1412,1392,1392,1392}},	{0,{1412,1413,1413,1413}},	{0,{1413,1414,1414,1414}},
{142,{1414,1415,1415,1415}},	{0,{1415,1415,1415,1415}},	{0,{1415,1411,1411,1411}},
{0,{1410,1410,1410,1410}},	{0,{1414,1415,1415,1415}},	{142,{1415,1416,1416,1416}},
{0,{1416,1416,1416,1416}},	{142,{1408,1408,1408,1408}},	{0,{1415,1415,1415,1415}},
{0,{1415,1416,1416,1416}},	{142,{1416,1417,1417,1417}},	{0,{1417,1417,1417,1417}},
{0,{1417,1417,1417,1417}},	{0,{1417,1385,1385,1385}},	{0,{1417,1384,1384,1384}},
{0,{1417,1418,1418,1418}},	{0,{1418,1373,1373,1373}},	{0,{1418,1372,1372,1372}},
{0,{1418,1393,1393,1393}},	{0,{1418,1418,1418,1419}},	{142,{1419,1419,1419,1419}},
{0,{1419,1419,1419,1419}},	{0,{1419,1419,1419,1419}},	{142,{1419,1419,1419,1419}},
{153,{1190,1190,1190,1190}},	{0,{1147,1147,1147,1148}},	{142,{1149,1149,1149,1149}},
{142,{1154,1154,1154,1154}},	{153,{1159,1159,1159,1159}},	{155,{1156,1156,1156,1156}},
{0,{1175,1175,1175,1176}},	{0,{1412,1412,1412,1412}},	{142,{1412,1412,1412,1412}},
{0,{1412,1412,1412,1412}},	{0,{1412,1412,1412,1412}},	{142,{1412,1412,1412,1412}},
{0,{1412,1412,1412,1412}},	{0,{1412,1412,1412,1412}},	{142,{1412,1412,1412,1412}},
{0,{1412,1412,1412,1412}},	{0,{1243,1243,1243,1243}},	{153,{1246,1246,1246,1246}},
{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},
{153,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},
{0,{1344,1344,1344,1344}},	{0,{1343,1409,1343,1343}},	{142,{1235,1409,1235,1235}},
{0,{1409,1409,1409,1409}},	{0,{1409,1409,1409,1410}},	{142,{1410,1410,1410,1410}},
{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},
{142,{1410,1410,1410,1410}},	{153,{1410,1410,1410,1410}},	{155,{1410,1410,1410,1410}},
{0,{1410,1410,1410,1410}},	{0,{1410,1410,1410,1410}},	{153,{1121,1121,1121,1121}},
{0,{1128,1128,1128,1129}},	{153,{1136,1136,1136,1136}},	{153,{1146,1146,1146,1146}},
{0,{1164,1164,1164,1164}},	{0,{1205,1205,1205,1205}},	{153,{1225,1225,1225,1225}},
{0,{1243,1243,1243,1243}},	{153,{1252,1252,1252,1252}},	{0,{1256,1256,1256,1256}},
{142,{1257,1257,1257,1257}},	{142,{1262,1262,1262,1262}},	{153,{1263,1263,1263,1263}},
{155,{1264,1264,1264,1264}},	{0,{1396,1396,1396,1397}},	{142,{1397,1397,1397,1397}},
{0,{1397,1397,1397,1398}},	{0,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},
{142,{1398,1398,1398,1398}},	{153,{1398,1398,1398,1398}},	{155,{1398,1398,1398,1398}},
{0,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},
{142,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},	{153,{1398,1398,1398,1398}},
{155,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},	{0,{1398,1398,1398,1398}},
{142,{1398,1398,1398,1398}},	{142,{1103,1103,1103,1103}},	{155,{1119,1119,1119,1119}},
{142,{1092,1092,1092,1092}},	{142,{0,0,0,0}},	{142,{1394,1394,1394,1394}},
{142,{1184,1184,1184,1184}},	{142,{1189,1189,1189,1189}},	{155,{1186,1186,1186,1186}},
{155,{1391,1391,1391,1391}},	{0,{1391,1391,1391,1391}},	{0,{1391,1391,1391,1392}},
{142,{1392,1392,1392,1392}},	{0,{1392,1392,1392,1392}},	{0,{1039,1039,1039,1039}},
{0,{1041,1041,1041,1041}},	{142,{1390,1390,1390,1390}},	{153,{1390,1390,1390,1390}},
{155,{1389,1389,1389,1389}},	{0,{1388,1388,1388,1388}},	{0,{1051,1051,1051,1051}},
{0,{1387,1387,1387,1387}},	{142,{1386,1386,1386,1386}},	{0,{1050,1050,1050,1050}},
{0,{1385,1385,1385,1386}},	{142,{1386,1386,1386,1386}},	{142,{1060,1060,1060,1060}},
{155,{1067,1067,1067,1067}},	{0,{1384,1384,1384,1385}},	{142,{1385,1385,1385,1385}},
{153,{1080,1080,1080,1080}},	{155,{1079,1079,1079,1079}},	{0,{1383,1383,1383,1383}},
{142,{1382,1382,1382,1382}},	{0,{1382,1382,1382,1383}},	{142,{1383,1383,1383,1383}},
{0,{1383,1383,1383,1383}},	{142,{1087,1087,1087,1087}},	{0,{1086,1086,1086,1086}},
{0,{1381,1381,1381,1381}},	{0,{1381,1381,1381,1382}},	{142,{1104,1104,1104,1104}},
{0,{1103,1103,1103,1103}},	{0,{1109,1109,1109,1109}},	{0,{1111,1111,1111,1111}},
{142,{1110,1110,1110,1110}},	{0,{1114,1114,1114,1114}},	{0,{1376,1376,1376,1376}},
{142,{1376,1376,1376,1376}},	{0,{1119,1119,1119,1119}},	{0,{1120,1120,1120,1120}},
{0,{1121,1121,1121,1121}},	{142,{1120,1120,1120,1120}},	{0,{1123,1123,1123,1123}},
{0,{1371,1371,1371,1372}},	{0,{1372,1372,1372,1372}},	{0,{1372,1372,1372,1372}},
{142,{1137,1137,1137,1137}},	{153,{1371,1371,1371,1371}},	{155,{1370,1370,1370,1370}},
{0,{1369,1369,1369,1369}},	{0,{1369,1369,1369,1370}},	{142,{1147,1147,1147,1147}},
{0,{1369,1369,1369,1369}},	{142,{1369,1369,1369,1369}},	{0,{1369,1369,1369,1369}},
{142,{1157,1157,1157,1157}},	{142,{1158,1158,1158,1158}},	{153,{1367,1367,1367,1367}},
{155,{1366,1366,1366,1366}},	{0,{1365,1365,1365,1365}},	{0,{1365,1365,1365,1365}},
{142,{1166,1166,1166,1166}},	{142,{1167,1167,1167,1167}},	{153,{1164,1164,1164,1164}},
{155,{1163,1163,1163,1163}},	{153,{1147,1147,1147,1147}},	{155,{1146,1146,1146,1146}},
{0,{1359,1359,1359,1360}},	{142,{1173,1173,1173,1173}},	{0,{1359,1359,1359,1359}},
{142,{1359,1359,1359,1359}},	{142,{1359,1359,1359,1359}},	{0,{1359,1359,1359,1359}},
{142,{1359,1359,1359,1359}},	{0,{1359,1359,1359,1359}},	{0,{1359,1359,1359,1359}},
{0,{1359,1359,1359,1359}},	{142,{1358,1358,1358,1358}},	{153,{1358,1358,1358,1358}},
{155,{1358,1358,1358,1358}},	{0,{1356,1356,1356,1356}},	{0,{1357,1357,1357,1357}},
{142,{1356,1356,1356,1356}},	{0,{1356,1356,1356,1356}},	{0,{1356,1356,1356,1356}},
{142,{1295,1295,1295,1295}},	{0,{1355,1355,1355,1355}},	{142,{1355,1355,1355,1355}},
{0,{1355,1355,1355,1355}},	{0,{1355,1355,1355,1355}},	{142,{1355,1355,1355,1355}},
{0,{1354,1354,1354,1354}},	{0,{1354,1354,1354,1354}},	{142,{1353,1353,1353,1353}},
{0,{1353,1353,1353,1354}},	{142,{1354,1354,1354,1354}},	{0,{1353,1353,1353,1353}},
{0,{1353,1353,1353,1353}},	{142,{1353,1353,1353,1353}},	{0,{1353,1353,1353,1354}},
{142,{1239,1239,1239,1239}},	{0,{1353,1353,1353,1353}},	{142,{1353,1353,1353,1353}},
{0,{1353,1353,1353,1353}},	{142,{1353,1353,1353,1353}},	{0,{1353,1353,1353,1353}},
{142,{1353,1353,1353,1353}},	{0,{1353,1353,1353,1353}},	{0,{1353,1353,1353,1353}},
{142,{1352,1352,1352,1352}},	{153,{1349,1349,1349,1349}},	{155,{1351,1351,1351,1351}},
{0,{1347,1347,1347,1347}},	{0,{1350,1350,1350,1350}},	{142,{1349,1349,1349,1349}},
{0,{1324,1349,1324,1324}},	{142,{1067,1349,1067,1067}},	{0,{1349,1349,1349,1349}},
{0,{1349,1349,1349,1350}},	{142,{1350,1350,1350,1350}},	{142,{1350,1350,1350,1350}},
{153,{1246,1246,1246,1246}},	{155,{1245,1245,1245,1245}},	{248,{1348,1348,1348,1348}},
{249,{1348,1348,1348,1348}},	{0,{1348,1348,1348,1348}},	{248,{1248,1248,1248,1248}},
{249,{1247,1247,1247,1247}},	{250,{1251,1251,1251,1251}},	{251,{1345,1345,1345,1345}},
{0,{1345,1345,1345,1345}},	{248,{0,0,0,0}},	{249,{0,0,0,0}},
{153,{1343,1343,1343,1343}},	{0,{1342,1342,1342,1342}},	{0,{1342,1342,1342,1342}},
{153,{1250,1250,1250,1250}},	{155,{1341,1341,1341,1341}},	{0,{1341,1341,1341,1341}},
{0,{0,1341,0,0}},	{0,{1341,1341,1341,1342}},	{142,{1342,1342,1342,1342}},
{0,{1342,1342,1342,1342}},	{153,{917,917,917,917}},	{155,{916,916,916,916}},
{0,{1340,1340,1340,1340}},	{142,{916,916,916,916}},	{0,{1339,1339,1339,1340}},
{142,{925,925,925,925}},	{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1340}},
{142,{940,940,940,940}},	{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1340}},
{142,{951,951,951,951}},	{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},
{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},	{0,{980,980,980,980}},
{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},
{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},
{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},
{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1339}},
{142,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1340}},	{0,{1340,1340,1340,1340}},
{0,{1340,1340,1340,1340}},	{142,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},
{153,{1339,1339,1339,1339}},	{155,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},
{0,{1339,1339,1339,1339}},	{142,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},
{0,{1338,1338,1338,1338}},	{142,{1338,1338,1338,1338}},	{0,{1338,1338,1338,1338}},
{0,{1336,1336,1336,1336}},	{0,{1337,1337,1337,1337}},	{142,{1336,1336,1336,1336}},
{153,{1336,1336,1336,1336}},	{155,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},
{0,{1336,1336,1336,1336}},	{142,{1335,1335,1335,1335}},	{0,{1335,1335,1335,1335}},
{153,{1335,1335,1335,1335}},	{0,{1335,1335,1335,1335}},	{0,{1335,1335,1335,1335}},
{0,{1335,1335,1335,1335}},	{142,{1335,1335,1335,1335}},	{0,{1334,1334,1334,1334}},
{0,{1334,1334,1334,1334}},	{0,{1334,1334,1334,1334}},	{142,{1333,1333,1333,1333}},
{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},
{142,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},	{0,{1331,1331,1331,1331}},
{0,{1332,1332,1332,1332}},	{142,{1332,1332,1332,1332}},	{0,{1332,1332,1332,1332}},
{0,{1332,1332,1332,1332}},	{142,{1332,1332,1332,1332}},	{142,{1320,1320,1320,1320}},
{0,{1331,1331,1331,1332}},	{142,{1332,1332,1332,1332}},	{142,{1118,1118,1118,1118}},
{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},
{0,{1331,1331,1331,1332}},	{142,{1332,1332,1332,1332}},	{0,{1332,1332,1332,1332}},
{0,{1332,1332,1332,1333}},	{142,{1146,1146,1146,1146}},	{0,{1332,1332,1332,1333}},
{142,{1145,1145,1145,1145}},	{153,{1332,1332,1332,1332}},	{155,{1243,1243,1243,1243}},
{0,{1331,1331,1331,1331}},	{153,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},
{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},
{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},	{0,{1331,1331,1331,1331}},
{0,{1331,932,0,0}},	{0,{1331,932,881,881}},	{263,{1331,1331,1332,1332}},
{0,{930,930,879,879}},	{0,{1331,0,0,0}},	{0,{876,877,877,877}},
{263,{1328,1328,1328,1328}},	{0,{875,875,875,875}},	{0,{1328,863,864,864}},
{0,{864,865,866,866}},	{263,{1327,1327,1328,1328}},	{0,{863,863,864,864}},
{263,{1327,1327,1327,1327}},	{0,{1327,1328,1329,1329}},	{0,{1329,1330,1331,1331}},
{263,{1331,1331,1332,1332}},	{0,{1332,1332,1333,1333}},	{0,{1333,1334,1335,1335}},
{0,{1335,1336,1337,1337}},	{263,{1337,1337,1338,1338}},	{0,{1338,1338,1339,1339}},
{0,{1330,1330,1331,1331}},	{0,{1332,1332,1333,1333}},	{263,{1337,1337,1316,1316}},
{0,{1337,1338,1338,1338}},	{0,{1338,1339,1339,1339}},	{263,{1339,1339,1339,1339}},
{0,{1335,1335,1335,1335}},	{0,{1336,1336,1336,1336}},	{0,{1337,928,928,928}},
{0,{928,929,929,929}},	{263,{1336,1336,1336,1336}},	{0,{927,927,927,927}},
{0,{1335,967,967,967}},	{0,{967,968,968,968}},	{263,{1334,1334,1334,1334}},
{0,{966,966,966,966}},	{0,{1333,1334,1335,1335}},	{0,{1335,1336,1337,1338}},
{263,{1338,1338,1338,1338}},	{0,{1332,1332,1332,1332}},	{0,{1337,1337,1338,1338}},
{0,{1338,1338,1339,1340}},	{263,{1340,1340,1340,1340}},	{0,{1335,1335,1335,1335}},
{0,{1339,1340,1340,1340}},	{0,{1340,1341,1341,1341}},	{263,{1341,1341,1341,1341}},
{0,{1337,1337,1337,1337}},	{0,{996,996,996,996}},	{263,{1339,1339,1339,1339}},
{0,{1339,1321,1321,1321}},	{0,{1339,1340,1340,1340}},	{0,{1339,1339,1339,1339}},
{0,{1339,1340,1340,1340}},	{0,{1340,1341,1341,1341}},	{263,{1341,1341,1341,1341}},
{0,{1337,1337,1337,1337}},	{0,{1338,1338,1338,1338}},	{0,{1339,985,985,985}},
{0,{1003,985,985,985}},	{0,{994,994,994,994}},	{263,{1337,1337,1337,1337}},
{0,{1337,1337,1337,1337}},	{0,{1337,1337,1337,1337}},	{263,{1337,1337,1337,1337}},
{0,{1033,1033,1033,1033}},	{263,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},
{0,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},	{263,{1336,1336,1336,1336}},
{0,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},	{263,{1336,1336,1336,1336}},
{0,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},	{263,{1336,1336,1336,1336}},
{263,{1336,1336,1336,1336}},	{263,{0,0,0,0}},	{263,{1282,1282,1282,1282}},
{0,{1334,1334,1334,1334}},	{0,{1334,1334,1334,1334}},	{0,{1259,1259,1259,1259}},
{0,{1265,1265,1265,1265}},	{0,{1267,1267,1267,1267}},	{0,{1273,1273,1273,1273}},
{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},
{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},
{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},
{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},	{0,{1330,1330,1330,1330}},
{299,{0,0,0,0}},	{299,{1262,1262,1262,1262}},	{0,{1328,1328,1328,1328}},
{0,{1312,1312,1312,1312}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1328,1329,1329}},	{0,{1329,1330,1331,1331}},
{0,{1326,1326,1327,1327}},	{0,{1330,1331,1332,1332}},	{0,{1332,1333,1334,1334}},
{0,{1329,1329,1330,1330}},	{0,{1333,1333,1334,1334}},	{0,{1334,1334,1335,1335}},
{0,{1335,1336,1336,1336}},	{0,{1336,1337,1337,1337}},	{0,{1334,1334,1334,1334}},
{0,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},	{0,{1336,1337,1337,1337}},
{0,{1337,786,787,787}},	{0,{1337,1338,1339,1339}},	{0,{1339,788,789,789}},
{0,{1339,789,790,790}},	{0,{788,788,789,789}},	{0,{1338,1339,1339,1339}},
{0,{1339,1340,1340,1340}},	{0,{1337,1337,1337,1337}},	{0,{1339,1339,1339,1339}},
{0,{1339,1339,1339,1339}},	{0,{1339,1340,1340,1340}},	{0,{1340,1341,1341,1341}},
{0,{1338,1338,1338,1338}},	{0,{1340,1340,1340,1340}},	{0,{1340,1340,1340,1340}},
{0,{1340,1341,1341,1341}},	{0,{1341,1342,1342,1342}},	{0,{1339,1339,1339,1339}},
{0,{1340,1340,1340,1340}},	{0,{1340,1341,1341,1341}},	{0,{1341,1342,1342,1342}},
{0,{1339,1339,1339,1339}},	{0,{1341,1342,1342,1342}},	{0,{1342,1343,1343,1343}},
{0,{1343,1343,1343,1343}},	{0,{1339,1339,1339,1339}},	{0,{1340,1340,1340,1340}},
{0,{1341,897,897,897}},	{0,{897,898,898,898}},	{0,{1340,903,903,903}},
{0,{900,901,901,901}},	{0,{1339,1340,1340,1340}},	{0,{1340,1341,1341,1341}},
{0,{1338,1338,1338,1338}},	{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},
{0,{1339,1339,1339,1339}},	{0,{1295,1295,1295,1295}},	{0,{1298,1298,1298,1298}},
{0,{0,0,1337,0}},	{0,{1337,1337,1337,1337}},	{0,{1337,1337,1337,1337}},
{0,{1337,1337,1337,1337}},	{0,{1337,1337,1337,1337}},	{0,{1337,1337,1337,1337}},
{0,{1337,1337,1337,1337}},	{0,{1306,1306,1306,1306}},	{0,{1336,1336,1336,1336}},
{0,{1336,1336,1336,1336}},	{0,{1336,1336,1336,1336}},	{0,{1265,1265,1265,1265}},
{0,{1335,1335,1335,1335}},	{0,{1269,1269,1269,1269}},	{0,{1334,1334,1334,1334}},
{0,{1272,1272,1272,1272}},	{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},
{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},
{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},
{0,{1333,1333,1333,1333}},	{0,{1333,1334,1334,1335}},	{142,{1335,1336,1336,1337}},
{0,{1337,1337,1337,1338}},	{0,{1332,1332,1332,1332}},	{0,{1337,1331,1331,1331}},
{142,{1337,1333,1333,1333}},	{153,{1337,1338,1338,1338}},	{155,{1338,1339,1339,1339}},
{0,{1339,1339,1339,1340}},	{142,{1340,1340,1340,1340}},	{0,{1337,1337,1337,1337}},
{0,{1339,1340,1340,738}},	{142,{1340,1341,1341,745}},	{0,{1341,1341,1341,735}},
{0,{1341,735,735,735}},	{142,{741,742,742,742}},	{153,{1340,1341,1341,1341}},
{155,{1341,1342,1342,1342}},	{0,{0,0,0,1342}},	{0,{1342,1343,1343,1344}},
{142,{1344,1344,1344,1345}},	{0,{1345,1345,1345,1346}},	{0,{1341,1341,1341,1341}},
{0,{1345,1340,1340,1340}},	{142,{1341,1341,1341,1341}},	{153,{1344,1345,1345,1345}},
{155,{1345,1345,1345,1345}},	{0,{1345,1345,1345,1346}},	{142,{1346,1346,1346,1346}},
{0,{1343,1343,1343,1343}},	{0,{1345,1321,1321,719}},	{142,{1322,1322,1322,726}},
{0,{1344,717,717,717}},	{142,{724,724,724,724}},	{153,{1343,1323,1323,1323}},
{155,{1324,1324,1324,1324}},	{0,{1342,1311,1311,1311}},	{142,{1342,1312,1312,1312}},
{0,{1342,1309,1309,1309}},	{0,{1342,1308,1308,1308}},	{0,{1342,1343,1343,1343}},
{0,{1343,1331,1331,1331}},	{0,{1343,1330,1330,1330}},	{0,{1343,1329,1329,1329}},
{0,{1343,1344,1344,1344}},	{0,{1344,1345,1345,1345}},	{142,{1345,1346,1346,1346}},
{0,{1346,1346,1346,1346}},	{0,{1346,1342,1342,1342}},	{0,{1341,1341,1341,1341}},
{0,{1345,1346,1346,1346}},	{142,{1341,1341,1341,1341}},	{0,{1345,1345,1345,1345}},
{0,{1345,1346,1346,1346}},	{0,{1346,1293,1293,1293}},	{0,{1346,1292,1292,1292}},
{0,{1346,1327,1327,1327}},	{0,{1346,1346,1346,1346}},	{0,{1346,1347,1347,1347}},
{0,{1347,1348,1348,1349}},	{142,{1349,1350,1350,1351}},	{0,{1351,1351,1351,1352}},
{0,{1346,1346,1346,1346}},	{0,{1351,1345,1345,1345}},	{142,{1351,1347,1347,1347}},
{153,{1351,1352,1352,1352}},	{155,{1352,1353,1353,1353}},	{0,{1353,1353,1353,1353}},
{0,{1353,1353,1353,1354}},	{142,{1354,1354,1354,1354}},	{0,{1351,1351,1351,1351}},
{0,{1353,1354,1354,770}},	{142,{1354,1355,1355,1356}},	{0,{1356,1356,1356,1357}},
{0,{1357,767,767,767}},	{142,{1357,1353,1353,1353}},	{153,{1357,1358,1358,1358}},
{155,{1358,1359,1359,1359}},	{0,{773,773,773,1359}},	{0,{1359,1342,1342,1342}},
{142,{1359,1343,1343,1343}},	{0,{1359,1340,1340,1340}},	{0,{1359,1360,1360,1360}},
{142,{1360,1361,1361,1361}},	{0,{1361,1361,1361,1361}},	{0,{1361,1361,1361,1361}},
{0,{1361,1362,1362,1362}},	{142,{1362,1363,1363,1363}},	{0,{1363,1363,1363,1363}},
{0,{1363,1359,1359,1359}},	{0,{1358,1358,1358,1358}},	{0,{1362,1363,1363,1363}},
{142,{1358,1358,1358,1358}},	{0,{1362,1328,1328,1328}},	{0,{1362,1327,1327,1327}},
{0,{1362,1363,1363,1363}},	{0,{1363,1363,1363,1364}},	{142,{1364,1364,1364,1365}},
{0,{1365,1365,1365,1366}},	{0,{1361,1361,1361,1361}},	{142,{1362,1362,1362,1362}},
{153,{1364,1364,1364,1364}},	{155,{1364,1364,1364,1364}},	{0,{1364,1364,1364,1365}},
{142,{1365,1365,1365,1365}},	{0,{1362,1362,1362,1362}},	{0,{1245,1245,1245,643}},
{153,{1363,1363,1363,1363}},	{0,{1363,1363,1363,1363}},	{142,{1363,1363,1363,1363}},
{0,{1363,1363,1363,1363}},	{0,{1363,1363,1363,1363}},	{142,{1363,1363,1363,1363}},
{0,{1363,1363,1363,1363}},	{0,{1363,1363,1363,1363}},	{142,{1363,1363,1363,1363}},
{0,{1363,1363,1363,1363}},	{0,{1363,1363,1363,1363}},	{142,{1363,1363,1363,1363}},
{0,{1363,1363,1363,1363}},	{0,{1363,1363,1363,1363}},	{142,{1363,1363,1363,1363}},
{153,{1235,1235,1235,1235}},	{142,{1228,1228,1228,626}},	{155,{1346,1346,1346,1346}},
{0,{1360,1360,1360,858}},	{0,{1360,1360,1360,1361}},	{142,{1235,1235,1235,1236}},
{0,{1234,1234,1234,1235}},	{142,{1234,1234,1234,1234}},	{153,{1358,1358,1358,1358}},
{155,{1357,1357,1357,1357}},	{142,{1240,1240,1240,1240}},	{0,{1356,1356,1356,1356}},
{0,{771,771,771,1356}},	{0,{0,0,0,1356}},	{0,{1236,1236,1236,1356}},
{0,{1356,1356,1356,1356}},	{0,{1356,1356,1356,1357}},	{0,{1357,1357,1357,1358}},
{0,{1358,1358,1358,1358}},	{142,{1357,1357,1357,1357}},	{0,{1357,1357,1357,1358}},
{142,{1356,1356,1356,1356}},	{0,{1355,1355,1355,1355}},	{0,{1356,1356,1356,1356}},
{0,{1356,1356,1356,1357}},	{142,{1312,1312,1312,1313}},	{142,{1312,1312,1312,1312}},
{155,{1316,1316,1316,1316}},	{142,{1317,1317,1317,1317}},	{0,{1320,1320,1320,1353}},
{142,{1319,1319,1319,1319}},	{0,{1314,1314,1314,1352}},	{348,{1340,1340,1340,1341}},
{349,{1196,1196,1196,594}},	{348,{593,593,593,593}},	{349,{592,592,592,592}},
{350,{1312,1312,1312,1312}},	{351,{1311,1311,1311,1311}},	{348,{0,0,0,0}},
{349,{0,0,0,0}},	{0,{1344,1344,1344,903}},	{0,{1344,1344,1344,1345}},
{142,{1345,1345,1345,1346}},	{0,{1346,1346,1346,1347}},	{0,{1344,1344,1344,1344}},
{142,{1343,1343,1343,1343}},	{153,{1342,1342,1342,1342}},	{155,{1341,1341,1341,1341}},
{0,{1343,1343,1343,1343}},	{142,{1342,1342,1342,1342}},	{0,{1342,1342,1342,1342}},
{0,{1342,1342,1342,1342}},	{0,{1342,1342,1342,1342}},	{0,{1342,1342,1342,1343}},
{142,{1343,1343,1343,913}},	{0,{1343,1343,1343,1344}},	{153,{911,911,911,911}},
{155,{910,910,910,910}},	{0,{1342,1342,1342,1342}},	{0,{1342,1342,1342,1342}},
{142,{1341,1341,1341,1341}},	{0,{1341,1341,1341,1341}},	{0,{1341,1341,1341,1341}},
{142,{1341,1341,1341,1341}},	{0,{1341,1341,1341,1341}},	{0,{1339,1339,1339,1339}},
{0,{1340,1340,1340,1340}},	{0,{1340,1340,1340,1341}},	{0,{1341,1341,1341,1341}},
{153,{1269,1269,1269,1269}},	{155,{1268,1268,1268,1268}},	{0,{1339,1339,1339,1339}},
{0,{1339,1339,1339,1339}},	{0,{1339,1339,1339,1339}},	{354,{1310,1310,1310,869}},
{354,{552,552,552,552}},	{355,{551,551,551,551}},	{354,{0,0,0,0}},
{0,{1335,1147,1147,1147}},	{0,{1178,1148,1148,1148}},	{263,{1334,1334,1334,1334}},
{0,{1146,1146,1146,1146}},	{0,{1170,1170,1170,1170}},	{263,{1332,1332,1332,1332}},
{0,{1332,1184,1184,1184}},	{0,{1184,1185,1185,1185}},	{263,{1331,1331,1331,1331}},
{0,{1183,1183,1183,1183}},	{0,{1330,1331,1331,1331}},	{0,{1331,1332,1332,1332}},
{263,{1332,1332,1332,1332}},	{0,{1328,1328,1328,1328}},	{0,{1209,1209,1209,1209}},
{263,{1330,1330,1330,1330}},	{0,{1330,1205,1205,1205}},	{0,{1222,1206,1206,1206}},
{0,{1251,1251,1251,1251}},	{263,{1328,1328,1329,1328}},	{263,{926,926,1329,926}},
{0,{1251,1251,1251,1251}},	{263,{1328,1328,1329,1328}},	{263,{987,987,1329,987}},
{0,{1329,1329,1329,1329}},	{0,{1329,1329,1329,1329}},	{0,{1329,1329,1329,1329}},
{0,{1329,1329,1329,1329}},	{0,{1329,1329,1329,1329}},	{0,{1329,1329,1329,1329}},
{0,{1329,1330,1330,1330}},	{0,{1330,1331,1331,1331}},	{0,{1328,1328,1328,1328}},
{0,{1329,1329,1329,1329}},	{0,{1329,1214,1214,1214}},	{0,{1214,1215,1215,1215}},
{0,{1328,1328,1328,1328}},	{0,{1213,1213,1213,1213}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},	{0,{1327,1327,1327,1327}},
{0,{1327,1328,1328,1329}},	{375,{1329,1330,1330,1330}},	{0,{1330,1330,1330,1330}},
{0,{1330,1330,1330,1330}},	{0,{1330,1331,1331,1331}},	{142,{1331,1332,1332,1332}},
{0,{1329,1329,1329,1329}},	{153,{1331,1332,1332,1332}},	{155,{1328,1329,1329,1329}},
{142,{1328,1328,1328,1328}},	{0,{1330,1331,1331,1332}},	{375,{1332,1333,1333,1333}},
{0,{1333,1333,1333,1333}},	{0,{1333,1333,1333,1333}},	{153,{426,427,427,427}},
{155,{422,423,423,423}},	{0,{1331,1325,1325,1326}},	{375,{1327,1327,1327,1327}},
{153,{427,423,423,423}},	{155,{419,419,419,419}},	{0,{1328,1315,1315,1315}},
{0,{1317,1318,1318,1318}},	{0,{1327,1327,1327,1327}},	{0,{1327,1328,1328,1328}},
{0,{1328,1311,1311,1311}},	{0,{1328,1310,1310,1310}},	{0,{1328,1313,1313,1313}},
{0,{1328,1306,1306,1306}},	{0,{1328,1318,1318,1318}},	{0,{1328,1317,1317,1317}},
{0,{1325,1303,1303,1299}},	{0,{1325,1315,1315,1311}},	{0,{1325,1314,1314,1310}},
{0,{1325,1313,1313,1313}},	{375,{1325,1310,1310,1310}},	{0,{1325,0,0,0}},
{142,{1325,402,402,402}},	{0,{1325,1325,1325,1325}},	{153,{1325,403,403,403}},
{155,{1322,399,399,399}},	{0,{1324,0,0,0}},	{0,{1322,400,400,400}},
{0,{1323,441,441,441}},	{0,{1298,1298,1298,1299}},	{153,{0,0,0,0}},
{0,{1301,1301,1301,1297}},	{153,{395,395,395,395}},	{375,{1299,1299,1299,1299}},
{155,{0,0,0,0}},	{0,{1317,1317,1317,1318}},	{375,{1318,1318,1318,1318}},
{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},	{142,{1316,1316,1316,1316}},
{153,{1315,1315,1315,1315}},	{155,{1315,1315,1315,1315}},	{0,{1315,1315,1315,1316}},
{155,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},	{142,{1276,1276,1276,1276}},
{0,{1315,1315,1315,1316}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},
{375,{1270,1270,1270,1270}},	{153,{1271,1271,1271,1271}},	{155,{1270,1270,1270,1270}},
{0,{1306,1306,1306,1306}},	{0,{1312,1312,1312,1313}},	{0,{1313,1313,1313,1313}},
{155,{1313,1313,1313,1313}},	{0,{1313,1313,1313,1313}},	{0,{1313,1313,1313,1313}},
{0,{1313,1313,1313,1313}},	{0,{1313,1313,1313,1313}},	{0,{1313,1313,1313,1314}},
{0,{1314,1314,1314,1315}},	{0,{1313,1315,1313,1314}},	{375,{1269,1315,1269,1269}},
{0,{1267,1315,1267,1267}},	{0,{1267,1313,1267,1267}},	{0,{0,1314,0,0}},
{142,{0,1313,0,0}},	{153,{0,1312,0,0}},	{155,{0,1311,0,0}},
{0,{1311,1311,1311,1311}},	{0,{726,1311,726,726}},	{0,{1311,1311,1311,1311}},
{0,{394,1311,394,394}},	{0,{571,1311,571,571}},	{0,{1311,1311,1311,1311}},
{0,{1311,1311,1311,1311}},	{0,{1310,1311,1310,1310}},	{0,{1308,1308,1308,1296}},
{0,{1308,1308,1308,1297}},	{0,{1307,1308,1307,1296}},	{153,{1308,1308,1308,1308}},
{0,{1308,1239,1239,1239}},	{0,{1239,1240,1240,1240}},	{263,{1307,1307,1307,1307}},
{0,{1238,1238,1238,1238}},	{0,{1306,0,0,0}},	{0,{1260,337,337,337}},
{0,{1305,0,1305,0}},	{0,{1305,1305,1305,1305}},	{0,{1305,1305,1305,1305}},
{0,{1305,1306,1305,1306}},	{0,{1306,1305,1307,1305}},	{0,{1307,1308,1307,1308}},
{0,{1306,1307,1308,1307}},	{0,{1308,1306,1309,1306}},	{0,{1309,1310,1309,1310}},
{0,{1310,1309,1311,1309}},	{0,{1307,1308,1311,1308}},	{0,{1311,1312,1311,1312}},
{0,{1310,1311,1312,1311}},	{0,{1312,1312,1312,1312}},	{0,{1312,1312,1312,1312}},
{0,{1311,1311,1312,1311}},	{0,{1312,1312,1312,1312}},	{0,{1311,1311,1312,1311}},
{0,{0,0,1312,0}},	{0,{1312,1313,1313,1313}},	{0,{1312,1312,1312,1312}},
{0,{1312,1311,1311,1311}},	{0,{1312,1313,1313,1313}},	{0,{1312,1312,1312,1312}},
{0,{1312,1311,1311,1311}},	{0,{1312,1310,1313,1310}},	{0,{1309,1309,1312,1309}},
{0,{1312,1308,1311,1308}},	{0,{1309,1307,1307,1307}},	{0,{1310,1306,1306,1306}},
{0,{1310,1311,1311,1311}},	{0,{1310,1310,1310,1310}},	{0,{1310,1309,1309,1309}},
{0,{1310,1308,1311,1308}},	{0,{1307,1307,1310,1307}},	{0,{1310,1306,1309,1306}},
{0,{1307,1305,1305,1305}},	{0,{1308,1304,1304,1304}},	{0,{1308,0,0,0}},
{0,{1308,0,0,0}},	{0,{1308,0,1290,0}},	{0,{1308,0,1289,0}},
{0,{1306,0,0,0}},	{0,{1306,0,0,0}},	{0,{1306,1306,1306,1306}},
{0,{1306,1306,1306,1306}},	{0,{1305,1305,1306,1305}},	{0,{1306,0,1306,0}},
{0,{1305,0,1306,0}},	{0,{1306,1307,1306,1307}},	{0,{1307,1306,1308,1306}},
{0,{1304,1305,1308,1305}},	{0,{1308,1309,1308,1309}},	{0,{1309,1308,1310,1308}},
{0,{1310,1310,1310,1310}},	{0,{1310,1309,1309,1309}},	{0,{1310,1308,1308,1308}},
{0,{1310,1293,1310,1293}},	{0,{1310,1292,1311,1292}},	{0,{1311,0,1312,0}},
{0,{1312,1290,1290,1290}},	{0,{1312,1289,1289,1289}},	{0,{1312,1302,1312,1302}},
{0,{1312,1301,1313,1301}},	{0,{1313,1314,1313,1314}},	{0,{1314,1313,1315,1313}},
{0,{1311,1312,1315,1312}},	{0,{1311,1311,1311,1311}},	{0,{1310,1310,1314,1310}},
{0,{1314,1315,1315,1315}},	{0,{1314,1314,1314,1314}},	{0,{1314,1313,1313,1313}},
{0,{1314,1315,1315,1315}},	{0,{1314,1314,1314,1314}},	{0,{1314,1313,1313,1313}},
{0,{1314,1312,1315,1312}},	{0,{1311,1311,1314,1311}},	{0,{1314,1310,1313,1310}},
{0,{1311,1309,1309,1309}},	{0,{1312,1308,1308,1308}},	{0,{1312,1313,1313,1313}},
{0,{1312,1312,1312,1312}},	{0,{1312,1311,1311,1311}},	{0,{1312,1310,1313,1310}},
{0,{1309,1309,1312,1309}},	{0,{1312,1308,1311,1308}},	{0,{1309,1307,1307,1307}},
{0,{1310,1306,1306,1306}},	{0,{1310,1310,1311,1310}},	{0,{1311,1309,1310,1309}},
{0,{1311,1308,1309,1308}},	{0,{1311,1311,1311,1311}},	{0,{1310,1310,1311,1310}},
{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},	{0,{1311,1311,1311,1311}},
{0,{1310,1310,1311,1310}},	{0,{1311,1311,1311,1311}},	{0,{1310,1310,1311,1310}},
{0,{1257,1257,1257,1257}},	{0,{1256,1256,1310,1256}},	{0,{1260,1260,1260,1260}},
{0,{1207,1207,1207,1207}},	{0,{1210,1210,1210,1210}},	{0,{1209,1209,1307,1209}},
{0,{1213,1213,1213,1213}},	{0,{1212,1212,1306,1212}},	{0,{1243,1243,1306,1243}},
{0,{1306,1306,1306,1306}},	{0,{1305,1305,1306,1305}},	{0,{1306,1306,1306,1306}},
{0,{1305,1305,1306,1305}},	{0,{1239,1239,1239,1306}},	{0,{1285,1285,1285,1285}},
{0,{1305,0,1305,0}},	{0,{1198,1305,1198,1198}},	{0,{1202,1305,1202,1202}},
{0,{0,1305,0,0}},	{0,{1260,1305,1260,1260}},	{0,{1295,1305,1295,1295}},
{0,{1305,1294,1294,1294}},	{0,{1229,1229,1305,1229}},	{0,{1201,1201,1201,1201}},
{0,{1304,1305,1305,1305}},	{0,{1304,1304,1304,1304}},	{0,{1304,1303,1303,1303}},
{0,{1304,1302,1305,1302}},	{0,{1301,1301,1304,1301}},	{0,{1304,1300,1303,1300}},
{0,{1301,1299,1299,1299}},	{0,{1302,1298,1298,1298}},	{0,{1302,0,0,0}},
{0,{1302,1303,1304,1303}},	{0,{1303,1302,1303,1302}},	{0,{1302,1301,1303,1301}},
{0,{1301,1300,1303,1300}},	{0,{1303,1304,1303,1304}},	{0,{1304,1305,1306,1303}},
{0,{1301,1302,1306,1302}},	{0,{1214,0,1306,0}},	{0,{0,0,1306,0}},
{0,{1207,0,1305,0}},	{0,{1207,0,1304,0}},	{0,{1304,1305,1306,0}},
{0,{1304,1304,1305,0}},	{0,{1305,1303,1304,0}},	{0,{1209,1210,1305,1210}},
{0,{1305,0,1306,0}},	{0,{0,0,1305,0}},	{0,{1305,0,1306,0}},
{0,{1306,0,1305,0}},	{0,{1301,0,1179,0}},	{0,{1250,1250,1305,1250}},
{0,{1305,1305,1305,1305}},	{0,{1304,1304,1305,1304}},	{0,{1303,1303,1305,1303}},
{0,{1305,1305,1305,1305}},	{0,{1305,1305,1306,1304}},	{0,{1303,1303,1306,1303}},
{0,{1197,1197,1306,1197}},	{0,{0,1306,1170,0}},	{0,{1306,1281,1306,1279}},
{0,{1286,1286,1286,0}},	{0,{1299,1299,1299,1298}},	{0,{1189,1304,1189,0}},
{0,{1291,0,1291,0}},	{0,{0,1303,0,0}},	{0,{0,0,1303,0}},
{0,{1303,0,0,0}},	{0,{1233,1303,1233,1233}},	{0,{1265,1265,1265,1265}},
{0,{1269,1269,1269,1269}},	{0,{1301,0,0,0}},	{0,{1301,0,0,0}},
{0,{1301,0,1156,0}},	{0,{1301,0,1155,0}},	{0,{1299,0,0,0}},
{0,{1299,0,0,0}},	{0,{1299,1299,1299,1299}},	{0,{1299,1299,1299,1299}},
{0,{1299,1297,1297,1297}},	{0,{1299,1296,1296,1296}},	{0,{1299,1182,1182,1182}},
{0,{1299,1181,1181,1181}},	{0,{0,0,1299,0}},	{0,{1290,0,1261,0}},
{0,{1290,0,1260,0}},	{0,{0,0,1297,0}},	{0,{0,0,1297,0}},
{0,{0,0,1297,0}},	{87,{0,0,1295,0}},	{87,{0,0,0,0}},
{87,{1154,0,0,0}},	{87,{1154,0,0,0}},	{0,{1170,1170,1293,1170}},
{0,{1293,1294,1295,1294}},	{0,{1292,1293,1295,1293}},	{0,{1295,1296,1297,1296}},
{0,{1297,1297,1298,1297}},	{0,{1298,1296,1297,1296}},	{0,{1298,1295,1296,1295}},
{87,{1298,1299,1300,1299}},	{0,{1297,1298,1299,1298}},	{0,{1296,1297,1299,1297}},
{0,{1299,1300,1301,1300}},	{0,{1301,1301,1301,0}},	{0,{1300,1300,1301,0}},
{0,{0,1301,0,0}},	{0,{1301,1301,1301,0}},	{0,{0,1301,0,0}},
{0,{1301,1302,1301,0}},	{0,{1302,1302,1302,0}},	{0,{1299,1299,1302,0}},
{0,{1298,1298,1298,0}},	{0,{0,1301,0,0}},	{87,{0,1301,0,0}},
{0,{1301,1300,0,0}},	{0,{0,1299,0,0}},	{0,{1299,0,0,0}},
{0,{1299,1299,1300,1276}},	{0,{1275,1275,1275,1275}},	{0,{1271,1272,1299,1272}},
{0,{1299,1299,1299,0}},	{0,{0,0,1299,0}},	{0,{1299,1299,1299,0}},
{0,{1299,1299,1299,1270}},	{0,{1263,1263,1263,1263}},	{0,{1273,1273,1273,1273}},
{0,{0,1297,0,0}},	{0,{0,1297,0,0}},	{0,{1297,0,1298,0}},
{0,{0,0,1297,0}},	{0,{1297,0,1296,0}},	{0,{1297,1256,1298,1256}},
{0,{1298,1255,1257,1255}},	{0,{1264,1265,1298,1265}},	{0,{1298,1299,1300,1299}},
{0,{1297,1298,1300,1298}},	{0,{1296,1297,1300,1297}},	{0,{1300,1261,1294,1261}},
{0,{0,1300,1206,0}},	{0,{1300,0,0,0}},	{0,{1300,1247,1248,1247}},
{0,{0,1300,0,0}},	{0,{1291,1291,1291,1291}},	{0,{1299,1300,1300,1300}},
{0,{1300,1299,1299,1299}},	{0,{1298,1298,1298,1298}},	{0,{1299,1299,1299,1299}},
{0,{1299,1300,1301,1302}},	{0,{1302,1299,1300,1301}},	{0,{1299,1298,1299,1300}},
{0,{1301,1302,1303,1303}},	{0,{1302,1301,1302,1302}},	{0,{1302,1303,1303,1303}},
{0,{1302,1302,1302,1302}},	{0,{1302,1303,1303,1303}},	{0,{1303,1302,1302,1302}},
{0,{1301,1301,1301,1301}},	{0,{1302,1303,1304,1300}},	{0,{1304,1302,1303,1299}},
{0,{1302,1301,1302,1298}},	{0,{1298,1303,1297,1297}},	{0,{1296,1302,1296,1296}},
{0,{1302,1303,1304,1303}},	{0,{1304,1302,1303,1302}},	{0,{1301,1301,1302,1301}},
{0,{1303,1304,1300,1300}},	{0,{1301,1303,1299,1299}},	{0,{1298,1302,1298,1298}},
{0,{1302,1303,1304,1304}},	{0,{1303,1302,1303,1303}},	{0,{1297,1295,1295,1295}},
{0,{1294,1294,1294,1294}},	{0,{1301,1302,1302,1302}},	{0,{1301,1301,1301,1301}},
{0,{1299,1301,1300,1300}},	{0,{1299,1300,1299,1299}},	{0,{1297,1300,1298,1298}},
{0,{1297,1299,1297,1297}},	{0,{1299,1300,1300,1300}},	{0,{1299,1299,1299,1299}},
{0,{1299,1299,1299,1299}},	{0,{1299,1300,1301,1301}},	{0,{1300,1299,1300,1300}},
{0,{1300,1300,1300,1300}},	{0,{1300,1300,1300,1300}},	{0,{1300,1301,1301,1301}},
{0,{1300,1300,1300,1300}},	{0,{1300,1301,1299,1299}},	{0,{1298,1300,1298,1298}},
{0,{1300,1301,1302,1301}},	{0,{1300,1300,1301,1300}},	{0,{1301,1302,1299,1299}},
{0,{1298,1301,1298,1298}},	{0,{1301,1301,1301,1301}},	{0,{1296,1296,1296,1296}},
{0,{1300,1300,1300,1300}},	{0,{1299,1300,1299,1299}},	{0,{1300,1301,1301,1301}},
{0,{1300,1300,1300,1300}},	{0,{1300,1300,1300,1300}},	{0,{1300,1301,1300,1300}},
{0,{1301,1301,1301,1301}},	{0,{1301,1301,1301,1301}},	{0,{1301,1302,1302,1302}},
{0,{1301,1301,1301,1301}},	{0,{1300,1301,1300,1300}},	{0,{1301,1302,1303,1302}},
{0,{1301,1301,1302,1301}},	{0,{1300,1302,1300,1300}},	{0,{1302,1302,1302,1302}},
{0,{1298,1298,1298,1298}},	{0,{1301,1302,1302,1302}},	{0,{1301,1301,1301,1301}},
{0,{1301,1301,1301,1301}},	{0,{1301,1302,1301,1301}},	{0,{1302,1302,1302,1302}},
{0,{1302,1302,1302,1302}},	{0,{1302,1303,1304,1303}},	{0,{1302,1302,1303,1302}},
{0,{1301,1303,1301,1301}},	{0,{1303,1303,1303,1303}},	{0,{1299,1299,1299,1299}},
{0,{1302,1303,1303,1303}},	{0,{1303,1302,1302,1302}},	{0,{1301,1301,1301,1301}},
{0,{1302,1303,1300,1300}},	{0,{1300,1302,1299,1299}},	{0,{1298,1301,1298,1298}},
{0,{1301,1297,1297,1297}},	{0,{1301,1296,1302,1296}},	{0,{1296,1295,1301,1295}},
{0,{1294,1294,1300,1294}},	{0,{1300,0,0,0}},	{0,{1300,1301,0,0}},
{0,{0,1300,0,0}},	{0,{1300,0,0,0}},	{0,{1300,0,1301,0}},
{0,{0,0,1300,0}},	{0,{1300,0,0,0}},	{0,{1300,1301,0,0}},
{0,{0,1300,0,0}},	{0,{1300,0,1296,0}},	{0,{1297,0,0,0}},
{0,{1299,1300,1301,1300}},	{0,{1301,1299,1300,1299}},	{0,{1298,1298,1299,1298}},
{0,{1300,1301,1298,1297}},	{0,{1298,1300,1297,1296}},	{0,{1295,1299,1296,1295}},
{0,{1299,1300,1301,1300}},	{0,{1299,1299,1300,1299}},	{0,{1294,1292,1292,1292}},
{0,{1291,1291,1291,1291}},	{0,{1298,1299,1300,1299}},	{0,{1300,1298,1299,1298}},
{0,{1297,1297,1298,1297}},	{0,{1299,1300,1297,1296}},	{0,{1297,1299,1296,1295}},
{0,{1294,1298,1295,1294}},	{0,{1295,1293,1293,1293}},	{0,{1292,1292,1292,1292}},
{0,{1296,1297,1298,1297}},	{0,{1298,1296,1297,1296}},	{0,{1295,1295,1296,1295}},
{0,{1297,1298,1299,1300}},	{0,{1300,1297,1298,1299}},	{0,{1298,1296,1297,1298}},
{0,{1299,1300,1301,1300}},	{0,{1299,1299,1300,1299}},	{0,{1297,1298,1298,1298}},
{0,{1297,1297,1297,1297}},	{0,{1298,1299,1300,1299}},	{0,{1298,1298,1299,1298}},
{0,{1296,1299,1298,1297}},	{0,{1296,1298,1297,1296}},	{0,{1294,1295,1295,1295}},
{0,{1294,1294,1294,1294}},	{0,{1296,1296,1296,1296}},	{0,{1296,1297,1298,1297}},
{0,{1296,1296,1297,1296}},	{0,{1297,1298,1299,1299}},	{0,{1298,1297,1298,1298}},
{0,{1298,1293,1294,1293}},	{0,{1298,0,0,0}},	{0,{1298,0,0,0}},
{0,{1297,1249,0,0}},	{0,{1297,0,0,0}},	{0,{1297,0,1250,0}},
{0,{1294,0,1249,0}},	{0,{1296,1297,1297,1297}},	{0,{1296,1296,1296,1296}},
{0,{1296,1297,1295,1295}},	{0,{1294,1296,1294,1294}},	{0,{1296,1296,1296,1296}},
{0,{1296,1296,1296,1296}},	{0,{1296,1297,1297,1297}},	{0,{1296,1296,1296,1296}},
{0,{1296,1297,1295,1295}},	{0,{1294,1296,1294,1294}},	{0,{1296,1291,1297,1291}},
{0,{1290,1290,1296,1290}},	{0,{1296,1297,1289,1289}},	{0,{1288,1296,1288,1288}},
{0,{1296,1296,1296,1296}},	{0,{1296,1282,1282,1282}},	{0,{1296,1281,1281,1281}},
{0,{1296,1286,1286,1286}},	{0,{1296,1283,1289,1283}},	{0,{1224,0,1296,0}},
{0,{0,0,1295,0}},	{0,{1223,1224,1294,0}},	{0,{0,1223,1293,0}},
{0,{1261,1261,1293,1261}},	{0,{1222,0,1291,0}},	{0,{1260,1261,1292,1261}},
{0,{1260,1260,1291,1260}},	{0,{1261,1262,1291,1263}},	{0,{1262,1261,1290,1262}},
{0,{1290,1291,1291,1291}},	{0,{1290,1290,1290,1290}},	{0,{1290,1291,1289,1289}},
{0,{1288,1290,1288,1288}},	{0,{1290,1290,1290,1290}},	{0,{1290,1290,1290,1290}},
{0,{1290,1291,1291,1291}},	{0,{1290,1290,1290,1290}},	{0,{1290,1291,1289,1289}},
{0,{1288,1290,1288,1288}},	{0,{1290,1285,1291,1285}},	{0,{1284,1284,1290,1284}},
{0,{1290,1291,1283,1283}},	{0,{1282,1290,1282,1282}},	{0,{1290,1290,1290,1290}},
{0,{1290,1291,1291,1291}},	{0,{1290,1290,1290,1290}},	{0,{1290,1291,1289,1289}},
{0,{1288,1290,1288,1288}},	{0,{1290,1290,1290,1290}},	{0,{1290,1290,1290,1290}},
{0,{1290,1291,1291,1291}},	{0,{1290,1290,1290,1290}},	{0,{1290,1291,1289,1289}},
{0,{1288,1290,1288,1288}},	{0,{1290,1285,1291,1285}},	{0,{1284,1284,1290,1284}},
{0,{1290,1291,1283,1283}},	{0,{1282,1290,1282,1282}},	{0,{1290,1290,1290,1290}},
{0,{1290,1261,1261,1261}},	{0,{1290,1266,1266,1266}},	{0,{1290,1263,1269,1263}},
{0,{1181,0,1290,0}},	{0,{0,0,1289,0}},	{0,{1180,1181,1288,0}},
{0,{0,1180,1287,0}},	{0,{1218,1218,1287,1218}},	{0,{1179,0,1285,0}},
{0,{1217,1218,1286,1218}},	{0,{1217,1217,1285,1217}},	{0,{1218,1219,1285,1220}},
{0,{1219,1218,1284,1219}},	{0,{1284,1285,1285,1286}},	{0,{1286,1284,1284,1285}},
{0,{1286,1284,1284,1284}},	{0,{1286,1287,1288,1288}},	{0,{1288,1286,1287,1287}},
{0,{1288,1289,1289,1290}},	{0,{1290,1289,1289,1289}},	{0,{1290,1291,1291,1291}},
{0,{1291,1292,1292,1292}},	{0,{1292,1291,1291,1291}},	{0,{1292,1293,1290,1290}},
{0,{1290,1292,1289,1289}},	{0,{1292,1288,1288,1288}},	{0,{1292,1285,1293,1285}},
{0,{1283,1284,1292,1284}},	{0,{1292,1293,1294,1294}},	{0,{1294,1292,1293,1293}},
{0,{1294,1295,1295,1295}},	{0,{1295,1296,1296,1296}},	{0,{1294,1296,1295,1295}},
{0,{1296,1297,1297,1297}},	{0,{1297,1296,1296,1296}},	{0,{1297,1205,1203,1203}},
{0,{1297,1204,1202,1202}},	{0,{1297,1298,1298,1298}},	{0,{1298,1204,1204,1204}},
{0,{1298,1299,1299,1299}},	{0,{1299,1298,1298,1298}},	{0,{1299,1300,1297,1297}},
{0,{1297,1299,1296,1296}},	{0,{1299,1199,1205,1199}},	{0,{1292,1198,1204,1198}},
{0,{1298,1299,1300,1300}},	{0,{1300,1298,1299,1299}},	{0,{1300,1301,1301,1301}},
{0,{1301,0,0,0}},	{0,{1300,1137,0,0}},	{0,{1300,1280,1280,1280}},
{0,{1279,1279,1279,1279}},	{0,{1283,1283,1283,1283}},	{0,{1292,1291,1292,1292}},
{0,{1297,1297,1297,1294}},	{0,{1293,1293,1293,1293}},	{0,{1296,1297,1297,1297}},
{0,{1297,1296,1296,1296}},	{0,{1297,1298,1295,1295}},	{0,{1295,1297,1294,1294}},
{0,{1297,1293,1293,1293}},	{0,{1297,1298,1299,1298}},	{0,{1299,1297,1298,1297}},
{0,{1299,1300,1296,1296}},	{0,{1297,1299,1295,1295}},	{0,{1296,1294,1294,1294}},
{0,{1298,0,0,0}},	{0,{1298,1119,0,0}},	{0,{1298,0,0,0}},
{0,{1298,0,1120,0}},	{0,{1279,0,1119,0}},	{0,{1281,1297,1282,1282}},
{0,{1282,1296,1281,1281}},	{0,{1282,1296,1280,1280}},	{0,{1280,1295,1279,1279}},
{0,{1295,1296,1297,1297}},	{0,{1281,1292,1277,1277}},	{0,{1296,1297,1298,1299}},
{0,{1299,1296,1297,1298}},	{0,{1299,1300,1301,1301}},	{0,{1301,1299,1300,1300}},
{0,{1301,1302,1303,1272}},	{0,{1303,1143,1143,1143}},	{0,{1303,1144,1145,1144}},
{0,{1303,1143,1144,1143}},	{0,{1303,1145,1146,1146}},	{0,{1303,1144,1145,1145}},
{0,{1303,1304,1304,0}},	{0,{1303,1303,1303,0}},	{0,{1303,1264,1264,1264}},
{0,{1303,1263,1263,1263}},	{0,{1303,1262,1304,1262}},	{0,{1262,1261,1303,1261}},
{0,{1303,0,0,0}},	{0,{1303,0,0,0}},	{0,{1303,0,1094,0}},
{0,{1069,1069,1303,1069}},	{0,{1069,1069,1303,1069}},	{0,{1069,1070,1303,1069}},
{0,{1070,1070,1303,1070}},	{0,{1057,1057,1303,1057}},	{0,{1056,1057,1302,1056}},
{0,{0,0,1302,0}},	{0,{0,1083,1301,0}},	{0,{1121,1121,1301,1121}},
{0,{1122,1122,1301,1122}},	{0,{1125,1124,1301,1125}},	{0,{1120,1120,1120,1120}},
{0,{1300,1300,1300,1300}},	{0,{1300,1301,1300,1300}},	{0,{1301,1301,1301,1301}},
{0,{1301,1302,1219,1219}},	{0,{1302,1223,1223,1223}},	{0,{1302,1131,1131,1131}},
{0,{1302,1128,1128,1128}},	{0,{1302,1233,1233,1233}},	{0,{1302,0,0,0}},
{0,{1213,1302,1213,1213}},	{0,{1120,1302,1120,1120}},	{0,{1302,1302,1302,1292}},
{0,{1302,1302,1302,1302}},	{0,{1302,1302,1302,1302}},	{0,{1302,1303,1302,1304}},
{0,{1304,1304,1304,1304}},	{0,{1304,1304,1304,1304}},	{0,{1304,1304,1304,1304}},
{0,{1304,1305,1304,1303}},	{0,{1305,1305,1306,1305}},	{0,{1304,1306,1304,1304}},
{0,{1306,1306,1306,1306}},	{0,{1302,1302,1302,1302}},	{0,{1305,1305,1305,1306}},
{0,{1305,1305,1305,1305}},	{0,{1305,1306,1305,1305}},	{0,{1306,1306,1306,1307}},
{0,{1307,1307,1307,1306}},	{0,{1307,1307,1307,1307}},	{0,{1307,1307,1307,1307}},
{0,{1306,1307,1306,1306}},	{0,{1307,1307,1308,1307}},	{0,{1308,1309,1308,1308}},
{0,{1309,1309,1309,1310}},	{0,{1304,1304,1304,1304}},	{0,{1195,1195,1195,1195}},
{0,{1194,1197,1194,1194}},	{0,{1307,1307,1307,1190}},	{0,{1307,1307,1308,1307}},
{0,{1308,1309,1308,1308}},	{0,{1309,1309,1309,1310}},	{0,{1304,1304,1304,1304}},
{0,{1017,1017,1017,1017}},	{0,{1080,1080,1080,1080}},	{0,{1193,1193,1193,1193}},
{0,{1195,1195,1195,1306}},	{0,{1306,1307,1307,1307}},	{0,{1307,1308,1308,1308}},
{0,{1308,1308,1308,1309}},	{0,{1309,950,950,950}},	{0,{955,955,955,951}},
{0,{1308,958,958,958}},	{0,{966,966,1308,966}},	{0,{1308,1308,1308,1308}},
{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},
{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},	{0,{980,980,1308,980}},
{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},
{0,{1308,1308,1308,1308}},	{0,{1308,1308,1308,1308}},	{0,{1308,1308,1309,1308}},
{0,{1309,1309,1310,1309}},	{0,{1310,1310,1311,1310}},	{0,{1040,1040,1039,1040}},
{0,{1310,1310,1310,1310}},	{0,{1310,1310,1310,1310}},	{0,{1310,1310,1310,1310}},
{0,{1310,1310,1310,1310}},	{0,{1310,1061,1061,1061}},	{0,{1305,1305,1310,1305}},
{0,{1305,1305,1310,1305}},	{0,{1305,1305,1310,1305}},	{0,{1046,1046,1074,1046}},
{0,{1309,1309,1309,1309}},	{0,{1309,1078,1078,1078}},	{0,{1309,1309,1309,1309}},
{0,{1298,1298,1309,1298}},	{0,{1298,1298,1309,1298}},	{0,{1298,1298,1309,1298}},
{0,{1039,1039,1104,1039}},	{0,{0,1308,0,0}},	{0,{1308,1309,1309,1310}},
{0,{1310,1311,1311,1116}},	{0,{1311,1312,1312,1312}},	{0,{1312,1114,1114,1114}},
{0,{1312,1115,1115,1115}},	{0,{1312,1112,1112,1112}},	{0,{1312,1122,1122,1122}},
{0,{1312,1126,1126,1126}},	{0,{1312,1312,1312,1312}},	{0,{1312,1312,1312,1312}},
{0,{1312,1312,1312,1310}},	{0,{1312,1312,1312,1037}},	{0,{1036,1312,1036,1036}},
{0,{1312,1313,1313,1313}},	{0,{1313,1145,1145,1145}},	{0,{1313,1150,1150,1150}},
{0,{1313,1314,1315,1315}},	{0,{1315,1316,1317,1317}},	{0,{1309,1156,1141,1141}},
{0,{1316,1317,1318,1318}},	{0,{1318,1319,1166,1166}},	{0,{1272,1272,1319,1272}},
{0,{1272,1272,1319,1272}},	{0,{1272,1272,1319,1272}},	{0,{1013,1013,1189,1013}},
{0,{1318,1318,1318,1318}},	{0,{1189,1189,1189,1189}},	{0,{1293,1293,1317,1293}},
{0,{1020,1020,1317,1020}},	{0,{1292,1292,1317,1292}},	{0,{1020,1020,1317,1020}},
{0,{1120,1120,1317,1120}},	{0,{0,0,1317,0}},	{0,{1287,1317,1287,1287}},
{0,{1014,1317,1014,1014}},	{0,{1317,1317,0,0}},	{0,{1317,1317,1317,1317}},
{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1318}},	{0,{1197,1197,1197,1196}},
{0,{1317,1317,1317,1318}},	{0,{1318,1318,1318,1208}},	{0,{1318,1318,1318,1319}},
{0,{1211,1211,1211,1211}},	{0,{1318,1318,1318,1208}},	{0,{1318,1318,1318,1003}},
{0,{1318,1318,1318,1275}},	{0,{1214,1214,1214,1214}},	{0,{1317,1317,1317,1211}},
{0,{0,0,0,1317}},	{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},
{0,{1317,1317,1317,861}},	{0,{858,858,858,858}},	{0,{1316,1316,1316,1316}},
{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},
{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},
{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},
{0,{1316,1316,1316,1316}},	{0,{1316,1316,1316,1316}},	{0,{1316,1316,1317,1316}},
{0,{949,949,1317,949}},	{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},
{0,{1311,1311,1317,1311}},	{0,{962,962,1317,962}},	{0,{1317,1317,1317,1317}},
{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},	{0,{1317,1317,1317,1317}},
{0,{1305,1305,1317,1305}},	{0,{956,956,1317,956}},	{0,{1317,1318,1318,1319}},
{0,{1319,1318,1318,1318}},	{0,{1319,1037,1037,1037}},	{0,{1319,1320,1320,1033}},
{0,{1320,1321,1321,1032}},	{0,{1321,1034,1034,1034}},	{0,{1321,1035,1035,1035}},
{0,{1321,1034,1034,1034}},	{0,{1321,1322,1322,1322}},	{0,{1322,1041,1041,1041}},
{0,{1322,1323,1323,1323}},	{0,{1323,1044,1044,1044}},	{0,{1323,1043,1043,1043}},
{0,{1323,1324,1324,1324}},	{0,{1324,956,956,956}},	{0,{1324,1048,1048,1048}},
{0,{1324,1050,1050,1050}},	{0,{1324,1325,1325,1325}},	{0,{1325,1055,1055,1055}},
{0,{1325,1326,1326,1326}},	{0,{1326,0,0,0}},	{0,{1316,1316,1316,1316}},
{0,{1320,1320,1320,1320}},	{0,{1324,1324,1324,1322}},	{0,{1321,1321,1321,1321}},
{0,{1323,1324,1324,1324}},	{0,{1324,1055,1055,1055}},	{0,{1324,1054,1054,1054}},
{0,{1324,1059,1059,1059}},	{0,{1324,1058,1058,1058}},	{0,{1324,1273,1273,1273}},
{0,{1317,1324,1318,1318}},	{0,{1318,1064,1049,1049}},	{0,{1323,1066,1067,1067}},
{0,{1323,1068,1070,1070}},	{0,{1323,1226,1073,1073}},	{0,{1323,917,917,917}},
{0,{1323,918,918,918}},	{0,{1323,921,921,921}},	{0,{1260,1260,1323,1260}},
{0,{1260,1260,1323,1260}},	{0,{857,857,1323,857}},	{0,{1261,1261,1323,1261}},
{0,{1323,1323,1323,1020}},	{0,{0,0,1323,0}},	{0,{1323,1323,1323,1323}},
{0,{1323,1323,1323,1323}},	{0,{1323,1323,1323,1109}},	{0,{1323,1323,1323,1323}},
{0,{1323,1323,1323,1324}},	{0,{1323,1323,1323,1323}},	{0,{1323,1323,1323,1118}},
{0,{1323,1323,1323,1117}},	{0,{1323,1323,1323,1323}},	{0,{1323,1323,1323,1324}},
{0,{1324,1324,1324,1324}},	{0,{1324,1324,1324,1325}},	{0,{1288,1288,1288,1325}},
{0,{981,981,981,981}},	{0,{982,982,982,982}},	{0,{995,995,995,995}},
{0,{1020,1020,1020,1020}},	{0,{1025,1025,1025,1025}},	{0,{1320,0,0,0}},
{0,{1319,850,0,0}},	{0,{1319,1320,1321,1321}},	{0,{1320,1319,1320,1320}},
{0,{846,0,0,0}},	{0,{839,837,837,837}},	{0,{837,1318,836,836}},
{0,{835,1317,835,835}},	{0,{0,1317,0,0}},	{0,{1317,1318,1319,1318}},
{0,{1319,1317,1318,1317}},	{0,{1316,1316,1317,1316}},	{0,{1314,1318,1316,1315}},
{0,{1316,1317,1315,1314}},	{0,{1313,1316,1314,1313}},	{0,{1314,1316,1313,1312}},
{0,{1311,1315,1312,1311}},	{0,{1312,1310,1310,1310}},	{0,{1309,1309,1309,1309}},
{0,{1313,1314,1315,1314}},	{0,{1315,1313,1314,1313}},	{0,{1312,1312,1313,1312}},
{0,{1310,1314,1312,1311}},	{0,{1312,1313,1311,1310}},	{0,{1309,1312,1310,1309}},
{0,{1310,1312,1309,1308}},	{0,{1307,1311,1308,1307}},	{0,{1308,1306,1306,1306}},
{0,{1305,1305,1305,1305}},	{0,{870,1296,0,0}},	{0,{1308,1309,1309,1309}},
{0,{1308,1308,1308,1308}},	{0,{1306,1308,1307,1307}},	{0,{1306,1307,1306,1306}},
{0,{1305,1307,1305,1305}},	{0,{815,0,886,0}},	{0,{0,1289,885,0}},
{0,{813,0,921,0}},	{0,{0,1287,920,0}},	{0,{1303,1304,1304,1304}},
{0,{1304,1303,1303,1303}},	{0,{1304,1302,1302,1302}},	{0,{1304,1305,1306,1301}},
{0,{1306,1304,1305,1300}},	{0,{1306,1303,1304,1299}},	{0,{1300,1302,1303,1298}},
{0,{1299,1305,1297,1297}},	{0,{1305,1306,1306,1306}},	{0,{1306,1305,1305,1305}},
{0,{1306,1307,1304,1304}},	{0,{1307,1306,1303,1303}},	{0,{1303,1305,1302,1302}},
{0,{1302,1306,1301,1301}},	{0,{1306,1307,1307,1307}},	{0,{1307,1306,1306,1306}},
{0,{1304,1307,1305,1305}},	{0,{1305,1306,1304,1304}},	{0,{1304,1306,1303,1303}},
{0,{956,1267,0,0}},	{0,{1305,1284,1284,1284}},	{0,{1304,1287,1305,1283}},
{0,{1284,1286,1304,1282}},	{0,{1304,1305,1305,1305}},	{0,{1305,1304,1304,1304}},
{0,{1302,1305,1303,1303}},	{0,{1303,1304,1302,1302}},	{0,{1302,1304,1301,1301}},
{0,{963,0,0,0}},	{0,{951,1303,950,950}},	{0,{0,0,1303,0}},
{0,{0,781,1302,0}},	{0,{1252,1251,1302,1252}},	{0,{0,1253,997,0}},
{0,{1301,1302,1301,0}},	{0,{1302,1302,1302,1302}},	{0,{1301,1302,1301,1301}},
{0,{1300,1302,1300,1300}},	{0,{1302,1302,1302,1302}},	{0,{1301,1302,1301,1301}},
{0,{1300,1302,1300,1300}},	{0,{1302,1302,1302,1302}},	{0,{1301,1302,1301,1301}},
{0,{1300,1302,1300,1300}},	{0,{1240,1240,1240,1240}},	{0,{0,0,1301,0}},
{0,{757,757,1301,757}},	{0,{1253,1253,1301,1253}},	{0,{0,0,1301,0}},
{0,{1301,1255,1302,1255}},	{0,{1300,1254,1302,1254}},	{0,{1299,1253,1253,1253}},
{0,{1301,1262,1302,1262}},	{0,{1300,1261,1302,1261}},	{0,{1299,1260,1260,1260}},
{0,{1266,1266,1266,1266}},	{0,{0,0,1300,0}},	{0,{0,0,1300,0}},
{0,{1300,1270,1270,1270}},	{0,{1276,1276,1276,0}},	{0,{1299,1244,1244,1244}},
{0,{1299,1243,1243,1243}},	{0,{1299,1252,1252,1252}},	{0,{1299,1251,1251,1251}},
{0,{1299,1257,1257,1257}},	{0,{1299,1239,1239,1239}},	{0,{1299,1262,1262,1262}},
{0,{1299,1261,1261,1261}},	{0,{1216,1216,1266,1216}},	{0,{1235,1235,1235,1235}},
{0,{1244,1244,1244,1244}},	{0,{1257,1257,1257,1257}},	{0,{1295,1296,1296,1296}},
{0,{1296,1295,1295,1295}},	{0,{1294,1294,1294,1294}},	{0,{1292,1295,1293,1293}},
{0,{1293,1294,1292,1292}},	{0,{1291,1293,1291,1291}},	{0,{1293,1294,1294,1294}},
{0,{1294,1293,1293,1293}},	{0,{1292,1292,1292,1292}},	{0,{1290,1293,1291,1291}},
{0,{1291,1292,1290,1290}},	{0,{1289,1291,1289,1289}},	{0,{1291,1292,1292,1292}},
{0,{1291,1291,1291,1291}},	{0,{1289,1291,1290,1290}},	{0,{1289,1290,1289,1289}},
{0,{1290,1291,1291,1291}},	{0,{1290,1290,1290,1290}},	{0,{1288,1290,1289,1289}},
{0,{1288,1289,1288,1288}},	{0,{1289,1289,1289,1289}},	{0,{1288,1289,1288,1288}},
{0,{1289,718,1290,0}},	{0,{1289,717,1289,0}},	{0,{1289,749,750,749}},
{0,{1288,1289,749,748}},	{0,{746,1288,748,747}},	{0,{746,1287,747,746}},
{0,{1287,748,749,748}},	{0,{1286,749,748,747}},	{0,{1286,1287,1287,1287}},
{0,{1286,1286,1286,1286}},	{0,{1284,1286,1285,1285}},	{0,{1284,1285,1284,1284}},
{0,{1285,1285,1285,1285}},	{0,{1284,1285,1284,1284}},	{0,{1285,1286,1286,1286}},
{0,{1285,1285,1285,1285}},	{0,{1283,1285,1284,1284}},	{0,{1283,1284,1283,1283}},
{0,{1284,1284,1284,1284}},	{0,{1283,1284,1283,1283}},	{0,{1284,1277,1285,1277}},
{0,{1276,1276,1284,1276}},	{0,{1282,1276,1283,1275}},	{0,{1274,1275,1282,1274}},
{0,{1282,861,1283,861}},	{0,{1283,860,1282,860}},	{0,{1280,862,1281,859}},
{0,{1281,861,1280,858}},	{0,{1278,857,1281,857}},	{0,{1279,856,1280,856}},
{0,{1276,858,1279,855}},	{0,{1277,857,1278,854}},	{0,{1278,853,1277,853}},
{0,{854,852,852,852}},	{0,{860,857,857,857}},	{0,{1271,865,1274,850}},
{0,{1272,864,1273,849}},	{0,{1269,864,1272,848}},	{0,{1270,863,1271,847}},
{0,{1272,1272,1272,1272}},	{0,{1271,1272,1271,1271}},	{0,{0,1272,0,0}},
{0,{1272,1272,1272,1272}},	{0,{1271,1272,1271,1271}},	{0,{1272,1272,1272,1272}},
{0,{1271,1272,1271,1271}},	{0,{1272,1272,1272,1272}},	{0,{1271,1272,1271,1271}},
{0,{1272,1272,1272,1272}},	{0,{1271,1272,1271,1271}},	{0,{1272,1224,1224,1224}},
{0,{1272,1227,1227,1227}},	{0,{1272,1230,1230,1230}},	{0,{656,656,1272,656}},
{0,{0,0,1272,0}},	{0,{1219,1272,1219,1219}},	{0,{1222,1272,1222,1222}},
{0,{1233,0,1233,0}},	{0,{1271,827,1249,827}},	{0,{1270,826,1250,826}},
{0,{1269,840,1249,825}},	{0,{1269,0,875,0}},	{0,{1269,1270,1270,1270}},
{0,{1270,1269,1269,1269}},	{0,{1270,710,710,710}},	{0,{1270,1271,1267,1267}},
{0,{1267,1270,1266,1266}},	{0,{1267,715,707,707}},	{0,{1269,1270,1270,1270}},
{0,{1270,704,704,704}},	{0,{1270,704,704,704}},	{0,{1270,711,703,703}},
{0,{1270,1271,1272,1271}},	{0,{1272,1270,1271,1270}},	{0,{1272,1273,1269,1269}},
{0,{1270,1272,1268,1268}},	{0,{1272,0,0,0}},	{335,{1271,0,0,0}},
{0,{1270,640,0,0}},	{0,{1270,1253,1253,1253}},	{0,{1252,1252,1252,1252}},
{0,{1269,1255,1251,1251}},	{0,{1250,1254,1250,1250}},	{0,{1255,1255,1255,1255}},
{0,{1267,690,690,690}},	{0,{1267,1258,1259,1258}},	{0,{1257,1257,1258,1257}},
{0,{1266,1260,1256,1256}},	{0,{1255,1259,1255,1255}},	{335,{0,0,0,0}},
{0,{1264,1265,1265,1242}},	{0,{1264,1264,1264,1241}},	{0,{1264,1264,1264,682}},
{0,{1262,1264,1262,1239}},	{0,{1262,1264,1262,680}},	{0,{1264,1264,1264,1243}},
{0,{1264,1264,1264,677}},	{0,{1264,1259,1259,677}},	{0,{1264,1265,1266,1245}},
{0,{1264,1264,1265,1244}},	{0,{1263,1265,1263,1243}},	{0,{1265,1265,1265,0}},
{335,{1264,1264,1264,0}},	{0,{1263,1264,1263,0}},	{0,{1264,1228,1228,1228}},
{0,{1264,669,669,669}},	{0,{1264,1237,1238,1237}},	{0,{1264,0,0,0}},
{0,{1264,610,0,0}},	{0,{1264,0,0,0}},	{0,{1264,0,0,0}},
{0,{1264,0,610,0}},	{0,{1236,0,609,0}},	{0,{1263,1253,1253,0}},
{0,{1263,1252,1252,0}},	{0,{1263,1251,1251,0}},	{0,{1263,1250,1264,0}},
{0,{1249,1249,1263,0}},	{0,{1253,0,818,0}},	{0,{1229,0,817,0}},
{0,{1252,598,816,0}},	{0,{1227,597,815,0}},	{0,{1259,635,815,635}},
{0,{1250,0,813,0}},	{0,{1258,635,1259,635}},	{0,{1259,634,1258,634}},
{0,{1259,1259,1259,631}},	{0,{1259,1260,1261,632}},	{0,{1259,1259,1260,631}},
{0,{1260,0,0,0}},	{0,{1260,0,0,0}},	{0,{1260,0,590,0}},
{0,{1249,625,625,625}},	{0,{1249,626,627,626}},	{0,{1250,625,626,625}},
{0,{1257,1197,1197,1197}},	{0,{1257,1196,1196,1196}},	{0,{1257,637,637,637}},
{0,{1257,1198,1194,1194}},	{0,{1254,1197,1193,1193}},	{0,{1254,642,634,634}},
{0,{1255,1197,1197,1197}},	{0,{1255,631,631,631}},	{0,{1255,631,631,631}},
{0,{1255,638,630,630}},	{0,{1255,1198,1199,1198}},	{0,{1255,1197,1198,1197}},
{0,{1255,1200,1196,1196}},	{0,{1253,1199,1195,1195}},	{0,{1245,625,1254,625}},
{0,{1254,0,0,0}},	{335,{1253,0,0,0}},	{0,{1252,566,0,0}},
{0,{1252,1179,1179,1179}},	{0,{1252,1178,1178,1178}},	{0,{1252,1181,1177,1177}},
{0,{1250,1180,1176,1176}},	{0,{711,625,617,617}},	{0,{1250,1180,1180,1180}},
{0,{1250,614,614,614}},	{0,{1250,614,614,614}},	{0,{1250,621,613,613}},
{0,{1250,1181,1182,1181}},	{0,{1250,1180,1181,1180}},	{0,{1250,1183,1179,1179}},
{0,{1248,1182,1178,1178}},	{335,{715,0,0,0}},	{0,{1248,0,0,0}},
{0,{1248,550,0,0}},	{0,{1248,0,0,0}},	{0,{1248,1249,1250,1249}},
{0,{1250,1248,1249,1248}},	{0,{1250,1251,1247,1247}},	{0,{1248,1250,1246,1246}},
{0,{1247,1245,1250,1245}},	{0,{1246,1244,1244,1244}},	{0,{1239,1249,0,0}},
{0,{1227,1248,0,0}},	{0,{1238,1248,0,0}},	{0,{1225,1247,0,0}},
{0,{1247,1248,577,577}},	{0,{1236,1244,0,0}},	{0,{1247,1248,578,577}},
{0,{1248,1247,577,576}},	{0,{1248,0,0,0}},	{0,{1248,0,0,0}},
{0,{1248,0,535,0}},	{0,{1217,0,534,0}},	{0,{1144,1144,1247,1144}},
{0,{585,585,1247,585}},	{0,{1142,1146,1245,1142}},	{0,{583,591,1245,583}},
{0,{1146,1146,1245,1146}},	{0,{580,580,1245,580}},	{0,{1149,1149,1245,1149}},
{0,{1148,1152,1244,1148}},	{0,{0,0,1244,0}},	{335,{0,0,1243,0}},
{0,{0,520,1242,0}},	{0,{1144,1144,1144,1144}},	{0,{0,0,1241,0}},
{0,{0,517,1240,0}},	{0,{555,555,1240,555}},	{0,{0,0,1240,0}},
{0,{0,514,1239,0}},	{0,{554,554,1239,554}},	{0,{0,0,1239,0}},
{0,{0,511,1238,0}},	{0,{549,549,1238,549}},	{0,{0,0,1238,0}},
{0,{0,508,1237,0}},	{0,{548,548,1237,548}},	{0,{0,0,1237,0}},
{0,{0,505,1236,0}},	{0,{1236,1236,1236,1236}},	{0,{1236,1236,1236,1235}},
{0,{1236,1236,1236,806}},	{0,{1146,1146,1146,1126}},	{0,{1235,1235,1235,794}},
{0,{1235,1235,1236,1235}},	{0,{1234,1234,1234,1234}},	{0,{1235,1235,1235,1233}},
{0,{1165,1165,1165,537}},	{0,{1234,1234,1234,1234}},	{0,{1234,1234,1234,1234}},
{0,{1234,1234,1234,1232}},	{0,{1234,1234,1234,1232}},	{0,{1192,1192,1192,1192}},
{0,{0,1197,0,0}},	{0,{1225,1232,1225,1225}},	{0,{529,1200,529,529}},
{0,{1219,1219,1231,1219}},	{0,{790,790,1231,790}},	{0,{1221,1221,1231,1221}},
{0,{1220,1220,1231,1220}},	{0,{1231,1231,1231,1231}},	{0,{1231,1232,1232,1230}},
{0,{1232,1233,1233,874}},	{0,{1233,1117,1117,1094}},	{0,{1233,1117,1117,535}},
{0,{1233,1119,1119,1098}},	{0,{1233,1119,1119,532}},	{0,{1233,1124,1124,0}},
{0,{1233,1234,1234,864}},	{0,{1234,1141,1141,513}},	{0,{1234,1142,1142,514}},
{0,{1234,1220,1220,1220}},	{0,{1234,864,864,864}},	{0,{1234,1084,1084,1084}},
{0,{1234,1089,1089,1089}},	{0,{1234,523,523,523}},	{0,{891,523,1152,523}},
{0,{1233,1167,1167,1167}},	{0,{1232,1166,1171,1166}},	{0,{904,1232,853,853}},
{0,{895,1170,0,0}},	{0,{907,1172,501,501}},	{0,{907,1173,502,502}},
{0,{1208,1208,1229,1208}},	{0,{852,852,1229,852}},	{0,{1229,1229,1230,514}},
{0,{846,846,1230,846}},	{0,{845,845,1230,845}},	{0,{1226,1226,1226,511}},
{0,{1108,0,0,0}},	{0,{1083,927,0,0}},	{0,{1100,1227,1100,0}},
{0,{1105,0,669,0}},	{0,{1080,924,668,0}},	{0,{1225,1226,1226,1226}},
{0,{1226,1225,1225,1225}},	{0,{1223,1226,1224,1224}},	{0,{1224,1225,1223,1223}},
{0,{1223,1225,1222,1222}},	{0,{1130,918,0,0}},	{0,{1141,0,0,0}},
{0,{0,916,1164,0}},	{0,{0,915,1222,0}},	{0,{0,914,1222,0}},
{0,{0,913,1162,0}},	{0,{0,912,1221,0}},	{0,{0,911,1221,0}},
{0,{1213,1213,1213,1213}},	{0,{1220,0,1220,0}},	{0,{1220,1211,1211,1211}},
{0,{1220,1081,1081,0}},	{0,{1220,1220,1221,0}},	{0,{1219,1219,1221,0}},
{0,{1128,0,1221,0}},	{0,{1115,0,1220,0}},	{0,{1126,428,1219,0}},
{0,{1113,427,1218,0}},	{0,{1124,1133,0,0}},	{0,{1217,1132,0,0}},
{0,{0,0,1217,0}},	{0,{0,423,1216,0}},	{0,{1216,1216,1217,1216}},
{0,{1215,1217,1216,1215}},	{0,{1214,1214,1214,1214}},	{0,{0,0,1216,0}},
{0,{0,418,1215,0}},	{0,{0,0,1215,0}},	{0,{0,416,1214,0}},
{0,{0,0,1206,0}},	{0,{1171,1062,1213,0}},	{0,{845,0,1204,0}},
{0,{1212,0,0,0}},	{0,{1212,1213,1214,1213}},	{0,{1213,1212,1213,1212}},
{0,{1213,1214,1213,1214}},	{0,{1214,1215,1216,1217}},	{0,{1215,1214,1215,1216}},
{0,{1216,1217,1216,1217}},	{0,{1213,1214,1213,1214}},	{0,{1216,0,1217,0}},
{0,{1216,0,1216,0}},	{0,{1216,402,1215,0}},	{0,{1214,401,1214,0}},
{0,{1215,0,1216,0}},	{0,{1212,0,1215,0}},	{0,{1215,1200,1200,1200}},
{0,{1199,1199,1199,1199}},	{0,{1201,1201,1201,1201}},	{0,{1213,1202,1204,1204}},
{0,{1203,1201,1203,1203}},	{0,{1204,1204,1204,1204}},	{0,{1201,1201,1201,1201}},
{0,{1210,1193,1193,1193}},	{0,{1210,0,1203,0}},	{0,{1210,428,1210,428}},
{0,{1210,429,1211,429}},	{0,{1211,428,1210,428}},	{0,{1211,0,1199,0}},
{0,{1211,0,1198,0}},	{0,{1211,0,1200,0}},	{0,{1211,1192,1191,1192}},
{0,{1211,1191,1191,1191}},	{0,{1211,1190,1190,1190}},	{0,{1211,1189,1189,1189}},
{0,{1211,1186,1188,1188}},	{0,{1211,0,0,0}},	{0,{1211,377,0,0}},
{0,{1211,1211,1211,1211}},	{0,{1211,0,378,0}},	{0,{1211,0,0,0}},
{0,{1211,414,415,414}},	{0,{1211,1212,1213,1212}},	{0,{1213,1214,1215,1214}},
{0,{1178,1179,1215,1179}},	{0,{1182,0,1215,0}},	{0,{1215,1216,1217,1216}},
{0,{1207,1207,1207,1207}},	{0,{1209,1209,1209,1209}},	{0,{1213,1213,1213,1213}},
{0,{1214,658,1214,658}},	{0,{1214,664,1215,664}},	{0,{1215,664,1216,664}},
{0,{1216,664,1217,664}},	{0,{1202,1203,1202,1203}},	{0,{1210,660,1210,660}},
{0,{1211,660,1211,660}},	{0,{1212,660,1212,660}},	{0,{1203,1204,1203,1204}},
{0,{1212,1213,1212,1213}},	{0,{1212,1212,1212,1212}},	{0,{1212,1212,1212,1212}},
{0,{1212,1212,0,0}},	{0,{1212,1213,1212,1213}},	{0,{1213,1214,1213,1214}},
{0,{1211,1211,1211,1211}},	{0,{1212,1212,1212,1212}},	{0,{1212,1209,1209,1209}},
{0,{1212,1155,1155,1155}},	{0,{1212,1156,1156,1156}},	{0,{1212,0,0,0}},
{0,{1212,732,1212,732}},	{0,{1212,731,731,731}},	{0,{1165,382,1165,382}},
{0,{1211,379,379,379}},	{0,{1211,380,380,380}},	{0,{1211,1212,1211,1212}},
{0,{1211,1211,1211,1211}},	{0,{1211,1210,1210,1210}},	{0,{1211,1211,1211,1211}},
{0,{1148,0,1147,0}},	{0,{1146,807,1146,0}},	{0,{1166,0,0,0}},
{0,{1208,0,0,0}},	{0,{0,0,1208,0}},	{0,{1208,0,0,0}},
{0,{1208,1209,1209,1209}},	{0,{1208,1208,1208,1208}},	{0,{1206,1208,1207,1207}},
{0,{1205,1208,1206,1206}},	{0,{1208,1209,1209,1209}},	{0,{1208,1208,1208,1208}},
{7,{1206,1207,1207,1207}},	{0,{1205,1207,1206,1206}},	{0,{1204,1207,1205,1205}},
{0,{1207,1208,1208,1208}},	{0,{1207,1207,1207,1207}},	{0,{1205,1207,1206,1206}},
{0,{1204,1207,1205,1205}},	{7,{1203,1204,1204,1204}},	{0,{1206,0,1207,0}},
{0,{0,0,1206,0}},	{7,{1204,0,1205,0}},	{0,{1205,1205,1205,1205}},
{0,{1205,1205,1205,1205}},	{7,{1204,1204,1204,1204}},	{0,{1204,1204,1204,1204}},
{7,{1203,1203,1203,1203}},	{7,{0,0,0,0}},	{0,{1202,1203,1203,1203}},
{0,{1202,1202,1202,1202}},	{0,{1202,1201,1201,1201}},	{0,{1202,1203,1203,1203}},
{0,{1202,1202,1202,1202}},	{0,{1202,1201,1201,1201}},	{0,{1202,1200,1200,1200}},
{7,{1199,1199,1199,1199}},	{0,{1201,1198,1198,1198}},	{0,{1201,1202,1202,1202}},
{0,{1201,1201,1201,1201}},	{0,{1201,1200,1200,1200}},	{0,{1201,1199,1199,1199}},
{7,{1198,1198,1198,1198}},	{0,{1200,1197,1197,1197}},	{0,{1200,0,0,0}},
{0,{1200,0,0,0}},	{0,{1200,0,0,0}},	{0,{1200,0,0,0}},
{0,{1200,1200,1200,1200}},	{0,{1200,1200,1200,1200}},	{7,{1199,1199,1199,1199}},
{0,{1175,0,0,0}},	{7,{1174,0,0,0}},	{0,{1197,1198,1198,0}},
{0,{1197,1197,1197,0}},	{0,{1195,1197,1196,0}},	{0,{1194,1197,1195,0}},
{7,{1193,1194,1194,0}},	{0,{1196,1197,1197,1198}},	{0,{1196,1196,1196,1197}},
{0,{1194,1197,1195,1196}},	{0,{1193,1197,1194,1195}},	{0,{1194,1194,1194,1194}},
{0,{1196,1193,1193,1193}},	{0,{1196,1192,1192,1192}},	{0,{1196,1183,1183,1183}},
{0,{1195,1196,1182,1182}},	{0,{1194,1196,1181,1181}},	{0,{1158,1196,0,0}},
{0,{1157,1196,0,0}},	{0,{1196,1178,1178,1178}},	{0,{1196,1177,1177,1177}},
{0,{1196,1184,1184,1184}},	{0,{1195,1196,1183,1183}},	{0,{1194,1196,1182,1182}},
{0,{1196,1197,1197,1197}},	{0,{1196,1196,1196,1196}},	{0,{1194,1196,1195,1195}},
{0,{1193,1196,1194,1194}},	{7,{1192,1193,1193,1193}},	{7,{1192,1192,1192,1192}},
{0,{1194,1195,1195,1195}},	{0,{1194,1194,1194,1194}},	{0,{1194,1193,1193,1193}},
{0,{1194,1195,1195,1195}},	{0,{1194,1194,1194,1194}},	{0,{1194,1193,1193,1193}},
{0,{1194,1192,1192,1192}},	{7,{1191,1191,1191,1191}},	{0,{1193,1190,1190,1190}},
{0,{1193,1194,1194,1194}},	{0,{1193,1193,1193,1193}},	{0,{1193,1192,1192,1192}},
{0,{1193,1191,1191,1191}},	{7,{1190,1190,1190,1190}},	{0,{1192,1189,1189,1189}},
{0,{1192,1192,1192,1192}},	{7,{1191,1191,1191,1191}},	{0,{1191,1190,1190,1190}},
{0,{1191,1189,1189,1189}},	{0,{0,0,1191,0}},	{7,{0,0,1190,0}},
{0,{1154,1154,1190,1154}},	{0,{1190,1190,1190,1190}},	{0,{1190,1190,1190,1190}},
{7,{1189,1189,1189,1189}},	{0,{1189,1189,1189,1189}},	{7,{1188,1188,1188,1188}},
{7,{1143,1143,1143,0}},	{7,{1110,1110,1110,1110}},	{7,{1113,1113,1113,1113}},
{0,{1185,1185,1185,1185}},	{0,{1185,1185,1185,1185}},	{7,{1184,1184,1184,1184}},
{0,{1184,1184,1184,1184}},	{7,{1183,1183,1183,1183}},	{0,{1133,1133,1133,1183}},
{0,{0,0,0,1183}},	{34,{1101,1101,1101,1101}},	{34,{1104,1104,1104,1104}},
{34,{0,0,0,0}},	{34,{1151,1151,1151,1151}},	{34,{1175,1175,1175,1175}},
{0,{1174,1174,1174,1178}},	{0,{1124,1178,1124,1124}},	{0,{1178,1179,1179,1179}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1178,1176,1176,1176}},
{7,{1175,1175,1175,1175}},	{0,{1177,1174,1174,1174}},	{0,{0,0,0,1177}},
{0,{1177,1178,1178,1178}},	{0,{1177,1177,1177,1177}},	{0,{1177,1176,1176,1176}},
{47,{1176,1175,1175,1175}},	{7,{1175,1174,1174,1174}},	{0,{1175,1176,1176,1176}},
{0,{1175,1175,1175,1175}},	{0,{1175,1176,1176,1176}},	{0,{1176,1176,1176,1176}},
{47,{1176,1175,1175,1175}},	{7,{1170,1171,1171,1171}},	{47,{1083,0,0,0}},
{47,{0,0,0,0}},	{0,{1173,1174,1174,1174}},	{0,{1173,1173,1173,1173}},
{47,{1172,1172,1172,1172}},	{0,{1172,1171,1171,1171}},	{47,{1101,1102,1102,0}},
{0,{1171,0,1171,0}},	{7,{0,0,0,1171}},	{0,{1171,1172,1173,1172}},
{7,{1173,1171,1171,1171}},	{0,{1172,1170,1170,1170}},	{47,{0,0,1136,0}},
{0,{1171,1171,1171,1171}},	{47,{1170,1170,1170,1170}},	{7,{1169,1169,1169,1169}},
{0,{1169,1169,1169,1169}},	{0,{1169,1169,1169,1169}},	{47,{1168,1168,1168,1168}},
{7,{1166,1166,1166,1166}},	{47,{1088,1088,1088,0}},	{0,{0,0,0,1166}},
{0,{1152,1151,1151,1151}},	{0,{1165,0,0,0}},	{0,{0,0,0,1165}},
{73,{0,0,0,0}},	{0,{0,0,0,1164}},	{0,{0,0,1121,1162}},
{0,{1163,0,0,0}},	{0,{1163,0,0,0}},	{0,{1163,0,0,0}},
{0,{1163,0,0,0}},	{0,{1163,1163,1163,1163}},	{0,{1163,1163,1163,1163}},
{0,{1163,1161,1161,1161}},	{0,{1163,1160,1160,1160}},	{0,{1163,1077,1077,1077}},
{0,{1163,1076,1076,1076}},	{0,{0,0,0,1163}},	{0,{0,0,0,1163}},
{82,{0,0,0,0}},	{83,{0,0,0,0}},	{82,{1071,1071,1071,1071}},
{0,{1160,0,0,0}},	{0,{1160,0,0,0}},	{92,{1158,0,0,0}},
{93,{1157,0,0,0}},	{0,{1158,1159,1159,1159}},	{0,{1159,1158,1158,1158}},
{93,{1156,1157,1157,1157}},	{0,{1156,1156,1156,1156}},	{7,{1155,1155,1155,1155}},
{0,{1156,1154,1154,1154}},	{0,{1156,1153,1153,1153}},	{0,{1156,0,0,0}},
{0,{1156,0,0,0}},	{92,{1154,0,0,0}},	{93,{1153,0,0,0}},
{0,{1154,1055,1055,1055}},	{0,{1154,1054,1054,1054}},	{92,{1152,1053,1053,1053}},
{0,{1153,1153,1153,1153}},	{7,{1152,1152,1152,1152}},	{0,{1152,1152,1153,1152}},
{0,{1153,1153,1153,1153}},	{0,{1150,1150,1150,1150}},	{0,{1152,1152,1152,1152}},
{0,{1152,1152,1152,1152}},	{0,{1152,1152,1152,1152}},	{7,{1149,1149,1149,1149}},
{0,{1151,1151,1151,1151}},	{0,{1151,1151,1151,1151}},	{0,{1151,1151,1151,1151}},
{0,{1151,1151,1151,1151}},	{7,{1150,1150,1150,1150}},	{92,{1130,1131,1131,1131}},
{0,{1149,1149,1149,1149}},	{0,{1149,1149,1149,0}},	{0,{1149,1149,1149,1149}},
{0,{1149,1149,1149,1149}},	{0,{1149,0,0,0}},	{0,{0,0,1149,0}},
{0,{1149,0,0,0}},	{111,{0,0,0,0}},	{0,{1148,0,0,0}},
{0,{1148,0,0,0}},	{112,{1117,0,0,0}},	{0,{1116,0,0,1147}},
{112,{1122,0,0,0}},	{0,{1121,0,0,1146}},	{0,{1121,0,0,1145}},
{92,{1119,0,0,1144}},	{112,{1118,0,0,1143}},	{93,{1117,0,0,1142}},
{0,{1142,0,0,0}},	{0,{1142,1142,1142,1142}},	{0,{1142,0,0,0}},
{0,{1142,0,0,0}},	{0,{1142,1142,1142,1142}},	{0,{1142,1143,1144,1145}},
{0,{1145,1146,1147,1147}},	{0,{1147,1145,1146,1146}},	{0,{1147,1148,1149,1149}},
{0,{1149,1150,1151,1151}},	{146,{1151,1152,1150,1150}},	{0,{1150,1151,1149,1149}},
{0,{1151,1150,1148,1148}},	{0,{1151,1149,1147,1147}},	{0,{1151,1152,1153,1153}},
{0,{1153,1154,1155,1155}},	{0,{1155,1150,1151,1151}},	{0,{1155,1156,1157,1157}},
{0,{1157,1155,1156,1156}},	{0,{1157,1158,1159,1160}},	{0,{1160,1161,1159,1159}},
{0,{1161,1160,1158,1158}},	{0,{1161,1162,1157,1157}},	{146,{1162,1158,1156,1156}},
{0,{1161,1157,1155,1155}},	{0,{1161,1156,1154,1154}},	{0,{1161,1162,1163,1163}},
{0,{1163,1164,1165,1166}},	{0,{1166,1167,1165,1165}},	{0,{1167,1168,1169,1169}},
{0,{1169,1165,1163,1163}},	{0,{1169,1170,1162,1162}},	{146,{1162,1163,1161,1161}},
{0,{1169,1170,1171,1171}},	{0,{1171,1172,1173,1173}},	{0,{1173,1168,1169,1169}},
{0,{1173,1174,1175,1175}},	{0,{1175,1173,1174,1174}},	{146,{1174,1172,1173,1173}},
{0,{1174,1175,1176,1176}},	{0,{1176,1177,1178,1179}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1179,1179}},	{146,{1178,1178,1178,1178}},
{0,{1177,1177,1177,1177}},	{0,{1177,1177,1177,1177}},	{0,{1177,1177,1177,1177}},
{0,{1177,1177,1178,1179}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1177,1177}},
{146,{1176,1176,1176,1176}},	{0,{1177,1177,1178,1179}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1176,1176}},	{146,{1175,1175,1175,1175}},
{0,{1177,1177,1177,1177}},	{0,{1153,1153,1153,1153}},	{146,{1152,1152,1152,1152}},
{0,{1175,1176,1177,1093}},	{0,{1092,1092,1092,1092}},	{0,{1095,1095,1095,1095}},
{0,{1097,1097,1097,1097}},	{146,{1096,1096,1096,1096}},	{0,{1102,1102,1102,1102}},
{0,{1108,1108,1108,1108}},	{0,{1171,1171,1111,1112}},	{0,{1111,1111,1111,1111}},
{146,{1110,1110,1110,1110}},	{0,{1122,1122,1122,1123}},	{0,{1122,1122,1122,1122}},
{0,{1126,1126,1126,1126}},	{146,{1120,1120,1120,1120}},	{0,{1130,1130,1130,1130}},
{0,{1164,1165,1166,1167}},	{0,{1166,1166,1166,1166}},	{0,{1166,1166,1166,1166}},
{0,{1166,1166,1166,1166}},	{146,{1165,1165,1165,1165}},	{0,{1165,1165,1165,1165}},
{0,{1165,1165,1165,1165}},	{0,{1165,1165,1165,1166}},	{0,{1165,1165,1165,1165}},
{0,{1165,1165,1165,1165}},	{146,{1163,1163,1163,1163}},	{0,{1164,1164,1164,1164}},
{0,{1164,1165,1166,0}},	{0,{1166,0,1166,0}},	{0,{1166,0,1165,0}},
{0,{1166,1167,1164,0}},	{146,{1163,0,1163,0}},	{0,{1159,1166,1161,0}},
{0,{1166,1167,1160,0}},	{0,{1167,1168,1167,1168}},	{0,{1163,1157,1168,0}},
{0,{1161,1161,0,0}},	{146,{0,0,0,0}},	{0,{1160,1160,1165,0}},
{0,{1161,1161,1164,0}},	{0,{1162,1162,1162,1162}},	{0,{1163,1164,1162,0}},
{0,{1162,1162,1161,0}},	{0,{0,1163,0,0}},	{0,{1159,1159,1159,0}},
{0,{1162,1163,1164,0}},	{0,{1164,1165,1166,0}},	{0,{1166,1164,1167,0}},
{0,{1167,1163,1164,0}},	{0,{1167,1168,1163,0}},	{146,{1160,1161,1162,0}},
{0,{1167,1168,1169,1170}},	{0,{1170,1167,1168,1169}},	{0,{1170,1166,1171,1168}},
{0,{1153,1171,1155,0}},	{0,{1155,1171,1157,0}},	{0,{1157,1170,1158,0}},
{0,{1158,1169,1155,0}},	{0,{1158,1169,1154,0}},	{146,{1151,1167,1153,0}},
{0,{1168,1169,1170,1171}},	{0,{1171,1172,1170,1170}},	{0,{1172,1173,1174,1175}},
{0,{1175,1170,1168,1168}},	{0,{1175,1176,1177,1177}},	{146,{1177,1178,1176,1176}},
{0,{1178,1177,1179,1175}},	{0,{1175,1176,1174,1174}},	{0,{1178,1175,1173,1173}},
{0,{1146,1142,0,0}},	{0,{1140,1141,0,0}},	{0,{1142,1140,1176,0}},
{0,{1143,1154,0,0}},	{0,{1137,1153,0,0}},	{0,{1139,1152,1173,0}},
{146,{1135,1151,0,0}},	{0,{1145,1145,1145,1145}},	{0,{1171,1171,1153,1154}},
{0,{1153,1153,1153,1153}},	{0,{1158,1158,1158,1158}},	{0,{1169,1169,1161,1161}},
{146,{1160,1160,1160,1160}},	{0,{1159,1159,1159,1159}},	{0,{1147,1147,1147,1148}},
{0,{1166,1121,1119,0}},	{0,{1166,0,0,0}},	{0,{1164,1118,1117,0}},
{0,{1165,1116,1116,0}},	{0,{1165,1166,1167,1168}},	{0,{1168,1168,1168,1168}},
{0,{1168,1168,1167,1167}},	{146,{1166,1166,1166,1166}},	{0,{1167,1167,1167,1167}},
{0,{1167,1167,1167,1167}},	{0,{1167,1167,1168,1169}},	{0,{1168,1168,1168,1168}},
{0,{1168,1168,1167,1167}},	{146,{1166,1166,1166,1166}},	{0,{1167,1167,1168,1162}},
{0,{1168,1168,1168,1168}},	{0,{1168,1168,1160,1160}},	{146,{1159,1159,1159,1159}},
{0,{1167,1167,1167,1167}},	{0,{1167,1168,1169,1154}},	{0,{1169,1170,1168,1153}},
{0,{1170,1170,1157,1158}},	{0,{1160,1160,1160,1154}},	{0,{0,0,1169,0}},
{0,{1113,1113,1169,1113}},	{0,{1128,1128,1169,1128}},	{0,{1131,1131,1169,1131}},
{0,{1169,1170,1171,1172}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1171,1171}},
{146,{1170,1170,1170,1170}},	{0,{1171,1171,1171,1171}},	{0,{1171,1171,1171,1171}},
{0,{1171,1171,1172,1173}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1171,1171}},
{146,{1170,1170,1170,1170}},	{0,{1171,1171,1172,1166}},	{0,{1172,1172,1172,1172}},
{0,{1172,1172,1164,1164}},	{146,{1163,1163,1163,1163}},	{0,{1171,1171,1171,1171}},
{0,{1144,1145,1146,1171}},	{0,{1130,1130,1130,1170}},	{0,{1130,1130,1129,1169}},
{146,{1128,1128,1128,1168}},	{0,{1129,1129,1129,1168}},	{0,{1129,1129,1129,1168}},
{0,{1129,1129,1130,1168}},	{0,{1130,1130,1130,1167}},	{0,{1130,1130,1129,1166}},
{146,{1128,1128,1128,1165}},	{0,{1129,1129,1130,1163}},	{0,{1130,1130,1130,1164}},
{0,{1130,1130,1122,1161}},	{146,{1121,1121,1121,1160}},	{0,{1129,1129,1129,1162}},
{0,{1162,1163,1164,1143}},	{0,{1164,1164,1147,1148}},	{0,{1150,1150,1150,1144}},
{0,{1163,0,1164,0}},	{0,{1164,1076,1165,1076}},	{0,{1165,1091,1166,1091}},
{0,{1166,1094,1167,1094}},	{0,{1167,1168,1169,1170}},	{0,{1170,1170,1170,1171}},
{0,{1171,1171,1171,1172}},	{0,{1172,1168,1168,1169}},	{0,{1172,1169,1169,1170}},
{0,{1172,1173,1174,1175}},	{146,{1173,1173,1173,1174}},	{0,{1172,1172,1172,1173}},
{0,{1173,1171,1171,1172}},	{0,{1173,1174,1174,1175}},	{0,{1173,1173,1173,1174}},
{0,{1174,1174,1174,1175}},	{0,{1175,1173,1173,1174}},	{0,{1175,1176,1176,1177}},
{0,{1175,1175,1175,1176}},	{0,{1176,1177,1099,1178}},	{0,{1099,1099,1099,1177}},
{0,{1177,1098,1098,1176}},	{0,{1177,1178,1097,1175}},	{146,{1096,1096,1096,1174}},
{0,{1174,1095,1095,1177}},	{0,{1177,1178,1179,1169}},	{0,{1179,1179,1179,1180}},
{0,{1180,1181,1182,1183}},	{146,{1181,1181,1181,1182}},	{0,{1180,1180,1180,1181}},
{0,{1181,1179,1179,1180}},	{0,{1181,1182,1182,1183}},	{0,{1181,1181,1181,1182}},
{0,{1182,0,1183,1184}},	{0,{0,0,1182,1183}},	{146,{0,0,1181,1182}},
{0,{1182,1183,1184,1185}},	{0,{1184,1184,1184,1184}},	{0,{1184,1183,1183,1183}},
{0,{1184,1185,1074,1074}},	{0,{1185,1073,1073,1073}},	{0,{1185,1186,1186,1186}},
{0,{1185,1185,1185,1185}},	{0,{1185,1073,1073,1073}},	{0,{1151,1152,1185,1075}},
{0,{1074,1074,1185,1074}},	{0,{1152,1073,1184,1073}},	{0,{1152,1153,1183,1072}},
{146,{1071,1071,1182,1071}},	{0,{1182,1183,1073,1067}},	{0,{1183,1184,1185,1185}},
{146,{1184,1184,1184,1184}},	{0,{1183,1183,1183,1183}},	{0,{1183,1182,1182,1182}},
{0,{1183,1184,1184,1184}},	{0,{1183,1183,1183,1183}},	{0,{1159,0,0,0}},
{0,{1182,1183,1163,1164}},	{0,{1183,1183,1183,1183}},	{0,{1183,1184,1000,1158}},
{0,{0,0,0,1157}},	{0,{1154,0,0,1156}},	{0,{1182,1183,0,1155}},
{146,{0,0,0,1154}},	{0,{1178,1182,995,1153}},	{0,{1182,1183,994,1184}},
{0,{0,0,0,1183}},	{0,{991,991,991,1183}},	{0,{1147,0,0,1181}},
{0,{1175,1176,0,1180}},	{146,{0,0,0,1179}},	{0,{1171,1172,988,0}},
{0,{1172,1173,0,0}},	{0,{1169,1173,986,0}},	{0,{1173,1174,985,0}},
{0,{1176,0,1177,1142}},	{146,{1175,0,1176,1141}},	{0,{1176,1000,1000,1177}},
{0,{1177,999,1178,1176}},	{0,{998,998,998,1175}},	{0,{1177,1178,1006,1179}},
{0,{1179,1006,1180,1178}},	{0,{1011,1011,1011,1180}},	{0,{1004,1004,1004,1176}},
{0,{1179,1003,1003,1175}},	{0,{1179,1180,1012,1181}},	{146,{1181,1011,1182,1180}},
{0,{1010,1010,1010,1179}},	{0,{1181,1009,1009,1178}},	{0,{1181,1182,1182,1183}},
{0,{1183,1181,1184,1182}},	{0,{1180,1180,1180,1181}},	{0,{1161,985,985,985}},
{0,{1164,1165,993,994}},	{0,{1169,993,993,993}},	{0,{1169,1170,1002,1002}},
{0,{1173,1001,1001,1001}},	{0,{1173,1174,1174,1174}},	{0,{1173,1173,1173,1173}},
{0,{1176,962,960,1118}},	{0,{1175,960,959,1117}},	{0,{1175,958,958,1116}},
{0,{956,956,956,1175}},	{0,{1172,958,956,0}},	{0,{1171,956,955,0}},
{0,{1171,954,954,0}},	{0,{1172,1172,1172,932}},	{0,{1172,1172,1172,932}},
{0,{1172,1172,1172,932}},	{0,{1172,1172,1172,932}},	{0,{1172,1172,1172,865}},
{0,{1052,0,1052,0}},	{0,{1053,965,1053,965}},	{0,{1170,974,1170,974}},
{0,{1055,983,1055,983}},	{0,{1169,1169,1169,1169}},	{0,{1169,1169,1169,1169}},
{146,{1168,1168,1168,1168}},	{0,{1168,1168,1168,1168}},	{201,{1102,1102,1102,1102}},
{0,{1167,1167,1167,1167}},	{201,{1106,1106,1106,1106}},	{201,{997,997,997,997}},
{201,{993,993,993,993}},	{201,{1114,1114,1114,1114}},	{201,{0,0,0,0}},
{0,{1095,1095,1162,1095}},	{146,{986,986,1162,986}},	{0,{1162,1162,1162,1162}},
{0,{820,820,820,1162}},	{0,{823,823,823,1162}},	{0,{1162,825,825,1163}},
{146,{1161,824,824,1162}},	{0,{823,823,823,1161}},	{0,{829,829,829,1161}},
{0,{835,835,835,1161}},	{0,{839,839,839,1161}},	{0,{1161,838,838,1160}},
{146,{1160,837,837,1159}},	{0,{850,850,850,1160}},	{0,{854,854,854,1160}},
{146,{848,848,848,1158}},	{0,{858,858,858,1159}},	{0,{1159,1159,1159,1159}},
{0,{1159,1159,1159,1159}},	{0,{1159,1159,1159,1159}},	{146,{1158,1158,1158,1158}},
{0,{1158,1158,1158,1158}},	{0,{1158,1158,1158,1158}},	{0,{1158,1158,1158,1158}},
{0,{1158,1158,1158,1158}},	{0,{1158,968,1158,968}},	{146,{1157,967,1157,967}},
{0,{1040,1040,1040,1040}},	{0,{1051,1051,1051,1051}},	{0,{1054,1054,1054,1054}},
{146,{1053,1053,1053,1053}},	{0,{1153,1153,1153,1153}},	{0,{1055,1055,1055,1055}},
{0,{1152,1152,1152,1152}},	{0,{1152,1152,1152,1152}},	{0,{1152,1152,1152,1152}},
{0,{1152,1152,1152,1152}},	{146,{1151,1151,1151,1151}},	{0,{1151,1151,1151,1151}},
{0,{1151,1151,1151,1151}},	{0,{1072,1072,1072,1151}},	{0,{1151,1152,1153,1153}},
{0,{1153,1151,1152,1152}},	{0,{1153,1154,1155,1155}},	{0,{1155,1153,1154,1154}},
{0,{1155,1156,1157,1157}},	{0,{1157,1155,1156,1156}},	{0,{1157,796,797,797}},
{0,{1157,817,815,815}},	{0,{1157,1158,1159,832}},	{0,{1159,1159,1159,1159}},
{0,{1159,1159,1159,1159}},	{0,{1159,1159,1159,1159}},	{0,{1141,1141,1141,1141}},
{0,{1144,1144,1144,1144}},	{0,{1147,1147,1147,1147}},	{0,{1152,1152,1152,825}},
{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},
{0,{1155,1156,1155,1156}},	{0,{1155,1155,1155,1155}},	{0,{1155,1156,1157,1158}},
{0,{1158,1155,1159,1157}},	{0,{1159,1160,1161,1162}},	{0,{1162,1159,1163,1161}},
{0,{1163,1164,1165,1165}},	{0,{1165,1163,1166,1164}},	{0,{1152,1152,1152,1152}},
{0,{1157,1157,1157,1157}},	{0,{1161,1161,1161,1161}},	{0,{1163,1163,1163,1163}},
{0,{1163,918,918,918}},	{0,{1147,1147,1163,1147}},	{0,{1152,1152,1163,1152}},
{0,{1156,1156,1163,1156}},	{0,{1163,1163,1163,1163}},	{0,{1163,940,940,940}},
{0,{1156,1156,1156,1163}},	{0,{1163,1141,1164,1141}},	{0,{1164,1146,1165,1146}},
{0,{1165,1150,1166,1150}},	{0,{1166,1166,1166,1166}},	{0,{1166,1167,1167,1168}},
{0,{1166,1166,1166,1167}},	{0,{1167,1167,1167,1168}},	{0,{1168,1169,1169,1170}},
{0,{1168,1168,1168,1169}},	{0,{1169,1170,1170,1171}},	{0,{1169,1169,1169,1170}},
{0,{1170,977,977,978}},	{0,{1170,902,902,980}},	{0,{1170,975,975,976}},
{0,{1170,990,990,991}},	{0,{1170,0,996,997}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},
{0,{891,1170,891,891}},	{0,{1170,1116,1116,1171}},	{0,{1115,1115,1115,1170}},
{0,{1162,0,0,989}},	{0,{1161,0,0,1020}},	{0,{1168,1116,1116,1169}},
{0,{1169,1115,1170,1168}},	{0,{1114,1114,1114,1167}},	{0,{1169,1119,1119,1170}},
{0,{1170,1118,1171,1169}},	{0,{1117,1117,1117,1168}},	{0,{1170,1121,1121,1171}},
{0,{1171,1120,1172,1170}},	{0,{1119,1119,1119,1169}},	{0,{1171,858,858,1027}},
{0,{1027,857,1028,1026}},	{0,{1127,1105,1127,1105}},	{0,{1128,1110,1128,1110}},
{0,{1129,1114,1129,1114}},	{0,{1167,1167,1167,1167}},	{246,{1146,1146,1146,1146}},
{246,{870,870,870,870}},	{246,{1145,1145,1145,1145}},	{246,{871,871,871,871}},
{246,{986,986,986,986}},	{246,{0,0,0,0}},	{0,{1140,1140,1161,1140}},
{0,{864,864,1161,864}},	{0,{1161,1161,1161,0}},	{0,{1066,1066,1066,1161}},
{0,{1069,1069,1069,1161}},	{0,{1161,1072,1072,1162}},	{0,{1071,1071,1071,1161}},
{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},
{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},
{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},	{0,{1161,1161,1161,1161}},
{0,{0,0,0,1161}},	{0,{1161,1162,1163,1163}},	{0,{1163,1164,1165,1165}},
{0,{1165,699,700,700}},	{0,{1165,1166,1167,1167}},	{0,{1167,1167,1167,1167}},
{0,{1167,1167,1167,1167}},	{0,{1167,1167,1167,1167}},	{0,{1156,1156,1156,1156}},
{0,{1158,1158,1158,1158}},	{0,{1161,1161,1161,1161}},	{0,{1164,1164,1164,1164}},
{0,{1164,1164,1164,1164}},	{0,{1164,1164,1164,1164}},	{0,{1164,1165,1164,1165}},
{0,{1164,1164,1164,1164}},	{0,{1164,1165,1166,1163}},	{0,{1166,1164,1167,1162}},
{0,{1167,804,1168,802}},	{0,{1168,1168,1168,1168}},	{0,{1168,1168,1168,1168}},
{0,{1158,1158,1168,1158}},	{0,{798,798,1168,798}},	{0,{1168,1168,1168,1168}},
{0,{1168,1168,1168,1168}},	{0,{1162,1162,1162,1168}},	{0,{1162,1162,1162,1168}},
{0,{1168,1152,1169,1152}},	{0,{988,792,1169,792}},	{0,{1169,1170,1171,1172}},
{0,{1169,1169,1169,1171}},	{0,{1171,1171,1171,1172}},	{0,{1172,1170,1173,1171}},
{0,{1173,893,1174,894}},	{0,{1174,1175,1176,1177}},	{0,{1174,1174,1174,1176}},
{0,{1176,1177,1178,1179}},	{0,{1176,1176,1176,1178}},	{0,{1168,888,888,889}},
{0,{1177,813,1178,891}},	{0,{1176,812,812,890}},	{0,{1177,1178,1179,1180}},
{0,{1177,1177,1177,1179}},	{0,{1179,899,1180,900}},	{0,{1180,1181,1182,1183}},
{0,{1180,1180,1180,1182}},	{0,{1182,0,1183,904}},	{0,{1181,0,902,903}},
{0,{1182,1183,1183,1183}},	{0,{1182,1182,1182,1182}},	{0,{1182,799,799,799}},
{0,{1182,909,909,909}},	{0,{1182,800,911,800}},	{0,{1182,1183,1183,1183}},
{0,{1182,1182,1182,1182}},	{0,{1182,913,913,913}},	{0,{1182,1183,1183,1183}},
{0,{1182,1182,1182,1182}},	{0,{1182,0,0,0}},	{0,{1182,1182,1182,1182}},
{0,{1182,1119,1183,1184}},	{0,{1118,1118,1118,1183}},	{0,{1166,0,1183,888}},
{0,{1165,0,0,887}},	{0,{1164,0,1181,918}},	{0,{1163,0,0,917}},
{0,{1180,1113,1113,1113}},	{0,{1180,1112,1181,1177}},	{0,{1181,742,1182,919}},
{0,{1182,751,1183,923}},	{0,{1183,760,1184,929}},	{0,{1184,739,739,739}},
{0,{1184,748,748,748}},	{0,{1184,757,757,757}},	{0,{1184,1184,1184,1101}},
{0,{1184,1184,1184,1101}},	{0,{1184,1184,1184,699}},	{0,{1118,1102,1118,1102}},
{0,{1183,1183,1183,1183}},	{0,{1183,0,0,0}},	{0,{1084,1084,1084,1183}},
{0,{1086,1086,1086,1183}},	{0,{1183,621,621,947}},	{0,{1088,1088,1088,1183}},
{0,{1183,1183,1183,1183}},	{0,{1183,1183,1183,1183}},	{0,{1183,1183,1183,1183}},
{0,{1183,1183,1183,1183}},	{0,{1131,1131,1131,1131}},	{0,{1182,1182,1182,1182}},
{0,{1135,1135,1135,1135}},	{0,{1181,1181,1181,1181}},	{0,{1181,1181,1181,1181}},
{0,{1181,1181,1181,1181}},	{0,{1145,1145,1145,1181}},	{0,{1181,691,0,0}},
{0,{1181,1182,1182,1182}},	{266,{1181,1181,1181,1181}},	{0,{1180,1180,1180,1180}},
{266,{684,0,684,0}},	{266,{0,0,0,0}},	{0,{704,685,700,0}},
{0,{697,0,699,0}},	{0,{699,0,700,0}},	{0,{700,0,697,0}},
{146,{694,0,696,0}},	{266,{693,0,695,0}},	{0,{698,679,0,0}},
{0,{691,0,0,0}},	{0,{693,0,727,0}},	{0,{694,0,0,0}},
{146,{688,0,0,0}},	{266,{687,0,0,0}},	{0,{1166,1166,1167,1167}},
{0,{1166,1166,1166,1166}},	{146,{1165,1165,1165,1165}},	{266,{1164,1164,1164,1164}},
{0,{1164,861,1165,833}},	{0,{0,0,1164,832}},	{0,{1164,0,1163,831}},
{0,{828,0,1162,830}},	{0,{1160,857,1163,829}},	{146,{0,0,1160,828}},
{0,{0,1162,1159,827}},	{0,{1159,0,1160,826}},	{0,{823,0,1159,825}},
{266,{0,0,1156,824}},	{0,{1156,0,1159,823}},	{0,{0,0,1158,822}},
{0,{819,0,1157,821}},	{0,{1153,0,1157,820}},	{146,{0,0,1155,819}},
{0,{816,0,1155,818}},	{266,{0,0,1153,817}},	{0,{1154,1155,1156,1156}},
{0,{1155,1155,1155,1155}},	{0,{1155,1154,1154,1154}},	{146,{1153,1153,1153,1153}},
{266,{1152,1152,1152,1152}},	{0,{838,839,1143,811}},	{0,{1152,0,1142,810}},
{0,{836,837,1141,1152}},	{0,{0,0,1140,1151}},	{0,{805,0,1139,1150}},
{146,{0,0,1138,1149}},	{266,{0,0,1137,1148}},	{266,{0,0,0,804}},
{0,{1147,1147,1147,0}},	{0,{1147,1147,1147,1130}},	{0,{1147,1147,1147,1147}},
{146,{1146,1146,1146,1146}},	{0,{1146,1146,1146,1147}},	{146,{1145,1145,1145,1146}},
{266,{1144,1144,1144,1145}},	{0,{0,0,0,1144}},	{146,{0,0,0,1143}},
{266,{0,0,0,1142}},	{0,{1142,1143,1142,0}},	{146,{1141,1142,1141,0}},
{266,{1140,1141,1140,0}},	{0,{0,0,1141,0}},	{0,{622,0,1141,0}},
{0,{1118,1118,1141,1118}},	{0,{0,0,1141,0}},	{0,{959,0,1118,786}},
{0,{1140,0,1141,785}},	{0,{1139,0,1116,784}},	{0,{956,0,1119,783}},
{0,{1137,0,1139,782}},	{0,{1136,0,1117,781}},	{0,{1138,0,0,0}},
{0,{1138,0,0,0}},	{0,{951,0,1110,1121}},	{0,{1137,0,1138,777}},
{0,{1054,0,1108,776}},	{0,{1135,0,1137,775}},	{0,{1052,0,1110,774}},
{0,{1136,1113,1113,1113}},	{0,{1136,0,1133,772}},	{0,{1049,0,1132,1114}},
{0,{1048,0,1102,1113}},	{0,{1134,1135,1136,1137}},	{0,{1137,1138,1135,1136}},
{0,{1138,1137,1134,1135}},	{146,{1135,1136,1133,1134}},	{0,{1137,1138,1139,1140}},
{0,{1140,1141,1138,1139}},	{0,{1141,1140,1137,1138}},	{146,{1138,1139,1136,1137}},
{0,{651,626,0,0}},	{0,{0,625,0,0}},	{146,{0,624,0,0}},
{0,{1137,1137,1138,1138}},	{0,{1137,1137,1137,1137}},	{146,{1136,1136,1136,1136}},
{0,{1136,1136,1136,1136}},	{146,{1135,1135,1135,1135}},	{0,{1135,1135,1136,1136}},
{0,{1135,1135,1135,1135}},	{0,{606,607,0,0}},	{146,{599,600,0,0}},
{0,{604,615,0,0}},	{0,{1132,1132,1133,1134}},	{0,{1132,1132,1132,1133}},
{146,{1131,1131,1131,1132}},	{0,{1132,1132,1132,0}},	{146,{1131,1131,1131,0}},
{0,{579,579,0,1131}},	{0,{0,0,0,1130}},	{146,{0,0,0,1129}},
{0,{1126,1126,1126,1126}},	{146,{1125,1125,1125,1125}},	{0,{1127,1127,1125,0}},
{0,{1127,1124,1128,0}},	{0,{1128,764,0,736}},	{0,{1128,0,0,1129}},
{0,{1129,0,0,734}},	{0,{1126,0,0,733}},	{0,{1127,0,0,1128}},
{0,{1105,1105,1105,1105}},	{146,{1104,1104,1104,1104}},	{0,{0,0,0,1126}},
{0,{1095,1126,1095,1127}},	{146,{1094,1125,1094,1126}},	{0,{1100,1126,1100,1127}},
{146,{1099,1125,1099,1126}},	{0,{1110,1110,1110,1126}},	{146,{1109,1109,1109,1125}},
{0,{1125,1125,1125,1125}},	{146,{1124,1124,1124,1124}},	{0,{1089,1124,1087,1088}},
{0,{1095,1124,1093,1094}},	{0,{0,1124,0,0}},	{0,{1124,1125,1124,1125}},
{0,{1124,1124,1124,1124}},	{0,{1084,1085,1082,1124}},	{0,{1090,1091,1088,1124}},
{0,{1124,0,0,713}},	{0,{0,0,0,1124}},	{0,{1124,1125,1126,1127}},
{0,{1126,1126,1126,1126}},	{0,{1126,1125,1125,1125}},	{0,{1126,607,607,607}},
{0,{1126,1127,1123,1123}},	{146,{1122,1122,1122,1122}},	{0,{1126,1127,1127,1127}},
{0,{1126,1126,1126,1126}},	{0,{1126,601,601,601}},	{0,{1126,1127,607,601}},
{0,{1127,608,600,600}},	{0,{1127,1128,1129,1130}},	{0,{1129,1129,1129,1129}},
{0,{1129,1129,1129,1129}},	{0,{1129,1127,1127,1127}},	{0,{1129,1130,1126,1126}},
{146,{1125,1125,1125,1125}},	{0,{1129,0,0,0}},	{0,{1129,1107,1108,1109}},
{0,{1112,1112,1108,1108}},	{0,{1116,1116,596,590}},	{0,{1118,1118,1119,1120}},
{0,{1123,1123,1119,1119}},	{0,{1125,1126,1103,1104}},	{0,{1126,1103,1103,1103}},
{0,{1126,585,585,585}},	{146,{1124,1101,1101,1101}},	{146,{1124,583,583,583}},
{0,{1124,1105,1105,1105}},	{0,{1124,580,580,580}},	{0,{1124,1125,586,580}},
{0,{1125,1109,1109,1110}},	{0,{1125,1109,1109,1109}},	{0,{1125,1109,1109,1109}},
{146,{1123,1107,1107,1107}},	{0,{1124,0,0,0}},	{146,{1123,0,0,0}},
{0,{1123,1112,1089,1090}},	{0,{1117,1117,578,572}},	{0,{1101,1101,1101,1102}},
{0,{1121,502,513,0}},	{0,{1121,506,0,0}},	{0,{1119,506,511,0}},
{0,{1120,0,0,0}},	{0,{1120,506,509,0}},	{0,{1120,510,508,0}},
{0,{1119,508,507,0}},	{0,{1119,0,0,0}},	{0,{1119,505,505,0}},
{0,{1119,503,503,503}},	{0,{1119,521,521,521}},	{0,{1119,547,529,530}},
{0,{609,535,609,535}},	{0,{1118,528,528,528}},	{0,{1118,517,517,517}},
{0,{1118,525,525,526}},	{0,{1118,525,525,525}},	{0,{1118,530,530,530}},
{0,{1118,497,495,0}},	{0,{1117,495,494,0}},	{0,{1117,493,493,0}},
{0,{1117,1118,1065,1066}},	{0,{1118,1065,1065,1065}},	{0,{1118,547,547,547}},
{0,{1118,1119,1063,1063}},	{0,{1119,1068,1068,1068}},	{0,{1119,543,543,543}},
{0,{1119,1120,549,543}},	{0,{1120,1121,542,542}},	{0,{1121,1122,1071,1072}},
{0,{1122,1071,1071,1071}},	{0,{1122,1123,1070,1070}},	{0,{538,538,538,1123}},
{0,{1123,0,0,0}},	{0,{1123,1105,1052,1053}},	{0,{1123,1052,1052,1052}},
{0,{1123,1107,1051,1051}},	{0,{1123,1056,1056,1056}},	{0,{1123,531,531,531}},
{0,{1123,1108,537,531}},	{0,{1123,1109,530,530}},	{0,{1123,1110,1059,1060}},
{0,{1123,1059,1059,1059}},	{0,{1123,1111,1058,1058}},	{0,{1123,653,469,0}},
{0,{1123,654,0,0}},	{0,{1121,654,467,0}},	{0,{1122,655,466,1123}},
{0,{0,0,0,1122}},	{0,{463,463,463,1122}},	{0,{1106,0,0,1120}},
{0,{1117,648,0,1119}},	{146,{0,0,0,1118}},	{0,{0,0,0,1119}},
{0,{1119,0,0,0}},	{146,{1118,0,0,0}},	{0,{1118,475,475,475}},
{0,{1118,474,474,474}},	{0,{1118,654,482,483}},	{0,{1118,482,482,482}},
{0,{1118,481,481,481}},	{0,{1118,454,452,0}},	{0,{1117,452,451,0}},
{0,{1117,450,450,0}},	{0,{1023,1023,1023,1117}},	{0,{505,505,505,1117}},
{0,{1027,1027,1027,1117}},	{0,{502,502,502,1117}},	{0,{1033,1033,1033,1117}},
{0,{0,0,0,1117}},	{0,{547,0,547,1116}},	{0,{548,460,548,1116}},
{347,{545,0,545,1114}},	{0,{664,468,664,1115}},	{347,{0,0,0,0}},
{0,{456,456,456,1112}},	{347,{0,0,0,1110}},	{0,{464,464,464,1111}},
{347,{539,0,539,0}},	{0,{1110,1110,1110,1110}},	{0,{1110,1109,1109,1109}},
{0,{1110,733,733,733}},	{0,{1110,714,714,714}},	{0,{1110,1110,1110,1110}},
{0,{1110,1109,1110,1109}},	{0,{1110,1108,1108,1108}},	{0,{1110,1110,1110,1110}},
{0,{1110,1110,1110,1110}},	{0,{1110,1108,1108,1108}},	{0,{1110,1108,1108,1108}},
{0,{1110,1103,1103,1103}},	{0,{1098,1098,1098,1110}},	{0,{722,722,722,1110}},
{0,{1101,1100,1101,1110}},	{0,{1099,1099,1099,1109}},	{0,{1109,1109,1109,1109}},
{0,{1109,1108,1108,1108}},	{0,{1109,1107,1107,1107}},	{0,{1109,810,810,810}},
{0,{1109,809,809,809}},	{0,{1109,987,987,987}},	{0,{1109,469,469,469}},
{0,{1109,991,991,991}},	{0,{1109,466,466,466}},	{0,{1109,0,0,0}},
{0,{1109,795,795,795}},	{0,{1109,794,794,794}},	{0,{1109,424,424,424}},
{0,{1109,433,433,433}},	{0,{1109,1095,1095,1095}},	{0,{1109,798,798,798}},
{0,{1109,976,976,976}},	{0,{1109,981,981,981}},	{0,{1109,456,456,456}},
{0,{847,0,0,1056}},	{0,{1108,785,785,785}},	{0,{1088,1088,1088,1108}},
{0,{791,791,791,1108}},	{0,{1108,1108,1108,1108}},	{0,{1107,1107,1107,1108}},
{0,{796,780,796,1108}},	{0,{779,779,779,1107}},	{266,{997,0,0,0}},
{0,{1106,576,0,0}},	{0,{1106,0,0,0}},	{0,{1106,0,0,0}},
{146,{1104,0,0,0}},	{266,{1103,0,0,0}},	{0,{1104,1104,1104,1105}},
{0,{1103,1103,1103,1103}},	{0,{1104,1102,1104,1103}},	{0,{1103,1101,1103,1101}},
{0,{1103,1103,1103,1103}},	{0,{1103,0,0,0}},	{0,{1103,0,0,0}},
{0,{1103,1103,1103,1103}},	{0,{1103,1102,1103,1104}},	{0,{1102,1101,1102,1101}},
{0,{0,0,0,1103}},	{0,{1017,0,0,1103}},	{0,{477,0,477,1103}},
{0,{1103,1103,1103,1103}},	{0,{1102,1102,1102,1103}},	{146,{1101,1101,1101,1101}},
{0,{0,0,0,1102}},	{0,{0,0,0,1102}},	{0,{973,0,0,1102}},
{0,{0,0,0,1102}},	{0,{1102,1103,1104,1105}},	{0,{1104,1104,1104,1104}},
{0,{1104,1103,1103,1103}},	{0,{1104,1105,1105,1105}},	{0,{1104,1104,1104,1104}},
{0,{1104,1105,1106,1106}},	{146,{1105,1105,1105,1105}},	{0,{1105,1104,1104,1104}},
{0,{1103,1103,1103,1103}},	{0,{1104,1105,1105,1105}},	{0,{1104,1104,1104,1104}},
{0,{1104,349,354,0}},	{0,{1104,0,0,0}},	{0,{1104,346,0,0}},
{0,{1104,348,351,0}},	{0,{1104,349,349,349}},	{0,{1104,1087,1088,1089}},
{0,{1093,1093,1094,1094}},	{0,{1103,1104,1086,1087}},	{0,{1096,335,346,0}},
{0,{1103,363,363,363}},	{0,{1103,389,371,372}},	{0,{1103,377,377,377}},
{0,{1103,370,370,370}},	{0,{1103,343,341,0}},	{0,{1102,341,340,0}},
{0,{1102,339,339,0}},	{0,{1102,1103,1104,1084}},	{0,{1104,1102,1103,1083}},
{0,{1104,1105,1102,1082}},	{0,{1105,1106,1101,1081}},	{0,{1106,1106,1080,1080}},
{0,{520,520,333,0}},	{0,{518,518,0,0}},	{0,{1104,1104,1104,1104}},
{0,{519,519,330,0}},	{0,{516,513,329,0}},	{0,{527,527,355,356}},
{0,{1101,1102,1102,1102}},	{0,{1101,1101,1101,1101}},	{0,{1101,1102,1100,1100}},
{0,{1102,1103,1103,1103}},	{0,{1102,1102,1102,1102}},	{0,{1102,1103,1101,1101}},
{0,{1103,1104,1067,1067}},	{0,{1104,1105,0,0}},	{0,{1105,1106,1106,1106}},
{0,{1105,1105,1105,1105}},	{0,{1105,1106,1104,1104}},	{0,{1106,599,599,599}},
{0,{1106,602,602,602}},	{0,{1106,1107,601,601}},	{0,{1107,606,606,606}},
{0,{1107,1108,605,605}},	{0,{1108,609,609,609}},	{0,{1108,1109,608,608}},
{0,{1109,1110,1110,1110}},	{0,{1109,1109,1109,1109}},	{0,{1109,1109,1109,1109}},
{0,{1109,1109,1109,1109}},	{0,{1109,1110,1110,1110}},	{0,{1109,1109,1109,1109}},
{0,{1109,1110,1110,1110}},	{0,{1109,1109,1109,1109}},	{0,{1109,1106,1106,1106}},
{0,{1109,1046,1046,1046}},	{0,{1109,1048,1048,1048}},	{0,{1109,0,0,0}},
{0,{1109,684,684,684}},	{0,{1109,683,683,683}},	{0,{1109,313,313,313}},
{0,{1109,322,322,322}},	{0,{1109,1110,1110,1110}},	{0,{1109,1109,1109,1109}},
{0,{1109,1108,1108,1108}},	{0,{1109,1109,1109,1109}},	{0,{1109,1109,1109,1109}},
{0,{1109,0,0,0}},	{0,{0,0,1109,0}},	{0,{1109,1110,1110,1111}},
{0,{1111,1112,1112,1113}},	{0,{1113,1114,1114,1115}},	{0,{1115,1116,1116,1117}},
{0,{1117,1118,1118,1119}},	{0,{1119,0,0,1120}},	{0,{1120,1121,1121,1122}},
{0,{1122,1123,1123,1124}},	{0,{1113,1114,1114,1124}},	{0,{1115,0,0,1124}},
{0,{1116,1117,1117,1124}},	{0,{1118,1119,1119,1124}},	{0,{1110,1110,1110,1110}},
{0,{1123,0,0,0}},	{0,{1098,1099,1099,1099}},	{0,{1109,0,0,0}},
{0,{1108,0,0,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1116,1116,1116,1121}},	{0,{1116,1116,1116,1121}},	{0,{1116,1116,1116,1121}},
{0,{1116,1116,1116,1121}},	{0,{1116,1116,1116,1121}},	{0,{1121,1121,1121,1121}},
{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1079,1079,1079,1079}},	{0,{0,0,0,1102}},	{0,{1086,1086,1086,1119}},
{0,{0,0,0,1119}},	{0,{1089,1089,1089,1119}},	{0,{1091,1091,1091,1119}},
{0,{1119,1119,1119,1120}},	{0,{1120,1120,1120,1121}},	{0,{1119,1119,1119,1119}},
{0,{1120,1120,1120,1121}},	{0,{1121,1121,1121,1122}},	{0,{1122,1122,1122,1122}},
{0,{1122,1122,1122,1122}},	{0,{1063,1063,1063,1063}},	{0,{1068,1068,1068,1068}},
{0,{1070,1070,1070,1070}},	{0,{1077,1077,1077,1077}},	{0,{1079,1079,1079,1079}},
{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},	{0,{1105,1105,1105,1105}},
{0,{1108,1108,1108,1108}},	{0,{1109,1109,1109,1109}},	{0,{1114,1114,1114,1114}},
{0,{1114,1114,1114,1114}},	{0,{1114,1114,1114,1114}},	{0,{1114,1114,1114,1114}},
{0,{1077,1077,1077,1114}},	{0,{1077,1077,1077,1114}},	{0,{1077,1077,1077,1114}},
{0,{1077,1077,1077,1114}},	{0,{1077,1077,1077,1114}},	{0,{1077,1077,1077,1114}},
{0,{1077,1077,1077,1114}},	{0,{1077,1077,1077,1114}},	{0,{1114,1114,1114,1115}},
{0,{1115,1115,1115,1116}},	{0,{1116,1116,1116,1117}},	{0,{1117,1117,1117,1118}},
{0,{1118,1118,1118,1119}},	{0,{0,0,0,1119}},	{0,{1078,1078,1078,1119}},
{0,{1078,1078,1078,1119}},	{0,{0,0,0,1119}},	{0,{1083,1083,1083,1119}},
{0,{1119,1034,1034,1035}},	{0,{1119,0,0,1045}},	{0,{1118,0,0,1052}},
{0,{1031,1031,1031,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{0,0,0,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{1025,1025,1025,1118}},	{0,{1118,1052,1052,1052}},	{0,{1118,1052,1052,1052}},
{0,{1118,1052,1052,1052}},	{0,{1118,1052,1052,1052}},	{0,{1118,1052,1052,1052}},
{0,{0,0,0,1118}},	{0,{1027,1027,1027,1118}},	{0,{0,0,0,1118}},
{0,{1025,1025,1025,1118}},	{0,{1024,1024,1024,1118}},	{0,{0,0,0,1118}},
{0,{1022,1022,1022,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{1019,1019,1019,1118}},	{0,{1049,1049,1049,1118}},	{0,{0,0,0,1118}},
{0,{1048,1048,1048,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{0,0,0,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{0,0,0,1118}},	{0,{0,0,0,1118}},	{0,{0,0,0,1118}},
{0,{0,0,0,1118}},	{68,{0,0,0,0}},	{0,{1117,1117,1117,1117}},
{72,{0,0,0,0}},	{74,{0,0,0,0}},	{0,{1115,1115,1115,1115}},
{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},
{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},
{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{1016,1016,1016,1115}},	{0,{1016,1016,1016,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{1020,1020,1020,1115}},
{0,{1019,1019,1019,1115}},	{0,{0,0,0,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{1115,1115,1115,1115}},
{0,{1114,1114,1114,1115}},	{0,{1113,1113,1113,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{1115,1115,1115,1115}},	{0,{1109,1109,1109,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{1115,0,0,0}},	{0,{0,0,0,1115}},
{0,{1115,1115,1115,1116}},	{0,{1114,1114,1114,1114}},	{0,{1113,1113,1113,1115}},
{0,{0,0,0,1115}},	{0,{0,0,0,1115}},	{0,{1110,1110,1110,1115}},
{0,{1115,1115,1115,1115}},	{0,{1115,1115,1115,1115}},	{0,{0,0,0,1115}},
{0,{0,0,0,1115}},	{0,{1115,1116,1117,1118}},	{0,{1118,1119,1119,1120}},
{0,{1120,1121,1121,1122}},	{0,{1122,1123,1123,1124}},	{0,{1124,1125,1126,1127}},
{0,{1123,1124,1124,1127}},	{0,{1122,1123,1123,1127}},	{0,{1127,1122,1123,1124}},
{0,{1120,1121,1122,1127}},	{0,{1119,1120,1120,1127}},	{0,{1118,1119,1119,1127}},
{0,{1127,1128,1129,1130}},	{0,{1130,1127,1127,1131}},	{0,{1115,1116,1116,1131}},
{0,{1114,1115,1116,1131}},	{0,{1113,1114,1114,1131}},	{0,{1112,1113,1114,1131}},
{0,{1117,1112,1113,1131}},	{0,{1131,1132,1133,1134}},	{0,{1134,1131,1131,1135}},
{0,{1133,1130,1130,1135}},	{0,{1135,1136,1137,1138}},	{0,{1134,1135,1135,1138}},
{0,{1133,1134,1134,1138}},	{0,{1129,1126,1127,1128}},	{0,{1137,1138,1139,1140}},
{0,{1140,1137,1137,1141}},	{0,{1139,1136,1136,1141}},	{0,{1138,1135,1136,1137}},
{0,{1140,1141,1142,1143}},	{0,{1140,1140,1140,1143}},	{0,{1143,1143,1143,1143}},
{0,{1143,1143,1143,1143}},	{0,{1142,1142,1143,1144}},	{0,{1141,1141,1141,1144}},
{0,{1144,1140,1141,1142}},	{0,{1144,1145,1146,1147}},	{0,{1144,1144,1144,1147}},
{0,{1137,1137,1138,1147}},	{0,{1140,1136,1137,1146}},	{0,{1146,1146,1147,1148}},
{0,{1145,1145,1145,1148}},	{0,{1144,1144,1144,1144}},	{0,{1147,1148,1149,1150}},
{0,{1147,1147,1147,1150}},	{0,{1150,1150,1150,1151}},	{0,{1117,1117,1117,1122}},
{0,{1116,1116,1117,1118}},	{0,{1115,1115,1115,1119}},	{0,{1148,1148,1149,1150}},
{0,{1147,1147,1147,1150}},	{0,{1146,1146,1146,1150}},	{0,{1150,1111,1112,1113}},
{0,{1150,1151,1152,1153}},	{0,{1150,1150,1150,1153}},	{0,{1153,1154,1155,1156}},
{0,{1153,1153,1153,1156}},	{0,{1152,1152,1152,1156}},	{0,{1156,1156,1157,1158}},
{0,{1155,1155,1155,1158}},	{0,{1154,1154,1154,1158}},	{0,{1148,1148,1149,1150}},
{0,{1157,1158,1159,1158}},	{0,{1157,1157,1157,1159}},	{0,{1156,1156,1156,1156}},
{0,{1155,1155,1156,1155}},	{0,{1157,1157,1158,1157}},	{0,{1156,1156,1156,1158}},
{0,{1155,1155,1155,1155}},	{0,{1157,1158,1158,1159}},	{0,{1159,1160,1160,1161}},
{0,{1161,1162,1162,1163}},	{0,{1056,1057,1057,1163}},	{0,{1055,1056,1056,1163}},
{0,{1068,1065,1065,1163}},	{0,{1053,1054,1054,1163}},	{0,{1077,1074,1074,1163}},
{0,{1089,1086,1086,1163}},	{0,{1163,1092,1163,1092}},	{0,{1163,1095,1163,1095}},
{0,{1163,1095,1163,1095}},	{0,{1163,1100,1163,1100}},	{0,{1109,1109,1109,1163}},
{0,{1112,1112,1112,1163}},	{0,{1079,1079,1079,1156}},	{0,{1112,1112,1112,1162}},
{0,{1118,1118,1118,1162}},	{0,{1122,1122,1122,1162}},	{0,{1162,1163,1163,1164}},
{0,{1164,1165,1165,1166}},	{0,{1142,1143,1143,1166}},	{0,{1166,1166,1166,1166}},
{0,{1158,1159,1159,1166}},	{0,{1160,1161,1161,1166}},	{0,{1138,1139,1139,1166}},
{0,{1033,1034,1034,1166}},	{0,{1032,1033,1033,1166}},	{0,{1031,1032,1032,1166}},
{0,{1055,1052,1052,1052}},	{0,{1067,1064,1064,1064}},	{0,{1095,1095,1095,1095}},
{0,{1062,1062,1062,1062}},	{0,{1095,1095,1095,1095}},	{0,{1106,1106,1106,1106}},
{0,{1160,1161,1161,1162}},	{0,{1162,1162,1162,1162}},	{0,{1162,1162,1162,1163}},
{0,{0,0,0,1163}},	{0,{1163,0,0,1162}},	{0,{1163,1164,1164,1165}},
{0,{1163,1163,1163,1163}},	{0,{1154,1154,1154,1154}},	{0,{1163,1164,1164,1165}},
{0,{1163,1163,1163,1163}},	{0,{1164,1164,1164,1165}},	{0,{1163,1163,1163,1163}},
{0,{1152,1152,1152,1152}},	{0,{1163,1163,1163,1163}},	{0,{1163,1163,1163,1163}},
{0,{1163,1163,1163,1163}},	{0,{1163,1145,1145,1145}},	{0,{1146,1146,1146,1163}},
{0,{1146,1146,1146,1163}},	{0,{1163,0,0,0}},	{0,{0,0,0,1163}},
{0,{0,0,0,1163}},	{0,{1160,0,0,1163}},	{169,{0,0,0,1163}},
{0,{1163,0,0,0}},	{0,{1163,1144,1144,1144}},	{0,{1143,1143,1143,1163}},
{0,{1163,1164,1164,1164}},	{0,{1163,1163,1163,1164}},	{0,{1162,1162,1162,1164}},
{0,{1161,1161,1161,1161}},	{0,{1163,1160,1160,1160}},	{0,{1162,1159,1159,1163}},
{169,{1158,1158,1158,1163}},	{0,{1127,1127,1127,1163}},	{0,{0,0,0,1163}},
{0,{1133,1133,1133,1163}},	{0,{1163,1164,1164,1164}},	{0,{1163,1163,1163,1164}},
{0,{1164,1164,1164,1164}},	{0,{1164,1164,1164,1164}},	{0,{1164,1163,1163,1163}},
{0,{1162,1162,1162,1164}},	{0,{1164,1165,1165,1166}},	{0,{1164,1164,1164,1166}},
{169,{1163,1163,1163,1164}},	{0,{1162,1162,1162,1162}},	{0,{1164,1157,1157,1157}},
{0,{1164,1165,1165,1165}},	{0,{1164,1164,1164,1165}},	{0,{1165,1165,1165,1165}},
{0,{1165,1164,1164,1164}},	{0,{1163,1163,1163,1165}},	{0,{1163,1162,1162,1165}},
{169,{1161,1161,1161,1164}},	{0,{1164,1160,1160,1160}},	{169,{0,0,0,1129}},
{0,{1144,1144,1144,1144}},	{0,{1155,1155,1155,1155}},	{0,{1161,1117,1117,1117}},
{0,{1107,0,0,0}},	{0,{1160,1103,1103,1103}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},	{0,{1160,1160,1160,1160}},
{0,{1160,1160,1160,1160}},	{169,{0,0,0,0}},	{169,{1105,1105,1105,1105}},
{169,{1121,1121,1121,1121}},	{169,{1127,1127,1127,1127}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1120,1120,1120,1156}},	{0,{1121,1121,1121,1156}},
{0,{1121,1121,1121,1156}},	{0,{1123,1123,1123,1156}},	{0,{1126,1126,1126,1156}},
{0,{1127,1127,1127,1156}},	{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},
{0,{1156,1156,1156,1156}},	{0,{1156,1156,1156,1156}},	{0,{0,0,0,1069}},
{176,{0,0,0,1068}},	{0,{1073,1073,1073,1077}},	{176,{1072,1072,1072,1076}},
{0,{1088,1088,1088,1089}},	{176,{1087,1087,1087,1088}},	{0,{1093,1093,1093,1096}},
{176,{1092,1092,1092,1095}},	{0,{1148,1148,1148,1149}},	{0,{1149,1149,1149,1150}},
{0,{1098,1098,1098,1150}},	{182,{1098,1098,1098,1150}},	{0,{1098,1098,1098,1150}},
{182,{1097,1097,1097,1149}},	{0,{1096,1096,1096,1149}},	{182,{1095,1095,1095,1148}},
{0,{1094,1094,1094,1148}},	{0,{1093,1093,1093,1148}},	{0,{1148,1148,1148,1149}},
{0,{1147,1147,1147,1149}},	{0,{1090,1090,1090,1149}},	{182,{1089,1089,1089,1148}},
{0,{1088,1088,1088,1148}},	{0,{1089,1089,1089,1148}},	{0,{1088,1088,1088,1148}},
{182,{1087,1087,1087,1147}},	{0,{1086,1086,1086,1147}},	{182,{1085,1085,1085,1146}},
{0,{1084,1084,1084,1146}},	{0,{1084,1084,1084,1146}},	{0,{1083,1083,1083,1146}},
{182,{1082,1082,1082,1145}},	{0,{1145,1145,1145,1146}},	{0,{1144,1144,1144,1144}},
{182,{1082,1082,1082,1145}},	{0,{1081,1081,1081,1145}},	{0,{1145,1145,1145,1146}},
{0,{1144,1144,1144,1144}},	{182,{1078,1078,1078,1145}},	{0,{1145,1145,1145,1146}},
{0,{1144,1144,1144,1146}},	{0,{1078,1078,1078,1146}},	{0,{1078,1078,1078,1146}},
{182,{1077,1077,1077,1145}},	{0,{1145,1145,1145,1146}},	{0,{1144,1144,1144,1146}},
{0,{1067,1067,1067,1146}},	{182,{1066,1066,1066,1145}},	{0,{1065,1065,1065,1145}},
{0,{1073,1073,1073,1145}},	{0,{1072,1072,1072,1145}},	{182,{1071,1071,1071,1144}},
{0,{0,0,0,1144}},	{0,{0,0,0,1144}},	{182,{0,0,0,0}},
{0,{1143,1143,1143,1144}},	{0,{1144,1144,1144,1145}},	{0,{1068,1068,1068,1145}},
{0,{1052,1052,1052,1145}},	{0,{1051,1051,1051,1145}},	{0,{1106,1106,1106,1145}},
{0,{1105,1105,1105,1105}},	{0,{1048,1048,1048,1144}},	{0,{1049,1049,1049,1144}},
{0,{1048,1048,1048,1144}},	{0,{1048,1048,1048,1144}},	{0,{1049,1049,1049,1144}},
{0,{1049,1049,1049,1144}},	{0,{1116,1116,1116,1144}},	{0,{1115,1115,1115,1115}},
{0,{1119,1119,1119,1143}},	{0,{1118,1118,1118,1143}},	{0,{1041,1041,1041,1143}},
{0,{1040,1040,1040,1143}},	{0,{1048,1048,1048,1143}},	{0,{1047,1047,1047,1143}},
{0,{1050,1050,1050,1143}},	{0,{1050,1050,1050,1143}},	{0,{1044,1044,1044,1143}},
{0,{1143,1143,1143,1144}},	{0,{1144,1144,1144,1144}},	{0,{1144,1144,1144,1145}},
{0,{1143,1143,1143,1143}},	{0,{1139,1139,1139,1139}},	{0,{1143,1143,1143,1144}},
{0,{1142,1142,1142,1142}},	{182,{0,0,0,1143}},	{182,{971,971,971,1143}},
{0,{0,0,0,1143}},	{0,{0,0,0,1143}},	{0,{985,985,985,1143}},
{182,{984,984,984,984}},	{0,{983,983,983,1142}},	{0,{982,982,982,1142}},
{0,{1142,1142,1142,1143}},	{0,{1141,1141,1141,1141}},	{182,{992,992,992,992}},
{0,{991,991,991,1141}},	{0,{990,990,990,1141}},	{182,{993,993,993,993}},
{0,{988,988,988,1140}},	{0,{1140,1140,1140,1141}},	{0,{1139,1139,1139,1139}},
{182,{996,996,996,996}},	{0,{995,995,995,1139}},	{0,{994,994,994,1139}},
{0,{993,993,993,1139}},	{0,{0,0,0,1139}},	{0,{0,0,0,1139}},
{182,{0,0,0,1138}},	{0,{0,0,0,1138}},	{0,{0,0,0,1138}},
{0,{948,948,948,1138}},	{0,{935,935,935,1138}},	{182,{944,944,944,944}},
{0,{793,794,794,1137}},	{0,{792,793,793,1137}},	{0,{791,792,792,1137}},
{0,{815,812,812,1137}},	{0,{836,836,836,1137}},	{0,{968,968,968,1137}},
{0,{1137,1137,1137,1137}},	{0,{1137,1137,1137,1137}},	{0,{1137,1137,1137,1137}},
{0,{986,986,986,1137}},	{0,{985,985,985,1137}},	{0,{984,984,984,1137}},
{0,{1133,1133,1133,1137}},	{0,{780,781,781,1137}},	{0,{779,780,780,1137}},
{0,{778,779,779,1137}},	{0,{777,778,778,1137}},	{0,{801,798,798,1137}},
{0,{813,810,810,1137}},	{0,{821,821,821,1137}},	{0,{820,820,820,1137}},
{0,{807,807,807,1134}},	{0,{840,840,840,1136}},	{0,{851,851,851,1136}},
{0,{971,971,971,1136}},	{0,{970,970,970,1136}},	{0,{969,969,969,1136}},
{0,{970,970,970,1136}},	{0,{969,969,969,1136}},	{0,{968,968,968,1136}},
{0,{968,968,968,1136}},	{0,{970,970,970,1136}},	{0,{975,975,975,1136}},
{0,{964,964,964,1136}},	{0,{964,964,964,1136}},	{0,{970,970,970,1136}},
{0,{962,962,962,1136}},	{0,{970,970,970,1136}},	{0,{969,969,969,1136}},
{0,{968,968,968,1136}},	{0,{1136,1137,1138,1139}},	{0,{1135,1136,1136,1139}},
{0,{1134,1135,1135,1139}},	{0,{1133,1134,1135,1139}},	{0,{1132,1133,1134,1139}},
{0,{1131,1132,1132,1139}},	{0,{1130,1131,1131,1139}},	{0,{1129,1130,1131,1139}},
{0,{783,780,781,1139}},	{0,{782,779,779,1139}},	{0,{781,778,778,1139}},
{0,{780,777,778,1139}},	{0,{779,776,777,1139}},	{0,{1139,1139,1140,1141}},
{0,{1141,1141,1142,1141}},	{0,{1140,1140,1140,1142}},	{0,{1139,1139,1139,1139}},
{0,{1119,1120,1120,1141}},	{0,{1118,1119,1119,1141}},	{0,{772,769,769,1141}},
{0,{1116,1117,1117,1141}},	{0,{1115,1116,1116,1141}},	{0,{769,766,766,1141}},
{0,{1141,1141,1141,1142}},	{0,{1140,1140,1140,1140}},	{0,{1141,1142,1142,1142}},
{0,{1141,1141,1141,1142}},	{0,{1140,1140,1140,1142}},	{0,{1139,1139,1139,1139}},
{0,{1137,1138,1138,1141}},	{169,{1137,1137,1137,1141}},	{0,{1141,1142,1142,1142}},
{0,{1141,1141,1141,1142}},	{0,{1140,1140,1140,1142}},	{0,{1139,1139,1139,1139}},
{0,{1137,1138,1138,1141}},	{169,{1137,1137,1137,1141}},	{0,{1141,1142,1142,1142}},
{0,{1141,1141,1141,1142}},	{0,{1140,1140,1140,1140}},	{0,{1138,1139,1139,1141}},
{169,{1138,1138,1138,1140}},	{0,{1140,1140,1140,1140}},	{0,{1140,1140,1140,1140}},
{169,{1123,1123,1123,1123}},	{169,{1128,1128,1128,1128}},	{169,{1133,1133,1133,1133}},
{0,{1137,1137,1137,1137}},	{0,{1137,1137,1137,1137}},	{0,{1133,1133,1133,1137}},
{0,{1117,1117,1117,1120}},	{176,{1116,1116,1116,1119}},	{0,{1121,1121,1121,1124}},
{176,{1120,1120,1120,1123}},	{0,{1125,1125,1125,1127}},	{176,{1124,1124,1124,1126}},
{0,{0,0,0,1131}},	{0,{1131,1131,1131,1132}},	{0,{1130,1130,1130,1132}},
{182,{1129,1129,1129,1131}},	{0,{1128,1128,1128,1131}},	{182,{1127,1127,1127,1130}},
{0,{896,896,896,1130}},	{0,{895,895,895,1130}},	{182,{894,894,894,1129}},
{0,{893,893,893,1129}},	{0,{892,892,892,1129}},	{182,{891,891,891,1128}},
{0,{890,890,890,1128}},	{0,{892,892,892,1128}},	{0,{1113,1113,1113,1128}},
{0,{1112,1112,1112,1128}},	{0,{0,0,0,1128}},	{0,{1115,1115,1115,1128}},
{0,{884,884,884,1128}},	{0,{1113,1113,1113,1128}},	{0,{882,882,882,1128}},
{0,{881,881,881,1128}},	{0,{1086,1086,1086,1128}},	{182,{1085,1085,1085,1085}},
{0,{1087,1087,1087,1127}},	{182,{1086,1086,1086,1086}},	{0,{1085,1085,1085,1126}},
{0,{1084,1084,1084,1126}},	{0,{1089,1089,1089,1126}},	{182,{1088,1088,1088,1088}},
{0,{1087,1087,1087,1125}},	{0,{1086,1086,1086,1125}},	{0,{1091,1091,1091,1125}},
{182,{1090,1090,1090,1090}},	{0,{1089,1089,1089,1124}},	{0,{1088,1088,1088,1124}},
{0,{852,852,852,1124}},	{0,{1124,1124,1124,1124}},	{0,{1094,1094,1094,1124}},
{0,{863,863,863,1124}},	{0,{0,0,0,1124}},	{0,{1039,1040,1040,1124}},
{0,{1038,1039,1039,1124}},	{0,{692,689,689,1124}},	{0,{691,688,688,1124}},
{0,{1087,1087,1087,1124}},	{0,{1086,1086,1086,1124}},	{0,{855,855,855,1124}},
{0,{854,854,854,1124}},	{0,{853,853,853,1124}},	{0,{852,852,852,1124}},
{0,{851,851,851,1124}},	{0,{850,850,850,1124}},	{0,{849,849,849,1124}},
{0,{0,0,0,1124}},	{0,{1124,1125,1126,1127}},	{0,{1123,1124,1124,1127}},
{0,{1122,1123,1123,1127}},	{0,{1121,1122,1123,1127}},	{0,{1120,1121,1121,1127}},
{0,{1119,1120,1120,1127}},	{0,{674,671,672,1127}},	{0,{1127,1127,1128,1129}},
{0,{1126,1126,1126,1129}},	{0,{1125,1125,1125,1129}},	{0,{1114,1115,1115,1129}},
{0,{1113,1114,1114,1129}},	{0,{1122,1122,1122,1129}},	{0,{1111,1112,1112,1129}},
{0,{1110,1111,1111,1111}},	{0,{1119,1119,1119,1119}},	{0,{1127,1127,1127,1128}},
{0,{1126,1126,1126,1126}},	{0,{1127,1125,1125,1125}},	{0,{1124,1124,1124,1127}},
{0,{1123,1123,1123,1127}},	{0,{1124,1122,1122,1127}},	{169,{1121,1121,1121,1127}},
{0,{800,799,799,968}},	{169,{798,798,798,967}},	{0,{1125,1125,1125,1125}},
{0,{1125,1125,1125,1125}},	{169,{1116,1116,1116,1116}},	{169,{794,794,794,794}},
{0,{1123,1123,1123,1123}},	{0,{1123,1123,1123,1123}},	{0,{1119,1119,1119,1123}},
{0,{1119,1119,1119,1123}},	{0,{1110,1110,1110,1115}},	{176,{1109,1109,1109,1114}},
{176,{787,787,787,956}},	{0,{1114,1114,1114,1120}},	{0,{1113,1113,1113,1120}},
{0,{1112,1112,1112,1120}},	{182,{1111,1111,1111,1118}},	{0,{1110,1110,1110,1119}},
{182,{1109,1109,1109,1118}},	{0,{1108,1108,1108,1118}},	{0,{1107,1107,1107,1118}},
{0,{803,803,803,1118}},	{0,{802,802,802,1118}},	{0,{800,800,800,1118}},
{0,{799,799,799,1118}},	{0,{798,798,798,1118}},	{182,{797,797,797,1116}},
{0,{796,796,796,1117}},	{0,{795,795,795,1117}},	{0,{794,794,794,1117}},
{182,{793,793,793,1115}},	{0,{796,796,796,1116}},	{0,{795,795,795,1116}},
{0,{791,791,791,1116}},	{0,{790,790,790,1116}},	{0,{789,789,789,1116}},
{182,{788,788,788,1114}},	{0,{787,787,787,1115}},	{0,{786,786,786,1115}},
{0,{1089,1089,1089,1115}},	{0,{1088,1088,1088,1115}},	{0,{1087,1087,1087,1115}},
{182,{1086,1086,1086,1113}},	{0,{0,0,0,1114}},	{0,{0,0,0,1114}},
{0,{1082,1082,1082,1114}},	{0,{1081,1081,1081,1114}},	{0,{777,777,777,1114}},
{0,{775,775,775,1114}},	{0,{778,778,778,1114}},	{0,{774,774,774,1114}},
{0,{773,773,773,1114}},	{0,{772,772,772,1114}},	{0,{1075,1075,1075,1114}},
{0,{1074,1074,1074,1114}},	{0,{0,0,0,1114}},	{0,{1072,1072,1072,1114}},
{0,{1063,1063,1063,1114}},	{0,{1062,1062,1062,1114}},	{182,{1061,1061,1061,1061}},
{0,{0,0,0,1113}},	{0,{1059,1059,1059,1113}},	{0,{1058,1058,1058,1113}},
{0,{1057,1057,1057,1113}},	{0,{722,722,722,1113}},	{0,{721,721,721,1113}},
{0,{733,733,733,1113}},	{0,{732,732,732,1113}},	{0,{742,742,742,1113}},
{0,{741,741,741,1113}},	{0,{716,716,716,1113}},	{0,{728,728,728,1113}},
{0,{738,738,738,1113}},	{0,{1028,1029,1029,1113}},	{0,{1027,1028,1028,1113}},
{0,{582,579,579,1113}},	{0,{747,747,747,1113}},	{0,{0,0,0,1113}},
{0,{1023,1024,1024,1113}},	{0,{1022,1023,1023,1113}},	{0,{577,574,574,1113}},
{0,{1030,1030,1030,1113}},	{0,{1045,1045,1045,1113}},	{0,{1044,1044,1044,1113}},
{0,{739,739,739,1113}},	{0,{738,738,738,1113}},	{0,{1042,1042,1042,1113}},
{0,{737,737,737,1113}},	{0,{1040,1040,1040,1113}},	{0,{1039,1039,1039,1113}},
{0,{1038,1038,1038,1113}},	{0,{672,673,673,673}},	{0,{670,0,0,1112}},
{0,{0,0,0,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{840,840,840,1111}},	{0,{0,0,0,1111}},	{0,{0,0,0,1111}},
{0,{0,0,0,1111}},	{0,{0,0,0,1111}},	{0,{0,0,0,1111}},
{0,{0,0,0,1111}},	{0,{833,833,833,1111}},	{0,{832,832,832,1111}},
{0,{0,0,0,1111}},	{0,{0,0,0,1111}},	{0,{0,0,0,1111}},
{280,{0,0,0,0}},	{0,{0,0,0,1110}},	{0,{0,0,0,1110}},
{0,{0,0,0,1110}},	{0,{0,0,0,1110}},	{0,{1110,0,0,0}},
{0,{0,0,0,1110}},	{0,{0,0,0,1110}},	{0,{1110,1110,1110,1110}},
{0,{1110,1110,1110,1111}},	{0,{1111,1111,1111,1111}},	{0,{1108,1108,1108,1108}},
{0,{0,0,0,1110}},	{0,{1105,1105,1105,1110}},	{0,{1104,1104,1104,1110}},
{0,{0,0,0,1110}},	{0,{0,0,0,1110}},	{0,{0,0,0,1110}},
{0,{0,0,0,1110}},	{0,{0,0,0,1110}},	{0,{0,0,0,1110}},
{0,{0,0,0,1110}},	{0,{1110,1111,634,1112}},	{0,{1110,1110,633,1112}},
{0,{1112,1112,0,1113}},	{0,{1111,1111,0,1113}},	{0,{1110,1110,0,1113}},
{0,{1109,1109,0,1113}},	{0,{1113,1108,0,1111}},	{0,{1103,1104,627,1113}},
{0,{1103,1103,626,1113}},	{0,{1105,1105,0,0}},	{0,{1104,1104,0,1112}},
{0,{1103,1103,0,1112}},	{0,{1102,1102,0,1112}},	{0,{1106,1101,0,1110}},
{0,{1111,1111,1112,1111}},	{0,{1112,1112,1113,1112}},	{0,{0,0,0,1099}},
{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},
{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},
{0,{0,0,0,1112}},	{0,{1112,1112,1112,1112}},	{0,{1109,1109,1109,1112}},
{176,{1108,1108,1108,1111}},	{0,{779,779,779,1111}},	{0,{0,0,0,1111}},
{182,{0,0,0,1111}},	{0,{0,0,0,1111}},	{182,{0,0,0,1111}},
{0,{0,0,0,1111}},	{0,{1081,1081,0,1111}},	{0,{1080,1080,0,1111}},
{0,{1079,1079,0,1111}},	{0,{1078,1078,0,1111}},	{0,{1096,1096,1096,1111}},
{0,{0,0,0,1111}},	{0,{1075,1075,0,1111}},	{0,{1074,1074,0,1111}},
{0,{0,0,0,1111}},	{0,{1111,1111,1111,1112}},	{0,{1110,1110,1110,1110}},
{0,{1070,1070,0,1111}},	{0,{1069,1069,0,1111}},	{0,{0,0,0,1111}},
{0,{0,0,0,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1104}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1111}},
{0,{1111,1111,1111,1111}},	{0,{1111,1111,1111,1112}},	{0,{1112,1112,1112,1112}},
{0,{1059,1059,1059,1112}},	{0,{1059,1059,1059,1112}},	{0,{1112,1112,1112,1113}},
{0,{1113,1113,1113,1113}},	{0,{1059,1059,1059,1113}},	{0,{1060,1060,1060,1113}},
{0,{1113,1113,1113,1114}},	{0,{1114,1114,1114,1114}},	{0,{1114,1114,1114,1115}},
{0,{657,657,657,657}},	{0,{1114,1114,1114,1115}},	{0,{1115,1115,1115,1115}},
{0,{1062,1062,1062,1115}},	{0,{1115,1115,1115,1116}},	{0,{1116,1116,1116,1116}},
{0,{575,575,575,1116}},	{0,{1061,1061,1061,1116}},	{0,{1116,1116,1116,1117}},
{0,{1040,1040,1040,1117}},	{0,{1097,1097,1097,1117}},	{0,{1044,1044,1044,1117}},
{0,{568,568,568,1117}},	{0,{1099,1099,1099,1117}},	{0,{643,643,643,1117}},
{0,{1102,1102,1102,1117}},	{0,{1047,1047,1047,1117}},	{0,{1104,1104,1104,1117}},
{0,{1117,1117,1117,1118}},	{0,{1118,1118,1118,1119}},	{0,{1119,1119,1119,1120}},
{0,{0,0,0,1120}},	{0,{504,504,504,1120}},	{0,{0,0,0,1120}},
{0,{0,0,0,1120}},	{0,{1066,1066,1066,1120}},	{0,{517,517,517,1120}},
{0,{1120,1120,1120,1121}},	{0,{528,528,528,1121}},	{0,{1064,1064,1064,1121}},
{0,{1068,1068,1068,1121}},	{0,{1068,1068,1068,1121}},	{0,{1017,1017,1017,1121}},
{0,{548,548,548,1121}},	{0,{1021,1021,1021,1121}},	{0,{545,545,545,1121}},
{0,{1027,1027,1027,1121}},	{0,{0,0,0,1121}},	{0,{505,505,505,1121}},
{0,{517,517,517,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{1120,1120,1120,1121}},	{0,{1121,1121,1121,1121}},	{0,{1121,1121,1121,1121}},
{0,{763,763,763,763}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1114,1114,1114,1120}},	{0,{1109,1109,1109,1120}},	{0,{752,752,752,1120}},
{0,{1111,1111,1111,1120}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1120}},
{0,{1106,1106,1106,1120}},	{0,{814,814,814,1120}},	{0,{978,978,978,1120}},
{0,{983,983,983,1120}},	{0,{507,507,507,1120}},	{0,{803,803,803,1120}},
{0,{1100,1100,1100,1120}},	{0,{808,808,808,1120}},	{0,{1120,1120,1120,1120}},
{0,{1119,1119,1119,1120}},	{0,{798,798,798,1120}},	{0,{1057,1057,1057,1120}},
{0,{0,0,0,1120}},	{0,{986,986,986,1120}},	{0,{1120,1120,1120,1120}},
{0,{1119,1119,1119,1120}},	{0,{1118,1118,1118,1120}},	{0,{1120,1120,1120,1120}},
{0,{0,0,0,1120}},	{0,{1096,1096,1096,1120}},	{0,{1120,1120,1120,1120}},
{0,{1119,1119,1119,1120}},	{0,{1118,1118,1118,1120}},	{363,{0,0,0,0}},
{0,{0,0,0,1119}},	{0,{0,0,0,1119}},	{0,{0,0,0,1119}},
{367,{0,0,0,1118}},	{367,{0,0,0,0}},	{367,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{1117,1117,1117,1118}},
{0,{1118,1118,1118,1119}},	{0,{1119,1119,1119,1120}},	{0,{1120,1120,1120,1121}},
{0,{1119,1119,1119,1121}},	{0,{1121,1121,1121,1122}},	{0,{1120,1120,1120,1120}},
{0,{1121,1121,1121,1122}},	{0,{1120,1120,1120,1120}},	{0,{1114,1114,1114,1114}},
{0,{1113,1113,1113,1120}},	{0,{1120,1120,1120,1121}},	{0,{1119,1119,1119,1119}},
{0,{399,399,399,1120}},	{0,{0,0,0,1120}},	{0,{405,405,405,1120}},
{0,{407,407,407,1120}},	{0,{408,408,408,1120}},	{0,{1099,1099,1099,1120}},
{0,{1120,1120,1120,1121}},	{0,{1121,1121,1121,1122}},	{0,{421,421,421,1122}},
{0,{430,430,430,1122}},	{0,{436,436,436,1122}},	{0,{431,431,431,1122}},
{0,{402,402,402,1122}},	{0,{389,389,389,1122}},	{0,{1090,1090,1090,1122}},
{0,{1091,1091,1091,1091}},	{0,{1092,1092,1092,1092}},	{0,{1087,1087,1087,1087}},
{0,{1108,1108,1108,1108}},	{0,{1109,1109,1109,1109}},	{0,{1117,1117,1117,1117}},
{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},	{0,{0,0,0,1117}},
{0,{1117,1117,1117,1118}},	{0,{1116,1116,1116,1118}},	{0,{1115,1115,1115,1118}},
{0,{1114,1114,1114,1118}},	{0,{1113,1113,1113,1118}},	{0,{1112,1112,1112,1112}},
{0,{1111,1111,1111,1117}},	{0,{1110,1110,1110,1117}},	{0,{1078,1078,1078,1117}},
{0,{1077,1077,1077,1117}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{1117,1117,1117,1118}},	{0,{1116,1116,1116,1116}},	{0,{1115,1115,1115,1117}},
{0,{1114,1114,1114,1117}},	{0,{633,633,633,1117}},	{0,{635,635,635,1117}},
{0,{634,634,634,1117}},	{0,{633,633,633,1117}},	{0,{638,638,638,1117}},
{0,{637,637,637,1117}},	{0,{636,636,636,1117}},	{0,{641,641,641,1117}},
{0,{640,640,640,1117}},	{0,{639,639,639,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{1117,1117,1117,1117}},	{0,{0,0,0,1117}},
{0,{1117,1117,1117,1118}},	{0,{1116,1116,1116,1118}},	{0,{1118,1118,1118,1119}},
{0,{1117,1117,1117,1117}},	{0,{1118,1118,1118,1119}},	{0,{1119,1119,1119,1119}},
{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1119}},	{0,{701,701,701,1119}},
{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1119}},
{0,{1105,1105,1105,1119}},	{0,{1104,1104,1104,1104}},	{0,{1108,1108,1108,1108}},
{0,{0,0,0,1117}},	{0,{1117,1117,1117,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{1117,1118,1118,1118}},	{0,{1117,1117,1117,1117}},
{0,{1117,1116,1116,1116}},	{0,{1117,1118,1118,1118}},	{0,{1117,1117,1117,1117}},
{0,{1117,1116,1116,1116}},	{0,{1117,1118,1118,1115}},	{0,{1117,1117,1117,1114}},
{0,{1117,1116,1116,1113}},	{0,{1117,1118,1118,1112}},	{0,{1117,1117,1117,1111}},
{0,{1117,1116,1116,1110}},	{0,{1117,1118,1118,1118}},	{0,{1117,1117,1117,1117}},
{0,{1117,1116,1116,1116}},	{0,{1117,0,0,0}},	{0,{1117,0,0,0}},
{0,{1117,1118,1118,0}},	{0,{1117,1117,1117,0}},	{0,{1117,1116,1116,0}},
{0,{1117,1118,1118,0}},	{0,{1117,1117,1117,0}},	{0,{1117,1116,1116,0}},
{0,{1117,1107,1107,1107}},	{0,{1117,0,0,0}},	{0,{1117,1110,1110,0}},
{0,{1117,1112,1112,0}},	{0,{1117,0,0,0}},	{0,{1117,0,0,0}},
{0,{1117,1117,1118,1118}},	{0,{1118,1118,1091,1091}},	{0,{1118,1118,1119,1119}},
{0,{1119,1119,1120,1120}},	{0,{1120,1120,0,0}},	{0,{1120,1120,1121,1121}},
{0,{1121,1121,1122,1122}},	{0,{1122,1122,1123,1123}},	{0,{1123,1114,1115,1115}},
{0,{1123,1115,0,0}},	{0,{1123,1115,1116,1116}},	{0,{1123,1116,1117,1117}},
{0,{1123,1117,1118,1118}},	{0,{1110,1110,1110,1110}},	{0,{1112,1112,1112,1112}},
{0,{1113,1113,1113,1113}},	{0,{1114,1114,1114,1114}},	{0,{1119,1084,1084,1084}},
{0,{1119,0,0,0}},	{0,{1119,1087,1087,0}},	{0,{1119,1089,1089,0}},
{0,{1119,1119,1119,1119}},	{0,{1119,1118,1118,1118}},	{0,{1119,1119,1119,1119}},
{0,{1119,1118,1118,1118}},	{0,{1119,1119,1119,1117}},	{0,{1119,1118,1118,1116}},
{0,{1119,1119,1119,1115}},	{0,{1119,1118,1118,1114}},	{0,{1119,1119,1119,1119}},
{0,{1119,1119,1119,1119}},	{0,{1087,1087,1087,1087}},	{0,{1089,1089,1089,1089}},
{0,{1117,1068,1068,1068}},	{0,{1117,0,0,0}},	{0,{1117,1071,1071,0}},
{0,{1117,1073,1073,0}},	{0,{1117,1080,1081,1081}},	{0,{1117,1081,1054,1054}},
{0,{1117,1081,1082,1082}},	{0,{1117,1082,1083,1083}},	{0,{1117,1083,0,0}},
{0,{1117,1083,1084,1084}},	{0,{1117,1084,1085,1085}},	{0,{1117,1085,1086,1086}},
{0,{1117,1077,1078,1078}},	{0,{1117,1076,1077,1077}},	{0,{1117,1077,0,0}},
{0,{1117,1076,0,0}},	{0,{1117,1076,1077,1077}},	{0,{1117,1075,1076,1076}},
{0,{1117,1076,1077,1077}},	{0,{1117,1075,1076,1076}},	{0,{1117,1076,1077,1077}},
{0,{1117,1075,1076,1076}},	{0,{0,0,0,1117}},	{0,{1072,1072,1072,1117}},
{0,{1073,1073,1073,1117}},	{0,{0,0,0,1117}},	{0,{1083,1083,1083,1117}},
{0,{1117,1032,1032,1032}},	{0,{1117,0,0,0}},	{0,{1030,1030,1030,1117}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{1117,0,0,0}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{1024,1024,1024,1117}},
{0,{1117,1053,1054,1054}},	{0,{1117,1054,0,0}},	{0,{1117,1054,1055,1055}},
{0,{1117,1055,1056,1056}},	{0,{1117,1056,1057,1057}},	{0,{0,0,0,1117}},
{0,{1117,1026,1026,1026}},	{0,{1117,0,0,0}},	{0,{1117,1024,1024,1024}},
{0,{1117,1023,1023,1023}},	{0,{1117,0,0,0}},	{0,{1117,1021,1021,1021}},
{0,{1117,0,0,0}},	{0,{1117,0,0,0}},	{0,{1117,1018,1018,1018}},
{0,{1117,1044,1044,1044}},	{0,{1117,0,0,0}},	{0,{1117,1044,1044,1044}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{1117,0,0,0}},	{0,{1117,0,0,0}},	{0,{1117,0,0,0}},
{0,{1117,0,0,0}},	{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},
{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},
{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},
{0,{1117,1117,1117,1117}},	{0,{1117,1117,1117,1117}},	{0,{1117,0,0,0}},
{0,{1117,1117,0,0}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{1014,1014,1014,1117}},	{0,{1015,1015,1015,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{1024,1024,1024,1117}},	{0,{1023,1023,1023,1117}},
{0,{1117,0,0,0}},	{0,{1117,0,0,0}},	{0,{1117,0,0,0}},
{0,{1117,0,0,0}},	{0,{1117,1117,1117,1117}},	{0,{1117,1116,1116,1116}},
{0,{1117,1115,1115,1115}},	{0,{1117,0,0,0}},	{0,{1117,0,0,0}},
{0,{1117,1117,1117,1117}},	{0,{1111,1111,1111,1117}},	{0,{1117,0,0,0}},
{0,{0,0,0,1117}},	{0,{0,0,0,1117}},	{0,{0,0,0,1117}},
{0,{1117,0,0,0}},	{0,{1117,0,0,0}},	{0,{1117,1117,1117,1117}},
{0,{1117,1116,1116,1116}},	{0,{1115,1115,1115,1117}},	{0,{0,0,0,1117}},
{0,{0,0,0,1117}},	{0,{1112,1112,1112,1117}},	{0,{1117,1117,1117,1117}},
{0,{1117,1117,1117,0}},	{0,{0,0,0,1117}},	{0,{1117,0,0,0}},
{0,{1117,1118,1119,1120}},	{0,{1120,1120,1121,1122}},	{0,{1119,1122,1120,1121}},
{0,{1122,1118,1119,1120}},	{0,{1122,1123,1124,1125}},	{0,{1122,1122,1123,1124}},
{0,{1124,1125,1126,1123}},	{0,{1126,1127,1128,1127}},	{0,{1126,1126,1127,1126}},
{0,{1127,1125,1126,1125}},	{0,{1127,1128,1129,1128}},	{0,{1127,1127,1128,1127}},
{0,{1128,1126,1127,1126}},	{0,{1128,1129,1130,1129}},	{0,{1128,1128,1129,1128}},
{0,{1127,1129,1128,1127}},	{0,{1129,1126,1127,1126}},	{0,{1129,1130,1131,1125}},
{0,{1131,1124,1125,1124}},	{0,{1131,1132,1133,1132}},	{0,{1133,1122,1123,1122}},
{0,{1133,1126,1127,1121}},	{0,{1133,1120,1121,1120}},	{0,{1133,1134,1135,1136}},
{0,{1136,1136,1137,1138}},	{0,{1135,1138,1136,1137}},	{0,{1138,1134,1135,1136}},
{0,{1138,1133,1134,1135}},	{0,{1138,1139,1140,1134}},	{0,{1140,1113,1114,1113}},
{0,{1140,1112,1113,1112}},	{0,{1140,1116,1117,1111}},	{0,{1140,1110,1111,1110}},
{0,{1140,1109,1110,1109}},	{0,{1140,1141,1142,1141}},	{0,{1142,1142,1143,1142}},
{0,{1141,1143,1142,1141}},	{0,{1143,1140,1141,1140}},	{0,{1143,1139,1140,1139}},
{0,{1143,1144,1145,1138}},	{0,{1145,1137,1138,1137}},	{0,{1145,1136,1137,1136}},
{0,{1145,1135,1136,1135}},	{0,{1144,1136,1135,1134}},	{0,{1144,1133,1134,1133}},
{0,{1144,1138,1139,1132}},	{0,{1144,1131,1132,1131}},	{0,{1144,1145,1146,1145}},
{0,{1146,1146,1147,1146}},	{0,{1145,1147,1146,1145}},	{0,{1147,1144,1145,1144}},
{0,{1147,1143,1144,1143}},	{0,{1147,1148,1149,1142}},	{0,{1149,1141,1142,1141}},
{0,{1149,1149,1150,1151}},	{0,{1151,1151,1152,1153}},	{0,{1150,1153,1151,1152}},
{0,{1153,1149,1150,1151}},	{0,{1153,1154,1155,1150}},	{0,{1155,1155,1156,1155}},
{0,{1156,1156,1157,1156}},	{0,{1155,1157,1156,1155}},	{0,{1157,1154,1155,1154}},
{0,{1157,1158,1159,1153}},	{0,{1159,1159,1160,1159}},	{0,{1160,1160,1161,1162}},
{0,{1162,1162,1163,1164}},	{0,{1161,1164,1162,1163}},	{0,{1164,1160,1161,1162}},
{0,{1164,1165,1166,1161}},	{0,{1166,1146,1147,1146}},	{0,{1166,1145,1146,1145}},
{0,{1165,1146,1145,1144}},	{0,{1165,1143,1144,1143}},	{0,{1165,1147,1148,1142}},
{0,{1165,1165,1166,1167}},	{0,{1167,1167,1168,1169}},	{0,{1166,1169,1167,1168}},
{0,{1169,1165,1166,1167}},	{0,{1169,1170,1171,1166}},	{0,{1171,1171,1172,1171}},
{0,{1172,1170,1171,1170}},	{0,{1172,1172,1173,1172}},	{0,{1171,1173,1172,1171}},
{0,{1173,1170,1171,1170}},	{0,{1173,1174,1175,1169}},	{0,{1175,1168,1169,1168}},
{0,{1105,1105,1106,1105}},	{0,{1174,1174,1175,1176}},	{0,{1176,1176,1177,1178}},
{0,{1175,1178,1176,1177}},	{0,{1178,1174,1175,1176}},	{0,{1178,1179,1180,1175}},
{0,{1180,1180,1181,1180}},	{0,{1181,1181,1182,1181}},	{0,{1180,1182,1181,1180}},
{0,{1182,1179,1180,1179}},	{0,{1182,1183,1184,1178}},	{0,{1184,1177,1178,1177}},
{0,{1184,1176,1177,1176}},	{0,{1183,1177,1176,1175}},	{0,{1183,1174,1175,1174}},
{0,{1183,1178,1179,1173}},	{0,{1183,1172,1173,1172}},	{0,{1183,1183,1184,1183}},
{0,{0,0,1184,0}},	{0,{0,1184,1183,0}},	{0,{1184,1184,1185,0}},
{0,{1185,0,1181,0}},	{0,{1184,1181,1180,0}},	{0,{1184,1181,1182,0}},
{0,{1184,1185,1186,1187}},	{0,{1184,1184,1185,1186}},	{0,{1186,1183,1184,1185}},
{0,{1186,1187,1188,1189}},	{0,{1186,1186,1187,1188}},	{0,{1188,1185,1186,1187}},
{0,{1188,1189,1190,1189}},	{0,{1188,1188,1189,1188}},	{0,{1189,1187,1188,1187}},
{0,{1189,1022,1023,1022}},	{0,{1189,1021,1022,1021}},	{0,{1189,1038,1039,1040}},
{0,{1189,1019,1020,1019}},	{0,{1189,1053,1054,1053}},	{0,{1189,1069,1070,1069}},
{0,{1189,1080,1081,1082}},	{0,{1189,1087,1088,1087}},	{0,{1189,1088,1089,1088}},
{0,{1189,1099,1100,1101}},	{0,{1189,1113,1114,1115}},	{0,{1189,1120,1121,1120}},
{0,{1189,1122,1123,1122}},	{0,{1189,1132,1133,1134}},	{0,{1189,1141,1142,1141}},
{0,{1189,1190,1191,1190}},	{0,{1189,1189,1190,1189}},	{0,{1190,1188,1189,1188}},
{0,{1190,1191,1192,1191}},	{0,{1190,1190,1191,1190}},	{0,{1191,1189,1190,1189}},
{0,{1191,1165,1166,1165}},	{0,{1191,1191,1192,1191}},	{0,{1192,1182,1183,1182}},
{0,{1192,1185,1186,1185}},	{0,{1192,1161,1162,1161}},	{0,{1192,996,997,996}},
{0,{1192,995,996,995}},	{0,{1192,994,995,994}},	{0,{1192,1192,1192,1193}},
{0,{1193,1193,1193,1194}},	{0,{1194,1192,1192,1193}},	{0,{1194,1194,1194,1195}},
{0,{1195,1195,1195,1195}},	{0,{1195,1194,1194,1194}},	{0,{1195,0,0,0}},
{0,{1131,1131,1131,1131}},	{0,{1194,1194,1194,1195}},	{0,{1195,1195,1195,1196}},
{0,{1196,1194,1194,1195}},	{0,{1196,1196,1196,1197}},	{0,{1197,1197,1197,1198}},
{0,{1198,1196,1196,1197}},	{0,{1198,1198,1198,1198}},	{0,{1198,1197,1197,1197}},
{0,{1198,1198,1198,1198}},	{0,{1198,1198,1198,1198}},	{0,{1198,1198,1198,1198}},
{0,{1198,1173,1173,1174}},	{0,{1198,1198,1198,1178}},	{0,{1198,1178,1178,1178}},
{0,{1198,0,0,0}},	{0,{1198,1198,1198,0}},	{0,{1198,0,0,0}},
{0,{1198,0,1198,0}},	{0,{1198,0,1197,0}},	{0,{1198,1111,1111,1111}},
{0,{1198,1174,1174,1175}},	{0,{1198,1198,1198,1176}},	{0,{1198,1199,1199,1199}},
{0,{1199,1199,1199,1199}},	{0,{1199,1199,1199,1198}},	{0,{1199,1197,1197,1197}},
{0,{1199,1196,1196,1196}},	{0,{1199,1195,1199,1195}},	{0,{1199,1194,1198,1194}},
{0,{1199,1199,1199,1158}},	{0,{1104,1104,1104,0}},	{0,{1198,1198,1198,1166}},
{0,{1198,1199,1199,1200}},	{0,{1200,1200,1200,1201}},	{0,{1201,1201,1201,1200}},
{0,{1201,1201,1201,1201}},	{0,{1201,1201,1201,1201}},	{0,{1201,1200,1200,1200}},
{0,{1201,1201,1201,1199}},	{0,{1201,1202,1202,1202}},	{0,{1201,1201,1201,1201}},
{0,{1201,1200,1201,1200}},	{0,{1201,1201,1201,1199}},	{0,{1201,1202,1202,1202}},
{0,{1202,1203,1203,1204}},	{0,{1204,1204,1204,1205}},	{0,{1205,1205,1205,1204}},
{0,{1205,1205,1205,1205}},	{0,{1205,1204,1204,1204}},	{0,{1205,1205,1205,1203}},
{0,{1205,1202,1205,1202}},	{0,{1205,1206,1206,1206}},	{0,{1206,1206,1206,1206}},
{0,{1206,1206,1206,1206}},	{0,{910,910,910,912}},	{0,{915,915,915,917}},
{0,{921,921,921,921}},	{0,{924,924,924,924}},	{0,{927,927,927,927}},
{0,{944,944,944,946}},	{0,{960,960,960,960}},	{0,{976,976,976,976}},
{0,{987,987,987,989}},	{0,{994,994,994,994}},	{0,{995,995,995,995}},
{0,{1006,1006,1006,1008}},	{0,{1020,1020,1020,1022}},	{0,{1027,1027,1027,1027}},
{0,{1029,1029,1029,1029}},	{0,{1039,1039,1039,1041}},	{0,{1048,1048,1048,1048}},
{0,{1068,1068,1068,1070}},	{0,{1072,1072,1072,1074}},	{0,{1076,1076,1076,1076}},
{0,{1094,1094,1094,1094}},	{0,{1097,1097,1097,1097}},	{0,{1100,1100,1100,1100}},
{0,{1183,887,1183,889}},	{0,{1183,892,1183,894}},	{0,{1183,898,1183,898}},
{0,{1183,901,1183,901}},	{0,{1183,904,1183,904}},	{0,{1183,921,1183,923}},
{0,{1183,937,1183,937}},	{0,{1183,953,1183,953}},	{0,{1183,964,1183,966}},
{0,{1183,971,1183,971}},	{0,{1183,972,1183,972}},	{0,{1183,983,1183,985}},
{0,{1183,997,1183,999}},	{0,{1183,1004,1183,1004}},	{0,{1183,1006,1183,1006}},
{0,{1183,1016,1183,1018}},	{0,{1183,1025,1183,1025}},	{0,{1183,891,891,891}},
{0,{1183,925,925,925}},	{0,{1183,941,941,941}},	{0,{1183,962,962,962}},
{0,{1183,999,999,999}},	{0,{1183,1019,1019,1019}},	{0,{1183,1068,1183,1068}},
{0,{1183,1071,1183,1071}},	{0,{1183,1047,1183,1047}},	{0,{1183,1073,1183,1073}},
{0,{862,862,862,862}},	{0,{861,861,861,1182}},	{0,{866,866,866,866}},
{0,{865,865,865,1181}},	{0,{869,869,869,1181}},	{0,{872,872,872,1181}},
{0,{875,875,875,1181}},	{0,{874,874,874,1181}},	{0,{873,873,873,1181}},
{0,{872,872,872,1181}},	{0,{891,891,891,891}},	{0,{890,890,890,1180}},
{0,{889,889,889,1180}},	{0,{868,868,868,1180}},	{0,{867,867,867,1180}},
{0,{901,901,901,1180}},	{0,{900,900,900,1180}},	{0,{899,899,899,1180}},
{0,{898,898,898,1180}},	{0,{914,914,914,1180}},	{0,{913,913,913,1180}},
{0,{926,926,926,926}},	{0,{925,925,925,1179}},	{0,{932,932,932,1179}},
{0,{931,931,931,1179}},	{0,{944,944,944,944}},	{0,{943,943,943,1178}},
{0,{928,928,928,1178}},	{0,{956,956,956,956}},	{0,{955,955,955,1177}},
{0,{954,954,954,1177}},	{0,{959,959,959,1177}},	{0,{961,961,961,1177}},
{0,{973,973,973,973}},	{0,{972,972,972,1176}},	{0,{971,971,971,1176}},
{0,{897,897,897,1176}},	{0,{896,896,896,1176}},	{0,{976,976,976,1176}},
{0,{975,975,975,1176}},	{0,{0,0,0,1176}},	{0,{0,0,0,1176}},
{0,{995,995,995,995}},	{0,{994,994,994,1175}},	{0,{998,998,998,998}},
{0,{997,997,997,1174}},	{0,{999,999,999,1174}},	{0,{834,834,834,1174}},
{0,{833,833,833,1174}},	{0,{852,852,852,1174}},	{0,{831,831,831,1174}},
{0,{865,865,865,1174}},	{0,{864,864,864,1174}},	{0,{880,880,880,1174}},
{0,{899,899,899,1174}},	{0,{900,900,900,1174}},	{0,{928,928,928,1174}},
{0,{949,949,949,1174}},	{0,{948,948,948,1174}},	{0,{874,874,874,1174}},
{0,{873,873,873,1174}},	{0,{953,953,953,1174}},	{0,{952,952,952,1174}},
{0,{1001,1001,1001,1174}},	{0,{1004,1004,1004,1174}},	{0,{949,949,949,1174}},
{0,{1017,1017,1017,1017}},	{0,{1016,1016,1016,1173}},	{0,{1018,1018,1018,1018}},
{0,{1024,1024,1024,1024}},	{0,{1023,1023,1023,1171}},	{0,{1027,1027,1027,1027}},
{0,{1026,1026,1026,1170}},	{0,{0,0,0,1170}},	{0,{1026,1026,1026,1170}},
{0,{0,0,0,1170}},	{0,{0,0,0,1170}},	{0,{1041,1041,1041,1170}},
{0,{1040,1040,1040,1170}},	{0,{1039,1039,1039,1170}},	{0,{1050,1050,1050,1050}},
{0,{1049,1049,1049,1169}},	{0,{1051,1051,1051,1169}},	{0,{1050,1050,1050,1169}},
{0,{1049,1049,1049,1169}},	{0,{1061,1061,1061,1061}},	{0,{1060,1060,1060,1168}},
{0,{1061,1061,1061,1168}},	{0,{1060,1060,1060,1168}},	{0,{1059,1059,1059,1168}},
{0,{0,0,0,1168}},	{0,{0,0,0,1168}},	{0,{0,0,0,1168}},
{0,{0,0,0,1168}},	{0,{1008,1008,1008,1168}},	{0,{992,992,992,1168}},
{0,{1168,785,786,785}},	{0,{1168,784,785,784}},	{0,{1168,783,784,783}},
{0,{1168,817,818,817}},	{0,{1168,855,856,855}},	{0,{1168,1032,1168,1032}},
{0,{1168,1168,1168,1168}},	{0,{1168,1168,1168,1168}},	{0,{1168,1168,1168,1168}},
{0,{776,776,776,1168}},	{0,{775,775,775,1168}},	{0,{774,774,774,1168}},
{0,{1164,1164,1164,1168}},	{0,{1168,772,773,772}},	{0,{1168,771,772,771}},
{0,{1168,770,771,770}},	{0,{1168,769,770,769}},	{0,{1168,803,804,803}},
{0,{1168,819,820,819}},	{0,{1168,840,841,840}},	{0,{1168,839,840,839}},
{0,{1168,876,877,876}},	{0,{1168,896,897,896}},	{0,{762,762,762,1168}},
{0,{761,761,761,1168}},	{0,{760,760,760,1168}},	{0,{794,794,794,1168}},
{0,{793,793,793,1168}},	{0,{792,792,792,1168}},	{0,{808,808,808,1168}},
{0,{829,829,829,1168}},	{0,{887,887,887,1168}},	{0,{788,788,788,1168}},
{0,{804,804,804,1168}},	{0,{863,863,863,1168}},	{0,{802,802,802,1168}},
{0,{882,882,882,1168}},	{0,{881,881,881,1168}},	{0,{880,880,880,1168}},
{0,{1168,1169,1170,1171}},	{0,{1168,1168,1169,1170}},	{0,{1167,1170,1168,1169}},
{0,{1170,1166,1167,1168}},	{0,{1170,1171,1172,1167}},	{0,{1172,1164,1165,1166}},
{0,{1172,1163,1164,1165}},	{0,{1172,1162,1163,1164}},	{0,{1172,1167,1168,1163}},
{0,{1172,1160,1161,1162}},	{0,{1172,1159,1160,1161}},	{0,{1172,787,788,787}},
{0,{1172,792,793,786}},	{0,{1172,785,786,785}},	{0,{1172,784,785,784}},
{0,{1172,783,784,783}},	{0,{1172,1172,1173,1172}},	{0,{1171,1173,1172,1171}},
{0,{1173,1170,1171,1170}},	{0,{1173,0,874,0}},	{0,{1172,874,873,0}},
{0,{1172,874,875,0}},	{0,{1172,1147,1148,1149}},	{0,{1172,1146,1147,1148}},
{0,{1172,774,775,774}},	{0,{1172,1144,1145,1146}},	{0,{1172,1143,1144,1145}},
{0,{1172,771,772,771}},	{0,{1172,1172,1172,1172}},	{0,{1172,1171,1171,1171}},
{0,{1172,1173,1173,1173}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1171}},
{0,{1172,1170,1170,1170}},	{0,{1172,1169,1172,1169}},	{0,{1172,1168,1171,1168}},
{0,{1172,1173,1173,1173}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1171}},
{0,{1172,1170,1170,1170}},	{0,{1172,1169,1172,1169}},	{0,{1172,1168,1171,1168}},
{0,{1172,1173,1173,1173}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1171}},
{0,{1172,1170,1172,1170}},	{0,{1123,1123,1123,1125}},	{0,{1141,1141,1141,1141}},
{0,{1170,1121,1170,1123}},	{0,{1170,1139,1170,1139}},	{0,{1170,1119,1119,1121}},
{0,{1170,0,0,0}},	{0,{1119,1119,1119,1119}},	{0,{1118,1118,1118,1169}},
{0,{1117,1117,1117,1169}},	{0,{1116,1116,1116,1169}},	{0,{742,742,742,1169}},
{0,{741,741,741,1169}},	{0,{740,740,740,1169}},	{0,{739,739,739,1169}},
{0,{738,738,738,1169}},	{0,{759,759,759,1169}},	{0,{1126,1126,1126,1169}},
{0,{1125,1125,1125,1169}},	{0,{0,0,0,1169}},	{0,{1106,1106,1106,1169}},
{0,{732,732,732,1169}},	{0,{1104,1104,1104,1169}},	{0,{730,730,730,1169}},
{0,{729,729,729,1169}},	{0,{1130,1130,1130,1169}},	{0,{1132,1132,1132,1169}},
{0,{1131,1131,1131,1169}},	{0,{1130,1130,1130,1169}},	{0,{1135,1135,1135,1169}},
{0,{1134,1134,1134,1169}},	{0,{1133,1133,1133,1169}},	{0,{1138,1138,1138,1169}},
{0,{1137,1137,1137,1169}},	{0,{1136,1136,1136,1169}},	{0,{933,933,933,1169}},
{0,{1169,1169,1169,1169}},	{0,{1089,1089,1089,1169}},	{0,{715,715,715,1169}},
{0,{0,0,0,1169}},	{0,{1169,1084,1085,1086}},	{0,{1169,1083,1084,1085}},
{0,{1169,711,712,711}},	{0,{1169,710,711,710}},	{0,{1082,1082,1082,1169}},
{0,{1081,1081,1081,1169}},	{0,{707,707,707,1169}},	{0,{706,706,706,1169}},
{0,{705,705,705,1169}},	{0,{704,704,704,1169}},	{0,{703,703,703,1169}},
{0,{702,702,702,1169}},	{0,{701,701,701,1169}},	{0,{0,1169,0,0}},
{0,{1169,1170,1171,1170}},	{0,{1169,1169,1170,1169}},	{0,{1168,1170,1169,1168}},
{0,{1170,1167,1168,1167}},	{0,{1170,1171,1172,1166}},	{0,{1172,1165,1166,1165}},
{0,{1172,1164,1165,1164}},	{0,{1172,1168,1169,1163}},	{0,{1172,1162,1163,1162}},
{0,{1172,690,691,690}},	{0,{1172,1172,1173,1172}},	{0,{1171,1173,1172,1171}},
{0,{1173,1170,1171,1170}},	{0,{1173,1174,1175,1169}},	{0,{1175,1168,1169,1168}},
{0,{1175,1155,1156,1155}},	{0,{1175,1154,1155,1154}},	{0,{1175,1165,1166,1165}},
{0,{1175,1152,1153,1152}},	{0,{1175,1175,1175,1175}},	{0,{1175,1174,1174,1174}},
{0,{1175,1173,1173,1173}},	{0,{1175,1175,1175,1172}},	{0,{1175,1171,1171,1171}},
{0,{1175,1170,1175,1170}},	{0,{1175,1169,1174,1169}},	{0,{1144,1144,1144,1144}},
{0,{1155,1155,1155,1155}},	{0,{1173,1142,1173,1142}},	{0,{1173,1153,1173,1153}},
{0,{1173,1140,1140,1140}},	{0,{1173,1151,1151,1151}},	{0,{1138,1138,1138,1173}},
{0,{1137,1137,1137,1173}},	{0,{1136,1136,1136,1173}},	{0,{1135,1135,1135,1173}},
{0,{1134,1134,1134,1173}},	{0,{1133,1133,1133,1173}},	{0,{661,661,661,1173}},
{0,{660,660,660,1173}},	{0,{642,642,642,1173}},	{0,{641,641,641,1173}},
{0,{640,640,640,1173}},	{0,{639,639,639,1173}},	{0,{638,638,638,1173}},
{0,{637,637,637,1173}},	{0,{675,675,675,1173}},	{0,{674,674,674,1173}},
{0,{651,651,651,1173}},	{0,{650,650,650,1173}},	{0,{649,649,649,1173}},
{0,{648,648,648,1173}},	{0,{647,647,647,1173}},	{0,{1129,1129,1129,1173}},
{0,{1128,1128,1128,1173}},	{0,{1127,1127,1127,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{1112,1112,1112,1173}},	{0,{1111,1111,1111,1173}},
{0,{639,639,639,1173}},	{0,{621,621,621,1173}},	{0,{659,659,659,1173}},
{0,{636,636,636,1173}},	{0,{635,635,635,1173}},	{0,{634,634,634,1173}},
{0,{1116,1116,1116,1173}},	{0,{1115,1115,1115,1173}},	{0,{0,0,0,1173}},
{0,{1113,1113,1113,1173}},	{0,{1124,1124,1124,1173}},	{0,{1123,1123,1123,1173}},
{0,{0,0,0,1173}},	{0,{1121,1121,1121,1173}},	{0,{1120,1120,1120,1173}},
{0,{1119,1119,1119,1173}},	{0,{808,808,808,1173}},	{0,{807,807,807,1173}},
{0,{821,821,821,1173}},	{0,{820,820,820,1173}},	{0,{834,834,834,1173}},
{0,{833,833,833,1173}},	{0,{802,802,802,1173}},	{0,{816,816,816,1173}},
{0,{830,830,830,1173}},	{0,{1173,1085,1086,1085}},	{0,{1173,1084,1085,1084}},
{0,{1173,612,613,612}},	{0,{594,594,594,1173}},	{0,{0,0,0,1173}},
{0,{1173,1080,1081,1080}},	{0,{1173,1079,1080,1079}},	{0,{1173,607,608,607}},
{0,{1173,1089,1090,1089}},	{0,{1076,1076,1076,1173}},	{0,{1075,1075,1075,1173}},
{0,{586,586,586,1173}},	{0,{585,585,585,1173}},	{0,{1084,1084,1084,1173}},
{0,{600,600,600,1173}},	{0,{1082,1082,1082,1173}},	{0,{1081,1081,1081,1173}},
{0,{1080,1080,1080,1173}},	{0,{1173,0,0,0}},	{0,{754,754,1173,755}},
{0,{0,0,1173,0}},	{0,{753,753,753,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{0,0,0,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{0,0,0,1173}},	{0,{746,746,746,1173}},
{0,{745,745,745,1173}},	{0,{0,0,0,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{1173,0,0,0}},	{0,{1173,0,0,0}},
{0,{1173,0,0,0}},	{0,{0,0,1173,0}},	{0,{0,0,1173,0}},
{0,{1173,0,0,0}},	{0,{1173,0,0,0}},	{0,{1173,1173,1173,1173}},
{0,{1173,1173,1173,0}},	{0,{1173,1172,1172,0}},	{0,{1170,1170,1173,1170}},
{0,{0,0,0,1173}},	{0,{1168,1168,1168,1173}},	{0,{1167,1167,1167,1173}},
{0,{0,0,0,1173}},	{0,{0,0,0,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{0,0,0,1173}},	{0,{0,0,0,1173}},
{0,{0,0,0,1173}},	{0,{1173,717,717,718}},	{0,{1173,718,718,719}},
{0,{1173,717,717,718}},	{0,{1173,739,739,717}},	{0,{1173,0,0,0}},
{0,{1173,0,0,0}},	{0,{1172,1173,0,0}},	{0,{1173,0,0,0}},
{0,{1173,728,728,0}},	{0,{1173,644,644,644}},	{0,{1173,709,709,710}},
{0,{1173,741,741,709}},	{0,{0,1167,0,0}},	{0,{1172,0,0,0}},
{0,{1172,643,643,0}},	{0,{1172,704,704,705}},	{0,{1172,703,703,704}},
{0,{1172,0,0,0}},	{0,{1172,0,0,0}},	{0,{1172,700,700,701}},
{0,{1172,0,0,0}},	{0,{1172,1173,1172,699}},	{0,{1173,1174,1173,0}},
{0,{1172,0,1172,0}},	{0,{0,1172,0,0}},	{0,{1172,0,0,0}},
{0,{693,1168,693,694}},	{0,{711,1169,711,0}},	{0,{692,692,692,1170}},
{0,{0,0,0,1170}},	{0,{0,0,0,1170}},	{0,{0,0,0,1170}},
{0,{0,0,0,1170}},	{0,{0,0,0,1170}},	{0,{1170,0,0,0}},
{0,{1170,0,0,0}},	{0,{1170,0,0,0}},	{0,{1170,0,0,0}},
{0,{1157,1170,1157,0}},	{0,{0,0,0,1170}},	{0,{1170,696,696,0}},
{0,{1170,616,616,0}},	{0,{1170,615,615,0}},	{0,{1170,0,0,0}},
{0,{1170,0,0,0}},	{0,{1170,1134,0,0}},	{0,{1170,1133,0,0}},
{0,{0,0,0,1170}},	{0,{1170,0,0,0}},	{0,{1170,1170,1170,1171}},
{0,{1171,1171,1171,1172}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1172}},
{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1173}},
{0,{1173,1173,1173,1174}},	{0,{1174,1174,1174,1174}},	{0,{1174,1174,1174,1174}},
{0,{1174,1174,1174,1174}},	{0,{1174,1174,1174,1175}},	{0,{1175,1175,1175,1176}},
{0,{1176,1176,1176,1177}},	{0,{1177,1177,1177,1178}},	{0,{1178,1178,1178,1179}},
{0,{1179,1179,1179,1179}},	{0,{1179,1179,1179,1179}},	{0,{1179,1179,1179,1179}},
{0,{1179,1179,1179,1179}},	{0,{1179,1179,1179,1180}},	{0,{1180,1180,1180,1181}},
{0,{1181,1181,1181,1181}},	{0,{1181,1181,1181,1182}},	{0,{1182,1182,1182,1182}},
{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},
{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},
{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},
{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},	{0,{1182,1182,1182,1182}},
{0,{1182,1182,1182,1183}},	{0,{1183,1183,1183,1184}},	{0,{1184,1184,1184,1164}},
{0,{1184,1184,1184,1185}},	{0,{1185,1185,1185,1185}},	{0,{1185,1185,1185,1175}},
{0,{1185,1185,1185,1185}},	{0,{1185,1185,1185,1185}},	{0,{1185,1185,1185,1185}},
{0,{1185,1185,1185,1186}},	{0,{1186,1186,1186,1186}},	{0,{1186,1186,1186,1186}},
{0,{1186,1186,1186,1186}},	{0,{1186,1186,1186,1186}},	{0,{1186,1186,1186,1186}},
{0,{1186,1186,1186,1186}},	{0,{1186,1186,1186,1186}},	{0,{1117,1117,1117,1117}},
{0,{1116,1116,1116,1185}},	{0,{1117,1117,1117,1117}},	{0,{1119,1119,1119,1184}},
{0,{1119,1119,1119,1184}},	{0,{1120,1120,1120,1120}},	{0,{1119,1119,1119,1183}},
{0,{1120,1120,1120,1120}},	{0,{1120,1120,1120,1182}},	{0,{1121,1121,1121,1182}},
{0,{1122,1122,1122,1122}},	{0,{1121,1121,1121,1181}},	{0,{1122,1122,1122,1122}},
{0,{1123,1123,1123,1123}},	{0,{1122,1122,1122,1179}},	{0,{1123,1123,1123,1123}},
{0,{1122,1122,1122,1178}},	{0,{1123,1123,1123,1123}},	{0,{1126,1126,1126,1177}},
{0,{1127,1127,1127,1127}},	{0,{1126,1126,1126,1176}},	{0,{1127,1127,1127,1127}},
{0,{435,435,435,1175}},	{0,{1126,1126,1126,1175}},	{0,{1127,1127,1127,1127}},
{0,{1126,1126,1126,1174}},	{0,{1095,1095,1095,1174}},	{0,{1100,1100,1100,1174}},
{0,{1101,1101,1101,1174}},	{0,{411,411,411,1174}},	{0,{1104,1104,1104,1174}},
{0,{499,499,499,1174}},	{0,{1108,1108,1108,1174}},	{0,{1109,1109,1109,1174}},
{0,{1114,1114,1114,1174}},	{0,{1131,1131,1131,1131}},	{0,{1130,1130,1130,1173}},
{0,{1131,1131,1131,1131}},	{0,{1130,1130,1130,1172}},	{0,{1132,1132,1132,1132}},
{0,{1131,1131,1131,1171}},	{0,{0,0,0,1171}},	{0,{582,582,582,1171}},
{0,{0,0,0,1171}},	{0,{0,0,0,1171}},	{0,{1131,1131,1131,1171}},
{0,{596,596,596,1171}},	{0,{1131,1131,1131,1131}},	{0,{1130,1130,1130,1170}},
{0,{608,608,608,1170}},	{0,{1129,1129,1129,1170}},	{0,{1133,1133,1133,1170}},
{0,{1133,1133,1133,1170}},	{0,{1170,1068,1170,1068}},	{0,{1170,403,1170,403}},
{0,{1170,1074,1170,1074}},	{0,{1170,384,1170,384}},	{0,{1170,1085,1170,1085}},
{0,{1170,0,1170,0}},	{0,{1170,583,1170,583}},	{0,{1170,597,1170,597}},
{0,{1170,1170,1170,1171}},	{0,{1171,1171,1171,1172}},	{0,{1172,1172,1172,1173}},
{0,{1173,1173,1173,1173}},	{0,{1173,1173,1173,1173}},	{0,{1173,1172,1173,1172}},
{0,{1173,1173,1173,1173}},	{0,{1164,1164,1164,1164}},	{0,{1165,1165,1165,1165}},
{0,{1166,1166,1166,1166}},	{0,{1167,1167,1167,1170}},	{0,{1170,1159,1170,1160}},
{0,{1170,755,1170,757}},	{0,{1170,1164,1170,1164}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},	{0,{1170,1170,1170,1170}},
{0,{1170,1170,1170,1170}},	{0,{1156,1156,1156,1170}},	{0,{838,838,838,1170}},
{0,{1030,1030,1030,1170}},	{0,{1037,1037,1037,1170}},	{0,{347,347,347,1170}},
{0,{858,858,858,1170}},	{0,{1170,1150,1170,1150}},	{0,{1170,832,1170,832}},
{0,{1170,360,1170,360}},	{0,{1170,359,1170,359}},	{0,{1170,853,1170,853}},
{0,{1068,1068,1068,1170}},	{0,{0,0,0,1170}},	{0,{1047,1047,1047,1170}},
{0,{1170,1170,1170,1170}},	{0,{1170,1169,1170,1169}},	{0,{1170,1168,1170,1168}},
{0,{1170,0,0,0}},	{0,{0,0,0,1170}},	{0,{1146,1146,1146,1170}},
{0,{1170,0,1170,0}},	{0,{1170,0,1170,0}},	{0,{1170,0,1170,0}},
{0,{0,0,0,1170}},	{0,{1170,0,1115,0}},	{0,{0,0,0,1170}},
{0,{0,0,0,1170}},	{0,{0,1170,0,0}},	{0,{1170,0,0,0}},
{0,{1170,1170,1170,1171}},	{0,{1171,1172,1172,1173}},	{0,{1173,1173,1173,1174}},
{0,{1174,1172,1172,1173}},	{0,{1174,1174,1174,1174}},	{0,{1174,1173,1173,1173}},
{0,{1174,1174,1174,1174}},	{0,{1174,1173,1173,1173}},	{0,{1174,1175,1175,1175}},
{0,{1171,1175,1171,1171}},	{0,{1173,1175,1173,1173}},	{0,{1175,1175,1175,1176}},
{0,{1176,1176,1176,1177}},	{0,{1170,1170,1170,1170}},	{0,{1176,1176,1176,1176}},
{0,{1176,1176,1176,1176}},	{0,{1176,1176,1176,1177}},	{0,{1177,1177,1177,1177}},
{0,{1177,1177,1177,1178}},	{0,{1178,1178,1178,1179}},	{0,{1179,1179,1179,1179}},
{0,{1179,1149,1149,1150}},	{0,{1179,1179,1179,1179}},	{0,{1179,1178,1178,1178}},
{0,{1179,1179,1179,1179}},	{0,{1179,1178,1178,1178}},	{0,{1179,1179,1179,1179}},
{0,{1179,1179,1179,1180}},	{0,{1180,1180,1180,1180}},	{0,{1180,1180,1180,1180}},
{0,{1180,1180,1180,1180}},	{0,{1180,1180,1180,1180}},	{0,{1141,1141,1141,1142}},
{0,{1138,1138,1138,1138}},	{0,{1142,1142,1142,1142}},	{0,{1152,1152,1152,1152}},
{0,{0,0,0,1176}},	{0,{1176,1176,1176,1177}},	{0,{1177,1178,1178,1179}},
{0,{1179,1174,1174,1175}},	{0,{1179,1176,1176,1177}},	{0,{1179,1172,1172,1173}},
{0,{1174,1174,1174,1175}},	{0,{1178,1173,1173,1174}},	{0,{1178,1169,1169,1170}},
{0,{1178,1138,1138,1138}},	{0,{1178,1134,1134,1134}},	{0,{1178,1147,1147,1147}},
{0,{1178,0,0,0}},	{0,{1178,0,0,0}},	{0,{1178,1144,1144,1144}},
{0,{1178,1143,1143,1143}},	{0,{1178,0,0,0}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1178,688,688,688}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1178,691,691,691}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1178,694,694,694}},
{0,{1178,1131,1131,1131}},	{0,{1178,0,0,0}},	{0,{1149,1149,1149,1149}},
{0,{0,0,0,1177}},	{0,{1177,1177,1177,1177}},	{0,{1177,1178,1178,1178}},
{0,{1178,1175,1175,1175}},	{0,{1174,1178,1174,1174}},	{0,{1175,1178,1175,1175}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},
{0,{1165,1165,1165,1165}},	{0,{0,0,0,1177}},	{0,{1177,1177,1177,1177}},
{0,{0,0,0,1177}},	{0,{0,0,0,1177}},	{0,{1177,1177,1178,1179}},
{0,{1178,1178,1177,1178}},	{0,{1178,1177,1176,1177}},	{0,{1174,1174,1176,1176}},
{0,{1175,1175,1175,1175}},	{0,{1175,1174,1174,1174}},	{0,{1175,1175,1176,1173}},
{0,{1175,1175,1175,1172}},	{0,{1175,1174,1174,1171}},	{0,{1175,1175,1176,1170}},
{0,{1175,1175,1175,1169}},	{0,{1175,1174,1174,1168}},	{0,{1175,1175,1176,0}},
{0,{0,0,1175,0}},	{0,{1175,0,1174,0}},	{0,{1172,1172,0,0}},
{0,{1173,0,0,0}},	{0,{1173,1173,1174,0}},	{0,{1173,1173,1173,0}},
{0,{1173,1172,1172,0}},	{0,{1173,1173,1174,0}},	{0,{1173,1173,1173,0}},
{0,{1173,1172,1172,0}},	{0,{1173,1174,1175,1174}},	{0,{1172,1173,1173,1173}},
{0,{1174,1175,1175,1172}},	{0,{1175,1176,1176,1171}},	{0,{1176,0,0,0}},
{0,{1169,1169,1169,1169}},	{0,{1175,1175,1175,1176}},	{0,{1175,1175,1175,1175}},
{0,{1175,1175,1175,1148}},	{0,{1175,1175,1175,1176}},	{0,{1175,1175,1175,1175}},
{0,{1175,1175,1175,1176}},	{0,{1175,1175,1175,1175}},	{0,{1175,1175,1175,0}},
{0,{1175,1175,1175,1176}},	{0,{1175,1175,1175,1175}},	{0,{1175,1175,1175,1176}},
{0,{1175,1175,1175,1175}},	{0,{1175,1175,1175,1176}},	{0,{1175,1175,1175,1175}},
{0,{1175,1175,1175,1176}},	{0,{1176,1176,1176,1153}},	{0,{1176,1176,1176,1177}},
{0,{1177,1177,1177,1178}},	{0,{1178,1178,1178,1179}},	{0,{1179,0,1140,0}},
{0,{1178,0,0,0}},	{0,{1178,1141,1141,0}},	{0,{1178,1143,1143,0}},
{0,{1178,1178,1179,1178}},	{0,{1179,1177,1178,1177}},	{0,{1176,1176,1176,1176}},
{0,{1177,1175,1175,1175}},	{0,{1177,1177,1177,1174}},	{0,{1177,1176,1176,1173}},
{0,{1177,1177,1177,1172}},	{0,{1177,1176,1176,1171}},	{0,{1177,1177,1177,1177}},
{0,{1177,1177,1177,1177}},	{0,{1177,1177,1178,1177}},	{0,{1176,1176,1176,1176}},
{0,{1177,1177,1177,1175}},	{0,{1177,1177,1177,1174}},	{0,{1177,1138,1177,1139}},
{0,{1177,1139,1177,1112}},	{0,{1177,1139,1177,1140}},	{0,{1177,1140,1177,1141}},
{0,{1177,1141,1177,0}},	{0,{1177,1141,1177,1142}},	{0,{1177,1142,1177,1143}},
{0,{1177,1143,1177,1144}},	{0,{1177,1177,1177,1178}},	{0,{1178,1176,1178,1177}},
{0,{1178,1178,1178,1163}},	{0,{1178,1177,1178,1162}},	{0,{1178,1178,1178,1179}},
{0,{1179,1177,1179,1178}},	{0,{1179,1179,1179,1180}},	{0,{1180,1178,1180,1179}},
{0,{1180,1180,1180,1181}},	{0,{1181,1179,1181,1180}},	{0,{0,0,0,1181}},
{0,{1130,1130,1130,1181}},	{0,{1131,1131,1131,1181}},	{0,{0,0,0,1181}},
{0,{1142,1142,1142,1181}},	{0,{1088,1088,1181,1090}},	{0,{1097,1097,1181,0}},
{0,{1088,1088,1088,1181}},	{0,{0,0,0,1181}},	{0,{0,0,0,1181}},
{0,{1103,1103,1103,1181}},	{0,{0,0,0,1181}},	{0,{0,0,0,1181}},
{0,{1082,1082,1082,1181}},	{0,{1181,1111,1111,1112}},	{0,{1181,1112,1112,0}},
{0,{1181,1112,1112,1113}},	{0,{1181,1113,1113,1114}},	{0,{1181,1114,1114,1115}},
{0,{0,0,0,1181}},	{0,{1181,0,1084,0}},	{0,{1181,0,0,0}},
{0,{1180,0,1082,0}},	{0,{1180,0,1081,0}},	{0,{1179,0,0,0}},
{0,{1179,0,1079,0}},	{0,{1179,0,0,0}},	{0,{1179,0,0,0}},
{0,{1178,0,1076,0}},	{0,{1178,1102,1102,1102}},	{0,{1178,0,0,0}},
{0,{1178,1102,1102,1102}},	{0,{0,0,0,1178}},	{0,{0,0,0,1178}},
{0,{0,0,0,1178}},	{0,{0,0,0,1178}},	{0,{0,0,0,1178}},
{0,{0,0,0,1178}},	{0,{1178,0,0,0}},	{0,{1178,0,0,0}},
{0,{1178,0,0,0}},	{0,{1178,1178,1178,0}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},	{0,{1178,1178,1178,1178}},
{0,{1178,0,0,0}},	{0,{1178,0,0,0}},	{0,{0,0,0,1178}},
{0,{0,0,0,1178}},	{0,{0,0,0,1178}},	{0,{0,0,0,1178}},
{0,{0,0,0,1178}},	{0,{1072,1072,1072,1178}},	{0,{1073,1073,1073,1178}},
{0,{0,0,0,1178}},	{0,{0,0,0,1178}},	{0,{1083,1083,1083,1178}},
{0,{1082,1082,1082,1178}},	{0,{1178,0,0,0}},	{0,{1178,0,0,0}},
{0,{1178,0,0,0}},	{0,{1178,0,0,0}},	{0,{1178,1178,1178,1178}},
{0,{1178,1177,1177,1177}},	{0,{1178,1176,1176,1176}},	{0,{1178,0,0,0}},
{0,{1178,0,1178,0}},	{0,{1178,1178,1178,1178}},	{0,{1172,1172,1172,1178}},
{0,{1178,0,0,0}},	{0,{0,0,0,1178}},	{0,{0,0,0,1178}},
{0,{0,0,0,1178}},	{0,{1178,0,0,0}},	{0,{1178,0,0,0}},
{0,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},	{0,{1176,1176,1176,1178}},
{0,{0,0,0,1178}},	{0,{0,0,0,1178}},	{0,{1173,1173,1173,1178}},
{0,{1178,1178,1178,1178}},	{0,{1178,0,0,0}},	{0,{0,0,0,1178}},
{0,{1178,0,1178,0}},	{0,{1178,1178,1179,1180}},	{0,{1180,1180,1181,1182}},
{130,{1179,1179,1180,1181}},	{0,{1179,1179,1179,1180}},	{0,{1180,1180,1179,1179}},
{130,{1179,1179,1178,1178}},	{0,{1177,1177,1177,1177}},	{0,{1178,1177,1176,1176}},
{0,{1178,1179,1180,1180}},	{0,{1180,1180,1181,1181}},	{0,{1181,1181,1182,1182}},
{130,{1180,1180,1181,1181}},	{0,{1180,1180,1180,1180}},	{0,{1180,1181,1182,1182}},
{0,{1182,1177,1178,1178}},	{130,{1181,1176,1177,1177}},	{0,{1181,1181,1181,1181}},
{0,{1181,1181,1181,1181}},	{130,{1180,1180,1180,1180}},	{0,{1180,1181,1181,1181}},
{0,{1181,1181,1181,1181}},	{0,{1181,1181,1181,1181}},	{130,{1180,1180,1180,1180}},
{0,{1180,1181,1181,1181}},	{0,{1181,1181,1181,1181}},	{0,{1181,1181,1181,1181}},
{130,{1180,1180,1180,1180}},	{0,{1180,1179,1179,1179}},	{0,{1180,1181,1181,1181}},
{0,{1181,1180,1180,1180}},	{0,{1181,1176,1176,1176}},	{130,{1180,1175,1175,1175}},
{0,{1180,1177,1177,1177}},	{0,{1180,1180,1180,1172}},	{0,{1180,1180,1180,1172}},
{130,{1179,1179,1179,1171}},	{0,{1179,1180,1180,1180}},	{0,{1180,1179,1179,1179}},
{0,{1180,1178,1178,1178}},	{0,{1180,1180,1181,1182}},	{0,{1182,1182,1183,1184}},
{130,{1181,1181,1182,1183}},	{0,{1181,1181,1181,1182}},	{0,{1182,1182,1181,1181}},
{130,{1181,1181,1180,1180}},	{0,{1179,1179,1179,1179}},	{0,{1180,1179,1178,1178}},
{0,{1180,1181,1182,1182}},	{0,{1182,1182,1173,1173}},	{0,{1182,1179,1180,1180}},
{0,{1182,1175,1174,1174}},	{130,{1181,1174,1173,1173}},	{0,{1181,1182,1182,1182}},
{0,{1182,1181,1181,1181}},	{0,{1182,1180,1180,1180}},	{0,{1182,1179,1179,1179}},
{0,{1182,1178,1178,1178}},	{0,{1182,1182,1182,1183}},	{0,{1183,1183,1183,1184}},
{130,{1182,1182,1182,1183}},	{0,{1182,1182,1182,1182}},	{130,{1181,1181,1181,1181}},
{0,{1181,1180,1180,1180}},	{0,{1181,1179,1179,1179}},	{0,{1176,1176,1176,1176}},
{0,{1180,1177,1177,1177}},	{0,{1180,1176,1176,1176}},	{130,{1179,1175,1175,1175}},
{0,{1179,1174,1174,1174}},	{0,{1179,1171,1171,1171}},	{0,{1179,1172,1172,1172}},
{0,{1179,1171,1171,1171}},	{0,{1179,1170,1170,1170}},	{0,{1179,1169,1169,1169}},
{0,{1179,1179,1179,1180}},	{0,{1180,1180,1180,1181}},	{130,{1179,1179,1179,1180}},
{0,{1179,1179,1179,1179}},	{130,{1178,1178,1178,1178}},	{0,{1178,1177,1177,1177}},
{0,{1178,1176,1176,1176}},	{0,{1173,1173,1173,1173}},	{0,{1177,1174,1174,1174}},
{0,{1177,1173,1173,1173}},	{130,{1176,1172,1172,1172}},	{0,{1176,1171,1171,1171}},
{0,{1176,1176,1177,1178}},	{130,{1175,1175,1176,1177}},	{0,{1175,1175,1175,1176}},
{0,{1176,1176,1175,1175}},	{130,{1175,1175,1174,1174}},	{0,{1173,1173,1173,1173}},
{0,{1174,1173,1172,1172}},	{0,{1174,1172,1171,1171}},	{0,{1174,1171,1170,1170}},
{0,{1174,1170,1169,1169}},	{130,{1173,1169,1168,1168}},	{0,{1173,1173,1173,1173}},
{130,{1172,1172,1172,1172}},	{0,{1172,1172,1172,1172}},	{130,{1171,1171,1171,1171}},
{0,{1171,1170,1170,1170}},	{0,{1171,1169,1169,1169}},	{0,{1171,1168,1168,1168}},
{0,{1171,1167,1167,1167}},	{130,{1170,1166,1166,1166}},	{0,{1170,1170,1170,1165}},
{130,{1169,1169,1169,1164}},	{0,{1169,1169,1170,1171}},	{130,{1168,1168,1169,1170}},
{0,{1168,1168,1168,1169}},	{0,{1169,1169,1168,1168}},	{130,{1168,1168,1167,1167}},
{0,{1166,1166,1166,1166}},	{0,{1167,1166,1165,1165}},	{0,{1167,1165,1164,1164}},
{0,{1167,1164,1163,1163}},	{0,{1167,1163,1162,1162}},	{130,{1166,1162,1161,1161}},
{0,{1166,1152,1152,1152}},	{0,{1166,1151,1151,1151}},	{0,{1166,1150,1150,1150}},
{0,{1166,1149,1149,1149}},	{0,{1166,1166,1167,1168}},	{130,{1165,1165,1166,1167}},
{0,{1165,1165,1165,1166}},	{0,{1166,1166,1165,1165}},	{130,{1165,1165,1164,1164}},
{0,{1163,1163,1163,1163}},	{0,{1164,1163,1162,1162}},	{0,{1164,1162,1161,1161}},
{0,{1164,1161,1160,1160}},	{0,{1164,1160,1159,1159}},	{130,{1163,1159,1158,1158}},
{0,{1163,1163,1163,1163}},	{130,{1162,1162,1162,1162}},	{0,{1162,1161,1161,1161}},
{0,{1162,1162,1162,1162}},	{130,{1161,1161,1161,1161}},	{0,{1161,1160,1160,1160}},
{0,{1161,1159,1159,1159}},	{0,{1161,1158,1158,1158}},	{0,{1161,1157,1157,1157}},
{130,{1160,1156,1156,1156}},	{0,{1160,1155,1155,1155}},	{0,{1160,1160,1161,1162}},
{130,{1159,1159,1160,1161}},	{0,{1159,1159,1159,1160}},	{0,{1160,1160,1159,1159}},
{130,{1159,1159,1158,1158}},	{0,{1157,1157,1157,1157}},	{0,{1158,1157,1156,1156}},
{0,{1158,1156,1155,1155}},	{0,{1158,1155,1154,1154}},	{0,{1158,1154,1153,1153}},
{130,{1157,1153,1152,1152}},	{0,{1157,1157,1157,1158}},	{130,{1156,1156,1156,1157}},
{0,{1156,1156,1156,1156}},	{130,{1155,1155,1155,1155}},	{0,{1155,1154,1154,1154}},
{0,{1155,1153,1153,1153}},	{0,{1155,1152,1152,1152}},	{0,{1155,1151,1151,1151}},
{130,{1154,1150,1150,1150}},	{0,{1154,1149,1149,1149}},	{0,{1154,1148,1148,1148}},
{0,{1154,1147,1147,1147}},	{0,{1154,1146,1146,1146}},	{0,{1154,1145,1145,1145}},
{0,{1154,1154,1154,0}},	{130,{1153,1153,1153,0}},	{130,{0,0,0,0}},
{0,{1152,0,0,0}},	{0,{1152,0,0,0}},	{130,{1151,0,0,0}},
{0,{1151,0,0,0}},	{0,{1151,0,0,0}},	{0,{1151,1151,1152,1152}},
{0,{1152,1152,1153,1153}},	{130,{1151,1151,1152,1152}},	{0,{1151,1151,1151,1151}},
{0,{1151,1152,1153,1153}},	{0,{1153,1153,1154,1154}},	{0,{1154,1154,1155,1155}},
{130,{1153,1153,1154,1154}},	{0,{1153,1153,1153,1153}},	{0,{1153,1154,1155,1155}},
{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},	{130,{1154,1154,1154,1154}},
{0,{1154,1155,1155,1155}},	{0,{1155,1017,1017,1017}},	{0,{1155,1023,1023,1023}},
{0,{1155,1034,1035,1035}},	{0,{1155,1039,1039,1039}},	{0,{1155,1046,1046,1046}},
{0,{1155,1059,1059,1059}},	{0,{1155,1155,1066,1066}},	{0,{1155,1155,1071,1071}},
{0,{1155,1155,1071,1071}},	{0,{1155,1155,1078,1078}},	{0,{1155,1090,1089,1089}},
{0,{1155,1094,1094,1094}},	{0,{1155,1095,1095,1095}},	{0,{1155,1103,1102,1102}},
{0,{1155,1108,1108,1108}},	{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},
{130,{1154,1154,1154,1154}},	{0,{1154,1155,1155,1155}},	{0,{1155,1155,1155,1155}},
{0,{1155,1155,1155,1155}},	{130,{1154,1154,1154,1154}},	{0,{1154,1155,1155,1155}},
{0,{1155,1131,1131,1131}},	{0,{1155,1155,1155,1155}},	{130,{1154,1154,1154,1154}},
{0,{1147,1147,1147,1147}},	{0,{1150,1150,1150,1150}},	{0,{1126,1126,1126,1126}},
{0,{988,988,988,988}},	{0,{994,994,994,994}},	{0,{1011,1011,1011,1011}},
{0,{1148,1148,1149,1150}},	{0,{1148,1148,1148,1149}},	{0,{1149,1149,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1148,1147,1146,1146}},	{0,{1148,1148,1149,1149}},
{0,{1148,1148,1148,1148}},	{0,{1148,1148,1148,1148}},	{0,{1148,1147,1147,1147}},
{0,{1148,0,0,0}},	{0,{1148,1148,1149,1150}},	{0,{1148,1148,1148,1149}},
{0,{1149,1149,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1148,1147,1146,1146}},
{0,{1148,1148,1149,1150}},	{0,{1148,1148,1148,1149}},	{0,{1149,1149,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1148,1147,1146,1146}},	{0,{1148,1148,1148,1148}},
{0,{1148,1147,1147,1147}},	{0,{1148,1148,1148,1148}},	{0,{1148,1148,1148,1148}},
{0,{1148,1148,1148,1148}},	{0,{1148,1123,1124,1125}},	{0,{1148,1127,1128,1128}},
{0,{1148,1128,1128,1128}},	{0,{1148,0,0,0}},	{0,{1148,0,0,0}},
{0,{1148,0,0,0}},	{0,{1148,0,0,0}},	{0,{1148,0,0,0}},
{0,{1148,1067,1067,0}},	{0,{1148,1124,1125,1126}},	{0,{1148,1126,1125,1125}},
{0,{1148,1149,1149,1150}},	{0,{1148,1148,1148,1149}},	{0,{1148,1148,1148,1148}},
{0,{1148,1147,1147,1147}},	{0,{1148,1146,1146,1146}},	{0,{1148,1145,1145,1145}},
{0,{1148,1144,1144,1144}},	{0,{1148,1143,1143,1143}},	{0,{1148,1107,1106,1106}},
{0,{1148,1116,1115,1115}},	{0,{1148,1149,1150,1151}},	{0,{1148,1148,1149,1150}},
{0,{1148,1148,1148,1149}},	{0,{1149,1149,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1148,1147,1146,1146}},	{0,{1148,1148,1148,1148}},	{0,{1148,1148,1148,1148}},
{0,{1148,1147,1147,1147}},	{0,{1148,1146,1146,1146}},	{0,{1148,1149,1149,1149}},
{0,{1148,1148,1148,1148}},	{0,{1148,1147,1147,1147}},	{0,{1148,1146,1146,1146}},
{0,{1148,1149,1149,1141}},	{0,{1148,1148,1148,1140}},	{0,{1148,1149,1150,1151}},
{0,{1148,1148,1149,1150}},	{0,{1148,1148,1148,1149}},	{0,{1149,1149,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1148,1147,1146,1146}},	{0,{1148,1148,1148,1148}},
{0,{1148,1147,1147,1147}},	{0,{1148,1146,1146,1146}},	{0,{1148,1145,1145,1145}},
{0,{1148,1149,1149,1144}},	{0,{1148,1148,1148,1143}},	{0,{1148,1148,1148,1096}},
{0,{1148,1148,1148,1080}},	{0,{1148,884,1149,883}},	{0,{1149,890,1150,891}},
{0,{1150,896,1150,896}},	{0,{1150,899,1150,899}},	{0,{1150,902,1150,902}},
{0,{1150,920,1151,919}},	{0,{1151,936,1151,936}},	{0,{1151,949,1151,949}},
{0,{1151,957,1152,956}},	{0,{1152,961,1152,961}},	{0,{1152,961,1152,961}},
{0,{1152,969,1153,968}},	{0,{1153,980,1154,979}},	{0,{1154,984,1154,984}},
{0,{1154,985,1154,985}},	{0,{1154,993,1155,992}},	{0,{1155,998,1155,998}},
{0,{1155,889,889,889}},	{0,{1155,924,924,924}},	{0,{1155,937,937,937}},
{0,{1155,951,951,951}},	{0,{1155,978,978,978}},	{0,{1155,992,992,992}},
{0,{1155,1040,1155,1040}},	{0,{1155,1043,1155,1043}},	{0,{1155,1019,1155,1019}},
{0,{1155,1045,1155,1045}},	{0,{856,856,856,1155}},	{0,{864,864,864,1155}},
{0,{869,869,869,1155}},	{0,{872,872,872,1155}},	{0,{875,875,875,1155}},
{0,{874,874,874,1155}},	{0,{873,873,873,1155}},	{0,{872,872,872,1155}},
{0,{889,889,889,1155}},	{0,{888,888,888,1155}},	{0,{869,869,869,1155}},
{0,{868,868,868,1155}},	{0,{903,903,903,1155}},	{0,{902,902,902,1155}},
{0,{901,901,901,1155}},	{0,{900,900,900,1155}},	{0,{913,913,913,1155}},
{0,{912,912,912,1155}},	{0,{919,919,919,1155}},	{0,{925,925,925,1155}},
{0,{924,924,924,1155}},	{0,{931,931,931,1155}},	{0,{922,922,922,1155}},
{0,{941,941,941,1155}},	{0,{940,940,940,1155}},	{0,{945,945,945,1155}},
{0,{946,946,946,1155}},	{0,{953,953,953,1155}},	{0,{952,952,952,1155}},
{0,{900,900,900,1155}},	{0,{899,899,899,1155}},	{0,{956,956,956,1155}},
{0,{955,955,955,1155}},	{0,{0,0,0,1155}},	{0,{0,0,0,1155}},
{0,{970,970,970,1155}},	{0,{976,976,976,1155}},	{0,{980,980,980,1155}},
{0,{841,841,841,1155}},	{0,{840,840,840,1155}},	{0,{857,857,857,1155}},
{0,{838,838,838,1155}},	{0,{873,873,873,1155}},	{0,{872,872,872,1155}},
{0,{885,885,885,1155}},	{0,{898,898,898,1155}},	{0,{898,898,898,1155}},
{0,{917,917,917,1155}},	{0,{932,932,932,1155}},	{0,{931,931,931,1155}},
{0,{879,879,879,1155}},	{0,{878,878,878,1155}},	{0,{935,935,935,1155}},
{0,{934,934,934,1155}},	{0,{982,982,982,1155}},	{0,{985,985,985,1155}},
{0,{931,931,931,1155}},	{0,{990,990,990,1155}},	{0,{999,999,999,1155}},
{0,{1003,1003,1003,1155}},	{0,{0,0,0,1155}},	{0,{1004,1004,1004,1155}},
{0,{0,0,0,1155}},	{0,{0,0,0,1155}},	{0,{1019,1019,1019,1155}},
{0,{1018,1018,1018,1155}},	{0,{1017,1017,1017,1155}},	{0,{1027,1027,1027,1155}},
{0,{1030,1030,1030,1155}},	{0,{1029,1029,1029,1155}},	{0,{1028,1028,1028,1155}},
{0,{1039,1039,1039,1155}},	{0,{1041,1041,1041,1155}},	{0,{1040,1040,1040,1155}},
{0,{1039,1039,1039,1155}},	{0,{0,0,0,1155}},	{0,{0,0,0,1155}},
{0,{0,0,0,1155}},	{0,{0,0,0,1155}},	{0,{988,988,988,1155}},
{0,{972,972,972,1155}},	{0,{1155,801,801,801}},	{0,{1155,807,807,807}},
{0,{1155,824,824,824}},	{0,{1155,831,831,831}},	{0,{1155,859,859,859}},
{0,{1155,1012,1012,1012}},	{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},
{0,{1155,1155,1155,1155}},	{0,{789,789,789,1155}},	{0,{788,788,788,1155}},
{0,{787,787,787,1155}},	{0,{1151,1151,1151,1155}},	{0,{1155,788,788,788}},
{0,{1155,794,794,794}},	{0,{1155,811,811,811}},	{0,{1155,810,810,810}},
{0,{1155,817,817,817}},	{0,{1155,830,830,830}},	{0,{1155,844,844,844}},
{0,{1155,843,843,843}},	{0,{1155,870,870,870}},	{0,{1155,884,884,884}},
{0,{775,775,775,1155}},	{0,{774,774,774,1155}},	{0,{773,773,773,1155}},
{0,{808,808,808,1155}},	{0,{807,807,807,1155}},	{0,{806,806,806,1155}},
{0,{819,819,819,1155}},	{0,{833,833,833,1155}},	{0,{875,875,875,1155}},
{0,{802,802,802,1155}},	{0,{815,815,815,1155}},	{0,{857,857,857,1155}},
{0,{813,813,813,1155}},	{0,{870,870,870,1155}},	{0,{869,869,869,1155}},
{0,{868,868,868,1155}},	{0,{1155,1155,1155,1155}},	{0,{1155,1155,1155,1155}},
{130,{1154,1154,1154,1154}},	{0,{1154,1154,1154,1154}},	{0,{1154,1152,1152,1152}},
{0,{1154,1155,1155,1155}},	{0,{1155,1154,1154,1154}},	{0,{1155,1149,1149,1149}},
{130,{1154,1148,1148,1148}},	{0,{1154,1151,1151,1151}},	{0,{1154,1150,1150,1150}},
{0,{1154,1155,1155,1155}},	{0,{1155,1154,1154,1154}},	{0,{1155,1153,1153,1153}},
{0,{1155,1152,1152,1152}},	{0,{1155,1156,1156,1156}},	{0,{1156,1155,1155,1155}},
{0,{1156,1154,1154,1154}},	{0,{1156,1153,1153,1153}},	{0,{1156,790,790,790}},
{0,{1156,1156,1156,1156}},	{130,{1155,1155,1155,1155}},	{0,{1155,1154,1154,1154}},
{0,{1155,1153,1153,1153}},	{0,{1155,0,1155,0}},	{0,{1155,0,1154,0}},
{0,{1155,1134,1134,1134}},	{0,{1155,1139,1139,1139}},	{0,{1155,1143,1143,1143}},
{0,{1131,1131,1131,1131}},	{0,{1136,1136,1136,1136}},	{0,{1140,1140,1140,1140}},
{0,{1152,1152,1152,1152}},	{0,{1152,1151,1151,1151}},	{0,{1152,1153,1153,1153}},
{0,{1152,1152,1152,1152}},	{0,{1152,1151,1151,1151}},	{0,{1152,1150,1150,1150}},
{0,{1152,1149,1149,1149}},	{0,{1152,1148,1148,1148}},	{0,{1152,1153,1153,1153}},
{0,{1152,1152,1152,1152}},	{0,{1152,1151,1151,1151}},	{0,{1152,1150,1150,1150}},
{0,{1152,1149,1149,1149}},	{0,{1152,1148,1148,1148}},	{0,{1152,1153,1153,1153}},
{0,{1152,1152,1152,1152}},	{0,{1152,1151,1151,1151}},	{0,{1152,1150,1150,1150}},
{0,{1152,1106,1152,1106}},	{0,{1152,1125,1152,1125}},	{0,{1152,1104,1104,1104}},
{0,{1152,1152,1152,0}},	{0,{1103,1103,1103,1152}},	{0,{1102,1102,1102,1152}},
{0,{1101,1101,1101,1152}},	{0,{752,752,752,1152}},	{0,{751,751,751,1152}},
{0,{750,750,750,1152}},	{0,{749,749,749,1152}},	{0,{748,748,748,1152}},
{0,{762,762,762,1152}},	{0,{1113,1113,1113,1152}},	{0,{1112,1112,1112,1152}},
{0,{0,0,0,1152}},	{0,{1091,1091,1091,1152}},	{0,{742,742,742,1152}},
{0,{1089,1089,1089,1152}},	{0,{740,740,740,1152}},	{0,{739,739,739,1152}},
{0,{1113,1113,1113,1152}},	{0,{1115,1115,1115,1152}},	{0,{1114,1114,1114,1152}},
{0,{1113,1113,1113,1152}},	{0,{1118,1118,1118,1152}},	{0,{1117,1117,1117,1152}},
{0,{1116,1116,1116,1152}},	{0,{1121,1121,1121,1152}},	{0,{1120,1120,1120,1152}},
{0,{1119,1119,1119,1152}},	{0,{912,912,912,1152}},	{0,{1152,1152,1152,1152}},
{0,{1074,1074,1074,1152}},	{0,{725,725,725,1152}},	{0,{0,0,0,1152}},
{0,{1152,1074,1074,1074}},	{0,{1152,1079,1079,1079}},	{0,{1152,1083,1083,1083}},
{0,{1152,1082,1082,1082}},	{0,{1067,1067,1067,1152}},	{0,{1066,1066,1066,1152}},
{0,{717,717,717,1152}},	{0,{716,716,716,1152}},	{0,{715,715,715,1152}},
{0,{714,714,714,1152}},	{0,{713,713,713,1152}},	{0,{712,712,712,1152}},
{0,{711,711,711,1152}},	{0,{0,0,0,1152}},	{0,{1152,1152,1152,1152}},
{0,{1152,1152,1152,1152}},	{130,{1151,1151,1151,1151}},	{0,{1151,1150,1150,1150}},
{0,{1151,1152,1152,1152}},	{0,{1152,1151,1151,1151}},	{0,{1152,1147,1147,1147}},
{130,{1151,1146,1146,1146}},	{0,{1151,1148,1148,1148}},	{0,{1151,1144,1144,1144}},
{0,{1151,1143,1143,1143}},	{0,{1151,1142,1142,1142}},	{0,{1151,697,697,697}},
{0,{1151,1151,1151,1151}},	{130,{1150,1150,1150,1150}},	{0,{1150,1149,1149,1149}},
{0,{1150,1148,1148,1148}},	{0,{1150,1147,1147,1147}},	{0,{1150,1146,1146,1146}},
{130,{1149,1145,1145,1145}},	{0,{1149,1144,1144,1144}},	{0,{1149,1135,1135,1135}},
{0,{1149,1131,1131,1131}},	{0,{1149,1141,1141,1141}},	{0,{1132,1132,1132,1132}},
{0,{1148,1148,1148,1148}},	{0,{1148,1147,1147,1147}},	{0,{1148,1146,1146,1146}},
{0,{1148,1145,1145,1145}},	{0,{1148,1144,1144,1144}},	{0,{1148,1143,1143,1143}},
{0,{1148,1142,1142,1142}},	{0,{1148,1121,1148,1121}},	{0,{1148,1131,1148,1131}},
{0,{1148,1119,1119,1119}},	{0,{1148,1129,1129,1129}},	{0,{1117,1117,1117,1148}},
{0,{1116,1116,1116,1148}},	{0,{1115,1115,1115,1148}},	{0,{1114,1114,1114,1148}},
{0,{1113,1113,1113,1148}},	{0,{1112,1112,1112,1148}},	{0,{667,667,667,1148}},
{0,{666,666,666,1148}},	{0,{651,651,651,1148}},	{0,{650,650,650,1148}},
{0,{649,649,649,1148}},	{0,{648,648,648,1148}},	{0,{647,647,647,1148}},
{0,{646,646,646,1148}},	{0,{674,674,674,1148}},	{0,{673,673,673,1148}},
{0,{657,657,657,1148}},	{0,{656,656,656,1148}},	{0,{655,655,655,1148}},
{0,{654,654,654,1148}},	{0,{653,653,653,1148}},	{0,{1107,1107,1107,1148}},
{0,{1106,1106,1106,1148}},	{0,{1105,1105,1105,1148}},	{0,{0,0,0,1148}},
{0,{0,0,0,1148}},	{0,{1091,1091,1091,1148}},	{0,{1090,1090,1090,1148}},
{0,{645,645,645,1148}},	{0,{630,630,630,1148}},	{0,{658,658,658,1148}},
{0,{642,642,642,1148}},	{0,{641,641,641,1148}},	{0,{640,640,640,1148}},
{0,{1094,1094,1094,1148}},	{0,{1093,1093,1093,1148}},	{0,{0,0,0,1148}},
{0,{1091,1091,1091,1148}},	{0,{1099,1099,1099,1148}},	{0,{1098,1098,1098,1148}},
{0,{0,0,0,1148}},	{0,{1096,1096,1096,1148}},	{0,{1095,1095,1095,1148}},
{0,{1094,1094,1094,1148}},	{0,{783,783,783,1148}},	{0,{782,782,782,1148}},
{0,{796,796,796,1148}},	{0,{795,795,795,1148}},	{0,{809,809,809,1148}},
{0,{808,808,808,1148}},	{0,{777,777,777,1148}},	{0,{791,791,791,1148}},
{0,{805,805,805,1148}},	{0,{1148,1067,1067,1067}},	{0,{1148,1063,1063,1063}},
{0,{1148,618,618,618}},	{0,{603,603,603,1148}},	{0,{0,0,0,1148}},
{0,{1148,1062,1062,1062}},	{0,{1148,1058,1058,1058}},	{0,{1148,613,613,613}},
{0,{1148,1067,1067,1067}},	{0,{1055,1055,1055,1148}},	{0,{1054,1054,1054,1148}},
{0,{595,595,595,1148}},	{0,{594,594,594,1148}},	{0,{1062,1062,1062,1148}},
{0,{606,606,606,1148}},	{0,{1060,1060,1060,1148}},	{0,{1059,1059,1059,1148}},
{0,{1058,1058,1058,1148}},	{264,{0,0,0,0}},	{269,{730,730,729,729}},
{269,{0,0,0,0}},	{0,{727,727,727,1145}},	{0,{0,0,0,1145}},
{0,{0,0,0,1145}},	{0,{0,0,0,1145}},	{0,{0,0,0,1145}},
{0,{0,0,0,1145}},	{0,{0,0,0,1145}},	{0,{720,720,720,1145}},
{0,{719,719,719,1145}},	{0,{0,0,0,1145}},	{0,{0,0,0,1145}},
{0,{0,0,0,1145}},	{0,{1145,0,0,0}},	{264,{1144,0,0,0}},
{0,{1144,0,0,0}},	{0,{1144,0,0,0}},	{0,{1144,0,0,0}},
{0,{1144,0,0,0}},	{0,{1144,0,0,0}},	{0,{1144,1144,1144,1144}},
{0,{1144,1144,1144,0}},	{0,{1144,1143,1143,0}},	{269,{1141,1141,1141,1141}},
{0,{0,0,0,1143}},	{0,{1139,1139,1139,1143}},	{0,{1138,1138,1138,1143}},
{0,{0,0,0,1143}},	{0,{0,0,0,1143}},	{0,{0,0,0,1143}},
{0,{0,0,0,1143}},	{0,{0,0,0,1143}},	{0,{0,0,0,1143}},
{0,{0,0,0,1143}},	{0,{1143,692,693,694}},	{0,{1143,694,693,693}},
{0,{1143,693,692,692}},	{0,{1143,692,691,691}},	{0,{1143,0,0,0}},
{0,{1143,0,0,0}},	{0,{1143,0,0,0}},	{0,{1143,0,0,0}},
{0,{1143,0,0,0}},	{0,{1143,625,625,0}},	{0,{1143,685,684,684}},
{0,{1143,684,683,683}},	{0,{1143,0,0,0}},	{0,{1143,0,0,0}},
{0,{1143,1143,1144,680}},	{0,{1142,1142,1144,679}},	{0,{1144,1144,1144,0}},
{0,{1143,1143,1144,0}},	{0,{1144,677,676,676}},	{0,{1144,0,0,0}},
{0,{1144,675,1145,674}},	{0,{1145,674,1146,673}},	{0,{1146,0,1146,0}},
{0,{1146,0,1146,0}},	{0,{1146,0,0,0}},	{0,{669,669,669,1146}},
{0,{0,0,0,1146}},	{0,{0,0,0,1146}},	{0,{0,0,0,1146}},
{0,{0,0,0,1146}},	{0,{0,0,0,1146}},	{0,{1146,0,1147,0}},
{0,{1147,0,0,0}},	{0,{1147,0,1145,0}},	{0,{1147,0,0,0}},
{0,{1147,0,0,0}},	{0,{0,0,0,1147}},	{0,{1147,0,0,0}},
{0,{1147,0,0,0}},	{0,{1147,0,0,0}},	{0,{1147,0,0,0}},
{0,{1147,0,0,0}},	{0,{1147,0,0,0}},	{0,{1147,0,0,0}},
{0,{0,0,0,1147}},	{0,{1147,0,0,0}},	{0,{1147,1147,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1127,1127}},	{0,{1147,1147,1148,1148}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1137,1137}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1078,1078,1078,1147}},	{0,{1082,1082,1082,1147}},	{0,{1082,1082,1082,1147}},
{0,{1083,1083,1083,1147}},	{0,{1085,1085,1085,1147}},	{0,{1086,1086,1086,1147}},
{0,{1087,1087,1087,1147}},	{0,{1090,1090,1090,1147}},	{0,{1091,1091,1091,1147}},
{0,{1096,1096,1096,1147}},	{0,{1097,1097,1097,1147}},	{0,{439,439,439,1147}},
{0,{1098,1098,1098,1147}},	{0,{1099,1099,1099,1147}},	{0,{1068,1068,1068,1147}},
{0,{1073,1073,1073,1147}},	{0,{1074,1074,1074,1147}},	{0,{419,419,419,1147}},
{0,{1077,1077,1077,1147}},	{0,{482,482,482,1147}},	{0,{1081,1081,1081,1147}},
{0,{1082,1082,1082,1147}},	{0,{1087,1087,1087,1147}},	{0,{1104,1104,1104,1147}},
{0,{1105,1105,1105,1147}},	{0,{1107,1107,1107,1147}},	{0,{0,0,0,1147}},
{0,{559,559,559,1147}},	{0,{0,0,0,1147}},	{0,{0,0,0,1147}},
{0,{1107,1107,1107,1147}},	{0,{573,573,573,1147}},	{0,{1107,1107,1107,1147}},
{0,{586,586,586,1147}},	{0,{1106,1106,1106,1147}},	{0,{1110,1110,1110,1147}},
{0,{1110,1110,1110,1147}},	{0,{1045,1147,1045,1045}},	{0,{412,1147,412,412}},
{0,{1051,1147,1051,1051}},	{0,{396,1147,396,396}},	{0,{1062,1147,1062,1062}},
{0,{0,1147,0,0}},	{0,{561,1147,561,561}},	{0,{575,1147,575,575}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1146,1146,1146}},
{0,{1147,1147,1147,1147}},	{0,{1144,1144,1144,1147}},	{0,{1136,1147,1136,1136}},
{0,{740,1147,740,740}},	{0,{1141,1147,1141,1141}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1133,1133,1133,1147}},	{0,{820,820,820,1147}},
{0,{1007,1007,1007,1147}},	{0,{1014,1014,1014,1147}},	{0,{359,359,359,1147}},
{0,{836,836,836,1147}},	{0,{1127,1147,1127,1127}},	{0,{814,1147,814,814}},
{0,{1147,369,1147,369}},	{0,{1146,1103,1146,368}},	{0,{831,1146,831,831}},
{0,{1045,1045,1045,1146}},	{0,{0,0,0,1146}},	{0,{1024,1024,1024,1146}},
{0,{1146,1146,1146,1146}},	{0,{1145,1146,1145,1145}},	{0,{1146,1144,1144,1144}},
{0,{0,1146,0,0}},	{0,{0,0,0,1146}},	{0,{1123,1123,1123,1146}},
{0,{1146,0,1146,0}},	{0,{1146,0,1145,0}},	{0,{1144,1094,1144,0}},
{0,{0,0,0,1145}},	{0,{0,1145,0,0}},	{0,{0,0,0,1145}},
{0,{0,0,0,1145}},	{0,{0,1145,0,0}},	{0,{1145,0,0,0}},
{0,{1145,1145,1146,1146}},	{0,{1145,1145,1145,1145}},	{0,{1145,1145,1146,1147}},
{0,{1142,1142,1147,1143}},	{0,{1142,1142,1146,1142}},	{0,{1146,1146,1147,1147}},
{0,{1146,1146,1146,1146}},	{0,{1146,1146,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},	{0,{1147,1147,1147,1147}},
{0,{1146,1146,1147,1146}},	{0,{1144,1144,1147,1144}},	{0,{1147,1147,1147,1147}},
{0,{1146,1146,1147,1146}},	{0,{1147,1147,1148,1148}},	{0,{1147,1147,1147,1147}},
{0,{1145,1145,1147,1146}},	{0,{1145,1145,1146,1145}},	{0,{1146,1146,1146,1146}},
{0,{1145,1145,1146,1145}},	{0,{445,445,1146,444}},	{0,{443,443,1145,443}},
{0,{0,0,1145,0}},	{0,{452,452,1145,451}},	{0,{450,450,1144,450}},
{0,{455,455,1144,454}},	{0,{453,453,1143,453}},	{0,{455,455,1143,455}},
{0,{1117,1117,1119,1119}},	{0,{1142,1142,1142,1142}},	{0,{1142,1142,1142,1142}},
{0,{1142,1142,1142,1142}},	{0,{1142,1142,1142,1142}},	{0,{467,467,1142,467}},
{0,{478,478,1142,477}},	{0,{476,476,1141,476}},	{0,{483,483,1141,483}},
{0,{478,478,1141,478}},	{0,{446,446,1141,446}},	{0,{430,430,1141,430}},
{0,{0,0,0,1141}},	{0,{1141,1141,1141,1141}},	{0,{1141,1141,1141,1141}},
{0,{1141,1141,1142,1141}},	{0,{1138,1138,1142,1138}},	{0,{1138,1138,1142,1138}},
{0,{1138,1138,1138,1138}},	{0,{1141,1137,1138,1137}},	{0,{1141,1136,1136,1136}},
{0,{1141,1133,1137,1133}},	{0,{1141,1132,1132,1132}},	{0,{1141,1104,1107,1104}},
{0,{1141,1103,1103,1103}},	{0,{1141,0,1114,0}},	{0,{1141,0,0,0}},
{0,{1141,1141,1141,1141}},	{0,{1140,1140,1141,1140}},	{0,{1141,1139,1140,1139}},
{0,{1141,1138,1138,1138}},	{0,{662,662,1141,662}},	{0,{664,664,1141,664}},
{0,{1141,663,1140,663}},	{0,{1141,662,662,662}},	{0,{667,667,1141,667}},
{0,{1141,666,1140,666}},	{0,{1141,665,665,665}},	{0,{670,670,1141,670}},
{0,{1141,669,1140,669}},	{0,{1141,668,668,668}},	{0,{1141,1141,1142,1141}},
{0,{1140,1140,1140,1140}},	{0,{0,0,0,1141}},	{0,{1141,1141,1141,1141}},
{0,{1141,1141,1142,1141}},	{0,{1139,1139,1142,1139}},	{0,{1139,1139,1139,1139}},
{0,{1141,1141,1141,1141}},	{0,{1140,1140,1141,1140}},	{0,{1135,1141,1135,1135}},
{0,{1135,1141,1135,1135}},	{0,{1075,1141,1075,1075}},	{0,{1083,1141,1083,1083}},
{0,{0,1141,0,0}},	{0,{727,727,1141,727}},	{0,{726,1141,726,726}},
{0,{415,1141,415,415}},	{0,{429,1141,429,429}},	{0,{0,0,0,1141}},
{0,{1141,1141,1141,1141}},	{0,{0,0,0,1141}},	{0,{0,0,0,1141}},
{0,{1141,0,1142,0}},	{0,{1142,1143,1143,1143}},	{0,{1139,0,0,0}},
{0,{1138,0,1142,0}},	{0,{1142,1143,1144,0}},	{0,{1141,1142,1142,0}},
{0,{1140,1141,1143,0}},	{0,{1143,1144,1145,0}},	{0,{1142,1143,1143,0}},
{0,{1141,1142,1144,0}},	{0,{0,0,1132,0}},	{0,{1133,1133,1133,1133}},
{0,{0,0,1133,0}},	{0,{1134,1134,1135,0}},	{0,{1133,1133,1133,0}},
{0,{1132,1132,1134,0}},	{0,{1135,1135,1136,0}},	{0,{1134,1134,1134,0}},
{0,{1133,1133,1135,0}},	{0,{1135,0,1126,0}},	{0,{1134,0,0,0}},
{0,{1134,1123,1123,1123}},	{0,{1134,1125,1127,0}},	{0,{1133,1124,1124,0}},
{0,{1133,1127,1129,0}},	{0,{1132,1126,1126,0}},	{0,{0,0,0,1132}},
{0,{1132,1133,1134,1133}},	{0,{1131,1132,1132,1132}},	{0,{1112,0,1133,0}},
{0,{1133,1134,1135,1134}},	{0,{1132,1133,1133,1133}},	{0,{1128,1128,1129,1128}},
{0,{1127,1127,1127,1127}},	{0,{0,0,1128,0}},	{0,{1129,1129,1130,1129}},
{0,{1128,1128,1128,1128}},	{0,{1129,1129,1130,1129}},	{0,{1128,1128,1128,1128}},
{0,{1129,1129,1130,1129}},	{0,{1128,1128,1128,1128}},	{0,{1129,1119,1120,1119}},
{0,{1128,1118,1118,1118}},	{0,{1111,0,1119,0}},	{0,{1127,1120,1121,1120}},
{0,{1126,1119,1119,1119}},	{0,{1126,1120,1121,1120}},	{0,{1125,1119,1119,1119}},
{0,{1125,1120,1121,1120}},	{0,{1124,1119,1119,1119}},	{0,{1124,1124,1124,0}},
{0,{1124,1124,1124,0}},	{0,{1124,1124,1124,0}},	{0,{1124,1124,1124,0}},
{0,{1124,1124,1124,1090}},	{0,{1124,1124,1124,0}},	{0,{1124,1124,1124,0}},
{0,{1124,1124,1124,0}},	{0,{1124,1124,1124,0}},	{0,{1124,1124,1124,0}},
{0,{1124,1124,1124,1100}},	{0,{1124,1124,1124,1103}},	{0,{1124,0,0,0}},
{0,{1124,1081,1081,1081}},	{0,{1124,1083,1083,0}},	{0,{1124,1086,1086,0}},
{0,{1124,1094,1095,1094}},	{0,{1124,0,1095,0}},	{0,{1124,1096,1097,1096}},
{0,{1124,1091,1092,1091}},	{0,{1124,0,1092,0}},	{0,{1124,1093,1094,1093}},
{0,{1124,1094,1095,1094}},	{0,{1124,1095,1096,1095}},	{0,{1124,1086,1087,1086}},
{0,{1123,1085,1085,1085}},	{0,{1123,1084,1085,1084}},	{0,{1109,0,1085,0}},
{0,{1122,0,1084,0}},	{0,{1122,1085,1086,1085}},	{0,{1121,1084,1084,1084}},
{0,{1121,1083,1084,1083}},	{0,{1121,1084,1085,1084}},	{0,{1120,1083,1083,1083}},
{0,{1120,1082,1083,1082}},	{0,{1120,1083,1084,1083}},	{0,{1119,1082,1082,1082}},
{0,{1119,1081,1082,1081}},	{0,{1119,0,0,0}},	{0,{1119,1077,1077,1077}},
{0,{1119,1078,1078,1078}},	{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1118}},
{0,{1119,0,0,0}},	{0,{1119,0,0,0}},	{0,{1119,0,0,0}},
{0,{1119,0,0,0}},	{0,{1119,0,0,0}},	{0,{1056,0,1119,0}},
{0,{1119,0,0,0}},	{0,{1119,0,0,0}},	{0,{1119,0,0,0}},
{0,{1119,1119,1120,1058}},	{0,{1120,1120,1121,0}},	{0,{1121,1121,1122,1060}},
{0,{1122,1122,1123,1061}},	{0,{1123,1123,1124,1062}},	{0,{0,0,1124,0}},
{0,{1124,0,1125,0}},	{0,{0,0,1124,0}},	{0,{1124,0,1123,0}},
{0,{1124,0,1122,0}},	{0,{1124,0,1121,0}},	{0,{1124,0,1120,0}},
{0,{1124,1052,1052,1052}},	{0,{1124,0,0,0}},	{0,{1124,1052,1052,1052}},
{0,{1124,1124,1124,1124}},	{0,{0,0,1124,0}},	{0,{1124,1122,1122,1122}},
{0,{1124,0,0,0}},	{0,{1124,1120,1120,1120}},	{0,{1124,0,0,0}},
{0,{0,0,1124,0}},	{0,{1124,0,1123,0}},	{0,{1124,0,1122,0}},
{0,{1124,0,0,0}},	{0,{1124,1124,1124,1124}},	{0,{1124,1124,1124,1124}},
{0,{1124,1124,1124,1124}},	{0,{1124,1124,1124,1124}},	{0,{0,0,1124,0}},
{0,{0,0,1124,0}},	{0,{1118,1118,1124,1118}},	{0,{1118,1118,1124,1118}},
{0,{1124,1124,1124,1116}},	{0,{1124,1124,1124,1116}},	{0,{0,0,1124,0}},
{0,{0,0,1124,0}},	{0,{1124,1124,1124,1124}},	{0,{1124,1124,1124,1124}},
{0,{1122,1122,1124,1122}},	{0,{0,0,1124,0}},	{0,{1121,1121,1124,1121}},
{0,{1022,1022,1124,1022}},	{0,{1023,1023,1124,1023}},	{0,{1124,1124,1124,1124}},
{0,{1124,1124,1124,1124}},	{0,{1124,1124,1124,1122}},	{0,{1124,1124,1124,1122}},
{0,{1124,0,0,0}},	{0,{1124,0,0,0}},	{0,{1124,0,0,0}},
{98,{0,0,0,0}},	{0,{0,0,1123,0}},	{0,{1120,0,1122,0}},
{98,{0,0,1121,0}},	{0,{1121,0,0,0}},	{101,{0,0,0,0}},
{0,{1120,1120,1120,0}},	{0,{0,0,1120,0}},	{103,{0,0,0,0}},
{0,{1119,0,0,0}},	{0,{0,0,1119,0}},	{0,{0,0,1119,0}},
{0,{1119,0,0,0}},	{0,{1119,0,0,0}},	{0,{1119,1119,1119,1119}},
{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1119}},	{0,{0,1119,0,0}},
{0,{1119,0,0,0}},	{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,0}},
{0,{1119,1119,1119,1119}},	{0,{1119,1119,1119,1119}},	{0,{1119,0,0,0}},
{0,{1119,1120,1121,1122}},	{0,{1122,1123,1124,1121}},	{0,{1124,1125,1126,1127}},
{0,{1127,1117,1118,1119}},	{0,{1127,1120,1121,1118}},	{0,{1127,1122,1123,1124}},
{0,{1127,1128,1129,1123}},	{0,{1129,1130,1131,1132}},	{0,{1132,1126,1133,1121}},
{0,{1133,1125,1126,1120}},	{0,{1133,1117,1118,1119}},	{0,{1133,1134,1135,1136}},
{0,{1136,1137,1138,1135}},	{0,{1138,1132,1133,1134}},	{0,{1138,1135,1136,1133}},
{0,{1138,1139,1140,1141}},	{0,{1141,1129,1130,1131}},	{0,{1141,1132,1133,1130}},
{0,{1141,1136,1142,1138}},	{0,{1142,1143,1144,1143}},	{0,{1144,1142,1143,1142}},
{0,{1144,1141,1142,1141}},	{0,{1144,1140,1141,1140}},	{0,{1144,0,1145,0}},
{0,{1145,0,1144,0}},	{0,{1145,0,1143,0}},	{0,{1145,0,1142,0}},
{0,{1145,0,1141,0}},	{0,{1145,0,1140,0}},	{0,{1145,1146,1147,1146}},
{0,{1147,0,1148,0}},	{0,{1148,0,1137,0}},	{0,{1148,1149,1150,1149}},
{0,{1150,1148,1151,1148}},	{0,{1143,0,1134,0}},	{0,{1150,1151,1152,1151}},
{0,{1152,1150,1151,1150}},	{0,{1152,0,1141,0}},	{0,{1152,0,1130,0}},
{0,{1152,1142,1143,1142}},	{0,{1149,0,1128,0}},	{0,{1151,1152,1153,1145}},
{0,{1153,1154,1155,1144}},	{0,{1155,1156,1157,0}},	{0,{1157,1149,1150,1142}},
{0,{1157,1151,1152,1141}},	{0,{1157,1153,1154,0}},	{0,{1157,1158,1159,0}},
{0,{1159,1160,1161,1127}},	{0,{1161,1156,1162,0}},	{0,{1162,1155,1156,0}},
{0,{1162,1148,1149,0}},	{0,{1162,1153,1154,0}},	{0,{1162,1163,1164,1128}},
{0,{1164,1162,1165,1127}},	{0,{1165,0,1113,0}},	{0,{1165,0,1112,0}},
{0,{1165,0,1121,0}},	{0,{1165,1123,1124,1123}},	{0,{1161,0,1119,0}},
{0,{1164,0,1118,0}},	{0,{1164,1165,1166,1125}},	{0,{1166,1167,1168,0}},
{0,{1163,1163,1164,1123}},	{0,{1165,1165,1166,0}},	{0,{1166,1166,1167,1110}},
{0,{1167,1163,1168,0}},	{0,{1168,1169,1170,1114}},	{0,{1170,1168,1171,1113}},
{0,{1164,1160,1161,0}},	{149,{1158,1159,1160,0}},	{149,{1158,1158,1159,0}},
{149,{1161,1157,1162,0}},	{149,{1162,1163,1164,1108}},	{149,{1159,1155,1156,0}},
{0,{1165,1111,1112,1111}},	{0,{1165,0,1092,0}},	{0,{1109,1109,1110,1109}},
{0,{0,0,1090,0}},	{0,{1096,1096,1097,1096}},	{0,{1162,0,1098,0}},
{0,{1162,1100,1101,1100}},	{0,{1162,1099,1102,1099}},	{0,{1159,0,1085,0}},
{0,{1036,1036,1161,1038}},	{0,{1039,1039,1161,1037}},	{0,{1041,1041,1161,1043}},
{0,{1047,1047,1161,1042}},	{0,{1049,1049,1161,1051}},	{0,{1045,1045,1161,1040}},
{0,{1161,1161,1162,1163}},	{0,{1160,1160,1163,1162}},	{0,{1070,1070,1163,1070}},
{0,{0,0,1163,0}},	{0,{1081,1081,1163,1081}},	{0,{0,0,1163,0}},
{0,{1085,1085,1163,1085}},	{0,{1084,1084,1163,1084}},	{0,{1088,1088,1163,1088}},
{0,{1094,1094,1163,1087}},	{0,{1096,1096,1163,1086}},	{0,{1098,1098,1163,0}},
{0,{1103,1103,1163,0}},	{0,{1105,1105,1163,1072}},	{0,{1163,1101,1164,0}},
{0,{1111,1111,1164,1076}},	{0,{1110,1110,1164,1075}},	{0,{1164,0,1151,0}},
{149,{0,0,1148,0}},	{149,{0,0,1149,0}},	{149,{1071,1071,1149,1071}},
{0,{1161,1161,1162,1163}},	{0,{1163,1163,1164,1162}},	{0,{1164,1164,1165,1049}},
{0,{1165,1165,1166,1048}},	{0,{1166,1166,1167,1168}},	{0,{1168,1163,1169,1046}},
{0,{1169,1170,1171,1172}},	{0,{1172,1169,1173,1171}},	{0,{1043,1043,1044,1043}},
{0,{1172,1042,1043,1042}},	{0,{1172,1172,1173,1172}},	{0,{1173,1173,1174,1173}},
{0,{1174,1170,1175,1170}},	{0,{1175,1176,1177,1176}},	{0,{1177,1175,1178,1175}},
{0,{1171,1167,1168,1167}},	{0,{1066,1066,1067,1059}},	{0,{1068,1068,1069,1058}},
{0,{1070,1070,1071,0}},	{0,{1075,1075,1076,0}},	{0,{1077,1077,1078,1044}},
{0,{1172,1073,1079,0}},	{0,{1172,1083,1084,1048}},	{0,{1172,1082,1085,1047}},
{0,{1172,1051,1173,1051}},	{0,{1173,0,1174,0}},	{0,{1174,1038,1175,1038}},
{0,{1175,0,1176,0}},	{0,{1176,1042,1177,1042}},	{0,{1177,1041,1178,1041}},
{0,{1172,0,1169,0}},	{149,{1167,0,1168,0}},	{149,{1170,0,1171,0}},
{149,{1171,1037,1172,1037}},	{149,{1168,0,1165,0}},	{0,{1040,1040,1040,1040}},
{0,{1028,1028,1028,1028}},	{0,{1033,1033,1033,1033}},	{149,{0,0,0,0}},
{149,{1031,1031,1031,1031}},	{0,{1168,983,984,978}},	{0,{1168,975,976,977}},
{0,{1168,981,982,976}},	{0,{1168,973,974,975}},	{0,{1168,979,1169,974}},
{0,{1169,978,979,973}},	{0,{1169,970,971,972}},	{0,{1169,987,988,989}},
{0,{1169,990,991,988}},	{0,{1169,985,986,987}},	{0,{1169,988,989,986}},
{0,{1169,983,1170,985}},	{0,{1170,982,983,984}},	{0,{1170,985,986,983}},
{0,{1170,997,998,997}},	{0,{1170,996,997,996}},	{0,{1170,995,1171,995}},
{0,{1171,994,995,994}},	{0,{1171,0,1172,0}},	{0,{1172,0,1171,0}},
{0,{1172,1034,1173,0}},	{0,{1173,0,1169,0}},	{0,{1173,1056,1174,0}},
{0,{1174,0,1167,0}},	{0,{1174,959,1073,954}},	{0,{1174,986,1079,986}},
{0,{1174,0,1079,0}},	{0,{1174,1027,1087,0}},	{0,{1174,1100,1175,983}},
{0,{1175,982,1158,982}},	{0,{1175,1112,1176,1112}},	{0,{1176,1023,1162,0}},
{0,{1176,0,1177,0}},	{0,{1177,945,1178,945}},	{0,{1178,944,1177,944}},
{0,{1178,943,1176,943}},	{0,{1178,942,1175,942}},	{0,{1178,959,1179,959}},
{0,{1179,958,1178,958}},	{0,{1179,957,1177,957}},	{0,{1179,956,1176,956}},
{0,{1179,970,971,970}},	{0,{936,936,1179,936}},	{0,{926,926,926,928}},
{0,{929,929,929,927}},	{0,{931,931,931,933}},	{0,{937,937,937,932}},
{0,{1175,1175,1175,1176}},	{0,{946,946,946,948}},	{0,{949,949,949,947}},
{0,{961,961,961,961}},	{0,{1173,1173,1173,1173}},	{0,{1173,1173,1173,1173}},
{0,{989,989,989,982}},	{0,{991,991,991,981}},	{0,{993,993,993,0}},
{0,{998,998,998,0}},	{0,{1169,1169,1169,1168}},	{0,{1063,1063,1063,1065}},
{0,{1065,1065,1065,1064}},	{0,{1066,1066,1066,951}},	{0,{1067,1067,1067,950}},
{0,{1165,1165,1165,1162}},	{0,{1079,1079,1079,1079}},	{0,{1164,1164,1164,1164}},
{0,{913,913,913,913}},	{0,{930,930,930,930}},	{0,{1162,1162,0,0}},
{0,{1162,1162,1162,1163}},	{0,{1163,934,1163,936}},	{0,{1163,1163,941,941}},
{0,{1163,1163,1163,1163}},	{0,{1021,958,1021,958}},	{0,{1162,1162,0,0}},
{0,{1162,1162,1162,1162}},	{0,{1162,1162,1161,1161}},	{0,{1162,1162,1162,1162}},
{0,{1162,1162,1162,1161}},	{0,{1077,987,1077,952}},	{0,{1161,1161,1161,1159}},
{0,{995,995,995,955}},	{0,{997,997,997,0}},	{0,{1005,1003,1005,948}},
{0,{1158,1158,995,0}},	{0,{1158,1158,1158,1150}},	{0,{1158,1158,1158,1151}},
{0,{1158,1158,1157,1150}},	{0,{1013,1013,1013,1015}},	{0,{977,977,977,942}},
{0,{1156,1157,1157,1158}},	{0,{1158,1031,1031,1033}},	{0,{1158,1033,1033,1032}},
{0,{1158,1034,1034,919}},	{0,{1158,1035,1035,918}},	{0,{1158,1042,1045,1044}},
{0,{1158,916,916,916}},	{0,{1158,0,0,0}},	{0,{1158,1137,1137,1137}},
{0,{1158,932,995,932}},	{0,{1158,1159,1159,1159}},	{0,{1159,1042,1042,1042}},
{0,{1159,1160,1160,1160}},	{0,{1160,1047,1049,1047}},	{0,{1160,1135,1135,1135}},
{0,{1160,931,931,931}},	{0,{1160,1134,1134,1133}},	{0,{1160,936,936,929}},
{0,{1160,938,938,928}},	{0,{1160,940,940,0}},	{0,{1160,945,945,0}},
{0,{1160,955,1045,920}},	{0,{1160,0,0,0}},	{0,{1160,1122,1122,1122}},
{0,{1160,917,980,917}},	{0,{1160,1122,1122,1122}},	{0,{1160,1123,1123,1123}},
{0,{1160,919,919,919}},	{0,{854,854,854,854}},	{0,{1005,1005,1005,1005}},
{0,{863,1158,865,859}},	{0,{861,1158,857,858}},	{0,{879,1158,874,875}},
{0,{879,1158,877,874}},	{0,{890,1158,889,888}},	{0,{894,1158,893,0}},
{0,{897,1157,892,0}},	{0,{927,1157,929,0}},	{0,{925,1157,922,0}},
{0,{950,1157,951,0}},	{0,{0,1153,888,0}},	{0,{853,1147,967,848}},
{0,{845,1147,965,847}},	{0,{879,1149,972,879}},	{0,{0,1149,972,0}},
{0,{920,1149,980,0}},	{0,{913,1149,978,0}},	{0,{992,1150,993,875}},
{0,{989,1150,990,874}},	{0,{873,1143,874,873}},	{0,{1003,1149,1004,1003}},
{0,{914,1143,915,0}},	{0,{907,1143,908,0}},	{0,{1016,1140,1017,0}},
{0,{879,0,1146,0}},	{0,{934,934,1146,0}},	{0,{0,0,1144,0}},
{0,{0,0,1145,0}},	{0,{995,995,1145,995}},	{0,{1010,0,1145,0}},
{0,{1063,1145,1062,829}},	{0,{1067,1145,1066,846}},	{0,{1034,1130,861,860}},
{0,{826,1142,1069,826}},	{0,{1143,1144,1145,1146}},	{0,{1146,1147,1148,842}},
{0,{1148,1149,1150,856}},	{0,{1150,1151,1152,0}},	{0,{1152,1150,1151,0}},
{0,{864,1149,1150,0}},	{0,{1151,1152,1153,1154}},	{0,{1154,1151,1152,1153}},
{0,{1154,1155,1156,1152}},	{0,{890,1156,887,0}},	{0,{859,1144,854,0}},
{0,{1150,1147,1155,1149}},	{0,{1155,1156,1157,1148}},	{0,{1157,1158,1159,0}},
{0,{911,1157,1158,0}},	{0,{1158,1153,1154,1145}},	{0,{1144,1142,1150,1144}},
{0,{0,1137,847,0}},	{0,{1156,1156,1157,1128}},	{0,{1157,0,933,0}},
{0,{1140,1140,1157,1140}},	{0,{1157,1157,1158,1139}},	{0,{1158,0,930,0}},
{0,{1158,1159,1160,1161}},	{0,{949,1161,950,834}},	{0,{833,1126,834,833}},
{0,{963,1160,964,963}},	{0,{1160,1136,1137,1133}},	{0,{1160,1137,868,0}},
{0,{1160,1125,835,0}},	{0,{1160,1128,1136,1130}},	{0,{1160,1161,1162,1129}},
{0,{973,1162,974,0}},	{0,{1127,1127,1127,1127}},	{0,{0,0,0,1161}},
{0,{1161,1139,1110,1111}},	{0,{990,809,1113,807}},	{0,{995,821,1115,821}},
{0,{831,0,1117,0}},	{0,{1122,1121,1120,1121}},	{0,{1122,1138,1124,1120}},
{0,{1120,1119,1125,1119}},	{0,{1131,1131,1127,1118}},	{0,{882,882,1129,0}},
{0,{1116,1116,1122,1116}},	{0,{1152,813,906,813}},	{0,{1152,0,906,0}},
{0,{1134,1134,1136,1137}},	{0,{1139,1130,1116,1112}},	{0,{1139,846,847,0}},
{0,{1139,0,814,0}},	{0,{1139,1109,1115,1109}},	{0,{1139,1147,1141,1108}},
{0,{952,1147,953,0}},	{0,{1005,771,1147,771}},	{0,{1009,788,1147,788}},
{0,{949,1147,950,0}},	{0,{1117,1117,1117,1089}},	{0,{1120,1120,1120,1102}},
{0,{1122,1122,1122,1125}},	{0,{1144,0,1144,0}},	{0,{1144,928,1144,928}},
{0,{1144,1144,1144,1144}},	{0,{1144,1144,1144,1144}},	{0,{1109,1109,1109,1096}},
{0,{1143,1143,1143,1141}},	{0,{1143,1143,1143,1141}},	{0,{1143,1114,1114,1117}},
{0,{1143,1138,1138,1138}},	{0,{1143,1138,1138,1138}},	{0,{1143,1090,1090,1090}},
{0,{1143,1107,1107,1089}},	{0,{1143,1134,1134,1134}},	{0,{1143,1134,1134,1134}},
{0,{1143,1086,1086,1086}},	{0,{1143,1085,1085,1085}},	{0,{1143,0,0,0}},
{0,{1143,1129,1129,1129}},	{0,{1143,1129,1129,1129}},	{0,{1067,1067,1067,1067}},
{0,{1104,1104,1104,1104}},	{0,{1141,0,783,0}},	{0,{1141,0,782,0}},
{0,{1141,0,781,0}},	{0,{1141,841,842,0}},	{0,{1141,0,867,0}},
{0,{1141,997,997,997}},	{0,{1141,0,0,0}},	{0,{1141,0,0,0}},
{0,{1141,0,0,0}},	{0,{1141,0,1065,0}},	{0,{1141,0,1064,0}},
{0,{1140,0,772,0}},	{0,{1140,0,0,0}},	{0,{779,0,1140,0}},
{0,{790,0,1139,0}},	{0,{822,0,768,0}},	{0,{819,0,1137,0}},
{0,{831,827,1137,0}},	{0,{839,0,1135,0}},	{0,{0,0,1136,0}},
{0,{866,0,851,0}},	{0,{891,887,1135,887}},	{0,{906,0,1135,0}},
{0,{1135,1050,1051,0}},	{0,{1135,1049,1050,0}},	{0,{1134,1048,758,0}},
{0,{1134,1064,1065,0}},	{0,{1134,1063,1064,0}},	{0,{1134,1062,1063,0}},
{0,{1134,1044,754,0}},	{0,{1134,0,841,0}},	{0,{1134,1082,894,0}},
{0,{1134,812,1059,0}},	{0,{1134,0,750,0}},	{0,{1134,874,875,874}},
{0,{1134,0,748,0}},	{0,{1134,1086,889,0}},	{0,{1134,1082,888,0}},
{0,{1134,1081,1135,0}},	{0,{1135,0,744,0}},	{0,{1135,0,743,0}},
{0,{1135,0,742,0}},	{0,{1135,748,749,748}},	{0,{1135,0,750,0}},
{0,{1135,0,739,0}},	{0,{1135,751,752,751}},	{0,{1135,750,753,750}},
{0,{1135,0,736,0}},	{0,{1134,0,745,0}},	{0,{1134,0,744,0}},
{0,{1134,0,733,0}},	{0,{1134,745,746,745}},	{0,{1134,0,731,0}},
{0,{1133,0,740,0}},	{0,{1133,0,739,0}},	{0,{1133,0,728,0}},
{0,{1133,740,741,740}},	{0,{1133,0,726,0}},	{0,{1132,0,735,0}},
{0,{1132,0,734,0}},	{0,{1132,0,1133,0}},	{0,{1133,729,1134,729}},
{0,{1134,0,1135,0}},	{231,{0,0,0,0}},	{231,{732,732,732,732}},
{0,{1133,0,891,0}},	{0,{1133,0,890,0}},	{0,{1133,0,889,0}},
{0,{1133,1133,1133,0}},	{0,{1133,1133,1133,922}},	{0,{930,930,1133,930}},
{0,{0,0,1133,0}},	{0,{787,724,1133,724}},	{0,{928,928,1131,0}},
{0,{928,928,1132,928}},	{0,{928,928,1131,927}},	{0,{1131,924,1132,924}},
{0,{1132,0,1133,0}},	{0,{1133,718,1134,718}},	{0,{1134,922,1131,0}},
{0,{1134,922,1135,922}},	{0,{1135,922,1134,921}},	{0,{1135,918,1136,918}},
{0,{1136,0,1137,0}},	{0,{1137,712,1138,712}},	{0,{1138,917,1139,917}},
{0,{1089,962,697,0}},	{0,{1105,961,1106,0}},	{0,{1087,0,967,0}},
{0,{1136,0,0,0}},	{0,{1136,1137,1138,1139}},	{0,{1139,982,983,0}},
{0,{1084,981,982,0}},	{0,{1138,1134,1139,1136}},	{0,{1139,979,689,0}},
{0,{1134,1132,1133,1134}},	{0,{0,977,978,0}},	{0,{1132,1130,1135,1132}},
{0,{1131,1131,1136,1131}},	{0,{1136,1128,1137,1130}},	{0,{1137,1127,1136,1129}},
{0,{1128,1128,1128,1128}},	{0,{1074,0,972,0}},	{0,{0,0,971,0}},
{0,{1126,0,970,0}},	{0,{1128,0,678,0}},	{0,{1132,0,677,0}},
{0,{1132,1132,1132,1122}},	{0,{1121,1121,1132,1121}},	{0,{1016,1016,1132,1016}},
{0,{1016,1016,1132,1016}},	{0,{1132,1118,1133,1118}},	{0,{1133,1013,1134,1013}},
{0,{1134,1013,1135,1013}},	{0,{1135,1115,1136,1115}},	{0,{1136,1010,1137,1010}},
{0,{1137,1010,1138,1010}},	{0,{1138,1112,1112,1112}},	{0,{1138,0,1102,0}},
{0,{1138,0,955,0}},	{0,{1138,0,663,0}},	{0,{1138,1138,0,0}},
{0,{1060,0,1031,0}},	{0,{1063,0,1030,0}},	{0,{1063,0,659,0}},
{0,{1065,0,1028,0}},	{0,{1134,947,948,0}},	{0,{1134,946,947,0}},
{0,{1134,945,655,0}},	{0,{1134,944,945,0}},	{0,{1033,943,944,0}},
{0,{1133,942,652,0}},	{0,{1133,0,651,0}},	{0,{1133,0,941,0}},
{0,{1133,0,649,0}},	{0,{1133,0,1133,0}},	{0,{720,1133,647,0}},
{0,{0,1132,646,0}},	{0,{652,1132,653,652}},	{0,{1132,1130,654,0}},
{0,{1132,1129,643,0}},	{0,{1132,1133,656,655}},	{0,{717,1132,657,654}},
{0,{1128,1126,640,0}},	{0,{713,1125,649,0}},	{0,{713,1129,652,651}},
{0,{711,1123,637,0}},	{0,{1128,0,646,0}},	{0,{776,0,635,0}},
{0,{777,641,642,641}},	{0,{778,0,643,0}},	{0,{779,645,646,645}},
{0,{780,644,647,644}},	{0,{775,0,630,0}},	{0,{1122,1115,802,0}},
{0,{808,1114,801,0}},	{0,{818,0,800,0}},	{0,{0,1112,0,0}},
{0,{833,1119,833,833}},	{0,{841,1119,841,841}},	{0,{699,1114,699,636}},
{0,{840,1118,0,0}},	{0,{840,1118,840,840}},	{0,{840,1118,839,839}},
{0,{0,1118,619,0}},	{0,{759,883,618,0}},	{0,{0,1103,889,0}},
{0,{757,0,888,0}},	{0,{1115,1116,1117,1118}},	{0,{1118,1119,905,0}},
{0,{1119,1120,1121,1122}},	{0,{0,1117,903,0}},	{0,{1114,1112,1113,1114}},
{0,{1119,1117,1118,1119}},	{0,{1112,1119,1120,1112}},	{0,{1117,1120,1121,1117}},
{0,{1121,1122,1123,1110}},	{0,{1123,913,914,0}},	{0,{1123,1124,1125,1114}},
{0,{1125,1119,1120,1107}},	{0,{1125,910,911,0}},	{0,{1125,1121,1122,1111}},
{0,{1104,1104,1125,1104}},	{0,{1109,1109,1125,1109}},	{0,{1125,1109,1126,1102}},
{0,{1126,888,1127,0}},	{0,{1127,1109,1128,1106}},	{0,{1128,1106,1107,1099}},
{0,{1128,1107,1108,1104}},	{0,{1128,1129,1105,1097}},	{0,{734,923,593,0}},
{0,{1128,1129,1105,1101}},	{0,{1094,1094,1094,1094}},	{0,{1099,1099,1099,1128}},
{0,{1128,1129,1130,1128}},	{0,{0,1074,879,0}},	{0,{1126,1126,1129,1126}},
{0,{1129,1129,1130,1125}},	{0,{1124,1124,1130,1124}},	{0,{1130,1123,1131,1123}},
{0,{1111,0,1112,0}},	{0,{1130,1121,1124,1121}},	{0,{1130,1131,1123,1120}},
{0,{721,916,580,0}},	{0,{1118,1118,1118,1118}},	{0,{719,917,578,0}},
{0,{1080,1128,1080,1080}},	{0,{1085,1128,1085,1085}},	{0,{1084,1084,1084,1084}},
{0,{1113,1114,1113,1113}},	{0,{915,1126,915,915}},	{0,{915,1126,915,915}},
{0,{1126,1126,1126,1074}},	{0,{1126,1126,1126,1079}},	{0,{1126,1072,1072,1072}},
{0,{1126,1077,1077,1077}},	{0,{1126,1070,1070,1070}},	{0,{1126,1075,1075,1075}},
{0,{1108,1108,1108,1104}},	{0,{1125,1103,1103,1103}},	{0,{1125,1102,1102,1102}},
{0,{1125,1048,562,0}},	{0,{923,1047,561,0}},	{0,{922,0,560,0}},
{0,{1081,620,867,0}},	{0,{1122,0,0,0}},	{0,{1045,1043,927,0}},
{0,{630,1042,926,0}},	{0,{1047,0,555,0}},	{0,{699,0,924,0}},
{0,{1118,1058,844,0}},	{0,{932,1057,843,0}},	{0,{1117,858,859,0}},
{0,{1117,857,858,0}},	{0,{931,879,549,0}},	{0,{1116,0,1077,0}},
{0,{934,886,547,0}},	{0,{934,882,546,0}},	{0,{934,881,1114,0}},
{0,{1114,1114,1114,1115}},	{0,{1115,1115,1115,1115}},	{0,{1113,1113,1113,1113}},
{0,{1114,1114,1114,1114}},	{0,{1114,0,0,0}},	{0,{1111,1111,1111,1114}},
{0,{1111,1111,1111,1114}},	{0,{1114,1114,851,833}},	{0,{1114,1114,567,0}},
{0,{1114,1114,0,0}},	{0,{1114,1114,830,830}},	{0,{1114,1114,1114,1114}},
{0,{894,0,0,0}},	{284,{0,0,0,0}},	{0,{0,1112,0,0}},
{0,{1112,1112,1112,1112}},	{0,{0,1112,0,0}},	{0,{0,1112,0,0}},
{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},
{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},	{0,{1111,1111,1111,1112}},
{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},	{0,{1112,1112,1112,1112}},
{0,{1112,1112,1112,1112}},	{0,{1111,1111,1111,1112}},	{0,{1112,1112,1054,1054}},
{0,{1112,1112,1112,1112}},	{0,{538,538,1112,531}},	{0,{549,549,1112,0}},
{0,{647,548,1112,0}},	{0,{647,558,1112,523}},	{0,{0,0,1112,0}},
{0,{582,0,0,0}},	{0,{0,0,1111,0}},	{0,{580,0,1111,0}},
{0,{580,518,1111,518}},	{0,{522,522,1111,522}},	{0,{540,540,1104,0}},
{0,{550,550,1110,515}},	{0,{0,0,1106,0}},	{0,{513,513,1109,513}},
{0,{536,536,1109,0}},	{0,{529,529,1109,0}},	{0,{528,528,1109,0}},
{0,{0,0,1109,0}},	{0,{0,0,1109,0}},	{0,{1109,531,531,0}},
{0,{1109,0,0,0}},	{0,{529,758,529,0}},	{0,{522,758,522,0}},
{0,{1107,1107,1107,1108}},	{0,{1108,1108,1108,1107}},	{0,{0,753,0,0}},
{0,{1105,1105,1105,1105}},	{0,{0,0,1106,0}},	{0,{1106,1106,1106,1107}},
{0,{1107,1107,1107,1107}},	{0,{0,0,1107,0}},	{0,{1104,1104,1104,1104}},
{0,{0,1106,0,0}},	{0,{1106,1106,1106,1106}},	{0,{553,0,1106,0}},
{0,{0,1106,0,0}},	{0,{551,0,1106,0}},	{318,{0,0,0,0}},
{0,{0,0,1104,0}},	{0,{0,0,1104,0}},	{0,{0,1104,0,0}},
{0,{1104,1105,1106,1105}},	{0,{1104,1104,1106,1104}},	{0,{1103,1103,1103,1103}},
{327,{0,0,0,0}},	{327,{676,676,676,676}},	{0,{541,0,1103,0}},
{0,{0,0,1102,0}},	{0,{1102,1102,1102,1102}},	{0,{1102,0,1102,0}},
{0,{1102,1103,1104,1105}},	{0,{1105,1106,1107,1104}},	{0,{1107,438,439,440}},
{0,{1107,441,442,439}},	{0,{1107,453,454,453}},	{0,{1107,0,458,0}},
{0,{1107,1108,1109,1108}},	{0,{1107,1107,1108,1107}},	{0,{1108,1109,1110,1106}},
{0,{1110,1111,1112,1105}},	{0,{1112,490,491,0}},	{0,{1112,483,484,0}},
{0,{1112,1113,1114,1102}},	{0,{1114,511,512,0}},	{0,{1111,1111,1112,1100}},
{0,{1088,1088,1089,1090}},	{0,{1091,1091,1092,1089}},	{0,{412,412,413,407}},
{0,{404,404,405,406}},	{0,{1098,1098,1099,1095}},	{0,{1100,1100,1101,1094}},
{0,{1107,1107,1108,1109}},	{0,{1109,1109,1110,1108}},	{0,{1110,1110,1111,434}},
{0,{1111,1111,1112,433}},	{0,{1112,1112,1113,432}},	{0,{1113,1113,1114,0}},
{0,{1114,1114,1115,561}},	{0,{1115,1115,1116,1086}},	{0,{1116,1116,1117,1085}},
{0,{1117,1117,1118,1084}},	{0,{1118,1118,1119,0}},	{0,{1119,1119,1120,0}},
{0,{1081,1081,1081,1081}},	{0,{1119,395,396,390}},	{0,{1119,387,388,389}},
{0,{1119,1120,1121,1120}},	{0,{1121,405,625,405}},	{0,{1121,1122,1123,1122}},
{0,{1121,1121,1122,1121}},	{0,{1122,1123,1124,1120}},	{0,{1122,1122,1123,1119}},
{0,{1114,1114,1115,1114}},	{0,{381,381,614,381}},	{0,{1121,1121,1122,1123}},
{0,{1123,1123,1124,1115}},	{0,{1124,1124,1125,1126}},	{0,{1113,1113,1113,1113}},
{0,{1125,376,609,376}},	{0,{1054,1054,1054,1056}},	{0,{1057,1057,1057,1055}},
{0,{1066,1066,1066,1063}},	{0,{1068,1068,1068,1062}},	{0,{1121,1061,1061,1061}},
{0,{1121,1121,1121,1076}},	{0,{1121,1121,1121,1075}},	{0,{1100,1100,1100,1100}},
{0,{1120,1103,1103,1103}},	{0,{1109,1109,1109,1109}},	{0,{1113,1113,1113,1113}},
{0,{1065,1065,1065,1054}},	{0,{1117,1114,1114,1069}},	{0,{1117,1114,1114,1068}},
{0,{1117,1051,1051,1051}},	{0,{1099,1099,1099,1096}},	{0,{1116,1102,1102,1102}},
{0,{1116,1094,1094,1094}},	{0,{1116,1105,1105,1105}},	{0,{1037,1037,1037,1037}},
{0,{1061,1061,1061,1061}},	{0,{1114,1115,1116,1117}},	{0,{1117,1118,1119,1118}},
{0,{1117,1117,1118,1117}},	{0,{1118,1119,1120,1116}},	{0,{1120,1121,1122,1115}},
{0,{1120,1120,1121,1114}},	{0,{1109,1109,1110,1111}},	{0,{1115,1115,1116,1112}},
{0,{1119,1119,1120,1121}},	{0,{1121,1121,1122,1110}},	{0,{1122,1122,1123,1109}},
{0,{0,0,1123,0}},	{0,{1107,1107,1107,1107}},	{0,{1122,690,1123,662}},
{0,{1123,675,681,675}},	{0,{1123,692,678,674}},	{0,{1123,686,1124,673}},
{0,{685,685,1123,672}},	{0,{685,685,1118,657}},	{0,{688,688,674,670}},
{0,{1121,1121,1122,693}},	{0,{1122,1122,1123,668}},	{0,{1123,1123,1124,667}},
{0,{1092,1092,1092,1094}},	{0,{1098,1098,1098,1095}},	{0,{1122,1122,1122,1104}},
{0,{1122,0,1122,0}},	{0,{1122,491,1122,491}},	{0,{1120,0,1122,0}},
{0,{1122,1122,1122,1122}},	{0,{1095,1095,1095,1089}},	{0,{1121,1121,1121,1120}},
{0,{1121,1115,1115,1097}},	{0,{1121,1118,1118,1118}},	{0,{1121,1085,1085,1085}},
{0,{1082,1082,1082,1082}},	{0,{1093,1093,1093,1093}},	{346,{1005,0,356,0}},
{346,{0,0,355,0}},	{346,{1018,415,416,0}},	{346,{414,414,415,0}},
{346,{1028,1028,1029,0}},	{346,{0,0,0,0}},	{346,{411,411,411,0}},
{346,{586,0,0,0}},	{0,{1111,0,348,0}},	{0,{1111,0,347,0}},
{0,{1111,1043,1044,1043}},	{0,{1111,1042,1043,1042}},	{0,{1111,1041,1042,1041}},
{0,{1111,1040,1041,1040}},	{0,{1111,1111,1111,1039}},	{0,{767,0,767,0}},
{0,{771,559,771,559}},	{0,{1109,1036,1109,1036}},	{0,{1109,1096,1109,1096}},
{346,{1100,0,337,0}},	{346,{728,0,336,0}},	{346,{761,0,761,0}},
{0,{983,820,334,0}},	{0,{1105,1106,1107,1108}},	{0,{1028,1108,1030,1029}},
{0,{1106,1104,1105,1106}},	{0,{1027,1106,1028,1027}},	{0,{1101,1104,1103,1104}},
{0,{1103,1103,1102,1103}},	{0,{1104,1105,1106,1102}},	{0,{1104,1104,1105,1101}},
{0,{1100,1100,1100,1100}},	{0,{1099,1097,1099,1099}},	{0,{1020,1099,1020,1020}},
{0,{1100,1100,1100,1097}},	{0,{1101,1096,1096,1096}},	{0,{1101,860,862,859}},
{0,{858,859,861,858}},	{0,{1099,857,860,857}},	{0,{1099,860,1100,856}},
{0,{859,859,1099,855}},	{0,{1073,1099,1073,1073}},	{346,{963,800,314,0}},
{346,{0,799,313,0}},	{0,{1097,0,312,0}},	{346,{0,797,0,0}},
{0,{1096,1096,1039,1036}},	{0,{1096,1096,0,0}},	{0,{1096,1096,1034,1034}},
{0,{1096,1096,1096,1096}},	{346,{1095,1095,1095,1095}},	{0,{1095,1095,1095,1095}},
{0,{1095,0,0,0}},	{0,{1095,1095,842,842}},	{0,{1095,1095,1095,1095}},
{362,{0,0,0,0}},	{362,{519,519,519,519}},	{0,{0,1093,0,0}},
{346,{1093,1093,1093,0}},	{0,{1093,0,0,0}},	{0,{0,0,1093,0}},
{369,{0,0,0,0}},	{370,{0,0,0,0}},	{0,{1091,259,259,254}},
{0,{1091,251,251,253}},	{0,{1091,257,257,252}},	{0,{1091,1092,1092,1093}},
{0,{1093,248,248,250}},	{0,{1093,1090,1090,1091}},	{0,{1093,264,264,266}},
{0,{1093,267,267,265}},	{0,{1093,262,262,264}},	{0,{1093,265,265,263}},
{0,{1093,277,277,277}},	{0,{1093,276,276,276}},	{0,{1093,0,0,0}},
{0,{1093,0,0,0}},	{0,{1093,1094,1094,1094}},	{0,{1094,1093,1093,1093}},
{0,{1094,0,0,0}},	{0,{1094,1091,1091,1091}},	{0,{1094,312,312,0}},
{0,{1094,305,305,0}},	{0,{1094,1095,1095,1088}},	{0,{1095,333,333,0}},
{0,{1095,1096,1096,1086}},	{0,{1072,1072,1072,1073}},	{0,{1084,1084,1084,1084}},
{0,{1090,1090,1090,1083}},	{0,{1093,1093,1093,1094}},	{0,{1094,1094,1094,1094}},
{0,{1094,226,226,226}},	{0,{1094,225,225,225}},	{0,{1094,242,242,242}},
{0,{1094,241,241,241}},	{0,{1086,1086,1086,1076}},	{0,{1093,1086,1086,1087}},
{0,{1093,1087,1087,1087}},	{0,{1093,1073,1073,1073}},	{0,{1060,1060,1060,1060}},
{0,{1083,1083,1083,1083}},	{0,{0,0,1091,0}},	{0,{1091,0,0,0}},
{0,{1091,0,0,0}},	{0,{1091,0,0,0}},	{0,{1091,1066,1066,1066}},
{0,{1091,1065,1065,1065}},	{0,{1091,1064,1064,1064}},	{0,{1091,1092,1092,1092}},
{0,{1092,1093,1093,1093}},	{0,{1093,1090,1090,1090}},	{0,{1093,1091,1091,1091}},
{0,{1093,1088,1088,1088}},	{0,{1093,1089,1089,1089}},	{0,{1086,1086,1086,1086}},
{0,{1087,1087,1087,1087}},	{0,{0,0,1091,0}},	{0,{1054,1054,1091,1054}},
{0,{1082,1082,1091,1082}},	{0,{1083,1083,1091,1083}},	{0,{1091,1091,1091,1051}},
{0,{1050,1050,1091,1050}},	{0,{1078,1078,1091,1078}},	{0,{1079,1079,1091,1079}},
{0,{1091,1047,1092,1047}},	{0,{1092,1075,1093,1075}},	{0,{1093,1076,1094,1076}},
{0,{1094,1044,1095,1044}},	{0,{1095,1072,1096,1072}},	{0,{1096,1073,1097,1073}},
{0,{0,1097,0,0}},	{0,{1040,1097,1040,1040}},	{0,{0,1097,0,0}},
{0,{1035,709,0,0}},	{0,{1096,708,0,0}},	{0,{1096,1097,1036,1036}},
{0,{1036,1096,1035,1035}},	{0,{1036,705,0,0}},	{0,{1036,1094,1033,1033}},
{0,{1094,1095,1096,1096}},	{0,{1096,1094,1095,1095}},	{0,{1092,1094,1094,1094}},
{0,{1095,1096,1096,1093}},	{0,{1092,1092,1092,1092}},	{0,{1027,1088,1027,1027}},
{0,{1090,1089,1090,1090}},	{0,{1092,1092,1092,1089}},	{0,{1092,1088,1088,1088}},
{0,{736,0,736,0}},	{0,{1091,1091,1091,1091}},	{0,{1091,1091,1091,1091}},
{0,{1091,1091,1091,1091}},	{0,{1091,1091,1091,1091}},	{0,{1091,1091,1091,1091}},
{0,{1091,1089,1089,1089}},	{0,{1091,0,0,0}},	{0,{1091,1091,1091,1091}},
{0,{1091,1086,1086,1086}},	{0,{1091,0,0,0}},	{0,{1091,1085,1085,1085}},
{0,{1091,1087,1087,1087}},	{0,{1091,1082,1082,1082}},	{0,{1091,0,0,0}},
{0,{1091,1081,1081,1081}},	{0,{1091,1083,1083,1083}},	{0,{1091,1091,1091,1091}},
{0,{1091,1090,1090,1090}},	{0,{1091,1089,1089,1089}},	{0,{1091,1088,1088,1088}},
{0,{1091,0,0,0}},	{0,{1091,1092,1073,1073}},	{0,{1092,1093,0,0}},
{14,{1091,1092,0,0}},	{14,{0,0,0,0}},	{0,{1091,1088,1069,1069}},
{0,{1091,1089,0,0}},	{14,{1090,1088,0,0}},	{0,{0,1087,0,0}},
{14,{0,1086,0,0}},	{0,{1088,1085,0,0}},	{14,{1087,1084,0,0}},
{0,{1087,1088,1075,1075}},	{0,{1088,1087,1074,1074}},	{0,{1073,1086,1073,1073}},
{0,{1087,1085,1072,1072}},	{0,{1087,0,0,0}},	{0,{1087,0,0,0}},
{0,{1087,0,0,0}},	{0,{1087,1087,1087,1087}},	{0,{1087,1086,1086,1086}},
{0,{1087,1085,1085,1085}},	{0,{1087,1084,1084,1084}},	{0,{1087,1083,1083,1083}},
{0,{1087,1082,1082,1082}},	{0,{1087,1081,1081,1081}},	{0,{1087,1088,1080,1080}},
{0,{1088,1087,1079,1079}},	{0,{1088,1088,1088,1088}},	{0,{1088,1087,1087,1087}},
{0,{1088,1086,1086,1086}},	{0,{1088,1085,1085,1085}},	{0,{1088,1089,1090,1090}},
{0,{1089,1089,1089,1089}},	{0,{1089,1087,1088,1088}},	{0,{1089,1090,1091,1091}},
{0,{1090,1090,1090,1090}},	{0,{1090,1088,1089,1089}},	{0,{1088,1087,1088,1088}},
{0,{1089,1086,1087,1087}},	{0,{1089,1090,1076,1076}},	{0,{1090,1091,1092,1092}},
{0,{1091,1091,1091,1091}},	{0,{1091,1087,1073,1073}},	{0,{1091,1088,1089,1089}},
{0,{1071,1085,1071,1071}},	{0,{1087,1086,1087,1087}},	{0,{1089,1083,1069,1069}},
{0,{1089,1084,1085,1085}},	{0,{1089,1089,1089,1089}},	{0,{1088,1089,1088,1088}},
{0,{1089,1088,1087,1087}},	{0,{1089,1089,0,0}},	{0,{1089,1089,1053,1053}},
{0,{1089,1089,1089,1089}},	{0,{1089,1089,1089,1089}},	{0,{1089,1089,1089,1089}},
{30,{0,0,0,0}},	{31,{0,0,0,0}},	{0,{0,0,0,1087}},
{33,{0,0,0,0}},	{36,{0,0,0,1086}},	{0,{1086,1012,1012,1012}},
{0,{1086,1087,1088,1088}},	{14,{1085,1086,1087,1087}},	{0,{1086,1086,1086,1086}},
{14,{1085,1085,1085,1085}},	{0,{1085,1083,1084,1084}},	{14,{1084,1082,1083,1083}},
{0,{1082,1081,1082,1082}},	{14,{1081,1080,1081,1081}},	{0,{1082,1079,1080,1080}},
{14,{1081,1078,1079,1079}},	{0,{0,0,0,1081}},	{0,{1081,0,0,0}},
{0,{1081,1081,1081,1081}},	{0,{1081,1081,1081,1081}},	{0,{1081,1082,1082,1082}},
{0,{1081,1081,1081,1081}},	{0,{1081,1081,1081,1081}},	{0,{1081,1082,1081,1081}},
{0,{1080,1080,1080,1080}},	{0,{1081,1080,1079,1079}},	{0,{1081,1081,1081,0}},
{57,{0,0,0,0}},	{58,{1080,1079,1079,0}},	{58,{0,0,0,0}},
{58,{1077,1077,1077,0}},	{58,{1078,0,0,0}},	{0,{1078,1078,1078,1078}},
{0,{1078,1078,1078,1078}},	{0,{1078,1078,1078,1078}},	{0,{1078,1078,1078,0}},
{0,{1078,1002,0,0}},	{0,{1078,1001,0,0}},	{0,{1078,1000,0,0}},
{0,{1078,999,0,0}},	{0,{1078,1078,1078,1078}},	{0,{1078,1078,1078,1078}},
{0,{1078,1079,1076,1076}},	{0,{1079,1078,1075,1075}},	{0,{1079,1013,1005,1005}},
{0,{1079,1012,1004,1004}},	{0,{0,0,0,1079}},	{0,{0,0,0,1079}},
{0,{1079,0,0,0}},	{0,{1079,0,0,0}},	{0,{1079,1080,1080,1080}},
{0,{1079,1079,1079,1079}},	{0,{1079,1078,1078,1078}},	{0,{1077,1079,1077,1077}},
{0,{1079,1078,1076,1076}},	{0,{1079,0,0,0}},	{0,{1079,0,0,0}},
{0,{1079,992,992,992}},	{0,{1079,991,991,991}},	{0,{1079,1079,1079,1079}},
{96,{0,0,0,0}},	{96,{1078,0,0,0}},	{99,{0,0,0,0}},
{0,{1077,1077,1077,1077}},	{0,{1077,1077,1077,1077}},	{99,{1065,1065,1065,1065}},
{0,{0,0,1076,0}},	{105,{0,0,0,0}},	{105,{1062,1062,1062,1062}},
{0,{1074,0,0,0}},	{0,{1074,0,0,0}},	{0,{0,1074,0,0}},
{0,{1074,1073,0,0}},	{0,{1054,1072,0,0}},	{113,{0,0,0,0}},
{114,{0,0,0,0}},	{0,{1058,1069,0,0}},	{0,{1070,1070,1070,1070}},
{0,{1070,0,0,0}},	{0,{1070,0,0,0}},	{0,{1070,1070,1070,1070}},
{0,{1070,1071,1072,1072}},	{0,{1072,1073,1074,1074}},	{128,{1071,1072,1073,1073}},
{0,{1073,1072,1072,1072}},	{0,{1073,1074,1068,1068}},	{0,{1074,1075,1070,1070}},
{128,{1073,1074,1069,1069}},	{0,{1071,1071,1065,1065}},	{0,{1072,1072,1067,1067}},
{128,{1071,1071,1066,1066}},	{0,{1065,1065,1065,1065}},	{0,{1070,1071,1072,1072}},
{0,{1072,1073,1071,1071}},	{0,{1072,1072,1070,1070}},	{0,{1068,1068,1069,1069}},
{0,{1059,1059,1060,1060}},	{128,{1058,1058,1059,1059}},	{0,{1069,1065,1066,1066}},
{0,{1069,1056,1057,1057}},	{128,{1068,1055,1056,1056}},	{0,{1068,1055,1055,1055}},
{0,{1068,1068,1069,1069}},	{128,{1052,1069,1053,1053}},	{0,{1069,1069,1070,1070}},
{0,{1070,1070,1069,1069}},	{0,{1070,1070,1071,1071}},	{0,{1071,1071,1072,1072}},
{128,{1070,1070,1071,1071}},	{0,{1070,1070,1070,1070}},	{0,{1070,1070,1067,1067}},
{0,{1070,1070,1068,1068}},	{128,{1069,1069,1067,1067}},	{0,{1069,1069,1070,1070}},
{0,{1070,1070,1069,1069}},	{0,{1070,1071,1072,1072}},	{0,{1072,1062,1063,1063}},
{128,{1072,1073,1062,1062}},	{0,{1073,1061,1061,1061}},	{0,{1073,1073,1074,1074}},
{0,{1074,1074,1073,1073}},	{0,{1074,1061,1062,1062}},	{128,{1067,1056,1057,1057}},
{0,{1073,1073,1073,1073}},	{0,{1073,1073,1073,1073}},	{128,{1072,1072,1072,1072}},
{0,{1072,1072,1072,1072}},	{0,{1072,1072,1072,1072}},	{0,{1072,1072,1072,1072}},
{0,{1072,1072,1072,1072}},	{128,{0,0,0,0}},	{0,{1071,1071,1071,1071}},
{0,{1071,1071,1071,1071}},	{0,{1071,1071,1071,1071}},	{0,{1071,1071,1071,1071}},
{0,{1071,1071,1071,1071}},	{0,{1071,1070,1070,1070}},	{0,{1071,0,0,0}},
{128,{1070,0,0,0}},	{0,{1070,1070,1070,1070}},	{128,{0,1070,0,0}},
{0,{1070,1070,1070,1070}},	{0,{1070,1067,1067,1067}},	{0,{1070,0,0,0}},
{128,{1070,1066,0,0}},	{0,{1070,1061,1061,1061}},	{128,{1068,0,0,0}},
{0,{1069,1058,1058,1058}},	{0,{1069,0,0,0}},	{128,{1068,0,0,0}},
{0,{1068,1056,1056,1056}},	{0,{1068,1068,1068,1068}},	{0,{1068,1068,1068,1068}},
{0,{1068,1066,1066,1066}},	{0,{1068,1069,1051,1051}},	{0,{1069,1070,0,0}},
{128,{1068,1069,0,0}},	{0,{1069,1070,1048,1048}},	{0,{1070,1071,0,0}},
{128,{1069,1070,0,0}},	{0,{1067,1067,1045,1045}},	{0,{1068,1068,0,0}},
{128,{1067,1067,0,0}},	{0,{1067,1068,1043,1043}},	{0,{1068,1069,1042,1042}},
{0,{1068,1068,1041,1041}},	{0,{1065,1065,1040,1040}},	{0,{1058,1058,0,0}},
{128,{1057,1057,0,0}},	{0,{1065,1062,1037,1037}},	{0,{1065,1055,0,0}},
{128,{1064,1054,0,0}},	{0,{1064,1065,1066,1066}},	{128,{1052,1066,0,0}},
{0,{1066,1066,1067,1067}},	{0,{1067,1067,1066,1066}},	{0,{1047,1047,1029,1029}},
{0,{1066,1060,1061,1061}},	{0,{1066,1047,0,0}},	{128,{1066,1060,0,0}},
{0,{1066,1051,1026,1026}},	{128,{1064,1044,0,0}},	{0,{1056,1056,1056,1056}},
{0,{1058,1058,1058,1058}},	{0,{1063,1054,1054,1054}},	{0,{1063,1053,1053,1053}},
{0,{1063,1052,1052,1052}},	{0,{1063,1064,1064,1064}},	{0,{1064,1065,1065,1065}},
{128,{1063,1064,1064,1064}},	{0,{1061,1061,1061,1061}},	{0,{1062,1062,1062,1062}},
{128,{1061,1061,1061,1061}},	{0,{1061,1060,1060,1060}},	{128,{1060,1059,1059,1059}},
{0,{1060,1060,1060,1060}},	{128,{1057,1060,1057,1057}},	{0,{1060,1058,1058,1058}},
{0,{1060,1055,1055,1055}},	{128,{1060,1057,1054,1054}},	{0,{1059,1053,1053,1053}},
{128,{1058,1052,1052,1052}},	{0,{1058,1059,1059,1059}},	{0,{1058,1058,1058,1058}},
{0,{1058,1058,1058,1058}},	{0,{1058,1057,1057,1057}},	{0,{1008,0,0,0}},
{152,{947,948,949,949}},	{152,{952,953,948,948}},	{152,{952,952,947,947}},
{152,{945,945,946,946}},	{152,{957,944,945,945}},	{152,{943,960,944,944}},
{0,{1051,942,943,943}},	{152,{1050,958,942,942}},	{0,{1050,941,941,941}},
{152,{1048,939,940,940}},	{152,{980,980,980,980}},	{152,{0,0,0,0}},
{152,{989,0,0,0}},	{152,{0,990,0,0}},	{152,{992,989,0,0}},
{152,{991,0,0,0}},	{152,{994,0,0,0}},	{152,{1000,1001,0,0}},
{152,{1003,1004,0,0}},	{152,{1003,1003,0,0}},	{152,{998,998,0,0}},
{152,{1007,997,0,0}},	{0,{1037,996,0,0}},	{152,{995,1009,0,0}},
{152,{1013,1008,0,0}},	{152,{1012,993,0,0}},	{0,{1034,0,0,0}},
{0,{1034,1035,963,963}},	{128,{1033,1034,962,962}},	{0,{1034,961,961,961}},
{0,{1034,1035,960,960}},	{128,{1033,1034,959,959}},	{0,{1033,1033,958,958}},
{128,{1032,1032,957,957}},	{0,{1028,1028,956,956}},	{128,{1027,1027,955,955}},
{0,{1030,1026,954,954}},	{128,{1029,1025,953,953}},	{0,{1029,952,952,952}},
{0,{1029,1029,1030,1030}},	{128,{1022,1030,950,950}},	{0,{1030,1027,1028,1028}},
{0,{1030,1020,948,948}},	{128,{1030,1027,947,947}},	{0,{1030,946,946,946}},
{0,{1028,1017,945,945}},	{128,{1027,1016,944,944}},	{0,{1022,1022,1022,1022}},
{0,{1027,1027,1027,1027}},	{128,{1026,1026,1026,1026}},	{0,{1026,1025,1025,1025}},
{128,{1025,1024,1024,1024}},	{0,{1025,1025,1025,1025}},	{128,{1022,1025,1022,1022}},
{0,{1025,1023,1023,1023}},	{0,{1025,1020,1020,1020}},	{128,{1025,1022,1019,1019}},
{0,{1024,1018,1018,1018}},	{128,{1023,1017,1017,1017}},	{0,{1023,1023,996,996}},
{0,{1023,1022,995,995}},	{0,{977,957,0,0}},	{0,{1022,1023,1023,1023}},
{158,{947,0,0,0}},	{0,{1021,1021,1021,1021}},	{158,{0,0,0,0}},
{0,{1020,1019,1019,1019}},	{158,{934,0,0,0}},	{0,{1019,1019,1019,1019}},
{158,{0,934,0,0}},	{0,{1018,1017,1017,1017}},	{158,{936,932,0,0}},
{0,{1017,1013,1013,1013}},	{158,{934,0,0,0}},	{0,{1016,1016,1017,1017}},
{0,{1017,1017,1016,1016}},	{0,{1017,1017,1018,1018}},	{0,{1018,1018,1017,1017}},
{0,{1018,1018,1019,1019}},	{128,{1019,1019,1020,1020}},	{0,{1020,1020,1021,1021}},
{0,{1021,1021,1020,1020}},	{0,{1021,1021,1022,1022}},	{0,{1022,1022,1021,1021}},
{0,{1022,1022,1023,1023}},	{0,{1023,1023,1022,1022}},	{0,{1023,1023,1024,1024}},
{128,{1024,1024,1025,1025}},	{0,{1025,1025,1026,1026}},	{0,{1026,1026,1025,1025}},
{0,{1026,1026,1026,1026}},	{0,{1026,1026,1026,1026}},	{0,{1026,1026,1026,1026}},
{128,{1026,1026,1026,1026}},	{0,{1026,1026,1026,1026}},	{0,{1026,1026,1026,1026}},
{128,{1026,1026,1026,1026}},	{0,{1026,1026,1026,1026}},	{0,{1026,1026,1027,1027}},
{128,{1027,1027,1023,1023}},	{0,{1025,1025,1025,1025}},	{0,{1026,1026,1026,1026}},
{128,{1025,1025,1025,1025}},	{0,{1019,1019,1019,1019}},	{0,{1024,1024,1025,1025}},
{0,{1025,1025,1025,1025}},	{0,{1025,1025,1025,1025}},	{0,{1025,1025,1024,1024}},
{0,{1025,1025,1011,1011}},	{128,{1024,1024,1010,1010}},	{0,{1009,1009,1009,1009}},
{0,{1023,1023,1023,1023}},	{128,{1022,1022,1022,1022}},	{0,{1013,1013,1009,1009}},
{0,{1021,1021,1021,1021}},	{158,{1007,1007,1007,1007}},	{0,{975,975,975,975}},
{128,{832,832,832,832}},	{0,{976,976,976,976}},	{0,{1017,1017,1017,1017}},
{0,{981,981,981,981}},	{0,{983,983,983,983}},	{128,{850,850,850,850}},
{0,{984,984,984,984}},	{0,{1013,1013,1013,1013}},	{0,{989,989,989,989}},
{0,{1012,1012,1012,1012}},	{152,{822,822,822,822}},	{0,{1011,820,821,821}},
{0,{1011,820,820,820}},	{0,{1011,860,860,860}},	{0,{1011,0,0,0}},
{0,{1011,886,0,0}},	{0,{1011,929,857,857}},	{0,{1011,941,941,941}},
{0,{1011,1011,1011,0}},	{0,{1011,812,813,813}},	{0,{1011,812,812,812}},
{0,{844,833,834,834}},	{0,{1010,851,851,851}},	{0,{1010,0,0,0}},
{0,{1010,0,0,0}},	{0,{1010,0,0,0}},	{0,{1010,0,0,0}},
{0,{1010,0,0,0}},	{0,{1010,873,0,0}},	{0,{1010,900,900,900}},
{0,{1010,899,899,899}},	{0,{1010,898,898,898}},	{0,{1010,897,897,897}},
{0,{1010,896,896,896}},	{171,{1010,911,839,839}},	{0,{1009,910,838,838}},
{0,{1009,837,837,837}},	{171,{907,908,836,836}},	{171,{909,910,835,835}},
{171,{909,909,834,834}},	{171,{905,905,833,833}},	{171,{915,904,832,832}},
{171,{831,831,831,831}},	{171,{0,0,0,0}},	{171,{989,0,0,0}},
{171,{845,0,0,0}},	{171,{1000,912,912,912}},	{0,{999,911,911,911}},
{171,{910,910,910,910}},	{171,{998,909,909,909}},	{0,{997,908,908,908}},
{171,{913,907,907,907}},	{171,{985,0,0,0}},	{171,{840,0,0,0}},
{172,{984,847,0,0}},	{172,{845,846,0,0}},	{172,{848,849,0,0}},
{172,{848,848,0,0}},	{172,{843,843,0,0}},	{172,{862,842,0,0}},
{172,{0,0,0,0}},	{172,{972,0,0,0}},	{172,{828,0,0,0}},
{172,{972,0,0,0}},	{172,{973,0,0,0}},	{172,{828,0,0,0}},
{173,{765,765,766,766}},	{173,{770,770,765,765}},	{173,{786,786,787,787}},
{173,{788,788,786,786}},	{173,{803,803,803,803}},	{173,{0,0,0,0}},
{173,{829,829,0,0}},	{173,{832,832,0,0}},	{173,{855,855,855,855}},
{173,{870,870,798,798}},	{173,{872,872,797,797}},	{173,{881,881,881,881}},
{128,{0,0,0,970}},	{128,{850,850,850,970}},	{152,{0,0,0,968}},
{128,{877,877,877,969}},	{158,{0,0,0,966}},	{173,{749,749,749,749}},
{173,{771,771,771,771}},	{0,{966,967,968,968}},	{180,{968,751,746,746}},
{128,{968,969,970,970}},	{0,{970,744,744,744}},	{0,{970,970,971,971}},
{180,{767,767,765,765}},	{128,{970,970,971,971}},	{0,{971,971,971,971}},
{180,{780,780,780,780}},	{128,{970,970,970,970}},	{0,{970,970,970,970}},
{180,{0,0,0,0}},	{128,{969,969,969,969}},	{0,{969,969,969,969}},
{0,{969,968,968,968}},	{180,{969,0,0,0}},	{128,{969,965,965,965}},
{0,{967,0,0,0}},	{0,{968,779,779,779}},	{0,{968,805,778,778}},
{180,{968,800,0,0}},	{128,{967,799,0,0}},	{180,{798,798,0,0}},
{128,{961,0,0,0}},	{0,{965,966,966,966}},	{180,{966,819,819,819}},
{128,{966,967,967,967}},	{0,{963,963,963,963}},	{180,{816,816,816,816}},
{128,{964,964,964,964}},	{0,{961,814,814,814}},	{0,{938,721,716,716}},
{152,{937,720,715,715}},	{186,{0,0,0,0}},	{152,{950,0,0,0}},
{0,{953,785,0,0}},	{152,{952,784,0,0}},	{186,{0,0,0,957}},
{0,{957,825,750,750}},	{180,{956,824,749,749}},	{128,{955,823,748,748}},
{0,{955,747,747,747}},	{180,{821,821,746,746}},	{180,{830,830,830,830}},
{188,{944,776,0,0}},	{188,{775,775,0,0}},	{188,{0,0,0,0}},
{188,{937,0,0,0}},	{0,{949,835,835,835}},	{180,{949,950,950,950}},
{158,{934,0,0,0}},	{180,{948,948,948,948}},	{0,{0,0,948,0}},
{0,{948,840,839,839}},	{0,{948,734,948,734}},	{0,{948,0,948,0}},
{0,{942,943,943,943}},	{0,{942,942,942,942}},	{128,{914,914,914,914}},
{128,{918,918,918,918}},	{0,{944,944,944,944}},	{193,{0,0,0,0}},
{193,{811,811,811,811}},	{0,{942,0,0,0}},	{0,{942,0,0,0}},
{0,{942,779,779,779}},	{0,{942,778,778,778}},	{171,{928,796,721,721}},
{171,{937,0,0,0}},	{171,{937,0,0,0}},	{171,{914,0,0,0}},
{172,{917,749,0,0}},	{172,{933,0,0,0}},	{172,{933,0,0,0}},
{172,{910,0,0,0}},	{0,{934,935,935,935}},	{0,{934,934,934,934}},
{0,{934,933,933,933}},	{0,{934,932,932,932}},	{0,{723,934,723,723}},
{0,{731,934,731,731}},	{0,{751,934,751,751}},	{0,{762,934,762,762}},
{0,{0,934,0,0}},	{171,{866,0,0,0}},	{199,{0,0,0,0}},
{200,{0,0,0,0}},	{198,{0,0,0,0}},	{0,{930,930,930,930}},
{0,{930,708,708,708}},	{198,{920,920,920,920}},	{128,{0,0,0,929}},
{128,{752,752,752,929}},	{152,{0,0,0,927}},	{128,{779,779,779,928}},
{158,{0,0,0,925}},	{0,{927,927,927,927}},	{0,{927,927,927,927}},
{0,{927,927,927,927}},	{0,{927,927,927,927}},	{0,{927,927,927,927}},
{0,{927,927,927,927}},	{0,{927,0,927,0}},	{0,{927,927,927,927}},
{0,{927,927,927,927}},	{216,{0,0,0,0}},	{216,{767,767,767,767}},
{217,{0,0,0,0}},	{216,{924,924,924,924}},	{216,{774,774,774,774}},
{0,{773,773,773,923}},	{158,{0,0,0,923}},	{0,{923,923,923,923}},
{0,{923,923,923,923}},	{0,{923,923,923,923}},	{0,{923,921,921,921}},
{0,{923,924,924,924}},	{0,{924,924,924,924}},	{0,{924,922,922,922}},
{0,{924,917,917,917}},	{0,{920,920,920,920}},	{0,{923,924,924,924}},
{0,{924,924,924,924}},	{0,{924,922,922,922}},	{0,{921,921,921,921}},
{0,{923,924,924,924}},	{0,{924,924,924,924}},	{0,{924,922,922,922}},
{0,{921,921,921,921}},	{0,{923,724,724,724}},	{229,{0,0,0,0}},
{230,{0,0,0,0}},	{229,{667,0,0,0}},	{230,{666,0,0,0}},
{229,{719,719,719,719}},	{230,{0,666,0,0}},	{0,{917,917,917,917}},
{0,{917,917,917,917}},	{0,{917,917,917,917}},	{0,{917,917,917,917}},
{0,{917,916,916,916}},	{0,{917,918,918,918}},	{0,{917,917,917,917}},
{0,{917,916,916,916}},	{0,{917,915,915,915}},	{0,{917,918,918,918}},
{0,{918,919,919,919}},	{0,{916,916,916,916}},	{0,{917,917,917,917}},
{0,{917,914,914,914}},	{0,{917,915,915,915}},	{0,{917,912,912,912}},
{0,{917,911,911,911}},	{0,{917,912,912,912}},	{0,{917,909,909,909}},
{171,{917,918,918,918}},	{0,{916,917,917,917}},	{171,{916,916,916,916}},
{0,{915,915,915,915}},	{171,{915,914,914,914}},	{0,{914,913,913,913}},
{171,{914,912,912,912}},	{0,{913,911,911,911}},	{0,{913,913,913,913}},
{0,{913,914,914,914}},	{180,{914,0,0,0}},	{128,{914,815,815,815}},
{0,{912,0,0,0}},	{0,{910,910,910,910}},	{0,{912,913,913,913}},
{128,{909,0,0,0}},	{0,{911,911,911,911}},	{152,{907,0,0,0}},
{229,{906,0,0,0}},	{230,{905,0,0,0}},	{244,{904,0,0,0}},
{0,{0,907,0,0}},	{0,{907,879,879,879}},	{0,{907,881,881,881}},
{0,{907,880,880,880}},	{0,{907,879,879,879}},	{0,{907,882,882,882}},
{0,{907,883,883,883}},	{0,{907,880,880,880}},	{0,{907,881,881,881}},
{0,{907,878,878,878}},	{0,{907,879,879,879}},	{171,{907,886,886,886}},
{0,{906,885,885,885}},	{171,{906,884,884,884}},	{0,{905,883,883,883}},
{171,{905,882,882,882}},	{0,{904,881,881,881}},	{172,{886,0,0,0}},
{199,{879,879,879,879}},	{0,{902,842,842,842}},	{0,{902,0,0,0}},
{0,{902,0,902,0}},	{0,{902,902,902,902}},	{0,{902,902,902,902}},
{0,{902,902,902,902}},	{0,{902,902,902,902}},	{0,{902,902,902,902}},
{252,{0,0,0,0}},	{0,{901,901,901,901}},	{216,{900,900,900,900}},
{0,{0,0,0,900}},	{0,{900,900,900,900}},	{0,{900,899,899,899}},
{0,{900,900,900,900}},	{0,{900,900,900,900}},	{0,{900,898,898,898}},
{0,{900,895,895,895}},	{0,{900,640,640,640}},	{0,{900,900,900,900}},
{0,{900,892,892,892}},	{0,{900,891,891,891}},	{0,{900,890,890,890}},
{0,{900,889,889,889}},	{0,{900,888,888,888}},	{173,{887,887,887,887}},
{0,{899,900,900,900}},	{180,{900,885,885,885}},	{128,{900,758,758,758}},
{0,{900,0,0,0}},	{0,{896,896,896,896}},	{180,{881,881,881,881}},
{0,{898,894,894,894}},	{180,{898,879,879,879}},	{128,{898,752,752,752}},
{0,{898,0,0,0}},	{180,{893,0,0,0}},	{128,{892,0,0,0}},
{180,{895,0,0,0}},	{128,{894,0,0,0}},	{0,{894,895,895,895}},
{180,{895,608,608,608}},	{128,{895,756,756,756}},	{0,{892,892,892,892}},
{0,{894,891,891,891}},	{180,{894,604,604,604}},	{128,{894,752,752,752}},
{0,{894,895,895,895}},	{0,{894,894,894,894}},	{0,{894,893,893,893}},
{152,{879,0,0,0}},	{152,{882,0,0,0}},	{0,{892,893,893,893}},
{128,{891,892,892,892}},	{0,{891,891,891,891}},	{128,{890,890,890,890}},
{0,{890,889,889,889}},	{128,{889,888,888,888}},	{188,{871,0,0,0}},
{188,{874,0,0,0}},	{0,{887,628,628,628}},	{180,{887,743,743,743}},
{0,{887,626,626,626}},	{180,{887,741,741,741}},	{0,{869,0,741,0}},
{0,{886,0,0,0}},	{0,{886,846,846,846}},	{128,{886,719,719,719}},
{128,{883,0,0,0}},	{0,{885,580,580,580}},	{128,{885,728,728,728}},
{152,{880,0,0,0}},	{0,{884,873,873,873}},	{128,{883,872,872,872}},
{188,{877,0,0,0}},	{0,{882,613,613,613}},	{0,{882,728,728,728}},
{0,{850,835,835,835}},	{0,{853,834,834,834}},	{0,{880,833,833,833}},
{0,{880,832,832,832}},	{0,{855,568,568,568}},	{0,{857,567,567,567}},
{171,{846,0,0,0}},	{171,{849,0,0,0}},	{172,{844,0,0,0}},
{172,{847,0,0,0}},	{171,{864,0,0,0}},	{172,{863,0,0,0}},
{0,{826,872,826,826}},	{0,{872,0,0,0}},	{0,{872,872,872,872}},
{0,{872,872,872,872}},	{0,{872,872,872,872}},	{216,{851,851,851,851}},
{128,{0,0,0,744}},	{0,{870,529,0,0}},	{0,{870,0,0,0}},
{0,{870,0,0,0}},	{0,{870,0,0,0}},	{0,{0,870,0,0}},
{0,{867,0,704,0}},	{0,{867,0,703,0}},	{276,{690,522,0,0}},
{276,{521,521,0,0}},	{276,{0,0,0,0}},	{276,{683,0,0,0}},
{0,{864,0,0,0}},	{0,{0,864,0,0}},	{0,{0,0,0,864}},
{0,{864,865,0,0}},	{0,{0,864,0,0}},	{0,{864,0,864,0}},
{0,{864,0,0,0}},	{0,{864,0,0,0}},	{0,{0,0,864,0}},
{0,{864,0,860,0}},	{0,{863,0,864,0}},	{0,{864,0,0,0}},
{0,{864,0,0,0}},	{0,{864,0,0,0}},	{0,{864,0,0,0}},
{0,{863,0,683,0}},	{276,{828,0,0,0}},	{0,{862,0,0,0}},
{0,{862,863,864,864}},	{0,{862,862,863,863}},	{0,{494,508,0,0}},
{0,{513,507,0,0}},	{0,{860,860,860,860}},	{0,{0,0,0,860}},
{0,{0,475,0,0}},	{0,{478,474,0,0}},	{0,{858,856,856,856}},
{0,{506,501,0,0}},	{0,{474,471,0,0}},	{0,{856,856,857,857}},
{0,{857,857,856,856}},	{0,{857,857,858,858}},	{0,{854,854,854,854}},
{0,{856,856,856,856}},	{0,{856,856,857,857}},	{0,{856,856,856,856}},
{0,{856,478,857,0}},	{0,{856,0,856,0}},	{0,{856,480,855,0}},
{0,{0,0,0,622}},	{0,{855,478,0,0}},	{0,{855,0,0,0}},
{0,{855,0,0,0}},	{311,{0,0,0,0}},	{312,{0,0,0,0}},
{0,{0,0,0,853}},	{0,{0,0,853,0}},	{0,{0,0,853,0}},
{0,{0,0,0,853}},	{0,{0,0,0,853}},	{321,{0,0,0,0}},
{0,{852,500,500,500}},	{0,{852,0,0,0}},	{0,{852,446,0,0}},
{0,{850,445,0,0}},	{0,{0,0,0,851}},	{0,{851,0,0,0}},
{0,{0,0,0,851}},	{0,{851,851,852,853}},	{0,{385,385,853,386}},
{128,{384,384,852,385}},	{0,{384,384,851,384}},	{0,{851,851,848,849}},
{0,{387,387,849,382}},	{128,{386,386,848,381}},	{0,{849,849,850,850}},
{0,{850,850,849,849}},	{0,{850,850,850,850}},	{0,{850,850,850,850}},
{0,{849,849,850,849}},	{0,{0,0,850,0}},	{128,{0,0,849,0}},
{0,{849,849,847,846}},	{0,{441,441,847,0}},	{128,{440,440,846,0}},
{0,{847,847,844,843}},	{0,{442,442,844,0}},	{128,{441,441,843,0}},
{0,{843,843,840,840}},	{0,{843,843,839,839}},	{0,{843,843,844,843}},
{0,{461,461,844,461}},	{128,{460,460,843,460}},	{0,{840,840,840,840}},
{0,{842,842,843,844}},	{128,{841,841,842,843}},	{0,{400,400,843,400}},
{0,{843,843,840,841}},	{128,{842,842,839,840}},	{0,{837,837,839,839}},
{128,{836,836,838,838}},	{0,{839,839,837,837}},	{128,{838,838,836,836}},
{0,{835,835,835,835}},	{128,{834,834,834,834}},	{0,{836,836,836,836}},
{128,{835,835,835,835}},	{0,{835,835,835,835}},	{128,{834,834,834,834}},
{0,{832,832,834,832}},	{128,{831,831,833,831}},	{0,{833,833,832,830}},
{128,{832,832,831,829}},	{0,{832,832,830,828}},	{128,{831,831,829,827}},
{0,{829,829,826,826}},	{128,{828,828,825,825}},	{0,{828,828,824,824}},
{128,{827,827,823,823}},	{0,{800,800,802,802}},	{0,{803,803,801,801}},
{0,{825,825,825,800}},	{0,{825,825,825,333}},	{128,{824,824,824,332}},
{0,{801,801,801,801}},	{0,{823,823,823,803}},	{0,{823,823,823,0}},
{128,{822,822,822,0}},	{0,{822,822,822,805}},	{0,{822,822,822,423}},
{128,{821,821,821,422}},	{0,{821,821,821,807}},	{128,{820,820,820,806}},
{0,{820,820,820,363}},	{0,{820,820,820,807}},	{128,{819,819,819,806}},
{0,{819,819,819,806}},	{128,{818,818,818,805}},	{0,{818,818,818,443}},
{0,{782,782,782,782}},	{0,{817,0,790,0}},	{0,{427,427,798,355}},
{0,{429,429,797,354}},	{0,{815,806,806,0}},	{171,{424,424,795,352}},
{171,{426,426,794,351}},	{171,{0,0,784,0}},	{171,{806,806,806,349}},
{171,{801,801,801,0}},	{171,{807,807,807,432}},	{0,{809,773,770,771}},
{0,{526,309,771,304}},	{128,{525,308,770,303}},	{0,{528,302,769,302}},
{0,{806,774,775,774}},	{0,{537,0,775,0}},	{128,{536,0,774,0}},
{0,{804,775,772,771}},	{0,{538,370,772,0}},	{128,{537,369,771,0}},
{0,{802,773,774,773}},	{0,{538,391,774,391}},	{128,{537,390,773,390}},
{0,{800,777,774,775}},	{128,{799,776,773,774}},	{0,{539,331,774,331}},
{0,{798,775,777,775}},	{128,{797,774,776,774}},	{0,{797,777,775,773}},
{128,{796,776,774,772}},	{341,{0,0,0,0}},	{0,{788,752,750,750}},
{128,{505,288,283,283}},	{0,{787,755,755,755}},	{0,{787,758,754,754}},
{0,{787,758,758,758}},	{128,{523,376,376,376}},	{0,{786,763,761,761}},
{128,{785,762,760,760}},	{0,{785,762,762,762}},	{128,{784,761,761,761}},
{0,{784,764,760,760}},	{128,{783,763,759,759}},	{0,{520,388,756,313}},
{342,{0,0,0,0}},	{342,{396,396,396,396}},	{344,{0,0,0,0}},
{0,{779,0,0,0}},	{0,{779,364,364,364}},	{171,{514,382,750,307}},
{171,{776,0,0,0}},	{171,{501,0,739,0}},	{0,{776,776,776,776}},
{0,{776,776,776,776}},	{0,{776,776,776,774}},	{0,{776,776,776,774}},
{0,{776,776,776,548}},	{0,{776,776,776,548}},	{0,{776,776,776,566}},
{0,{776,776,776,572}},	{0,{776,571,571,571}},	{0,{776,747,747,727}},
{0,{776,777,777,613}},	{128,{777,746,746,0}},	{0,{776,745,745,0}},
{0,{774,774,774,610}},	{0,{775,744,744,727}},	{0,{775,744,744,345}},
{128,{774,743,743,344}},	{171,{771,740,740,0}},	{0,{773,718,718,718}},
{0,{773,722,722,722}},	{128,{645,340,340,340}},	{0,{772,602,602,602}},
{0,{772,772,772,772}},	{0,{772,313,715,0}},	{0,{772,0,0,0}},
{0,{772,0,713,0}},	{0,{772,772,772,772}},	{0,{772,771,771,771}},
{0,{772,772,772,772}},	{0,{772,0,0,0}},	{0,{772,727,727,0}},
{364,{0,0,0,0}},	{0,{0,0,0,771}},	{366,{0,0,0,0}},
{368,{0,0,0,0}},	{0,{769,769,770,770}},	{0,{770,770,769,769}},
{0,{770,770,771,771}},	{0,{771,772,770,770}},	{0,{772,229,224,224}},
{0,{772,223,223,223}},	{0,{769,769,767,767}},	{0,{771,764,763,763}},
{0,{771,771,772,772}},	{0,{772,772,771,771}},	{0,{772,772,773,773}},
{0,{773,773,772,772}},	{0,{773,773,773,773}},	{0,{773,773,773,773}},
{0,{773,773,773,773}},	{0,{773,773,773,773}},	{0,{773,772,772,772}},
{0,{773,0,0,0}},	{0,{773,769,769,769}},	{0,{773,773,773,773}},
{0,{773,772,772,772}},	{0,{773,773,766,766}},	{0,{773,773,765,765}},
{0,{773,772,764,764}},	{0,{773,277,0,0}},	{0,{773,773,773,773}},
{0,{773,772,772,772}},	{0,{773,298,298,298}},	{0,{773,316,241,241}},
{0,{773,240,240,240}},	{0,{773,324,324,324}},	{0,{739,739,739,739}},
{0,{741,741,741,741}},	{0,{747,747,747,747}},	{0,{749,749,749,749}},
{171,{766,309,234,234}},	{171,{767,318,318,318}},	{171,{753,0,0,0}},
{0,{766,766,766,766}},	{0,{766,766,766,766}},	{0,{766,766,766,766}},
{0,{766,766,766,766}},	{0,{766,765,765,765}},	{0,{766,762,762,762}},
{0,{766,762,762,762}},	{0,{766,762,762,762}},	{0,{766,0,0,0}},
{0,{760,760,766,760}},	{0,{0,0,766,0}},	{0,{766,756,756,756}},
{0,{755,755,766,755}},	{0,{766,736,736,736}},	{0,{735,735,766,735}},
{0,{766,766,766,766}},	{0,{766,765,765,765}},	{0,{766,764,764,764}},
{0,{763,763,766,763}},	{0,{766,480,480,480}},	{0,{766,482,482,482}},
{0,{766,481,481,481}},	{0,{480,480,766,480}},	{0,{766,483,483,483}},
{0,{766,484,484,484}},	{0,{766,481,481,481}},	{0,{766,482,482,482}},
{0,{479,479,766,479}},	{0,{480,480,766,480}},	{171,{766,487,487,487}},
{0,{765,486,486,486}},	{171,{765,485,485,485}},	{0,{764,484,484,484}},
{171,{483,483,764,483}},	{0,{482,482,763,482}},	{0,{763,763,763,763}},
{0,{763,762,762,762}},	{381,{0,0,0,0}},	{0,{762,762,762,762}},
{0,{762,761,761,761}},	{0,{762,510,510,510}},	{0,{762,708,708,708}},
{0,{762,508,508,508}},	{0,{762,0,0,0}},	{0,{762,756,756,756}},
{0,{762,715,715,715}},	{0,{762,241,241,241}},	{171,{758,0,0,0}},
{0,{761,761,761,761}},	{0,{761,0,0,0}},	{0,{761,0,0,0}},
{0,{761,0,0,0}},	{0,{761,761,761,761}},	{0,{761,762,762,762}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,762,762,762}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,762,762,762}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{0,0,0,761}},
{0,{761,762,762,762}},	{0,{762,763,763,763}},	{0,{760,760,760,760}},
{0,{761,761,761,761}},	{0,{761,762,762,762}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,762,762,762}},	{0,{762,763,763,763}},
{0,{763,764,764,764}},	{0,{764,765,765,765}},	{0,{758,758,758,758}},
{0,{759,759,759,759}},	{0,{760,760,760,760}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{27,{0,0,0,0}},	{27,{725,725,725,725}},
{0,{759,760,760,760}},	{0,{759,759,759,759}},	{0,{759,760,760,760}},
{0,{760,760,760,760}},	{0,{0,760,0,0}},	{0,{760,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{0,0,0,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{0,{761,761,761,761}},	{0,{761,761,761,761}},	{88,{761,761,761,761}},
{88,{761,761,761,761}},	{88,{761,761,761,761}},	{0,{761,761,761,761}},
{88,{761,761,761,761}},	{0,{761,761,761,761}},	{0,{761,761,761,761}},
{88,{761,761,761,761}},	{88,{0,0,0,0}},	{88,{760,760,760,760}},
{88,{673,673,673,673}},	{0,{759,759,759,759}},	{0,{759,759,759,759}},
{0,{759,759,759,759}},	{0,{759,759,759,759}},	{0,{759,759,759,759}},
{0,{759,759,0,0}},	{0,{759,759,759,759}},	{0,{759,759,759,759}},
{0,{759,759,759,759}},	{0,{759,759,759,759}},	{0,{759,759,759,759}},
{88,{759,759,759,759}},	{0,{759,759,759,759}},	{0,{759,760,761,762}},
{0,{762,763,764,765}},	{0,{765,766,767,0}},	{0,{767,767,758,759}},
{0,{767,767,761,762}},	{0,{767,767,764,0}},	{0,{767,767,768,769}},
{0,{769,770,771,768}},	{0,{771,772,773,0}},	{0,{773,773,769,766}},
{0,{773,773,771,0}},	{0,{773,749,750,751}},	{0,{773,752,753,754}},
{0,{773,755,756,0}},	{0,{773,763,764,761}},	{0,{773,765,766,0}},
{0,{773,774,775,776}},	{0,{776,776,774,775}},	{0,{776,776,777,778}},
{0,{778,779,780,747}},	{0,{780,781,782,0}},	{0,{782,782,783,784}},
{0,{784,742,743,744}},	{0,{784,745,746,0}},	{0,{784,756,757,0}},
{0,{784,739,740,741}},	{0,{784,742,743,0}},	{0,{784,744,738,739}},
{0,{784,744,741,0}},	{0,{784,751,752,0}},	{0,{784,753,751,0}},
{0,{784,733,734,735}},	{0,{784,736,737,0}},	{0,{784,747,748,0}},
{0,{784,785,786,787}},	{0,{787,763,764,731}},	{0,{787,765,766,0}},
{0,{787,788,789,790}},	{0,{790,791,792,783}},	{0,{792,764,765,766}},
{0,{792,793,794,795}},	{0,{795,723,724,725}},	{0,{795,726,727,0}},
{0,{795,737,738,0}},	{0,{795,796,786,777}},	{0,{796,797,724,0}},
{0,{723,723,723,0}},	{0,{796,795,722,0}},	{0,{796,797,754,0}},
{0,{797,793,720,0}},	{0,{797,798,0,0}},	{0,{798,797,0,0}},
{0,{798,799,800,0}},	{0,{800,795,0,0}},	{0,{800,0,0,0}},
{0,{800,0,0,0}},	{0,{800,740,740,740}},	{0,{739,739,739,739}},
{0,{799,794,794,0}},	{0,{799,799,799,799}},	{0,{799,0,0,0}},
{0,{799,800,800,801}},	{0,{773,773,773,773}},	{0,{799,799,799,799}},
{0,{799,798,798,798}},	{0,{799,710,710,710}},	{0,{709,709,709,709}},
{0,{798,708,708,708}},	{0,{798,784,784,0}},	{0,{798,0,0,0}},
{0,{798,791,791,792}},	{0,{798,799,799,691}},	{0,{799,800,800,694}},
{0,{797,797,797,689}},	{0,{798,798,798,692}},	{0,{798,799,799,700}},
{0,{799,800,800,0}},	{0,{797,797,797,698}},	{0,{798,798,798,0}},
{0,{798,791,791,683}},	{0,{798,792,792,686}},	{0,{798,793,793,694}},
{0,{798,794,794,0}},	{0,{798,799,799,709}},	{0,{798,798,798,708}},
{0,{798,799,800,801}},	{0,{801,799,799,800}},	{0,{801,802,802,803}},
{0,{803,803,803,717}},	{0,{803,804,804,797}},	{0,{804,800,800,800}},
{0,{804,805,805,799}},	{0,{805,806,806,807}},	{0,{807,807,807,734}},
{0,{807,807,807,727}},	{0,{807,806,806,726}},	{0,{807,808,793,794}},
{0,{808,809,809,810}},	{0,{810,811,812,813}},	{0,{813,814,814,814}},
{0,{814,815,815,815}},	{0,{812,812,812,812}},	{0,{813,813,813,813}},
{0,{813,813,813,813}},	{0,{813,813,813,811}},	{0,{813,813,813,813}},
{0,{813,813,813,814}},	{0,{814,814,814,814}},	{0,{812,812,812,812}},
{0,{813,666,666,666}},	{0,{813,0,0,0}},	{0,{741,741,741,0}},
{0,{749,749,749,750}},	{0,{712,712,713,714}},	{0,{719,719,720,721}},
{0,{809,809,757,651}},	{0,{809,809,0,0}},	{0,{644,644,644,645}},
{0,{647,647,647,648}},	{0,{655,655,655,656}},	{0,{658,658,658,655}},
{0,{660,660,660,0}},	{0,{669,669,669,670}},	{0,{672,672,672,673}},
{0,{675,675,675,642}},	{0,{677,677,677,0}},	{0,{678,678,678,679}},
{0,{693,693,693,694}},	{0,{698,698,698,699}},	{0,{701,701,701,692}},
{0,{704,704,704,705}},	{0,{795,795,795,795}},	{0,{795,795,795,795}},
{0,{795,795,795,793}},	{0,{795,795,795,795}},	{0,{795,795,795,796}},
{0,{796,796,796,796}},	{0,{794,794,794,794}},	{0,{795,795,795,628}},
{0,{795,795,795,682}},	{0,{795,795,795,795}},	{0,{795,795,795,795}},
{0,{795,795,795,795}},	{0,{795,795,795,793}},	{0,{795,795,795,796}},
{0,{795,795,795,795}},	{0,{795,625,619,620}},	{0,{795,625,622,0}},
{0,{795,635,633,0}},	{0,{795,622,616,617}},	{0,{795,622,619,0}},
{0,{795,632,630,0}},	{0,{795,796,797,798}},	{0,{798,799,800,801}},
{0,{794,794,795,796}},	{0,{797,797,798,799}},	{0,{799,615,609,610}},
{0,{799,615,612,0}},	{0,{799,625,623,0}},	{0,{799,612,606,607}},
{0,{799,612,609,0}},	{0,{799,622,620,0}},	{0,{799,609,603,604}},
{0,{799,609,606,0}},	{0,{799,619,617,0}},	{0,{799,783,784,785}},
{0,{799,786,787,788}},	{0,{799,781,782,783}},	{0,{799,784,785,786}},
{0,{799,602,596,597}},	{0,{799,602,599,0}},	{0,{799,612,610,0}},
{0,{799,597,597,0}},	{0,{799,596,596,0}},	{0,{799,779,779,780}},
{0,{778,778,778,779}},	{0,{798,593,593,0}},	{0,{798,777,777,777}},
{0,{776,776,776,776}},	{0,{797,775,775,775}},	{0,{797,798,798,799}},
{0,{799,800,800,800}},	{0,{800,800,800,768}},	{0,{800,800,800,800}},
{0,{800,800,801,802}},	{0,{802,802,803,804}},	{0,{802,802,802,803}},
{0,{802,802,802,802}},	{0,{802,802,802,798}},	{0,{760,760,760,761}},
{0,{801,801,801,801}},	{0,{801,801,801,801}},	{0,{801,802,610,0}},
{0,{802,801,609,0}},	{0,{802,608,608,0}},	{0,{802,802,803,804}},
{0,{804,804,805,806}},	{0,{804,804,804,805}},	{0,{804,804,804,804}},
{0,{804,804,804,800}},	{0,{798,798,798,799}},	{0,{803,803,803,803}},
{0,{803,803,803,803}},	{0,{803,803,804,805}},	{0,{805,805,806,807}},
{0,{807,807,807,808}},	{0,{808,808,808,808}},	{0,{806,806,806,806}},
{0,{807,807,807,807}},	{0,{807,807,807,807}},	{0,{801,801,801,801}},
{0,{806,806,806,797}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{790,790,790,791}},	{0,{792,792,792,793}},	{0,{804,804,804,804}},
{0,{804,804,804,804}},	{0,{804,804,804,804}},	{0,{804,804,804,804}},
{0,{804,804,804,804}},	{0,{804,805,806,807}},	{0,{807,808,809,810}},
{0,{810,811,812,809}},	{0,{812,812,813,814}},	{0,{814,814,815,816}},
{0,{816,816,817,818}},	{0,{818,818,819,817}},	{0,{819,819,820,810}},
{0,{820,801,802,803}},	{0,{820,804,805,802}},	{0,{820,811,812,813}},
{0,{820,813,814,812}},	{0,{820,821,802,799}},	{0,{812,812,812,810}},
{0,{820,821,822,797}},	{0,{808,808,808,808}},	{0,{821,820,820,795}},
{0,{821,822,822,790}},	{0,{799,799,799,799}},	{0,{801,801,801,801}},
{0,{820,797,797,797}},	{0,{820,821,821,796}},	{0,{820,820,820,795}},
{0,{820,820,820,821}},	{0,{821,821,821,822}},	{0,{822,822,822,822}},
{0,{822,822,822,822}},	{0,{822,822,822,822}},	{0,{822,822,822,822}},
{0,{787,787,787,788}},	{0,{797,797,797,787}},	{0,{820,820,820,820}},
{0,{820,820,820,820}},	{0,{820,820,820,820}},	{190,{0,0,0,0}},
{0,{819,780,781,782}},	{191,{509,509,509,0}},	{191,{0,0,0,0}},
{0,{817,817,817,817}},	{194,{817,817,817,817}},	{194,{0,0,0,0}},
{194,{816,816,816,816}},	{194,{649,649,649,649}},	{0,{815,774,774,774}},
{0,{815,0,0,0}},	{194,{815,811,811,811}},	{194,{813,0,0,0}},
{0,{814,815,815,815}},	{0,{815,814,814,814}},	{0,{815,816,816,816}},
{0,{816,816,816,816}},	{0,{811,811,811,811}},	{0,{815,816,816,816}},
{0,{816,0,0,0}},	{0,{816,816,816,816}},	{0,{816,816,816,816}},
{0,{816,816,816,816}},	{0,{780,816,779,754}},	{0,{573,816,0,0}},
{0,{786,816,786,817}},	{0,{631,817,631,631}},	{0,{630,816,630,817}},
{0,{0,812,0,0}},	{210,{0,0,0,0}},	{0,{815,815,815,816}},
{0,{626,626,626,813}},	{0,{646,646,646,815}},	{0,{815,815,815,815}},
{0,{815,815,815,815}},	{0,{815,0,0,0}},	{0,{815,0,0,0}},
{0,{815,0,0,0}},	{0,{815,500,500,500}},	{0,{815,816,816,817}},
{0,{817,818,818,819}},	{0,{819,818,818,818}},	{0,{819,820,820,821}},
{0,{821,561,561,561}},	{0,{821,811,811,812}},	{0,{821,813,813,814}},
{0,{821,813,813,813}},	{0,{821,815,815,816}},	{0,{821,821,822,823}},
{0,{821,821,821,822}},	{0,{821,821,821,821}},	{0,{821,821,821,822}},
{0,{822,822,822,823}},	{0,{823,824,824,824}},	{0,{824,823,823,823}},
{0,{824,824,824,824}},	{0,{824,824,824,824}},	{0,{824,824,824,824}},
{0,{698,698,824,698}},	{0,{0,0,824,0}},	{0,{544,544,824,544}},
{0,{696,696,824,696}},	{0,{824,824,824,694}},	{0,{824,824,824,0}},
{0,{822,822,824,692}},	{0,{822,822,824,0}},	{0,{824,824,824,538}},
{0,{823,823,824,537}},	{0,{824,824,824,687}},	{0,{824,824,824,688}},
{0,{823,823,824,687}},	{0,{824,824,824,687}},	{0,{824,824,824,824}},
{0,{824,824,824,824}},	{0,{824,824,824,824}},	{0,{824,824,824,824}},
{0,{0,0,0,824}},	{0,{824,825,825,825}},	{0,{825,826,826,826}},
{0,{826,826,826,826}},	{0,{826,826,826,826}},	{0,{826,821,826,821}},
{0,{826,822,826,822}},	{245,{0,0,0,0}},	{0,{825,825,825,825}},
{0,{820,820,825,820}},	{194,{736,736,825,736}},	{194,{0,0,796,0}},
{0,{824,824,824,817}},	{0,{823,823,824,816}},	{194,{824,824,824,732}},
{194,{823,823,824,731}},	{194,{795,795,795,0}},	{194,{794,794,796,0}},
{0,{822,822,822,822}},	{194,{822,822,822,822}},	{194,{801,801,801,801}},
{0,{821,0,0,0}},	{0,{821,0,0,0}},	{247,{0,0,0,0}},
{0,{803,820,804,804}},	{0,{751,739,0,0}},	{0,{806,818,806,802}},
{0,{0,737,0,818}},	{0,{818,818,818,819}},	{0,{0,0,0,816}},
{0,{818,818,818,818}},	{0,{0,0,818,0}},	{0,{430,430,818,430}},
{0,{818,485,485,0}},	{0,{818,0,0,0}},	{0,{818,492,492,493}},
{0,{465,465,818,465}},	{0,{818,818,481,0}},	{0,{818,582,582,582}},
{0,{629,629,818,629}},	{0,{640,640,818,640}},	{0,{638,638,818,638}},
{0,{639,639,818,639}},	{0,{639,639,818,639}},	{0,{818,818,818,819}},
{0,{681,681,681,656}},	{0,{818,818,819,818}},	{0,{819,819,819,819}},
{0,{816,816,816,816}},	{0,{818,818,818,819}},	{0,{819,819,820,819}},
{0,{820,820,820,820}},	{0,{817,817,817,817}},	{0,{819,820,820,821}},
{0,{821,681,681,682}},	{0,{821,821,821,821}},	{0,{821,821,821,821}},
{0,{821,822,822,823}},	{0,{823,823,823,823}},	{0,{823,823,823,823}},
{0,{823,816,816,816}},	{0,{823,520,520,520}},	{0,{823,819,819,819}},
{0,{823,823,823,823}},	{0,{823,823,823,823}},	{0,{823,823,823,823}},
{0,{823,823,823,823}},	{0,{823,823,823,823}},	{0,{823,823,823,823}},
{0,{823,823,823,823}},	{0,{823,823,823,823}},	{0,{822,822,823,822}},
{0,{823,823,823,823}},	{0,{823,823,823,823}},	{0,{823,823,823,823}},
{0,{823,823,823,823}},	{0,{823,823,823,823}},	{0,{823,823,823,823}},
{194,{668,668,823,668}},	{194,{0,0,770,0}},	{0,{822,672,672,672}},
{0,{822,822,822,822}},	{0,{644,681,644,619}},	{0,{792,682,652,683}},
{0,{800,683,497,684}},	{0,{819,819,819,820}},	{0,{819,819,819,819}},
{273,{0,0,0,0}},	{273,{818,818,818,818}},	{0,{818,818,818,818}},
{0,{818,818,818,818}},	{0,{818,818,818,818}},	{0,{818,818,818,818}},
{0,{818,818,818,818}},	{0,{818,818,818,818}},	{289,{0,0,0,0}},
{290,{0,0,0,0}},	{290,{571,571,571,571}},	{0,{815,815,815,815}},
{292,{815,815,815,815}},	{294,{0,0,0,0}},	{0,{814,814,814,814}},
{0,{814,814,814,814}},	{0,{814,814,814,814}},	{273,{765,765,765,765}},
{0,{813,813,813,813}},	{0,{813,813,813,814}},	{0,{814,814,814,815}},
{0,{815,815,815,815}},	{0,{815,815,815,815}},	{0,{815,815,815,815}},
{0,{815,815,815,816}},	{0,{816,816,816,816}},	{0,{816,816,816,815}},
{0,{816,816,816,817}},	{0,{816,816,816,816}},	{0,{816,816,816,817}},
{0,{817,817,817,817}},	{309,{420,420,420,314}},	{309,{0,0,0,0}},
{309,{422,422,422,0}},	{0,{814,814,814,815}},	{0,{814,814,814,814}},
{0,{814,814,814,814}},	{0,{814,814,814,814}},	{0,{814,814,814,0}},
{0,{814,814,814,814}},	{0,{814,814,814,814}},	{0,{814,814,814,814}},
{0,{814,814,814,815}},	{0,{815,815,815,815}},	{0,{813,813,813,813}},
{0,{814,814,814,814}},	{0,{814,814,814,814}},	{0,{814,814,814,814}},
{0,{302,302,296,814}},	{0,{814,814,815,816}},	{0,{301,301,298,816}},
{0,{812,812,813,816}},	{0,{310,310,308,814}},	{0,{337,297,291,809}},
{0,{337,297,294,812}},	{0,{338,307,305,811}},	{0,{292,292,292,810}},
{0,{0,0,0,809}},	{0,{809,809,809,807}},	{0,{808,808,808,808}},
{0,{391,391,391,802}},	{0,{394,394,394,805}},	{0,{432,432,432,806}},
{0,{806,806,806,807}},	{0,{805,805,805,805}},	{0,{806,806,806,807}},
{0,{807,807,807,808}},	{0,{808,808,808,809}},	{0,{796,796,796,799}},
{0,{808,808,808,807}},	{0,{806,806,806,806}},	{0,{807,807,807,807}},
{0,{802,802,802,802}},	{0,{806,806,806,799}},	{0,{806,806,806,802}},
{0,{806,806,807,808}},	{0,{805,805,806,808}},	{0,{807,807,807,806}},
{0,{806,806,806,806}},	{0,{806,806,806,807}},	{0,{805,805,805,805}},
{0,{806,806,806,807}},	{0,{800,800,800,802}},	{0,{805,805,805,805}},
{0,{805,805,805,805}},	{0,{805,805,805,805}},	{0,{805,805,805,805}},
{0,{805,805,805,805}},	{0,{530,530,531,805}},	{0,{531,531,531,804}},
{0,{555,555,555,803}},	{0,{559,559,559,803}},	{0,{803,803,803,804}},
{0,{803,803,803,803}},	{0,{803,803,803,802}},	{0,{564,564,564,564}},
{0,{564,564,564,564}},	{0,{591,0,0,769}},	{0,{591,0,0,768}},
{0,{799,785,785,784}},	{0,{799,784,784,783}},	{0,{797,783,783,783}},
{0,{797,782,782,782}},	{0,{797,797,797,797}},	{0,{797,797,797,780}},
{0,{646,646,646,554}},	{0,{796,796,796,797}},	{0,{795,795,797,795}},
{0,{776,776,797,776}},	{0,{793,793,793,793}},	{0,{796,796,796,797}},
{0,{795,795,795,795}},	{0,{694,694,694,796}},	{0,{696,696,696,796}},
{0,{545,545,700,545}},	{0,{795,795,795,795}},	{0,{795,795,795,796}},
{0,{796,796,796,796}},	{0,{794,794,794,794}},	{0,{795,795,795,795}},
{0,{795,795,795,795}},	{0,{795,795,795,795}},	{0,{795,795,795,795}},
{0,{795,795,795,795}},	{0,{795,795,795,795}},	{0,{225,225,795,220}},
{0,{225,225,795,0}},	{0,{235,235,795,0}},	{0,{795,222,792,217}},
{0,{795,222,792,0}},	{0,{795,796,797,798}},	{0,{798,231,791,0}},
{0,{794,794,798,796}},	{0,{798,798,799,795}},	{0,{792,792,793,794}},
{0,{255,215,785,210}},	{0,{255,215,785,0}},	{0,{256,225,785,0}},
{0,{795,212,782,207}},	{0,{795,212,782,0}},	{0,{795,222,782,0}},
{0,{207,207,780,0}},	{0,{794,206,779,0}},	{0,{0,0,794,0}},
{0,{621,0,793,0}},	{0,{793,783,794,783}},	{0,{782,782,782,782}},
{0,{781,781,792,781}},	{0,{792,792,793,792}},	{0,{793,793,794,793}},
{0,{301,301,794,195}},	{0,{304,304,794,0}},	{0,{794,794,795,776}},
{0,{793,793,793,775}},	{0,{340,340,794,340}},	{0,{794,794,795,794}},
{0,{793,793,793,793}},	{0,{773,773,773,771}},	{0,{774,774,774,770}},
{0,{792,792,792,792}},	{0,{792,792,792,792}},	{0,{527,0,776,0}},
{0,{527,0,775,0}},	{0,{790,0,774,0}},	{0,{790,764,775,764}},
{0,{790,763,774,763}},	{0,{790,762,773,762}},	{0,{790,791,792,791}},
{0,{790,790,790,790}},	{0,{791,792,793,792}},	{0,{791,791,791,791}},
{0,{792,787,788,787}},	{0,{792,789,790,789}},	{0,{785,785,786,785}},
{0,{787,787,788,787}},	{0,{790,790,790,790}},	{0,{790,790,790,790}},
{0,{790,790,790,790}},	{0,{790,790,790,790}},	{0,{790,790,790,790}},
{0,{748,748,790,748}},	{0,{777,777,790,777}},	{0,{779,779,790,779}},
{0,{790,790,790,745}},	{0,{789,789,790,744}},	{0,{790,790,790,773}},
{0,{789,789,790,772}},	{0,{790,790,790,774}},	{0,{789,789,790,773}},
{0,{790,790,790,790}},	{0,{790,790,790,790}},	{0,{790,790,790,790}},
{0,{790,790,790,790}},	{0,{790,790,790,790}},	{0,{571,0,743,790}},
{0,{743,733,744,790}},	{0,{732,732,790,732}},	{0,{790,790,791,790}},
{0,{789,789,791,789}},	{0,{788,788,788,788}},	{0,{790,787,788,791}},
{0,{791,791,792,791}},	{0,{790,790,790,790}},	{0,{791,791,791,791}},
{0,{791,791,791,791}},	{0,{791,791,791,791}},	{0,{791,0,0,0}},
{0,{791,791,791,791}},	{0,{791,792,792,792}},	{0,{791,791,791,791}},
{0,{791,791,791,791}},	{0,{791,792,792,0}},	{0,{791,791,791,0}},
{0,{791,791,791,785}},	{0,{791,791,791,787}},	{0,{791,792,792,0}},
{0,{791,791,791,0}},	{0,{791,791,791,781}},	{0,{791,791,791,783}},
{0,{791,791,791,791}},	{0,{791,791,791,791}},	{0,{791,791,791,789}},
{0,{791,791,791,788}},	{0,{0,0,0,791}},	{0,{791,792,792,792}},
{0,{791,791,791,791}},	{0,{791,792,792,792}},	{0,{791,791,791,791}},
{0,{791,792,792,792}},	{0,{791,791,791,791}},	{0,{791,791,791,791}},
{0,{791,791,791,791}},	{0,{791,791,791,791}},	{0,{791,791,791,791}},
{0,{791,791,791,791}},	{0,{791,791,791,791}},	{0,{791,791,791,790}},
{0,{791,791,791,789}},	{0,{791,0,792,0}},	{0,{792,761,793,761}},
{0,{793,786,794,786}},	{0,{794,762,795,0}},	{0,{795,785,796,784}},
{0,{796,764,797,0}},	{0,{797,784,798,782}},	{0,{798,771,799,771}},
{0,{799,772,800,772}},	{0,{800,773,801,773}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,799}},	{0,{801,801,801,798}},
{0,{801,802,802,802}},	{0,{801,801,801,801}},	{0,{801,802,802,802}},
{0,{801,801,801,801}},	{0,{801,802,802,802}},	{0,{801,801,801,801}},
{0,{801,802,802,802}},	{0,{801,801,801,801}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,801}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,801}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,801}},	{0,{801,801,801,801}},
{0,{0,0,801,0}},	{0,{747,747,801,747}},	{0,{749,749,801,749}},
{0,{801,802,802,802}},	{0,{801,801,801,801}},	{0,{722,801,0,0}},
{0,{0,800,0,0}},	{0,{0,800,0,0}},	{37,{0,0,0,0}},
{0,{718,0,799,0}},	{0,{0,0,798,0}},	{0,{798,798,798,798}},
{0,{798,798,798,798}},	{0,{798,798,798,798}},	{0,{798,798,798,798}},
{0,{798,798,798,798}},	{0,{0,0,798,0}},	{0,{798,0,798,0}},
{0,{798,798,798,798}},	{0,{798,798,798,798}},	{0,{798,799,798,797}},
{0,{799,798,799,796}},	{0,{798,795,798,795}},	{0,{798,0,798,0}},
{0,{798,724,798,724}},	{0,{798,726,798,726}},	{0,{798,798,798,798}},
{0,{798,798,798,797}},	{0,{798,798,798,0}},	{0,{798,798,798,798}},
{0,{798,798,798,798}},	{0,{798,797,798,797}},	{0,{798,0,0,0}},
{0,{798,798,798,798}},	{0,{798,798,798,798}},	{0,{798,798,798,798}},
{0,{798,798,798,798}},	{0,{798,0,0,0}},	{0,{798,0,0,0}},
{0,{798,792,792,792}},	{0,{798,708,708,708}},	{0,{798,791,791,791}},
{0,{798,789,799,789}},	{0,{799,789,800,789}},	{0,{800,800,800,0}},
{0,{800,800,800,0}},	{0,{800,800,800,800}},	{0,{800,800,800,800}},
{0,{800,800,798,798}},	{0,{800,800,0,0}},	{0,{800,800,797,797}},
{0,{800,800,697,697}},	{0,{800,800,699,699}},	{0,{800,800,800,800}},
{0,{800,799,801,799}},	{0,{801,801,801,0}},	{0,{801,801,801,0}},
{0,{801,801,0,0}},	{0,{801,0,0,0}},	{0,{801,0,801,0}},
{0,{801,801,0,0}},	{0,{801,0,0,0}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,0}},	{0,{801,801,801,801}},
{0,{801,801,801,801}},	{0,{801,801,801,0}},	{0,{801,802,803,803}},
{0,{803,804,805,805}},	{0,{803,803,804,804}},	{0,{804,804,803,803}},
{0,{804,805,806,806}},	{0,{806,807,0,0}},	{0,{806,806,0,0}},
{0,{806,806,0,0}},	{0,{806,807,802,802}},	{0,{807,808,0,0}},
{0,{807,807,0,0}},	{0,{807,794,795,795}},	{0,{807,800,0,0}},
{0,{807,804,0,0}},	{0,{807,808,792,792}},	{0,{807,807,791,791}},
{0,{790,790,790,790}},	{0,{806,807,786,786}},	{0,{807,808,788,788}},
{0,{807,807,787,787}},	{0,{807,808,790,790}},	{0,{808,809,0,0}},
{0,{808,808,0,0}},	{0,{808,803,783,783}},	{0,{808,806,0,0}},
{0,{808,780,781,781}},	{0,{808,786,0,0}},	{0,{808,790,0,0}},
{0,{808,798,778,778}},	{0,{808,801,0,0}},	{0,{808,809,810,810}},
{0,{810,808,809,809}},	{0,{807,807,808,808}},	{0,{809,809,807,807}},
{0,{809,805,806,806}},	{0,{809,810,805,805}},	{0,{809,809,804,804}},
{0,{803,803,803,803}},	{0,{808,809,810,810}},	{0,{810,808,809,809}},
{0,{807,807,808,808}},	{0,{809,810,807,807}},	{0,{810,809,806,806}},
{0,{808,808,805,805}},	{0,{809,810,811,811}},	{0,{809,809,810,810}},
{0,{810,810,809,809}},	{0,{810,765,0,0}},	{0,{810,769,0,0}},
{0,{810,781,0,0}},	{0,{810,759,760,760}},	{0,{810,764,759,759}},
{0,{810,760,0,0}},	{0,{810,764,0,0}},	{0,{810,774,756,756}},
{0,{810,775,0,0}},	{0,{810,756,0,0}},	{0,{810,760,0,0}},
{0,{810,772,0,0}},	{0,{810,811,812,812}},	{0,{812,810,811,811}},
{0,{809,809,810,810}},	{0,{811,811,812,812}},	{0,{812,784,785,785}},
{0,{812,787,784,784}},	{0,{812,813,814,814}},	{0,{814,812,813,813}},
{0,{811,811,812,812}},	{0,{813,813,811,811}},	{0,{813,814,805,805}},
{0,{814,813,804,804}},	{0,{812,812,803,803}},	{0,{813,782,783,783}},
{0,{813,814,806,806}},	{0,{814,813,805,805}},	{0,{812,812,804,804}},
{0,{803,803,803,803}},	{0,{812,735,0,0}},	{0,{812,739,0,0}},
{0,{812,751,0,0}},	{0,{812,803,794,794}},	{0,{812,802,793,793}},
{0,{812,733,728,728}},	{0,{812,734,0,0}},	{0,{812,733,0,0}},
{0,{812,766,763,763}},	{0,{812,765,762,762}},	{0,{812,730,0,0}},
{0,{812,722,722,722}},	{0,{812,0,0,0}},	{0,{812,0,0,0}},
{0,{812,757,757,757}},	{0,{812,756,756,756}},	{0,{755,755,755,755}},
{0,{811,0,0,0}},	{0,{811,715,715,715}},	{0,{811,0,0,0}},
{0,{811,743,743,743}},	{0,{811,750,750,750}},	{0,{756,756,756,756}},
{0,{810,0,0,0}},	{0,{810,770,770,770}},	{0,{769,769,769,769}},
{0,{771,771,771,771}},	{0,{808,770,770,770}},	{0,{808,698,698,698}},
{0,{808,700,700,700}},	{0,{808,741,741,741}},	{0,{808,0,0,0}},
{0,{808,762,762,762}},	{0,{808,809,693,693}},	{0,{809,809,695,695}},
{0,{809,810,698,698}},	{0,{810,810,0,0}},	{0,{810,811,689,689}},
{0,{811,811,691,691}},	{0,{811,812,694,694}},	{0,{812,812,0,0}},
{0,{812,802,688,688}},	{0,{812,804,0,0}},	{0,{812,806,686,686}},
{0,{812,808,0,0}},	{0,{812,813,718,718}},	{0,{812,812,717,717}},
{0,{812,813,724,724}},	{0,{812,812,723,723}},	{0,{812,812,722,722}},
{0,{812,812,0,0}},	{0,{812,810,720,720}},	{0,{812,813,719,719}},
{0,{812,812,718,718}},	{0,{812,812,0,0}},	{0,{812,812,723,723}},
{0,{812,813,0,0}},	{0,{812,812,0,0}},	{0,{812,808,0,0}},
{0,{812,813,0,0}},	{0,{812,812,0,0}},	{0,{812,813,733,733}},
{0,{812,812,732,732}},	{0,{812,812,734,734}},	{0,{812,812,738,738}},
{0,{812,812,732,732}},	{0,{812,811,731,731}},	{0,{812,813,704,704}},
{0,{812,812,703,703}},	{0,{812,813,725,725}},	{0,{812,812,724,724}},
{0,{812,812,726,726}},	{0,{812,808,699,699}},	{0,{812,807,698,698}},
{0,{812,791,697,697}},	{0,{812,791,0,0}},	{0,{812,650,650,650}},
{0,{812,652,652,652}},	{0,{812,655,655,655}},	{0,{812,0,0,0}},
{0,{812,683,683,683}},	{0,{812,690,690,690}},	{0,{812,696,696,696}},
{0,{812,711,711,711}},	{0,{812,713,713,713}},	{0,{812,717,717,717}},
{0,{640,640,640,640}},	{0,{646,646,646,646}},	{0,{810,810,0,0}},
{0,{810,810,0,0}},	{0,{810,810,0,0}},	{0,{810,810,672,672}},
{0,{810,810,679,679}},	{0,{810,810,685,685}},	{0,{810,810,700,700}},
{0,{810,810,702,702}},	{0,{810,810,706,706}},	{0,{810,810,674,674}},
{0,{810,810,696,696}},	{0,{810,630,810,630}},	{0,{810,0,810,0}},
{0,{810,662,810,662}},	{0,{810,669,810,669}},	{0,{810,691,810,691}},
{0,{810,693,810,693}},	{0,{810,627,628,628}},	{0,{810,632,627,627}},
{0,{810,644,626,626}},	{0,{810,627,0,0}},	{0,{810,631,0,0}},
{0,{810,643,0,0}},	{0,{810,811,812,812}},	{0,{812,810,811,811}},
{0,{809,809,810,810}},	{0,{811,811,809,809}},	{0,{811,812,808,808}},
{0,{812,811,807,807}},	{0,{810,810,806,806}},	{0,{805,805,805,805}},
{0,{810,616,0,0}},	{0,{810,620,0,0}},	{0,{810,632,0,0}},
{0,{810,610,611,611}},	{0,{810,615,610,610}},	{0,{810,627,609,609}},
{0,{810,610,0,0}},	{0,{810,614,0,0}},	{0,{810,626,0,0}},
{0,{810,794,795,795}},	{0,{810,798,794,794}},	{0,{810,792,793,793}},
{0,{810,796,792,792}},	{0,{810,603,0,0}},	{0,{810,607,0,0}},
{0,{810,619,0,0}},	{0,{810,603,598,598}},	{0,{810,604,0,0}},
{0,{810,790,786,786}},	{0,{810,602,0,0}},	{0,{810,784,784,784}},
{0,{810,783,783,783}},	{0,{810,811,782,782}},	{0,{810,810,781,781}},
{0,{810,810,780,780}},	{0,{810,811,779,779}},	{0,{810,810,778,778}},
{0,{810,810,777,777}},	{0,{810,776,776,776}},	{0,{810,811,812,812}},
{0,{810,810,811,811}},	{0,{811,811,810,810}},	{0,{811,812,809,809}},
{0,{811,811,808,808}},	{0,{807,807,807,807}},	{0,{810,810,806,806}},
{0,{810,810,768,768}},	{0,{810,767,810,767}},	{0,{810,617,614,614}},
{0,{810,616,613,613}},	{0,{810,615,612,612}},	{0,{810,614,611,611}},
{0,{810,811,812,812}},	{0,{810,810,811,811}},	{0,{811,811,810,810}},
{0,{811,812,809,809}},	{0,{811,811,808,808}},	{0,{807,807,807,807}},
{0,{810,810,806,806}},	{0,{810,810,805,805}},	{0,{810,0,0,0}},
{0,{810,811,812,812}},	{0,{810,810,811,811}},	{0,{811,811,810,810}},
{0,{811,812,809,809}},	{0,{811,811,808,808}},	{0,{807,807,807,807}},
{0,{810,810,811,811}},	{0,{810,810,810,810}},	{0,{810,810,810,810}},
{0,{810,810,810,810}},	{0,{810,810,810,810}},	{0,{810,810,801,801}},
{0,{810,800,800,800}},	{0,{810,804,804,804}},	{0,{810,804,804,804}},
{0,{810,804,804,804}},	{0,{810,804,804,804}},	{0,{810,810,801,801}},
{0,{810,810,801,801}},	{0,{810,810,810,810}},	{0,{810,809,809,809}},
{0,{810,810,808,808}},	{0,{810,811,812,812}},	{0,{812,810,811,811}},
{0,{812,809,810,810}},	{0,{812,809,809,809}},	{0,{812,557,0,0}},
{0,{812,556,0,0}},	{0,{812,555,0,0}},	{0,{812,0,0,0}},
{0,{812,540,0,0}},	{0,{812,539,0,0}},	{0,{812,538,0,0}},
{0,{812,800,801,801}},	{0,{799,799,800,800}},	{0,{799,799,799,799}},
{0,{810,797,811,798}},	{0,{811,796,810,797}},	{0,{809,796,809,796}},
{0,{810,544,811,0}},	{0,{811,543,810,0}},	{0,{809,0,809,0}},
{0,{810,528,808,0}},	{0,{810,527,807,0}},	{0,{810,811,790,790}},
{0,{810,810,789,789}},	{0,{810,537,0,0}},	{0,{810,523,0,0}},
{0,{810,535,802,0}},	{0,{810,521,801,0}},	{0,{810,520,0,0}},
{0,{810,519,0,0}},	{0,{810,0,0,0}},	{0,{810,0,0,0}},
{0,{810,0,0,0}},	{0,{810,0,0,0}},	{0,{810,778,778,778}},
{0,{810,777,777,777}},	{0,{810,776,776,776}},	{0,{810,811,775,775}},
{0,{810,810,774,774}},	{0,{810,773,773,773}},	{0,{810,772,772,772}},
{0,{810,0,0,0}},	{0,{810,0,0,0}},	{0,{810,769,769,769}},
{0,{810,768,781,768}},	{0,{810,0,783,0}},	{0,{810,810,810,0}},
{0,{810,765,810,765}},	{0,{810,764,810,764}},	{0,{810,0,810,0}},
{0,{810,761,762,762}},	{0,{810,0,810,0}},	{0,{810,810,810,810}},
{0,{810,809,809,809}},	{0,{810,810,810,758}},	{0,{810,810,810,0}},
{0,{810,810,810,806}},	{0,{810,811,811,0}},	{0,{810,810,810,0}},
{0,{810,809,809,0}},	{0,{810,811,808,0}},	{0,{810,810,807,0}},
{0,{810,806,806,0}},	{0,{575,0,810,0}},	{0,{0,0,809,0}},
{0,{809,810,0,0}},	{0,{810,810,810,810}},	{0,{810,809,809,809}},
{0,{810,810,808,808}},	{0,{810,811,811,811}},	{0,{810,810,810,810}},
{0,{810,809,809,809}},	{0,{810,0,811,0}},	{0,{811,807,807,807}},
{0,{811,0,809,0}},	{0,{811,0,811,0}},	{0,{811,0,811,0}},
{0,{811,0,811,0}},	{0,{811,0,811,0}},	{0,{811,0,811,0}},
{0,{811,461,461,461}},	{0,{811,0,0,0}},	{0,{811,0,0,0}},
{0,{811,488,488,488}},	{0,{811,812,813,495}},	{0,{811,811,812,494}},
{0,{812,812,813,0}},	{0,{808,809,809,492}},	{0,{808,808,808,491}},
{0,{809,809,809,0}},	{0,{810,808,808,0}},	{0,{810,811,811,511}},
{0,{810,810,810,510}},	{0,{810,810,810,512}},	{0,{810,511,511,511}},
{0,{810,801,802,484}},	{0,{809,800,800,483}},	{0,{809,801,801,0}},
{0,{809,804,804,504}},	{0,{809,809,797,480}},	{0,{809,809,796,479}},
{0,{809,809,797,0}},	{0,{809,809,800,500}},	{0,{809,809,800,502}},
{0,{475,475,809,475}},	{0,{0,0,809,0}},	{0,{809,810,810,625}},
{0,{809,809,809,624}},	{0,{809,808,808,623}},	{0,{809,809,807,622}},
{0,{0,809,0,0}},	{0,{670,809,670,670}},	{0,{809,684,684,684}},
{0,{809,0,0,0}},	{0,{809,491,491,491}},	{0,{809,682,682,682}},
{0,{809,680,680,680}},	{0,{809,0,0,0}},	{0,{809,678,678,678}},
{0,{809,0,0,0}},	{0,{809,485,485,485}},	{0,{809,484,484,484}},
{0,{809,673,673,673}},	{0,{809,674,674,674}},	{0,{809,673,673,673}},
{0,{809,673,673,673}},	{0,{809,670,809,670}},	{0,{809,0,809,0}},
{0,{809,477,809,477}},	{0,{809,668,809,668}},	{0,{809,0,0,0}},
{0,{809,810,811,811}},	{0,{809,809,810,810}},	{0,{810,811,0,0}},
{0,{810,810,0,0}},	{0,{807,807,807,807}},	{0,{809,806,809,806}},
{0,{809,809,810,805}},	{0,{810,810,811,0}},	{0,{803,811,803,803}},
{0,{811,802,802,802}},	{0,{811,721,721,721}},	{0,{811,800,800,800}},
{0,{811,799,799,799}},	{0,{811,718,718,718}},	{0,{811,717,717,717}},
{0,{811,796,811,796}},	{0,{811,715,811,715}},	{0,{811,727,0,0}},
{0,{726,726,0,0}},	{0,{810,810,730,730}},	{0,{732,0,732,0}},
{0,{809,0,809,0}},	{0,{809,0,809,0}},	{0,{0,809,0,0}},
{0,{809,0,0,0}},	{0,{809,415,415,415}},	{0,{809,422,422,422}},
{0,{809,0,0,0}},	{0,{809,443,443,443}},	{0,{809,450,450,450}},
{0,{809,809,418,418}},	{0,{809,569,569,569}},	{0,{809,618,618,618}},
{0,{809,632,632,632}},	{0,{809,630,630,630}},	{0,{809,631,631,631}},
{0,{809,631,631,631}},	{0,{809,810,810,810}},	{0,{810,809,809,809}},
{0,{808,808,808,808}},	{0,{809,807,807,807}},	{0,{809,806,809,806}},
{0,{809,810,810,810}},	{0,{810,809,809,809}},	{0,{808,808,808,808}},
{0,{809,807,807,807}},	{0,{809,806,809,806}},	{0,{809,810,800,800}},
{0,{808,799,799,799}},	{0,{809,798,798,798}},	{0,{670,809,0,0}},
{0,{809,796,796,796}},	{0,{809,795,798,795}},	{0,{809,810,799,799}},
{0,{808,798,798,798}},	{0,{809,797,797,797}},	{0,{809,796,796,796}},
{0,{809,795,798,795}},	{0,{802,799,789,789}},	{0,{509,800,0,0}},
{0,{805,803,792,792}},	{0,{786,806,786,786}},	{0,{0,806,0,0}},
{0,{789,806,789,789}},	{0,{806,783,806,783}},	{0,{806,782,806,782}},
{0,{806,786,806,786}},	{0,{806,785,806,785}},	{0,{806,806,806,806}},
{0,{806,805,805,805}},	{0,{806,804,806,804}},	{0,{806,803,803,803}},
{0,{806,802,804,802}},	{0,{801,806,801,801}},	{0,{806,800,806,800}},
{0,{806,799,806,799}},	{0,{806,655,655,655}},	{0,{806,660,660,0}},
{0,{0,806,0,0}},	{0,{806,806,807,807}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,0}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,807,807}},	{0,{807,807,806,806}},
{0,{807,807,808,808}},	{0,{808,808,807,807}},	{0,{806,806,806,806}},
{0,{807,807,807,807}},	{0,{801,801,801,801}},	{0,{806,806,807,807}},
{0,{807,807,806,806}},	{0,{805,805,805,805}},	{0,{806,806,804,804}},
{0,{806,806,807,807}},	{0,{806,806,806,806}},	{0,{806,416,0,0}},
{0,{806,305,0,0}},	{0,{806,0,0,0}},	{0,{806,806,807,807}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,806}},	{0,{806,806,806,806}},
{0,{806,806,806,806}},	{0,{806,806,806,0}},	{0,{806,806,806,806}},
{0,{806,806,806,0}},	{331,{289,289,0,0}},	{0,{805,806,807,807}},
{0,{805,805,806,806}},	{331,{805,805,805,805}},	{331,{0,0,0,0}},
{0,{803,803,803,803}},	{331,{438,0,0,0}},	{0,{802,801,801,801}},
{331,{801,800,800,800}},	{0,{801,801,0,0}},	{0,{801,801,0,0}},
{0,{801,801,797,797}},	{0,{801,801,796,796}},	{0,{801,801,0,0}},
{0,{801,801,0,0}},	{0,{801,801,0,0}},	{0,{801,801,0,0}},
{0,{801,801,0,0}},	{0,{801,801,0,0}},	{0,{801,802,803,803}},
{0,{801,801,802,802}},	{331,{801,801,801,801}},	{0,{800,800,800,800}},
{0,{800,799,799,799}},	{331,{799,798,798,798}},	{0,{799,799,797,797}},
{0,{799,799,796,796}},	{0,{799,799,795,795}},	{0,{799,799,794,794}},
{0,{799,0,0,0}},	{0,{792,799,792,792}},	{331,{526,526,526,526}},
{331,{566,525,525,525}},	{0,{797,797,524,524}},	{0,{797,797,523,523}},
{0,{797,797,522,522}},	{0,{797,786,786,786}},	{0,{797,785,785,785}},
{0,{784,797,784,784}},	{0,{797,783,783,783}},	{0,{797,797,797,797}},
{331,{796,796,796,796}},	{0,{796,795,795,795}},	{0,{796,779,779,779}},
{0,{796,793,793,793}},	{331,{795,792,792,792}},	{331,{704,704,704,704}},
{331,{706,703,703,703}},	{0,{793,793,0,0}},	{0,{793,793,794,794}},
{0,{793,793,793,793}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,793,793,793}},	{0,{793,0,793,0}},	{0,{793,793,793,793}},
{0,{793,793,793,793}},	{0,{793,793,793,0}},	{0,{793,793,794,794}},
{0,{794,794,793,793}},	{0,{794,794,792,792}},	{0,{794,227,0,0}},
{0,{794,231,0,0}},	{0,{794,795,796,796}},	{0,{796,794,795,795}},
{0,{796,796,797,797}},	{0,{793,793,793,793}},	{0,{796,239,0,0}},
{0,{790,790,791,791}},	{0,{795,796,790,790}},	{0,{795,795,789,789}},
{0,{795,217,0,0}},	{0,{795,221,0,0}},	{0,{795,233,0,0}},
{0,{795,219,0,0}},	{0,{777,777,777,777}},	{0,{794,783,783,783}},
{0,{785,785,785,785}},	{0,{793,0,0,0}},	{0,{793,773,773,773}},
{0,{793,779,779,779}},	{0,{793,781,781,781}},	{0,{793,793,770,770}},
{0,{793,793,769,769}},	{0,{793,793,775,775}},	{0,{793,793,777,777}},
{0,{793,766,766,766}},	{0,{793,772,772,772}},	{0,{793,774,774,774}},
{0,{793,793,770,770}},	{0,{0,0,793,0}},	{0,{793,0,0,0}},
{0,{793,767,767,767}},	{0,{793,766,766,766}},	{0,{793,765,765,765}},
{0,{793,794,794,794}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,794,794,794}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,788,788,788}},	{0,{793,790,790,790}},	{0,{793,793,793,0}},
{0,{793,793,793,755}},	{0,{793,793,793,784}},	{0,{793,793,793,786}},
{0,{752,793,752,752}},	{0,{793,751,751,751}},	{0,{793,780,780,780}},
{0,{793,782,782,782}},	{0,{793,748,748,748}},	{0,{793,747,747,747}},
{0,{793,776,776,776}},	{0,{793,775,775,775}},	{0,{793,777,777,777}},
{0,{793,776,776,776}},	{0,{793,742,793,742}},	{0,{793,771,793,771}},
{0,{793,773,793,773}},	{0,{793,793,793,0}},	{0,{793,793,793,738}},
{0,{0,0,793,0}},	{0,{736,736,793,736}},	{0,{793,735,735,735}},
{0,{793,793,793,793}},	{0,{793,793,793,793}},	{0,{793,791,791,791}},
{0,{793,790,790,790}},	{0,{789,789,793,789}},	{0,{793,788,788,788}},
{0,{793,788,788,788}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,793,793,793}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,793,793,793}},	{0,{793,793,793,793}},	{0,{793,793,793,793}},
{0,{793,788,788,788}},	{0,{793,0,0,0}},	{0,{793,787,787,787}},
{0,{793,789,789,789}},	{0,{793,784,784,784}},	{0,{793,0,0,0}},
{0,{793,783,783,783}},	{0,{793,785,785,785}},	{0,{793,793,793,793}},
{0,{793,793,793,793}},	{0,{793,791,791,791}},	{0,{793,790,790,790}},
{0,{793,793,793,793}},	{0,{793,793,793,775}},	{0,{793,793,793,0}},
{0,{793,793,793,793}},	{0,{793,793,793,793}},	{0,{793,793,793,794}},
{0,{794,794,794,795}},	{0,{794,794,794,794}},	{0,{794,794,794,781}},
{0,{794,794,794,794}},	{0,{794,794,794,795}},	{0,{794,794,794,794}},
{0,{794,794,794,794}},	{0,{794,793,793,793}},	{0,{794,792,792,792}},
{18,{0,0,0,0}},	{19,{0,0,0,0}},	{18,{762,762,762,762}},
{19,{761,761,761,761}},	{18,{787,787,787,787}},	{19,{786,786,786,786}},
{18,{761,0,0,0}},	{19,{760,0,0,0}},	{18,{784,783,783,783}},
{19,{783,782,782,782}},	{18,{761,0,0,0}},	{19,{760,0,0,0}},
{18,{781,779,779,779}},	{19,{780,778,778,778}},	{18,{766,766,766,0}},
{19,{765,765,765,0}},	{18,{766,766,766,766}},	{19,{765,765,765,765}},
{18,{767,767,767,768}},	{19,{766,766,766,767}},	{0,{774,774,774,774}},
{0,{774,774,774,774}},	{0,{774,772,772,772}},	{0,{774,771,771,771}},
{0,{774,774,774,775}},	{0,{775,775,775,776}},	{0,{776,776,776,776}},
{0,{776,776,776,776}},	{0,{771,771,771,771}},	{0,{772,772,772,772}},
{0,{774,774,774,775}},	{0,{775,775,775,776}},	{0,{775,775,775,775}},
{0,{775,775,775,761}},	{0,{775,775,775,775}},	{0,{775,775,775,776}},
{0,{776,776,776,776}},	{0,{774,774,774,774}},	{0,{775,775,775,776}},
{0,{776,776,776,777}},	{0,{774,774,774,774}},	{0,{775,775,775,775}},
{23,{0,0,0,0}},	{23,{739,739,739,739}},	{23,{742,742,742,742}},
{0,{772,772,772,772}},	{0,{772,772,772,772}},	{29,{0,0,0,0}},
{0,{771,771,771,771}},	{0,{771,771,771,771}},	{0,{771,771,771,772}},
{0,{772,772,772,772}},	{0,{770,770,770,770}},	{0,{771,771,771,772}},
{0,{771,771,771,771}},	{0,{0,0,771,0}},	{0,{0,0,771,0}},
{0,{771,771,771,771}},	{0,{771,771,771,771}},	{0,{771,771,771,771}},
{0,{771,771,771,771}},	{0,{771,771,771,771}},	{0,{771,771,771,771}},
{0,{771,771,771,771}},	{0,{771,771,771,771}},	{0,{771,771,771,0}},
{0,{771,771,771,772}},	{0,{771,771,771,771}},	{0,{771,771,771,771}},
{0,{771,771,771,771}},	{0,{771,771,771,771}},	{0,{771,0,0,0}},
{0,{771,771,771,772}},	{0,{772,772,772,773}},	{0,{770,770,770,770}},
{0,{771,771,771,771}},	{77,{0,0,0,0}},	{78,{0,0,0,0}},
{77,{765,765,765,766}},	{77,{703,703,703,703}},	{77,{765,765,765,766}},
{18,{762,762,762,763}},	{19,{761,761,761,762}},	{18,{762,762,762,763}},
{19,{761,761,761,762}},	{0,{762,762,762,762}},	{0,{762,762,762,762}},
{0,{762,762,762,762}},	{0,{762,762,762,762}},	{94,{760,760,760,760}},
{94,{0,0,0,0}},	{94,{759,759,759,759}},	{94,{690,690,690,690}},
{94,{693,693,693,693}},	{0,{757,757,757,757}},	{18,{756,756,756,756}},
{19,{755,755,755,755}},	{0,{755,755,755,755}},	{0,{755,755,755,755}},
{0,{755,755,755,755}},	{102,{0,0,0,0}},	{104,{0,0,0,0}},
{0,{753,753,753,0}},	{0,{753,753,753,753}},	{0,{753,753,753,753}},
{0,{753,753,753,753}},	{0,{753,0,753,0}},	{0,{753,753,753,0}},
{0,{753,753,753,753}},	{0,{753,753,753,753}},	{0,{753,754,755,755}},
{0,{755,756,757,757}},	{0,{756,756,756,756}},	{0,{756,757,758,758}},
{0,{758,756,757,757}},	{0,{756,756,756,756}},	{0,{757,757,755,755}},
{0,{757,758,759,759}},	{0,{759,760,761,761}},	{0,{760,760,760,760}},
{0,{760,761,0,0}},	{0,{761,760,0,0}},	{0,{761,761,0,0}},
{0,{761,753,753,753}},	{0,{761,755,755,755}},	{0,{761,0,0,0}},
{0,{761,0,0,0}},	{0,{761,743,744,744}},	{0,{761,753,0,0}},
{0,{761,0,0,0}},	{0,{761,741,741,741}},	{0,{761,740,740,740}},
{0,{761,762,733,733}},	{0,{762,763,735,735}},	{0,{763,764,737,737}},
{0,{764,763,736,736}},	{0,{764,765,740,740}},	{0,{765,766,742,742}},
{0,{766,767,0,0}},	{0,{767,766,0,0}},	{0,{767,758,731,731}},
{0,{767,764,0,0}},	{0,{767,768,769,769}},	{0,{769,770,771,771}},
{0,{771,770,770,770}},	{0,{771,772,766,766}},	{0,{772,773,768,768}},
{0,{773,774,775,775}},	{0,{775,776,777,777}},	{0,{776,776,776,776}},
{0,{776,774,775,775}},	{0,{776,776,774,774}},	{0,{776,772,773,773}},
{0,{776,772,772,772}},	{0,{776,771,771,771}},	{0,{776,777,778,778}},
{0,{778,779,780,780}},	{0,{779,779,779,779}},	{0,{779,777,778,778}},
{0,{779,780,774,774}},	{0,{780,776,776,776}},	{0,{780,775,775,775}},
{0,{780,781,782,782}},	{0,{782,780,781,781}},	{0,{780,780,780,780}},
{0,{781,781,779,779}},	{0,{781,782,783,783}},	{0,{783,784,782,782}},
{0,{784,785,781,781}},	{0,{785,706,707,707}},	{0,{785,706,706,706}},
{0,{785,710,0,0}},	{0,{785,0,0,0}},	{0,{785,728,703,703}},
{0,{785,731,0,0}},	{0,{785,738,739,739}},	{0,{785,738,738,738}},
{0,{785,742,737,737}},	{0,{785,786,787,787}},	{0,{787,788,789,789}},
{0,{788,788,788,788}},	{0,{788,786,787,787}},	{0,{788,788,789,789}},
{0,{788,788,788,788}},	{0,{788,748,749,749}},	{0,{788,754,748,748}},
{0,{788,789,790,790}},	{0,{790,788,789,789}},	{0,{788,788,788,788}},
{0,{789,786,787,787}},	{0,{789,789,786,786}},	{0,{789,790,780,780}},
{0,{790,789,779,779}},	{0,{790,788,778,778}},	{0,{790,749,750,750}},
{0,{790,781,781,781}},	{0,{790,780,780,780}},	{0,{790,779,779,779}},
{0,{790,750,751,751}},	{0,{790,752,750,750}},	{0,{790,753,749,749}},
{0,{790,791,792,792}},	{0,{792,779,769,769}},	{0,{792,673,673,673}},
{0,{792,0,0,0}},	{0,{792,709,709,709}},	{0,{792,733,727,727}},
{0,{792,729,729,729}},	{0,{792,743,741,741}},	{0,{792,667,667,667}},
{0,{792,0,0,0}},	{0,{792,703,703,703}},	{0,{792,727,721,721}},
{0,{792,723,723,723}},	{0,{792,737,735,735}},	{0,{661,661,661,661}},
{0,{698,698,698,698}},	{0,{705,705,705,705}},	{0,{715,721,715,715}},
{0,{730,732,730,730}},	{0,{745,787,745,745}},	{0,{772,772,772,772}},
{0,{643,643,643,643}},	{0,{688,688,688,688}},	{0,{709,709,709,709}},
{0,{724,724,724,724}},	{0,{739,739,739,739}},	{0,{637,637,638,638}},
{0,{639,639,640,640}},	{0,{641,641,642,642}},	{0,{645,645,646,646}},
{0,{647,647,648,648}},	{0,{649,649,0,0}},	{0,{661,661,632,632}},
{0,{662,662,634,634}},	{0,{663,663,636,636}},	{0,{665,665,640,640}},
{0,{666,666,642,642}},	{0,{667,667,0,0}},	{0,{671,671,672,672}},
{0,{673,673,674,674}},	{0,{676,676,670,670}},	{0,{677,677,672,672}},
{0,{678,678,679,679}},	{0,{680,680,681,681}},	{0,{763,763,764,764}},
{0,{764,764,765,765}},	{0,{765,765,766,766}},	{0,{766,766,767,767}},
{0,{767,767,768,768}},	{0,{767,767,767,767}},	{0,{762,762,762,762}},
{0,{763,763,763,763}},	{0,{690,690,691,691}},	{0,{764,764,765,765}},
{0,{765,765,760,760}},	{0,{763,763,763,763}},	{0,{764,764,762,762}},
{0,{764,764,757,757}},	{0,{764,764,765,765}},	{0,{765,765,766,766}},
{0,{766,766,767,767}},	{0,{713,713,714,714}},	{0,{718,718,708,708}},
{0,{728,728,729,729}},	{0,{744,744,744,744}},	{0,{745,745,745,745}},
{0,{757,757,757,757}},	{0,{758,758,758,758}},	{0,{759,759,759,759}},
{0,{759,739,739,739}},	{0,{759,740,740,740}},	{0,{759,741,741,741}},
{0,{759,742,742,742}},	{148,{594,594,594,594}},	{148,{596,596,596,596}},
{148,{603,603,603,603}},	{148,{0,0,0,0}},	{148,{647,647,647,647}},
{148,{657,657,657,657}},	{148,{664,664,664,664}},	{148,{687,687,687,687}},
{148,{689,689,689,689}},	{148,{693,693,693,693}},	{0,{749,749,750,750}},
{0,{749,749,749,749}},	{154,{0,0,0,0}},	{154,{638,638,638,638}},
{154,{648,648,648,648}},	{154,{655,655,655,655}},	{154,{678,678,678,678}},
{154,{680,680,680,680}},	{154,{684,684,684,684}},	{0,{642,642,643,643}},
{0,{673,673,674,674}},	{156,{576,576,576,576}},	{156,{0,0,0,0}},
{156,{628,628,628,628}},	{156,{638,638,638,638}},	{156,{669,669,669,669}},
{156,{671,671,671,671}},	{0,{734,574,575,575}},	{0,{734,574,574,574}},
{0,{734,598,573,573}},	{0,{734,609,610,610}},	{0,{734,609,609,609}},
{0,{734,613,608,608}},	{0,{734,735,736,736}},	{0,{736,737,738,738}},
{0,{737,737,737,737}},	{0,{737,735,736,736}},	{0,{737,737,735,735}},
{0,{737,738,731,731}},	{0,{738,733,733,733}},	{0,{738,732,732,732}},
{0,{738,633,634,634}},	{0,{738,635,633,633}},	{0,{738,636,632,632}},
{0,{738,557,558,558}},	{0,{738,557,557,557}},	{0,{738,581,556,556}},
{0,{738,592,593,593}},	{0,{738,592,592,592}},	{0,{738,596,591,591}},
{0,{738,718,719,719}},	{0,{738,725,718,718}},	{0,{738,719,720,720}},
{0,{738,719,719,719}},	{0,{738,620,621,621}},	{0,{738,622,620,620}},
{0,{738,623,619,619}},	{0,{738,545,545,545}},	{0,{738,582,582,582}},
{0,{738,717,710,710}},	{0,{738,617,615,615}},	{0,{708,715,708,708}},
{0,{707,707,707,707}},	{0,{736,736,737,737}},	{0,{737,737,738,738}},
{0,{738,738,737,737}},	{0,{734,734,734,734}},	{0,{735,735,735,735}},
{0,{703,703,704,704}},	{148,{703,703,703,703}},	{0,{734,735,736,736}},
{0,{736,734,735,735}},	{0,{734,734,734,734}},	{0,{735,735,733,733}},
{0,{735,732,732,732}},	{0,{735,731,731,731}},	{0,{729,729,730,730}},
{154,{695,695,695,695}},	{156,{694,694,694,694}},	{0,{732,586,580,580}},
{0,{732,582,582,582}},	{0,{732,584,578,578}},	{0,{732,583,577,577}},
{0,{732,733,734,734}},	{0,{734,732,733,733}},	{0,{732,732,732,732}},
{0,{733,733,731,731}},	{0,{733,730,730,730}},	{0,{733,729,729,729}},
{0,{727,727,728,728}},	{154,{727,727,727,727}},	{0,{731,0,731,0}},
{0,{731,732,733,733}},	{0,{733,731,732,732}},	{0,{731,731,731,731}},
{0,{732,732,730,730}},	{0,{732,729,729,729}},	{0,{732,728,728,728}},
{0,{732,733,733,733}},	{0,{732,732,732,732}},	{0,{732,732,732,732}},
{0,{732,732,732,732}},	{0,{732,732,732,732}},	{0,{721,721,722,722}},
{148,{721,721,721,721}},	{148,{726,726,726,726}},	{148,{726,726,726,726}},
{148,{726,726,726,726}},	{148,{726,726,726,726}},	{154,{723,723,723,723}},
{154,{723,723,723,723}},	{0,{724,724,724,724}},	{148,{723,723,723,723}},
{154,{722,722,722,722}},	{178,{722,723,724,724}},	{0,{724,725,726,726}},
{0,{725,725,725,725}},	{178,{725,723,724,724}},	{178,{721,722,723,723}},
{177,{722,722,722,722}},	{178,{524,525,520,520}},	{178,{509,510,0,0}},
{178,{510,509,0,0}},	{177,{0,0,0,0}},	{178,{517,516,516,516}},
{178,{487,0,0,0}},	{178,{487,0,0,0}},	{0,{716,713,714,714}},
{181,{715,712,713,713}},	{181,{712,712,712,712}},	{181,{709,710,711,711}},
{181,{503,500,0,0}},	{181,{0,0,0,0}},	{181,{499,498,0,0}},
{181,{482,0,0,0}},	{181,{478,0,0,0}},	{0,{708,705,705,705}},
{0,{708,704,704,704}},	{178,{550,507,502,502}},	{178,{548,501,501,501}},
{181,{545,491,0,0}},	{181,{542,0,0,0}},	{178,{581,498,498,498}},
{178,{579,0,0,0}},	{178,{585,496,496,496}},	{178,{583,0,0,0}},
{178,{0,0,0,0}},	{178,{493,493,493,493}},	{178,{690,690,690,690}},
{178,{692,692,692,692}},	{0,{688,688,688,688}},	{0,{686,686,687,687}},
{0,{688,688,689,689}},	{183,{688,688,688,688}},	{184,{687,687,687,687}},
{183,{0,0,0,0}},	{184,{0,0,0,0}},	{148,{684,684,684,684}},
{185,{683,683,683,683}},	{185,{0,0,0,0}},	{0,{0,686,0,0}},
{156,{680,680,680,680}},	{189,{679,679,679,679}},	{189,{0,0,0,0}},
{0,{683,673,674,674}},	{192,{0,0,0,0}},	{0,{682,682,682,682}},
{148,{681,681,681,681}},	{0,{681,681,681,681}},	{0,{681,681,681,681}},
{0,{681,681,681,681}},	{0,{681,682,681,681}},	{0,{682,682,682,682}},
{0,{679,679,679,679}},	{0,{681,681,681,681}},	{0,{681,681,681,681}},
{148,{678,678,678,678}},	{202,{0,0,0,0}},	{0,{679,679,462,462}},
{0,{679,679,0,0}},	{0,{679,679,679,679}},	{148,{678,678,678,678}},
{154,{677,677,677,677}},	{178,{677,677,677,677}},	{0,{676,676,676,676}},
{183,{675,675,675,675}},	{208,{0,0,0,0}},	{206,{0,0,0,0}},
{148,{672,672,672,672}},	{209,{0,0,0,0}},	{212,{0,0,0,0}},
{214,{0,0,0,0}},	{218,{0,0,0,0}},	{219,{0,0,0,0}},
{220,{0,0,0,0}},	{223,{410,410,410,410}},	{223,{0,0,0,0}},
{225,{0,0,0,0}},	{223,{453,453,453,453}},	{223,{662,663,662,662}},
{0,{661,661,661,661}},	{0,{662,662,662,662}},	{0,{662,662,662,662}},
{0,{662,662,662,662}},	{223,{660,662,660,660}},	{223,{662,663,662,662}},
{0,{661,661,661,661}},	{0,{662,662,662,662}},	{223,{489,489,489,489}},
{223,{652,652,652,652}},	{223,{654,654,654,654}},	{223,{656,656,656,656}},
{0,{658,658,658,658}},	{0,{658,658,658,658}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{0,{658,658,658,658}},	{0,{658,658,658,658}},
{0,{658,658,658,658}},	{223,{658,659,658,658}},	{0,{657,657,657,657}},
{223,{656,656,656,656}},	{0,{657,657,657,657}},	{234,{0,0,0,0}},
{234,{593,593,593,593}},	{0,{655,655,655,655}},	{0,{655,655,655,655}},
{0,{655,655,655,655}},	{0,{655,655,655,655}},	{0,{603,603,603,655}},
{0,{0,0,0,655}},	{0,{649,649,649,655}},	{0,{649,649,649,655}},
{0,{464,464,464,655}},	{0,{648,648,648,655}},	{0,{596,596,596,655}},
{0,{597,597,597,655}},	{0,{646,646,646,655}},	{0,{596,596,596,655}},
{237,{593,593,593,593}},	{237,{0,0,0,0}},	{237,{456,456,456,456}},
{237,{591,591,591,591}},	{0,{651,651,651,651}},	{241,{651,651,651,651}},
{239,{650,650,650,650}},	{0,{649,649,649,649}},	{241,{0,0,0,0}},
{239,{0,0,0,0}},	{181,{646,646,646,646}},	{239,{646,646,646,646}},
{0,{645,645,645,645}},	{239,{645,645,645,645}},	{0,{644,644,644,644}},
{234,{641,641,641,641}},	{0,{643,643,643,643}},	{0,{643,643,643,643}},
{0,{638,638,638,643}},	{0,{640,640,640,643}},	{0,{589,589,589,643}},
{0,{639,639,639,643}},	{237,{634,634,634,634}},	{237,{586,586,586,586}},
{225,{595,595,0,0}},	{239,{596,596,596,596}},	{211,{0,0,0,0}},
{213,{0,0,0,0}},	{0,{0,637,0,0}},	{255,{0,0,0,0}},
{255,{382,382,382,382}},	{0,{392,635,392,392}},	{0,{0,635,0,0}},
{0,{422,635,422,422}},	{255,{429,429,429,429}},	{0,{634,634,634,634}},
{0,{497,634,497,497}},	{255,{541,541,541,541}},	{255,{555,555,555,555}},
{255,{553,553,553,553}},	{255,{554,554,554,554}},	{255,{554,554,554,554}},
{178,{629,629,629,629}},	{0,{628,628,628,628}},	{177,{627,627,627,627}},
{255,{626,626,626,626}},	{181,{625,625,625,625}},	{178,{625,625,625,625}},
{0,{624,624,624,624}},	{177,{623,623,623,623}},	{255,{622,622,622,622}},
{181,{621,621,621,621}},	{183,{619,619,619,619}},	{0,{620,620,620,620}},
{184,{617,617,617,617}},	{0,{619,619,619,619}},	{148,{615,615,615,615}},
{185,{614,614,614,614}},	{183,{614,614,614,614}},	{0,{616,616,616,616}},
{184,{612,612,612,612}},	{148,{611,611,611,611}},	{185,{610,610,610,610}},
{260,{608,608,608,608}},	{260,{0,0,0,0}},	{260,{607,607,607,607}},
{156,{605,605,605,605}},	{189,{604,604,604,604}},	{156,{604,604,604,604}},
{189,{603,603,603,603}},	{0,{606,606,606,606}},	{255,{605,605,605,605}},
{181,{604,604,604,604}},	{148,{603,603,603,603}},	{185,{602,602,602,602}},
{260,{601,601,601,601}},	{156,{600,600,600,600}},	{189,{599,599,599,599}},
{255,{531,531,531,531}},	{0,{536,598,536,536}},	{0,{598,598,598,598}},
{0,{598,598,521,521}},	{0,{598,598,520,520}},	{0,{598,598,598,0}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,599,599}},	{0,{598,598,598,598}},	{0,{598,598,597,597}},
{0,{598,598,599,599}},	{0,{598,598,598,598}},	{0,{598,598,597,597}},
{0,{598,598,598,598}},	{0,{598,598,599,599}},	{0,{598,598,598,598}},
{0,{598,598,597,597}},	{0,{598,598,596,596}},	{0,{598,598,599,599}},
{0,{598,598,598,598}},	{0,{598,598,599,599}},	{0,{599,599,598,598}},
{0,{597,597,597,597}},	{0,{598,598,599,599}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,0}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,598,598,598}},	{0,{598,598,598,598}},	{0,{598,598,598,598}},
{0,{598,599,599,599}},	{0,{599,598,598,598}},	{0,{597,597,597,597}},
{148,{596,596,596,596}},	{333,{239,238,0,0}},	{333,{239,239,0,0}},
{333,{594,593,593,593}},	{333,{592,592,592,592}},	{333,{240,0,0,0}},
{333,{0,0,0,0}},	{333,{257,256,0,0}},	{334,{0,0,0,0}},
{333,{230,230,0,0}},	{333,{253,253,0,0}},	{0,{587,588,588,588}},
{0,{588,587,587,587}},	{0,{586,586,586,586}},	{148,{585,585,585,585}},
{333,{585,584,584,584}},	{333,{583,583,583,583}},	{334,{582,582,582,582}},
{154,{581,581,581,581}},	{0,{582,0,0,0}},	{0,{582,579,579,579}},
{333,{450,451,452,452}},	{333,{451,451,451,451}},	{333,{449,449,450,450}},
{223,{575,575,575,575}},	{225,{574,574,574,574}},	{234,{573,573,573,573}},
{0,{572,572,572,576}},	{0,{576,576,576,576}},	{255,{575,575,575,575}},
{255,{569,569,569,569}},	{148,{573,573,573,573}},	{0,{573,573,573,573}},
{0,{573,573,574,574}},	{0,{573,573,573,573}},	{0,{573,573,573,573}},
{0,{573,573,573,0}},	{0,{573,573,573,428}},	{360,{0,0,0,0}},
{0,{572,572,572,572}},	{0,{572,572,572,572}},	{0,{572,572,572,572}},
{0,{572,573,574,574}},	{0,{573,573,573,573}},	{0,{573,572,572,572}},
{0,{573,574,571,571}},	{0,{201,574,0,0}},	{0,{201,491,0,0}},
{0,{573,574,575,575}},	{0,{575,576,574,574}},	{0,{573,573,573,573}},
{0,{570,574,572,572}},	{0,{574,575,576,576}},	{0,{575,575,575,575}},
{0,{212,575,0,0}},	{0,{575,568,568,568}},	{0,{575,567,567,567}},
{0,{257,563,0,0}},	{0,{257,480,0,0}},	{0,{258,570,0,0}},
{0,{185,478,0,0}},	{0,{562,571,562,562}},	{0,{0,0,0,571}},
{0,{553,553,553,571}},	{0,{559,559,559,571}},	{0,{563,563,563,571}},
{0,{549,549,550,550}},	{0,{552,552,549,549}},	{0,{557,557,555,555}},
{0,{558,558,559,559}},	{148,{546,546,546,546}},	{148,{552,552,552,552}},
{148,{556,556,556,556}},	{154,{550,550,550,550}},	{376,{0,0,0,0}},
{223,{0,463,0,0}},	{223,{547,556,547,547}},	{223,{546,546,546,546}},
{225,{545,545,545,545}},	{223,{558,559,558,558}},	{0,{557,557,557,557}},
{0,{558,558,558,558}},	{223,{558,559,558,558}},	{0,{557,557,557,557}},
{0,{558,558,558,558}},	{223,{552,552,552,552}},	{223,{554,554,554,554}},
{0,{556,556,556,556}},	{0,{556,556,556,556}},	{0,{556,556,556,556}},
{0,{556,556,556,556}},	{234,{532,532,532,532}},	{0,{555,555,555,555}},
{0,{555,555,555,555}},	{0,{555,555,555,555}},	{0,{528,528,528,555}},
{0,{551,551,551,555}},	{0,{540,540,540,555}},	{0,{550,550,550,555}},
{0,{541,541,541,555}},	{0,{549,549,549,555}},	{237,{522,522,522,522}},
{237,{535,535,535,535}},	{237,{537,537,537,537}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{0,0,552,0}},	{0,{516,516,552,516}},
{255,{515,515,515,515}},	{0,{551,551,551,551}},	{0,{551,551,551,551}},
{255,{549,549,549,549}},	{0,{548,550,548,548}},	{0,{547,547,550,547}},
{148,{546,546,546,546}},	{148,{546,546,546,546}},	{0,{548,0,548,0}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,548,548,548}},
{0,{548,548,548,548}},	{0,{548,548,548,548}},	{0,{548,549,550,550}},
{0,{550,549,549,549}},	{0,{548,548,548,548}},	{0,{549,550,550,550}},
{0,{550,549,549,549}},	{0,{548,548,548,548}},	{0,{549,550,551,551}},
{0,{551,550,550,550}},	{0,{549,549,549,549}},	{0,{550,548,548,548}},
{0,{550,547,547,547}},	{0,{550,551,552,552}},	{0,{552,551,551,551}},
{0,{550,550,550,550}},	{0,{551,552,552,552}},	{0,{552,551,551,551}},
{0,{550,550,550,550}},	{0,{551,552,0,0}},	{0,{552,0,0,0}},
{0,{552,0,0,0}},	{0,{552,0,0,0}},	{0,{552,541,542,542}},
{0,{552,544,544,544}},	{0,{552,546,0,0}},	{0,{552,0,0,0}},
{0,{552,532,532,532}},	{0,{552,0,0,0}},	{0,{552,0,0,0}},
{0,{552,529,529,529}},	{0,{552,528,528,528}},	{0,{552,519,520,520}},
{0,{552,519,519,519}},	{0,{552,521,521,521}},	{0,{552,520,520,520}},
{0,{552,522,523,523}},	{0,{552,522,522,522}},	{0,{552,521,521,521}},
{0,{552,525,526,526}},	{0,{552,525,525,525}},	{0,{552,527,527,527}},
{0,{552,526,526,526}},	{0,{552,528,0,0}},	{0,{552,0,0,0}},
{0,{552,0,0,0}},	{0,{552,513,513,513}},	{0,{552,0,0,0}},
{0,{552,553,554,554}},	{0,{554,553,553,553}},	{0,{552,552,552,552}},
{0,{553,554,555,555}},	{0,{555,554,554,554}},	{0,{553,553,553,553}},
{0,{554,551,552,552}},	{0,{554,546,547,547}},	{0,{554,546,546,546}},
{0,{554,548,549,549}},	{0,{554,548,548,548}},	{0,{554,555,556,556}},
{0,{556,555,555,555}},	{0,{554,554,554,554}},	{0,{555,556,556,556}},
{0,{556,555,555,555}},	{0,{554,554,554,554}},	{0,{555,556,553,553}},
{0,{556,552,552,552}},	{0,{556,551,551,551}},	{0,{556,550,550,550}},
{0,{556,549,549,549}},	{0,{556,557,558,558}},	{0,{558,559,559,559}},
{0,{556,556,556,556}},	{0,{558,559,559,559}},	{0,{559,558,558,558}},
{0,{557,557,557,557}},	{0,{558,559,556,556}},	{0,{559,550,551,551}},
{0,{552,552,552,552}},	{0,{558,553,553,553}},	{0,{558,555,552,552}},
{0,{558,559,559,559}},	{0,{559,558,558,558}},	{0,{557,557,557,557}},
{0,{558,556,556,556}},	{0,{558,555,555,555}},	{0,{558,559,560,560}},
{0,{560,561,561,561}},	{0,{558,558,558,558}},	{0,{560,556,557,557}},
{0,{558,558,558,558}},	{0,{559,554,555,555}},	{0,{559,556,556,556}},
{0,{559,471,472,472}},	{0,{559,470,471,471}},	{0,{559,0,0,0}},
{0,{559,0,0,0}},	{0,{559,467,468,468}},	{0,{559,0,0,0}},
{0,{559,506,507,507}},	{0,{559,505,506,506}},	{0,{559,504,505,505}},
{0,{559,560,561,561}},	{0,{561,562,562,562}},	{0,{559,559,559,559}},
{0,{561,562,562,562}},	{0,{562,561,561,561}},	{0,{560,560,560,560}},
{0,{561,562,559,559}},	{0,{562,563,563,563}},	{0,{562,562,562,562}},
{0,{562,516,517,517}},	{0,{562,515,516,516}},	{0,{562,563,563,563}},
{0,{563,562,562,562}},	{0,{561,561,561,561}},	{0,{562,560,560,560}},
{0,{562,559,559,559}},	{0,{562,558,558,558}},	{0,{562,553,553,553}},
{0,{562,552,552,552}},	{0,{562,551,551,551}},	{0,{562,550,550,550}},
{0,{562,517,517,517}},	{0,{562,552,552,552}},	{0,{562,551,551,551}},
{0,{562,550,550,550}},	{0,{562,518,519,519}},	{0,{562,517,518,518}},
{0,{562,516,517,517}},	{0,{562,563,564,564}},	{0,{564,563,563,563}},
{0,{562,562,562,562}},	{0,{563,564,539,539}},	{0,{564,430,431,431}},
{0,{564,436,0,0}},	{0,{564,469,470,470}},	{0,{564,490,491,491}},
{0,{564,497,494,494}},	{0,{564,506,507,507}},	{0,{424,424,425,425}},
{0,{430,430,0,0}},	{0,{463,463,464,464}},	{0,{484,484,485,485}},
{0,{491,491,488,488}},	{0,{500,500,501,501}},	{0,{519,519,519,519}},
{0,{557,558,558,558}},	{0,{557,557,557,557}},	{0,{557,558,558,558}},
{0,{557,557,557,557}},	{0,{557,558,558,558}},	{0,{557,557,557,557}},
{0,{557,558,558,558}},	{0,{557,557,557,557}},	{0,{557,558,558,558}},
{0,{557,557,557,557}},	{0,{557,558,558,558}},	{0,{557,557,557,557}},
{0,{557,552,552,552}},	{0,{557,555,555,555}},	{0,{557,550,550,550}},
{0,{557,558,558,558}},	{0,{557,557,557,557}},	{0,{557,558,558,558}},
{0,{557,557,557,557}},	{0,{557,558,558,558}},	{0,{557,557,557,557}},
{0,{557,557,557,537}},	{0,{557,557,557,538}},	{0,{557,557,557,539}},
{0,{557,557,557,540}},	{0,{557,558,558,558}},	{0,{557,557,557,557}},
{0,{557,391,391,391}},	{0,{557,390,390,390}},	{0,{557,389,389,389}},
{0,{557,429,429,429}},	{0,{557,428,428,428}},	{0,{557,427,427,427}},
{0,{557,558,558,558}},	{0,{558,559,559,559}},	{0,{556,556,556,556}},
{0,{558,559,559,559}},	{0,{559,558,558,558}},	{0,{557,557,557,557}},
{0,{558,556,556,556}},	{0,{558,555,555,555}},	{0,{558,550,550,550}},
{0,{551,551,551,551}},	{0,{557,552,552,552}},	{0,{557,551,551,551}},
{0,{557,454,454,454}},	{0,{557,453,453,453}},	{0,{557,452,452,452}},
{0,{557,370,370,370}},	{0,{557,369,369,369}},	{0,{557,368,368,368}},
{0,{557,408,408,408}},	{0,{557,407,407,407}},	{0,{557,406,406,406}},
{0,{557,537,537,537}},	{0,{557,536,536,536}},	{0,{557,539,539,539}},
{0,{557,538,538,538}},	{0,{557,441,441,441}},	{0,{557,440,440,440}},
{0,{557,439,439,439}},	{0,{557,357,357,357}},	{0,{557,397,397,397}},
{0,{557,528,528,528}},	{0,{557,435,435,435}},	{0,{557,558,558,558}},
{0,{557,557,557,557}},	{0,{557,558,558,558}},	{0,{557,557,557,557}},
{0,{557,556,556,556}},	{0,{557,558,558,558}},	{0,{558,557,557,557}},
{0,{556,556,556,556}},	{0,{557,555,555,555}},	{0,{557,554,554,554}},
{0,{557,553,553,553}},	{0,{557,552,552,552}},	{0,{557,404,404,404}},
{0,{557,407,407,407}},	{0,{557,402,402,402}},	{0,{557,401,401,401}},
{0,{557,558,558,558}},	{0,{558,557,557,557}},	{0,{556,556,556,556}},
{0,{557,555,555,555}},	{0,{557,554,554,554}},	{0,{557,553,553,553}},
{0,{557,552,552,552}},	{0,{557,557,557,557}},	{0,{557,558,558,558}},
{0,{558,557,557,557}},	{0,{556,556,556,556}},	{0,{557,555,555,555}},
{0,{557,554,554,554}},	{0,{557,553,553,553}},	{0,{557,552,552,552}},
{0,{557,558,558,558}},	{0,{557,557,557,557}},	{0,{557,557,557,557}},
{0,{557,557,557,557}},	{0,{557,557,557,557}},	{0,{557,557,557,557}},
{0,{557,558,559,559}},	{0,{559,558,558,558}},	{0,{557,557,557,557}},
{0,{558,559,559,559}},	{0,{559,558,558,558}},	{0,{557,557,557,557}},
{0,{558,559,556,556}},	{0,{559,555,555,555}},	{0,{559,554,554,554}},
{0,{559,553,553,553}},	{0,{559,559,559,559}},	{0,{559,548,548,548}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{505,505,505,559}},	{0,{0,0,0,559}},	{0,{553,553,553,559}},
{0,{553,553,553,559}},	{0,{371,371,371,559}},	{0,{552,552,552,559}},
{0,{498,498,498,559}},	{0,{499,499,499,559}},	{0,{550,550,550,559}},
{0,{498,498,498,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{554,554,554,559}},	{0,{556,556,556,559}},
{0,{505,505,505,559}},	{0,{555,555,555,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,560,560,560}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,560,560,560}},	{0,{559,559,559,559}},
{0,{559,558,558,558}},	{0,{559,560,560,560}},	{0,{559,559,559,559}},
{0,{559,558,558,558}},	{0,{559,559,559,559}},	{0,{559,560,560,560}},
{0,{559,559,559,559}},	{0,{559,558,558,558}},	{0,{559,557,557,557}},
{0,{559,560,560,560}},	{0,{559,559,559,559}},	{0,{559,560,560,560}},
{0,{559,559,559,559}},	{0,{559,558,558,558}},	{0,{559,560,560,560}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,560,560,560}},	{0,{559,559,559,559}},
{0,{559,558,558,558}},	{0,{559,560,560,560}},	{0,{559,559,559,559}},
{0,{559,558,558,558}},	{0,{0,0,0,559}},	{0,{556,556,556,559}},
{0,{555,555,555,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,560,560,560}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,560,560,560}},
{0,{560,559,559,559}},	{0,{558,558,558,558}},	{0,{559,557,557,557}},
{0,{559,556,556,556}},	{0,{559,555,555,555}},	{0,{559,477,477,477}},
{0,{559,560,560,560}},	{0,{560,561,561,561}},	{0,{558,558,558,558}},
{0,{560,557,557,557}},	{0,{560,556,556,556}},	{0,{560,561,561,561}},
{0,{561,560,560,560}},	{0,{559,559,559,559}},	{0,{560,468,468,468}},
{0,{560,551,551,551}},	{0,{560,550,550,550}},	{0,{551,551,551,551}},
{0,{0,0,0,559}},	{0,{540,540,540,559}},	{0,{546,546,546,559}},
{0,{551,551,551,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{531,531,531,559}},
{0,{555,555,555,559}},	{0,{544,544,544,559}},	{0,{554,554,554,559}},
{0,{545,545,545,559}},	{0,{553,553,553,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{554,554,559,554}},	{0,{0,0,559,0}},	{0,{553,553,559,553}},
{0,{555,555,559,555}},	{0,{559,550,559,550}},	{0,{559,0,559,0}},
{0,{559,549,559,549}},	{0,{559,551,559,551}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{557,557,559,557}},	{0,{559,556,559,556}},
{0,{559,559,559,559}},	{0,{559,541,559,541}},	{0,{559,0,559,0}},
{0,{559,539,559,539}},	{0,{559,0,559,0}},	{0,{559,537,559,537}},
{0,{559,536,559,536}},	{0,{559,0,559,0}},	{0,{559,0,559,0}},
{0,{559,546,559,546}},	{0,{559,545,559,545}},	{0,{559,544,559,544}},
{0,{559,543,559,543}},	{0,{559,559,559,559}},	{0,{558,558,559,558}},
{0,{559,557,559,557}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{557,557,559,557}},	{0,{559,556,559,556}},	{0,{559,560,559,560}},
{0,{559,559,559,559}},	{0,{559,560,559,560}},	{0,{559,559,559,559}},
{0,{559,556,559,556}},	{0,{559,557,559,557}},	{0,{559,554,559,554}},
{0,{559,553,559,553}},	{0,{559,554,559,554}},	{0,{559,553,559,553}},
{0,{559,545,559,545}},	{0,{559,544,559,544}},	{0,{559,560,559,560}},
{0,{559,559,559,559}},	{0,{559,558,559,558}},	{0,{559,540,559,540}},
{0,{559,539,559,539}},	{0,{559,555,559,555}},	{0,{559,554,559,554}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{0,0,0,559}},
{0,{559,559,559,559}},	{0,{559,560,559,560}},	{0,{559,559,559,559}},
{0,{559,558,559,558}},	{0,{559,557,559,557}},	{0,{559,556,559,556}},
{0,{0,0,559,0}},	{0,{559,0,0,0}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,558,559,558}},
{0,{559,557,559,557}},	{0,{0,559,0,0}},	{0,{559,560,559,559}},
{0,{558,558,558,558}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,0,0,0}},	{0,{559,0,559,0}},
{0,{559,0,559,0}},	{0,{559,0,559,0}},	{0,{559,0,559,0}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,0,0,0}},
{0,{559,559,559,559}},	{0,{559,559,559,559}},	{0,{559,559,559,559}},
{0,{559,0,559,0}},	{0,{559,0,0,0}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,560,561,561}},	{0,{561,559,560,560}},
{0,{559,558,559,559}},	{0,{560,557,558,558}},	{0,{560,561,562,562}},
{0,{561,560,561,561}},	{0,{561,559,560,560}},	{0,{561,562,0,0}},
{0,{562,561,0,0}},	{0,{0,560,0,0}},	{0,{561,559,0,0}},
{0,{561,558,0,0}},	{0,{561,557,0,0}},	{0,{546,548,548,548}},
{0,{548,547,547,547}},	{0,{546,546,546,546}},	{0,{547,545,545,545}},
{0,{547,549,549,549}},	{0,{548,548,548,548}},	{0,{548,547,547,547}},
{0,{548,0,0,0}},	{0,{549,0,0,0}},	{0,{549,0,0,0}},
{0,{549,0,0,0}},	{0,{549,0,0,0}},	{0,{549,536,536,536}},
{0,{549,540,540,540}},	{0,{549,0,0,0}},	{0,{549,0,0,0}},
{0,{549,540,0,0}},	{0,{548,0,0,0}},	{0,{548,0,0,0}},
{0,{547,537,0,0}},	{0,{544,536,0,0}},	{0,{546,526,527,527}},
{0,{546,525,526,526}},	{0,{546,529,530,530}},	{0,{546,528,529,529}},
{0,{546,531,0,0}},	{0,{546,530,0,0}},	{0,{546,529,0,0}},
{0,{539,520,520,520}},	{0,{539,519,519,519}},	{0,{539,523,523,523}},
{0,{539,522,522,522}},	{0,{539,0,0,0}},	{0,{539,0,0,0}},
{0,{539,0,0,0}},	{0,{539,521,0,0}},	{0,{538,0,0,0}},
{0,{538,539,540,540}},	{0,{540,538,539,539}},	{0,{538,537,538,538}},
{0,{539,536,537,537}},	{0,{534,536,536,536}},	{0,{536,535,535,535}},
{0,{534,534,534,534}},	{0,{535,533,533,533}},	{0,{535,532,532,532}},
{0,{535,530,531,531}},	{0,{535,529,530,530}},	{0,{533,529,529,529}},
{0,{533,528,528,528}},	{0,{533,534,534,534}},	{0,{534,533,533,533}},
{0,{532,532,532,532}},	{0,{533,531,531,531}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,532,532,532}},	{0,{533,531,531,531}},
{0,{533,530,530,530}},	{0,{533,529,529,529}},	{0,{533,528,528,528}},
{0,{533,527,527,527}},	{0,{533,526,526,526}},	{0,{533,534,534,534}},
{0,{534,533,533,533}},	{0,{532,532,532,532}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,532,532,532}},	{0,{533,531,531,531}},	{0,{533,530,530,530}},
{0,{533,524,524,524}},	{0,{533,528,528,528}},	{0,{533,527,527,527}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,534,534,534}},
{0,{534,533,533,533}},	{0,{532,532,532,532}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,529,529,529}},	{0,{533,528,528,528}},
{0,{533,530,530,530}},	{0,{533,459,459,459}},	{0,{533,458,458,458}},
{0,{533,0,0,0}},	{0,{533,0,0,0}},	{0,{533,455,455,455}},
{0,{533,0,0,0}},	{0,{533,482,482,482}},	{0,{533,481,481,481}},
{0,{533,480,480,480}},	{0,{533,534,534,534}},	{0,{534,533,533,533}},
{0,{532,532,532,532}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,487,487,487}},	{0,{533,486,486,486}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,529,529,529}},
{0,{533,524,524,524}},	{0,{533,523,523,523}},	{0,{533,522,522,522}},
{0,{533,521,521,521}},	{0,{533,488,488,488}},	{0,{533,523,523,523}},
{0,{533,522,522,522}},	{0,{533,521,521,521}},	{0,{533,489,489,489}},
{0,{533,488,488,488}},	{0,{533,487,487,487}},	{0,{533,534,534,534}},
{0,{534,533,533,533}},	{0,{532,532,532,532}},	{0,{533,531,531,531}},
{0,{533,509,509,509}},	{0,{533,508,508,508}},	{0,{533,413,413,413}},
{0,{533,0,0,0}},	{0,{533,440,440,440}},	{0,{533,459,459,459}},
{0,{533,463,463,463}},	{0,{533,475,475,475}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,528,528,528}},
{0,{533,531,531,531}},	{0,{533,526,526,526}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,513,513,513}},
{0,{533,514,514,514}},	{0,{533,515,515,515}},	{0,{533,516,516,516}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,380,380,380}},
{0,{533,379,379,379}},	{0,{533,378,378,378}},	{0,{533,406,406,406}},
{0,{533,405,405,405}},	{0,{533,404,404,404}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,525,525,525}},
{0,{533,528,528,528}},	{0,{533,527,527,527}},	{0,{533,429,429,429}},
{0,{533,428,428,428}},	{0,{533,427,427,427}},	{0,{533,359,359,359}},
{0,{533,358,358,358}},	{0,{533,357,357,357}},	{0,{533,385,385,385}},
{0,{533,384,384,384}},	{0,{533,383,383,383}},	{0,{533,513,513,513}},
{0,{533,512,512,512}},	{0,{533,515,515,515}},	{0,{533,514,514,514}},
{0,{533,416,416,416}},	{0,{533,415,415,415}},	{0,{533,414,414,414}},
{0,{533,346,346,346}},	{0,{533,374,374,374}},	{0,{533,504,504,504}},
{0,{533,410,410,410}},	{0,{533,534,534,534}},	{0,{533,533,533,533}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,529,529,529}},
{0,{533,528,528,528}},	{0,{533,379,379,379}},	{0,{533,383,383,383}},
{0,{533,377,377,377}},	{0,{533,376,376,376}},	{0,{533,534,534,534}},
{0,{533,533,533,533}},	{0,{533,532,532,532}},	{0,{533,531,531,531}},
{0,{533,530,530,530}},	{0,{533,529,529,529}},	{0,{533,528,528,528}},
{0,{533,533,533,0}},	{0,{533,534,535,535}},	{0,{534,533,534,534}},
{0,{534,532,533,533}},	{0,{534,531,532,532}},	{0,{534,530,531,531}},
{0,{534,529,530,530}},	{0,{534,528,529,529}},	{0,{534,535,535,535}},
{0,{534,534,534,534}},	{0,{526,526,526,526}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,534,534,534}},
{0,{534,533,533,533}},	{0,{532,532,532,532}},	{0,{533,531,531,531}},
{0,{533,534,534,534}},	{0,{533,533,533,533}},	{0,{533,532,532,532}},
{0,{533,531,531,531}},	{0,{533,530,530,530}},	{0,{533,529,529,529}},
{0,{533,528,528,528}},	{0,{533,527,527,527}},	{0,{533,0,0,0}},
{0,{533,521,521,521}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,311,311}},	{0,{533,533,0,0}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{472,472,472,533}},	{0,{0,0,0,533}},
{0,{527,527,527,533}},	{0,{527,527,527,533}},	{0,{345,345,345,533}},
{0,{526,526,526,533}},	{0,{473,473,473,533}},	{0,{473,473,473,533}},
{0,{524,524,524,533}},	{0,{472,472,472,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{528,528,528,533}},
{0,{530,530,530,533}},	{0,{479,479,479,533}},	{0,{529,529,529,533}},
{0,{0,0,0,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{533,533,533,533}},
{0,{533,533,533,533}},	{0,{533,533,533,533}},	{0,{455,533,454,454}},
{0,{453,532,453,453}},	{0,{0,0,532,0}},	{0,{532,532,532,532}},
{0,{532,532,532,532}},	{0,{532,532,532,532}},	{0,{532,532,532,532}},
{0,{532,532,532,532}},	{0,{532,532,532,532}},	{0,{532,532,532,532}},
{0,{532,532,532,532}},	{0,{532,532,532,532}},	{0,{532,532,532,532}},
{0,{532,532,532,532}},	{0,{532,532,532,532}},	{0,{532,533,534,534}},
{0,{533,532,533,533}},	{0,{533,531,532,532}},	{0,{529,531,531,531}},
{0,{530,530,530,530}},	{0,{530,529,529,529}},	{0,{530,530,530,530}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,529,529,529}},
{0,{530,528,528,528}},	{0,{530,531,531,531}},	{0,{530,530,530,530}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,529,529,529}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,0,530,0}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,531,531,531}},
{0,{530,530,530,530}},	{0,{530,529,529,529}},	{0,{530,531,531,531}},
{0,{530,530,530,530}},	{0,{530,529,529,529}},	{0,{530,0,0,0}},
{0,{530,527,527,527}},	{0,{526,526,526,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,531,531,531}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{0,530,0,0}},	{0,{386,530,386,386}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,529,529,529}},
{0,{530,528,528,528}},	{0,{530,527,527,527}},	{0,{530,526,526,526}},
{0,{530,451,451,451}},	{0,{530,531,531,531}},	{0,{530,530,530,530}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,527,527,527}},
{0,{530,526,526,526}},	{0,{530,531,531,531}},	{0,{530,530,530,530}},
{0,{530,529,529,529}},	{0,{530,441,441,441}},	{0,{530,521,521,521}},
{0,{530,520,520,520}},	{0,{0,0,0,530}},	{0,{511,511,511,530}},
{0,{517,517,517,530}},	{0,{522,522,522,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{502,502,502,530}},	{0,{526,526,526,530}},	{0,{515,515,515,530}},
{0,{525,525,525,530}},	{0,{516,516,516,530}},	{0,{524,524,524,530}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{0,0,530,0}},	{0,{484,484,530,484}},
{0,{409,409,530,409}},	{0,{525,525,530,525}},	{0,{530,0,530,0}},
{0,{530,530,530,530}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{530,530,530,530}},	{0,{530,528,530,528}},	{0,{530,0,530,0}},
{0,{530,530,530,530}},	{0,{530,530,530,525}},	{0,{530,530,530,0}},
{0,{530,530,530,524}},	{0,{530,530,530,526}},	{0,{530,530,530,521}},
{0,{530,530,530,0}},	{0,{530,530,530,520}},	{0,{530,530,530,522}},
{0,{530,530,530,530}},	{0,{530,529,530,529}},	{0,{530,530,530,528}},
{0,{530,530,530,527}},	{0,{530,530,530,530}},	{0,{530,512,512,512}},
{0,{530,0,0,0}},	{0,{530,510,510,510}},	{0,{530,0,0,0}},
{0,{530,508,508,508}},	{0,{530,507,507,507}},	{0,{530,0,0,0}},
{0,{530,0,0,0}},	{0,{530,517,517,517}},	{0,{530,516,516,516}},
{0,{530,515,515,515}},	{0,{530,514,514,514}},	{0,{530,530,530,530}},
{0,{530,530,530,529}},	{0,{530,530,530,528}},	{0,{530,530,530,530}},
{0,{530,529,530,529}},	{0,{530,530,530,528}},	{0,{530,530,530,527}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,531,531,531}},
{0,{530,530,530,530}},	{0,{530,527,527,527}},	{0,{530,528,528,528}},
{0,{530,525,525,525}},	{0,{530,524,524,524}},	{0,{530,525,525,525}},
{0,{530,524,524,524}},	{0,{530,516,516,516}},	{0,{530,515,515,515}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{530,529,529,529}},
{0,{530,511,511,511}},	{0,{530,510,510,510}},	{0,{530,526,526,526}},
{0,{530,525,525,525}},	{0,{530,530,530,530}},	{0,{530,530,530,530}},
{0,{0,0,0,530}},	{0,{530,0,0,0}},	{0,{530,531,531,531}},
{0,{530,530,530,530}},	{0,{530,529,529,529}},	{0,{530,528,528,528}},
{0,{530,527,527,527}},	{40,{0,0,0,0}},	{0,{529,529,529,0}},
{0,{529,529,529,529}},	{0,{529,529,529,529}},	{0,{529,529,529,530}},
{0,{530,530,530,530}},	{0,{528,528,528,528}},	{0,{529,529,529,529}},
{0,{529,528,528,528}},	{0,{529,527,527,527}},	{0,{529,0,529,0}},
{0,{0,0,529,0}},	{0,{527,0,529,0}},	{0,{529,529,529,529}},
{0,{529,529,529,529}},	{0,{529,529,529,529}},	{0,{529,0,0,0}},
{0,{529,0,0,0}},	{0,{529,0,0,0}},	{0,{529,0,0,0}},
{0,{529,0,0,0}},	{0,{0,0,0,529}},	{0,{0,0,0,529}},
{0,{529,530,529,530}},	{0,{529,529,529,529}},	{0,{529,0,529,0}},
{0,{529,529,529,529}},	{0,{0,529,0,0}},	{0,{529,529,529,529}},
{0,{529,0,0,0}},	{0,{0,529,0,0}},	{0,{529,0,0,0}},
{0,{529,529,529,0}},	{115,{0,0,0,0}},	{0,{528,0,0,0}},
{0,{528,518,528,518}},	{0,{528,528,528,528}},	{0,{528,529,530,530}},
{0,{530,531,531,531}},	{0,{530,530,530,530}},	{0,{527,527,527,527}},
{0,{529,528,528,528}},	{0,{529,530,531,531}},	{0,{531,530,530,530}},
{0,{529,529,529,529}},	{0,{530,528,528,528}},	{0,{530,531,532,532}},
{0,{532,0,0,0}},	{0,{530,530,530,530}},	{0,{531,0,0,0}},
{0,{531,532,0,0}},	{0,{532,0,0,0}},	{0,{532,514,515,515}},
{0,{519,519,520,520}},	{0,{531,523,524,524}},	{0,{527,527,0,0}},
{0,{530,526,0,0}},	{0,{530,525,0,0}},	{0,{530,508,509,509}},
{0,{530,510,510,510}},	{0,{530,512,513,513}},	{0,{530,512,512,512}},
{0,{530,515,516,516}},	{0,{530,0,0,0}},	{0,{530,518,0,0}},
{0,{530,517,0,0}},	{0,{530,531,532,532}},	{0,{532,533,533,533}},
{0,{532,532,532,532}},	{0,{529,529,529,529}},	{0,{531,530,530,530}},
{0,{531,526,527,527}},	{0,{531,525,526,526}},	{0,{531,527,527,527}},
{0,{531,532,533,533}},	{0,{533,533,533,533}},	{0,{531,531,531,531}},
{0,{532,531,531,531}},	{0,{532,533,534,534}},	{0,{533,533,533,533}},
{0,{533,532,532,532}},	{0,{533,534,535,535}},	{0,{534,534,534,534}},
{0,{534,529,529,529}},	{0,{534,527,528,528}},	{0,{534,526,527,527}},
{0,{525,525,526,526}},	{0,{533,534,535,535}},	{0,{535,535,535,535}},
{0,{533,533,533,533}},	{0,{534,535,535,535}},	{0,{534,534,534,534}},
{0,{534,535,536,536}},	{0,{535,535,535,535}},	{0,{535,534,534,534}},
{0,{535,536,537,537}},	{0,{536,536,536,536}},	{0,{536,524,525,525}},
{0,{529,529,530,530}},	{0,{535,532,533,533}},	{0,{535,536,537,537}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,533,534,534}},
{0,{536,533,533,533}},	{0,{536,537,538,538}},	{0,{538,538,538,538}},
{0,{536,536,536,536}},	{0,{537,538,538,538}},	{0,{537,537,537,537}},
{0,{537,532,533,533}},	{0,{537,531,532,532}},	{0,{537,534,534,534}},
{0,{537,538,454,454}},	{0,{538,537,453,453}},	{0,{538,539,0,0}},
{0,{539,538,0,0}},	{0,{539,534,450,450}},	{0,{539,536,0,0}},
{0,{539,540,479,479}},	{0,{540,539,478,478}},	{0,{540,538,477,477}},
{0,{540,541,542,542}},	{0,{542,542,542,542}},	{0,{540,540,540,540}},
{0,{541,542,542,542}},	{0,{541,541,541,541}},	{0,{541,542,543,543}},
{0,{542,542,542,542}},	{0,{542,541,541,541}},	{0,{542,543,544,544}},
{0,{543,543,543,543}},	{0,{543,544,544,544}},	{0,{543,543,543,543}},
{0,{543,544,488,488}},	{0,{544,543,487,487}},	{0,{544,545,546,546}},
{0,{545,545,545,545}},	{0,{545,544,544,544}},	{0,{545,546,543,543}},
{0,{546,545,542,542}},	{0,{546,541,541,541}},	{0,{546,547,534,534}},
{0,{547,533,533,533}},	{0,{547,548,532,532}},	{0,{548,547,531,531}},
{0,{548,549,491,491}},	{0,{549,534,535,535}},	{0,{537,537,534,534}},
{0,{548,536,533,533}},	{0,{548,549,493,493}},	{0,{549,548,492,492}},
{0,{549,547,491,491}},	{0,{549,550,551,551}},	{0,{551,551,551,551}},
{0,{549,549,549,549}},	{0,{550,549,549,549}},	{0,{550,551,552,552}},
{0,{551,551,551,551}},	{0,{407,407,408,408}},	{0,{417,417,418,418}},
{0,{436,436,437,437}},	{0,{459,459,460,460}},	{0,{468,468,469,469}},
{0,{478,478,479,479}},	{0,{545,546,546,546}},	{0,{546,545,545,545}},
{0,{546,547,547,547}},	{0,{547,546,546,546}},	{0,{547,545,545,545}},
{0,{544,544,544,544}},	{0,{546,547,547,547}},	{0,{546,546,546,546}},
{0,{546,538,538,538}},	{0,{537,537,537,537}},	{0,{545,546,546,546}},
{0,{545,545,545,545}},	{0,{545,541,541,541}},	{0,{545,543,543,543}},
{0,{545,539,539,539}},	{0,{545,546,546,546}},	{0,{545,545,545,545}},
{0,{545,546,546,546}},	{0,{545,545,545,545}},	{0,{545,546,546,546}},
{0,{545,545,545,545}},	{0,{545,525,525,525}},	{0,{545,527,527,527}},
{0,{545,526,526,526}},	{0,{545,529,529,529}},	{0,{545,0,0,0}},
{0,{545,0,0,0}},	{0,{545,546,377,377}},	{0,{546,545,376,376}},
{0,{546,544,375,375}},	{0,{546,547,405,405}},	{0,{547,546,404,404}},
{0,{547,545,403,403}},	{0,{547,548,549,549}},	{0,{548,548,548,548}},
{0,{548,549,549,549}},	{0,{548,548,548,548}},	{0,{548,549,550,550}},
{0,{549,549,549,549}},	{0,{549,548,548,548}},	{0,{549,546,547,547}},
{0,{549,546,546,546}},	{0,{549,539,540,540}},	{0,{543,543,544,544}},
{0,{548,542,543,543}},	{0,{548,549,434,434}},	{0,{549,548,433,433}},
{0,{549,547,432,432}},	{0,{549,550,356,356}},	{0,{550,549,355,355}},
{0,{550,548,354,354}},	{0,{550,551,384,384}},	{0,{551,550,383,383}},
{0,{551,549,382,382}},	{0,{551,552,528,528}},	{0,{552,551,527,527}},
{0,{552,553,531,531}},	{0,{553,552,530,530}},	{0,{553,554,421,421}},
{0,{554,553,420,420}},	{0,{554,552,419,419}},	{0,{512,512,343,343}},
{0,{515,515,373,373}},	{0,{518,518,519,519}},	{0,{530,530,415,415}},
{0,{550,551,551,551}},	{0,{550,550,550,550}},	{0,{550,551,551,551}},
{0,{550,550,550,550}},	{0,{550,549,549,549}},	{0,{550,551,552,552}},
{0,{551,551,551,551}},	{0,{551,550,550,550}},	{0,{551,548,549,549}},
{0,{551,548,548,548}},	{0,{551,546,547,547}},	{0,{545,545,546,546}},
{0,{550,551,381,381}},	{0,{551,384,385,385}},	{0,{551,552,379,379}},
{0,{548,548,378,378}},	{0,{551,552,553,553}},	{0,{552,552,552,552}},
{0,{552,551,551,551}},	{0,{552,549,550,550}},	{0,{552,549,549,549}},
{0,{552,547,548,548}},	{0,{546,546,547,547}},	{0,{551,551,0,0}},
{0,{551,552,553,553}},	{0,{553,552,552,552}},	{0,{551,551,551,551}},
{0,{552,550,550,550}},	{0,{552,548,549,549}},	{0,{552,548,548,548}},
{0,{552,546,547,547}},	{0,{545,545,546,546}},	{0,{551,551,552,552}},
{0,{551,551,551,551}},	{0,{551,0,551,0}},	{0,{551,549,551,549}},
{0,{0,0,0,551}},	{0,{336,551,331,331}},	{0,{332,551,332,332}},
{0,{329,551,329,329}},	{0,{334,549,330,330}},	{0,{323,550,0,0}},
{0,{0,550,0,0}},	{0,{320,549,0,0}},	{0,{318,549,304,304}},
{0,{303,549,303,303}},	{0,{319,545,0,0}},	{0,{310,544,0,0}},
{0,{304,543,0,0}},	{187,{0,0,0,0}},	{0,{464,545,320,320}},
{0,{545,0,0,0}},	{0,{545,546,545,545}},	{0,{544,544,544,544}},
{0,{545,543,543,543}},	{0,{545,545,545,359}},	{0,{545,545,545,360}},
{0,{545,545,545,0}},	{0,{545,545,545,433}},	{0,{545,545,545,429}},
{0,{545,545,545,310}},	{0,{545,545,545,0}},	{0,{0,0,0,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,543,543,543}},	{0,{545,545,545,545}},	{0,{545,544,544,544}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,546,546,546}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,320,320,320}},	{0,{545,0,0,0}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,543,545,543}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,539,545,539}},	{0,{545,540,545,540}},
{0,{545,542,545,542}},	{0,{545,545,545,545}},	{0,{0,0,545,0}},
{0,{545,545,546,545}},	{0,{544,544,544,544}},	{0,{528,528,545,528}},
{0,{545,527,527,527}},	{0,{530,530,545,530}},	{0,{531,531,545,531}},
{0,{545,528,528,528}},	{0,{545,529,529,529}},	{0,{0,0,0,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,287,287,287}},	{0,{545,545,545,545}},	{0,{0,545,546,0}},
{0,{546,0,0,0}},	{0,{546,547,548,546}},	{0,{545,545,545,545}},
{0,{547,544,544,544}},	{0,{0,540,0,0}},	{0,{546,546,546,535}},
{0,{0,546,0,0}},	{0,{0,471,546,0}},	{0,{546,0,0,0}},
{0,{0,0,546,0}},	{0,{546,0,0,0}},	{0,{546,546,546,546}},
{0,{0,0,0,546}},	{0,{546,546,546,546}},	{0,{546,546,546,546}},
{0,{0,0,546,0}},	{0,{0,546,0,0}},	{0,{546,0,547,0}},
{0,{545,0,547,0}},	{0,{547,525,548,0}},	{0,{548,524,549,0}},
{0,{549,550,550,550}},	{0,{550,549,549,549}},	{0,{548,548,548,548}},
{0,{549,547,547,547}},	{0,{0,0,0,549}},	{0,{549,550,550,550}},
{0,{549,549,549,549}},	{0,{549,548,548,548}},	{0,{549,547,547,547}},
{0,{549,550,550,550}},	{0,{549,549,549,549}},	{0,{549,550,550,550}},
{0,{549,549,549,549}},	{0,{549,548,548,548}},	{0,{549,443,550,0}},
{0,{549,442,549,0}},	{0,{548,0,548,0}},	{313,{0,0,0,0}},
{0,{547,547,547,547}},	{0,{547,547,547,547}},	{0,{0,0,0,547}},
{0,{0,0,0,547}},	{0,{547,283,283,283}},	{0,{547,288,288,288}},
{0,{547,293,293,293}},	{0,{0,0,0,547}},	{0,{538,497,547,0}},
{0,{0,0,0,547}},	{0,{547,548,0,0}},	{0,{548,548,0,0}},
{0,{546,546,0,0}},	{0,{547,548,549,0}},	{0,{548,548,548,0}},
{0,{546,546,547,0}},	{0,{547,0,0,0}},	{0,{547,545,545,0}},
{0,{547,547,547,462}},	{0,{547,543,543,0}},	{0,{547,547,547,547}},
{0,{547,548,549,549}},	{0,{548,547,548,548}},	{0,{547,547,547,547}},
{359,{0,0,0,0}},	{359,{407,0,407,0}},	{0,{544,545,544,544}},
{0,{545,535,535,0}},	{0,{0,0,0,545}},	{0,{545,546,547,547}},
{0,{546,546,546,546}},	{0,{546,545,545,545}},	{0,{543,543,544,544}},
{0,{545,542,543,543}},	{0,{545,542,542,542}},	{0,{545,466,466,466}},
{0,{545,163,546,0}},	{0,{545,0,545,0}},	{0,{545,463,546,463}},
{0,{545,462,545,462}},	{0,{545,159,542,0}},	{0,{545,0,541,0}},
{0,{545,533,546,534}},	{0,{545,533,545,533}},	{0,{545,532,544,532}},
{0,{545,456,456,456}},	{0,{545,153,536,0}},	{0,{545,152,535,0}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,543,545,543}},
{0,{545,543,545,543}},	{0,{545,0,0,0}},	{0,{545,448,448,448}},
{0,{545,522,522,522}},	{0,{545,0,0,0}},	{0,{545,445,445,445}},
{0,{545,519,519,519}},	{0,{545,545,545,545}},	{0,{545,544,545,544}},
{0,{545,543,543,543}},	{0,{545,542,542,542}},	{0,{545,414,545,414}},
{0,{545,413,413,413}},	{0,{545,412,412,412}},	{0,{545,415,545,415}},
{0,{545,416,545,416}},	{0,{545,413,413,413}},	{0,{545,414,414,414}},
{0,{545,411,411,411}},	{0,{545,412,412,412}},	{0,{545,545,545,545}},
{0,{545,544,545,544}},	{0,{545,545,545,545}},	{0,{545,544,545,544}},
{0,{545,0,0,0}},	{0,{545,500,500,500}},	{0,{545,424,424,424}},
{0,{545,540,540,540}},	{384,{0,0,0,0}},	{0,{544,0,545,0}},
{0,{545,0,0,0}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,527,527,527}},	{0,{545,0,0,0}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,523,523,523}},
{0,{545,522,522,522}},	{0,{545,0,0,0}},	{0,{545,0,0,0}},
{0,{545,532,532,532}},	{0,{545,545,545,545}},	{0,{545,530,530,530}},
{0,{545,529,529,529}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,546,546,546}},
{0,{545,545,545,545}},	{0,{545,546,546,546}},	{0,{545,545,545,545}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,540,540,540}},
{0,{545,539,539,539}},	{0,{545,540,540,540}},	{0,{545,539,539,539}},
{0,{545,531,531,531}},	{0,{545,545,545,545}},	{0,{545,546,546,546}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{545,526,526,526}},
{0,{545,525,525,525}},	{0,{545,541,541,541}},	{0,{545,540,540,540}},
{0,{545,545,545,545}},	{0,{545,545,545,545}},	{0,{0,0,0,545}},
{38,{0,0,0,0}},	{0,{544,545,545,545}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,542,542,542}},	{0,{544,541,541,541}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,542,542,542}},
{56,{0,0,0,0}},	{59,{0,0,0,0}},	{60,{0,0,0,0}},
{0,{541,541,541,541}},	{0,{541,541,541,541}},	{0,{541,541,541,541}},
{0,{541,541,541,541}},	{75,{483,0,0,0}},	{75,{0,0,0,0}},
{75,{486,0,0,0}},	{75,{486,0,0,0}},	{0,{0,0,0,537}},
{0,{0,0,0,537}},	{89,{537,0,538,0}},	{0,{537,0,537,0}},
{89,{537,0,0,0}},	{0,{537,537,537,537}},	{0,{537,537,537,537}},
{0,{537,537,537,537}},	{0,{0,0,0,537}},	{0,{537,537,537,537}},
{108,{0,0,0,0}},	{0,{536,536,536,536}},	{0,{536,0,0,0}},
{89,{536,0,537,0}},	{0,{537,537,537,537}},	{0,{537,537,538,539}},
{0,{539,539,539,538}},	{0,{537,537,537,537}},	{0,{538,539,539,539}},
{0,{538,538,538,538}},	{0,{538,538,538,537}},	{0,{538,538,538,539}},
{0,{539,539,539,538}},	{0,{537,537,537,537}},	{0,{538,536,536,536}},
{0,{538,538,538,535}},	{0,{538,538,539,540}},	{0,{540,540,540,539}},
{0,{538,538,538,538}},	{0,{539,0,0,0}},	{0,{539,539,539,0}},
{0,{539,539,539,0}},	{0,{539,539,539,0}},	{0,{539,539,539,0}},
{0,{539,539,521,520}},	{0,{539,539,532,531}},	{0,{539,539,534,0}},
{0,{539,539,534,0}},	{0,{539,539,540,516}},	{0,{540,540,540,518}},
{0,{540,540,540,520}},	{0,{540,540,540,519}},	{0,{540,540,541,524}},
{0,{541,541,541,0}},	{0,{541,541,541,0}},	{0,{541,541,540,0}},
{0,{541,541,542,543}},	{0,{543,543,543,542}},	{0,{541,541,541,541}},
{0,{542,543,543,543}},	{0,{542,542,542,542}},	{0,{542,542,542,541}},
{0,{542,542,538,537}},	{0,{542,542,543,536}},	{0,{543,543,543,538}},
{0,{532,532,533,543}},	{0,{534,534,534,542}},	{0,{532,532,532,541}},
{0,{534,534,534,541}},	{0,{534,534,534,540}},	{0,{510,510,510,540}},
{0,{510,510,510,539}},	{0,{0,0,0,538}},	{0,{506,506,506,537}},
{0,{500,500,501,537}},	{0,{502,502,502,536}},	{0,{500,500,500,535}},
{0,{505,505,505,533}},	{0,{507,507,502,532}},	{0,{507,507,502,531}},
{0,{532,532,533,534}},	{0,{534,534,534,533}},	{0,{532,532,532,532}},
{0,{533,533,533,533}},	{0,{533,533,533,534}},	{0,{533,533,533,533}},
{0,{533,533,533,534}},	{0,{534,534,534,533}},	{0,{532,532,532,532}},
{0,{533,533,533,531}},	{0,{533,533,534,535}},	{0,{535,535,535,534}},
{0,{533,533,533,533}},	{0,{534,534,522,521}},	{0,{534,534,532,531}},
{0,{534,534,535,536}},	{0,{536,536,536,535}},	{0,{534,534,534,534}},
{0,{535,535,535,533}},	{0,{531,531,531,532}},	{0,{534,534,534,531}},
{0,{534,534,535,536}},	{0,{536,536,536,535}},	{0,{534,534,534,534}},
{0,{535,535,535,535}},	{0,{535,535,535,536}},	{0,{535,535,535,535}},
{0,{535,535,531,530}},	{0,{535,535,536,529}},	{0,{536,536,536,532}},
{0,{536,536,537,538}},	{0,{538,538,538,537}},	{0,{538,538,537,536}},
{0,{538,538,539,540}},	{0,{540,540,540,539}},	{0,{540,540,539,538}},
{0,{540,540,541,532}},	{0,{541,541,542,536}},	{0,{542,542,543,544}},
{0,{544,544,544,543}},	{0,{544,544,543,542}},	{0,{544,544,545,541}},
{0,{545,545,546,547}},	{0,{547,547,547,546}},	{0,{547,547,547,548}},
{0,{548,548,548,549}},	{0,{549,549,549,550}},	{0,{550,550,550,549}},
{0,{550,550,550,551}},	{0,{551,551,551,550}},	{0,{551,551,551,549}},
{0,{551,551,551,548}},	{0,{551,551,552,553}},	{0,{553,553,553,552}},
{0,{553,553,553,551}},	{0,{553,553,553,554}},	{0,{554,554,554,553}},
{0,{554,554,555,556}},	{0,{556,556,556,555}},	{0,{556,556,555,554}},
{0,{556,556,557,558}},	{0,{558,558,558,557}},	{0,{547,547,547,547}},
{0,{557,557,557,546}},	{0,{557,557,557,545}},	{0,{557,557,557,544}},
{0,{557,557,555,543}},	{0,{557,557,557,542}},	{0,{557,557,558,550}},
{0,{558,558,558,549}},	{0,{558,558,558,539}},	{0,{558,558,558,538}},
{0,{558,558,558,537}},	{0,{558,558,556,536}},	{0,{558,558,559,560}},
{0,{560,560,560,559}},	{0,{560,560,543,542}},	{0,{560,560,545,532}},
{0,{560,560,561,562}},	{0,{562,562,562,561}},	{0,{562,562,561,560}},
{0,{562,562,563,559}},	{0,{563,563,564,565}},	{0,{565,565,565,564}},
{0,{565,565,565,566}},	{0,{566,566,566,567}},	{0,{567,567,567,566}},
{0,{567,567,568,569}},	{0,{569,569,569,568}},	{0,{569,569,569,567}},
{0,{569,569,569,570}},	{0,{570,570,570,570}},	{0,{569,569,569,568}},
{0,{569,569,569,570}},	{0,{570,570,570,570}},	{0,{569,569,569,568}},
{0,{566,566,566,568}},	{0,{568,568,568,569}},	{0,{568,568,568,568}},
{0,{560,560,560,562}},	{0,{567,567,567,568}},	{0,{567,567,567,567}},
{0,{567,567,567,564}},	{0,{567,567,567,565}},	{0,{567,567,567,562}},
{0,{567,567,567,568}},	{0,{568,568,568,567}},	{0,{568,568,568,569}},
{0,{569,569,569,568}},	{0,{569,569,569,570}},	{0,{570,570,570,569}},
{0,{550,550,550,570}},	{0,{552,552,552,570}},	{0,{551,551,551,570}},
{0,{552,552,552,570}},	{0,{384,384,384,570}},	{0,{0,0,0,569}},
{0,{569,569,570,370}},	{0,{570,570,570,369}},	{0,{570,570,569,368}},
{0,{570,570,571,367}},	{0,{571,571,572,401}},	{0,{572,572,572,400}},
{0,{572,572,571,399}},	{0,{572,572,573,398}},	{0,{573,573,574,575}},
{0,{575,575,575,574}},	{0,{573,573,573,573}},	{0,{574,574,574,575}},
{0,{574,574,574,574}},	{0,{574,574,574,575}},	{0,{575,575,575,574}},
{0,{573,573,573,573}},	{0,{574,574,574,572}},	{0,{574,574,570,571}},
{0,{574,574,574,570}},	{0,{574,574,565,564}},	{0,{574,574,569,568}},
{0,{574,574,575,421}},	{0,{575,575,575,420}},	{0,{575,575,574,419}},
{0,{575,575,576,418}},	{0,{576,576,577,578}},	{0,{578,578,578,577}},
{0,{578,578,577,576}},	{0,{578,578,579,575}},	{0,{579,579,580,581}},
{0,{581,581,581,580}},	{0,{581,581,580,579}},	{0,{581,581,582,578}},
{0,{582,582,583,584}},	{0,{584,584,584,583}},	{0,{584,584,583,582}},
{0,{584,584,585,586}},	{0,{586,586,586,585}},	{0,{586,586,585,584}},
{0,{586,586,587,588}},	{0,{588,588,588,587}},	{0,{588,588,587,586}},
{0,{588,588,589,585}},	{0,{589,589,589,590}},	{0,{589,589,589,589}},
{0,{589,589,589,590}},	{0,{589,589,589,589}},	{0,{589,589,589,588}},
{0,{589,589,590,591}},	{0,{591,591,591,590}},	{0,{589,589,589,589}},
{0,{590,590,590,588}},	{0,{586,586,586,587}},	{0,{589,589,589,586}},
{0,{589,589,586,585}},	{0,{589,589,590,364}},	{0,{589,589,589,363}},
{0,{589,589,367,366}},	{0,{589,589,590,591}},	{0,{589,589,589,590}},
{0,{590,590,591,592}},	{0,{592,592,592,591}},	{0,{590,590,590,590}},
{0,{591,591,591,589}},	{0,{587,587,587,588}},	{0,{590,590,590,587}},
{0,{590,590,587,586}},	{0,{590,590,590,590}},	{0,{590,590,315,0}},
{0,{590,590,315,0}},	{0,{590,590,0,0}},	{0,{590,589,0,0}},
{0,{590,590,310,0}},	{0,{590,590,310,0}},	{0,{590,590,311,0}},
{0,{590,590,309,0}},	{0,{590,590,590,591}},	{0,{590,590,590,590}},
{0,{0,0,0,590}},	{0,{588,588,588,590}},	{0,{0,0,0,590}},
{179,{322,322,322,321}},	{179,{323,323,323,323}},	{179,{319,319,319,319}},
{179,{300,300,300,0}},	{179,{0,0,0,0}},	{179,{294,294,294,293}},
{179,{292,292,292,292}},	{179,{489,489,489,317}},	{195,{0,0,0,0}},
{0,{581,581,581,581}},	{179,{580,580,580,580}},	{195,{579,579,579,579}},
{0,{579,579,579,579}},	{0,{579,579,579,579}},	{0,{579,579,579,579}},
{0,{579,579,579,579}},	{0,{579,579,579,579}},	{0,{579,579,579,579}},
{0,{579,579,579,579}},	{0,{0,0,0,579}},	{0,{579,579,579,579}},
{0,{579,579,579,579}},	{0,{579,579,579,579}},	{0,{579,577,577,577}},
{0,{579,579,579,579}},	{0,{579,578,578,578}},	{0,{579,579,579,579}},
{0,{579,579,579,580}},	{0,{580,580,580,581}},	{0,{581,581,581,582}},
{0,{582,582,582,583}},	{0,{581,581,581,581}},	{0,{582,582,582,582}},
{0,{582,582,582,583}},	{0,{583,583,583,584}},	{0,{584,307,307,307}},
{0,{584,0,0,0}},	{0,{584,584,584,584}},	{0,{584,584,584,584}},
{0,{584,584,584,584}},	{0,{584,584,585,585}},	{0,{584,584,584,584}},
{0,{584,584,584,585}},	{0,{582,582,582,585}},	{0,{585,585,586,586}},
{0,{585,585,585,585}},	{0,{585,585,586,586}},	{0,{585,585,585,585}},
{0,{585,585,585,586}},	{0,{586,586,586,587}},	{0,{587,587,587,587}},
{0,{579,579,579,587}},	{0,{580,580,580,587}},	{0,{584,584,584,587}},
{0,{587,587,587,587}},	{242,{0,0,0,0}},	{0,{586,586,586,586}},
{242,{585,585,585,585}},	{242,{567,567,567,567}},	{195,{566,566,566,566}},
{242,{570,570,570,570}},	{242,{571,571,571,571}},	{195,{568,568,568,568}},
{195,{569,569,569,569}},	{0,{0,0,0,579}},	{0,{579,579,579,579}},
{0,{579,579,579,579}},	{0,{579,579,579,580}},	{0,{274,274,274,580}},
{0,{580,580,580,580}},	{256,{0,0,0,0}},	{0,{0,0,0,579}},
{0,{0,0,0,579}},	{0,{579,579,579,579}},	{256,{578,578,578,578}},
{0,{577,577,577,578}},	{0,{576,576,576,578}},	{0,{578,578,578,578}},
{261,{0,0,0,0}},	{272,{0,0,0,0}},	{274,{0,0,0,0}},
{275,{0,0,0,0}},	{0,{0,0,0,574}},	{0,{574,574,574,574}},
{0,{0,0,0,574}},	{0,{574,574,574,574}},	{0,{574,574,574,574}},
{291,{0,0,0,0}},	{293,{0,0,0,0}},	{295,{0,0,0,0}},
{296,{0,0,0,0}},	{298,{0,0,0,0}},	{0,{0,0,0,569}},
{302,{0,0,0,569}},	{0,{0,0,0,569}},	{0,{0,0,0,567}},
{0,{568,568,568,569}},	{0,{568,568,568,568}},	{0,{568,567,567,567}},
{0,{568,568,568,566}},	{0,{0,0,0,568}},	{0,{568,568,568,569}},
{0,{568,568,568,568}},	{0,{568,568,568,567}},	{0,{568,568,568,566}},
{0,{568,568,568,569}},	{0,{568,568,568,568}},	{0,{568,568,568,569}},
{0,{568,568,568,568}},	{0,{568,568,568,567}},	{0,{206,206,206,568}},
{0,{0,0,0,567}},	{0,{567,567,567,567}},	{0,{567,567,567,567}},
{0,{0,0,0,567}},	{0,{0,0,0,567}},	{0,{567,567,567,568}},
{0,{568,568,568,569}},	{0,{568,568,568,568}},	{0,{0,0,0,568}},
{0,{0,0,0,568}},	{0,{0,0,0,568}},	{332,{186,186,181,0}},
{332,{180,180,180,0}},	{332,{0,0,0,0}},	{0,{565,565,566,0}},
{0,{565,565,565,0}},	{0,{565,565,565,0}},	{0,{0,0,0,565}},
{0,{563,563,563,565}},	{0,{565,565,565,500}},	{352,{561,561,561,0}},
{0,{564,564,564,564}},	{0,{564,564,183,0}},	{179,{564,564,0,0}},
{0,{563,563,0,0}},	{256,{562,562,0,0}},	{352,{555,555,555,562}},
{0,{0,0,0,562}},	{0,{562,562,562,563}},	{0,{563,563,563,562}},
{0,{561,561,561,561}},	{0,{562,562,562,560}},	{0,{562,562,562,559}},
{0,{562,562,562,558}},	{0,{562,562,562,500}},	{0,{172,172,171,562}},
{0,{0,0,0,561}},	{0,{561,561,561,562}},	{0,{496,496,496,561}},
{0,{167,167,167,558}},	{0,{165,165,165,557}},	{0,{553,553,553,559}},
{0,{549,549,549,558}},	{0,{552,552,552,557}},	{0,{554,554,554,490}},
{0,{152,152,147,552}},	{0,{146,146,146,551}},	{0,{554,554,554,554}},
{0,{554,554,554,554}},	{0,{552,552,552,554}},	{0,{552,552,552,554}},
{0,{0,0,0,554}},	{0,{482,482,482,554}},	{0,{538,538,538,554}},
{0,{0,0,0,554}},	{0,{479,479,479,554}},	{0,{535,535,535,554}},
{0,{554,554,554,554}},	{0,{553,553,553,554}},	{0,{552,552,552,554}},
{0,{551,551,551,554}},	{0,{453,453,453,554}},	{0,{452,452,452,554}},
{0,{451,451,451,554}},	{0,{455,455,455,554}},	{0,{456,456,456,554}},
{0,{453,453,453,554}},	{0,{454,454,454,554}},	{0,{451,451,451,554}},
{0,{452,452,452,554}},	{0,{554,554,554,554}},	{0,{553,553,553,554}},
{0,{554,554,554,554}},	{0,{553,553,553,554}},	{0,{0,0,0,554}},
{0,{516,516,516,554}},	{0,{458,458,458,554}},	{0,{549,549,549,554}},
{385,{0,0,0,0}},	{386,{0,0,0,0}},	{0,{0,0,0,552}},
{0,{552,552,552,552}},	{0,{0,0,0,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{0,0,0,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{551,551,551,552}},	{0,{550,550,550,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{551,551,551,552}},
{0,{550,550,550,552}},	{0,{0,0,0,552}},	{0,{541,541,541,552}},
{0,{543,543,543,552}},	{0,{546,546,546,552}},	{0,{0,0,0,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{545,545,545,552}},
{0,{546,546,546,552}},	{0,{548,548,548,552}},	{0,{548,548,548,552}},
{0,{0,0,0,552}},	{0,{527,527,527,552}},	{0,{530,530,530,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{533,533,533,552}},	{0,{514,514,514,552}},
{0,{532,532,532,552}},	{0,{0,0,0,552}},	{0,{531,531,531,552}},
{0,{531,531,531,552}},	{0,{531,531,531,552}},	{0,{531,531,531,552}},
{0,{531,531,531,552}},	{0,{531,531,531,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{550,550,550,552}},	{0,{535,535,535,552}},
{0,{549,549,549,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{550,550,550,552}},	{0,{550,550,550,552}},	{0,{496,496,496,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{512,512,512,552}},
{0,{0,0,0,552}},	{0,{512,512,512,552}},	{0,{514,514,514,552}},
{0,{514,514,514,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{502,502,502,552}},
{0,{505,505,505,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{552,552,552,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{552,552,552,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{552,552,552,553}},
{0,{553,553,553,554}},	{0,{554,554,554,555}},	{0,{555,555,555,556}},
{0,{556,556,556,557}},	{0,{557,557,557,558}},	{0,{558,558,558,559}},
{0,{559,559,559,560}},	{0,{0,0,0,560}},	{0,{560,560,560,561}},
{0,{561,561,561,562}},	{0,{562,562,562,563}},	{0,{563,563,563,563}},
{0,{563,563,563,563}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{555,555,555,555}},	{0,{556,556,556,556}},	{0,{548,548,548,548}},
{0,{550,550,550,550}},	{0,{559,559,559,559}},	{0,{559,559,559,560}},
{0,{560,560,560,560}},	{0,{560,560,560,560}},	{0,{560,560,560,560}},
{0,{560,560,560,561}},	{0,{561,561,561,562}},	{0,{562,562,562,563}},
{0,{563,563,563,564}},	{0,{564,564,564,565}},	{0,{565,565,565,565}},
{0,{565,565,565,565}},	{0,{561,561,561,561}},	{0,{558,558,558,558}},
{0,{563,563,563,563}},	{0,{517,517,517,517}},	{0,{518,518,518,518}},
{0,{519,519,519,519}},	{0,{520,520,520,520}},	{0,{521,521,521,521}},
{0,{522,522,522,522}},	{0,{523,523,523,523}},	{0,{538,538,538,538}},
{0,{542,542,542,542}},	{0,{543,543,543,543}},	{0,{544,544,544,544}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{502,502,502,552}},	{0,{503,503,503,552}},
{0,{504,504,504,552}},	{0,{505,505,505,552}},	{0,{508,508,508,552}},
{0,{509,509,509,552}},	{0,{506,506,506,552}},	{0,{509,509,509,552}},
{0,{0,0,0,552}},	{0,{510,510,510,552}},	{0,{513,513,513,552}},
{0,{514,514,514,552}},	{0,{514,514,514,552}},	{0,{514,514,514,552}},
{0,{514,514,514,552}},	{0,{515,515,515,552}},	{0,{516,516,516,552}},
{0,{516,516,516,552}},	{0,{498,498,498,552}},	{0,{0,0,0,552}},
{0,{499,499,499,552}},	{0,{502,502,502,552}},	{0,{507,507,507,552}},
{0,{479,479,479,552}},	{0,{480,480,480,552}},	{0,{481,481,481,552}},
{0,{482,482,482,552}},	{0,{485,485,485,552}},	{0,{486,486,486,552}},
{0,{483,483,483,552}},	{0,{500,500,500,552}},	{0,{504,504,504,552}},
{0,{505,505,505,552}},	{0,{506,506,506,552}},	{0,{552,552,552,553}},
{0,{553,553,553,554}},	{0,{554,554,554,555}},	{0,{555,555,555,556}},
{0,{556,556,556,557}},	{0,{557,557,557,557}},	{0,{557,557,557,557}},
{0,{557,557,557,557}},	{0,{557,557,557,557}},	{0,{557,557,557,557}},
{0,{557,557,557,558}},	{0,{558,558,558,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{538,538,538,538}},	{0,{539,539,539,539}},
{0,{540,540,540,540}},	{0,{541,541,541,541}},	{0,{542,542,542,542}},
{0,{548,548,548,548}},	{0,{549,549,549,549}},	{0,{531,531,531,552}},
{0,{532,532,532,552}},	{0,{533,533,533,552}},	{0,{534,534,534,552}},
{0,{447,447,447,552}},	{0,{446,446,446,552}},	{0,{451,451,451,552}},
{0,{450,450,450,552}},	{0,{451,451,451,552}},	{0,{448,448,448,552}},
{0,{447,447,447,552}},	{0,{450,450,450,552}},	{0,{0,0,0,552}},
{0,{451,451,451,552}},	{0,{0,0,0,552}},	{0,{453,453,453,552}},
{0,{454,454,454,552}},	{0,{454,454,454,552}},	{0,{454,454,454,552}},
{0,{454,454,454,552}},	{0,{452,452,452,552}},	{0,{453,453,453,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{507,507,507,552}},
{0,{508,508,508,552}},	{0,{509,509,509,552}},	{0,{510,510,510,552}},
{0,{511,511,511,552}},	{0,{512,512,512,552}},	{0,{512,512,512,552}},
{0,{512,512,512,552}},	{0,{512,512,512,552}},	{0,{435,435,435,552}},
{0,{427,427,427,552}},	{0,{429,429,429,552}},	{0,{442,442,442,552}},
{0,{437,437,437,552}},	{0,{503,503,503,552}},	{0,{503,503,503,552}},
{0,{504,504,504,552}},	{0,{427,427,427,552}},	{0,{419,419,419,552}},
{0,{421,421,421,552}},	{0,{434,434,434,552}},	{0,{496,496,496,552}},
{0,{496,496,496,552}},	{0,{496,496,496,552}},	{0,{496,496,496,552}},
{0,{496,496,496,552}},	{0,{429,429,429,552}},	{0,{480,480,480,552}},
{0,{481,481,481,552}},	{0,{482,482,482,552}},	{0,{483,483,483,552}},
{0,{484,484,484,552}},	{0,{490,490,490,552}},	{0,{491,491,491,552}},
{0,{473,473,473,552}},	{0,{474,474,474,552}},	{0,{475,475,475,552}},
{0,{476,476,476,552}},	{0,{389,389,389,552}},	{0,{388,388,388,552}},
{0,{393,393,393,552}},	{0,{392,392,392,552}},	{0,{393,393,393,552}},
{0,{403,403,403,552}},	{0,{403,403,403,552}},	{0,{403,403,403,552}},
{0,{403,403,403,552}},	{0,{401,401,401,552}},	{0,{387,387,387,552}},
{0,{384,384,384,552}},	{0,{383,383,383,552}},	{0,{393,393,393,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{396,396,396,552}},
{0,{0,0,0,552}},	{0,{379,379,379,552}},	{0,{376,376,376,552}},
{0,{386,386,386,552}},	{0,{401,401,401,552}},	{0,{404,404,404,552}},
{0,{374,374,374,552}},	{0,{371,371,371,552}},	{0,{370,370,370,552}},
{0,{380,380,380,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{383,383,383,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{363,363,363,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{552,552,552,553}},
{0,{553,553,553,554}},	{0,{554,554,554,555}},	{0,{555,555,555,556}},
{0,{556,556,556,557}},	{0,{557,557,557,558}},	{0,{546,546,546,546}},
{0,{547,547,547,547}},	{0,{548,548,548,548}},	{0,{549,549,549,549}},
{0,{550,550,550,550}},	{0,{551,551,551,551}},	{0,{540,540,540,552}},
{0,{541,541,541,552}},	{0,{344,344,344,552}},	{0,{541,541,541,552}},
{0,{344,344,344,552}},	{0,{341,341,341,552}},	{0,{344,344,344,552}},
{0,{0,0,0,552}},	{0,{345,345,345,552}},	{0,{348,348,348,552}},
{0,{357,357,357,552}},	{0,{352,352,352,552}},	{0,{534,534,534,552}},
{0,{355,355,355,552}},	{0,{526,526,526,552}},	{0,{527,527,527,552}},
{0,{528,528,528,552}},	{0,{529,529,529,552}},	{0,{530,530,530,552}},
{0,{531,531,531,552}},	{0,{552,552,552,553}},	{0,{553,553,553,554}},
{0,{554,554,554,555}},	{0,{555,555,555,556}},	{0,{556,556,556,557}},
{0,{557,557,557,558}},	{0,{558,558,558,559}},	{0,{545,545,545,545}},
{0,{546,546,546,546}},	{0,{547,547,547,547}},	{0,{548,548,548,548}},
{0,{549,549,549,549}},	{0,{550,550,550,550}},	{0,{551,551,551,551}},
{0,{538,538,538,552}},	{0,{539,539,539,552}},	{0,{540,540,540,552}},
{0,{541,541,541,552}},	{0,{542,542,542,552}},	{0,{391,391,391,552}},
{0,{391,391,391,552}},	{0,{391,391,391,552}},	{0,{391,391,391,552}},
{0,{391,391,391,552}},	{0,{528,528,528,552}},	{0,{529,529,529,552}},
{0,{530,530,530,552}},	{0,{531,531,531,552}},	{0,{532,532,532,552}},
{0,{533,533,533,552}},	{0,{534,534,534,552}},	{0,{297,297,297,552}},
{0,{294,294,294,552}},	{0,{304,304,304,552}},	{0,{0,0,0,552}},
{0,{308,308,308,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{552,552,552,552}},
{0,{552,552,552,552}},	{0,{552,552,552,552}},	{0,{483,483,483,552}},
{0,{480,480,480,552}},	{0,{303,303,303,552}},	{0,{514,514,514,552}},
{0,{511,511,511,552}},	{0,{508,508,508,552}},	{0,{298,298,298,552}},
{0,{280,280,280,552}},	{0,{0,0,0,552}},	{0,{281,281,281,552}},
{0,{284,284,284,552}},	{0,{289,289,289,552}},	{0,{293,293,293,552}},
{0,{552,552,552,552}},	{0,{290,290,290,552}},	{0,{275,275,275,552}},
{0,{0,0,0,552}},	{0,{275,275,275,552}},	{0,{276,276,276,552}},
{0,{268,268,268,552}},	{0,{280,280,280,552}},	{0,{284,284,284,552}},
{0,{268,268,268,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{255,255,255,552}},	{0,{254,254,254,552}},	{0,{0,0,0,552}},
{0,{252,252,252,552}},	{0,{0,0,0,552}},	{0,{250,250,250,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{552,552,552,553}},	{0,{551,551,551,551}},	{0,{550,550,550,552}},
{0,{549,549,549,552}},	{0,{548,548,548,552}},	{0,{552,552,552,553}},
{0,{551,551,551,551}},	{0,{552,552,552,553}},	{0,{551,551,551,551}},
{0,{548,548,548,552}},	{0,{547,547,547,552}},	{0,{548,548,548,552}},
{0,{547,547,547,552}},	{0,{544,544,544,552}},	{0,{543,543,543,552}},
{0,{544,544,544,552}},	{0,{541,541,541,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{0,{0,0,0,552}},
{0,{0,0,0,552}},	{0,{0,0,0,552}},	{257,{0,0,0,0}},
{258,{0,0,0,0}},	{0,{0,0,0,550}},	{257,{0,0,0,549}},
{258,{0,0,0,548}},	{0,{0,0,0,548}},	{278,{0,0,0,0}},
{0,{0,0,0,547}},	{0,{0,0,0,547}},	{0,{0,0,0,547}},
{0,{0,0,0,547}},	{301,{0,0,0,0}},	{303,{0,0,0,0}},
{300,{0,0,0,0}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{0,0,0,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{0,{544,544,544,544}},	{0,{544,544,544,544}},	{0,{544,544,544,544}},
{310,{0,0,0,0}},	{0,{0,0,0,543}},	{0,{0,0,0,543}},
{0,{0,0,0,543}},	{0,{0,0,0,543}},	{0,{0,0,0,543}},
{0,{0,0,0,543}},	{0,{0,0,0,543}},	{0,{0,0,0,543}},
{0,{0,0,0,543}},	{329,{0,0,0,0}},	{0,{0,0,0,542}},
{337,{178,178,178,178}},	{337,{162,162,162,162}},	{337,{0,0,0,0}},
{0,{539,539,539,539}},	{0,{539,539,539,539}},	{337,{486,486,486,486}},
{0,{538,538,538,538}},	{0,{180,180,180,538}},	{0,{0,0,0,538}},
{361,{0,0,0,0}},	{0,{0,0,0,537}},	{0,{537,537,537,537}},
{0,{537,537,537,537}},	{0,{537,537,537,537}},	{0,{537,537,537,537}},
{0,{537,537,537,537}},	{0,{537,537,537,537}},	{0,{150,150,150,537}},
{0,{0,0,0,537}},	{0,{168,168,168,537}},	{0,{0,0,0,537}},
{0,{528,528,528,537}},	{0,{537,537,537,537}},	{0,{537,537,537,537}},
{0,{535,535,535,537}},	{0,{535,535,535,537}},	{0,{0,0,0,537}},
{0,{0,0,0,537}},	{0,{521,521,521,537}},	{0,{0,0,0,537}},
{0,{0,0,0,537}},	{0,{518,518,518,537}},	{0,{537,537,537,537}},
{0,{536,536,536,537}},	{0,{535,535,535,537}},	{0,{534,534,534,537}},
{0,{450,450,450,537}},	{0,{449,449,449,537}},	{0,{448,448,448,537}},
{0,{452,452,452,537}},	{0,{453,453,453,537}},	{0,{450,450,450,537}},
{0,{451,451,451,537}},	{0,{448,448,448,537}},	{0,{449,449,449,537}},
{0,{0,0,0,537}},	{0,{0,0,0,537}},	{0,{0,0,0,537}},
{0,{0,0,0,537}},	{0,{537,537,537,537}},	{0,{537,537,537,537}},
{0,{535,535,535,537}},	{0,{534,534,534,537}},	{387,{0,0,0,0}},
{0,{536,536,536,536}},	{0,{536,0,0,0}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{534,534,534,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{534,534,534,536}},	{0,{0,0,0,536}},	{0,{525,525,525,536}},
{0,{527,527,527,536}},	{0,{530,530,530,536}},	{0,{536,0,0,0}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{529,529,529,536}},
{0,{530,530,530,536}},	{0,{532,532,532,536}},	{0,{532,532,532,536}},
{0,{0,0,0,536}},	{0,{511,511,511,536}},	{0,{514,514,514,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{517,517,517,536}},	{0,{498,498,498,536}},
{0,{516,516,516,536}},	{0,{0,0,0,536}},	{0,{515,515,515,536}},
{0,{515,515,515,536}},	{0,{515,515,515,536}},	{0,{515,515,515,536}},
{0,{515,515,515,536}},	{0,{515,515,515,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{534,534,534,536}},	{0,{519,519,519,536}},
{0,{533,533,533,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{534,534,534,536}},	{0,{534,534,534,536}},	{0,{536,480,480,480}},
{0,{536,0,0,0}},	{0,{0,0,0,536}},	{0,{536,496,496,496}},
{0,{536,0,0,0}},	{0,{536,496,496,496}},	{0,{536,498,498,498}},
{0,{536,498,498,498}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{486,486,486,536}},
{0,{489,489,489,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,0,0,0}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,0,0,0}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,494}},	{0,{536,536,536,499}},	{0,{536,536,536,0}},
{0,{536,536,536,512}},	{0,{486,486,486,536}},	{0,{487,487,487,536}},
{0,{488,488,488,536}},	{0,{489,489,489,536}},	{0,{492,492,492,536}},
{0,{493,493,493,536}},	{0,{490,490,490,536}},	{0,{493,493,493,536}},
{0,{0,0,0,536}},	{0,{494,494,494,536}},	{0,{497,497,497,536}},
{0,{498,498,498,536}},	{0,{498,498,498,536}},	{0,{498,498,498,536}},
{0,{498,498,498,536}},	{0,{499,499,499,536}},	{0,{500,500,500,536}},
{0,{500,500,500,536}},	{0,{482,482,482,536}},	{0,{0,0,0,536}},
{0,{483,483,483,536}},	{0,{486,486,486,536}},	{0,{491,491,491,536}},
{0,{463,463,463,536}},	{0,{464,464,464,536}},	{0,{465,465,465,536}},
{0,{466,466,466,536}},	{0,{469,469,469,536}},	{0,{470,470,470,536}},
{0,{467,467,467,536}},	{0,{484,484,484,536}},	{0,{488,488,488,536}},
{0,{489,489,489,536}},	{0,{490,490,490,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{515,515,515,536}},
{0,{516,516,516,536}},	{0,{517,517,517,536}},	{0,{518,518,518,536}},
{0,{431,431,431,536}},	{0,{430,430,430,536}},	{0,{435,435,435,536}},
{0,{434,434,434,536}},	{0,{435,435,435,536}},	{0,{432,432,432,536}},
{0,{431,431,431,536}},	{0,{434,434,434,536}},	{0,{0,0,0,536}},
{0,{435,435,435,536}},	{0,{0,0,0,536}},	{0,{437,437,437,536}},
{0,{438,438,438,536}},	{0,{438,438,438,536}},	{0,{438,438,438,536}},
{0,{438,438,438,536}},	{0,{436,436,436,536}},	{0,{437,437,437,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{491,491,491,536}},
{0,{492,492,492,536}},	{0,{493,493,493,536}},	{0,{494,494,494,536}},
{0,{495,495,495,536}},	{0,{496,496,496,536}},	{0,{496,496,496,536}},
{0,{496,496,496,536}},	{0,{496,496,496,536}},	{0,{419,419,419,536}},
{0,{411,411,411,536}},	{0,{413,413,413,536}},	{0,{426,426,426,536}},
{0,{421,421,421,536}},	{0,{487,487,487,536}},	{0,{487,487,487,536}},
{0,{488,488,488,536}},	{0,{411,411,411,536}},	{0,{403,403,403,536}},
{0,{405,405,405,536}},	{0,{418,418,418,536}},	{0,{480,480,480,536}},
{0,{480,480,480,536}},	{0,{480,480,480,536}},	{0,{480,480,480,536}},
{0,{480,480,480,536}},	{0,{413,413,413,536}},	{0,{464,464,464,536}},
{0,{465,465,465,536}},	{0,{466,466,466,536}},	{0,{467,467,467,536}},
{0,{468,468,468,536}},	{0,{474,474,474,536}},	{0,{475,475,475,536}},
{0,{457,457,457,536}},	{0,{458,458,458,536}},	{0,{459,459,459,536}},
{0,{460,460,460,536}},	{0,{373,373,373,536}},	{0,{372,372,372,536}},
{0,{377,377,377,536}},	{0,{376,376,376,536}},	{0,{377,377,377,536}},
{0,{387,387,387,536}},	{0,{387,387,387,536}},	{0,{387,387,387,536}},
{0,{387,387,387,536}},	{0,{385,385,385,536}},	{0,{371,371,371,536}},
{0,{368,368,368,536}},	{0,{367,367,367,536}},	{0,{377,377,377,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{380,380,380,536}},
{0,{0,0,0,536}},	{0,{363,363,363,536}},	{0,{360,360,360,536}},
{0,{370,370,370,536}},	{0,{385,385,385,536}},	{0,{388,388,388,536}},
{0,{358,358,358,536}},	{0,{355,355,355,536}},	{0,{354,354,354,536}},
{0,{364,364,364,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{367,367,367,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{347,347,347,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{524,524,524,536}},
{0,{525,525,525,536}},	{0,{328,328,328,536}},	{0,{525,525,525,536}},
{0,{328,328,328,536}},	{0,{325,325,325,536}},	{0,{328,328,328,536}},
{0,{0,0,0,536}},	{0,{329,329,329,536}},	{0,{332,332,332,536}},
{0,{341,341,341,536}},	{0,{336,336,336,536}},	{0,{518,518,518,536}},
{0,{339,339,339,536}},	{0,{510,510,510,536}},	{0,{511,511,511,536}},
{0,{512,512,512,536}},	{0,{513,513,513,536}},	{0,{514,514,514,536}},
{0,{515,515,515,536}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{522,522,522,536}},	{0,{523,523,523,536}},	{0,{524,524,524,536}},
{0,{525,525,525,536}},	{0,{526,526,526,536}},	{0,{375,375,375,536}},
{0,{375,375,375,536}},	{0,{375,375,375,536}},	{0,{375,375,375,536}},
{0,{375,375,375,536}},	{0,{512,512,512,536}},	{0,{513,513,513,536}},
{0,{514,514,514,536}},	{0,{515,515,515,536}},	{0,{516,516,516,536}},
{0,{517,517,517,536}},	{0,{518,518,518,536}},	{0,{281,281,281,536}},
{0,{278,278,278,536}},	{0,{288,288,288,536}},	{0,{0,0,0,536}},
{0,{292,292,292,536}},	{0,{536,295,536,295}},	{0,{536,277,536,277}},
{0,{536,0,536,0}},	{0,{536,278,536,278}},	{0,{536,281,536,281}},
{0,{536,286,536,286}},	{0,{536,290,536,290}},	{0,{467,467,467,536}},
{0,{464,464,464,536}},	{0,{287,287,287,536}},	{0,{498,498,498,536}},
{0,{495,495,495,536}},	{0,{492,492,492,536}},	{0,{282,282,282,536}},
{0,{264,264,264,536}},	{0,{0,0,0,536}},	{0,{265,265,265,536}},
{0,{268,268,268,536}},	{0,{273,273,273,536}},	{0,{277,277,277,536}},
{0,{536,536,536,536}},	{0,{536,274,274,274}},	{0,{536,259,259,259}},
{0,{536,0,0,0}},	{0,{536,259,259,259}},	{0,{536,260,260,260}},
{0,{536,252,252,252}},	{0,{536,264,264,264}},	{0,{536,268,268,268}},
{0,{252,252,252,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{239,239,239,536}},	{0,{238,238,238,536}},	{0,{0,0,0,536}},
{0,{236,236,236,536}},	{0,{0,0,0,536}},	{0,{234,234,234,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{534,534,534,536}},
{0,{533,533,533,536}},	{0,{532,532,532,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{532,532,532,536}},	{0,{531,531,531,536}},	{0,{532,532,532,536}},
{0,{531,531,531,536}},	{0,{528,528,528,536}},	{0,{527,527,527,536}},
{0,{528,528,528,536}},	{0,{525,525,525,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,0,0,0}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,185,185,185}},
{0,{536,0,0,0}},	{0,{536,181,181,181}},	{0,{536,188,188,188}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,532,532,532}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,536,536,0}},	{0,{536,536,536,536}},	{0,{178,178,178,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{149,149,149,536}},
{0,{0,0,0,536}},	{0,{167,167,167,536}},	{0,{0,0,0,536}},
{0,{527,527,527,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{534,534,534,536}},	{0,{534,534,534,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{520,520,520,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{517,517,517,536}},	{0,{536,536,536,536}},
{0,{535,535,535,536}},	{0,{534,534,534,536}},	{0,{533,533,533,536}},
{0,{449,449,449,536}},	{0,{448,448,448,536}},	{0,{447,447,447,536}},
{0,{451,451,451,536}},	{0,{452,452,452,536}},	{0,{449,449,449,536}},
{0,{450,450,450,536}},	{0,{447,447,447,536}},	{0,{448,448,448,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{534,534,534,536}},	{0,{533,533,533,536}},	{0,{536,536,536,536}},
{0,{536,536,536,0}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,535}},	{0,{534,534,534,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,535}},	{0,{534,534,534,536}},
{0,{0,0,0,536}},	{0,{525,525,525,536}},	{0,{527,527,527,536}},
{0,{530,530,530,536}},	{0,{536,0,0,0}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{529,529,529,536}},	{0,{530,530,530,536}},
{0,{532,532,532,536}},	{0,{532,532,532,536}},	{0,{0,0,0,536}},
{0,{511,511,511,536}},	{0,{514,514,514,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{517,517,517,536}},	{0,{498,498,498,536}},	{0,{516,516,516,536}},
{0,{0,0,0,536}},	{0,{515,515,515,536}},	{0,{515,515,515,536}},
{0,{515,515,515,536}},	{0,{515,515,515,536}},	{0,{515,515,515,536}},
{0,{515,515,515,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{534,534,534,536}},	{0,{519,519,519,536}},	{0,{533,533,533,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{534,534,534,536}},
{0,{534,534,534,536}},	{0,{536,480,480,480}},	{0,{536,0,0,0}},
{0,{0,0,0,536}},	{0,{536,496,496,496}},	{0,{536,0,0,0}},
{0,{536,496,496,496}},	{0,{536,498,498,498}},	{0,{536,498,498,498}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{486,486,486,536}},	{0,{489,489,489,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{536,536,536,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{536,0,0,0}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{536,536,536,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,537}},	{0,{537,537,537,538}},	{0,{535,535,535,535}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,0}},
{0,{536,536,536,532}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,494,494,494}},
{0,{536,498,498,498}},	{0,{536,0,0,0}},	{0,{536,512,512,512}},
{0,{486,486,486,536}},	{0,{487,487,487,536}},	{0,{488,488,488,536}},
{0,{489,489,489,536}},	{0,{491,491,491,536}},	{0,{493,493,493,536}},
{0,{489,489,489,536}},	{0,{493,493,493,536}},	{0,{0,0,0,536}},
{0,{494,494,494,536}},	{0,{497,497,497,536}},	{0,{498,498,498,536}},
{0,{498,498,498,536}},	{0,{498,498,498,536}},	{0,{498,498,498,536}},
{0,{499,499,499,536}},	{0,{500,500,500,536}},	{0,{500,500,500,536}},
{0,{482,482,482,536}},	{0,{0,0,0,536}},	{0,{483,483,483,536}},
{0,{486,486,486,536}},	{0,{491,491,491,536}},	{0,{463,463,463,536}},
{0,{464,464,464,536}},	{0,{465,465,465,536}},	{0,{466,466,466,536}},
{0,{468,468,468,536}},	{0,{470,470,470,536}},	{0,{466,466,466,536}},
{0,{484,484,484,536}},	{0,{488,488,488,536}},	{0,{489,489,489,536}},
{0,{490,490,490,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{515,515,515,536}},	{0,{516,516,516,536}},
{0,{517,517,517,536}},	{0,{518,518,518,536}},	{0,{431,431,431,536}},
{0,{430,430,430,536}},	{0,{434,434,434,536}},	{0,{433,433,433,536}},
{0,{435,435,435,536}},	{0,{431,431,431,536}},	{0,{430,430,430,536}},
{0,{434,434,434,536}},	{0,{0,0,0,536}},	{0,{435,435,435,536}},
{0,{0,0,0,536}},	{0,{437,437,437,536}},	{0,{438,438,438,536}},
{0,{438,438,438,536}},	{0,{438,438,438,536}},	{0,{438,438,438,536}},
{0,{436,436,436,536}},	{0,{437,437,437,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{491,491,491,536}},	{0,{492,492,492,536}},
{0,{493,493,493,536}},	{0,{494,494,494,536}},	{0,{495,495,495,536}},
{0,{496,496,496,536}},	{0,{496,496,496,536}},	{0,{496,496,496,536}},
{0,{496,496,496,536}},	{0,{419,419,419,536}},	{0,{411,411,411,536}},
{0,{413,413,413,536}},	{0,{426,426,426,536}},	{0,{421,421,421,536}},
{0,{487,487,487,536}},	{0,{487,487,487,536}},	{0,{488,488,488,536}},
{0,{411,411,411,536}},	{0,{403,403,403,536}},	{0,{405,405,405,536}},
{0,{418,418,418,536}},	{0,{480,480,480,536}},	{0,{480,480,480,536}},
{0,{480,480,480,536}},	{0,{480,480,480,536}},	{0,{480,480,480,536}},
{0,{413,413,413,536}},	{0,{464,464,464,536}},	{0,{465,465,465,536}},
{0,{466,466,466,536}},	{0,{467,467,467,536}},	{0,{468,468,468,536}},
{0,{474,474,474,536}},	{0,{475,475,475,536}},	{0,{457,457,457,536}},
{0,{458,458,458,536}},	{0,{459,459,459,536}},	{0,{460,460,460,536}},
{0,{373,373,373,536}},	{0,{372,372,372,536}},	{0,{376,376,376,536}},
{0,{375,375,375,536}},	{0,{377,377,377,536}},	{0,{387,387,387,536}},
{0,{387,387,387,536}},	{0,{387,387,387,536}},	{0,{387,387,387,536}},
{0,{385,385,385,536}},	{0,{371,371,371,536}},	{0,{367,367,367,536}},
{0,{366,366,366,536}},	{0,{377,377,377,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{380,380,380,536}},	{0,{0,0,0,536}},
{0,{363,363,363,536}},	{0,{359,359,359,536}},	{0,{370,370,370,536}},
{0,{385,385,385,536}},	{0,{388,388,388,536}},	{0,{358,358,358,536}},
{0,{354,354,354,536}},	{0,{353,353,353,536}},	{0,{364,364,364,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{367,367,367,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{346,346,346,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{524,524,524,536}},	{0,{525,525,525,536}},
{0,{327,327,327,536}},	{0,{525,525,525,536}},	{0,{328,328,328,536}},
{0,{324,324,324,536}},	{0,{328,328,328,536}},	{0,{0,0,0,536}},
{0,{329,329,329,536}},	{0,{332,332,332,536}},	{0,{341,341,341,536}},
{0,{336,336,336,536}},	{0,{518,518,518,536}},	{0,{339,339,339,536}},
{0,{510,510,510,536}},	{0,{511,511,511,536}},	{0,{512,512,512,536}},
{0,{513,513,513,536}},	{0,{514,514,514,536}},	{0,{515,515,515,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{522,522,522,536}},
{0,{523,523,523,536}},	{0,{524,524,524,536}},	{0,{525,525,525,536}},
{0,{526,526,526,536}},	{0,{375,375,375,536}},	{0,{375,375,375,536}},
{0,{375,375,375,536}},	{0,{375,375,375,536}},	{0,{375,375,375,536}},
{0,{512,512,512,536}},	{0,{513,513,513,536}},	{0,{514,514,514,536}},
{0,{515,515,515,536}},	{0,{516,516,516,536}},	{0,{517,517,517,536}},
{0,{518,518,518,536}},	{0,{281,281,281,536}},	{0,{277,277,277,536}},
{0,{288,288,288,536}},	{0,{0,0,0,536}},	{0,{292,292,292,536}},
{0,{536,295,536,295}},	{0,{536,277,536,277}},	{0,{536,0,536,0}},
{0,{536,278,536,278}},	{0,{536,281,536,281}},	{0,{536,286,536,286}},
{0,{536,290,536,290}},	{0,{467,467,467,536}},	{0,{464,464,464,536}},
{0,{287,287,287,536}},	{0,{498,498,498,536}},	{0,{495,495,495,536}},
{0,{492,492,492,536}},	{0,{282,282,282,536}},	{0,{264,264,264,536}},
{0,{0,0,0,536}},	{0,{265,265,265,536}},	{0,{268,268,268,536}},
{0,{273,273,273,536}},	{0,{277,277,277,536}},	{0,{536,536,536,536}},
{0,{536,274,274,274}},	{0,{536,259,259,259}},	{0,{536,0,0,0}},
{0,{536,259,259,0}},	{0,{536,260,260,260}},	{0,{536,252,252,252}},
{0,{536,264,264,264}},	{0,{536,268,268,268}},	{0,{252,252,252,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{238,238,238,536}},
{0,{237,237,237,536}},	{0,{0,0,0,536}},	{0,{235,235,235,536}},
{0,{0,0,0,536}},	{0,{233,233,233,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{534,534,534,536}},	{0,{533,533,533,536}},
{0,{532,532,532,536}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{532,532,532,536}},
{0,{531,531,531,536}},	{0,{532,532,532,536}},	{0,{531,531,531,536}},
{0,{528,528,528,536}},	{0,{527,527,527,536}},	{0,{528,528,528,536}},
{0,{525,525,525,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,0,0,0}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,185,185}},	{0,{536,536,0,0}},
{0,{536,536,181,0}},	{0,{536,536,188,188}},	{0,{0,0,0,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{535,536,535,535}},	{0,{532,536,532,532}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,0,0}},
{0,{536,536,536,536}},	{0,{178,178,178,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{149,149,149,536}},	{0,{0,0,0,536}},
{0,{167,167,167,536}},	{0,{0,0,0,536}},	{0,{527,527,527,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{534,534,534,536}},
{0,{534,534,534,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{520,520,520,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{517,517,517,536}},	{0,{536,536,536,536}},	{0,{535,535,535,536}},
{0,{534,534,534,536}},	{0,{533,533,533,536}},	{0,{449,449,449,536}},
{0,{448,448,448,536}},	{0,{447,447,447,536}},	{0,{451,451,451,536}},
{0,{452,452,452,536}},	{0,{449,449,449,536}},	{0,{450,450,450,536}},
{0,{447,447,447,536}},	{0,{448,448,448,536}},	{0,{0,0,0,536}},
{0,{0,0,0,536}},	{0,{0,0,0,536}},	{0,{0,0,0,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{534,534,534,536}},
{0,{533,533,533,536}},	{0,{536,536,536,536}},	{0,{536,0,0,0}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,0,0,0}},
{0,{536,536,536,531}},	{0,{536,536,536,0}},	{0,{536,535,535,0}},
{0,{536,534,534,0}},	{0,{536,536,536,527}},	{0,{536,536,536,0}},
{0,{536,535,535,0}},	{0,{536,534,534,0}},	{0,{536,0,0,0}},
{0,{536,525,525,525}},	{0,{536,527,527,0}},	{0,{536,530,530,0}},
{0,{0,0,0,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,536,536,536}},	{0,{536,536,536,536}},
{0,{536,529,529,529}},	{0,{536,530,530,530}},	{0,{536,532,532,532}},
{0,{536,532,532,532}},	{0,{536,0,0,0}},	{0,{536,511,511,0}},
{0,{536,514,514,0}},	{0,{536,536,0,0}},	{0,{536,536,505,505}},
{0,{536,536,507,0}},	{0,{536,536,510,0}},	{0,{536,517,517,517}},
{0,{536,498,498,498}},	{0,{536,516,516,516}},	{0,{536,0,0,0}},
{0,{536,515,515,515}},	{0,{536,515,515,515}},	{0,{536,515,515,515}},
{0,{536,515,515,515}},	{0,{536,515,515,515}},	{0,{536,515,515,515}},
{0,{536,536,508,508}},	{0,{536,536,509,509}},	{0,{536,534,506,506}},
{0,{536,519,0,0}},	{0,{536,533,506,506}},	{0,{536,536,508,508}},
{0,{536,536,508,508}},	{0,{536,534,506,506}},	{0,{536,534,506,506}},
{28,{480,480,480,480}},	{28,{0,0,0,0}},	{0,{534,0,0,0}},
{0,{534,496,496,496}},	{0,{534,0,0,0}},	{0,{534,496,496,496}},
{0,{534,498,498,498}},	{0,{534,498,498,498}},	{0,{534,0,0,0}},
{0,{534,0,534,0}},	{0,{534,0,0,0}},	{0,{534,0,0,0}},
{0,{534,0,0,0}},	{0,{534,0,0,0}},	{0,{534,0,0,0}},
{0,{534,486,486,486}},	{0,{534,489,489,489}},	{0,{534,0,534,0}},
{0,{534,0,0,0}},	{0,{534,0,0,0}},	{0,{534,0,0,0}},
{0,{0,0,534,0}},	{0,{0,0,534,0}},	{0,{0,0,0,534}},
{0,{0,0,0,534}},	{0,{0,0,0,534}},	{0,{534,0,0,0}},
{0,{534,0,0,0}},	{0,{534,0,0,0}},	{0,{534,0,0,0}},
{0,{534,0,0,0}},	{0,{534,534,534,534}},	{0,{534,534,534,534}},
{0,{0,0,0,534}},	{0,{0,0,0,534}},	{0,{534,0,0,0}},
{0,{534,534,534,535}},	{0,{535,533,533,534}},	{0,{535,535,535,536}},
{0,{536,534,534,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,536,536,536}},	{0,{536,534,534,534}},	{0,{536,534,534,534}},
{0,{536,536,536,537}},	{0,{537,535,535,536}},	{0,{537,537,537,538}},
{0,{538,536,536,537}},	{0,{538,0,0,0}},	{0,{538,538,538,538}},
{0,{538,537,537,537}},	{0,{538,538,538,538}},	{0,{538,537,537,537}},
{0,{538,538,538,539}},	{0,{539,537,537,538}},	{0,{539,539,539,540}},
{0,{540,540,540,541}},	{0,{541,541,541,541}},	{0,{541,541,541,541}},
{0,{541,541,541,0}},	{0,{541,541,541,541}},	{0,{541,540,540,540}},
{0,{541,541,541,541}},	{0,{541,541,541,542}},	{0,{542,542,542,542}},
{0,{502,502,502,502}},	{0,{541,501,501,501}},	{0,{503,503,503,503}},
{0,{540,502,502,502}},	{0,{512,512,512,512}},	{0,{539,511,511,511}},
{0,{513,513,513,513}},	{0,{538,512,512,512}},	{0,{519,519,519,519}},
{0,{537,518,518,518}},	{0,{520,520,520,520}},	{0,{521,521,521,521}},
{0,{528,528,528,528}},	{0,{534,534,534,534}},	{0,{534,534,534,534}},
{0,{534,534,534,534}},	{0,{534,534,534,534}},	{0,{534,484,484,485}},
{0,{534,486,486,487}},	{0,{534,488,488,488}},	{0,{534,489,489,489}},
{0,{534,491,491,491}},	{0,{534,493,493,494}},	{0,{534,489,489,489}},
{0,{534,494,494,495}},	{0,{534,0,0,0}},	{0,{534,496,496,496}},
{0,{534,499,499,500}},	{0,{534,501,501,502}},	{0,{534,502,502,503}},
{0,{534,503,503,503}},	{0,{534,503,503,503}},	{0,{534,504,504,504}},
{0,{534,505,505,505}},	{0,{534,505,534,506}},	{0,{534,483,534,484}},
{0,{534,0,534,0}},	{0,{534,485,534,485}},	{0,{534,488,534,489}},
{0,{534,496,534,0}},	{0,{534,461,461,462}},	{0,{534,463,463,464}},
{0,{534,465,465,465}},	{0,{534,466,466,466}},	{0,{534,468,468,468}},
{0,{534,470,470,471}},	{0,{534,466,466,466}},	{0,{534,489,489,489}},
{0,{534,454,454,454}},	{0,{534,456,456,456}},	{0,{534,466,466,466}},
{0,{534,534,534,535}},	{0,{535,533,533,534}},	{0,{535,535,535,536}},
{0,{536,534,534,535}},	{0,{536,536,536,536}},	{0,{536,535,535,535}},
{0,{536,536,536,536}},	{0,{536,535,535,535}},	{0,{536,536,536,536}},
{0,{536,535,535,535}},	{0,{536,536,536,537}},	{0,{537,537,537,538}},
{0,{538,538,538,538}},	{0,{538,538,538,538}},	{0,{538,538,538,538}},
{0,{520,520,520,520}},	{0,{537,519,519,519}},	{0,{521,521,521,521}},
{0,{536,520,520,520}},	{0,{528,528,528,528}},	{0,{529,529,529,529}},
{0,{534,535,535,536}},	{0,{536,537,537,538}},	{0,{538,539,539,539}},
{0,{539,540,540,541}},	{0,{541,542,542,543}},	{0,{543,542,542,542}},
{0,{543,544,544,545}},	{0,{545,544,544,544}},	{0,{545,546,546,547}},
{0,{547,542,542,542}},	{0,{547,540,540,541}},	{0,{547,548,548,549}},
{0,{549,550,550,550}},	{0,{550,551,551,552}},	{0,{552,553,553,548}},
{0,{553,554,554,555}},	{0,{555,556,556,557}},	{0,{557,558,558,559}},
{0,{559,560,560,560}},	{0,{560,561,561,562}},	{0,{562,563,563,558}},
{0,{563,563,563,541}},	{0,{540,540,540,540}},	{0,{544,544,544,539}},
{0,{561,489,489,490}},	{0,{561,491,491,492}},	{0,{561,493,493,493}},
{0,{561,494,494,494}},	{0,{561,495,495,495}},	{0,{561,561,561,562}},
{0,{562,562,562,563}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{563,563,563,537}},	{0,{563,563,563,526}},	{0,{530,530,530,530}},
{0,{562,562,562,563}},	{0,{563,563,563,525}},	{0,{563,563,563,553}},
{0,{563,563,563,554}},	{0,{563,563,563,555}},	{0,{528,528,528,529}},
{0,{517,517,517,518}},	{0,{521,521,521,522}},	{0,{560,560,560,555}},
{0,{560,480,560,481}},	{0,{560,481,560,482}},	{0,{560,482,560,482}},
{0,{560,482,560,482}},	{0,{560,560,560,560}},	{0,{560,560,560,560}},
{0,{560,462,462,463}},	{0,{560,464,464,465}},	{0,{560,466,466,466}},
{0,{560,467,467,467}},	{0,{560,468,468,468}},	{0,{560,458,458,458}},
{0,{560,460,460,460}},	{0,{477,477,477,478}},	{0,{479,479,479,480}},
{0,{481,481,481,481}},	{0,{482,482,482,483}},	{0,{484,484,484,485}},
{0,{484,484,484,484}},	{0,{486,486,486,487}},	{0,{486,486,486,486}},
{0,{488,488,488,489}},	{0,{505,505,505,506}},	{0,{507,507,507,508}},
{0,{509,509,509,509}},	{0,{510,510,510,511}},	{0,{512,512,512,507}},
{0,{546,371,371,372}},	{0,{546,367,367,367}},	{0,{546,366,366,366}},
{0,{546,379,379,380}},	{0,{546,0,0,0}},	{0,{546,0,0,0}},
{0,{546,385,385,0}},	{0,{546,0,0,0}},	{0,{546,363,363,364}},
{0,{546,359,359,359}},	{0,{546,372,372,373}},	{0,{546,361,361,361}},
{0,{546,371,371,371}},	{0,{546,469,469,470}},	{0,{546,465,465,465}},
{0,{546,463,463,464}},	{0,{546,481,481,482}},	{0,{546,473,473,473}},
{0,{546,477,477,472}},	{0,{546,493,493,471}},	{0,{546,470,470,470}},
{0,{546,474,474,469}},	{0,{546,346,346,346}},	{0,{546,0,0,0}},
{0,{546,0,0,0}},	{0,{546,0,0,0}},	{0,{546,0,0,0}},
{0,{546,546,546,547}},	{0,{547,545,545,546}},	{0,{547,547,547,548}},
{0,{548,546,546,547}},	{0,{548,548,548,548}},	{0,{548,547,547,547}},
{0,{548,548,548,548}},	{0,{548,547,547,547}},	{0,{539,539,539,539}},
{0,{547,538,538,538}},	{0,{540,540,540,540}},	{0,{546,539,539,539}},
{0,{546,534,547,535}},	{0,{547,536,548,537}},	{0,{548,327,549,327}},
{0,{549,537,550,537}},	{0,{550,328,551,329}},	{0,{551,324,546,324}},
{0,{551,329,551,330}},	{0,{551,0,551,0}},	{0,{551,331,551,331}},
{0,{551,334,551,335}},	{0,{551,346,551,347}},	{0,{551,341,551,0}},
{0,{551,530,552,530}},	{0,{552,345,552,345}},	{0,{552,520,520,521}},
{0,{552,522,522,523}},	{0,{552,524,524,524}},	{0,{552,525,525,525}},
{0,{552,517,517,517}},	{0,{552,519,519,519}},	{0,{552,552,552,553}},
{0,{553,551,551,552}},	{0,{553,553,553,554}},	{0,{554,552,552,553}},
{0,{554,554,554,554}},	{0,{554,553,553,553}},	{0,{554,554,554,554}},
{0,{554,553,553,553}},	{0,{554,554,554,554}},	{0,{554,553,553,553}},
{0,{543,543,543,543}},	{0,{553,542,542,542}},	{0,{544,544,544,544}},
{0,{552,543,543,543}},	{0,{552,538,553,539}},	{0,{553,540,554,541}},
{0,{554,542,555,542}},	{0,{555,543,556,543}},	{0,{556,544,557,544}},
{0,{557,375,557,376}},	{0,{557,376,557,377}},	{0,{557,377,557,377}},
{0,{557,377,557,377}},	{0,{557,377,557,377}},	{0,{557,528,528,529}},
{0,{557,530,530,531}},	{0,{557,532,532,532}},	{0,{557,533,533,533}},
{0,{557,534,534,534}},	{0,{557,524,524,524}},	{0,{557,526,526,526}},
{0,{557,281,504,282}},	{0,{557,277,499,277}},	{0,{557,290,507,291}},
{0,{557,0,504,0}},	{0,{557,297,507,0}},	{0,{557,300,300,301}},
{0,{557,278,278,279}},	{0,{557,0,0,0}},	{0,{557,280,280,280}},
{0,{557,283,283,284}},	{0,{557,291,291,0}},	{0,{557,296,296,296}},
{0,{557,479,479,479}},	{0,{557,476,476,476}},	{0,{557,293,293,293}},
{0,{557,516,516,516}},	{0,{557,513,513,513}},	{0,{557,510,510,510}},
{0,{557,557,557,558}},	{0,{558,558,558,559}},	{0,{559,559,559,559}},
{0,{559,559,559,559}},	{0,{559,559,559,560}},	{0,{560,560,560,556}},
{0,{560,560,560,560}},	{0,{560,560,560,560}},	{0,{560,560,560,561}},
{0,{561,561,561,561}},	{0,{561,561,561,561}},	{0,{561,561,561,561}},
{0,{561,561,561,562}},	{0,{562,562,562,563}},	{0,{563,563,563,557}},
{0,{563,563,563,563}},	{0,{563,254,254,254}},	{0,{563,0,0,0}},
{0,{563,563,563,563}},	{0,{563,562,562,562}},	{0,{563,0,563,0}},
{0,{0,0,0,563}},	{0,{563,238,238,238}},	{0,{563,237,237,237}},
{0,{563,0,0,0}},	{0,{563,235,235,235}},	{0,{563,0,0,0}},
{0,{233,233,233,563}},	{0,{0,0,0,563}},	{0,{0,0,563,0}},
{0,{0,0,0,563}},	{0,{563,0,0,0}},	{0,{563,0,0,0}},
{0,{563,0,0,0}},	{0,{563,0,0,0}},	{0,{563,0,0,0}},
{0,{563,0,0,0}},	{0,{563,350,350,345}},	{0,{563,344,344,344}},
{0,{563,348,348,343}},	{0,{563,342,342,342}},	{0,{563,346,346,341}},
{0,{563,340,340,340}},	{0,{563,0,0,0}},	{0,{563,0,0,0}},
{0,{563,0,0,0}},	{0,{563,341,341,336}},	{0,{563,335,335,335}},
{0,{563,339,339,334}},	{0,{563,333,333,333}},	{0,{563,0,0,0}},
{0,{563,0,0,0}},	{0,{563,0,437,0}},	{0,{563,0,436,0}},
{0,{563,0,435,0}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{563,563,563,564}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{563,563,563,563}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{563,563,563,563}},	{0,{563,563,563,564}},	{0,{563,563,563,563}},
{0,{563,563,563,564}},	{0,{563,563,563,563}},	{0,{563,555,555,555}},
{0,{563,563,563,563}},	{0,{563,563,563,563}},	{0,{563,561,561,561}},
{0,{563,0,0,0}},	{0,{0,0,0,563}},	{0,{0,0,563,0}},
{0,{563,0,0,0}},	{0,{563,0,0,0}},	{0,{563,310,310,305}},
{0,{563,304,304,304}},	{0,{563,0,0,0}},	{0,{563,0,409,0}},
{0,{0,0,0,563}},	{0,{563,0,0,0}},	{0,{563,563,563,0}},
{286,{0,0,0,0}},	{0,{0,562,0,0}},	{0,{562,562,562,0}},
{0,{187,187,562,188}},	{0,{0,0,562,0}},	{0,{183,183,562,183}},
{0,{193,193,562,0}},	{0,{0,0,562,0}},	{0,{562,182,562,183}},
{0,{562,0,562,0}},	{0,{562,189,562,0}},	{0,{562,180,562,180}},
{0,{562,179,562,179}},	{0,{562,0,562,0}},	{0,{562,176,562,177}},
{0,{562,0,562,0}},	{0,{562,183,562,0}},	{0,{562,0,0,0}},
{0,{562,0,0,0}},	{0,{0,0,562,0}},	{0,{562,0,0,0}},
{0,{562,563,563,564}},	{0,{564,563,563,563}},	{0,{561,561,561,562}},
{0,{561,561,561,561}},	{0,{562,0,562,0}},	{0,{562,0,0,0}},
{0,{562,562,562,0}},	{0,{562,562,562,0}},	{0,{562,0,562,0}},
{0,{161,161,161,562}},	{0,{0,0,0,562}},	{0,{0,0,562,0}},
{0,{562,562,562,563}},	{0,{563,563,563,563}},	{0,{563,563,563,563}},
{0,{563,563,563,564}},	{0,{559,559,559,559}},	{0,{562,562,562,562}},
{0,{562,151,151,152}},	{0,{562,562,562,562}},	{0,{562,150,150,150}},
{0,{562,560,560,560}},	{0,{562,562,562,562}},	{0,{562,0,0,0}},
{0,{562,552,552,552}},	{0,{562,556,556,556}},	{0,{562,558,558,558}},
{0,{562,562,562,562}},	{0,{562,561,561,561}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,561,561,561}},	{0,{562,562,562,562}},
{0,{562,0,562,0}},	{0,{562,547,562,547}},	{0,{562,554,562,554}},
{0,{562,556,562,556}},	{0,{562,562,562,562}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,562,562,562}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,562,562,562}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,0,0,0}},	{0,{562,534,534,534}},
{0,{562,0,0,0}},	{0,{562,532,532,532}},	{0,{562,562,562,562}},
{0,{562,562,562,562}},	{0,{562,560,560,560}},	{0,{562,559,559,559}},
{0,{562,562,562,562}},	{0,{562,562,562,562}},	{0,{560,562,560,560}},
{0,{0,562,0,0}},	{4,{0,0,0,0}},	{0,{561,561,561,557}},
{0,{561,561,561,0}},	{0,{561,561,561,556}},	{4,{559,559,559,0}},
{0,{560,560,560,553}},	{0,{560,560,560,0}},	{0,{560,560,560,552}},
{4,{558,558,558,0}},	{9,{0,0,0,0}},	{9,{0,551,0,0}},
{9,{552,552,552,0}},	{9,{554,554,554,0}},	{0,{555,555,0,0}},
{0,{555,555,555,555}},	{0,{555,555,555,555}},	{0,{555,555,555,555}},
{0,{555,555,555,555}},	{0,{555,555,555,555}},	{0,{555,555,555,555}},
{0,{555,555,555,555}},	{0,{555,555,555,555}},	{9,{548,548,548,548}},
{9,{549,549,549,549}},	{9,{551,551,551,551}},	{9,{551,551,551,551}},
{0,{551,0,0,0}},	{0,{551,536,536,0}},	{0,{551,538,538,0}},
{20,{0,0,0,0}},	{20,{0,531,0,0}},	{20,{532,532,532,0}},
{20,{534,534,534,0}},	{21,{536,536,536,536}},	{21,{524,524,524,524}},
{21,{535,535,535,535}},	{21,{0,0,0,0}},	{21,{534,534,534,534}},
{21,{534,534,534,534}},	{21,{534,534,534,534}},	{21,{534,534,534,534}},
{21,{534,534,534,534}},	{21,{534,534,534,534}},	{20,{527,527,527,527}},
{20,{528,528,528,528}},	{22,{525,525,525,525}},	{22,{0,0,0,0}},
{22,{525,525,525,525}},	{20,{527,527,527,527}},	{20,{527,527,527,527}},
{22,{525,525,525,525}},	{22,{525,525,525,525}},	{32,{0,0,0,0}},
{0,{527,527,527,527}},	{0,{527,527,527,527}},	{0,{527,527,527,527}},
{0,{527,527,527,527}},	{0,{527,527,527,527}},	{0,{527,0,0,0}},
{45,{0,0,0,0}},	{51,{0,0,0,0}},	{52,{525,0,0,0}},
{52,{0,0,0,0}},	{54,{0,0,0,0}},	{55,{0,0,0,0}},
{55,{507,507,507,507}},	{55,{510,510,510,510}},	{44,{0,0,0,0}},
{62,{0,0,0,0}},	{63,{0,0,0,0}},	{0,{517,517,517,0}},
{79,{0,0,0,0}},	{80,{0,0,0,0}},	{0,{0,0,0,515}},
{0,{0,0,0,515}},	{0,{0,0,0,515}},	{95,{0,0,0,0}},
{0,{514,0,0,0}},	{100,{0,0,0,0}},	{0,{513,0,0,0}},
{0,{513,0,0,0}},	{0,{513,0,0,0}},	{0,{513,0,0,0}},
{0,{0,0,0,513}},	{0,{0,0,0,513}},	{119,{0,0,0,0}},
{0,{512,512,513,513}},	{0,{512,512,512,512}},	{0,{512,512,513,513}},
{0,{513,513,514,514}},	{0,{513,513,513,513}},	{0,{513,513,514,514}},
{0,{514,514,514,514}},	{0,{514,514,514,514}},	{0,{514,514,514,514}},
{0,{514,514,514,514}},	{0,{514,514,514,515}},	{0,{514,514,514,514}},
{0,{514,514,514,515}},	{0,{514,514,514,514}},	{0,{514,514,515,515}},
{0,{514,514,514,514}},	{0,{514,514,515,515}},	{0,{515,515,516,516}},
{0,{515,515,515,515}},	{0,{515,515,516,516}},	{0,{516,516,516,516}},
{0,{516,516,516,516}},	{0,{516,516,516,516}},	{0,{516,516,516,0}},
{0,{516,516,516,512}},	{0,{516,516,517,517}},	{0,{516,516,516,516}},
{0,{516,516,517,517}},	{0,{517,517,518,518}},	{0,{517,517,517,517}},
{0,{517,517,518,518}},	{0,{517,517,517,517}},	{0,{517,517,517,517}},
{0,{517,517,517,517}},	{0,{517,517,0,0}},	{0,{517,517,517,517}},
{0,{517,517,517,517}},	{0,{517,517,517,517}},	{0,{517,517,518,518}},
{0,{517,517,517,517}},	{0,{517,517,517,517}},	{0,{474,474,474,474}},
{0,{477,477,477,477}},	{0,{488,488,488,488}},	{0,{491,491,491,491}},
{0,{499,499,499,499}},	{0,{512,474,474,474}},	{0,{512,478,478,478}},
{0,{512,0,0,0}},	{0,{512,500,500,500}},	{0,{512,512,513,513}},
{0,{513,513,514,514}},	{0,{514,514,514,514}},	{0,{514,514,514,514}},
{0,{514,514,514,514}},	{0,{514,514,515,515}},	{0,{515,515,515,515}},
{0,{515,515,516,516}},	{0,{516,516,516,516}},	{0,{516,516,516,516}},
{0,{516,516,517,517}},	{0,{517,517,518,518}},	{0,{518,518,519,519}},
{0,{519,519,519,519}},	{0,{519,519,519,519}},	{0,{519,519,519,519}},
{0,{519,519,519,519}},	{0,{519,488,489,489}},	{0,{519,464,465,465}},
{0,{519,0,0,0}},	{0,{519,467,467,467}},	{0,{519,470,471,471}},
{0,{519,479,0,0}},	{0,{519,519,520,520}},	{0,{520,520,521,521}},
{0,{521,521,521,521}},	{0,{521,521,521,521}},	{0,{521,521,521,521}},
{0,{521,521,522,522}},	{0,{522,522,522,522}},	{0,{522,522,522,522}},
{0,{512,512,512,512}},	{0,{513,513,513,513}},	{0,{517,517,517,517}},
{0,{519,519,520,520}},	{0,{519,519,519,519}},	{0,{519,519,520,520}},
{0,{520,520,521,521}},	{0,{520,520,520,520}},	{0,{520,520,521,521}},
{0,{521,521,521,521}},	{0,{521,521,521,521}},	{0,{521,521,521,521}},
{0,{521,521,521,521}},	{0,{521,521,521,521}},	{0,{521,521,521,521}},
{0,{521,521,522,522}},	{0,{521,521,521,521}},	{0,{521,521,522,522}},
{0,{521,521,521,521}},	{0,{521,521,521,521}},	{0,{521,521,521,521}},
{0,{521,521,521,521}},	{0,{503,503,503,503}},	{0,{506,506,506,506}},
{0,{519,520,521,521}},	{0,{521,497,498,498}},	{0,{521,497,497,497}},
{0,{521,522,523,523}},	{0,{523,498,499,499}},	{0,{523,498,498,498}},
{0,{523,524,524,524}},	{0,{524,499,499,499}},	{0,{524,525,525,525}},
{0,{525,499,499,499}},	{0,{525,498,498,498}},	{0,{525,450,450,450}},
{0,{525,403,403,403}},	{0,{525,402,402,402}},	{0,{525,447,447,447}},
{0,{525,448,448,448}},	{0,{525,404,404,404}},	{0,{525,403,403,403}},
{0,{525,445,445,445}},	{0,{525,445,446,446}},	{0,{525,403,404,404}},
{0,{525,403,403,403}},	{0,{525,444,444,444}},	{0,{525,443,443,443}},
{0,{525,443,444,444}},	{0,{525,402,403,403}},	{0,{525,402,402,402}},
{0,{525,442,442,442}},	{0,{525,0,0,0}},	{0,{525,441,441,441}},
{0,{525,402,402,402}},	{0,{525,401,401,401}},	{0,{525,437,437,437}},
{0,{525,0,0,0}},	{0,{525,437,438,438}},	{0,{525,401,402,402}},
{0,{525,401,401,401}},	{0,{525,436,437,437}},	{0,{525,402,403,403}},
{0,{525,402,402,402}},	{0,{525,435,436,436}},	{0,{525,401,402,402}},
{0,{525,401,401,401}},	{0,{525,434,434,434}},	{0,{525,400,400,400}},
{0,{525,433,433,433}},	{0,{525,399,399,399}},	{0,{525,398,398,398}},
{0,{525,429,429,429}},	{0,{525,395,395,395}},	{0,{525,396,0,0}},
{0,{469,469,470,470}},	{0,{473,473,474,474}},	{0,{477,477,477,477}},
{0,{479,479,479,479}},	{0,{521,521,521,521}},	{0,{521,456,457,457}},
{0,{521,456,456,456}},	{0,{521,456,457,457}},	{0,{521,456,456,456}},
{0,{521,456,456,456}},	{0,{521,456,456,456}},	{0,{521,374,375,375}},
{0,{521,364,365,365}},	{0,{521,386,387,387}},	{0,{521,386,386,386}},
{0,{521,380,0,0}},	{0,{521,445,446,446}},	{0,{521,446,447,447}},
{0,{521,448,448,448}},	{0,{521,380,381,381}},	{0,{521,441,442,442}},
{0,{521,442,443,443}},	{0,{521,443,443,443}},	{0,{521,443,443,443}},
{0,{521,443,443,443}},	{0,{521,376,376,376}},	{0,{521,521,522,522}},
{0,{522,522,523,523}},	{0,{523,523,523,523}},	{0,{523,523,523,523}},
{0,{523,523,523,523}},	{0,{517,517,517,517}},	{0,{518,518,518,518}},
{143,{521,521,522,522}},	{143,{522,523,523,523}},	{143,{522,522,522,522}},
{143,{384,384,385,385}},	{143,{521,381,381,381}},	{143,{380,380,380,380}},
{143,{356,356,0,0}},	{143,{0,0,0,0}},	{143,{331,331,332,332}},
{143,{327,327,327,327}},	{143,{342,342,343,343}},	{143,{329,329,329,329}},
{143,{341,341,341,341}},	{143,{513,508,509,509}},	{143,{513,510,510,510}},
{143,{513,509,509,509}},	{143,{459,371,372,372}},	{143,{451,368,368,368}},
{143,{455,367,367,367}},	{143,{472,343,0,0}},	{143,{449,0,0,0}},
{143,{453,0,0,0}},	{143,{507,502,502,502}},	{143,{507,362,362,362}},
{143,{507,361,361,361}},	{143,{507,0,0,0}},	{0,{507,0,0,0}},
{0,{507,507,508,508}},	{0,{507,507,507,507}},	{0,{507,507,508,508}},
{0,{508,508,509,509}},	{0,{508,508,508,508}},	{0,{508,508,509,509}},
{0,{509,509,509,509}},	{0,{509,509,509,509}},	{0,{509,509,509,509}},
{0,{509,509,509,509}},	{0,{500,500,500,500}},	{0,{503,503,503,503}},
{159,{507,507,508,508}},	{159,{494,494,495,495}},	{159,{507,507,508,508}},
{159,{496,496,497,497}},	{159,{366,366,366,366}},	{159,{292,292,292,292}},
{159,{505,505,505,505}},	{159,{496,496,496,496}},	{159,{363,363,364,364}},
{159,{291,291,292,292}},	{159,{363,363,363,363}},	{159,{293,293,294,294}},
{159,{0,0,0,0}},	{159,{296,296,296,296}},	{159,{299,299,300,300}},
{159,{312,312,313,313}},	{159,{307,307,0,0}},	{159,{495,495,495,495}},
{159,{487,487,487,487}},	{159,{310,310,310,310}},	{0,{487,487,488,488}},
{0,{488,488,489,489}},	{0,{489,489,489,489}},	{0,{489,489,489,489}},
{0,{484,484,484,484}},	{0,{485,485,485,485}},	{0,{487,487,488,488}},
{0,{487,487,487,487}},	{0,{487,487,488,488}},	{0,{488,488,489,489}},
{0,{488,488,488,488}},	{0,{488,488,489,489}},	{0,{489,489,489,489}},
{0,{489,489,489,489}},	{0,{489,489,489,489}},	{0,{489,489,489,489}},
{0,{489,489,489,489}},	{0,{489,489,489,489}},	{0,{478,478,478,478}},
{0,{481,481,481,481}},	{159,{487,487,488,488}},	{159,{472,472,473,473}},
{159,{487,487,488,488}},	{159,{474,474,475,475}},	{159,{487,487,487,487}},
{159,{476,476,476,476}},	{159,{486,486,486,486}},	{159,{476,476,476,476}},
{159,{485,485,485,485}},	{159,{476,476,476,476}},	{159,{339,339,340,340}},
{159,{340,340,341,341}},	{159,{341,341,341,341}},	{159,{341,341,341,341}},
{159,{341,341,341,341}},	{0,{472,472,473,473}},	{0,{473,473,474,474}},
{0,{474,474,474,474}},	{0,{474,474,474,474}},	{0,{474,474,474,474}},
{0,{468,468,468,468}},	{0,{469,469,469,469}},	{160,{238,238,239,239}},
{160,{234,234,234,234}},	{160,{249,249,250,250}},	{160,{0,0,0,0}},
{160,{257,257,0,0}},	{0,{467,467,468,468}},	{0,{468,468,469,469}},
{0,{469,469,469,469}},	{0,{469,469,469,469}},	{0,{469,469,470,470}},
{0,{470,470,466,466}},	{0,{470,470,470,470}},	{0,{470,470,470,470}},
{0,{470,470,470,470}},	{0,{470,470,470,470}},	{0,{470,470,470,470}},
{0,{470,470,470,470}},	{0,{470,470,470,470}},	{0,{470,247,248,248}},
{0,{470,247,247,247}},	{0,{470,222,223,223}},	{0,{470,222,222,222}},
{0,{470,0,0,0}},	{0,{470,224,224,224}},	{0,{470,227,228,228}},
{0,{470,227,227,227}},	{0,{470,235,0,0}},	{0,{470,240,240,240}},
{0,{470,470,470,470}},	{0,{470,236,237,237}},	{0,{470,236,236,236}},
{0,{470,216,216,216}},	{0,{470,0,0,0}},	{0,{470,216,216,0}},
{0,{470,217,218,218}},	{0,{470,217,217,217}},	{0,{470,206,207,207}},
{0,{470,206,206,206}},	{0,{470,223,0,0}},	{0,{470,228,228,228}},
{0,{470,207,207,207}},	{0,{470,0,0,0}},	{0,{470,0,0,0}},
{0,{470,0,0,0}},	{174,{0,0,0,0}},	{0,{0,0,0,469}},
{0,{469,262,262,262}},	{0,{469,264,264,264}},	{0,{469,0,0,0}},
{143,{469,186,186,186}},	{143,{467,0,0,0}},	{0,{184,184,184,468}},
{0,{0,0,0,468}},	{204,{0,0,0,0}},	{0,{0,0,0,467}},
{226,{229,229,229,229}},	{226,{466,466,466,466}},	{226,{466,227,227,227}},
{226,{0,0,0,0}},	{226,{465,0,0,0}},	{226,{465,465,465,465}},
{226,{311,223,223,223}},	{226,{305,222,222,222}},	{226,{463,459,459,459}},
{226,{463,458,458,458}},	{226,{308,0,0,0}},	{226,{302,0,0,0}},
{228,{217,217,217,217}},	{228,{356,216,216,216}},	{228,{0,0,0,0}},
{228,{302,214,214,214}},	{228,{296,213,213,213}},	{228,{301,0,0,0}},
{228,{295,0,0,0}},	{0,{449,210,210,210}},	{0,{449,0,0,0}},
{232,{0,0,0,0}},	{232,{448,448,448,448}},	{233,{0,0,0,0}},
{0,{449,449,449,449}},	{0,{449,448,448,448}},	{0,{449,447,447,447}},
{0,{449,446,446,446}},	{0,{449,445,445,445}},	{0,{449,449,449,449}},
{0,{449,448,448,448}},	{0,{449,449,449,449}},	{0,{449,448,448,448}},
{0,{449,445,445,445}},	{0,{449,444,444,444}},	{0,{449,445,445,445}},
{0,{449,444,444,444}},	{0,{449,441,441,441}},	{0,{449,440,440,440}},
{0,{449,441,441,441}},	{0,{449,438,438,438}},	{238,{0,0,0,0}},
{0,{0,0,0,448}},	{0,{0,0,0,448}},	{0,{423,423,423,423}},
{0,{425,425,425,425}},	{0,{425,421,421,421}},	{0,{425,420,420,420}},
{0,{321,181,181,181}},	{159,{421,421,421,421}},	{0,{0,0,0,442}},
{0,{442,419,419,419}},	{0,{442,0,0,0}},	{0,{442,0,0,0}},
{0,{442,0,0,0}},	{304,{141,141,142,142}},	{304,{0,0,0,0}},
{304,{137,137,137,0}},	{304,{148,148,0,0}},	{305,{0,0,0,0}},
{306,{136,136,137,137}},	{306,{0,0,0,0}},	{306,{144,144,0,0}},
{306,{134,134,134,134}},	{306,{433,433,433,433}},	{306,{433,433,433,433}},
{308,{130,130,131,131}},	{308,{0,0,0,0}},	{308,{138,138,0,0}},
{0,{430,0,0,0}},	{0,{430,0,0,0}},	{317,{0,0,0,0}},
{319,{0,0,0,0}},	{0,{428,156,156,156}},	{0,{428,0,0,0}},
{0,{428,0,0,0}},	{0,{428,153,153,153}},	{328,{0,0,0,0}},
{330,{0,0,0,0}},	{0,{426,426,0,0}},	{0,{426,426,0,0}},
{353,{0,0,0,0}},	{0,{115,115,115,425}},	{0,{0,0,0,425}},
{365,{0,0,0,0}},	{0,{424,424,425,425}},	{0,{424,424,424,424}},
{0,{424,424,424,424}},	{0,{424,424,424,424}},	{0,{424,424,425,425}},
{0,{424,424,424,424}},	{0,{424,424,425,425}},	{0,{0,425,0,0}},
{0,{423,423,423,423}},	{0,{376,424,376,376}},	{0,{416,424,416,416}},
{374,{0,0,0,0}},	{374,{414,414,414,414}},	{374,{0,419,0,0}},
{374,{412,420,412,412}},	{0,{420,0,0,0}},	{0,{420,369,369,369}},
{0,{420,409,409,409}},	{0,{420,0,0,0}},	{0,{420,366,366,366}},
{0,{420,406,406,406}},	{379,{0,0,0,0}},	{379,{0,410,0,0}},
{379,{412,0,0,0}},	{379,{414,0,0,0}},	{0,{363,416,363,363}},
{0,{416,362,362,362}},	{0,{416,361,361,361}},	{0,{365,416,365,365}},
{0,{366,416,366,366}},	{0,{416,363,363,363}},	{0,{416,364,364,364}},
{0,{416,361,361,361}},	{0,{416,362,362,362}},	{380,{0,0,0,0}},
{380,{0,397,0,0}},	{382,{0,0,0,0}},	{382,{0,395,0,0}},
{0,{412,0,0,0}},	{0,{412,387,387,387}},	{0,{412,345,345,345}},
{382,{409,0,0,0}},	{0,{411,0,0,0}},	{0,{411,411,411,411}},
{3,{409,0,0,0}},	{3,{0,0,0,0}},	{0,{409,410,410,410}},
{0,{409,409,409,409}},	{0,{409,409,409,409}},	{0,{409,410,410,410}},
{0,{409,409,409,409}},	{0,{409,409,409,409}},	{0,{0,0,0,409}},
{0,{409,410,410,410}},	{0,{409,409,409,409}},	{0,{409,410,410,410}},
{0,{409,409,409,409}},	{0,{409,410,410,410}},	{0,{410,411,411,411}},
{0,{408,408,408,408}},	{0,{409,409,409,409}},	{16,{0,0,0,0}},
{16,{394,394,394,394}},	{16,{396,396,396,396}},	{0,{406,406,406,406}},
{0,{406,406,406,406}},	{0,{406,406,406,406}},	{0,{406,406,406,406}},
{0,{406,406,406,406}},	{0,{406,406,406,406}},	{53,{0,0,0,0}},
{0,{0,0,0,405}},	{0,{405,405,405,405}},	{0,{405,405,405,405}},
{0,{405,405,405,405}},	{97,{0,0,0,0}},	{0,{0,404,0,0}},
{107,{0,0,0,0}},	{109,{0,0,0,0}},	{0,{402,402,402,402}},
{0,{402,402,402,402}},	{0,{402,402,402,402}},	{0,{402,402,403,404}},
{0,{404,404,405,406}},	{0,{406,400,401,402}},	{0,{406,402,403,404}},
{0,{406,406,407,408}},	{0,{408,408,409,410}},	{0,{410,404,405,406}},
{0,{410,406,407,408}},	{0,{410,410,411,0}},	{0,{411,409,410,0}},
{0,{411,411,412,405}},	{0,{412,410,411,404}},	{0,{412,412,413,412}},
{0,{0,0,406,0}},	{0,{412,410,411,410}},	{0,{412,0,404,0}},
{0,{412,412,413,414}},	{0,{414,414,415,0}},	{0,{415,410,411,412}},
{0,{415,412,413,0}},	{0,{415,415,415,392}},	{0,{415,415,415,394}},
{0,{415,413,413,390}},	{0,{415,413,413,392}},	{0,{403,0,0,0}},
{0,{390,390,390,390}},	{0,{413,389,389,389}},	{0,{397,397,397,397}},
{0,{398,396,396,396}},	{0,{399,399,399,401}},	{0,{401,401,401,0}},
{0,{402,397,397,399}},	{0,{402,399,399,0}},	{0,{369,369,407,371}},
{0,{371,371,407,373}},	{0,{375,375,400,377}},	{0,{377,377,400,379}},
{0,{381,381,0,0}},	{0,{383,383,377,377}},	{0,{391,391,391,391}},
{0,{402,402,403,367}},	{0,{403,401,402,366}},	{0,{400,400,365,365}},
{0,{397,397,397,361}},	{0,{397,397,397,363}},	{0,{362,362,362,362}},
{0,{399,399,400,401}},	{0,{400,400,399,400}},	{0,{399,399,399,399}},
{0,{396,396,398,398}},	{0,{398,399,353,354}},	{0,{399,400,355,356}},
{0,{400,401,359,360}},	{0,{401,402,361,362}},	{0,{402,403,365,0}},
{0,{403,404,367,360}},	{0,{404,405,363,0}},	{0,{405,406,372,373}},
{0,{406,407,374,0}},	{0,{407,402,360,0}},	{0,{375,407,375,352}},
{0,{375,407,375,354}},	{0,{0,399,0,0}},	{0,{352,406,352,352}},
{0,{364,399,364,366}},	{0,{366,400,366,0}},	{0,{336,383,374,338}},
{0,{338,384,374,340}},	{0,{342,385,367,344}},	{0,{344,386,367,346}},
{0,{348,387,0,0}},	{0,{350,388,344,344}},	{0,{398,399,371,335}},
{0,{369,398,334,334}},	{135,{366,366,366,330}},	{135,{360,360,360,337}},
{135,{0,0,0,0}},	{135,{338,338,338,338}},	{135,{350,350,350,352}},
{135,{351,351,351,351}},	{0,{368,322,323,324}},	{0,{369,324,325,326}},
{0,{370,328,329,330}},	{0,{371,330,331,332}},	{0,{372,334,335,0}},
{0,{373,336,337,330}},	{0,{374,0,333,0}},	{0,{375,341,342,343}},
{0,{376,343,344,0}},	{0,{377,0,330,0}},	{0,{380,352,353,317}},
{0,{381,381,382,383}},	{0,{383,383,384,385}},	{0,{385,379,380,381}},
{0,{385,381,382,383}},	{0,{385,385,386,387}},	{0,{387,387,388,389}},
{0,{389,383,384,385}},	{0,{389,385,386,387}},	{0,{389,389,390,391}},
{0,{391,388,389,390}},	{0,{391,391,392,384}},	{0,{392,390,391,383}},
{0,{392,392,393,374}},	{0,{393,391,392,373}},	{0,{393,393,393,369}},
{0,{393,393,393,371}},	{0,{393,393,393,375}},	{0,{393,393,393,377}},
{0,{381,381,381,381}},	{0,{375,375,375,375}},	{0,{366,366,366,366}},
{139,{390,391,392,393}},	{0,{393,394,360,361}},	{0,{394,395,362,363}},
{139,{395,395,389,390}},	{141,{359,359,360,361}},	{139,{394,395,396,397}},
{0,{397,398,363,364}},	{0,{398,399,365,366}},	{139,{399,399,393,394}},
{141,{362,362,363,364}},	{141,{398,399,367,368}},	{0,{397,398,366,367}},
{141,{364,364,365,366}},	{139,{397,398,399,400}},	{0,{400,401,367,359}},
{139,{401,401,397,398}},	{141,{364,364,365,357}},	{139,{400,401,402,403}},
{139,{403,403,401,402}},	{141,{287,287,288,0}},	{141,{324,325,287,0}},
{139,{401,402,398,399}},	{139,{398,398,397,398}},	{141,{0,0,284,0}},
{141,{324,325,283,0}},	{139,{399,400,401,402}},	{139,{402,402,400,401}},
{141,{292,292,293,0}},	{141,{326,321,279,0}},	{139,{400,394,390,391}},
{139,{400,401,400,402}},	{139,{399,399,399,401}},	{141,{292,292,292,271}},
{141,{0,316,0,0}},	{141,{0,0,0,0}},	{139,{398,399,398,398}},
{139,{397,397,397,397}},	{141,{266,266,266,266}},	{139,{382,385,382,382}},
{139,{381,381,381,381}},	{139,{388,385,388,387}},	{139,{387,387,387,386}},
{141,{277,277,277,0}},	{139,{392,393,394,395}},	{139,{391,391,393,394}},
{141,{248,248,284,250}},	{139,{393,394,384,386}},	{139,{392,392,383,385}},
{141,{253,253,276,255}},	{141,{257,296,0,0}},	{141,{256,256,0,0}},
{139,{390,391,382,382}},	{139,{389,389,381,381}},	{141,{256,256,250,250}},
{139,{367,364,366,366}},	{139,{366,366,365,365}},	{139,{371,371,371,371}},
{0,{386,387,327,308}},	{141,{328,328,328,304}},	{141,{328,328,328,306}},
{141,{328,328,328,310}},	{141,{328,328,328,312}},	{141,{316,316,316,316}},
{141,{310,310,310,310}},	{141,{252,252,252,254}},	{141,{258,258,258,235}},
{141,{262,262,262,226}},	{141,{262,262,262,228}},	{141,{250,250,250,250}},
{139,{376,376,376,324}},	{139,{376,376,376,332}},	{139,{342,342,342,342}},
{139,{365,365,365,366}},	{135,{313,313,313,289}},	{135,{314,314,314,296}},
{135,{303,303,303,303}},	{135,{297,297,297,297}},	{141,{288,288,288,288}},
{141,{217,217,217,217}},	{0,{315,281,282,283}},	{0,{316,283,284,285}},
{0,{322,287,288,289}},	{0,{323,289,290,291}},	{0,{325,293,294,295}},
{0,{330,296,297,289}},	{0,{358,298,299,280}},	{0,{230,265,231,232}},
{0,{232,266,233,0}},	{0,{359,261,219,0}},	{0,{0,260,218,0}},
{0,{357,259,0,0}},	{139,{337,334,335,336}},	{141,{0,257,215,0}},
{139,{327,330,326,327}},	{0,{354,355,356,357}},	{0,{353,354,356,356}},
{0,{355,353,355,355}},	{0,{354,354,354,354}},	{0,{349,0,0,0}},
{0,{229,229,192,193}},	{0,{229,229,194,195}},	{0,{351,227,190,191}},
{0,{351,227,192,193}},	{0,{220,220,196,197}},	{0,{220,220,198,199}},
{0,{220,218,194,195}},	{0,{220,218,196,197}},	{0,{196,196,203,196}},
{0,{219,195,202,195}},	{0,{186,186,222,186}},	{0,{344,185,221,185}},
{0,{344,217,180,181}},	{0,{344,217,182,183}},	{0,{344,210,186,187}},
{0,{344,210,188,189}},	{0,{344,188,195,188}},	{0,{344,179,215,179}},
{0,{269,269,244,245}},	{0,{269,269,246,247}},	{0,{342,267,242,243}},
{0,{342,267,244,245}},	{0,{267,267,248,249}},	{0,{267,267,250,251}},
{0,{340,265,246,247}},	{0,{340,265,248,249}},	{0,{253,253,252,253}},
{0,{339,252,251,252}},	{0,{246,246,254,246}},	{0,{338,245,253,245}},
{0,{236,236,255,236}},	{0,{337,235,254,235}},	{0,{337,255,230,231}},
{0,{337,255,232,233}},	{0,{337,255,236,237}},	{0,{337,255,238,239}},
{0,{337,243,242,243}},	{0,{337,237,245,237}},	{0,{337,228,247,228}},
{0,{337,337,337,338}},	{0,{338,338,338,339}},	{0,{339,339,339,340}},
{0,{340,340,340,341}},	{0,{341,341,341,341}},	{0,{339,339,339,339}},
{0,{340,340,340,341}},	{0,{341,341,341,338}},	{0,{339,339,339,339}},
{0,{331,331,331,331}},	{0,{312,339,183,147}},	{0,{310,208,161,154}},
{0,{145,337,145,145}},	{0,{323,337,233,214}},	{0,{321,337,229,221}},
{0,{319,337,224,225}},	{162,{174,174,174,138}},	{162,{174,174,174,140}},
{162,{167,167,167,144}},	{162,{167,167,167,146}},	{162,{0,0,0,0}},
{162,{144,144,144,144}},	{162,{156,156,156,158}},	{162,{158,158,158,0}},
{162,{156,156,156,156}},	{162,{132,132,132,132}},	{0,{327,327,327,327}},
{0,{327,327,327,328}},	{0,{328,328,328,329}},	{0,{329,329,329,329}},
{0,{329,329,329,329}},	{0,{329,329,329,329}},	{0,{329,329,329,330}},
{0,{330,330,330,326}},	{0,{330,330,330,331}},	{0,{331,331,331,323}},
{0,{326,326,326,326}},	{0,{320,320,320,320}},	{167,{127,127,127,127}},
{167,{0,0,0,0}},	{168,{0,0,0,0}},	{170,{0,0,0,0}},
{0,{0,325,0,0}},	{197,{167,0,126,0}},	{197,{172,0,125,0}},
{197,{0,0,0,0}},	{197,{0,0,123,0}},	{0,{321,0,122,0}},
{0,{320,0,0,0}},	{0,{320,0,0,0}},	{0,{320,161,0,0}},
{0,{320,321,320,320}},	{0,{319,319,319,319}},	{0,{317,0,0,0}},
{139,{319,231,228,228}},	{141,{315,156,0,0}},	{0,{318,318,318,0}},
{0,{318,318,318,302}},	{139,{318,318,318,224}},	{141,{315,315,315,0}},
{168,{314,314,314,0}},	{0,{316,0,316,0}},	{0,{316,297,316,297}},
{0,{316,311,316,0}},	{0,{316,311,316,295}},	{139,{316,217,316,217}},
{141,{311,0,311,0}},	{139,{315,309,315,215}},	{141,{311,306,311,0}},
{167,{308,0,308,0}},	{168,{307,0,307,0}},	{168,{308,303,308,0}},
{170,{305,0,305,0}},	{0,{310,0,0,0}},	{0,{310,310,310,310}},
{0,{310,0,0,0}},	{197,{294,0,0,0}},	{285,{0,0,0,0}},
{287,{0,0,0,0}},	{288,{0,0,0,0}},	{0,{306,306,306,307}},
{0,{306,306,306,306}},	{0,{0,306,0,0}},	{315,{0,0,0,0}},
{325,{198,201,198,198}},	{325,{197,197,197,197}},	{326,{0,0,0,0}},
{326,{0,124,0,0}},	{0,{301,301,301,301}},	{0,{301,301,301,301}},
{0,{301,301,301,302}},	{0,{301,301,301,301}},	{0,{93,93,301,70}},
{0,{93,93,301,72}},	{0,{0,0,301,0}},	{0,{70,70,301,70}},
{0,{82,82,301,84}},	{0,{84,84,301,0}},	{0,{301,80,80,82}},
{0,{301,82,82,0}},	{373,{0,0,0,0}},	{373,{269,0,0,0}},
{373,{0,0,293,0}},	{377,{0,0,0,0}},	{377,{266,0,0,0}},
{377,{0,0,290,0}},	{378,{0,0,0,0}},	{378,{263,0,0,0}},
{378,{0,0,287,0}},	{373,{265,265,265,0}},	{377,{264,264,264,0}},
{378,{263,263,263,0}},	{373,{265,0,265,0}},	{373,{266,261,266,0}},
{377,{263,0,263,0}},	{377,{264,259,264,0}},	{378,{261,0,261,0}},
{378,{262,257,262,0}},	{0,{283,283,283,283}},	{0,{282,282,283,282}},
{0,{283,281,281,281}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,283,283,283}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,283,283,283}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,283,283,283}},	{0,{283,283,274,274}},	{0,{283,283,0,0}},
{0,{283,283,283,283}},	{0,{283,283,283,283}},	{0,{283,279,270,270}},
{0,{283,279,0,0}},	{0,{283,268,268,268}},	{0,{283,0,0,0}},
{0,{283,283,284,284}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,280,281,281}},	{0,{283,280,280,280}},	{0,{283,283,283,283}},
{0,{283,283,283,283}},	{0,{283,0,0,0}},	{0,{283,0,0,0}},
{0,{283,0,0,0}},	{0,{0,0,0,283}},	{0,{283,0,0,0}},
{0,{283,0,0,0}},	{0,{283,0,0,0}},	{0,{283,283,283,284}},
{0,{284,284,284,285}},	{0,{285,285,285,286}},	{0,{286,286,286,281}},
{0,{286,286,286,282}},	{0,{283,283,283,283}},	{0,{285,285,285,286}},
{0,{286,286,286,285}},	{0,{286,286,286,287}},	{0,{287,287,287,288}},
{0,{288,288,288,289}},	{0,{289,289,289,284}},	{0,{289,289,289,285}},
{0,{286,286,286,286}},	{0,{288,288,288,289}},	{0,{289,289,289,288}},
{0,{289,289,289,289}},	{0,{289,289,289,289}},	{0,{289,289,289,289}},
{0,{276,276,276,276}},	{0,{277,277,277,277}},	{0,{282,282,282,282}},
{0,{286,0,0,0}},	{0,{286,283,283,283}},	{0,{286,287,287,287}},
{0,{286,286,286,286}},	{0,{286,286,286,0}},	{0,{286,286,286,279}},
{0,{286,286,286,0}},	{0,{286,286,286,0}},	{0,{286,286,286,276}},
{0,{286,286,286,280}},	{0,{286,286,286,279}},	{0,{286,286,286,266}},
{0,{286,286,286,265}},	{0,{286,286,286,287}},	{0,{287,287,287,286}},
{0,{285,285,285,285}},	{0,{286,286,286,250}},	{0,{286,286,286,249}},
{0,{244,244,244,244}},	{0,{245,245,245,245}},	{0,{250,250,250,250}},
{0,{262,262,262,283}},	{0,{262,262,262,283}},	{0,{0,0,0,283}},
{0,{283,283,283,284}},	{0,{284,284,284,285}},	{0,{285,285,285,282}},
{0,{285,285,285,283}},	{0,{285,285,285,286}},	{0,{286,286,286,287}},
{0,{287,287,287,284}},	{0,{287,287,287,285}},	{0,{287,287,287,287}},
{0,{287,287,287,287}},	{0,{280,280,280,280}},	{0,{281,281,281,281}},
{0,{285,285,285,285}},	{0,{285,285,285,285}},	{0,{285,285,285,286}},
{0,{286,286,286,283}},	{0,{286,286,286,284}},	{0,{286,286,286,281}},
{0,{282,282,282,282}},	{0,{285,285,285,286}},	{0,{286,286,286,285}},
{0,{284,284,284,284}},	{0,{262,262,262,262}},	{0,{263,263,263,263}},
{0,{283,283,283,284}},	{0,{284,284,284,285}},	{0,{285,285,285,286}},
{0,{286,286,286,281}},	{0,{286,286,286,282}},	{0,{283,283,283,283}},
{0,{285,285,285,286}},	{0,{286,286,286,285}},	{0,{286,286,286,287}},
{0,{287,287,287,288}},	{0,{288,288,288,289}},	{0,{289,289,289,284}},
{0,{289,289,289,285}},	{0,{286,286,286,286}},	{0,{288,288,288,289}},
{0,{289,289,289,288}},	{0,{289,289,289,289}},	{0,{289,289,289,289}},
{0,{289,289,289,289}},	{0,{289,289,289,289}},	{0,{275,275,275,275}},
{0,{276,276,276,276}},	{0,{281,281,281,281}},	{0,{261,261,261,261}},
{0,{262,262,262,262}},	{0,{267,267,267,267}},	{0,{283,283,283,262}},
{0,{283,283,283,261}},	{0,{283,283,283,271}},	{0,{283,283,283,270}},
{0,{283,283,284,285}},	{0,{285,285,286,287}},	{0,{253,253,287,254}},
{0,{254,254,287,255}},	{0,{279,279,279,281}},	{0,{281,281,281,283}},
{0,{285,285,285,279}},	{0,{285,285,285,281}},	{0,{245,245,285,246}},
{0,{285,285,286,287}},	{0,{287,287,288,289}},	{0,{255,255,289,256}},
{0,{256,256,289,257}},	{0,{281,281,281,283}},	{0,{283,283,283,285}},
{0,{287,287,287,281}},	{0,{287,287,287,283}},	{0,{247,247,287,248}},
{0,{287,287,287,287}},	{0,{287,287,287,287}},	{0,{276,276,287,276}},
{0,{278,278,287,278}},	{0,{245,245,287,245}},	{0,{246,246,287,246}},
{0,{272,272,272,272}},	{0,{274,274,274,274}},	{0,{239,239,285,239}},
{0,{214,214,285,214}},	{0,{214,214,285,214}},	{0,{177,177,285,177}},
{0,{0,0,285,0}},	{0,{174,174,285,174}},	{0,{211,211,285,211}},
{0,{211,211,285,211}},	{0,{211,211,285,212}},	{0,{212,212,285,209}},
{0,{177,177,285,170}},	{0,{177,177,285,0}},	{0,{174,174,285,0}},
{0,{207,207,285,207}},	{0,{179,179,285,159}},	{0,{209,209,285,210}},
{0,{156,156,285,157}},	{0,{156,156,285,156}},	{0,{207,207,285,207}},
{0,{138,138,285,139}},	{0,{185,185,285,186}},	{0,{177,177,285,141}},
{0,{139,139,285,140}},	{0,{145,145,285,146}},	{0,{187,187,285,188}},
{0,{144,144,285,144}},	{0,{186,186,285,186}},	{0,{232,232,232,232}},
{0,{234,234,234,234}},	{0,{224,224,283,203}},	{0,{225,225,283,213}},
{0,{0,0,0,283}},	{0,{0,0,0,283}},	{0,{185,185,185,283}},
{0,{146,146,146,283}},	{0,{0,0,0,283}},	{0,{283,283,283,284}},
{0,{284,284,284,283}},	{0,{282,282,282,282}},	{0,{283,283,283,284}},
{0,{284,284,284,283}},	{0,{284,284,284,285}},	{0,{285,285,285,284}},
{0,{283,283,283,283}},	{0,{279,279,279,279}},	{0,{283,283,283,284}},
{0,{284,284,284,283}},	{0,{284,284,284,285}},	{0,{285,285,285,284}},
{0,{285,285,285,285}},	{0,{282,282,282,282}},	{0,{278,278,278,278}},
{0,{283,283,283,284}},	{0,{284,284,284,283}},	{0,{284,284,284,285}},
{0,{285,285,285,284}},	{0,{285,285,285,285}},	{0,{282,282,282,282}},
{0,{278,278,278,278}},	{0,{283,283,283,284}},	{0,{284,284,284,283}},
{0,{284,284,284,282}},	{0,{281,281,281,281}},	{0,{283,283,283,284}},
{0,{284,284,284,283}},	{0,{284,284,284,282}},	{0,{281,281,281,281}},
{0,{283,283,283,283}},	{0,{283,283,283,282}},	{0,{283,283,283,281}},
{0,{283,283,283,280}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,283,283,283}},	{0,{283,283,283,283}},	{0,{283,283,283,283}},
{0,{283,283,122,86}},	{0,{283,283,84,85}},	{0,{283,283,121,84}},
{0,{283,283,83,83}},	{0,{283,283,93,93}},	{0,{283,283,0,0}},
{0,{283,282,0,0}},	{0,{283,283,103,0}},	{0,{283,283,104,0}},
{0,{283,283,104,0}},	{0,{283,283,107,87}},	{0,{283,283,85,86}},
{0,{283,283,106,85}},	{196,{0,0,0,0}},	{203,{0,0,0,0}},
{205,{0,0,0,0}},	{0,{280,280,280,280}},	{0,{280,0,0,0}},
{0,{280,124,124,124}},	{0,{277,277,280,277}},	{0,{280,280,280,280}},
{0,{280,280,279,279}},	{0,{278,278,280,278}},	{0,{280,280,280,280}},
{0,{280,280,279,279}},	{0,{280,280,280,280}},	{0,{280,280,279,279}},
{0,{276,276,280,276}},	{0,{277,277,280,277}},	{0,{280,280,280,280}},
{0,{0,0,0,280}},	{259,{0,0,0,0}},	{0,{279,279,279,280}},
{0,{279,279,279,279}},	{0,{279,279,279,279}},	{0,{0,0,0,279}},
{0,{0,0,0,279}},	{0,{76,279,76,0}},	{0,{0,279,0,0}},
{372,{78,78,78,58}},	{372,{78,78,78,57}},	{372,{0,0,0,0}},
{372,{55,55,55,55}},	{372,{67,67,67,0}},	{372,{69,69,69,0}},
{0,{273,273,273,251}},	{0,{273,273,273,250}},	{0,{0,0,0,273}},
{372,{0,0,0,272}},	{0,{247,247,247,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{0,0,0,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{0,0,0,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{264,264,264,272}},
{0,{264,264,264,272}},	{0,{268,268,268,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{264,264,264,272}},	{0,{264,264,264,272}},
{0,{268,268,268,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{270,270,270,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{270,270,270,272}},	{0,{0,0,0,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{267,267,267,272}},	{0,{269,269,269,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{270,270,270,272}},
{0,{249,249,249,272}},	{0,{269,269,269,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,272}},
{0,{272,272,272,272}},	{0,{272,272,272,226}},	{0,{272,272,272,226}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,228}},
{0,{272,272,272,272}},	{0,{272,272,272,231}},	{0,{272,272,272,231}},
{0,{272,272,272,272}},	{0,{272,272,272,272}},	{0,{272,272,272,233}},
{0,{272,272,272,272}},	{0,{272,272,272,236}},	{0,{272,272,272,272}},
{0,{272,272,272,0}},	{0,{272,272,272,272}},	{0,{272,272,272,273}},
{0,{273,273,273,274}},	{0,{274,274,274,274}},	{0,{274,274,274,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{267,267,267,275}},	{0,{267,267,267,275}},	{0,{271,271,271,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{267,267,267,275}},
{0,{267,267,267,275}},	{0,{271,271,271,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{272,272,272,275}},
{0,{275,275,275,275}},	{0,{275,275,275,275}},	{0,{275,275,275,275}},
{0,{275,275,275,275}},	{0,{275,275,275,245}},	{140,{274,274,274,244}},
{0,{274,274,274,244}},	{0,{274,274,274,274}},	{140,{273,273,273,273}},
{0,{273,273,273,273}},	{140,{241,241,241,241}},	{140,{242,242,242,242}},
{0,{271,271,271,243}},	{0,{271,271,271,271}},	{140,{235,235,235,235}},
{0,{270,270,270,245}},	{140,{269,269,269,244}},	{0,{269,269,269,244}},
{0,{269,269,269,269}},	{140,{268,268,268,268}},	{0,{268,268,268,268}},
{140,{241,241,241,241}},	{140,{242,242,242,242}},	{0,{266,266,266,243}},
{0,{266,266,266,266}},	{140,{235,235,235,235}},	{0,{265,265,265,245}},
{0,{265,265,265,265}},	{140,{258,258,258,233}},	{140,{259,259,259,259}},
{140,{233,233,233,233}},	{140,{234,234,234,234}},	{140,{229,229,229,229}},
{140,{201,201,201,165}},	{140,{201,201,201,201}},	{140,{164,164,164,164}},
{140,{0,0,0,0}},	{140,{161,161,161,161}},	{140,{198,198,198,0}},
{140,{198,198,198,198}},	{140,{198,198,198,199}},	{140,{201,201,201,201}},
{140,{164,164,164,164}},	{140,{164,164,164,164}},	{140,{161,161,161,161}},
{140,{195,195,195,196}},	{140,{166,166,166,166}},	{140,{199,199,199,199}},
{140,{143,143,143,143}},	{140,{143,143,143,143}},	{140,{197,197,197,197}},
{140,{125,125,125,125}},	{140,{172,172,172,172}},	{140,{164,164,164,164}},
{140,{126,126,126,126}},	{140,{132,132,132,132}},	{140,{174,174,174,174}},
{140,{131,131,131,131}},	{140,{173,173,173,173}},	{140,{216,216,216,216}},
{140,{217,217,217,217}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{151,151,151,232}},	{0,{114,114,114,232}},	{0,{150,150,150,232}},
{0,{232,232,232,148}},	{0,{232,232,232,111}},	{0,{232,232,232,147}},
{0,{232,232,232,140}},	{0,{232,232,232,119}},	{0,{232,232,232,139}},
{0,{200,200,200,232}},	{0,{178,178,178,232}},	{0,{199,199,199,232}},
{0,{199,199,199,232}},	{0,{186,186,186,232}},	{0,{198,198,198,232}},
{0,{192,192,192,232}},	{0,{232,232,232,193}},	{0,{232,232,232,171}},
{0,{232,232,232,192}},	{0,{232,232,232,192}},	{0,{232,232,232,179}},
{0,{232,232,232,191}},	{0,{232,232,232,185}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{232,232,232,232}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{122,122,122,122}},
{0,{231,231,231,231}},	{0,{231,231,231,231}},	{140,{119,119,119,119}},
{0,{230,230,230,230}},	{0,{230,230,230,230}},	{140,{228,228,228,228}},
{0,{229,229,229,229}},	{0,{229,229,229,229}},	{0,{229,229,229,229}},
{0,{229,229,229,229}},	{140,{225,225,225,225}},	{140,{226,226,226,226}},
{0,{227,227,227,227}},	{0,{227,227,227,227}},	{0,{227,227,227,227}},
{0,{227,227,227,227}},	{0,{227,227,227,227}},	{0,{227,227,227,227}},
{0,{227,227,227,227}},	{357,{69,69,69,69}},	{357,{0,0,0,0}},
{0,{98,98,98,98}},	{0,{102,102,102,102}},	{0,{223,223,223,223}},
{0,{223,223,223,223}},	{0,{0,0,223,0}},	{0,{223,223,223,223}},
{0,{223,223,224,223}},	{0,{222,222,222,222}},	{0,{223,223,223,223}},
{0,{223,223,224,223}},	{0,{222,222,222,222}},	{0,{223,223,223,223}},
{0,{0,0,0,223}},	{0,{223,223,224,223}},	{0,{222,222,222,222}},
{0,{223,223,224,223}},	{0,{222,222,222,222}},	{0,{223,223,224,223}},
{0,{222,222,222,222}},	{0,{223,223,224,223}},	{0,{222,222,222,222}},
{0,{223,223,223,223}},	{0,{223,223,223,223}},	{0,{223,223,223,223}},
{0,{223,223,223,223}},	{0,{223,223,223,223}},	{0,{223,223,223,223}},
{0,{0,0,0,223}},	{0,{223,223,223,223}},	{0,{223,223,223,223}},
{0,{223,223,223,223}},	{0,{223,223,223,0}},	{0,{223,223,223,223}},
{0,{223,223,223,223}},	{0,{223,223,223,223}},	{0,{223,223,224,225}},
{0,{225,225,0,0}},	{0,{225,226,222,223}},	{0,{226,227,0,0}},
{0,{227,227,221,221}},	{0,{224,224,0,0}},	{0,{226,226,227,0}},
{0,{227,228,226,0}},	{0,{228,228,229,230}},	{0,{230,230,231,231}},
{0,{231,231,232,230}},	{0,{232,232,213,214}},	{0,{232,232,0,0}},
{0,{232,233,211,212}},	{0,{233,234,0,0}},	{0,{234,234,210,210}},
{0,{231,231,0,0}},	{0,{233,233,216,0}},	{0,{233,234,215,0}},
{0,{234,234,218,219}},	{0,{234,234,220,220}},	{0,{234,234,221,219}},
{0,{234,234,0,0}},	{0,{0,234,0,0}},	{0,{234,234,216,216}},
{0,{234,234,234,234}},	{0,{233,234,233,233}},	{0,{234,234,234,234}},
{0,{212,212,212,212}},	{0,{195,195,195,196}},	{0,{194,232,194,195}},
{0,{194,194,194,194}},	{0,{201,201,201,0}},	{0,{200,230,200,0}},
{0,{203,203,203,204}},	{0,{207,207,207,205}},	{0,{209,209,188,189}},
{0,{214,214,196,0}},	{0,{226,226,199,200}},	{0,{226,226,201,201}},
{0,{226,226,202,200}},	{0,{186,186,183,184}},	{0,{192,192,191,0}},
{0,{224,224,225,225}},	{0,{224,225,224,224}},	{0,{223,223,223,223}},
{0,{224,177,178,179}},	{0,{224,179,0,0}},	{0,{224,224,225,226}},
{0,{226,226,227,227}},	{0,{227,182,183,0}},	{0,{227,227,228,225}},
{0,{228,191,172,173}},	{0,{228,191,0,0}},	{0,{228,228,219,220}},
{0,{228,228,221,221}},	{0,{228,194,177,0}},	{0,{228,228,222,219}},
{0,{228,198,0,0}},	{0,{228,228,217,217}},	{0,{228,0,0,0}},
{0,{215,215,215,215}},	{0,{227,162,162,163}},	{0,{227,161,161,162}},
{0,{227,0,0,0}},	{0,{227,0,0,0}},	{0,{207,207,207,208}},
{0,{226,166,166,0}},	{0,{226,165,165,0}},	{0,{210,210,210,207}},
{0,{225,225,203,204}},	{0,{225,225,205,205}},	{0,{225,225,207,204}},
{0,{225,150,151,152}},	{0,{225,152,0,0}},	{0,{225,153,149,150}},
{0,{225,154,0,0}},	{0,{225,154,148,148}},	{0,{223,151,0,0}},
{0,{224,153,154,0}},	{0,{224,155,153,0}},	{0,{224,155,156,157}},
{0,{224,157,158,158}},	{0,{224,158,159,157}},	{0,{224,159,140,141}},
{0,{224,159,0,0}},	{0,{224,160,138,139}},	{0,{224,161,0,0}},
{0,{224,161,137,137}},	{0,{222,158,0,0}},	{0,{223,160,143,0}},
{0,{223,161,142,0}},	{0,{223,161,145,146}},	{0,{223,161,147,147}},
{0,{223,161,148,146}},	{0,{223,161,0,0}},	{0,{223,161,0,0}},
{0,{222,0,0,0}},	{0,{222,160,142,142}},	{0,{201,128,125,126}},
{0,{204,134,133,0}},	{0,{209,144,123,124}},	{0,{212,149,131,0}},
{0,{218,120,121,122}},	{0,{218,122,0,0}},	{0,{218,167,168,169}},
{0,{218,169,170,170}},	{0,{218,125,126,0}},	{0,{218,170,171,168}},
{0,{218,134,115,116}},	{0,{218,134,0,0}},	{0,{218,171,162,163}},
{0,{218,171,164,164}},	{0,{218,137,120,0}},	{0,{218,171,165,162}},
{0,{218,141,0,0}},	{0,{218,171,160,160}},	{0,{218,218,0,0}},
{0,{218,218,219,219}},	{0,{219,219,219,219}},	{0,{217,219,217,217}},
{0,{216,216,216,216}},	{0,{218,218,115,116}},	{0,{218,218,117,117}},
{0,{218,218,118,116}},	{0,{218,102,99,100}},	{0,{218,103,0,0}},
{0,{218,107,106,0}},	{0,{218,117,96,97}},	{0,{218,118,0,0}},
{0,{218,121,103,0}},	{0,{218,209,106,107}},	{0,{218,209,108,108}},
{0,{218,209,109,107}},	{0,{218,130,103,104}},	{0,{218,130,105,105}},
{0,{218,130,106,104}},	{0,{218,103,103,103}},	{0,{218,89,86,87}},
{0,{218,90,0,0}},	{0,{218,94,93,0}},	{0,{218,104,83,84}},
{0,{218,105,0,0}},	{0,{218,108,90,0}},	{0,{218,0,0,0}},
{0,{218,218,219,220}},	{0,{220,220,221,221}},	{0,{221,221,218,218}},
{0,{221,221,222,219}},	{0,{222,222,215,216}},	{0,{222,222,217,217}},
{0,{222,222,214,214}},	{0,{222,222,218,215}},	{0,{214,214,214,214}},
{0,{210,210,210,211}},	{0,{210,210,210,210}},	{0,{214,214,214,211}},
{0,{218,218,119,119}},	{0,{218,217,118,118}},	{0,{218,137,117,117}},
{0,{218,116,116,116}},	{0,{218,218,218,218}},	{0,{218,218,219,220}},
{0,{220,220,219,219}},	{0,{220,220,221,222}},	{0,{222,222,221,221}},
{0,{222,222,220,220}},	{0,{219,219,219,219}},	{0,{221,221,221,221}},
{0,{212,212,212,213}},	{0,{212,212,212,212}},	{0,{214,214,214,215}},
{0,{218,218,209,210}},	{0,{218,218,209,209}},	{0,{218,218,211,212}},
{0,{218,218,218,218}},	{0,{218,218,218,218}},	{0,{0,0,218,0}},
{0,{208,208,218,208}},	{0,{218,0,0,0}},	{0,{218,206,206,206}},
{0,{216,0,214,0}},	{0,{216,204,214,204}},	{0,{216,0,216,0}},
{0,{216,216,216,216}},	{0,{216,216,216,217}},	{0,{216,216,216,216}},
{0,{216,216,216,216}},	{0,{216,216,216,216}},	{0,{216,216,216,216}},
{0,{216,216,216,216}},	{0,{216,215,215,215}},	{1,{0,0,0,0}},
{0,{215,215,215,215}},	{0,{215,215,215,0}},	{1,{214,214,214,0}},
{0,{214,214,214,212}},	{0,{214,214,214,0}},	{1,{213,213,213,0}},
{0,{213,213,213,209}},	{0,{0,0,0,213}},	{0,{213,213,213,213}},
{1,{212,212,212,212}},	{0,{212,212,212,212}},	{1,{211,211,211,211}},
{0,{211,211,211,211}},	{1,{210,210,210,210}},	{0,{210,210,210,210}},
{1,{209,209,209,209}},	{0,{209,209,209,209}},	{0,{209,209,209,209}},
{0,{209,209,209,209}},	{0,{209,209,209,209}},	{0,{209,209,209,209}},
{0,{209,0,0,0}},	{0,{209,0,0,0}},	{0,{209,209,209,209}},
{0,{209,209,209,209}},	{0,{209,209,209,209}},	{0,{209,209,209,0}},
{0,{209,209,209,209}},	{0,{209,209,209,209}},	{0,{209,209,209,209}},
{0,{209,210,0,0}},	{0,{210,210,0,0}},	{0,{210,210,0,0}},
{0,{210,211,0,0}},	{0,{211,206,0,0}},	{125,{210,205,0,0}},
{0,{210,208,0,0}},	{125,{209,207,0,0}},	{0,{209,210,0,0}},
{0,{210,211,0,0}},	{0,{211,211,0,0}},	{0,{211,209,0,0}},
{125,{210,208,0,0}},	{0,{210,211,212,212}},	{0,{212,212,211,211}},
{0,{212,212,210,210}},	{0,{212,213,209,209}},	{0,{208,208,208,208}},
{0,{212,213,207,207}},	{0,{213,213,206,206}},	{0,{213,190,0,0}},
{0,{213,193,0,0}},	{0,{188,188,0,0}},	{125,{187,187,0,0}},
{0,{190,190,0,0}},	{125,{189,189,0,0}},	{0,{192,192,0,0}},
{0,{208,193,0,0}},	{0,{192,192,0,0}},	{125,{191,191,0,0}},
{0,{206,194,195,195}},	{0,{206,198,194,194}},	{0,{206,199,193,193}},
{0,{206,0,0,0}},	{125,{0,0,0,0}},	{0,{205,190,190,190}},
{0,{205,205,205,205}},	{125,{204,204,204,204}},	{0,{204,204,204,204}},
{125,{172,172,0,0}},	{125,{181,181,0,0}},	{0,{183,183,184,184}},
{0,{187,187,183,183}},	{0,{188,188,182,182}},	{0,{199,200,200,200}},
{0,{199,199,199,199}},	{125,{198,198,198,198}},	{0,{198,199,200,200}},
{0,{200,201,199,199}},	{0,{201,202,203,203}},	{0,{203,203,202,202}},
{0,{203,203,201,201}},	{0,{203,204,200,200}},	{0,{199,199,199,199}},
{0,{203,204,193,193}},	{0,{204,205,197,197}},	{0,{205,205,196,196}},
{0,{205,189,190,190}},	{0,{205,191,189,189}},	{0,{205,192,193,193}},
{0,{205,196,192,192}},	{0,{205,197,186,186}},	{0,{205,198,190,190}},
{0,{205,184,184,184}},	{0,{205,188,188,188}},	{0,{182,182,182,182}},
{0,{204,204,181,181}},	{0,{204,204,0,0}},	{0,{204,204,179,179}},
{0,{204,204,0,0}},	{0,{204,204,177,177}},	{0,{204,204,0,0}},
{0,{179,179,180,180}},	{0,{183,183,179,179}},	{0,{186,186,178,178}},
{0,{201,135,0,0}},	{0,{201,138,0,0}},	{0,{201,133,0,0}},
{0,{201,136,0,0}},	{0,{201,139,0,0}},	{0,{201,140,0,0}},
{0,{201,139,0,0}},	{0,{201,142,143,143}},	{0,{201,146,142,142}},
{0,{201,147,141,141}},	{0,{201,125,0,0}},	{0,{201,128,0,0}},
{0,{201,123,0,0}},	{0,{201,126,0,0}},	{0,{201,129,0,0}},
{0,{201,130,0,0}},	{0,{201,129,0,0}},	{0,{201,132,133,133}},
{0,{201,136,132,132}},	{0,{201,137,131,131}},	{0,{201,0,0,0}},
{0,{201,0,0,0}},	{0,{201,128,128,128}},	{0,{201,148,149,149}},
{0,{201,150,148,148}},	{0,{201,151,152,152}},	{0,{201,155,151,151}},
{0,{201,156,145,145}},	{0,{201,157,149,149}},	{0,{201,142,143,143}},
{0,{201,144,142,142}},	{0,{201,145,146,146}},	{0,{201,149,145,145}},
{0,{201,150,139,139}},	{0,{201,151,143,143}},	{0,{201,137,137,137}},
{0,{201,141,141,141}},	{0,{201,201,201,201}},	{0,{201,200,200,200}},
{0,{201,0,0,0}},	{0,{201,137,137,137}},	{125,{199,0,0,0}},
{0,{200,107,108,108}},	{0,{200,111,107,107}},	{0,{200,112,106,106}},
{0,{200,126,127,127}},	{0,{200,128,126,126}},	{0,{200,136,125,125}},
{0,{123,123,124,124}},	{0,{125,125,123,123}},	{0,{133,133,122,122}},
{0,{197,98,99,99}},	{0,{197,102,98,98}},	{0,{197,103,97,97}},
{0,{197,95,96,96}},	{0,{197,99,95,95}},	{0,{197,100,94,94}},
{0,{197,93,93,93}},	{0,{197,113,114,114}},	{0,{197,115,113,113}},
{0,{197,123,112,112}},	{0,{197,110,111,111}},	{0,{197,112,110,110}},
{0,{197,120,109,109}},	{0,{197,108,108,108}},	{0,{197,198,199,199}},
{0,{199,199,198,198}},	{0,{199,199,197,197}},	{0,{199,200,196,196}},
{0,{195,195,195,195}},	{0,{199,200,194,194}},	{0,{200,201,193,193}},
{0,{201,201,192,192}},	{0,{190,190,191,191}},	{0,{194,194,190,190}},
{0,{195,195,189,189}},	{0,{196,196,188,188}},	{0,{197,104,100,100}},
{0,{197,103,99,99}},	{0,{197,102,98,98}},	{0,{197,97,97,97}},
{0,{197,0,197,0}},	{0,{197,198,199,199}},	{0,{199,199,198,198}},
{0,{199,199,197,197}},	{0,{199,200,196,196}},	{0,{200,201,195,195}},
{0,{201,201,194,194}},	{0,{193,193,193,193}},	{0,{200,201,192,192}},
{0,{200,200,191,191}},	{0,{200,200,200,200}},	{0,{188,188,189,189}},
{0,{192,192,188,188}},	{0,{193,193,187,187}},	{0,{197,197,197,197}},
{0,{197,197,197,197}},	{235,{0,0,0,0}},	{235,{183,183,183,183}},
{236,{0,0,0,0}},	{236,{181,181,181,181}},	{243,{0,0,0,0}},
{0,{192,192,0,0}},	{0,{192,192,193,193}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,0,0,0}},	{0,{192,0,0,0}},
{0,{192,192,192,192}},	{0,{192,192,191,191}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,192,192,192}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,192,192,192}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,192,192,192}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,192,192,192}},	{0,{192,192,192,192}},
{0,{192,192,192,192}},	{0,{192,192,192,192}},	{43,{0,0,0,0}},
{71,{0,0,0,0}},	{0,{190,190,190,190}},	{0,{190,190,190,190}},
{0,{190,190,190,190}},	{0,{190,190,190,190}},	{0,{190,190,190,190}},
{0,{190,190,190,190}},	{0,{190,190,190,190}},	{0,{190,191,192,0}},
{0,{192,191,191,0}},	{0,{190,190,190,0}},	{0,{191,191,191,0}},
{0,{191,192,0,0}},	{0,{192,0,0,0}},	{0,{192,186,186,0}},
{0,{192,0,0,0}},	{0,{192,186,186,0}},	{0,{192,185,185,0}},
{0,{192,193,194,0}},	{0,{194,193,193,0}},	{0,{192,192,192,0}},
{0,{193,191,191,0}},	{0,{193,194,195,196}},	{0,{196,194,194,195}},
{0,{194,194,194,194}},	{0,{192,192,192,193}},	{0,{194,194,194,192}},
{0,{194,195,191,191}},	{0,{195,190,190,190}},	{0,{195,196,197,189}},
{0,{197,196,196,188}},	{0,{195,195,195,187}},	{0,{196,167,168,0}},
{0,{196,171,0,0}},	{0,{196,177,178,0}},	{0,{196,181,182,183}},
{0,{196,186,182,182}},	{0,{196,188,189,181}},	{0,{166,166,0,0}},
{0,{183,183,179,179}},	{0,{194,194,194,194}},	{0,{194,194,194,194}},
{0,{194,194,195,195}},	{0,{194,194,194,194}},	{0,{194,195,196,197}},
{0,{197,195,195,196}},	{0,{195,195,195,195}},	{0,{196,197,194,194}},
{0,{197,193,193,193}},	{0,{197,198,199,200}},	{0,{200,198,198,199}},
{0,{198,198,198,198}},	{0,{196,196,196,197}},	{0,{198,198,198,196}},
{0,{198,199,195,195}},	{0,{199,194,194,194}},	{0,{199,200,201,185}},
{0,{201,200,200,184}},	{0,{201,202,203,191}},	{0,{203,202,202,190}},
{0,{201,201,201,189}},	{0,{202,178,179,180}},	{0,{202,182,179,179}},
{0,{202,184,185,186}},	{0,{202,189,185,185}},	{0,{202,191,192,176}},
{0,{202,194,195,183}},	{0,{177,177,174,174}},	{0,{185,185,181,181}},
{0,{200,200,200,201}},	{0,{201,201,201,202}},	{0,{199,199,199,199}},
{0,{200,200,200,200}},	{0,{200,200,200,197}},	{0,{200,200,200,198}},
{0,{200,124,125,0}},	{0,{200,128,0,0}},	{0,{200,123,123,0}},
{0,{200,0,0,0}},	{0,{200,123,123,0}},	{0,{200,131,132,0}},
{0,{200,131,131,0}},	{0,{200,134,135,136}},	{0,{200,139,135,135}},
{0,{200,141,142,134}},	{0,{200,114,115,0}},	{0,{200,118,0,0}},
{0,{200,113,113,0}},	{0,{200,0,0,0}},	{0,{200,113,113,0}},
{0,{200,121,122,0}},	{0,{200,121,121,0}},	{0,{200,124,125,126}},
{0,{200,129,125,125}},	{0,{200,131,132,124}},	{0,{200,109,0,0}},
{0,{200,0,0,0}},	{0,{200,125,121,121}},	{0,{200,141,142,143}},
{0,{200,145,142,142}},	{0,{200,147,148,149}},	{0,{200,152,148,148}},
{0,{200,154,155,139}},	{0,{200,157,158,146}},	{0,{200,135,136,137}},
{0,{200,139,136,136}},	{0,{200,141,142,143}},	{0,{200,146,142,142}},
{0,{200,148,149,133}},	{0,{200,151,152,140}},	{0,{200,134,131,131}},
{0,{200,142,138,138}},	{0,{200,200,200,200}},	{0,{200,200,200,199}},
{0,{200,200,200,0}},	{0,{200,200,200,134}},	{0,{200,101,101,102}},
{0,{200,101,101,101}},	{0,{200,108,108,100}},	{0,{200,121,121,122}},
{0,{200,121,121,121}},	{0,{200,136,136,120}},	{0,{200,95,95,96}},
{0,{200,95,95,95}},	{0,{200,102,102,94}},	{0,{200,92,92,93}},
{0,{200,92,92,92}},	{0,{200,99,99,91}},	{0,{200,90,90,90}},
{0,{200,111,111,112}},	{0,{200,111,111,111}},	{0,{200,126,126,110}},
{0,{200,108,108,109}},	{0,{200,108,108,108}},	{0,{200,123,123,107}},
{0,{200,106,106,106}},	{0,{200,201,201,202}},	{0,{202,200,200,201}},
{0,{200,200,200,200}},	{0,{198,198,198,199}},	{0,{200,200,200,198}},
{0,{200,197,197,197}},	{0,{200,196,196,196}},	{0,{200,197,197,195}},
{0,{200,196,196,194}},	{0,{200,201,201,193}},	{0,{201,200,200,192}},
{0,{199,199,199,191}},	{0,{200,101,101,101}},	{0,{200,100,100,100}},
{0,{200,99,99,99}},	{0,{200,98,98,98}},	{163,{0,0,0,0}},
{0,{199,200,200,201}},	{0,{201,199,199,200}},	{0,{199,199,199,199}},
{0,{197,197,197,198}},	{0,{199,199,199,197}},	{0,{199,198,198,196}},
{0,{199,197,197,195}},	{0,{199,200,200,194}},	{0,{200,199,199,193}},
{0,{198,198,198,192}},	{0,{199,191,191,191}},	{0,{199,190,190,190}},
{0,{199,199,199,199}},	{0,{199,199,199,199}},	{0,{199,199,199,199}},
{253,{0,0,0,0}},	{0,{198,198,198,199}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{0,0,0,198}},	{0,{0,0,0,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,198,198,198}},	{0,{198,198,198,198}},	{0,{198,198,198,198}},
{0,{198,199,198,199}},	{0,{199,199,199,199}},	{0,{199,199,199,199}},
{0,{199,198,199,198}},	{0,{199,199,199,199}},	{0,{199,200,199,200}},
{0,{200,200,200,200}},	{0,{200,0,200,0}},	{0,{200,201,200,201}},
{0,{201,202,201,202}},	{0,{202,203,202,203}},	{0,{203,192,203,192}},
{0,{203,204,203,204}},	{0,{204,204,204,204}},	{0,{204,204,204,204}},
{0,{204,203,204,203}},	{0,{204,205,204,205}},	{0,{205,206,205,206}},
{0,{206,206,206,206}},	{0,{206,206,206,206}},	{0,{206,206,206,206}},
{0,{206,204,206,204}},	{0,{206,206,206,206}},	{0,{206,207,206,207}},
{0,{207,207,207,207}},	{0,{207,201,207,201}},	{0,{207,208,207,208}},
{0,{208,208,208,208}},	{0,{208,208,208,208}},	{0,{208,207,208,207}},
{0,{208,170,208,170}},	{0,{208,175,208,175}},	{0,{208,185,208,185}},
{0,{208,191,208,191}},	{0,{208,197,208,197}},	{0,{208,200,208,200}},
{0,{208,208,208,208}},	{0,{208,208,208,208}},	{0,{208,208,208,208}},
{0,{208,208,208,208}},	{0,{208,209,208,209}},	{0,{209,209,209,209}},
{0,{209,209,209,209}},	{0,{209,209,209,209}},	{0,{209,207,209,207}},
{0,{209,210,209,210}},	{0,{210,210,210,210}},	{0,{210,205,210,205}},
{0,{210,211,210,211}},	{0,{211,211,211,211}},	{0,{211,211,211,211}},
{0,{211,211,211,211}},	{0,{211,209,211,209}},	{0,{211,211,211,211}},
{0,{211,212,211,212}},	{0,{212,212,212,212}},	{0,{212,206,212,206}},
{0,{212,213,212,213}},	{0,{213,213,213,213}},	{0,{213,213,213,213}},
{0,{213,212,213,212}},	{0,{213,214,213,214}},	{0,{214,214,214,214}},
{0,{214,214,214,214}},	{0,{214,213,214,213}},	{0,{214,185,214,185}},
{0,{214,190,214,190}},	{0,{214,193,214,193}},	{0,{214,199,214,199}},
{0,{214,202,214,202}},	{0,{214,206,214,206}},	{0,{214,214,214,214}},
{0,{214,214,214,214}},	{0,{214,214,214,214}},	{0,{214,214,214,214}},
{0,{214,214,214,214}},	{0,{214,214,214,214}},	{0,{214,215,214,215}},
{0,{215,216,215,216}},	{0,{216,217,216,217}},	{0,{217,218,217,218}},
{0,{218,219,218,219}},	{0,{219,220,219,220}},	{0,{220,221,220,221}},
{0,{221,222,221,222}},	{0,{222,223,222,223}},	{0,{223,224,223,224}},
{0,{224,225,224,225}},	{0,{225,226,225,226}},	{0,{226,227,226,227}},
{0,{227,228,227,228}},	{0,{228,229,228,229}},	{0,{229,230,229,230}},
{0,{230,231,230,231}},	{0,{231,232,231,232}},	{0,{232,233,232,233}},
{0,{233,234,233,234}},	{0,{217,217,217,217}},	{0,{220,220,220,220}},
{0,{229,229,229,229}},	{0,{231,232,231,232}},	{0,{232,233,232,233}},
{0,{233,234,233,234}},	{0,{234,235,234,235}},	{0,{235,236,235,236}},
{0,{236,237,236,237}},	{0,{237,238,237,238}},	{0,{238,239,238,239}},
{0,{239,240,239,240}},	{0,{240,241,240,241}},	{0,{241,242,241,242}},
{0,{242,243,242,243}},	{0,{234,234,234,234}},	{0,{237,237,237,237}},
{0,{241,241,241,241}},	{0,{241,241,241,241}},	{0,{241,241,241,241}},
{0,{241,241,241,241}},	{0,{241,242,241,242}},	{0,{242,243,242,243}},
{0,{243,244,243,244}},	{0,{244,245,244,245}},	{0,{245,246,245,246}},
{0,{246,247,246,247}},	{0,{247,248,247,248}},	{0,{248,249,248,249}},
{0,{249,250,249,250}},	{0,{250,251,250,251}},	{0,{251,252,251,252}},
{0,{252,253,252,253}},	{0,{250,250,250,250}},	{0,{252,253,252,253}},
{0,{253,254,253,254}},	{0,{254,255,254,255}},	{0,{255,256,255,256}},
{0,{256,257,256,257}},	{0,{257,258,257,258}},	{0,{255,255,255,255}},
{0,{257,258,257,258}},	{0,{258,258,258,258}},	{0,{258,258,258,258}},
{0,{258,256,258,256}},	{0,{258,258,258,258}},	{0,{258,259,258,259}},
{0,{259,254,259,254}},	{0,{259,260,259,260}},	{0,{260,254,260,254}},
{0,{260,261,260,261}},	{0,{261,261,261,261}},	{0,{261,260,261,260}},
{0,{261,262,261,262}},	{0,{262,263,262,263}},	{0,{263,264,263,264}},
{0,{263,263,263,263}},	{0,{263,264,263,264}},	{0,{264,264,264,264}},
{0,{264,264,264,264}},	{0,{264,262,264,262}},	{0,{264,264,264,264}},
{0,{264,265,264,265}},	{0,{265,262,265,262}},	{0,{265,266,265,266}},
{0,{266,266,266,266}},	{0,{266,265,266,265}},	{0,{266,267,266,267}},
{0,{267,255,267,255}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{0,0,0,267}},	{0,{0,0,0,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,268,0,0}},	{0,{268,267,0,0}},	{0,{268,266,0,0}},
{0,{268,0,0,0}},	{0,{268,0,0,0}},	{0,{268,0,0,0}},
{0,{268,262,0,0}},	{0,{268,261,0,0}},	{0,{260,260,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,251,0,0}},
{0,{267,250,0,0}},	{0,{267,249,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,268,269,269}},	{0,{269,267,268,268}},	{0,{269,266,267,267}},
{0,{269,266,266,266}},	{0,{265,265,265,265}},	{0,{268,264,264,264}},
{0,{268,263,263,263}},	{0,{268,261,262,262}},	{0,{268,260,261,261}},
{0,{259,259,260,260}},	{0,{267,259,259,259}},	{0,{267,257,258,258}},
{0,{267,256,257,257}},	{0,{267,255,256,256}},	{0,{267,255,255,255}},
{0,{267,254,254,254}},	{0,{267,228,0,0}},	{0,{267,227,0,0}},
{0,{267,226,0,0}},	{0,{267,249,250,250}},	{0,{267,248,249,249}},
{0,{267,247,248,248}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,268,268}},	{0,{267,267,267,267}},	{0,{267,268,269,269}},
{0,{269,267,268,268}},	{0,{269,266,267,267}},	{0,{269,266,266,266}},
{0,{265,265,265,265}},	{0,{268,264,264,264}},	{0,{268,262,263,263}},
{0,{268,261,262,262}},	{0,{260,260,261,261}},	{0,{267,260,260,260}},
{0,{267,268,269,269}},	{0,{269,267,268,268}},	{0,{269,266,267,267}},
{0,{269,266,266,266}},	{0,{265,265,265,265}},	{0,{268,264,264,264}},
{0,{268,263,263,263}},	{0,{268,261,262,262}},	{0,{268,260,261,261}},
{0,{259,259,260,260}},	{0,{267,259,259,259}},	{0,{267,247,248,248}},
{0,{267,246,247,247}},	{0,{267,245,246,246}},	{0,{267,245,245,245}},
{0,{267,244,244,244}},	{0,{267,252,253,253}},	{0,{267,251,252,252}},
{0,{267,250,251,251}},	{0,{267,250,250,250}},	{0,{267,249,249,249}},
{0,{267,237,238,238}},	{0,{267,236,237,237}},	{0,{267,245,246,246}},
{0,{267,244,245,245}},	{0,{267,233,234,234}},	{0,{267,242,243,243}},
{0,{267,268,268,268}},	{0,{267,267,267,267}},	{0,{267,268,268,268}},
{0,{267,267,267,267}},	{0,{267,264,264,264}},	{0,{267,265,265,265}},
{0,{267,175,0,0}},	{0,{267,174,0,0}},	{0,{267,173,0,0}},
{0,{267,172,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,165,0,0}},	{0,{267,164,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,185,186,186}},
{0,{267,184,185,185}},	{0,{267,183,184,184}},	{0,{267,182,183,183}},
{0,{267,181,182,182}},	{0,{267,180,181,181}},	{0,{267,155,0,0}},
{0,{267,154,0,0}},	{0,{267,153,0,0}},	{0,{267,152,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,145,0,0}},	{0,{267,144,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,165,166,166}},	{0,{267,164,165,165}},
{0,{267,163,164,164}},	{0,{267,162,163,163}},	{0,{267,161,162,162}},
{0,{267,160,161,161}},	{0,{267,185,186,186}},	{0,{267,184,185,185}},
{0,{267,183,184,184}},	{0,{267,182,183,183}},	{0,{267,191,192,192}},
{0,{267,190,191,191}},	{0,{267,189,190,190}},	{0,{267,188,189,189}},
{0,{267,177,178,178}},	{0,{267,176,177,177}},	{0,{267,185,186,186}},
{0,{267,184,185,185}},	{0,{267,173,174,174}},	{0,{267,172,173,173}},
{0,{267,171,172,172}},	{0,{267,170,171,171}},	{0,{267,179,180,180}},
{0,{267,178,179,179}},	{0,{267,177,178,178}},	{0,{267,176,177,177}},
{0,{267,165,166,166}},	{0,{267,164,165,165}},	{0,{267,173,174,174}},
{0,{267,172,173,173}},	{0,{267,267,267,267}},	{0,{267,267,266,266}},
{0,{267,267,0,0}},	{0,{267,267,169,169}},	{0,{267,132,132,132}},
{0,{267,131,131,131}},	{0,{267,130,130,130}},	{0,{267,129,129,129}},
{0,{267,128,128,128}},	{0,{267,127,127,127}},	{0,{267,152,152,152}},
{0,{267,151,151,151}},	{0,{267,150,150,150}},	{0,{267,149,149,149}},
{0,{267,148,148,148}},	{0,{267,147,147,147}},	{0,{267,120,120,120}},
{0,{267,119,119,119}},	{0,{267,118,118,118}},	{0,{267,117,117,117}},
{0,{267,116,116,116}},	{0,{267,115,115,115}},	{0,{267,114,114,114}},
{0,{267,113,113,113}},	{0,{267,112,112,112}},	{0,{267,111,111,111}},
{0,{267,110,110,110}},	{0,{267,109,109,109}},	{0,{267,134,134,134}},
{0,{267,133,133,133}},	{0,{267,132,132,132}},	{0,{267,131,131,131}},
{0,{267,130,130,130}},	{0,{267,129,129,129}},	{0,{267,128,128,128}},
{0,{267,127,127,127}},	{0,{267,126,126,126}},	{0,{267,125,125,125}},
{0,{267,124,124,124}},	{0,{267,123,123,123}},	{0,{267,268,268,268}},
{0,{268,267,267,267}},	{0,{268,266,266,266}},	{0,{265,265,265,265}},
{0,{267,264,264,264}},	{0,{267,263,263,263}},	{0,{267,262,262,262}},
{0,{267,261,261,261}},	{0,{267,260,260,260}},	{0,{267,259,259,259}},
{0,{267,258,258,258}},	{0,{267,257,257,257}},	{0,{267,256,256,256}},
{0,{267,255,255,255}},	{0,{267,254,254,254}},	{0,{267,253,253,253}},
{0,{267,116,116,116}},	{0,{267,115,115,115}},	{0,{267,114,114,114}},
{0,{267,113,113,113}},	{0,{267,112,112,112}},	{0,{267,111,111,111}},
{0,{267,268,268,268}},	{0,{268,267,267,267}},	{0,{268,266,266,266}},
{0,{265,265,265,265}},	{0,{267,264,264,264}},	{0,{267,263,263,263}},
{0,{267,262,262,262}},	{0,{267,261,261,261}},	{0,{267,260,260,260}},
{0,{267,259,259,259}},	{0,{267,258,258,258}},	{0,{267,257,257,257}},
{0,{267,256,256,256}},	{0,{267,255,255,255}},	{0,{267,254,254,254}},
{0,{267,253,253,253}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,268,268,268}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{0,0,0,267}},	{0,{0,0,0,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,0,267,0}},	{0,{267,265,267,265}},	{0,{267,0,267,0}},
{0,{267,263,267,263}},	{0,{267,267,267,267}},	{0,{267,0,267,0}},
{0,{267,0,267,0}},	{0,{267,0,265,0}},	{0,{267,0,0,0}},
{0,{267,268,267,268}},	{0,{267,267,267,267}},	{0,{267,266,267,266}},
{0,{267,265,264,265}},	{0,{267,264,264,264}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,267,267,267}},	{0,{267,267,267,267}},
{0,{267,268,269,269}},	{0,{268,268,268,268}},	{0,{268,267,267,267}},
{0,{268,266,266,266}},	{0,{268,0,0,0}},	{0,{268,269,0,0}},
{0,{269,0,0,0}},	{0,{269,261,262,262}},	{0,{269,261,261,261}},
{0,{265,265,0,0}},	{0,{268,264,0,0}},	{0,{268,0,0,0}},
{0,{268,262,0,0}},	{0,{268,0,0,0}},	{0,{268,260,0,0}},
{0,{268,0,0,0}},	{0,{268,258,0,0}},	{0,{268,251,252,252}},
{0,{268,251,251,251}},	{0,{268,250,250,250}},	{0,{268,0,0,0}},
{0,{268,253,0,0}},	{0,{268,252,0,0}},	{0,{268,0,0,0}},
{0,{268,269,270,270}},	{0,{269,269,269,269}},	{0,{269,269,269,269}},
{0,{269,267,267,267}},	{0,{269,266,266,266}},	{0,{269,266,266,266}},
{0,{269,270,265,265}},	{0,{270,264,264,264}},	{0,{270,261,262,262}},
{0,{270,261,261,261}},	{0,{266,266,261,261}},	{0,{269,258,259,259}},
{0,{269,258,258,258}},	{0,{269,257,257,257}},	{0,{269,257,257,257}},
{0,{269,261,256,256}},	{0,{269,228,229,229}},	{0,{227,227,228,228}},
{0,{268,226,227,227}},	{0,{268,250,251,251}},	{0,{249,249,250,250}},
{0,{267,248,249,249}},	{0,{267,267,0,0}},	{0,{267,267,248,248}},
{0,{267,267,267,267}},	{0,{267,267,267,267}},	{0,{267,268,269,269}},
{0,{268,268,268,268}},	{0,{268,268,268,268}},	{0,{268,266,266,266}},
{0,{268,265,265,265}},	{0,{268,265,265,265}},	{0,{268,269,264,264}},
{0,{269,261,262,262}},	{0,{269,261,261,261}},	{0,{266,266,261,261}},
{0,{268,269,270,270}},	{0,{269,269,269,269}},	{0,{269,269,269,269}},
{0,{269,267,267,267}},	{0,{269,266,266,266}},	{0,{269,266,266,266}},
{0,{269,270,265,265}},	{0,{270,264,264,264}},	{0,{270,261,262,262}},
{0,{270,261,261,261}},	{0,{266,266,261,261}},	{0,{269,247,248,248}},
{0,{269,247,247,247}},	{0,{269,246,246,246}},	{0,{269,246,246,246}},
{0,{269,250,245,245}},	{0,{269,253,254,254}},	{0,{269,253,253,253}},
{0,{269,252,252,252}},	{0,{269,252,252,252}},	{0,{269,256,251,251}},
{0,{269,237,238,238}},	{0,{236,236,237,237}},	{0,{268,246,247,247}},
{0,{245,245,246,246}},	{0,{267,233,234,234}},	{0,{267,243,244,244}},
{0,{267,268,268,268}},	{0,{267,267,267,267}},	{0,{267,268,268,268}},
{0,{267,267,267,267}},	{0,{267,264,264,264}},	{0,{267,265,265,265}},
{0,{267,268,176,176}},	{0,{268,269,175,175}},	{0,{269,266,174,174}},
{0,{269,267,173,173}},	{0,{269,270,0,0}},	{0,{270,271,0,0}},
{0,{271,268,0,0}},	{0,{271,269,0,0}},	{0,{271,266,0,0}},
{0,{271,267,0,0}},	{0,{271,258,166,166}},	{0,{271,259,165,165}},
{0,{271,262,0,0}},	{0,{271,263,0,0}},	{0,{271,272,187,187}},
{0,{272,273,186,186}},	{0,{273,270,185,185}},	{0,{273,271,184,184}},
{0,{273,268,183,183}},	{0,{273,269,182,182}},	{0,{273,248,156,156}},
{0,{273,249,155,155}},	{0,{246,246,154,154}},	{0,{247,247,153,153}},
{0,{271,250,0,0}},	{0,{271,251,0,0}},	{0,{248,248,0,0}},
{0,{249,249,0,0}},	{0,{269,246,0,0}},	{0,{269,247,0,0}},
{0,{269,238,146,146}},	{0,{269,239,145,145}},	{0,{269,242,0,0}},
{0,{269,243,0,0}},	{0,{269,252,167,167}},	{0,{269,253,166,166}},
{0,{250,250,165,165}},	{0,{251,251,164,164}},	{0,{267,248,163,163}},
{0,{267,249,162,162}},	{0,{267,268,186,186}},	{0,{268,269,185,185}},
{0,{269,266,184,184}},	{0,{269,267,183,183}},	{0,{269,270,193,193}},
{0,{270,271,192,192}},	{0,{271,268,191,191}},	{0,{271,269,190,190}},
{0,{271,260,178,178}},	{0,{271,261,177,177}},	{0,{271,264,187,187}},
{0,{271,265,186,186}},	{0,{271,256,174,174}},	{0,{271,257,173,173}},
{0,{254,254,172,172}},	{0,{255,255,171,171}},	{0,{269,258,181,181}},
{0,{269,259,180,180}},	{0,{256,256,179,179}},	{0,{257,257,178,178}},
{0,{267,248,166,166}},	{0,{267,249,165,165}},	{0,{267,252,175,175}},
{0,{267,253,174,174}},	{0,{267,267,267,267}},	{0,{267,266,266,266}},
{0,{267,0,0,0}},	{0,{267,171,171,171}},	{0,{267,139,134,134}},
{0,{267,133,133,133}},	{0,{267,137,132,132}},	{0,{267,131,131,131}},
{0,{267,135,130,130}},	{0,{267,129,129,129}},	{0,{267,158,153,153}},
{0,{267,152,152,152}},	{0,{267,156,151,151}},	{0,{267,150,150,150}},
{0,{267,154,149,149}},	{0,{267,148,148,148}},	{0,{267,268,122,122}},
{0,{268,269,121,121}},	{0,{269,266,120,120}},	{0,{269,267,119,119}},
{0,{269,264,118,118}},	{0,{269,265,117,117}},	{0,{269,262,116,116}},
{0,{269,263,115,115}},	{0,{260,260,114,114}},	{0,{261,261,113,113}},
{0,{267,258,112,112}},	{0,{267,259,111,111}},	{0,{267,268,135,135}},
{0,{268,269,134,134}},	{0,{269,266,133,133}},	{0,{269,267,132,132}},
{0,{269,264,131,131}},	{0,{269,265,130,130}},	{0,{269,262,129,129}},
{0,{269,263,128,128}},	{0,{260,260,127,127}},	{0,{261,261,126,126}},
{0,{267,258,125,125}},	{0,{267,259,124,124}},	{0,{267,268,269,269}},
{0,{268,268,268,268}},	{0,{268,267,267,267}},	{0,{268,266,266,266}},
{0,{268,264,265,265}},	{0,{268,264,264,264}},	{0,{268,262,263,263}},
{0,{268,262,262,262}},	{0,{260,260,261,261}},	{0,{267,259,260,260}},
{0,{267,259,259,259}},	{0,{267,257,258,258}},	{0,{267,256,257,257}},
{0,{267,256,256,256}},	{0,{267,255,255,255}},	{0,{267,253,254,254}},
{0,{267,123,118,118}},	{0,{267,117,117,117}},	{0,{267,268,116,116}},
{0,{268,269,115,115}},	{0,{266,266,114,114}},	{0,{267,267,113,113}},
{0,{267,268,269,269}},	{0,{268,268,268,268}},	{0,{268,267,267,267}},
{0,{268,266,266,266}},	{0,{268,264,265,265}},	{0,{268,264,264,264}},
{0,{268,262,263,263}},	{0,{268,262,262,262}},	{0,{268,260,261,261}},
{0,{268,259,260,260}},	{0,{268,259,259,259}},	{0,{268,258,258,258}},
{0,{268,256,257,257}},	{0,{268,255,256,256}},	{0,{268,255,255,255}},
{0,{253,253,254,254}},	{0,{267,267,253,253}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,268,268,268}},	{0,{267,267,267,267}},
{0,{267,267,267,267}},	{0,{267,0,0,0}},	{0,{267,0,0,0}},
{0,{267,0,0,0}},	{0,{267,113,113,113}},	{0,{267,267,267,267}},
{5,{0,0,0,0}},	{5,{265,265,265,265}},	{6,{0,0,0,0}},
{6,{263,263,263,263}},	{0,{263,263,263,263}},	{0,{263,263,0,0}},
{12,{0,0,0,0}},	{0,{262,261,0,0}},	{0,{262,0,0,0}},
{0,{262,262,263,263}},	{0,{262,262,262,262}},	{12,{261,261,261,261}},
{0,{261,259,260,260}},	{0,{261,259,259,259}},	{0,{261,262,261,262}},
{0,{261,261,261,261}},	{0,{261,0,261,0}},	{0,{0,0,0,261}},
{0,{261,0,0,0}},	{0,{261,257,261,257}},	{0,{261,256,261,256}},
{0,{261,262,263,264}},	{0,{264,264,263,263}},	{0,{262,262,262,262}},
{0,{263,260,260,261}},	{0,{259,259,259,260}},	{0,{262,262,262,0}},
{0,{262,262,261,0}},	{0,{262,262,0,0}},	{0,{262,262,262,0}},
{0,{262,256,255,255}},	{0,{262,254,254,254}},	{0,{262,257,256,0}},
{0,{262,255,255,0}},	{0,{262,256,0,0}},	{0,{262,0,0,0}},
{0,{262,263,255,0}},	{0,{263,254,254,0}},	{0,{261,261,253,0}},
{0,{262,263,264,246}},	{0,{264,263,263,245}},	{0,{262,262,262,244}},
{0,{263,263,263,0}},	{0,{263,263,262,0}},	{0,{263,262,261,0}},
{0,{263,260,260,0}},	{0,{263,264,265,266}},	{0,{266,266,265,265}},
{0,{264,264,264,264}},	{0,{265,265,265,265}},	{0,{265,261,261,262}},
{0,{260,260,260,261}},	{0,{264,264,264,262}},	{0,{264,264,263,261}},
{0,{264,264,260,260}},	{0,{264,264,264,259}},	{0,{264,257,256,256}},
{0,{264,255,255,255}},	{0,{264,265,266,254}},	{0,{266,265,265,253}},
{0,{264,264,264,252}},	{0,{265,265,265,253}},	{0,{265,265,264,252}},
{0,{220,220,221,222}},	{0,{238,238,239,221}},	{0,{245,245,246,247}},
{0,{257,257,258,246}},	{127,{0,0,0,0}},	{127,{246,246,246,246}},
{0,{216,216,216,259}},	{0,{0,0,0,259}},	{0,{259,260,261,262}},
{0,{262,262,261,261}},	{0,{260,260,260,260}},	{0,{261,261,261,261}},
{0,{261,257,257,258}},	{0,{256,256,256,257}},	{0,{260,260,260,258}},
{0,{260,260,259,257}},	{0,{260,260,256,256}},	{0,{260,254,253,253}},
{0,{260,252,252,252}},	{0,{260,261,262,263}},	{0,{263,263,262,262}},
{0,{261,261,261,261}},	{0,{262,262,262,262}},	{0,{262,258,258,259}},
{0,{257,257,257,258}},	{0,{261,261,261,259}},	{0,{261,261,260,258}},
{0,{261,261,257,257}},	{0,{261,261,261,256}},	{0,{261,254,253,253}},
{0,{261,252,252,252}},	{0,{261,262,263,239}},	{0,{263,262,262,238}},
{0,{261,261,261,237}},	{0,{262,262,262,238}},	{0,{262,262,261,237}},
{0,{262,263,264,246}},	{0,{264,263,263,245}},	{0,{262,262,262,244}},
{0,{263,263,263,245}},	{0,{263,263,262,244}},	{0,{227,227,228,229}},
{0,{238,238,239,240}},	{0,{250,250,251,227}},	{0,{255,255,256,238}},
{0,{259,259,259,260}},	{0,{259,259,259,259}},	{0,{259,259,259,260}},
{0,{259,259,259,259}},	{0,{259,259,259,256}},	{0,{259,259,259,257}},
{0,{259,260,261,262}},	{0,{262,262,261,261}},	{0,{262,259,259,260}},
{0,{259,259,259,259}},	{0,{261,259,258,258}},	{0,{261,257,257,257}},
{0,{261,262,263,264}},	{0,{264,264,263,263}},	{0,{264,261,261,262}},
{0,{261,261,261,261}},	{0,{263,261,260,260}},	{0,{263,259,259,259}},
{0,{263,264,265,258}},	{0,{265,264,264,257}},	{0,{265,266,267,248}},
{0,{267,266,266,247}},	{0,{267,268,269,254}},	{0,{269,268,268,253}},
{0,{269,270,271,272}},	{0,{272,272,271,271}},	{0,{272,269,269,270}},
{0,{269,269,269,269}},	{0,{271,269,268,268}},	{0,{271,267,267,267}},
{0,{271,272,273,266}},	{0,{273,272,272,265}},	{0,{234,234,235,236}},
{0,{234,234,234,235}},	{0,{240,240,241,242}},	{0,{240,240,240,241}},
{0,{246,246,247,240}},	{0,{246,246,246,239}},	{0,{248,248,249,230}},
{0,{248,248,248,229}},	{0,{250,250,251,236}},	{0,{250,250,250,235}},
{0,{252,252,253,254}},	{0,{252,252,252,253}},	{0,{258,258,259,252}},
{0,{258,258,258,251}},	{0,{259,260,261,262}},	{0,{262,262,261,261}},
{0,{262,259,259,260}},	{0,{259,259,259,259}},	{0,{261,259,258,258}},
{0,{261,257,257,257}},	{0,{261,262,263,264}},	{0,{264,264,263,263}},
{0,{264,261,261,262}},	{0,{261,261,261,261}},	{0,{263,261,260,260}},
{0,{263,259,259,259}},	{0,{263,264,265,250}},	{0,{265,264,264,249}},
{0,{265,266,267,256}},	{0,{267,266,266,255}},	{0,{244,244,245,246}},
{0,{244,244,244,245}},	{0,{250,250,251,252}},	{0,{250,250,250,251}},
{0,{256,256,257,242}},	{0,{256,256,256,241}},	{0,{258,258,259,248}},
{0,{258,258,258,247}},	{0,{0,0,0,259}},	{0,{0,0,0,259}},
{0,{0,0,0,259}},	{0,{166,166,166,259}},	{0,{259,135,134,132}},
{0,{259,133,133,131}},	{0,{259,134,130,130}},	{0,{259,129,129,129}},
{0,{259,141,140,128}},	{0,{259,139,139,127}},	{0,{259,150,149,147}},
{0,{259,148,148,146}},	{0,{259,149,145,145}},	{0,{259,144,144,144}},
{0,{259,168,167,143}},	{0,{259,166,166,142}},	{0,{259,260,261,262}},
{0,{262,262,261,261}},	{0,{262,259,259,260}},	{0,{259,259,259,259}},
{0,{261,259,258,258}},	{0,{261,257,257,257}},	{0,{261,262,263,256}},
{0,{263,262,262,255}},	{0,{252,252,253,254}},	{0,{252,252,252,253}},
{0,{258,258,259,252}},	{0,{258,258,258,251}},	{0,{259,260,261,262}},
{0,{262,262,261,261}},	{0,{262,259,259,260}},	{0,{259,259,259,259}},
{0,{261,259,258,258}},	{0,{261,257,257,257}},	{0,{261,262,263,256}},
{0,{263,262,262,255}},	{0,{252,252,253,254}},	{0,{252,252,252,253}},
{0,{258,258,259,252}},	{0,{258,258,258,251}},	{0,{259,260,261,262}},
{0,{262,262,261,261}},	{0,{260,260,260,260}},	{0,{261,258,258,259}},
{0,{257,257,257,258}},	{0,{255,255,256,257}},	{0,{259,259,259,256}},
{0,{259,256,255,255}},	{0,{259,254,254,254}},	{0,{259,260,256,253}},
{0,{260,255,255,252}},	{0,{258,258,254,251}},	{0,{259,260,261,250}},
{0,{261,260,260,249}},	{0,{259,259,259,248}},	{0,{257,257,258,247}},
{0,{259,117,113,113}},	{0,{259,112,112,112}},	{0,{259,260,261,261}},
{0,{259,259,260,260}},	{0,{260,259,259,259}},	{0,{258,258,258,258}},
{0,{259,260,261,262}},	{0,{262,262,261,261}},	{0,{260,260,260,260}},
{0,{261,258,258,259}},	{0,{257,257,257,258}},	{0,{255,255,256,257}},
{0,{259,259,259,256}},	{0,{259,260,258,255}},	{0,{260,257,257,254}},
{0,{258,258,256,253}},	{0,{259,260,261,252}},	{0,{261,260,260,251}},
{0,{259,259,259,250}},	{0,{257,257,258,249}},	{0,{259,249,248,248}},
{0,{259,247,247,247}},	{127,{246,246,246,246}},	{0,{258,258,258,0}},
{0,{258,258,258,89}},	{0,{258,258,258,259}},	{0,{258,258,258,258}},
{0,{258,258,258,258}},	{338,{0,0,0,0}},	{0,{0,0,0,257}},
{383,{0,0,0,0}},	{383,{105,105,105,105}},	{0,{255,255,255,255}},
{0,{255,255,255,255}},	{11,{0,0,0,0}},	{11,{0,0,0,254}},
{0,{0,0,0,253}},	{11,{253,253,253,253}},	{0,{252,252,252,252}},
{11,{251,251,251,252}},	{0,{250,250,250,251}},	{90,{251,0,251,0}},
{0,{250,0,250,0}},	{90,{0,0,0,0}},	{0,{0,0,0,249}},
{0,{249,249,249,249}},	{118,{246,0,246,0}},	{117,{245,0,245,0}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,249}},
{0,{249,249,249,0}},	{0,{249,249,249,250}},	{0,{249,249,249,249}},
{0,{249,249,249,0}},	{0,{238,238,238,238}},	{0,{243,243,243,243}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{246,246,246,246}},
{0,{247,247,247,247}},	{0,{247,247,247,244}},	{0,{247,247,247,240}},
{0,{247,247,247,244}},	{0,{247,247,247,229}},	{0,{247,247,247,230}},
{0,{247,247,247,231}},	{0,{247,247,247,232}},	{0,{247,247,247,0}},
{0,{247,247,247,233}},	{0,{247,247,247,235}},	{0,{247,247,247,236}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,248}},
{0,{248,248,248,249}},	{0,{249,249,249,246}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{249,249,249,243}},	{0,{237,237,237,237}},
{0,{243,243,243,243}},	{0,{247,247,247,235}},	{0,{247,247,247,236}},
{0,{247,247,247,237}},	{0,{247,247,247,239}},	{0,{247,247,247,236}},
{0,{247,247,247,240}},	{0,{206,206,206,247}},	{0,{0,0,0,247}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,248}},
{0,{248,248,248,249}},	{0,{249,249,249,246}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{238,238,238,238}},	{0,{244,244,244,244}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,248}},
{0,{248,248,248,249}},	{0,{249,249,249,246}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{249,249,249,243}},	{0,{237,237,237,237}},
{0,{243,243,243,243}},	{0,{247,247,247,223}},	{0,{247,247,247,224}},
{0,{247,247,247,225}},	{0,{247,247,247,227}},	{0,{247,247,247,224}},
{0,{247,247,247,228}},	{0,{247,247,247,229}},	{0,{247,247,247,230}},
{0,{247,247,247,231}},	{0,{247,247,247,233}},	{0,{247,247,247,230}},
{0,{247,247,247,234}},	{0,{247,247,247,248}},	{0,{247,247,247,247}},
{0,{247,247,247,248}},	{0,{247,247,247,247}},	{0,{247,247,247,244}},
{0,{247,247,247,245}},	{0,{247,247,247,248}},	{0,{248,248,248,249}},
{0,{249,249,249,250}},	{0,{249,249,249,249}},	{0,{246,246,246,246}},
{0,{248,248,248,249}},	{0,{242,242,242,242}},	{0,{247,247,247,247}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,249}},
{0,{242,242,242,242}},	{0,{247,247,247,247}},	{0,{247,247,247,240}},
{0,{247,247,247,241}},	{0,{247,247,247,242}},	{0,{247,247,247,243}},
{0,{247,247,247,228}},	{0,{247,247,247,229}},	{0,{247,247,247,230}},
{0,{247,247,247,231}},	{0,{247,247,247,232}},	{0,{247,247,247,233}},
{0,{247,247,247,234}},	{0,{247,247,247,235}},	{0,{247,247,247,248}},
{0,{248,248,248,249}},	{0,{249,249,249,250}},	{0,{249,249,249,249}},
{0,{246,246,246,246}},	{0,{248,248,248,249}},	{0,{242,242,242,242}},
{0,{247,247,247,247}},	{0,{247,247,247,240}},	{0,{247,247,247,241}},
{0,{247,247,247,242}},	{0,{247,247,247,243}},	{0,{247,247,247,248}},
{0,{248,248,248,249}},	{0,{249,249,249,250}},	{0,{249,249,249,249}},
{0,{246,246,246,246}},	{0,{248,248,248,249}},	{0,{242,242,242,242}},
{0,{247,247,247,247}},	{0,{247,247,247,248}},	{0,{248,248,248,249}},
{0,{249,249,249,250}},	{0,{249,249,249,249}},	{0,{246,246,246,246}},
{0,{248,248,248,249}},	{0,{242,242,242,242}},	{0,{247,247,247,247}},
{0,{247,247,247,232}},	{0,{247,247,247,233}},	{0,{247,247,247,234}},
{0,{247,247,247,235}},	{0,{247,247,247,236}},	{0,{247,247,247,237}},
{0,{247,247,247,238}},	{0,{247,247,247,239}},	{0,{0,0,0,247}},
{0,{0,0,0,247}},	{0,{0,0,0,247}},	{0,{155,155,155,247}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{246,246,246,246}},
{0,{247,247,247,247}},	{0,{247,247,247,244}},	{0,{247,247,247,245}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{246,246,246,246}},
{0,{247,247,247,247}},	{0,{247,247,247,244}},	{0,{247,247,247,245}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,249}},
{0,{242,242,242,242}},	{0,{247,247,247,247}},	{0,{247,247,247,240}},
{0,{247,247,247,241}},	{0,{247,247,247,242}},	{0,{247,247,247,243}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,249}},
{0,{242,242,242,242}},	{0,{247,247,247,247}},	{0,{247,247,247,240}},
{0,{247,247,247,241}},	{0,{247,247,247,242}},	{0,{247,247,247,243}},
{0,{247,247,247,248}},	{0,{248,248,248,249}},	{0,{249,249,249,250}},
{0,{249,249,249,249}},	{0,{246,246,246,246}},	{0,{248,248,248,249}},
{0,{249,249,249,246}},	{0,{241,241,241,241}},	{0,{246,246,246,246}},
{0,{247,247,247,239}},	{0,{247,247,247,240}},	{0,{247,247,247,243}},
{0,{247,247,247,236}},	{0,{247,247,247,237}},	{0,{247,247,247,238}},
{0,{247,247,247,239}},	{0,{247,247,247,247}},	{0,{247,247,247,247}},
{0,{247,247,247,247}},	{0,{247,247,247,247}},	{0,{247,247,247,247}},
{0,{247,247,247,247}},	{0,{247,247,247,248}},	{0,{248,248,248,249}},
{0,{249,249,249,250}},	{0,{249,249,249,249}},	{0,{246,246,246,246}},
{0,{248,248,248,249}},	{0,{249,249,249,246}},	{0,{249,249,249,241}},
{0,{249,249,249,242}},	{0,{249,249,249,245}},	{0,{249,249,249,238}},
{0,{249,249,249,239}},	{0,{249,249,249,240}},	{0,{249,249,249,241}},
{0,{234,234,234,234}},	{0,{239,239,239,239}},	{0,{247,247,247,247}},
{0,{247,247,247,247}},	{0,{247,247,247,248}},	{0,{247,247,247,247}},
{0,{247,247,247,247}},	{0,{0,0,0,247}},	{0,{0,0,0,247}},
{0,{0,0,0,247}},	{0,{247,247,247,247}},	{0,{0,0,0,247}},
{0,{245,245,245,247}},	{0,{0,0,0,247}},	{0,{0,0,0,247}},
{0,{247,247,247,247}},	{120,{247,247,247,247}},	{0,{247,247,247,247}},
{120,{247,247,247,247}},	{0,{247,247,247,247}},	{120,{247,247,247,247}},
{0,{247,247,247,247}},	{120,{247,247,247,247}},	{0,{247,247,247,247}},
{120,{247,247,247,247}},	{120,{247,247,247,247}},	{0,{247,247,247,247}},
{120,{0,0,0,0}},	{120,{246,246,246,246}},	{0,{246,246,246,246}},
{120,{246,246,246,246}},	{0,{246,246,246,246}},	{120,{243,243,243,243}},
{120,{240,240,240,240}},	{120,{243,243,243,243}},	{0,{228,228,228,228}},
{0,{229,229,229,229}},	{0,{230,230,230,230}},	{0,{231,231,231,231}},
{0,{232,232,232,232}},	{0,{232,232,232,232}},	{0,{233,233,233,233}},
{0,{234,234,234,234}},	{120,{220,220,220,235}},	{0,{220,220,220,235}},
{120,{220,220,220,235}},	{0,{220,220,220,235}},	{120,{220,220,220,235}},
{0,{220,220,220,235}},	{0,{0,0,0,235}},	{120,{219,219,219,235}},
{0,{219,219,219,235}},	{120,{219,219,219,235}},	{120,{219,219,219,235}},
{0,{219,219,219,235}},	{120,{0,0,0,229}},	{0,{207,207,207,222}},
{0,{208,208,208,223}},	{0,{209,209,209,224}},	{0,{210,210,210,226}},
{0,{211,211,211,227}},	{0,{211,211,211,227}},	{0,{228,228,228,228}},
{0,{228,228,228,228}},	{120,{199,199,199,228}},	{0,{199,199,199,228}},
{120,{199,199,199,228}},	{0,{199,199,199,228}},	{120,{199,199,199,228}},
{0,{199,199,199,228}},	{0,{0,0,0,228}},	{120,{198,198,198,228}},
{0,{198,198,198,228}},	{120,{198,198,198,228}},	{120,{198,198,198,228}},
{0,{198,198,198,228}},	{120,{187,187,187,228}},	{0,{187,187,187,228}},
{120,{187,187,187,228}},	{0,{187,187,187,228}},	{120,{187,187,187,228}},
{0,{187,187,187,228}},	{0,{0,0,0,228}},	{120,{186,186,186,228}},
{0,{186,186,186,228}},	{120,{186,186,186,228}},	{120,{186,186,186,228}},
{0,{186,186,186,228}},	{120,{0,0,0,222}},	{0,{174,174,174,203}},
{0,{175,175,175,204}},	{0,{176,176,176,205}},	{0,{177,177,177,207}},
{0,{178,178,178,208}},	{0,{178,178,178,208}},	{0,{168,168,168,209}},
{0,{169,169,169,210}},	{0,{170,170,170,211}},	{0,{171,171,171,213}},
{0,{172,172,172,214}},	{0,{172,172,172,214}},	{120,{170,170,170,215}},
{0,{0,0,0,215}},	{120,{168,168,168,215}},	{0,{0,0,0,215}},
{0,{166,166,166,211}},	{0,{165,165,165,212}},	{120,{213,213,213,213}},
{0,{213,213,213,213}},	{120,{213,213,213,213}},	{0,{213,213,213,213}},
{120,{213,213,213,213}},	{0,{213,213,213,213}},	{120,{213,213,213,213}},
{0,{213,213,213,213}},	{120,{213,213,213,213}},	{0,{213,213,213,213}},
{120,{213,213,213,213}},	{0,{213,213,213,213}},	{120,{213,213,213,213}},
{0,{213,213,213,213}},	{120,{213,213,213,213}},	{0,{213,213,213,213}},
{120,{206,206,206,206}},	{120,{207,207,207,207}},	{120,{208,208,208,208}},
{120,{209,209,209,209}},	{0,{193,193,193,193}},	{0,{194,194,194,194}},
{0,{195,195,195,195}},	{0,{196,196,196,196}},	{0,{197,197,197,197}},
{0,{198,198,198,198}},	{0,{199,199,199,199}},	{0,{200,200,200,200}},
{120,{185,185,185,201}},	{0,{185,185,185,201}},	{120,{185,185,185,201}},
{0,{185,185,185,201}},	{120,{185,185,185,201}},	{0,{185,185,185,201}},
{120,{185,185,185,201}},	{0,{185,185,185,201}},	{0,{177,177,177,193}},
{0,{178,178,178,194}},	{0,{179,179,179,195}},	{0,{180,180,180,196}},
{120,{173,173,173,197}},	{0,{173,173,173,197}},	{120,{173,173,173,197}},
{0,{173,173,173,197}},	{120,{173,173,173,197}},	{0,{173,173,173,197}},
{120,{173,173,173,197}},	{0,{173,173,173,197}},	{120,{165,165,165,197}},
{0,{165,165,165,197}},	{120,{165,165,165,197}},	{0,{165,165,165,197}},
{120,{165,165,165,197}},	{0,{165,165,165,197}},	{120,{165,165,165,197}},
{0,{165,165,165,197}},	{0,{157,157,157,181}},	{0,{158,158,158,182}},
{0,{159,159,159,183}},	{0,{160,160,160,184}},	{0,{153,153,153,185}},
{0,{154,154,154,186}},	{0,{155,155,155,187}},	{0,{156,156,156,188}},
{0,{0,0,0,189}},	{0,{0,0,0,189}},	{0,{0,0,0,189}},
{0,{0,0,0,189}},	{120,{99,99,99,189}},	{0,{99,99,99,189}},
{120,{99,99,99,189}},	{0,{99,99,99,189}},	{0,{95,95,95,185}},
{0,{96,96,96,186}},	{120,{93,93,93,187}},	{0,{93,93,93,187}},
{120,{93,93,93,187}},	{0,{93,93,93,187}},	{0,{89,89,89,183}},
{0,{90,90,90,184}},	{120,{141,141,141,185}},	{0,{141,141,141,185}},
{120,{141,141,141,185}},	{0,{141,141,141,185}},	{120,{141,141,141,185}},
{0,{141,141,141,185}},	{120,{141,141,141,185}},	{0,{141,141,141,185}},
{0,{133,133,133,177}},	{0,{134,134,134,178}},	{0,{135,135,135,179}},
{0,{136,136,136,180}},	{120,{129,129,129,181}},	{0,{129,129,129,181}},
{120,{129,129,129,181}},	{0,{129,129,129,181}},	{120,{129,129,129,181}},
{0,{129,129,129,181}},	{120,{129,129,129,181}},	{0,{129,129,129,181}},
{0,{121,121,121,173}},	{0,{122,122,122,174}},	{0,{123,123,123,175}},
{0,{124,124,124,176}},	{120,{177,177,177,177}},	{0,{177,177,177,177}},
{120,{177,177,177,177}},	{0,{177,177,177,177}},	{120,{177,177,177,177}},
{0,{177,177,177,177}},	{120,{177,177,177,177}},	{0,{177,177,177,177}},
{120,{174,174,174,174}},	{120,{169,169,169,169}},	{120,{170,170,170,170}},
{120,{173,173,173,173}},	{0,{165,165,165,165}},	{0,{166,166,166,166}},
{0,{167,167,167,167}},	{0,{168,168,168,168}},	{0,{48,48,48,169}},
{0,{49,49,49,169}},	{0,{100,100,100,169}},	{0,{101,101,101,169}},
{0,{102,102,102,169}},	{0,{103,103,103,169}},	{120,{41,41,41,169}},
{0,{41,41,41,169}},	{120,{37,37,37,169}},	{0,{37,37,37,169}},
{120,{34,34,34,169}},	{0,{0,0,0,169}},	{120,{37,37,37,169}},
{0,{37,37,37,169}},	{120,{0,0,0,166}},	{120,{33,33,33,161}},
{120,{30,30,30,162}},	{120,{33,33,33,165}},	{0,{29,29,29,157}},
{0,{26,26,26,158}},	{0,{24,24,24,159}},	{0,{28,28,28,160}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{0,0,0,161}},	{0,{161,161,161,161}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{161,161,161,161}},
{0,{0,0,0,161}},	{0,{159,159,159,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{146,146,146,161}},
{0,{146,146,146,161}},	{0,{146,146,146,161}},	{0,{146,146,146,161}},
{0,{146,146,146,161}},	{0,{146,146,146,161}},	{0,{0,0,0,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{132,132,132,161}},	{0,{132,132,132,161}},
{0,{132,132,132,161}},	{0,{132,132,132,161}},	{0,{132,132,132,161}},
{0,{132,132,132,161}},	{0,{0,0,0,161}},	{0,{131,131,131,161}},
{0,{131,131,131,161}},	{0,{131,131,131,161}},	{0,{131,131,131,161}},
{0,{131,131,131,161}},	{0,{120,120,120,161}},	{0,{120,120,120,161}},
{0,{120,120,120,161}},	{0,{120,120,120,161}},	{0,{120,120,120,161}},
{0,{120,120,120,161}},	{0,{0,0,0,161}},	{0,{119,119,119,161}},
{0,{119,119,119,161}},	{0,{119,119,119,161}},	{0,{119,119,119,161}},
{0,{119,119,119,161}},	{0,{116,116,116,161}},	{0,{0,0,0,161}},
{0,{114,114,114,161}},	{0,{0,0,0,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{71,71,71,161}},	{0,{71,71,71,161}},
{0,{71,71,71,161}},	{0,{71,71,71,161}},	{0,{67,67,67,161}},
{0,{67,67,67,161}},	{0,{67,67,67,161}},	{0,{67,67,67,161}},
{0,{117,117,117,161}},	{0,{117,117,117,161}},	{0,{117,117,117,161}},
{0,{117,117,117,161}},	{0,{117,117,117,161}},	{0,{117,117,117,161}},
{0,{117,117,117,161}},	{0,{117,117,117,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{40,40,40,161}},	{0,{41,41,41,161}},	{0,{92,92,92,161}},
{0,{93,93,93,161}},	{0,{94,94,94,161}},	{0,{95,95,95,161}},
{0,{33,33,33,161}},	{0,{33,33,33,161}},	{0,{29,29,29,161}},
{0,{29,29,29,161}},	{0,{26,26,26,161}},	{0,{0,0,0,161}},
{0,{29,29,29,161}},	{0,{29,29,29,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{0,0,0,161}},	{0,{161,161,161,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{161,161,161,161}},	{0,{0,0,0,161}},
{0,{159,159,159,161}},	{0,{0,0,0,161}},	{0,{0,0,0,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{146,146,146,161}},	{0,{146,146,146,161}},
{0,{146,146,146,161}},	{0,{146,146,146,161}},	{0,{146,146,146,161}},
{0,{146,146,146,161}},	{0,{0,0,0,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{132,132,132,161}},	{0,{132,132,132,161}},	{0,{132,132,132,161}},
{0,{132,132,132,161}},	{0,{132,132,132,161}},	{0,{132,132,132,161}},
{0,{0,0,0,161}},	{0,{131,131,131,161}},	{0,{131,131,131,161}},
{0,{131,131,131,161}},	{0,{131,131,131,161}},	{0,{131,131,131,161}},
{0,{120,120,120,161}},	{0,{120,120,120,161}},	{0,{120,120,120,161}},
{0,{120,120,120,161}},	{0,{120,120,120,161}},	{0,{120,120,120,161}},
{0,{0,0,0,161}},	{0,{119,119,119,161}},	{0,{119,119,119,161}},
{0,{119,119,119,161}},	{0,{119,119,119,161}},	{0,{119,119,119,161}},
{0,{116,116,116,161}},	{0,{0,0,0,161}},	{0,{114,114,114,161}},
{0,{0,0,0,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{145,145,145,161}},	{0,{145,145,145,161}},
{0,{145,145,145,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{0,0,0,161}},
{0,{71,71,71,161}},	{0,{71,71,71,161}},	{0,{71,71,71,161}},
{0,{71,71,71,161}},	{0,{67,67,67,161}},	{0,{67,67,67,161}},
{0,{67,67,67,161}},	{0,{67,67,67,161}},	{0,{117,117,117,161}},
{0,{117,117,117,161}},	{0,{117,117,117,161}},	{0,{117,117,117,161}},
{0,{117,117,117,161}},	{0,{117,117,117,161}},	{0,{117,117,117,161}},
{0,{117,117,117,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{40,40,40,161}},
{0,{41,41,41,161}},	{0,{92,92,92,161}},	{0,{93,93,93,161}},
{0,{94,94,94,161}},	{0,{95,95,95,161}},	{0,{33,33,33,161}},
{0,{33,33,33,161}},	{0,{29,29,29,161}},	{0,{29,29,29,161}},
{0,{26,26,26,161}},	{0,{0,0,0,161}},	{0,{29,29,29,161}},
{0,{29,29,29,161}},	{0,{0,0,0,161}},	{0,{0,0,0,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{0,0,0,161}},
{0,{161,161,161,161}},	{0,{161,0,0,0}},	{0,{0,0,0,161}},
{0,{161,161,161,161}},	{0,{161,0,0,0}},	{0,{161,159,159,159}},
{0,{0,0,0,161}},	{0,{161,0,0,0}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,146,146,146}},	{0,{161,146,146,146}},	{0,{161,146,146,146}},
{0,{161,146,146,146}},	{0,{161,146,146,146}},	{0,{161,146,146,146}},
{0,{161,0,0,0}},	{0,{161,145,145,145}},	{0,{161,145,145,145}},
{0,{161,145,145,145}},	{0,{161,145,145,145}},	{0,{161,145,145,145}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{132,132,132,161}},
{0,{132,132,132,161}},	{0,{132,132,132,161}},	{0,{132,132,132,161}},
{0,{132,132,132,161}},	{0,{132,132,132,161}},	{0,{0,0,0,161}},
{0,{131,131,131,161}},	{0,{131,131,131,161}},	{0,{131,131,131,161}},
{0,{131,131,131,161}},	{0,{131,131,131,161}},	{0,{120,120,120,161}},
{0,{120,120,120,161}},	{0,{120,120,120,161}},	{0,{120,120,120,161}},
{0,{120,120,120,161}},	{0,{120,120,120,161}},	{0,{0,0,0,161}},
{0,{119,119,119,161}},	{0,{119,119,119,161}},	{0,{119,119,119,161}},
{0,{119,119,119,161}},	{0,{119,119,119,161}},	{0,{116,116,116,161}},
{0,{0,0,0,161}},	{0,{114,114,114,161}},	{0,{0,0,0,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,145,145,145}},	{0,{161,145,145,145}},
{0,{161,145,145,145}},	{0,{161,145,145,145}},	{0,{161,145,145,145}},
{0,{161,145,145,145}},	{0,{161,145,145,145}},	{0,{161,145,145,145}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{137,137,137,161}},
{0,{137,137,137,161}},	{0,{137,137,137,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{129,129,129,161}},	{0,{129,129,129,161}},
{0,{129,129,129,161}},	{0,{0,0,0,161}},	{0,{0,0,0,161}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{161,71,71,71}},
{0,{161,71,71,71}},	{0,{161,71,71,71}},	{0,{161,71,71,71}},
{0,{67,67,67,161}},	{0,{67,67,67,161}},	{0,{67,67,67,161}},
{0,{67,67,67,161}},	{0,{161,117,117,117}},	{0,{161,117,117,117}},
{0,{161,117,117,117}},	{0,{161,117,117,117}},	{0,{161,117,117,117}},
{0,{161,117,117,117}},	{0,{161,117,117,117}},	{0,{161,117,117,117}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{109,109,109,161}},
{0,{109,109,109,161}},	{0,{109,109,109,161}},	{0,{161,47,161,47}},
{0,{161,47,161,47}},	{0,{161,43,161,43}},	{0,{161,43,161,43}},
{0,{161,40,161,40}},	{0,{161,0,161,0}},	{0,{161,43,161,43}},
{0,{161,43,161,43}},	{0,{40,40,40,161}},	{0,{41,41,41,161}},
{0,{92,92,92,161}},	{0,{93,93,93,161}},	{0,{94,94,94,161}},
{0,{95,95,95,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{161,161,161,161}},	{0,{161,161,161,161}},	{0,{161,161,161,161}},
{0,{0,0,0,161}},	{0,{0,0,0,161}},	{0,{161,20,161,20}},
{0,{161,0,161,0}},	{0,{0,0,0,161}},	{0,{161,161,161,0}},
{2,{0,0,0,0}},	{0,{160,0,0,0}},	{0,{160,160,160,160}},
{39,{0,0,0,0}},	{39,{158,158,158,158}},	{0,{0,0,0,158}},
{0,{158,0,0,0}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,136,136,136}},
{0,{158,0,0,0}},	{0,{129,129,129,158}},	{0,{129,129,129,158}},
{0,{129,129,129,158}},	{0,{129,129,129,158}},	{0,{129,129,129,158}},
{0,{129,129,129,158}},	{0,{0,0,0,158}},	{0,{128,128,128,158}},
{0,{128,128,128,158}},	{0,{128,128,128,158}},	{0,{128,128,128,158}},
{0,{128,128,128,158}},	{0,{117,117,117,158}},	{0,{117,117,117,158}},
{0,{117,117,117,158}},	{0,{117,117,117,158}},	{0,{117,117,117,158}},
{0,{117,117,117,158}},	{0,{0,0,0,158}},	{0,{116,116,116,158}},
{0,{116,116,116,158}},	{0,{116,116,116,158}},	{0,{116,116,116,158}},
{0,{116,116,116,158}},	{0,{113,113,113,158}},	{0,{0,0,0,158}},
{0,{111,111,111,158}},	{0,{0,0,0,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{134,134,134,158}},
{0,{134,134,134,158}},	{0,{134,134,134,158}},	{0,{134,134,134,158}},
{0,{134,134,134,158}},	{0,{134,134,134,158}},	{0,{134,134,134,158}},
{0,{134,134,134,158}},	{0,{126,126,126,158}},	{0,{126,126,126,158}},
{0,{126,126,126,158}},	{0,{126,126,126,158}},	{0,{126,126,126,158}},
{0,{126,126,126,158}},	{0,{126,126,126,158}},	{0,{126,126,126,158}},
{0,{0,0,0,158}},	{0,{0,0,0,158}},	{0,{0,0,0,158}},
{0,{0,0,0,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{64,64,64,158}},
{0,{64,64,64,158}},	{0,{64,64,64,158}},	{0,{64,64,64,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{158,158,158,158}},
{0,{158,158,158,158}},	{0,{158,158,158,158}},	{0,{106,106,106,158}},
{0,{106,106,106,158}},	{0,{106,106,106,158}},	{0,{106,106,106,158}},
{0,{106,106,106,158}},	{0,{106,106,106,158}},	{0,{106,106,106,158}},
{0,{106,106,106,158}},	{161,{44,44,44,44}},	{161,{44,44,44,44}},
{161,{40,40,40,40}},	{161,{40,40,40,40}},	{161,{37,37,37,37}},
{161,{0,0,0,0}},	{161,{40,40,40,40}},	{161,{40,40,40,40}},
{0,{37,37,37,150}},	{0,{38,38,38,150}},	{0,{89,89,89,150}},
{0,{90,90,90,150}},	{0,{91,91,91,150}},	{0,{92,92,92,150}},
{0,{150,30,30,30}},	{0,{150,30,30,30}},	{0,{150,26,26,26}},
{0,{150,26,26,26}},	{0,{150,23,23,23}},	{0,{150,0,0,0}},
{0,{150,26,26,26}},	{0,{150,26,26,26}},	{0,{0,0,0,150}},
{0,{0,0,0,150}},	{307,{17,17,17,17}},	{307,{0,0,0,0}},
{0,{0,0,0,148}},	{0,{148,148,0,0}},	{10,{0,0,0,0}},
{0,{147,147,147,147}},	{0,{0,0,0,147}},	{0,{147,0,0,0}},
{0,{147,147,147,147}},	{0,{147,147,147,147}},	{0,{147,147,147,147}},
{0,{147,147,147,147}},	{0,{147,147,147,147}},	{0,{147,147,147,147}},
{0,{147,147,147,147}},	{0,{147,147,147,147}},	{0,{147,147,147,147}},
{0,{147,147,147,147}},	{0,{147,147,147,147}},	{0,{147,147,147,147}},
{0,{147,147,147,147}},	{0,{147,147,147,147}},	{0,{147,147,147,147}},
{0,{147,147,147,147}},	{0,{147,132,132,132}},	{0,{147,132,132,132}},
{0,{147,132,132,132}},	{0,{147,132,132,132}},	{0,{147,132,132,132}},
{0,{147,132,132,132}},	{0,{147,0,0,0}},	{0,{147,131,131,131}},
{0,{147,131,131,131}},	{0,{147,131,131,131}},	{0,{147,131,131,131}},
{0,{147,131,131,131}},	{131,{125,125,125,125}},	{131,{0,0,0,0}},
{0,{145,118,118,118}},	{0,{145,118,118,118}},	{0,{145,118,118,118}},
{0,{145,118,118,118}},	{0,{145,118,118,118}},	{0,{145,118,118,118}},
{0,{145,0,0,0}},	{0,{145,117,117,117}},	{0,{145,117,117,117}},
{0,{145,117,117,117}},	{0,{145,117,117,117}},	{0,{145,117,117,117}},
{0,{145,145,106,106}},	{0,{145,145,106,106}},	{0,{145,145,106,106}},
{0,{145,145,106,106}},	{0,{145,145,106,106}},	{0,{145,145,106,106}},
{0,{145,145,0,0}},	{0,{145,145,105,105}},	{0,{145,145,105,105}},
{0,{145,145,105,105}},	{0,{145,145,105,105}},	{0,{145,145,105,105}},
{0,{145,102,102,102}},	{0,{145,0,0,0}},	{0,{145,100,100,100}},
{0,{145,0,0,0}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,129,129,129}},
{0,{145,129,129,129}},	{0,{145,129,129,129}},	{0,{145,129,129,129}},
{0,{145,129,129,129}},	{0,{145,129,129,129}},	{0,{145,129,129,129}},
{0,{145,129,129,129}},	{0,{145,121,121,121}},	{0,{145,121,121,121}},
{0,{145,121,121,121}},	{0,{145,121,121,121}},	{0,{145,121,121,121}},
{0,{145,121,121,121}},	{0,{145,121,121,121}},	{0,{145,121,121,121}},
{0,{145,145,113,113}},	{0,{145,145,113,113}},	{0,{145,145,113,113}},
{0,{145,145,113,113}},	{0,{145,145,113,113}},	{0,{145,145,113,113}},
{0,{145,145,113,113}},	{0,{145,145,113,113}},	{0,{145,0,0,0}},
{0,{145,146,146,146}},	{0,{145,145,145,145}},	{0,{145,145,144,144}},
{0,{145,57,57,57}},	{0,{145,57,57,57}},	{0,{145,57,57,57}},
{0,{145,57,57,57}},	{0,{145,53,53,53}},	{0,{145,53,53,53}},
{0,{145,53,53,53}},	{0,{145,53,53,53}},	{0,{145,101,101,101}},
{0,{145,101,101,101}},	{0,{145,101,101,101}},	{0,{145,101,101,101}},
{0,{145,101,101,101}},	{0,{145,101,101,101}},	{0,{145,101,101,101}},
{0,{145,101,101,101}},	{0,{145,93,93,93}},	{0,{145,93,93,93}},
{0,{145,93,93,93}},	{0,{145,93,93,93}},	{0,{145,93,93,93}},
{0,{145,93,93,93}},	{0,{145,93,93,93}},	{0,{145,93,93,93}},
{0,{145,145,34,34}},	{0,{145,145,35,35}},	{0,{145,145,84,84}},
{0,{145,145,85,85}},	{0,{145,145,86,86}},	{0,{145,145,87,87}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,145,145}},	{0,{145,145,145,145}},	{0,{145,145,145,145}},
{0,{145,145,144,144}},	{0,{145,0,0,0}},	{339,{0,0,0,0}},
{0,{144,144,144,144}},	{0,{0,0,0,144}},	{0,{0,0,0,144}},
{0,{144,0,0,0}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{0,{144,144,144,144}},	{0,{144,144,144,144}},
{0,{144,144,144,144}},	{132,{117,117,117,117}},	{132,{117,117,117,117}},
{132,{117,117,117,117}},	{132,{117,117,117,117}},	{132,{117,117,117,117}},
{132,{117,117,117,117}},	{132,{0,0,0,0}},	{132,{116,116,116,116}},
{132,{116,116,116,116}},	{132,{116,116,116,116}},	{132,{116,116,116,116}},
{132,{116,116,116,116}},	{133,{105,105,105,105}},	{133,{105,105,105,105}},
{133,{105,105,105,105}},	{133,{105,105,105,105}},	{133,{105,105,105,105}},
{133,{105,105,105,105}},	{133,{0,0,0,0}},	{133,{104,104,104,104}},
{133,{104,104,104,104}},	{133,{104,104,104,104}},	{133,{104,104,104,104}},
{133,{104,104,104,104}},	{132,{120,120,120,120}},	{132,{120,120,120,120}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{0,{118,118,118,118}},
{0,{118,118,118,118}},	{0,{118,118,118,118}},	{132,{94,94,94,94}},
{132,{94,94,94,94}},	{132,{94,94,94,94}},	{132,{94,94,94,94}},
{132,{94,94,94,94}},	{132,{94,94,94,94}},	{132,{94,94,94,94}},
{132,{94,94,94,94}},	{133,{86,86,86,86}},	{133,{86,86,86,86}},
{133,{86,86,86,86}},	{133,{86,86,86,86}},	{133,{86,86,86,86}},
{133,{86,86,86,86}},	{133,{86,86,86,86}},	{133,{86,86,86,86}},
{144,{0,0,0,0}},	{144,{0,0,0,101}},	{0,{0,0,0,100}},
{133,{0,0,0,99}},	{0,{99,99,99,99}},	{0,{99,99,99,99}},
{0,{99,99,99,99}},	{0,{99,99,99,99}},	{132,{52,52,52,52}},
{132,{52,52,52,52}},	{132,{52,52,52,52}},	{132,{52,52,52,52}},
{0,{95,95,95,95}},	{0,{95,95,95,95}},	{0,{95,95,95,95}},
{0,{95,95,95,95}},	{0,{95,95,95,95}},	{0,{95,95,95,95}},
{0,{95,95,95,95}},	{0,{95,95,95,95}},	{132,{66,66,66,66}},
{132,{66,66,66,66}},	{132,{66,66,66,66}},	{132,{66,66,66,66}},
{132,{66,66,66,66}},	{132,{66,66,66,66}},	{132,{66,66,66,66}},
{132,{66,66,66,66}},	{133,{33,33,33,33}},	{133,{34,34,34,34}},
{133,{57,57,57,57}},	{133,{58,58,58,58}},	{133,{59,59,59,59}},
{133,{60,60,60,60}},	{0,{81,26,26,26}},	{0,{81,26,26,26}},
{0,{81,22,22,22}},	{0,{81,22,22,22}},	{0,{81,19,19,19}},
{0,{81,0,0,0}},	{0,{81,22,22,22}},	{0,{81,22,22,22}},
{0,{81,0,0,0}},	{133,{80,0,0,0}},	{314,{0,0,0,0}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{64,64,64,79}},	{0,{64,64,64,79}},
{0,{64,64,64,79}},	{0,{64,64,64,79}},	{0,{64,64,64,79}},
{0,{64,64,64,79}},	{0,{0,0,0,79}},	{0,{63,63,63,79}},
{0,{63,63,63,79}},	{0,{63,63,63,79}},	{0,{63,63,63,79}},
{0,{63,63,63,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{63,63,63,79}},	{0,{63,63,63,79}},
{0,{63,63,63,79}},	{0,{63,63,63,79}},	{0,{63,63,63,79}},
{0,{63,63,63,79}},	{0,{63,63,63,79}},	{0,{63,63,63,79}},
{0,{79,79,79,79}},	{0,{36,36,36,79}},	{0,{36,36,36,79}},
{0,{36,36,36,79}},	{0,{36,36,36,79}},	{0,{58,58,58,79}},
{0,{58,58,58,79}},	{0,{58,58,58,79}},	{0,{58,58,58,79}},
{0,{58,58,58,79}},	{0,{58,58,58,79}},	{0,{58,58,58,79}},
{0,{58,58,58,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{0,{79,79,79,79}},	{0,{79,79,79,79}},	{0,{79,79,79,79}},
{227,{0,0,0,0}},	{0,{0,0,0,78}},	{0,{78,0,0,0}},
{0,{0,0,0,78}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,0}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,75}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{0,0,0,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,79}},	{0,{78,78,78,78}},
{0,{78,78,78,79}},	{0,{78,78,78,78}},	{0,{78,78,78,79}},
{0,{78,78,78,78}},	{0,{78,78,78,78}},	{91,{0,0,0,0}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{62,62,62,77}},
{0,{62,62,62,77}},	{0,{62,62,62,77}},	{0,{62,62,62,77}},
{0,{62,62,62,77}},	{0,{62,62,62,77}},	{0,{0,0,0,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{77,77,77,77}},	{0,{34,34,34,77}},
{0,{34,34,34,77}},	{0,{34,34,34,77}},	{0,{34,34,34,77}},
{0,{56,56,56,77}},	{0,{56,56,56,77}},	{0,{56,56,56,77}},
{0,{56,56,56,77}},	{0,{56,56,56,77}},	{0,{56,56,56,77}},
{0,{56,56,56,77}},	{0,{56,56,56,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{62,62,62,77}},	{0,{62,62,62,77}},
{0,{62,62,62,77}},	{0,{62,62,62,77}},	{0,{62,62,62,77}},
{0,{62,62,62,77}},	{0,{0,0,0,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{61,61,61,77}},	{0,{61,61,61,77}},	{0,{61,61,61,77}},
{0,{77,77,77,77}},	{0,{34,34,34,77}},	{0,{34,34,34,77}},
{0,{34,34,34,77}},	{0,{34,34,34,77}},	{0,{56,56,56,77}},
{0,{56,56,56,77}},	{0,{56,56,56,77}},	{0,{56,56,56,77}},
{0,{56,56,56,77}},	{0,{56,56,56,77}},	{0,{56,56,56,77}},
{0,{56,56,56,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,0}},	{0,{77,77,77,77}},
{0,{77,77,78,0}},	{0,{78,78,0,0}},	{0,{78,78,76,0}},
{0,{78,78,0,0}},	{0,{78,78,74,0}},	{0,{78,78,0,0}},
{0,{78,78,72,0}},	{0,{78,78,0,0}},	{0,{70,70,70,0}},
{0,{77,77,69,0}},	{0,{77,77,0,0}},	{0,{77,77,67,0}},
{0,{77,77,0,0}},	{0,{77,77,65,0}},	{0,{77,77,0,0}},
{0,{77,77,78,79}},	{0,{79,79,78,78}},	{0,{79,79,76,77}},
{0,{79,79,76,76}},	{0,{79,79,74,75}},	{0,{79,79,74,74}},
{0,{73,73,73,73}},	{0,{78,78,71,72}},	{0,{78,78,71,71}},
{0,{69,69,69,70}},	{0,{77,77,68,69}},	{0,{77,77,68,68}},
{0,{77,77,51,0}},	{0,{77,77,0,0}},	{0,{77,48,49,0}},
{0,{77,49,0,0}},	{0,{77,49,47,0}},	{0,{77,49,0,0}},
{0,{77,49,45,0}},	{0,{77,49,0,0}},	{0,{77,49,43,0}},
{0,{77,49,0,0}},	{0,{77,51,41,0}},	{0,{77,51,0,0}},
{0,{77,47,39,0}},	{0,{77,47,0,0}},	{0,{77,37,37,0}},
{0,{77,0,0,0}},	{0,{77,47,35,0}},	{0,{77,47,0,0}},
{0,{77,47,48,49}},	{0,{77,49,48,48}},	{0,{77,49,46,47}},
{0,{77,49,46,46}},	{0,{77,49,44,45}},	{0,{77,49,44,44}},
{0,{77,49,42,43}},	{0,{77,49,42,42}},	{0,{77,77,77,77}},
{0,{77,77,39,40}},	{0,{77,77,39,39}},	{0,{77,77,37,38}},
{0,{77,77,37,37}},	{0,{77,73,35,36}},	{0,{77,73,35,35}},
{0,{77,42,33,34}},	{0,{77,42,33,33}},	{0,{77,31,31,32}},
{0,{77,31,31,31}},	{0,{77,69,29,30}},	{0,{77,69,29,29}},
{0,{77,77,78,79}},	{0,{79,79,78,78}},	{0,{79,79,76,77}},
{0,{79,79,76,76}},	{0,{74,74,74,75}},	{0,{74,74,74,74}},
{0,{77,77,72,73}},	{0,{77,77,72,72}},	{0,{77,77,77,77}},
{0,{77,77,77,77}},	{0,{77,77,77,77}},	{0,{77,78,79,0}},
{0,{79,79,79,0}},	{0,{79,80,81,0}},	{0,{75,75,76,0}},
{0,{78,78,79,0}},	{0,{79,79,75,0}},	{0,{79,79,0,0}},
{0,{79,77,73,0}},	{0,{79,77,0,0}},	{0,{70,70,70,0}},
{0,{73,73,73,0}},	{0,{77,68,68,0}},	{0,{77,71,71,0}},
{0,{77,67,67,0}},	{0,{77,0,0,0}},	{0,{77,78,79,80}},
{0,{80,80,80,79}},	{0,{78,78,78,78}},	{0,{79,80,81,77}},
{0,{74,74,75,76}},	{0,{78,78,79,75}},	{0,{79,79,75,74}},
{0,{79,79,73,73}},	{0,{79,77,73,72}},	{0,{79,77,71,71}},
{0,{69,69,69,70}},	{0,{73,73,73,69}},	{134,{53,53,53,0}},
{134,{0,0,0,0}},	{0,{75,49,50,0}},	{0,{75,52,53,0}},
{0,{75,47,48,0}},	{0,{75,50,51,0}},	{0,{75,51,47,0}},
{0,{75,51,0,0}},	{0,{75,49,45,0}},	{0,{75,49,0,0}},
{0,{75,42,42,0}},	{0,{75,45,45,0}},	{0,{75,40,40,0}},
{0,{75,43,43,0}},	{0,{75,39,39,0}},	{0,{75,0,0,0}},
{0,{75,37,37,0}},	{0,{75,0,0,0}},	{0,{75,48,49,50}},
{0,{75,52,53,49}},	{0,{75,46,47,48}},	{0,{75,50,51,47}},
{0,{75,51,47,46}},	{0,{75,51,45,45}},	{0,{75,49,45,44}},
{0,{75,49,43,43}},	{0,{75,75,75,0}},	{0,{75,40,40,41}},
{0,{75,44,44,40}},	{0,{75,40,40,39}},	{0,{75,38,38,38}},
{0,{75,36,36,37}},	{0,{75,40,40,36}},	{0,{75,34,34,35}},
{0,{75,38,38,34}},	{0,{75,34,34,33}},	{0,{75,32,32,32}},
{0,{75,32,32,31}},	{0,{75,30,30,30}},	{0,{75,76,76,77}},
{0,{77,77,77,76}},	{0,{75,75,75,75}},	{0,{76,77,77,74}},
{0,{72,72,72,73}},	{0,{75,75,75,72}},	{0,{75,72,72,71}},
{0,{75,70,70,70}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{76,77,76,77}},
{0,{77,78,77,78}},	{0,{77,77,77,77}},	{0,{77,78,77,78}},
{0,{78,79,78,79}},	{0,{79,0,79,0}},	{0,{71,71,71,71}},
{0,{76,76,76,76}},	{0,{67,67,67,67}},	{0,{72,72,72,72}},
{0,{75,76,75,76}},	{0,{76,77,76,77}},	{0,{74,74,74,74}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{76,77,76,77}},
{0,{77,78,77,78}},	{0,{78,78,78,78}},	{0,{76,76,76,76}},
{0,{77,78,77,78}},	{0,{78,79,78,79}},	{0,{79,74,79,74}},
{0,{70,70,70,70}},	{0,{76,76,76,76}},	{0,{66,66,66,66}},
{0,{72,72,72,72}},	{0,{75,76,75,76}},	{0,{76,77,76,77}},
{0,{77,78,77,78}},	{0,{78,79,78,79}},	{0,{76,76,76,76}},
{0,{77,77,77,77}},	{0,{70,70,70,70}},	{0,{71,71,71,71}},
{0,{75,76,75,76}},	{0,{76,77,76,77}},	{0,{77,78,77,78}},
{0,{78,79,78,79}},	{0,{76,76,76,76}},	{0,{77,77,77,77}},
{0,{70,70,70,70}},	{0,{71,71,71,71}},	{0,{75,76,75,76}},
{0,{76,77,76,77}},	{0,{77,78,77,78}},	{0,{78,79,78,79}},
{0,{76,76,76,76}},	{0,{77,77,77,77}},	{0,{70,70,70,70}},
{0,{71,71,71,71}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{76,77,76,77}},	{0,{74,74,74,74}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{76,77,76,77}},	{0,{77,78,77,78}},
{0,{78,79,78,79}},	{0,{76,76,76,76}},	{0,{77,77,77,77}},
{0,{70,70,70,70}},	{0,{71,71,71,71}},	{0,{75,76,75,76}},
{0,{76,77,76,77}},	{0,{77,77,77,77}},	{0,{75,75,75,75}},
{0,{76,77,76,77}},	{0,{77,74,77,74}},	{0,{70,70,70,70}},
{0,{74,74,74,74}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,0,75,0}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,70,75,70}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,76,75,76}},	{0,{75,75,75,75}},	{0,{75,76,75,76}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,76,75,76}},	{0,{75,75,75,75}},
{0,{75,72,75,72}},	{0,{75,75,75,75}},	{0,{75,75,75,75}},
{0,{75,75,75,75}},	{0,{75,76,76,77}},	{0,{77,76,76,76}},
{0,{77,74,74,75}},	{0,{77,74,74,74}},	{0,{77,78,78,0}},
{0,{78,0,0,0}},	{0,{78,70,70,71}},	{0,{78,70,70,70}},
{0,{68,68,68,69}},	{0,{68,68,68,68}},	{0,{72,72,72,0}},
{0,{75,71,71,0}},	{0,{75,0,0,0}},	{0,{75,69,69,0}},
{0,{75,0,0,0}},	{0,{75,76,76,77}},	{0,{77,76,76,76}},
{0,{77,74,74,75}},	{0,{77,74,74,74}},	{0,{77,78,78,79}},
{0,{79,78,78,78}},	{0,{77,77,77,77}},	{0,{78,69,69,70}},
{0,{78,69,69,69}},	{0,{67,67,67,68}},	{0,{67,67,67,67}},
{0,{71,71,71,72}},	{0,{75,76,49,50}},	{0,{76,77,49,49}},
{0,{77,74,47,48}},	{0,{77,75,47,47}},	{0,{77,72,45,46}},
{0,{77,73,45,45}},	{0,{70,70,43,44}},	{0,{71,71,43,43}},
{0,{75,76,47,0}},	{0,{76,77,0,0}},	{0,{77,74,45,0}},
{0,{77,75,0,0}},	{0,{77,72,43,0}},	{0,{77,73,0,0}},
{0,{70,70,41,0}},	{0,{71,71,0,0}},	{0,{75,76,48,49}},
{0,{76,77,48,48}},	{0,{77,74,46,47}},	{0,{77,75,46,46}},
{0,{77,72,44,45}},	{0,{77,73,44,44}},	{0,{70,70,42,43}},
{0,{71,71,42,42}},	{0,{75,75,0,0}},	{0,{75,45,45,46}},
{0,{75,45,45,45}},	{0,{75,43,43,44}},	{0,{75,43,43,43}},
{0,{75,76,41,42}},	{0,{76,77,41,41}},	{0,{77,74,39,40}},
{0,{77,75,39,39}},	{0,{77,72,37,38}},	{0,{77,73,37,37}},
{0,{70,70,35,36}},	{0,{71,71,35,35}},	{0,{75,76,76,77}},
{0,{77,76,76,76}},	{0,{77,74,74,75}},	{0,{77,74,74,74}},
{0,{73,73,73,73}},	{0,{76,71,71,72}},	{0,{76,71,71,71}},
{0,{69,69,69,70}},	{0,{75,0,0,0}},	{0,{0,0,0,75}},
{0,{75,0,0,0}},	{121,{75,76,77,77}},	{0,{75,75,76,76}},
{0,{75,75,75,75}},	{121,{75,74,74,74}},	{121,{72,72,73,73}},
{121,{72,72,72,72}},	{121,{73,73,0,0}},	{0,{72,72,0,0}},
{121,{0,0,0,0}},	{0,{66,67,68,68}},	{0,{68,67,67,67}},
{121,{69,68,0,0}},	{121,{69,0,0,0}},	{0,{67,66,0,0}},
{0,{67,0,0,0}},	{121,{67,68,69,69}},	{0,{67,67,68,68}},
{0,{67,67,67,67}},	{121,{67,66,66,66}},	{121,{64,64,65,65}},
{121,{64,64,64,64}},	{121,{65,65,66,66}},	{0,{64,64,65,65}},
{0,{64,64,64,64}},	{121,{63,63,63,63}},	{0,{57,58,59,59}},
{0,{59,58,58,58}},	{121,{61,62,63,63}},	{0,{61,61,62,62}},
{121,{62,61,61,61}},	{0,{60,60,60,60}},	{0,{57,58,59,59}},
{0,{59,58,58,58}},	{121,{56,56,57,57}},	{121,{56,56,56,56}},
{121,{57,58,59,59}},	{0,{57,57,58,58}},	{121,{58,57,57,57}},
{0,{56,56,56,56}},	{0,{53,54,55,55}},	{0,{55,54,54,54}},
{121,{52,52,53,53}},	{121,{52,52,52,52}},	{121,{53,54,55,55}},
{0,{53,53,54,54}},	{121,{54,53,53,53}},	{0,{52,52,52,52}},
{0,{49,50,51,51}},	{0,{51,50,50,50}},	{121,{48,48,49,49}},
{121,{48,48,48,48}},	{147,{0,0,0,0}},	{121,{48,34,35,35}},
{121,{48,34,34,34}},	{0,{46,32,33,33}},	{0,{46,32,32,32}},
{121,{46,47,48,48}},	{0,{46,46,47,47}},	{121,{47,46,46,46}},
{0,{45,45,45,45}},	{0,{42,43,44,44}},	{0,{44,43,43,43}},
{121,{41,41,42,42}},	{121,{41,41,41,41}},	{121,{42,43,44,44}},
{0,{42,42,43,43}},	{0,{42,42,42,42}},	{121,{42,41,41,41}},
{121,{39,39,40,40}},	{121,{39,39,39,39}},	{0,{36,37,38,38}},
{0,{38,37,37,37}},	{15,{0,0,0,0}},	{0,{0,0,0,37}},
{116,{0,0,0,0}},	{122,{36,36,36,36}},	{122,{36,36,36,36}},
{0,{35,35,35,35}},	{0,{33,33,33,33}},	{122,{0,0,0,0}},
{122,{33,33,33,33}},	{0,{32,32,32,32}},	{122,{32,32,32,32}},
{122,{32,32,32,32}},	{0,{31,31,31,31}},	{0,{29,29,29,29}},
{122,{30,30,30,30}},	{0,{29,29,29,29}},	{122,{29,29,29,29}},
{122,{29,29,29,29}},	{0,{28,28,28,28}},	{0,{26,26,26,26}},
{122,{27,27,27,27}},	{122,{27,27,27,27}},	{0,{26,26,26,26}},
{0,{24,24,24,24}},	{122,{25,25,25,25}},	{122,{25,25,25,25}},
{0,{24,24,24,24}},	{0,{22,22,22,22}},	{122,{23,23,23,23}},
{0,{22,22,22,22}},	{122,{22,22,22,22}},	{122,{22,22,22,22}},
{0,{21,21,21,21}},	{0,{19,19,19,19}},	{122,{20,20,20,20}},
{122,{20,20,20,20}},	{0,{19,19,19,19}},	{0,{17,17,17,17}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{15,15,15,18}},	{0,{15,15,15,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{14,14,14,18}},
{0,{14,14,14,18}},	{0,{8,8,8,18}},	{0,{13,13,13,18}},
{0,{13,13,13,18}},	{0,{5,5,5,18}},	{0,{0,0,0,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{15,15,15,18}},	{0,{15,15,15,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{14,14,14,18}},
{0,{14,14,14,18}},	{0,{8,8,8,18}},	{0,{13,13,13,18}},
{0,{13,13,13,18}},	{0,{5,5,5,18}},	{0,{0,0,0,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{15,15,15,18}},	{0,{15,15,15,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{14,14,14,18}},
{0,{14,14,14,18}},	{0,{8,8,8,18}},	{0,{13,13,13,18}},
{0,{13,13,13,18}},	{0,{5,5,5,18}},	{0,{0,0,0,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{15,15,15,18}},	{0,{15,15,15,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{14,14,14,18}},
{0,{14,14,14,18}},	{0,{8,8,8,18}},	{0,{13,13,13,18}},
{0,{13,13,13,18}},	{0,{5,5,5,18}},	{0,{0,0,0,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{15,15,15,18}},	{0,{15,15,15,18}},
{0,{0,0,0,18}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{14,14,14,18}},
{0,{14,14,14,18}},	{0,{8,8,8,18}},	{0,{13,13,13,18}},
{0,{13,13,13,18}},	{0,{5,5,5,18}},	{0,{0,0,0,18}},
{0,{18,0,0,0}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,15,15,15}},	{0,{18,15,15,15}},
{0,{18,0,0,0}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{0,{18,18,18,18}},	{0,{18,18,18,18}},	{0,{18,14,14,14}},
{0,{18,14,14,14}},	{0,{18,8,8,8}},	{0,{18,13,13,13}},
{0,{18,13,13,13}},	{0,{18,18,18,18}},	{0,{18,18,18,18}},
{106,{0,0,0,0}},	{0,{17,17,17,17}},	{0,{17,17,17,17}},
{0,{17,17,17,17}},	{126,{14,14,14,14}},	{126,{14,14,14,14}},
{126,{0,0,0,0}},	{0,{14,14,14,14}},	{0,{14,14,14,14}},
{0,{14,14,14,14}},	{0,{14,14,14,14}},	{126,{10,10,10,10}},
{126,{10,10,10,10}},	{126,{7,7,7,7}},	{126,{9,9,9,9}},
{126,{9,9,9,9}},	{0,{9,4,4,4}},	{0,{9,0,0,0}},
{0,{9,9,9,9}},	{0,{9,9,9,9}},	{0,{9,9,9,9}},
{0,{9,9,9,9}},	{0,{9,9,9,9}},	{0,{9,9,9,9}},
{0,{9,9,9,9}},	{166,{4,4,4,4}},	{166,{0,0,0,0}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,7,7}},	{0,{7,7,7,7}},	{0,{7,7,7,7}},
{0,{7,7,0,0}},	{0,{7,7,0,0}},	{0,{7,7,0,0}},
{0,{7,4,0,0}},	{0,{7,4,0,0}},	{0,{7,4,0,0}},
{0,{7,0,0,0}},	{123,{7,7,7,7}},	{123,{0,0,0,0}},
{0,{5,5,5,5}},	{137,{4,4,4,4}},	{137,{0,0,0,0}},
{136,{2,2,2,2}},	{136,{0,0,0,0}},	{0,{1,1,1,1}},
{0,{1,1,1,1}},	{0,{1,1,1,1}},	{0,{1,1,1,1}},
{0,{1,0,0,0}},	{124,{0,0,0,0}},	};

static const attrib_rt_t idx_owl_attackpat[388] = {
{-1,0},	{58,0},	{33,0},	{92,0},
{57,0},	{219,0},	{220,0},	{187,0},
{46,0},	{25,8},	{305,0},	{74,0},
{73,0},	{93,0},	{94,13},	{15,0},
{20,0},	{205,0},	{204,17},	{207,0},
{200,0},	{51,0},	{200,21},	{102,0},
{231,0},	{197,24},	{230,25},	{198,26},
{60,0},	{218,0},	{189,0},	{64,0},
{272,0},	{164,0},	{208,0},	{262,0},
{189,35},	{263,0},	{106,0},	{59,0},
{287,0},	{232,0},	{233,41},	{1,0},
{48,0},	{49,44},	{223,0},	{224,46},
{39,0},	{40,48},	{101,49},	{38,50},
{35,51},	{0,0},	{41,51},	{35,0},
{5,0},	{295,0},	{152,0},	{154,0},
{154,56},	{101,48},	{38,61},	{35,62},
{185,0},	{186,64},	{191,0},	{121,66},
{166,0},	{163,0},	{162,69},	{217,0},
{165,0},	{130,0},	{285,0},	{75,0},
{71,0},	{70,76},	{70,0},	{288,0},
{292,0},	{183,0},	{184,81},	{187,82},
{211,0},	{241,0},	{213,0},	{212,0},
{52,0},	{55,0},	{54,0},	{194,0},
{56,82},	{187,92},	{98,0},	{47,0},
{42,0},	{4,0},	{24,0},	{148,0},
{12,0},	{209,0},	{34,0},	{23,0},
{50,0},	{324,0},	{249,0},	{18,0},
{88,0},	{6,0},	{183,47},	{184,110},
{56,111},	{290,0},	{157,0},	{234,0},
{240,0},	{53,0},	{54,117},	{210,0},
{81,0},	{80,0},	{83,0},	{202,0},
{84,0},	{201,0},	{304,0},	{77,0},
{226,0},	{229,0},	{228,129},	{16,0},
{9,0},	{66,0},	{13,0},	{104,0},
{82,0},	{202,136},	{27,0},	{26,138},
{28,0},	{26,0},	{306,0},	{11,0},
{265,0},	{206,0},	{235,145},	{278,0},
{140,0},	{76,0},	{307,0},	{89,128},
{90,151},	{136,0},	{199,0},	{159,142},
{72,0},	{160,0},	{226,157},	{107,0},
{11,159},	{87,0},	{97,0},	{78,0},
{141,0},	{139,164},	{17,0},	{175,0},
{282,0},	{178,0},	{282,167},	{137,0},
{138,0},	{149,0},	{286,0},	{177,0},
{178,175},	{43,0},	{44,177},	{30,0},
{114,0},	{311,0},	{131,0},	{140,178},
{140,177},	{311,148},	{116,0},	{267,0},
{103,0},	{151,0},	{171,0},	{117,0},
{150,189},	{259,0},	{19,0},	{108,0},
{323,0},	{215,0},	{238,0},	{137,198},
{138,198},	{10,0},	{155,0},	{45,0},
{255,0},	{115,0},	{301,0},	{43,206},
{140,207},	{140,206},	{113,0},	{176,0},
{72,211},	{301,211},	{72,213},	{173,0},
{174,215},	{103,216},	{72,206},	{294,156},
{294,0},	{69,0},	{67,221},	{68,222},
{67,0},	{68,224},	{3,0},	{7,0},
{3,143},	{86,0},	{86,128},	{128,0},
{3,159},	{3,160},	{227,0},	{142,0},
{111,0},	{147,0},	{279,0},	{31,0},
{67,239},	{68,240},	{190,0},	{32,0},
{86,188},	{320,0},	{225,0},	{65,0},
{21,0},	{21,142},	{21,153},	{21,155},
{123,0},	{293,0},	{95,0},	{96,254},
{29,0},	{276,0},	{251,0},	{62,0},
{105,0},	{310,0},	{244,0},	{245,262},
{61,0},	{237,0},	{236,265},	{179,0},
{180,267},	{203,0},	{120,0},	{118,270},
{247,0},	{122,0},	{8,0},	{158,0},
{153,0},	{119,0},	{300,0},	{253,0},
{131,279},	{243,0},	{242,281},	{37,0},
{36,283},	{315,0},	{277,0},	{319,0},
{314,0},	{132,0},	{133,0},	{126,0},
{122,289},	{172,0},	{132,190},	{312,0},
{316,0},	{318,0},	{316,297},	{135,0},
{266,0},	{250,300},	{125,0},	{266,257},
{143,0},	{268,0},	{134,0},	{145,0},
{221,0},	{146,0},	{298,0},	{258,0},
{269,0},	{303,0},	{322,0},	{321,0},
{256,0},	{254,316},	{127,0},	{291,0},
{170,0},	{299,0},	{14,0},	{2,322},
{27,323},	{26,324},	{26,323},	{110,0},
{264,0},	{298,257},	{167,0},	{109,0},
{85,0},	{188,0},	{188,154},	{112,0},
{181,0},	{182,336},	{280,0},	{281,0},
{257,0},	{226,340},	{260,0},	{261,0},
{260,343},	{100,0},	{283,0},	{192,0},
{22,0},	{22,142},	{22,153},	{22,155},
{246,0},	{91,0},	{156,0},	{156,153},
{214,0},	{216,0},	{308,0},	{309,358},
{239,0},	{289,0},	{222,0},	{275,0},
{270,0},	{168,0},	{248,0},	{274,0},
{161,0},	{284,0},	{169,0},	{195,0},
{196,371},	{302,0},	{63,0},	{193,142},
{99,0},	{271,0},	{273,0},	{144,0},
{129,0},	{124,0},	{296,0},	{297,0},
{79,0},	{313,0},	{317,0},	{252,0},
};

static dfa_rt_t dfa_owl_attackpat = {
 "owl_attackpat",
 0,
state_owl_attackpat,
idx_owl_attackpat};

struct pattern_db owl_attackpat_db = {
  -1,
  0,
  owl_attackpat
 ,& dfa_owl_attackpat
};
