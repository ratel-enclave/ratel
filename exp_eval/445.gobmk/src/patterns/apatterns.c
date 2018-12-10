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

static struct patval attpat0[] = {
  {684,1},	{722,1},	{758,2},	{685,2},
  {721,2},	{686,2},	{796,0},	{759,0},
  {723,0},	{760,0},	{724,0}
};

static struct patval attpat1[] = {
  {648,1},	{721,1},	{684,1},	{647,2},
  {685,2},	{610,2},	{611,0},	{722,0},
  {612,0},	{649,0},	{686,0},	{723,0}
};

static struct patval attpat2[] = {
  {648,1},	{684,1},	{647,2},	{685,2},
  {610,0},	{611,0}
};

static struct patval attpat3[] = {
  {687,1},	{684,1},	{648,1},	{685,2},
  {647,0},	{686,0},	{650,0},	{649,0}
};

static struct patval attpat4[] = {
  {684,1},	{649,1},	{685,2},	{650,2},
  {686,0},	{687,0}
};

static struct patval attpat5[] = {
  {684,1},	{648,2},	{647,2},	{683,2},
  {721,0},	{720,0},	{685,0},	{722,0},
  {686,0}
};

static struct patval attpat6[] = {
  {684,1},	{685,1},	{723,2},	{646,2},
  {796,4},	{795,4},	{759,4},	{645,4},
  {721,0},	{758,0},	{720,0},	{683,0},
  {722,0},	{682,0},	{719,0},	{757,0}
};

static struct patval attpat7[] = {
  {684,1},	{685,2},	{796,2},	{794,0},
  {683,0},	{721,0},	{758,0},	{795,0},
  {720,0},	{722,0},	{759,0},	{757,0}
};

static struct patval attpat8[] = {
  {684,1},	{721,2},	{685,2},	{720,2},
  {647,2},	{683,0},	{682,0},	{646,0}
};

static struct patval attpat9[] = {
  {684,1},	{685,1},	{758,1},	{721,2},
  {722,0},	{759,0}
};

static struct patval attpat10[] = {
  {649,1},	{684,1},	{722,1},	{686,1},
  {685,2},	{611,2},	{647,0},	{648,0}
};

static struct patval attpat11[] = {
  {684,1},	{648,2},	{722,2},	{723,4},
  {686,0},	{685,0}
};

static struct patval attpat12[] = {
  {649,1},	{684,1},	{648,2},	{647,2},
  {685,0},	{686,0}
};

static int
autohelperattpat9(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return  countlib(A)==1;
}

static int
autohelperattpat10(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(686, trans, move);

  return countlib(A)==1 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && countlib(b)>1;
}

static struct pattern attpat[] = {
  {attpat0,11,8, "Attack1",0,0,3,3,3,3,0x0,760,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00251810, 0x00609010, 0x90600000, 0x18250000, 0x90600000, 0x18250000, 0x00251810, 0x00609010}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat1,12,8, "Attack2",0,-2,2,1,2,3,0x2,722,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff},
    { 0x00689000, 0x90602000, 0x18a50000, 0x20241810, 0x20609010, 0x90680000, 0x18242000, 0x00a51800}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat2,6,8, "Attack4",0,-2,1,0,1,2,0x0,610,
    { 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00},
    { 0x00609000, 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x00241800}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat3,8,8, "Attack5",0,-1,3,0,3,1,0x8,649,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00209000, 0x80600000, 0x18200000, 0x00240800, 0x00608000, 0x90200000, 0x08240000, 0x00201800}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat4,6,8, "Attack6",0,-1,3,0,3,1,0x0,686,
    { 0x003030f0, 0x00f00000, 0x30300000, 0x003f0300, 0x00f00000, 0x30300000, 0x033f0000, 0x0030303c},
    { 0x00201080, 0x00600000, 0x10200000, 0x00240200, 0x00600000, 0x10200000, 0x02240000, 0x00201008}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat5,9,8, "Attack10",-1,-1,2,1,3,2,0x0,722,
    { 0x3cfcfc30, 0xf0fcfc00, 0xfcfcf000, 0xfcff3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfffc00, 0xf0fcfc30},
    { 0x10604000, 0x50240000, 0x04241000, 0x00601400, 0x00245000, 0x40601000, 0x14600000, 0x10240400}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat6,16,8, "Attack11",-2,-1,2,3,4,4,0x0,720,
    { 0xff3f3e0c, 0x0effffbc, 0xf0f0fcf8, 0xfffcc000, 0xffff0e00, 0x3e3fffbc, 0xc0fcfff8, 0xfcf0f0c0},
    { 0x40202004, 0x04a00000, 0x20200400, 0x01284000, 0x00a00400, 0x20204000, 0x40280100, 0x04202040}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat7,12,8, "Attack13",-1,0,1,3,2,3,0x1,722,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat8,8,8, "Attack14",-2,-1,1,1,3,2,0x0,646,
    { 0xfcfc3000, 0x3cff3c00, 0x30fcfc30, 0xf0fcf000, 0x3cff3c00, 0x30fcfc30, 0xf0fcf000, 0xfcfc3000},
    { 0x04641000, 0x10601400, 0x10644000, 0x50241000, 0x14601000, 0x10640400, 0x10245000, 0x40641000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat9,6,8, "Attack15",0,0,1,2,1,2,0x2,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00262000, 0x00a01020, 0x20600000, 0x10280000, 0x10a00000, 0x20260000, 0x00281020, 0x00602000}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL
,autohelperattpat9,3,0.010000},
  {attpat10,8,8, "Attack16",0,-2,2,1,2,3,0x0,647,
    { 0x00f0fcf0, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0c, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0x003cff3c},
    { 0x002018a0, 0x00608000, 0x91200000, 0x08260204, 0x80600040, 0x18200000, 0x02260800, 0x00209128}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,1,NULL,autohelperattpat10,3,0.043600},
  {attpat11,6,8, "Attack17",0,-1,2,1,2,2,0x0,686,
    { 0x0030fc38, 0xc0f0c000, 0xfc300000, 0x0e3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0e00, 0x0030fcb0},
    { 0x00204400, 0x40204000, 0x44200000, 0x04200400, 0x40204000, 0x44200000, 0x04200400, 0x00204400}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {attpat12,6,8, "Attack18",0,-1,2,0,2,1,0x2,686,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00604080, 0x50200000, 0x04240000, 0x00201600, 0x00205000, 0x40600000, 0x16200000, 0x00240408}
   , 0x400,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0,NULL,NULL,3,0.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0,NULL,NULL,0,0.0}
};

struct pattern_db attpat_db = {
  -1,
  0,
  attpat
 , NULL
};
