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

static struct patval fuseki90[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki91[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki92[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki93[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki94[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki95[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki96[] = {
  {684,1}
};

static struct patval fuseki97[] = {
  {684,1}
};

static struct patval fuseki98[] = {
  {684,1}
};

static struct patval fuseki99[] = {
  {684,1}
};

static struct patval fuseki910[] = {
  {684,1}
};

static struct patval fuseki911[] = {
  {612,1}
};

static struct patval fuseki912[] = {
  {608,1}
};

static struct patval fuseki913[] = {
  {756,1}
};

static struct patval fuseki914[] = {
  {608,1}
};

static struct patval fuseki915[] = {
  {612,1}
};

static struct patval fuseki916[] = {
  {756,1}
};

static struct patval fuseki917[] = {
  {612,1}
};

static struct patval fuseki918[] = {
  {612,1}
};

static struct patval fuseki919[] = {
  {612,1}
};

static struct patval fuseki920[] = {
  {649,1}
};

static struct patval fuseki921[] = {
  {719,1}
};

static struct patval fuseki922[] = {
  {611,1}
};

static struct patval fuseki923[] = {
  {759,1}
};

static struct patval fuseki924[] = {
  {609,1}
};

static struct patval fuseki925[] = {
  {719,1}
};

static struct patval fuseki926[] = {
  {719,1}
};

static struct patval fuseki927[] = {
  {757,1}
};

static struct patval fuseki928[] = {
  {649,1}
};

static struct patval fuseki929[] = {
  {611,1}
};

static struct patval fuseki930[] = {
  {611,1}
};

static struct patval fuseki931[] = {
  {611,1}
};

static struct patval fuseki932[] = {
  {720,1}
};

static struct patval fuseki933[] = {
  {722,1}
};

static struct patval fuseki934[] = {
  {648,1}
};

static struct patval fuseki935[] = {
  {722,1}
};

static struct patval fuseki936[] = {
  {646,1}
};

static struct patval fuseki937[] = {
  {646,1}
};

static struct patval fuseki938[] = {
  {720,1}
};

static struct patval fuseki939[] = {
  {720,1}
};

static struct patval fuseki940[] = {
  {722,1}
};

static struct patval fuseki941[] = {
  {720,1}
};

static struct patval fuseki942[] = {
  {611,1},	{684,2}
};

static struct patval fuseki943[] = {
  {719,1},	{684,2}
};

static struct patval fuseki944[] = {
  {723,1},	{684,2}
};

static struct patval fuseki945[] = {
  {723,1},	{684,2}
};

static struct patval fuseki946[] = {
  {649,1},	{684,2}
};

static struct patval fuseki947[] = {
  {759,1},	{684,2}
};

static struct patval fuseki948[] = {
  {611,1},	{684,2}
};

static struct patval fuseki949[] = {
  {649,1},	{684,2}
};

static struct patval fuseki950[] = {
  {723,1},	{684,2}
};

static struct patval fuseki951[] = {
  {757,1},	{684,2}
};

static struct patval fuseki952[] = {
  {756,1},	{684,2}
};

static struct patval fuseki953[] = {
  {612,1},	{684,2}
};

static struct patval fuseki954[] = {
  {760,1},	{684,2}
};

static struct patval fuseki955[] = {
  {756,1},	{684,2}
};

static struct patval fuseki956[] = {
  {756,1},	{684,2}
};

static struct patval fuseki957[] = {
  {756,1},	{612,2}
};

static struct patval fuseki958[] = {
  {612,1},	{756,2}
};

static struct patval fuseki959[] = {
  {608,1},	{760,2}
};

static struct patval fuseki960[] = {
  {758,1},	{684,2}
};

static struct patval fuseki961[] = {
  {610,1},	{684,2}
};

static struct patval fuseki962[] = {
  {758,1},	{684,2}
};

static struct patval fuseki963[] = {
  {682,1},	{684,2}
};

static struct patval fuseki964[] = {
  {682,1},	{684,2}
};

static struct patval fuseki965[] = {
  {682,1},	{684,2}
};

static struct patval fuseki966[] = {
  {682,1},	{684,2}
};

static struct patval fuseki967[] = {
  {610,1},	{684,2}
};

static struct patval fuseki968[] = {
  {758,1},	{684,2}
};

static struct patval fuseki969[] = {
  {649,1},	{756,2}
};

static struct patval fuseki970[] = {
  {611,1},	{756,2}
};

static struct patval fuseki971[] = {
  {609,1},	{760,2}
};

static struct patval fuseki972[] = {
  {611,1},	{756,2}
};

static struct patval fuseki973[] = {
  {719,1},	{612,2}
};

static struct patval fuseki974[] = {
  {723,1},	{608,2}
};

static struct patval fuseki975[] = {
  {611,1},	{756,2}
};

static struct patval fuseki976[] = {
  {611,1},	{756,2}
};

static struct patval fuseki977[] = {
  {723,1},	{608,2}
};

static struct patval fuseki978[] = {
  {609,1},	{649,2}
};

static struct patval fuseki979[] = {
  {757,1},	{723,2}
};

static struct patval fuseki980[] = {
  {645,1},	{757,2}
};

static struct patval fuseki981[] = {
  {759,1},	{719,2}
};

static struct patval fuseki982[] = {
  {757,1},	{723,2}
};

static struct patval fuseki983[] = {
  {757,1},	{723,2}
};

static struct patval fuseki984[] = {
  {759,1},	{719,2}
};

static struct patval fuseki985[] = {
  {609,1},	{649,2}
};

static struct patval fuseki986[] = {
  {611,1},	{645,2}
};

static struct patval fuseki987[] = {
  {760,1},	{756,1},	{608,2}
};

static struct patval fuseki988[] = {
  {608,1},	{612,1},	{756,2}
};

static struct patval fuseki989[] = {
  {608,1},	{756,2}
};

static struct patval fuseki990[] = {
  {608,1},	{756,2}
};

static struct patval fuseki991[] = {
  {756,1},	{760,2}
};

static struct patval fuseki992[] = {
  {756,1},	{760,2}
};

static struct patval fuseki993[] = {
  {646,1},	{684,2}
};

static struct patval fuseki994[] = {
  {720,1},	{684,2}
};

static struct patval fuseki995[] = {
  {646,1},	{684,2}
};

static struct patval fuseki996[] = {
  {684,1},	{682,1},	{608,2}
};

static struct patval fuseki997[] = {
  {684,1},	{686,1},	{612,2}
};

static struct patval fuseki998[] = {
  {758,1},	{684,1},	{756,2}
};

static struct patval fuseki999[] = {
  {684,1},	{758,1},	{760,2}
};

static struct patval fuseki9100[] = {
  {684,1},	{686,1},	{612,2}
};

static struct patval fuseki9101[] = {
  {684,1},	{610,1},	{608,2}
};

static struct patval fuseki9102[] = {
  {758,1},	{684,1},	{756,2}
};

static struct patval fuseki9103[] = {
  {720,1},	{612,2}
};

static struct patval fuseki9104[] = {
  {720,1},	{612,2}
};

static struct patval fuseki9105[] = {
  {648,1},	{756,2}
};

static struct patval fuseki9106[] = {
  {722,1},	{608,2}
};

static struct patval fuseki9107[] = {
  {722,1},	{608,2}
};

static struct patval fuseki9108[] = {
  {646,1},	{760,2}
};

static struct patval fuseki9109[] = {
  {719,1},	{608,2}
};

static struct patval fuseki9110[] = {
  {649,1},	{760,2}
};

static struct patval fuseki9111[] = {
  {759,1},	{756,2}
};

static struct patval fuseki9112[] = {
  {759,1},	{756,2}
};

static struct patval fuseki9113[] = {
  {759,1},	{756,2}
};

static struct patval fuseki9114[] = {
  {723,1},	{612,2}
};

static struct patval fuseki9115[] = {
  {759,1},	{756,2}
};

static struct patval fuseki9116[] = {
  {684,1},	{719,2}
};

static struct patval fuseki9117[] = {
  {684,1},	{645,2}
};

static struct patval fuseki9118[] = {
  {684,1},	{649,2}
};

static struct patval fuseki9119[] = {
  {684,1},	{649,2}
};

static struct patval fuseki9120[] = {
  {684,1},	{719,2}
};

static struct patval fuseki9121[] = {
  {684,1},	{719,2}
};

static struct patval fuseki9122[] = {
  {684,1},	{611,2}
};

static struct patval fuseki9123[] = {
  {684,1},	{649,2}
};

static struct patval fuseki9124[] = {
  {684,1},	{611,2}
};

static struct patval fuseki9125[] = {
  {684,1},	{611,2}
};

static struct patval fuseki9126[] = {
  {684,1},	{608,2}
};

static struct patval fuseki9127[] = {
  {684,1},	{760,2}
};

static struct patval fuseki9128[] = {
  {684,1},	{756,2}
};

static struct patval fuseki9129[] = {
  {684,1},	{612,2}
};

static struct patval fuseki9130[] = {
  {684,1},	{756,2}
};

static struct patval fuseki9131[] = {
  {684,1},	{612,2}
};

static struct patval fuseki9132[] = {
  {684,1},	{612,2}
};

static struct patval fuseki9133[] = {
  {646,1},	{649,2}
};

static struct patval fuseki9134[] = {
  {722,1},	{611,2}
};

static struct patval fuseki9135[] = {
  {648,1},	{759,2}
};

static struct patval fuseki9136[] = {
  {646,1},	{649,2}
};

static struct patval fuseki9137[] = {
  {720,1},	{723,2}
};

static struct patval fuseki9138[] = {
  {646,1},	{649,2}
};

static struct patval fuseki9139[] = {
  {722,1},	{719,2}
};

static struct patval fuseki9140[] = {
  {646,1},	{757,2}
};

static struct patval fuseki9141[] = {
  {722,1},	{719,2}
};

static struct patval fuseki9142[] = {
  {608,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9143[] = {
  {760,1},	{756,1},	{612,2},	{608,2}
};

static struct patval fuseki9144[] = {
  {760,1},	{756,1},	{612,2},	{608,2}
};

static struct patval fuseki9145[] = {
  {760,1},	{612,1},	{756,2},	{608,2}
};

static struct patval fuseki9146[] = {
  {608,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9147[] = {
  {608,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9148[] = {
  {760,1},	{756,1},	{612,2},	{608,2}
};

static struct patval fuseki9149[] = {
  {608,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9150[] = {
  {608,1},	{756,1},	{612,2},	{760,2}
};

static struct patval fuseki9151[] = {
  {608,1},	{756,1},	{612,2},	{760,2}
};

static struct patval fuseki9152[] = {
  {608,1},	{722,2}
};

static struct patval fuseki9153[] = {
  {612,1},	{720,2}
};

static struct patval fuseki9154[] = {
  {756,1},	{648,2}
};

static struct patval fuseki9155[] = {
  {612,1},	{720,2}
};

static struct patval fuseki9156[] = {
  {756,1},	{648,2}
};

static struct patval fuseki9157[] = {
  {612,1},	{720,2}
};

static struct patval fuseki9158[] = {
  {612,1},	{720,2}
};

static struct patval fuseki9159[] = {
  {609,1},	{684,1},	{611,2}
};

static struct patval fuseki9160[] = {
  {684,1},	{649,1},	{723,2}
};

static struct patval fuseki9161[] = {
  {684,1},	{649,1},	{723,2}
};

static struct patval fuseki9162[] = {
  {645,1},	{684,1},	{719,2}
};

static struct patval fuseki9163[] = {
  {684,1},	{723,1},	{649,2}
};

static struct patval fuseki9164[] = {
  {683,1},	{684,2}
};

static struct patval fuseki9165[] = {
  {721,1},	{684,2}
};

static struct patval fuseki9166[] = {
  {646,1},	{608,2}
};

static struct patval fuseki9167[] = {
  {722,1},	{760,2}
};

static struct patval fuseki9168[] = {
  {720,1},	{756,2}
};

static struct patval fuseki9169[] = {
  {721,1}
};

static struct patval fuseki9170[] = {
  {721,1}
};

static struct patval fuseki9171[] = {
  {683,1}
};

static struct patval fuseki9172[] = {
  {721,1}
};

static struct patval fuseki9173[] = {
  {685,1}
};

static struct patval fuseki9174[] = {
  {685,1}
};

static struct patval fuseki9175[] = {
  {757,1},	{648,2}
};

static struct patval fuseki9176[] = {
  {609,1},	{722,2}
};

static struct patval fuseki9177[] = {
  {609,1},	{722,2}
};

static struct patval fuseki9178[] = {
  {723,1},	{646,2}
};

static struct patval fuseki9179[] = {
  {611,1},	{720,2}
};

static struct patval fuseki9180[] = {
  {649,1},	{720,2}
};

static struct patval fuseki9181[] = {
  {759,1},	{646,2}
};

static struct patval fuseki9182[] = {
  {649,1},	{720,2}
};

static struct patval fuseki9183[] = {
  {722,1},	{646,2}
};

static struct patval fuseki9184[] = {
  {722,1},	{646,2}
};

static struct patval fuseki9185[] = {
  {646,1},	{722,2}
};

static struct patval fuseki9186[] = {
  {646,1},	{722,2}
};

static struct patval fuseki9187[] = {
  {720,1},	{648,2}
};

static struct patval fuseki9188[] = {
  {646,1},	{722,2}
};

static struct patval fuseki9189[] = {
  {646,1},	{722,2}
};

static struct patval fuseki9190[] = {
  {646,1},	{722,2}
};

static struct patval fuseki9191[] = {
  {683,1},	{684,1},	{720,2}
};

static struct patval fuseki9192[] = {
  {684,1},	{647,1},	{646,2}
};

static struct patval fuseki9193[] = {
  {684,1},	{721,1},	{722,2}
};

static struct patval fuseki9194[] = {
  {684,1},	{721,1},	{722,2}
};

static struct patval fuseki9195[] = {
  {684,1},	{685,1},	{722,2}
};

static struct patval fuseki9196[] = {
  {684,1},	{649,1},	{612,2}
};

static struct patval fuseki9197[] = {
  {684,1},	{649,1},	{612,2}
};

static struct patval fuseki9198[] = {
  {684,1},	{645,1},	{608,2}
};

static struct patval fuseki9199[] = {
  {684,1},	{757,1},	{756,2}
};

static struct patval fuseki9200[] = {
  {646,1},	{759,2}
};

static struct patval fuseki9201[] = {
  {720,1},	{611,2}
};

static struct patval fuseki9202[] = {
  {646,1},	{723,2}
};

static struct patval fuseki9203[] = {
  {646,1},	{759,2}
};

static struct patval fuseki9204[] = {
  {758,1},	{684,1},	{719,2}
};

static struct patval fuseki9205[] = {
  {682,1},	{684,1},	{757,2}
};

static struct patval fuseki9206[] = {
  {684,1},	{758,1},	{723,2}
};

static struct patval fuseki9207[] = {
  {684,1},	{686,1},	{611,2}
};

static struct patval fuseki9208[] = {
  {684,1},	{758,1},	{723,2}
};

static struct patval fuseki9209[] = {
  {723,1},	{757,1},	{645,2}
};

static struct patval fuseki9210[] = {
  {719,1},	{759,1},	{649,2}
};

static struct patval fuseki9211[] = {
  {649,1},	{759,1},	{609,2}
};

static struct patval fuseki9212[] = {
  {719,1},	{759,1},	{649,2}
};

static struct patval fuseki9213[] = {
  {723,1},	{757,1},	{645,2}
};

static struct patval fuseki9214[] = {
  {649,1},	{722,2}
};

static struct patval fuseki9215[] = {
  {759,1},	{720,2}
};

static struct patval fuseki9216[] = {
  {649,1},	{722,2}
};

static struct patval fuseki9217[] = {
  {759,1},	{720,2}
};

static struct patval fuseki9218[] = {
  {757,1},	{722,2}
};

static struct patval fuseki9219[] = {
  {723,1},	{648,2}
};

static struct patval fuseki9220[] = {
  {608,1},	{645,1},	{646,2}
};

static struct patval fuseki9221[] = {
  {756,1},	{757,1},	{720,2}
};

static struct patval fuseki9222[] = {
  {645,1},	{684,1},	{609,2}
};

static struct patval fuseki9223[] = {
  {719,1},	{684,1},	{757,2}
};

static struct patval fuseki9224[] = {
  {684,1},	{723,1},	{759,2}
};

static struct patval fuseki9225[] = {
  {684,1},	{759,1},	{723,2}
};

static struct patval fuseki9226[] = {
  {683,1},	{757,2}
};

static struct patval fuseki9227[] = {
  {647,1},	{649,2}
};

static struct patval fuseki9228[] = {
  {721,1},	{719,2}
};

static struct patval fuseki9229[] = {
  {647,1},	{649,2}
};

static struct patval fuseki9230[] = {
  {683,1},	{609,2}
};

static struct patval fuseki9231[] = {
  {612,1},	{719,2}
};

static struct patval fuseki9232[] = {
  {756,1},	{611,2}
};

static struct patval fuseki9233[] = {
  {612,1},	{719,2}
};

static struct patval fuseki9234[] = {
  {756,1},	{611,2}
};

static struct patval fuseki9235[] = {
  {612,1},	{757,2}
};

static struct patval fuseki9236[] = {
  {612,1},	{757,2}
};

static struct patval fuseki9237[] = {
  {756,1},	{723,1},	{611,2}
};

static struct patval fuseki9238[] = {
  {719,1},	{760,1},	{609,2}
};

static struct patval fuseki9239[] = {
  {756,1},	{609,1},	{649,2}
};

static struct patval fuseki9240[] = {
  {756,1},	{609,1},	{649,2}
};

static struct patval fuseki9241[] = {
  {645,1},	{612,1},	{757,2}
};

static struct patval fuseki9242[] = {
  {684,1},	{723,1},	{612,2}
};

static struct patval fuseki9243[] = {
  {757,1},	{684,1},	{760,2}
};

static struct patval fuseki9244[] = {
  {760,1},	{719,2}
};

static struct patval fuseki9245[] = {
  {760,1},	{719,2}
};

static struct patval fuseki9246[] = {
  {760,1},	{719,2}
};

static struct patval fuseki9247[] = {
  {612,1},	{759,2}
};

static struct patval fuseki9248[] = {
  {684,1},	{720,1},	{683,2}
};

static struct patval fuseki9249[] = {
  {684,1},	{648,1},	{685,2}
};

static struct patval fuseki9250[] = {
  {756,1},	{723,1},	{612,2}
};

static struct patval fuseki9251[] = {
  {756,1},	{609,1},	{612,2}
};

static struct patval fuseki9252[] = {
  {756,1},	{609,1},	{612,2}
};

static struct patval fuseki9253[] = {
  {610,1},	{684,1},	{758,2}
};

static struct patval fuseki9254[] = {
  {610,1},	{684,1},	{758,2}
};

static struct patval fuseki9255[] = {
  {610,1},	{684,1},	{758,2}
};

static struct patval fuseki9256[] = {
  {610,1},	{684,1},	{758,2}
};

static struct patval fuseki9257[] = {
  {609,1},	{612,1},	{684,2},	{686,2}
};

static struct patval fuseki9258[] = {
  {608,1},	{611,1},	{684,2},	{682,2}
};

static struct patval fuseki9259[] = {
  {609,1},	{612,1},	{684,2},	{686,2}
};

static struct patval fuseki9260[] = {
  {609,1},	{612,1},	{684,2},	{686,2}
};

static struct patval fuseki9261[] = {
  {723,1},	{758,1},	{649,2},	{684,2}
};

static struct patval fuseki9262[] = {
  {723,1},	{758,1},	{649,2},	{684,2}
};

static struct patval fuseki9263[] = {
  {686,1},	{611,1},	{684,2},	{609,2}
};

static struct patval fuseki9264[] = {
  {723,1},	{758,1},	{649,2},	{684,2}
};

static struct patval fuseki9265[] = {
  {686,1},	{759,1},	{684,2},	{757,2}
};

static struct patval fuseki9266[] = {
  {719,1},	{611,2}
};

static struct patval fuseki9267[] = {
  {649,1},	{757,2}
};

static struct patval fuseki9268[] = {
  {645,1},	{759,2}
};

static struct patval fuseki9269[] = {
  {649,1},	{757,2}
};

static struct patval fuseki9270[] = {
  {609,1},	{723,2}
};

static struct patval fuseki9271[] = {
  {760,1},	{612,1},	{684,2}
};

static struct patval fuseki9272[] = {
  {608,1},	{756,1},	{684,2}
};

static struct patval fuseki9273[] = {
  {723,1},	{611,1},	{720,2}
};

static struct patval fuseki9274[] = {
  {684,1},	{610,1},	{609,2}
};

static struct patval fuseki9275[] = {
  {684,1},	{686,1},	{649,2}
};

static struct patval fuseki9276[] = {
  {610,1},	{684,1},	{611,2}
};

static struct patval fuseki9277[] = {
  {612,1},	{684,1},	{756,2}
};

static struct patval fuseki9278[] = {
  {612,1},	{684,1},	{756,2}
};

static struct patval fuseki9279[] = {
  {608,1},	{684,1},	{760,2}
};

static struct patval fuseki9280[] = {
  {612,1},	{684,1},	{756,2}
};

static struct patval fuseki9281[] = {
  {609,1},	{720,1},	{611,2},	{723,2}
};

static struct patval fuseki9282[] = {
  {609,1},	{720,1},	{611,2},	{723,2}
};

static struct patval fuseki9283[] = {
  {722,1},	{719,1},	{611,2},	{645,2}
};

static struct patval fuseki9284[] = {
  {722,1},	{611,1},	{609,2},	{719,2}
};

static struct patval fuseki9285[] = {
  {646,1},	{757,1},	{759,2},	{649,2}
};

static struct patval fuseki9286[] = {
  {686,1},	{611,2}
};

static struct patval fuseki9287[] = {
  {610,1},	{649,2}
};

static struct patval fuseki9288[] = {
  {610,1},	{649,2}
};

static struct patval fuseki9289[] = {
  {721,1},	{722,1},	{759,2},	{760,2}
};

static struct patval fuseki9290[] = {
  {721,1},	{720,1},	{757,2},	{756,2}
};

static struct patval fuseki9291[] = {
  {648,1},	{685,1},	{612,2},	{649,2}
};

static struct patval fuseki9292[] = {
  {684,1},	{646,2}
};

static struct patval fuseki9293[] = {
  {684,1},	{720,2}
};

static struct patval fuseki9294[] = {
  {684,1},	{648,2}
};

static struct patval fuseki9295[] = {
  {610,1}
};

static struct patval fuseki9296[] = {
  {682,1}
};

static struct patval fuseki9297[] = {
  {686,1}
};

static struct patval fuseki9298[] = {
  {755,1}
};

static struct patval fuseki9299[] = {
  {793,1}
};

static struct patval fuseki9300[] = {
  {645,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9301[] = {
  {723,1},	{756,1},	{612,2},	{608,2}
};

static struct patval fuseki9302[] = {
  {612,1},	{759,1},	{756,2},	{608,2}
};

static struct patval fuseki9303[] = {
  {645,1},	{612,1},	{756,2},	{760,2}
};

static struct patval fuseki9304[] = {
  {719,1},	{756,2}
};

static struct patval fuseki9305[] = {
  {757,1},	{756,2}
};

static struct patval fuseki9306[] = {
  {719,1},	{756,2}
};

static struct patval fuseki9307[] = {
  {759,1},	{760,2}
};

static struct patval fuseki9308[] = {
  {720,1},	{722,2}
};

static struct patval fuseki9309[] = {
  {720,1},	{722,2}
};

static struct patval fuseki9310[] = {
  {648,1},	{646,2}
};

static struct patval fuseki9311[] = {
  {648,1},	{722,2}
};

static struct patval fuseki9312[] = {
  {612,1},	{722,2}
};

static struct patval fuseki9313[] = {
  {608,1},	{648,2}
};

static struct patval fuseki9314[] = {
  {760,1},	{648,2}
};

static struct patval fuseki9315[] = {
  {611,1},	{757,2}
};

static struct patval fuseki9316[] = {
  {757,1},	{611,2}
};

static struct patval fuseki9317[] = {
  {719,1},	{649,2}
};

static struct patval fuseki9318[] = {
  {649,1},	{719,2}
};

static struct patval fuseki9319[] = {
  {684,1},	{648,1},	{649,2}
};

static struct patval fuseki9320[] = {
  {684,1},	{648,1},	{611,2}
};

static struct patval fuseki9321[] = {
  {720,1},	{684,1},	{757,2}
};

static struct patval fuseki9322[] = {
  {684,1},	{686,1},	{612,2},	{760,2}
};

static struct patval fuseki9323[] = {
  {684,1},	{686,1},	{612,2},	{760,2}
};

static struct patval fuseki9324[] = {
  {758,1},	{684,1},	{756,2},	{760,2}
};

static struct patval fuseki9325[] = {
  {684,1},	{682,1},	{756,2},	{608,2}
};

static struct patval fuseki9326[] = {
  {718,1},	{756,1},	{719,2},	{684,2}
};

static struct patval fuseki9327[] = {
  {650,1},	{612,1},	{649,2},	{684,2}
};

static struct patval fuseki9328[] = {
  {650,1},	{612,1},	{649,2},	{684,2}
};

static struct patval fuseki9329[] = {
  {684,1},	{723,1},	{758,2}
};

static struct patval fuseki9330[] = {
  {649,1},	{684,1},	{610,2}
};

static struct patval fuseki9331[] = {
  {645,1},	{684,1},	{610,2}
};

static struct patval fuseki9332[] = {
  {609,1},	{612,1},	{720,2}
};

static struct patval fuseki9333[] = {
  {756,1},	{759,1},	{648,2}
};

static struct patval fuseki9334[] = {
  {756,1},	{759,1},	{648,2}
};

static struct patval fuseki9335[] = {
  {723,1},	{611,1},	{756,2},	{608,2}
};

static struct patval fuseki9336[] = {
  {649,1},	{759,1},	{756,2},	{608,2}
};

static struct patval fuseki9337[] = {
  {719,1},	{609,1},	{612,2},	{760,2}
};

static struct patval fuseki9338[] = {
  {723,1},	{611,1},	{757,2},	{608,2}
};

static struct patval fuseki9339[] = {
  {645,1},	{611,1},	{756,2},	{723,2}
};

static struct patval fuseki9340[] = {
  {756,1},	{684,1},	{611,2}
};

static struct patval fuseki9341[] = {
  {612,1},	{684,1},	{719,2}
};

static struct patval fuseki9342[] = {
  {612,1},	{684,1},	{719,2}
};

static struct patval fuseki9343[] = {
  {612,1},	{684,1},	{757,2}
};

static struct patval fuseki9344[] = {
  {719,1},	{758,1},	{684,2}
};

static struct patval fuseki9345[] = {
  {686,1},	{759,1},	{684,2}
};

static struct patval fuseki9346[] = {
  {612,1},	{756,1},	{608,2}
};

static struct patval fuseki9347[] = {
  {608,1},	{760,1},	{756,2}
};

static struct patval fuseki9348[] = {
  {722,1},	{611,1},	{608,2}
};

static struct patval fuseki9349[] = {
  {720,1},	{723,1},	{612,2}
};

static struct patval fuseki9350[] = {
  {722,1},	{611,1},	{608,2}
};

static struct patval fuseki9351[] = {
  {759,1},	{648,1},	{756,2}
};

static struct patval fuseki9352[] = {
  {682,1},	{684,1},	{758,2}
};

static struct patval fuseki9353[] = {
  {682,1},	{684,1},	{610,2}
};

static struct patval fuseki9354[] = {
  {685,1},	{720,2}
};

static struct patval fuseki9355[] = {
  {685,1},	{720,2}
};

static struct patval fuseki9356[] = {
  {647,1},	{684,1},	{685,2}
};

static struct patval fuseki9357[] = {
  {684,1},	{647,1},	{683,2}
};

static struct patval fuseki9358[] = {
  {609,1},	{684,1},	{759,2}
};

static struct patval fuseki9359[] = {
  {757,1},	{684,1},	{611,2}
};

static struct patval fuseki9360[] = {
  {646,1},	{683,1},	{647,2},	{684,2}
};

static struct patval fuseki9361[] = {
  {722,1},	{685,1},	{721,2},	{684,2}
};

static struct patval fuseki9362[] = {
  {722,1},	{685,1},	{721,2},	{684,2}
};

static struct patval fuseki9363[] = {
  {608,1},	{684,1},	{756,2}
};

static struct patval fuseki9364[] = {
  {608,1},	{684,1},	{612,2}
};

static struct patval fuseki9365[] = {
  {608,1},	{684,1},	{756,2}
};

static struct patval fuseki9366[] = {
  {683,1},	{721,1},	{684,2},	{720,2}
};

static struct patval fuseki9367[] = {
  {683,1},	{721,1},	{684,2},	{720,2}
};

static struct patval fuseki9368[] = {
  {683,1},	{721,1},	{684,2},	{720,2}
};

static struct patval fuseki9369[] = {
  {649,1},	{648,1},	{685,2},	{684,2}
};

static struct patval fuseki9370[] = {
  {719,1},	{720,1},	{683,2},	{684,2}
};

static struct patval fuseki9371[] = {
  {608,1},	{756,1},	{611,2}
};

static struct patval fuseki9372[] = {
  {608,1},	{756,1},	{759,2}
};

static struct patval fuseki9373[] = {
  {608,1},	{756,1},	{611,2}
};

static struct patval fuseki9374[] = {
  {649,1},	{722,1},	{684,2}
};

static struct patval fuseki9375[] = {
  {645,1},	{720,1},	{684,2}
};

static struct patval fuseki9376[] = {
  {723,1},	{612,1},	{684,2},	{609,2}
};

static struct patval fuseki9377[] = {
  {723,1},	{612,1},	{684,2},	{609,2}
};

static struct patval fuseki9378[] = {
  {720,1},	{719,2}
};

static struct patval fuseki9379[] = {
  {720,1},	{757,2}
};

static struct patval fuseki9380[] = {
  {608,1},	{649,1},	{719,2}
};

static struct patval fuseki9381[] = {
  {645,1},	{612,1},	{723,2}
};

static struct patval fuseki9382[] = {
  {609,1},	{757,1},	{611,2},	{723,2}
};

static struct patval fuseki9383[] = {
  {645,1},	{649,1},	{757,2},	{723,2}
};

static struct patval fuseki9384[] = {
  {645,1},	{723,1},	{757,2}
};

static struct patval fuseki9385[] = {
  {611,1},	{757,1},	{645,2}
};

static struct patval fuseki9386[] = {
  {611,1},	{757,1},	{645,2}
};

static struct patval fuseki9387[] = {
  {646,1},	{756,2}
};

static struct patval fuseki9388[] = {
  {648,1},	{760,2}
};

static struct patval fuseki9389[] = {
  {756,1},	{760,1},	{611,2}
};

static struct patval fuseki9390[] = {
  {760,1},	{758,1},	{686,2},	{684,2}
};

static struct patval fuseki9391[] = {
  {758,1},	{756,1},	{684,2},	{682,2}
};

static struct patval fuseki9392[] = {
  {610,1},	{612,1},	{684,2},	{686,2}
};

static struct patval fuseki9393[] = {
  {648,1},	{609,1},	{684,2},	{645,2}
};

static struct patval fuseki9394[] = {
  {648,1},	{609,1},	{684,2},	{645,2}
};

static struct patval fuseki9395[] = {
  {723,1},	{758,1},	{684,2},	{610,2}
};

static struct patval fuseki9396[] = {
  {686,1},	{611,1},	{684,2},	{682,2}
};

static struct patval fuseki9397[] = {
  {686,1},	{759,1},	{684,2},	{682,2}
};

static struct patval fuseki9398[] = {
  {608,1},	{760,1},	{612,2},	{756,2}
};

static struct patval fuseki9399[] = {
  {608,1},	{760,1},	{612,2},	{756,2}
};

static struct patval fuseki9400[] = {
  {612,1},	{756,1},	{608,2},	{760,2}
};

static struct patval fuseki9401[] = {
  {723,1},	{756,1},	{612,2},	{645,2}
};

static struct patval fuseki9402[] = {
  {645,1},	{612,1},	{756,2},	{723,2}
};

static struct patval fuseki9403[] = {
  {608,1},	{612,1},	{720,2}
};

static struct patval fuseki9404[] = {
  {760,1},	{612,1},	{646,2}
};

static struct patval fuseki9405[] = {
  {760,1},	{757,1},	{609,2}
};

static struct patval fuseki9406[] = {
  {760,1},	{649,1},	{645,2}
};

static struct patval fuseki9407[] = {
  {756,1},	{722,1},	{648,2}
};

static struct patval fuseki9408[] = {
  {719,1},	{646,1},	{684,2},	{758,2}
};

static struct patval fuseki9409[] = {
  {719,1},	{646,1},	{684,2},	{758,2}
};

static struct patval fuseki9410[] = {
  {757,1},	{684,1},	{758,2}
};

static struct patval fuseki9411[] = {
  {611,1},	{684,1},	{610,2}
};

static struct patval fuseki9412[] = {
  {759,1},	{758,1},	{722,2},	{684,2}
};

static struct patval fuseki9413[] = {
  {645,1},	{682,1},	{646,2},	{684,2}
};

static struct patval fuseki9414[] = {
  {610,1},	{611,1},	{684,2},	{648,2}
};

static struct patval fuseki9415[] = {
  {683,1},	{720,1},	{684,2}
};

static struct patval fuseki9416[] = {
  {646,1},	{647,1},	{684,2}
};

static struct patval fuseki9417[] = {
  {649,1},	{609,1},	{759,2},	{719,2}
};

static struct patval fuseki9418[] = {
  {647,1},	{721,2}
};

static struct patval fuseki9419[] = {
  {721,1},	{647,2}
};

static struct patval fuseki9420[] = {
  {760,1},	{759,1},	{723,2},	{684,2}
};

static struct patval fuseki9421[] = {
  {760,1},	{759,1},	{723,2},	{684,2}
};

static struct patval fuseki9422[] = {
  {608,1},	{760,1},	{649,2}
};

static struct patval fuseki9423[] = {
  {756,1},	{612,1},	{720,2}
};

static struct patval fuseki9424[] = {
  {756,1},	{612,1},	{648,2}
};

static struct patval fuseki9425[] = {
  {756,1},	{612,1},	{758,2},	{684,2}
};

static struct patval fuseki9426[] = {
  {608,1},	{760,1},	{686,2},	{684,2}
};

static struct patval fuseki9427[] = {
  {608,1},	{760,1},	{686,2},	{684,2}
};

static struct patval fuseki9428[] = {
  {760,1},	{611,1},	{756,2}
};

static struct patval fuseki9429[] = {
  {756,1},	{609,1},	{760,2}
};

static struct patval fuseki9430[] = {
  {608,1},	{649,1},	{756,2}
};

static struct patval fuseki9431[] = {
  {723,1},	{757,1},	{608,2}
};

static struct patval fuseki9432[] = {
  {723,1},	{611,1},	{756,2}
};

static struct patval fuseki9433[] = {
  {721,1},	{611,2}
};

static struct patval fuseki9434[] = {
  {608,1},	{760,1},	{684,2},	{719,2}
};

static struct patval fuseki9435[] = {
  {608,1},	{760,1},	{684,2},	{757,2}
};

static struct patval fuseki9436[] = {
  {608,1},	{760,1},	{649,2},	{684,2}
};

static struct patval fuseki9437[] = {
  {719,1},	{609,1},	{760,1},	{722,2},
  {611,2}
};

static struct patval fuseki9438[] = {
  {608,1},	{723,1},	{757,1},	{649,2},
  {646,2}
};

static struct patval fuseki9439[] = {
  {608,1},	{649,1},	{759,1},	{757,2},
  {646,2}
};

static struct patval fuseki9440[] = {
  {756,1},	{723,1},	{611,1},	{720,2},
  {609,2}
};

static struct patval fuseki9441[] = {
  {722,1},	{648,1},	{646,2}
};

static struct patval fuseki9442[] = {
  {720,1},	{723,1},	{648,2}
};

static struct patval fuseki9443[] = {
  {609,1},	{720,1},	{648,2}
};

static struct patval fuseki9444[] = {
  {760,1},	{682,1},	{756,1},	{612,2},
  {608,2}
};

static struct patval fuseki9445[] = {
  {757,1},	{723,1},	{612,2}
};

static struct patval fuseki9446[] = {
  {719,1},	{609,1},	{612,2}
};

static struct patval fuseki9447[] = {
  {646,1},	{649,1},	{720,2},	{760,2}
};

static struct patval fuseki9448[] = {
  {646,1},	{649,1},	{720,2},	{760,2}
};

static struct patval fuseki9449[] = {
  {649,1},	{609,1},	{722,2},	{719,2}
};

static struct patval fuseki9450[] = {
  {645,1},	{611,1},	{720,2},	{723,2}
};

static struct patval fuseki9451[] = {
  {608,1},	{611,1},	{756,2},	{723,2}
};

static struct patval fuseki9452[] = {
  {646,1},	{721,2}
};

static struct patval fuseki9453[] = {
  {756,1},	{759,1},	{612,2}
};

static struct patval fuseki9454[] = {
  {645,1},	{756,1},	{612,2}
};

static struct patval fuseki9455[] = {
  {760,1},	{757,1},	{608,2}
};

static struct patval fuseki9456[] = {
  {612,1},	{722,1},	{719,2}
};

static struct patval fuseki9457[] = {
  {608,1},	{720,1},	{723,2}
};

static struct patval fuseki9458[] = {
  {720,1},	{760,1},	{649,2}
};

static struct patval fuseki9459[] = {
  {723,1},	{611,1},	{646,2}
};

static struct patval fuseki9460[] = {
  {759,1},	{684,1},	{720,2}
};

static struct patval fuseki9461[] = {
  {645,1},	{684,1},	{720,2}
};

static struct patval fuseki9462[] = {
  {685,1},	{720,1},	{684,1},	{721,2},
  {683,2}
};

static struct patval fuseki9463[] = {
  {647,1},	{684,1},	{685,1},	{648,2},
  {649,2}
};

static struct patval fuseki9464[] = {
  {684,1},	{647,1},	{683,1},	{646,2},
  {645,2}
};

static struct patval fuseki9465[] = {
  {647,1},	{684,1},	{685,1},	{648,2},
  {649,2}
};

static struct patval fuseki9466[] = {
  {685,1},	{721,1},	{648,2},	{684,2}
};

static struct patval fuseki9467[] = {
  {685,1},	{721,1},	{684,2},	{720,2}
};

static struct patval fuseki9468[] = {
  {684,1},	{646,1},	{682,2}
};

static struct patval fuseki9469[] = {
  {649,1},	{759,1},	{610,2}
};

static struct patval fuseki9470[] = {
  {723,1},	{612,1},	{684,2},	{756,2}
};

static struct patval fuseki9471[] = {
  {756,1},	{612,1},	{611,1},	{648,2},
  {647,2}
};

static struct patval fuseki9472[] = {
  {723,1},	{719,1},	{649,2},	{608,2}
};

static struct patval fuseki9473[] = {
  {759,1},	{611,1},	{609,2},	{756,2}
};

static struct patval fuseki9474[] = {
  {756,1},	{609,1},	{611,2}
};

static struct patval fuseki9475[] = {
  {609,1},	{720,1},	{649,2}
};

static struct patval fuseki9476[] = {
  {719,1},	{760,1},	{758,2}
};

static struct patval fuseki9477[] = {
  {645,1},	{609,1},	{611,2}
};

static struct patval fuseki9478[] = {
  {611,1},	{649,1},	{648,2}
};

static struct patval fuseki9479[] = {
  {611,1},	{647,1},	{684,2},	{610,2}
};

static struct patval fuseki9480[] = {
  {609,1},	{647,1},	{610,2},	{684,2}
};

static struct patval fuseki9481[] = {
  {685,1},	{649,2}
};

static struct patval fuseki9482[] = {
  {721,1},	{759,2}
};

static struct patval fuseki9483[] = {
  {646,1},	{757,1},	{612,2}
};

static struct patval fuseki9484[] = {
  {723,1},	{720,1},	{608,2}
};

static struct patval fuseki9485[] = {
  {757,1},	{611,1},	{722,2}
};

static struct patval fuseki9486[] = {
  {609,1},	{649,1},	{757,2},	{760,2}
};

static struct patval fuseki9487[] = {
  {760,1},	{757,1},	{684,2},	{719,2}
};

static struct patval fuseki9488[] = {
  {609,1},	{648,1},	{720,2}
};

static struct patval fuseki9489[] = {
  {682,1},	{686,1},	{684,1},	{612,2},
  {609,2}
};

static struct patval fuseki9490[] = {
  {645,1},	{756,1},	{759,2}
};

static struct patval fuseki9491[] = {
  {756,1},	{684,1},	{648,2}
};

static struct patval fuseki9492[] = {
  {756,1},	{684,1},	{648,2}
};

static struct patval fuseki9493[] = {
  {723,1},	{611,1},	{758,1},	{756,2},
  {608,2}
};

static struct patval fuseki9494[] = {
  {686,1},	{719,1},	{759,1},	{612,2},
  {608,2}
};

static struct patval fuseki9495[] = {
  {757,1},	{719,2}
};

static struct patval fuseki9496[] = {
  {608,1},	{719,1},	{612,1},	{756,2},
  {760,2}
};

static struct patval fuseki9497[] = {
  {719,1},	{757,1},	{720,2},	{684,2}
};

static struct patval fuseki9498[] = {
  {648,1},	{758,1},	{756,2}
};

static struct patval fuseki9499[] = {
  {648,1},	{720,1},	{756,2}
};

static struct patval fuseki9500[] = {
  {648,1},	{720,1},	{756,2}
};

static struct patval fuseki9501[] = {
  {684,1},	{647,1},	{720,1},	{683,2},
  {646,2}
};

static struct patval fuseki9502[] = {
  {720,1},	{684,1},	{685,1},	{721,2},
  {722,2}
};

static struct patval fuseki9503[] = {
  {722,1},	{684,1},	{646,2}
};

static struct patval fuseki9504[] = {
  {686,1},	{611,1},	{758,2},	{684,2}
};

static struct patval fuseki9505[] = {
  {723,1},	{720,1},	{646,2}
};

static struct patval fuseki9506[] = {
  {723,1},	{720,1},	{646,2}
};

static struct patval fuseki9507[] = {
  {609,1},	{684,1},	{758,1},	{611,2},
  {686,2}
};

static struct patval fuseki9508[] = {
  {684,1},	{760,1},	{649,2}
};

static struct patval fuseki9509[] = {
  {719,1},	{648,1},	{759,2}
};

static struct patval fuseki9510[] = {
  {719,1},	{648,1},	{759,2}
};

static struct patval fuseki9511[] = {
  {649,1},	{682,1},	{684,1},	{611,2},
  {608,2}
};

static struct patval fuseki9512[] = {
  {684,1},	{686,1},	{758,2},	{723,2}
};

static struct patval fuseki9513[] = {
  {682,1},	{684,1},	{719,2},	{758,2}
};

static struct patval fuseki9514[] = {
  {683,1},	{608,2}
};

static struct patval fuseki9515[] = {
  {649,1},	{759,1},	{684,2},	{719,2}
};

static struct patval fuseki9516[] = {
  {759,1},	{686,1},	{612,2}
};

static struct patval fuseki9517[] = {
  {719,1},	{758,1},	{760,2}
};

static struct patval fuseki9518[] = {
  {612,1},	{611,1},	{648,2},	{684,2}
};

static struct patval fuseki9519[] = {
  {608,1},	{760,1},	{723,2}
};

static struct patval fuseki9520[] = {
  {723,1},	{759,1},	{608,2},	{760,2}
};

static struct patval fuseki9521[] = {
  {608,1},	{649,1},	{722,2}
};

static struct patval fuseki9522[] = {
  {646,1},	{721,1},	{723,2}
};

static struct patval fuseki9523[] = {
  {612,1},	{684,1},	{682,2}
};

static struct patval fuseki9524[] = {
  {682,1},	{756,1},	{760,1},	{758,2},
  {684,2}
};

static struct patval fuseki9525[] = {
  {646,1},	{610,1},	{684,1},	{647,2},
  {611,2}
};

static struct patval fuseki9526[] = {
  {756,1},	{612,1},	{684,2}
};

static struct patval fuseki9527[] = {
  {649,1},	{759,1},	{683,2}
};

static struct patval fuseki9528[] = {
  {612,1},	{759,1},	{609,2},	{719,2}
};

static struct patval fuseki9529[] = {
  {608,1},	{760,1},	{796,1},	{723,2},
  {759,2}
};

static struct patval fuseki9530[] = {
  {684,1},	{758,2}
};

static struct patval fuseki9531[] = {
  {684,1},	{758,2}
};

static struct patval fuseki9532[] = {
  {719,1},	{684,1},	{649,1},	{758,2},
  {723,2}
};

static struct patval fuseki9533[] = {
  {684,1},	{612,1},	{648,2}
};

static struct patval fuseki9534[] = {
  {759,1},	{648,1},	{683,2}
};

static struct patval fuseki9535[] = {
  {609,1},	{720,1},	{685,2}
};

static struct patval fuseki9536[] = {
  {757,1},	{649,1},	{684,2}
};

static struct patval fuseki9537[] = {
  {719,1},	{720,1},	{756,2},	{612,2}
};

static struct patval fuseki9538[] = {
  {648,1},	{722,1},	{649,2}
};

static struct patval fuseki9539[] = {
  {608,1},	{684,1},	{682,2}
};

static struct patval fuseki9540[] = {
  {608,1},	{719,1},	{684,2}
};

static struct patval fuseki9541[] = {
  {756,1},	{759,1},	{684,2}
};

static struct patval fuseki9542[] = {
  {756,1},	{720,1},	{757,2},	{684,2}
};

static struct patval fuseki9543[] = {
  {723,1},	{722,1},	{686,2},	{684,2}
};

static struct patval fuseki9544[] = {
  {649,1},	{648,1},	{684,2},	{686,2}
};

static struct patval fuseki9545[] = {
  {612,1},	{756,1},	{757,1},	{720,2},
  {719,2}
};

static struct patval fuseki9546[] = {
  {757,1},	{684,1},	{723,1},	{759,2},
  {760,2}
};

static struct patval fuseki9547[] = {
  {722,1},	{611,1},	{719,2},	{608,2}
};

static struct patval fuseki9548[] = {
  {682,1},	{684,1},	{720,1},	{757,2},
  {719,2}
};

static struct patval fuseki9549[] = {
  {608,1},	{611,1},	{723,2}
};

static struct patval fuseki9550[] = {
  {757,1},	{684,1},	{649,2}
};

static struct patval fuseki9551[] = {
  {756,1},	{609,1},	{684,1},	{612,2},
  {723,2}
};

static struct patval fuseki9552[] = {
  {756,1},	{758,1},	{684,2},	{612,2}
};

static struct patval fuseki9553[] = {
  {756,1},	{722,1},	{646,2}
};

static struct patval fuseki9554[] = {
  {612,1},	{722,1},	{646,2}
};

static struct patval fuseki9555[] = {
  {719,1},	{684,1},	{757,2},	{649,2}
};

static struct patval fuseki9556[] = {
  {684,1},	{647,1},	{646,2},	{719,2}
};

static struct patval fuseki9557[] = {
  {719,1},	{646,1},	{721,2}
};

static struct patval fuseki9558[] = {
  {719,1},	{646,1},	{721,2}
};

static struct patval fuseki9559[] = {
  {608,1},	{612,1},	{756,2},	{723,2}
};

static struct patval fuseki9560[] = {
  {756,1},	{611,1},	{684,2},	{609,2}
};

static struct patval fuseki9561[] = {
  {646,1},	{721,1},	{647,2}
};

static struct patval fuseki9562[] = {
  {646,1},	{721,1},	{647,2}
};

static struct patval fuseki9563[] = {
  {684,1},	{686,1},	{611,2},	{760,2}
};

static struct patval fuseki9564[] = {
  {608,1},	{611,1},	{685,2}
};

static struct patval fuseki9565[] = {
  {759,1},	{611,1},	{756,2},	{608,2}
};

static struct patval fuseki9566[] = {
  {570,1}
};

static struct patval fuseki9567[] = {
  {721,1},	{722,1},	{759,2},	{723,2}
};

static struct patval fuseki9568[] = {
  {651,1}
};

static struct patval fuseki9569[] = {
  {719,1},	{722,1},	{649,2}
};

static struct patval fuseki9570[] = {
  {757,1},	{723,1},	{611,2}
};

static struct patval fuseki9571[] = {
  {645,1},	{757,1},	{649,2}
};

static struct patval fuseki9572[] = {
  {756,1},	{722,1},	{684,2}
};

static struct patval fuseki9573[] = {
  {760,1},	{722,2}
};

static struct patval fuseki9574[] = {
  {723,1},	{684,1},	{610,2}
};

static struct patval fuseki9575[] = {
  {724,1},	{756,1},	{612,1},	{760,2},
  {608,2}
};

static struct patval fuseki9576[] = {
  {756,1},	{760,1},	{758,2},	{684,2}
};

static struct patval fuseki9577[] = {
  {719,1},	{612,1},	{722,2}
};

static struct patval fuseki9578[] = {
  {646,1},	{760,1},	{722,2},	{684,2}
};

static struct patval fuseki9579[] = {
  {684,1},	{685,1},	{723,1},	{722,2},
  {760,2}
};

static struct patval fuseki9580[] = {
  {719,1},	{610,1},	{684,1},	{758,2},
  {723,2}
};

static struct patval fuseki9581[] = {
  {645,1},	{612,1},	{684,1},	{719,2},
  {723,2}
};

static struct patval fuseki9582[] = {
  {684,1},	{648,1},	{612,2}
};

static struct patval fuseki9583[] = {
  {610,1},	{612,1},	{684,2}
};

static struct patval fuseki9584[] = {
  {720,1},	{646,1},	{645,2},	{608,2}
};

static struct patval fuseki9585[] = {
  {683,1},	{684,1},	{685,1},	{721,2},
  {722,2}
};

static struct patval fuseki9586[] = {
  {756,1},	{611,1},	{723,2}
};

static struct patval fuseki9587[] = {
  {720,1},	{760,1},	{611,2}
};

static struct patval fuseki9588[] = {
  {646,1},	{612,1},	{759,2}
};

static struct patval fuseki9589[] = {
  {609,1},	{684,1},	{759,1},	{612,2},
  {723,2}
};

static struct patval fuseki9590[] = {
  {722,1},	{758,1},	{721,2},	{684,2}
};

static struct patval fuseki9591[] = {
  {722,1},	{758,1},	{721,2},	{684,2}
};

static struct patval fuseki9592[] = {
  {719,1},	{756,1},	{720,2},	{648,2}
};

static struct patval fuseki9593[] = {
  {719,1},	{756,1},	{720,2},	{648,2}
};

static struct patval fuseki9594[] = {
  {759,1},	{611,1},	{756,2}
};

static struct patval fuseki9595[] = {
  {684,1},	{719,1},	{757,1},	{756,2},
  {718,2}
};

static struct patval fuseki9596[] = {
  {684,1},	{611,1},	{649,1},	{612,2},
  {650,2}
};

static struct patval fuseki9597[] = {
  {760,1},	{611,1},	{609,2},	{756,2}
};

static struct patval fuseki9598[] = {
  {608,1},	{611,1},	{756,2},	{722,2}
};

static struct patval fuseki9599[] = {
  {723,1},	{612,1},	{720,2},	{608,2}
};

static struct patval fuseki9600[] = {
  {645,1},	{649,1},	{647,2}
};

static struct patval fuseki9601[] = {
  {609,1},	{757,1},	{648,2}
};

static struct patval fuseki9602[] = {
  {720,1},	{647,1},	{684,1},	{721,2},
  {685,2}
};

static struct patval fuseki9603[] = {
  {720,1},	{648,1},	{684,2}
};

static struct patval fuseki9604[] = {
  {608,1},	{756,1},	{757,1},	{720,2},
  {721,2}
};

static struct patval fuseki9605[] = {
  {608,1},	{612,1},	{648,2}
};

static struct patval fuseki9606[] = {
  {608,1},	{719,1},	{612,1},	{757,2},
  {723,2}
};

static struct patval fuseki9607[] = {
  {646,1},	{649,1},	{720,2},	{723,2}
};

static struct patval fuseki9608[] = {
  {646,1},	{720,1},	{722,2},	{649,2}
};

static struct patval fuseki9609[] = {
  {723,1},	{758,1},	{759,1},	{722,2},
  {721,2}
};

static struct patval fuseki9610[] = {
  {759,1},	{611,1},	{684,1},	{757,2},
  {682,2}
};

static struct patval fuseki9611[] = {
  {720,1},	{722,1},	{647,2}
};

static struct patval fuseki9612[] = {
  {723,1},	{612,1},	{684,2},	{608,2}
};

static struct patval fuseki9613[] = {
  {684,1},	{721,1},	{611,1},	{722,2},
  {649,2}
};

static struct patval fuseki9614[] = {
  {760,1},	{759,1},	{723,2},	{722,2}
};

static struct patval fuseki9615[] = {
  {645,1},	{610,1},	{684,2},	{723,2}
};

static struct patval fuseki9616[] = {
  {757,1},	{611,1},	{684,2},	{686,2}
};

static struct patval fuseki9617[] = {
  {720,1},	{758,1},	{759,2}
};

static struct patval fuseki9618[] = {
  {719,1},	{684,1},	{720,1},	{683,2},
  {721,2}
};

static struct patval fuseki9619[] = {
  {756,1},	{722,1},	{720,2}
};

static struct patval fuseki9620[] = {
  {682,1},	{758,1},	{684,1},	{756,2},
  {760,2}
};

static struct patval fuseki9621[] = {
  {722,1},	{723,1},	{760,2}
};

static struct patval fuseki9622[] = {
  {684,1},	{687,1},	{649,1},	{650,2},
  {612,2}
};

static struct patval fuseki9623[] = {
  {719,1},	{756,1},	{684,1},	{757,2},
  {722,2}
};

static struct patval fuseki9624[] = {
  {719,1},	{685,1},	{759,2}
};

static struct patval fuseki9625[] = {
  {646,1},	{645,1},	{608,2},	{720,2}
};

static struct patval fuseki9626[] = {
  {645,1},	{612,1},	{684,2}
};

static struct patval fuseki9627[] = {
  {645,1},	{610,1},	{684,2},	{649,2}
};

static struct patval fuseki9628[] = {
  {719,1},	{758,1},	{684,2},	{723,2}
};

static struct patval fuseki9629[] = {
  {759,1},	{648,1},	{645,2}
};

static struct patval fuseki9630[] = {
  {611,1},	{760,2}
};

static struct patval fuseki9631[] = {
  {608,1},	{756,1},	{611,2},	{723,2}
};

static struct patval fuseki9632[] = {
  {685,1},	{721,1},	{684,2},	{647,2}
};

static struct patval fuseki9633[] = {
  {646,1},	{612,1},	{649,2},	{760,2}
};

static struct patval fuseki9634[] = {
  {760,1},	{646,1},	{608,2}
};

static struct patval fuseki9635[] = {
  {760,1},	{612,1},	{647,1},	{756,2},
  {608,2}
};

static struct patval fuseki9636[] = {
  {759,1},	{649,2}
};

static struct patval fuseki9637[] = {
  {759,1},	{684,1},	{719,2}
};

static struct patval fuseki9638[] = {
  {722,1},	{684,1},	{757,2}
};

static struct patval fuseki9639[] = {
  {719,1},	{684,1},	{686,1},	{649,2},
  {759,2}
};

static struct patval fuseki9640[] = {
  {723,1},	{758,1},	{611,2},	{684,2}
};

static struct patval fuseki9641[] = {
  {608,1},	{760,1},	{684,2},	{756,2}
};

static struct patval fuseki9642[] = {
  {608,1},	{612,1},	{759,2},	{686,2}
};

static struct patval fuseki9643[] = {
  {722,1},	{611,1},	{608,2},	{649,2}
};

static struct patval fuseki9644[] = {
  {645,1},	{758,1},	{649,2},	{760,2}
};

static struct patval fuseki9645[] = {
  {608,1},	{760,1},	{720,1},	{649,2},
  {646,2}
};

static struct patval fuseki9646[] = {
  {648,1},	{649,1},	{685,2}
};

static struct patval fuseki9647[] = {
  {648,1},	{611,1},	{684,2},	{612,2}
};

static struct patval fuseki9648[] = {
  {650,1},	{756,1},	{760,1},	{612,2},
  {608,2}
};

static struct patval fuseki9649[] = {
  {646,1},	{648,1},	{760,2}
};

static struct patval fuseki9650[] = {
  {608,1},	{759,1},	{756,2},	{612,2}
};

static struct patval fuseki9651[] = {
  {720,1},	{684,1},	{648,1},	{721,2},
  {685,2}
};

static struct patval fuseki9652[] = {
  {685,1},	{610,1},	{684,2},	{682,2}
};

static struct patval fuseki9653[] = {
  {723,1},	{756,1},	{683,1},	{611,2},
  {645,2}
};

static struct patval fuseki9654[] = {
  {608,1},	{719,1},	{758,1},	{611,2},
  {722,2}
};

static struct patval fuseki9655[] = {
  {684,1},	{685,1},	{686,2}
};

static struct patval fuseki9656[] = {
  {721,1},	{646,1},	{719,2},	{649,2}
};

static struct patval fuseki9657[] = {
  {682,1},	{722,1},	{684,1},	{685,2},
  {610,2}
};

static struct patval fuseki9658[] = {
  {608,1},	{723,1},	{611,2},	{756,2}
};

static struct patval fuseki9659[] = {
  {608,1},	{649,1},	{757,2},	{723,2}
};

static struct patval fuseki9660[] = {
  {645,1},	{686,1},	{611,1},	{722,2},
  {719,2}
};

static struct patval fuseki9661[] = {
  {759,1},	{684,1},	{720,2},	{645,2}
};

static struct patval fuseki9662[] = {
  {648,1},	{683,1},	{756,2}
};

static struct patval fuseki9663[] = {
  {760,1},	{721,2}
};

static struct patval fuseki9664[] = {
  {723,1},	{611,1},	{757,1},	{720,2},
  {609,2}
};

static struct patval fuseki9665[] = {
  {684,1},	{611,1},	{648,1},	{612,2},
  {649,2}
};

static struct patval fuseki9666[] = {
  {760,1},	{612,1},	{610,1},	{757,2},
  {608,2}
};

static struct patval fuseki9667[] = {
  {722,1},	{611,1},	{609,2},	{756,2}
};

static struct patval fuseki9668[] = {
  {645,1},	{649,1},	{722,1},	{684,2},
  {757,2}
};

static struct patval fuseki9669[] = {
  {608,1},	{757,1},	{760,1},	{723,2},
  {611,2}
};

static struct patval fuseki9670[] = {
  {683,1},	{648,1},	{720,2}
};

static struct patval fuseki9671[] = {
  {610,1},	{684,1},	{648,1},	{611,2},
  {612,2}
};

static struct patval fuseki9672[] = {
  {719,1},	{646,1},	{612,1},	{720,2},
  {723,2}
};

static struct patval fuseki9673[] = {
  {758,1},	{794,1},	{684,2},	{757,2}
};

static struct patval fuseki9674[] = {
  {722,1},	{610,1},	{719,2},	{612,2}
};

static struct patval fuseki9675[] = {
  {609,1},	{757,1},	{649,2}
};

static struct patval fuseki9676[] = {
  {608,1},	{649,1},	{646,2}
};

static struct patval fuseki9677[] = {
  {760,1},	{611,1},	{612,1},	{649,2},
  {646,2}
};

static struct patval fuseki9678[] = {
  {611,1},	{722,1},	{649,2}
};

static struct patval fuseki9679[] = {
  {608,1},	{686,1},	{612,1},	{756,2},
  {723,2}
};

static struct patval fuseki9680[] = {
  {608,1},	{758,1},	{723,2}
};

static struct patval fuseki9681[] = {
  {723,1},	{682,1},	{757,1},	{649,2},
  {608,2}
};

static struct patval fuseki9682[] = {
  {608,1},	{722,1},	{684,1},	{646,2},
  {760,2}
};

static struct patval fuseki9683[] = {
  {611,1},	{684,1},	{758,1},	{756,2},
  {612,2}
};

static struct patval fuseki9684[] = {
  {608,1},	{719,1},	{611,1},	{686,2},
  {760,2}
};

static struct patval fuseki9685[] = {
  {684,1},	{611,1},	{723,2}
};

static struct patval fuseki9686[] = {
  {721,1},	{685,2}
};

static struct patval fuseki9687[] = {
  {723,1},	{757,1},	{610,1},	{649,2},
  {645,2}
};

static struct patval fuseki9688[] = {
  {649,1},	{759,1},	{757,2},	{645,2}
};

static struct patval fuseki9689[] = {
  {719,1},	{611,1},	{760,2}
};

static struct patval fuseki9690[] = {
  {684,1},	{721,1},	{612,2}
};

static struct patval fuseki9691[] = {
  {684,1},	{686,1},	{649,1},	{612,2},
  {650,2}
};

static struct patval fuseki9692[] = {
  {687,1},	{760,1},	{608,2}
};

static struct patval fuseki9693[] = {
  {718,1},	{756,1},	{719,2}
};

static struct patval fuseki9694[] = {
  {756,1},	{759,1},	{646,2},	{612,2}
};

static struct patval fuseki9695[] = {
  {645,1},	{723,1},	{611,2},	{757,2}
};

static struct patval fuseki9696[] = {
  {684,1},	{609,1},	{756,2}
};

static struct patval fuseki9697[] = {
  {683,1},	{720,1},	{684,2},	{759,2}
};

static struct patval fuseki9698[] = {
  {573,1},	{758,1},	{684,2},	{610,2}
};

static struct patval fuseki9699[] = {
  {760,1},	{610,1},	{649,1},	{758,2},
  {645,2}
};

static struct patval fuseki9700[] = {
  {646,1},	{682,1},	{608,2},	{684,2}
};

static struct patval fuseki9701[] = {
  {719,1},	{757,1},	{720,2},	{722,2}
};

static struct patval fuseki9702[] = {
  {720,1},	{757,1},	{684,1},	{794,2},
  {758,2}
};

static struct patval fuseki9703[] = {
  {719,1},	{649,1},	{684,2}
};

static struct patval fuseki9704[] = {
  {684,1},	{647,1},	{720,2},	{683,2}
};

static struct patval fuseki9705[] = {
  {609,1},	{684,1},	{723,1},	{686,2},
  {611,2}
};

static struct patval fuseki9706[] = {
  {608,1},	{723,1},	{611,2},	{757,2}
};

static struct patval fuseki9707[] = {
  {756,1},	{649,1},	{612,2}
};

static struct patval fuseki9708[] = {
  {574,1},	{610,1},	{684,1},	{758,2},
  {573,2}
};

static struct patval fuseki9709[] = {
  {649,1},	{610,1},	{608,2},	{760,2}
};

static struct patval fuseki9710[] = {
  {760,1},	{686,1},	{611,2},	{719,2}
};

static struct patval fuseki9711[] = {
  {723,1},	{611,1},	{609,2}
};

static struct patval fuseki9712[] = {
  {759,1},	{611,1},	{756,2},	{645,2}
};

static struct patval fuseki9713[] = {
  {649,1},	{759,1},	{720,2},	{646,2}
};

static struct patval fuseki9714[] = {
  {608,1},	{611,1},	{684,2},	{686,2}
};

static struct patval fuseki9715[] = {
  {608,1},	{756,1},	{683,1},	{611,2},
  {759,2}
};

static struct patval fuseki9716[] = {
  {758,1},	{684,1},	{647,1},	{646,2},
  {719,2}
};

static struct patval fuseki9717[] = {
  {760,1},	{757,1},	{686,2},	{646,2}
};

static struct patval fuseki9718[] = {
  {756,1},	{723,1},	{612,2},	{609,2}
};

static struct patval fuseki9719[] = {
  {758,1},	{684,1},	{645,2}
};

static struct patval fuseki9720[] = {
  {608,1},	{611,1},	{719,2},	{722,2}
};

static struct patval fuseki9721[] = {
  {682,1},	{684,1},	{723,1},	{686,2},
  {611,2}
};

static struct patval fuseki9722[] = {
  {612,1},	{721,1},	{646,2},	{719,2}
};

static struct patval fuseki9723[] = {
  {684,1},	{685,2}
};

static struct patval fuseki9724[] = {
  {723,1},	{757,1},	{684,1},	{649,2},
  {609,2}
};

static struct patval fuseki9725[] = {
  {719,1},	{612,1},	{720,1},	{757,2},
  {756,2}
};

static struct patval fuseki9726[] = {
  {756,1},	{760,1},	{612,1},	{686,2},
  {684,2}
};

static struct patval fuseki9727[] = {
  {723,1},	{720,1},	{757,1},	{612,2},
  {756,2}
};

static struct patval fuseki9728[] = {
  {683,1},	{757,1},	{759,2},	{649,2}
};

static struct patval fuseki9729[] = {
  {686,1},	{649,1},	{685,2},	{684,2}
};

static struct patval fuseki9730[] = {
  {649,1},	{722,1},	{610,1},	{720,2},
  {646,2}
};

static struct patval fuseki9731[] = {
  {719,1},	{612,1},	{757,2}
};

static struct patval fuseki9732[] = {
  {613,1},	{756,1},	{723,1},	{611,2},
  {608,2}
};

static struct patval fuseki9733[] = {
  {684,1},	{646,1},	{610,1},	{647,2},
  {609,2}
};

static struct patval fuseki9734[] = {
  {649,1},	{719,1},	{722,1},	{611,2},
  {608,2}
};

static struct patval fuseki9735[] = {
  {723,1},	{759,1},	{685,2},	{719,2}
};

static struct patval fuseki9736[] = {
  {756,1},	{612,1},	{720,2},	{723,2}
};

static struct patval fuseki9737[] = {
  {608,1},	{612,1},	{684,1},	{756,2},
  {687,2}
};

static struct patval fuseki9738[] = {
  {756,1},	{684,1},	{686,1},	{612,2},
  {723,2}
};

static struct patval fuseki9739[] = {
  {682,1},	{646,1},	{756,2},	{683,2}
};

static struct patval fuseki9740[] = {
  {646,1},	{720,1},	{649,2}
};

static struct patval fuseki9741[] = {
  {757,1},	{721,1},	{684,1},	{610,2},
  {758,2}
};

static struct patval fuseki9742[] = {
  {608,1},	{611,1},	{757,2},	{760,2}
};

static struct patval fuseki9743[] = {
  {719,1},	{760,1},	{722,1},	{685,2},
  {758,2}
};

static struct patval fuseki9744[] = {
  {759,1},	{722,1},	{684,2},	{723,2}
};

static struct patval fuseki9745[] = {
  {719,1},	{685,1},	{722,2}
};

static struct patval fuseki9746[] = {
  {608,1},	{645,1},	{682,1},	{646,2},
  {720,2}
};

static struct patval fuseki9747[] = {
  {757,1},	{684,1},	{721,1},	{758,2},
  {722,2}
};

static struct patval fuseki9748[] = {
  {719,1},	{612,1},	{758,1},	{722,2},
  {610,2}
};

static struct patval fuseki9749[] = {
  {722,1},	{684,1},	{648,1},	{611,2},
  {757,2}
};

static struct patval fuseki9750[] = {
  {608,1},	{756,1},	{574,1},	{759,2},
  {649,2}
};

static struct patval fuseki9751[] = {
  {721,1},	{647,1},	{684,1},	{646,2},
  {722,2}
};

static struct patval fuseki9752[] = {
  {649,1},	{683,1},	{609,2},	{756,2}
};

static struct patval fuseki9753[] = {
  {608,1},	{719,1},	{611,2},	{723,2}
};

static struct patval fuseki9754[] = {
  {646,1},	{722,1},	{721,2},	{684,2}
};

static struct patval fuseki9755[] = {
  {649,1},	{651,1},	{650,1},	{687,2},
  {686,2}
};

static struct patval fuseki9756[] = {
  {723,1},	{756,1},	{684,1},	{608,2},
  {760,2}
};

static struct patval fuseki9757[] = {
  {683,1},	{760,1},	{759,2},	{648,2}
};

static struct patval fuseki9758[] = {
  {650,1},	{756,1},	{611,1},	{723,2},
  {608,2}
};

static struct patval fuseki9759[] = {
  {649,1},	{609,1},	{684,1},	{611,2},
  {756,2}
};

static struct patval fuseki9760[] = {
  {719,1},	{609,1},	{794,1},	{611,2},
  {722,2}
};

static struct patval fuseki9761[] = {
  {649,1},	{610,1},	{646,2}
};

static struct patval fuseki9762[] = {
  {608,1},	{756,1},	{760,1},	{611,2},
  {720,2}
};

static struct patval fuseki9763[] = {
  {723,1},	{757,1},	{647,1},	{649,2},
  {645,2}
};

static struct patval fuseki9764[] = {
  {685,1},	{719,1},	{611,2},	{608,2}
};

static struct patval fuseki9765[] = {
  {609,1},	{720,1},	{683,2}
};

static struct patval fuseki9766[] = {
  {723,1},	{648,1},	{759,1},	{683,2},
  {760,2}
};

static struct patval fuseki9767[] = {
  {722,1},	{683,1},	{720,1},	{757,2},
  {719,2}
};

static struct patval fuseki9768[] = {
  {759,1},	{683,1},	{720,2},	{609,2}
};

static struct patval fuseki9769[] = {
  {682,1},	{684,1},	{720,1},	{683,2},
  {721,2}
};

static struct patval fuseki9770[] = {
  {757,1},	{756,1},	{719,2},	{612,2}
};

static struct patval fuseki9771[] = {
  {649,1},	{648,1},	{612,2},	{608,2}
};

static struct patval fuseki9772[] = {
  {723,1},	{721,1},	{649,2},	{684,2}
};

static struct patval fuseki9773[] = {
  {612,1},	{722,1},	{611,2},	{719,2}
};

static struct patval fuseki9774[] = {
  {719,1},	{611,1},	{649,1},	{612,2},
  {722,2}
};

static struct patval fuseki9775[] = {
  {723,1},	{612,1},	{684,1},	{610,2},
  {645,2}
};

static struct patval fuseki9776[] = {
  {608,1},	{756,1},	{646,2},	{760,2}
};

static struct patval fuseki9777[] = {
  {685,1},	{758,1},	{719,2},	{760,2}
};

static struct patval fuseki9778[] = {
  {610,1},	{648,1},	{611,2},	{684,2}
};

static struct patval fuseki9779[] = {
  {756,1},	{687,1},	{612,2},	{684,2}
};

static struct patval fuseki9780[] = {
  {649,1},	{756,1},	{757,1},	{684,2},
  {719,2}
};

static struct patval fuseki9781[] = {
  {719,1},	{611,1},	{722,2}
};

static struct patval fuseki9782[] = {
  {759,1},	{611,1},	{646,2},	{756,2}
};

static struct patval fuseki9783[] = {
  {722,1},	{611,1},	{609,2},	{645,2}
};

static struct patval fuseki9784[] = {
  {608,1},	{756,1},	{684,2},	{760,2}
};

static struct patval fuseki9785[] = {
  {608,1},	{723,1},	{758,2},	{684,2}
};

static struct patval fuseki9786[] = {
  {756,1},	{612,1},	{648,2},	{720,2}
};

static struct patval fuseki9787[] = {
  {608,1},	{756,1},	{611,1},	{759,2},
  {612,2}
};

static struct patval fuseki9788[] = {
  {682,1},	{757,1},	{612,2}
};

static struct patval fuseki9789[] = {
  {720,1},	{684,1},	{722,1},	{685,2},
  {721,2}
};

static struct patval fuseki9790[] = {
  {612,1},	{650,1},	{723,2}
};

static struct patval fuseki9791[] = {
  {684,1},	{721,1},	{686,1},	{722,2},
  {723,2}
};

static struct patval fuseki9792[] = {
  {719,1},	{646,1},	{686,1},	{757,2},
  {760,2}
};

static struct patval fuseki9793[] = {
  {682,1},	{646,1},	{756,2},	{722,2}
};

static struct patval fuseki9794[] = {
  {719,1},	{611,1},	{684,2},	{759,2}
};

static struct patval fuseki9795[] = {
  {649,1},	{756,1},	{722,1},	{611,2},
  {608,2}
};

static struct patval fuseki9796[] = {
  {608,1},	{723,1},	{722,2},	{611,2}
};

static struct patval fuseki9797[] = {
  {684,1},	{649,1},	{612,1},	{648,2},
  {611,2}
};

static struct patval fuseki9798[] = {
  {608,1},	{722,1},	{757,2}
};

static struct patval fuseki9799[] = {
  {756,1},	{760,1},	{795,1},	{758,2},
  {684,2}
};

static struct patval fuseki9800[] = {
  {723,1},	{756,1},	{648,1},	{612,2},
  {645,2}
};

static struct patval fuseki9801[] = {
  {722,1},	{756,1},	{648,1},	{646,2},
  {682,2}
};

static struct patval fuseki9802[] = {
  {609,1},	{721,1},	{720,1},	{683,2},
  {759,2}
};

static struct patval fuseki9803[] = {
  {646,1},	{685,1},	{758,2},	{683,2}
};

static struct patval fuseki9804[] = {
  {645,1},	{684,1},	{646,1},	{683,2},
  {719,2}
};

static struct patval fuseki9805[] = {
  {685,1},	{683,1},	{757,2},	{609,2}
};

static struct patval fuseki9806[] = {
  {648,1},	{720,1},	{611,1},	{756,2},
  {612,2}
};

static struct patval fuseki9807[] = {
  {647,1},	{683,1},	{646,2},	{721,2}
};

static struct patval fuseki9808[] = {
  {757,1},	{611,1},	{684,2},	{722,2}
};

static struct patval fuseki9809[] = {
  {686,1},	{759,1},	{721,2}
};

static struct patval fuseki9810[] = {
  {686,1},	{610,1},	{684,1},	{611,2},
  {608,2}
};

static struct patval fuseki9811[] = {
  {683,1},	{758,1},	{685,2}
};

static struct patval fuseki9812[] = {
  {608,1},	{760,1},	{686,1},	{612,2},
  {756,2}
};

static struct patval fuseki9813[] = {
  {649,1},	{612,1},	{722,2},	{611,2}
};

static struct patval fuseki9814[] = {
  {684,1},	{685,1},	{723,1},	{759,2},
  {722,2}
};

static struct patval fuseki9815[] = {
  {608,1},	{684,1},	{609,1},	{646,2},
  {682,2}
};

static struct patval fuseki9816[] = {
  {719,1},	{609,1},	{686,1},	{612,2},
  {759,2}
};

static struct patval fuseki9817[] = {
  {686,1},	{684,1},	{758,1},	{612,2},
  {609,2}
};

static struct patval fuseki9818[] = {
  {719,1},	{684,1},	{611,1},	{758,2},
  {723,2}
};

static struct patval fuseki9819[] = {
  {722,1},	{758,1},	{685,2},	{684,2}
};

static struct patval fuseki9820[] = {
  {683,1},	{719,1},	{645,2},	{684,2}
};

static struct patval fuseki9821[] = {
  {646,1},	{645,1},	{608,2},	{649,2}
};

static struct patval fuseki9822[] = {
  {609,1},	{649,1},	{684,2},	{757,2}
};

static struct patval fuseki9823[] = {
  {684,1},	{576,1},	{612,2}
};

static struct patval fuseki9824[] = {
  {685,1},	{611,1},	{684,2}
};

static struct patval fuseki9825[] = {
  {608,1},	{720,1},	{756,1},	{682,2},
  {684,2}
};

static struct patval fuseki9826[] = {
  {682,1},	{684,1},	{757,2},	{723,2}
};

static struct patval fuseki9827[] = {
  {681,1},	{758,1},	{719,1},	{684,2},
  {682,2}
};

static struct patval fuseki9828[] = {
  {720,1},	{757,1},	{649,1},	{721,2},
  {684,2}
};

static struct patval fuseki9829[] = {
  {609,1},	{686,1},	{684,1},	{611,2},
  {757,2}
};

static struct patval fuseki9830[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9831[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9832[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9833[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9834[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9835[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9836[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9837[] = {
  {756,1},	{612,1}
};

static struct patval fuseki9838[] = {
  {684,1},	{756,2},	{612,2}
};

static struct patval fuseki9839[] = {
  {684,1},	{756,2},	{612,2}
};

static struct patval fuseki9840[] = {
  {684,1},	{756,2},	{612,2}
};

static struct patval fuseki9841[] = {
  {684,1},	{756,2},	{612,2}
};

static struct patval fuseki9842[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9843[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9844[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9845[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9846[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9847[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9848[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9849[] = {
  {608,1},	{756,1},	{612,1}
};

static struct patval fuseki9850[] = {
  {760,1},	{612,2},	{756,2}
};

static struct patval fuseki9851[] = {
  {760,1},	{612,2},	{756,2}
};

static struct patval fuseki9852[] = {
  {760,1},	{612,2},	{756,2}
};

static struct patval fuseki9853[] = {
  {760,1},	{612,2},	{756,2}
};

static struct patval fuseki9854[] = {
  {760,1},	{612,2},	{756,2}
};

static struct patval fuseki9855[] = {
  {608,1},	{756,2},	{612,2}
};

static struct patval fuseki9856[] = {
  {645,1},	{756,2},	{612,2}
};

static struct patval fuseki9857[] = {
  {723,1},	{612,2},	{756,2}
};

static struct patval fuseki9858[] = {
  {645,1},	{756,2},	{612,2}
};

static struct patval fuseki9859[] = {
  {723,1},	{612,2},	{756,2}
};

static struct patval fuseki9860[] = {
  {645,1},	{756,2},	{612,2}
};

static struct patval fuseki9861[] = {
  {723,1},	{612,2},	{756,2}
};

static struct patval fuseki9862[] = {
  {723,1},	{612,2},	{756,2}
};

static struct patval fuseki9863[] = {
  {608,1},	{756,1},	{612,1},	{760,1}
};

static struct patval fuseki9864[] = {
  {608,1},	{756,1},	{612,1},	{760,1}
};

static struct patval fuseki9865[] = {
  {608,1},	{756,1},	{612,1},	{760,1}
};

static struct patval fuseki9866[] = {
  {608,1},	{756,1},	{612,1},	{760,1}
};

static struct patval fuseki9867[] = {
  {646,1},	{756,2},	{612,2}
};

static struct patval fuseki9868[] = {
  {646,1},	{756,2},	{612,2}
};

static struct patval fuseki9869[] = {
  {646,1},	{756,2},	{612,2}
};

static struct patval fuseki9870[] = {
  {646,1},	{756,2},	{612,2}
};

static struct patval fuseki9871[] = {
  {722,1},	{756,2},	{612,2}
};

static struct patval fuseki9872[] = {
  {756,1},	{686,1},	{612,1},	{684,2}
};

static struct patval fuseki9873[] = {
  {682,1},	{756,1},	{612,1},	{684,2}
};

static struct patval fuseki9874[] = {
  {756,1},	{610,1},	{612,1},	{684,2}
};

static struct patval fuseki9875[] = {
  {756,1},	{610,1},	{612,1},	{684,2}
};

static struct patval fuseki9876[] = {
  {756,1},	{610,1},	{612,1},	{684,2}
};

static struct patval fuseki9877[] = {
  {756,1},	{612,1},	{758,1},	{684,2}
};

static struct patval fuseki9878[] = {
  {682,1},	{756,1},	{612,1},	{684,2}
};

static struct patval fuseki9879[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {760,1}
};

static struct patval fuseki9880[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {760,1}
};

static struct patval fuseki9881[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {760,1}
};

static struct patval fuseki9882[] = {
  {756,1},	{612,1},	{759,1},	{684,2}
};

static struct patval fuseki9883[] = {
  {756,1},	{609,1},	{612,1},	{684,2}
};

static struct patval fuseki9884[] = {
  {756,1},	{609,1},	{612,1},	{684,2}
};

static struct patval fuseki9885[] = {
  {645,1},	{756,1},	{612,1},	{684,2}
};

static struct patval fuseki9886[] = {
  {756,1},	{612,1},	{759,1},	{684,2}
};

static struct patval fuseki9887[] = {
  {756,1},	{609,1},	{612,1},	{684,2}
};

static struct patval fuseki9888[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9889[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9890[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9891[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9892[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9893[] = {
  {760,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki9894[] = {
  {756,1},	{612,1},	{759,1},	{646,2}
};

static struct patval fuseki9895[] = {
  {756,1},	{612,1},	{759,1},	{646,2}
};

static struct patval fuseki9896[] = {
  {756,1},	{612,1},	{759,1},	{646,2}
};

static struct patval fuseki9897[] = {
  {645,1},	{756,1},	{612,1},	{722,2}
};

static struct patval fuseki9898[] = {
  {686,1},	{756,2},	{612,2},	{608,2},
  {760,2}
};

static struct patval fuseki9899[] = {
  {758,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9900[] = {
  {682,1},	{608,2},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki9901[] = {
  {758,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9902[] = {
  {682,1},	{608,2},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki9903[] = {
  {758,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9904[] = {
  {686,1},	{756,2},	{612,2},	{608,2},
  {760,2}
};

static struct patval fuseki9905[] = {
  {756,1},	{758,1},	{612,1},	{723,2}
};

static struct patval fuseki9906[] = {
  {682,1},	{756,1},	{612,1},	{609,2}
};

static struct patval fuseki9907[] = {
  {756,1},	{686,1},	{612,1},	{759,2}
};

static struct patval fuseki9908[] = {
  {756,1},	{686,1},	{612,1},	{759,2}
};

static struct patval fuseki9909[] = {
  {756,1},	{758,1},	{612,1},	{723,2}
};

static struct patval fuseki9910[] = {
  {612,1},	{756,1},	{610,1},	{645,2}
};

static struct patval fuseki9911[] = {
  {756,1},	{686,1},	{612,1},	{759,2}
};

static struct patval fuseki9912[] = {
  {756,1},	{722,1},	{612,1},	{760,2}
};

static struct patval fuseki9913[] = {
  {612,1},	{756,1},	{646,1},	{608,2}
};

static struct patval fuseki9914[] = {
  {612,1},	{756,1},	{646,1},	{608,2}
};

static struct patval fuseki9915[] = {
  {756,1},	{722,1},	{612,1},	{760,2}
};

static struct patval fuseki9916[] = {
  {756,1},	{722,1},	{612,1},	{760,2}
};

static struct patval fuseki9917[] = {
  {686,1},	{756,2},	{684,2},	{612,2},
  {608,2},	{760,2}
};

static struct patval fuseki9918[] = {
  {686,1},	{756,2},	{684,2},	{612,2},
  {608,2},	{760,2}
};

static struct patval fuseki9919[] = {
  {758,1},	{756,2},	{684,2},	{608,2},
  {612,2},	{760,2}
};

static struct patval fuseki9920[] = {
  {758,1},	{756,2},	{684,2},	{608,2},
  {612,2},	{760,2}
};

static struct patval fuseki9921[] = {
  {686,1},	{756,2},	{684,2},	{612,2},
  {608,2},	{760,2}
};

static struct patval fuseki9922[] = {
  {758,1},	{756,2},	{684,2},	{608,2},
  {612,2},	{760,2}
};

static struct patval fuseki9923[] = {
  {720,1},	{756,2},	{612,2}
};

static struct patval fuseki9924[] = {
  {686,1},	{612,2},	{756,2}
};

static struct patval fuseki9925[] = {
  {686,1},	{612,2},	{756,2}
};

static struct patval fuseki9926[] = {
  {758,1},	{756,2},	{612,2}
};

static struct patval fuseki9927[] = {
  {610,1},	{756,2},	{612,2}
};

static struct patval fuseki9928[] = {
  {645,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9929[] = {
  {756,1},	{609,1},	{612,1},	{760,2}
};

static struct patval fuseki9930[] = {
  {645,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9931[] = {
  {608,1},	{756,1},	{612,1},	{684,2}
};

static struct patval fuseki9932[] = {
  {756,1},	{760,1},	{612,1},	{684,2}
};

static struct patval fuseki9933[] = {
  {756,1},	{760,1},	{612,1},	{684,2}
};

static struct patval fuseki9934[] = {
  {756,1},	{649,1},	{612,1},	{648,2}
};

static struct patval fuseki9935[] = {
  {756,1},	{611,1},	{612,1},	{648,2}
};

static struct patval fuseki9936[] = {
  {756,1},	{612,1},	{757,1},	{720,2}
};

static struct patval fuseki9937[] = {
  {684,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9938[] = {
  {686,1},	{646,1},	{759,2},	{612,2},
  {756,2}
};

static struct patval fuseki9939[] = {
  {722,1},	{610,1},	{756,2},	{645,2},
  {612,2}
};

static struct patval fuseki9940[] = {
  {722,1},	{610,1},	{756,2},	{645,2},
  {612,2}
};

static struct patval fuseki9941[] = {
  {608,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9942[] = {
  {608,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9943[] = {
  {608,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9944[] = {
  {608,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9945[] = {
  {608,1},	{756,1},	{612,1},	{760,2}
};

static struct patval fuseki9946[] = {
  {682,1},	{684,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki9947[] = {
  {684,1},	{610,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki9948[] = {
  {758,1},	{684,1},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki9949[] = {
  {684,1},	{610,1},	{756,2},	{608,2},
  {612,2}
};

static struct patval fuseki9950[] = {
  {684,1},	{682,1},	{756,2},	{608,2},
  {612,2}
};

static struct patval fuseki9951[] = {
  {686,1},	{684,1},	{612,2},	{756,2},
  {760,2}
};

static struct patval fuseki9952[] = {
  {719,1},	{756,2},	{612,2}
};

static struct patval fuseki9953[] = {
  {757,1},	{756,2},	{612,2}
};

static struct patval fuseki9954[] = {
  {649,1},	{612,2},	{756,2}
};

static struct patval fuseki9955[] = {
  {756,1},	{758,1},	{612,1},	{760,2}
};

static struct patval fuseki9956[] = {
  {756,1},	{758,1},	{612,1},	{760,2}
};

static struct patval fuseki9957[] = {
  {612,1},	{682,1},	{756,1},	{608,2}
};

static struct patval fuseki9958[] = {
  {608,1},	{682,1},	{756,1},	{760,1},
  {612,1},	{684,2}
};

static struct patval fuseki9959[] = {
  {608,1},	{756,1},	{760,1},	{612,1},
  {686,1},	{684,2}
};

static struct patval fuseki9960[] = {
  {760,1},	{759,1},	{722,2},	{612,2},
  {756,2}
};

static struct patval fuseki9961[] = {
  {760,1},	{723,1},	{612,2},	{722,2},
  {756,2}
};

static struct patval fuseki9962[] = {
  {684,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9963[] = {
  {722,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9964[] = {
  {722,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9965[] = {
  {722,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9966[] = {
  {758,1},	{756,1},	{610,1},	{612,1},
  {682,2},	{684,2}
};

static struct patval fuseki9967[] = {
  {722,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9968[] = {
  {722,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9969[] = {
  {722,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki9970[] = {
  {608,1},	{756,1},	{612,1},	{723,2}
};

static struct patval fuseki9971[] = {
  {608,1},	{756,1},	{612,1},	{759,2}
};

static struct patval fuseki9972[] = {
  {760,1},	{756,1},	{612,1},	{645,2}
};

static struct patval fuseki9973[] = {
  {610,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9974[] = {
  {682,1},	{608,2},	{756,2},	{612,2}
};

static struct patval fuseki9975[] = {
  {610,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki9976[] = {
  {685,1},	{756,2},	{612,2}
};

static struct patval fuseki9977[] = {
  {647,1},	{756,2},	{612,2}
};

static struct patval fuseki9978[] = {
  {683,1},	{756,2},	{612,2}
};

static struct patval fuseki9979[] = {
  {612,1},	{756,1},	{609,1},	{645,2}
};

static struct patval fuseki9980[] = {
  {608,1},	{756,1},	{758,1},	{612,1},
  {760,1},	{686,2}
};

static struct patval fuseki9981[] = {
  {608,1},	{756,1},	{760,1},	{612,1},
  {686,1},	{610,2}
};

static struct patval fuseki9982[] = {
  {686,1},	{684,1},	{759,2},	{612,2},
  {756,2}
};

static struct patval fuseki9983[] = {
  {758,1},	{684,1},	{756,2},	{612,2},
  {723,2}
};

static struct patval fuseki9984[] = {
  {758,1},	{684,1},	{756,2},	{612,2},
  {723,2}
};

static struct patval fuseki9985[] = {
  {648,1},	{647,1},	{611,2},	{756,2},
  {612,2}
};

static struct patval fuseki9986[] = {
  {685,1},	{648,1},	{756,2},	{612,2},
  {649,2}
};

static struct patval fuseki9987[] = {
  {608,1},	{682,1},	{756,1},	{612,1},
  {684,2}
};

static struct patval fuseki9988[] = {
  {608,1},	{682,1},	{756,1},	{612,1},
  {684,2}
};

static struct patval fuseki9989[] = {
  {756,1},	{721,1},	{722,1},	{612,1},
  {759,2},	{760,2}
};

static struct patval fuseki9990[] = {
  {756,1},	{721,1},	{722,1},	{612,1},
  {759,2},	{760,2}
};

static struct patval fuseki9991[] = {
  {683,1},	{612,1},	{756,1},	{646,1},
  {608,2},	{645,2}
};

static struct patval fuseki9992[] = {
  {756,1},	{612,1},	{683,1},	{609,2}
};

static struct patval fuseki9993[] = {
  {756,1},	{612,1},	{683,1},	{609,2}
};

static struct patval fuseki9994[] = {
  {756,1},	{685,1},	{612,1},	{759,2}
};

static struct patval fuseki9995[] = {
  {756,1},	{721,1},	{612,1},	{723,2}
};

static struct patval fuseki9996[] = {
  {756,1},	{609,1},	{612,1},	{723,2}
};

static struct patval fuseki9997[] = {
  {756,1},	{609,1},	{612,1},	{723,2}
};

static struct patval fuseki9998[] = {
  {682,1},	{759,1},	{756,2},	{612,2},
  {686,2}
};

static struct patval fuseki9999[] = {
  {686,1},	{609,1},	{756,2},	{612,2},
  {682,2}
};

static struct patval fuseki91000[] = {
  {682,1},	{759,1},	{756,2},	{612,2},
  {686,2}
};

static struct patval fuseki91001[] = {
  {645,1},	{758,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91002[] = {
  {608,1},	{645,1},	{756,2},	{609,2},
  {612,2}
};

static struct patval fuseki91003[] = {
  {760,1},	{759,1},	{612,2},	{723,2},
  {756,2}
};

static struct patval fuseki91004[] = {
  {759,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91005[] = {
  {723,1},	{756,2},	{612,2},	{608,2}
};

static struct patval fuseki91006[] = {
  {608,1},	{760,1},	{646,2},	{612,2},
  {756,2}
};

static struct patval fuseki91007[] = {
  {608,1},	{760,1},	{646,2},	{612,2},
  {756,2}
};

static struct patval fuseki91008[] = {
  {684,1},	{610,1},	{756,2},	{608,2},
  {758,2},	{612,2},	{760,2}
};

static struct patval fuseki91009[] = {
  {684,1},	{682,1},	{756,2},	{608,2},
  {612,2},	{686,2},	{760,2}
};

static struct patval fuseki91010[] = {
  {608,1},	{756,1},	{796,1},	{612,1},
  {760,2}
};

static struct patval fuseki91011[] = {
  {608,1},	{756,1},	{796,1},	{612,1},
  {760,2}
};

static struct patval fuseki91012[] = {
  {608,1},	{756,1},	{612,1},	{724,1},
  {760,2}
};

static struct patval fuseki91013[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {796,1},	{612,1},	{758,2}
};

static struct patval fuseki91014[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {796,1},	{612,1},	{758,2}
};

static struct patval fuseki91015[] = {
  {760,1},	{646,1},	{722,2},	{612,2},
  {756,2}
};

static struct patval fuseki91016[] = {
  {682,1},	{759,1},	{684,1},	{610,2},
  {758,2},	{756,2},	{612,2}
};

static struct patval fuseki91017[] = {
  {684,1},	{723,1},	{610,1},	{682,2},
  {612,2},	{686,2},	{756,2}
};

static struct patval fuseki91018[] = {
  {756,1},	{723,1},	{722,1},	{612,1},
  {646,2},	{760,2}
};

static struct patval fuseki91019[] = {
  {756,1},	{612,1},	{722,1},	{759,1},
  {646,2},	{760,2}
};

static struct patval fuseki91020[] = {
  {608,1},	{760,1},	{758,2},	{612,2},
  {756,2}
};

static struct patval fuseki91021[] = {
  {608,1},	{760,1},	{758,2},	{612,2},
  {756,2}
};

static struct patval fuseki91022[] = {
  {608,1},	{760,1},	{758,2},	{612,2},
  {756,2}
};

static struct patval fuseki91023[] = {
  {756,1},	{796,1},	{612,1},	{760,2}
};

static struct patval fuseki91024[] = {
  {723,1},	{646,1},	{759,2},	{612,2},
  {756,2}
};

static struct patval fuseki91025[] = {
  {684,1},	{682,1},	{610,1},	{756,2},
  {608,2},	{758,2},	{612,2},	{686,2},
  {760,2}
};

static struct patval fuseki91026[] = {
  {686,1},	{758,1},	{684,1},	{610,2},
  {756,2},	{682,2},	{612,2},	{608,2},
  {760,2}
};

static struct patval fuseki91027[] = {
  {612,1},	{756,1},	{684,1},	{608,2}
};

static struct patval fuseki91028[] = {
  {756,1},	{612,1},	{722,1},	{684,2}
};

static struct patval fuseki91029[] = {
  {756,1},	{612,1},	{722,1},	{684,2}
};

static struct patval fuseki91030[] = {
  {756,1},	{612,1},	{722,1},	{684,2}
};

static struct patval fuseki91031[] = {
  {756,1},	{610,1},	{612,1},	{611,1},
  {648,2},	{647,2}
};

static struct patval fuseki91032[] = {
  {645,1},	{756,1},	{612,1},	{574,1},
  {722,2},	{610,2}
};

static struct patval fuseki91033[] = {
  {756,1},	{650,1},	{759,1},	{612,1},
  {686,2},	{646,2}
};

static struct patval fuseki91034[] = {
  {684,1},	{610,1},	{756,2},	{682,2},
  {608,2},	{612,2}
};

static struct patval fuseki91035[] = {
  {684,1},	{682,1},	{756,2},	{610,2},
  {608,2},	{612,2}
};

static struct patval fuseki91036[] = {
  {611,1},	{684,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91037[] = {
  {684,1},	{757,1},	{756,2},	{612,2},
  {686,2}
};

static struct patval fuseki91038[] = {
  {608,1},	{756,1},	{684,1},	{648,1},
  {612,1},	{760,1},	{686,2}
};

static struct patval fuseki91039[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {722,1},	{612,1},	{758,2}
};

static struct patval fuseki91040[] = {
  {681,1},	{612,1},	{756,1},	{609,1},
  {722,2},	{645,2}
};

static struct patval fuseki91041[] = {
  {645,1},	{756,1},	{612,1},	{573,1},
  {722,2},	{609,2}
};

static struct patval fuseki91042[] = {
  {756,1},	{687,1},	{759,1},	{612,1},
  {723,2},	{646,2}
};

static struct patval fuseki91043[] = {
  {756,1},	{612,1},	{722,1},	{646,2}
};

static struct patval fuseki91044[] = {
  {756,1},	{684,1},	{612,1},	{723,2}
};

static struct patval fuseki91045[] = {
  {756,1},	{684,1},	{612,1},	{723,2}
};

static struct patval fuseki91046[] = {
  {608,1},	{756,1},	{610,1},	{760,1},
  {686,1},	{612,1},	{758,2},	{684,2}
};

static struct patval fuseki91047[] = {
  {756,1},	{721,1},	{723,1},	{612,1},
  {759,2},	{760,2}
};

static struct patval fuseki91048[] = {
  {683,1},	{612,1},	{756,1},	{609,1},
  {608,2},	{645,2}
};

static struct patval fuseki91049[] = {
  {608,1},	{682,1},	{756,1},	{686,1},
  {612,1},	{684,2},	{610,2}
};

static struct patval fuseki91050[] = {
  {721,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91051[] = {
  {721,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91052[] = {
  {722,1},	{648,1},	{685,1},	{756,2},
  {612,2},	{649,2},	{686,2}
};

static struct patval fuseki91053[] = {
  {612,1},	{756,1},	{646,1},	{758,1},
  {608,2},	{760,2}
};

static struct patval fuseki91054[] = {
  {722,1},	{756,2},	{684,2},	{608,2},
  {612,2},	{760,2}
};

static struct patval fuseki91055[] = {
  {722,1},	{756,2},	{684,2},	{608,2},
  {612,2},	{760,2}
};

static struct patval fuseki91056[] = {
  {756,1},	{758,1},	{612,1},	{686,2}
};

static struct patval fuseki91057[] = {
  {756,1},	{758,1},	{612,1},	{686,2}
};

static struct patval fuseki91058[] = {
  {760,1},	{609,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91059[] = {
  {760,1},	{609,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91060[] = {
  {758,1},	{684,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91061[] = {
  {758,1},	{684,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91062[] = {
  {684,1},	{723,1},	{610,1},	{756,2},
  {608,2},	{612,2},	{686,2},	{682,2}
};

static struct patval fuseki91063[] = {
  {682,1},	{756,1},	{612,1},	{575,1},
  {611,2},	{684,2}
};

static struct patval fuseki91064[] = {
  {684,1},	{610,1},	{609,2},	{756,2},
  {612,2}
};

static struct patval fuseki91065[] = {
  {684,1},	{610,1},	{609,2},	{756,2},
  {612,2}
};

static struct patval fuseki91066[] = {
  {756,1},	{724,1},	{759,1},	{612,1},
  {686,2},	{684,2}
};

static struct patval fuseki91067[] = {
  {611,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki91068[] = {
  {645,1},	{608,2},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki91069[] = {
  {759,1},	{646,1},	{760,1},	{756,2},
  {612,2},	{723,2},	{722,2}
};

static struct patval fuseki91070[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {722,2}
};

static struct patval fuseki91071[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {722,2}
};

static struct patval fuseki91072[] = {
  {648,1},	{610,1},	{611,2},	{756,2},
  {612,2}
};

static struct patval fuseki91073[] = {
  {608,1},	{684,1},	{609,2},	{756,2},
  {612,2}
};

static struct patval fuseki91074[] = {
  {759,1},	{760,1},	{722,1},	{756,2},
  {612,2},	{723,2},	{721,2}
};

static struct patval fuseki91075[] = {
  {608,1},	{646,1},	{609,1},	{756,2},
  {645,2},	{647,2},	{612,2}
};

static struct patval fuseki91076[] = {
  {756,1},	{649,1},	{685,1},	{612,1},
  {648,2},	{686,2}
};

static struct patval fuseki91077[] = {
  {683,1},	{719,1},	{756,1},	{612,1},
  {720,2},	{682,2}
};

static struct patval fuseki91078[] = {
  {684,1},	{609,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91079[] = {
  {684,1},	{609,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91080[] = {
  {571,1},	{612,1},	{756,1},	{609,1},
  {684,2},	{608,2}
};

static struct patval fuseki91081[] = {
  {607,1},	{612,1},	{645,1},	{756,1},
  {684,2},	{608,2}
};

static struct patval fuseki91082[] = {
  {611,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91083[] = {
  {719,1},	{608,2},	{756,2},	{612,2}
};

static struct patval fuseki91084[] = {
  {760,1},	{610,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91085[] = {
  {682,1},	{760,1},	{609,2},	{612,2},
  {756,2}
};

static struct patval fuseki91086[] = {
  {608,1},	{756,1},	{759,1},	{612,1},
  {760,2}
};

static struct patval fuseki91087[] = {
  {608,1},	{756,1},	{759,1},	{612,1},
  {760,2}
};

static struct patval fuseki91088[] = {
  {686,1},	{684,1},	{756,2},	{758,2},
  {612,2},	{608,2},	{760,2}
};

static struct patval fuseki91089[] = {
  {758,1},	{684,1},	{756,2},	{608,2},
  {612,2},	{686,2},	{760,2}
};

static struct patval fuseki91090[] = {
  {645,1},	{756,1},	{612,1},	{758,1},
  {609,2},	{760,2}
};

static struct patval fuseki91091[] = {
  {719,1},	{720,1},	{756,2},	{757,2},
  {612,2}
};

static struct patval fuseki91092[] = {
  {612,1},	{645,1},	{756,1},	{646,1},
  {608,2},	{760,2}
};

static struct patval fuseki91093[] = {
  {756,1},	{760,1},	{612,1},	{646,2}
};

static struct patval fuseki91094[] = {
  {760,1},	{609,1},	{722,2},	{612,2},
  {756,2}
};

static struct patval fuseki91095[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {723,1},	{796,1},	{612,1},	{722,2},
  {758,2}
};

static struct patval fuseki91096[] = {
  {719,1},	{608,2},	{756,2},	{684,2},
  {612,2},	{760,2}
};

static struct patval fuseki91097[] = {
  {756,1},	{609,1},	{612,1},	{685,2}
};

static struct patval fuseki91098[] = {
  {756,1},	{612,1},	{759,1},	{683,2}
};

static struct patval fuseki91099[] = {
  {611,1},	{686,1},	{684,1},	{682,2},
  {575,2},	{612,2},	{756,2}
};

static struct patval fuseki91100[] = {
  {611,1},	{686,1},	{684,1},	{682,2},
  {575,2},	{612,2},	{756,2}
};

static struct patval fuseki91101[] = {
  {756,1},	{646,1},	{612,1},	{723,2}
};

static struct patval fuseki91102[] = {
  {723,1},	{758,1},	{609,2},	{612,2},
  {756,2}
};

static struct patval fuseki91103[] = {
  {686,1},	{684,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91104[] = {
  {758,1},	{684,1},	{609,2},	{756,2},
  {612,2}
};

static struct patval fuseki91105[] = {
  {722,1},	{685,1},	{758,1},	{684,2},
  {756,2},	{608,2},	{796,2},	{612,2},
  {723,2},	{760,2}
};

static struct patval fuseki91106[] = {
  {686,1},	{722,1},	{684,2},	{648,2},
  {756,2},	{612,2},	{608,2},	{760,2}
};

static struct patval fuseki91107[] = {
  {686,1},	{648,1},	{684,2},	{756,2},
  {722,2},	{612,2},	{608,2},	{760,2}
};

static struct patval fuseki91108[] = {
  {722,1},	{758,1},	{684,2},	{756,2},
  {608,2},	{796,2},	{612,2},	{760,2}
};

static struct patval fuseki91109[] = {
  {760,1},	{682,1},	{756,2},	{612,2},
  {608,2}
};

static struct patval fuseki91110[] = {
  {756,1},	{684,1},	{612,1},	{686,2}
};

static struct patval fuseki91111[] = {
  {756,1},	{684,1},	{612,1},	{686,2}
};

static struct patval fuseki91112[] = {
  {756,1},	{572,1},	{612,1},	{646,2}
};

static struct patval fuseki91113[] = {
  {608,1},	{756,1},	{758,1},	{760,1},
  {612,1},	{722,2}
};

static struct patval fuseki91114[] = {
  {608,1},	{760,1},	{609,1},	{756,2},
  {758,2},	{612,2},	{645,2}
};

static struct patval fuseki91115[] = {
  {718,1},	{612,1},	{756,1},	{719,2}
};

static struct patval fuseki91116[] = {
  {723,1},	{684,1},	{759,2},	{612,2},
  {756,2}
};

static struct patval fuseki91117[] = {
  {608,1},	{650,1},	{760,1},	{758,2},
  {612,2},	{646,2},	{756,2}
};

static struct patval fuseki91118[] = {
  {757,1},	{719,1},	{756,2},	{718,2},
  {612,2}
};

static struct patval fuseki91119[] = {
  {649,1},	{611,1},	{574,2},	{612,2},
  {756,2}
};

static struct patval fuseki91120[] = {
  {608,1},	{760,1},	{609,1},	{646,2},
  {647,2},	{612,2},	{756,2}
};

static struct patval fuseki91121[] = {
  {608,1},	{723,1},	{759,1},	{758,2},
  {647,2},	{612,2},	{756,2}
};

static struct patval fuseki91122[] = {
  {722,1},	{610,1},	{756,2},	{758,2},
  {608,2},	{612,2},	{760,2}
};

static struct patval fuseki91123[] = {
  {608,1},	{684,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91124[] = {
  {608,1},	{684,1},	{610,2},	{756,2},
  {612,2}
};

static struct patval fuseki91125[] = {
  {684,1},	{686,1},	{610,1},	{756,2},
  {608,2},	{612,2},	{682,2}
};

static struct patval fuseki91126[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {759,2}
};

static struct patval fuseki91127[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {760,2}
};

static struct patval fuseki91128[] = {
  {760,1},	{759,1},	{796,2},	{612,2},
  {756,2}
};

static struct patval fuseki91129[] = {
  {608,1},	{756,1},	{683,1},	{612,1},
  {721,2}
};

static struct patval fuseki91130[] = {
  {649,1},	{684,1},	{756,2},	{612,2},
  {682,2}
};

static struct patval fuseki91131[] = {
  {608,1},	{760,1},	{756,1},	{683,1},
  {612,1},	{682,2}
};

static struct patval fuseki91132[] = {
  {608,1},	{756,1},	{760,1},	{795,1},
  {612,1},	{758,2}
};

static struct patval fuseki91133[] = {
  {645,1},	{756,1},	{612,1},	{648,1},
  {610,2},	{760,2}
};

static struct patval fuseki91134[] = {
  {644,1},	{608,1},	{686,1},	{756,1},
  {760,1},	{612,1},	{645,2},	{610,2}
};

static struct patval fuseki91135[] = {
  {608,1},	{756,1},	{610,1},	{760,1},
  {796,1},	{612,1},	{686,2},	{759,2}
};

static struct patval fuseki91136[] = {
  {721,1},	{756,1},	{612,1},	{757,1},
  {719,2},	{720,2}
};

static struct patval fuseki91137[] = {
  {756,1},	{760,1},	{686,1},	{612,1},
  {758,2},	{684,2}
};

static struct patval fuseki91138[] = {
  {608,1},	{682,1},	{756,1},	{610,1},
  {758,1},	{612,1},	{686,1},	{760,1}
};

static struct patval fuseki91139[] = {
  {687,1},	{684,1},	{686,1},	{612,2},
  {759,2},	{756,2},	{724,2}
};

static struct patval fuseki91140[] = {
  {759,1},	{722,1},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki91141[] = {
  {756,1},	{760,1},	{612,1},	{722,2}
};

static struct patval fuseki91142[] = {
  {686,1},	{758,1},	{684,1},	{756,2},
  {612,2},	{645,2},	{760,2}
};

static struct patval fuseki91143[] = {
  {684,1},	{682,1},	{610,1},	{756,2},
  {608,2},	{759,2},	{612,2}
};

static struct patval fuseki91144[] = {
  {686,1},	{646,1},	{612,2},	{756,2},
  {760,2}
};

static struct patval fuseki91145[] = {
  {720,1},	{682,2},	{756,2},	{608,2},
  {610,2},	{758,2},	{612,2},	{686,2},
  {760,2}
};

static struct patval fuseki91146[] = {
  {756,1},	{611,1},	{612,1},	{649,2}
};

static struct patval fuseki91147[] = {
  {759,1},	{760,1},	{608,2},	{796,2},
  {612,2},	{756,2}
};

static struct patval fuseki91148[] = {
  {608,1},	{756,1},	{795,1},	{612,1},
  {796,1},	{759,2},	{760,2}
};

static struct patval fuseki91149[] = {
  {645,1},	{756,1},	{612,1},	{647,1},
  {722,2},	{610,2}
};

static struct patval fuseki91150[] = {
  {723,1},	{609,1},	{756,2},	{612,2},
  {682,2}
};

static struct patval fuseki91151[] = {
  {685,1},	{682,1},	{756,1},	{612,1},
  {645,2},	{609,2}
};

static struct patval fuseki91152[] = {
  {684,1},	{608,1},	{645,1},	{756,2},
  {609,2},	{571,2},	{612,2}
};

static struct patval fuseki91153[] = {
  {608,1},	{756,1},	{722,1},	{612,1},
  {760,2}
};

static struct patval fuseki91154[] = {
  {608,1},	{610,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91155[] = {
  {608,1},	{612,1},	{756,1},	{758,1},
  {684,2},	{682,2}
};

static struct patval fuseki91156[] = {
  {645,1},	{609,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91157[] = {
  {756,1},	{720,1},	{612,1},	{684,2}
};

static struct patval fuseki91158[] = {
  {610,1},	{645,1},	{756,2},	{608,2},
  {612,2},	{686,2},	{760,2}
};

static struct patval fuseki91159[] = {
  {647,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91160[] = {
  {722,1},	{648,1},	{610,1},	{647,2},
  {756,2},	{645,2},	{612,2}
};

static struct patval fuseki91161[] = {
  {608,1},	{756,1},	{684,1},	{721,1},
  {760,1},	{612,1},	{722,2}
};

static struct patval fuseki91162[] = {
  {758,1},	{719,1},	{756,2},	{684,2},
  {608,2},	{796,2},	{612,2},	{760,2}
};

static struct patval fuseki91163[] = {
  {720,1},	{719,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91164[] = {
  {722,1},	{760,1},	{608,2},	{759,2},
  {612,2},	{756,2}
};

static struct patval fuseki91165[] = {
  {645,1},	{756,1},	{686,1},	{612,1},
  {722,2},	{610,2}
};

static struct patval fuseki91166[] = {
  {610,1},	{572,1},	{756,2},	{573,2},
  {608,2},	{612,2},	{760,2}
};

static struct patval fuseki91167[] = {
  {685,1},	{682,1},	{756,1},	{612,1},
  {608,2},	{610,2}
};

static struct patval fuseki91168[] = {
  {757,1},	{719,1},	{758,1},	{720,2},
  {608,2},	{684,2},	{756,2},	{722,2},
  {612,2},	{760,2}
};

static struct patval fuseki91169[] = {
  {720,1},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91170[] = {
  {608,1},	{760,1},	{684,2},	{612,2},
  {756,2}
};

static struct patval fuseki91171[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {612,1},	{686,1},	{758,2}
};

static struct patval fuseki91172[] = {
  {645,1},	{756,1},	{760,1},	{612,1},
  {686,2},	{684,2}
};

static struct patval fuseki91173[] = {
  {608,1},	{756,1},	{612,1},	{758,1},
  {610,2},	{723,2}
};

static struct patval fuseki91174[] = {
  {608,1},	{719,1},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki91175[] = {
  {608,1},	{756,1},	{760,1},	{759,1},
  {612,1},	{722,2}
};

static struct patval fuseki91176[] = {
  {758,1},	{609,1},	{756,2},	{612,2},
  {723,2}
};

static struct patval fuseki91177[] = {
  {645,1},	{756,1},	{612,1},	{610,2}
};

static struct patval fuseki91178[] = {
  {758,1},	{796,1},	{684,2},	{608,2},
  {795,2},	{756,2},	{612,2},	{760,2}
};

static struct patval fuseki91179[] = {
  {608,1},	{756,1},	{610,1},	{758,1},
  {612,1},	{760,1}
};

static struct patval fuseki91180[] = {
  {608,1},	{756,1},	{686,1},	{612,1},
  {610,2}
};

static struct patval fuseki91181[] = {
  {756,1},	{685,1},	{612,1},	{723,2}
};

static struct patval fuseki91182[] = {
  {759,1},	{760,1},	{758,1},	{722,2},
  {756,2},	{612,2},	{721,2}
};

static struct patval fuseki91183[] = {
  {756,1},	{609,1},	{683,1},	{612,1},
  {758,2},	{723,2}
};

static struct patval fuseki91184[] = {
  {608,1},	{756,1},	{686,1},	{758,1},
  {760,1},	{612,1},	{610,2},	{722,2}
};

static struct patval fuseki91185[] = {
  {756,1},	{572,1},	{612,1},	{610,1},
  {684,2},	{609,2}
};

static struct patval fuseki91186[] = {
  {795,1},	{646,1},	{758,1},	{794,2},
  {756,2},	{612,2},	{723,2}
};

static struct patval fuseki91187[] = {
  {760,1},	{720,1},	{756,2},	{612,2},
  {608,2}
};

static struct patval fuseki91188[] = {
  {686,1},	{759,1},	{758,2},	{612,2},
  {756,2}
};

static struct patval fuseki91189[] = {
  {722,1},	{645,1},	{646,1},	{609,2},
  {756,2},	{681,2},	{612,2}
};

static struct patval fuseki91190[] = {
  {608,1},	{756,1},	{721,1},	{612,1},
  {760,2}
};

static struct patval fuseki91191[] = {
  {645,1},	{756,1},	{723,1},	{612,1},
  {758,2},	{684,2}
};

static struct patval fuseki91192[] = {
  {758,1},	{719,1},	{756,2},	{610,2},
  {608,2},	{612,2},	{760,2}
};

static struct patval fuseki91193[] = {
  {608,1},	{759,1},	{684,2},	{756,2},
  {612,2}
};

static struct patval fuseki91194[] = {
  {724,1},	{759,1},	{612,2},	{686,2},
  {756,2}
};

static struct patval fuseki91195[] = {
  {608,1},	{760,1},	{609,1},	{756,2},
  {646,2},	{612,2},	{645,2}
};

static struct patval fuseki91196[] = {
  {760,1},	{757,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91197[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {612,1},	{722,2}
};

static struct patval fuseki91198[] = {
  {756,1},	{758,1},	{612,1},	{796,1},
  {759,2},	{686,2}
};

static struct patval fuseki91199[] = {
  {759,1},	{760,1},	{722,2},	{608,2},
  {612,2},	{756,2}
};

static struct patval fuseki91200[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {612,1},	{723,1},	{722,2}
};

static struct patval fuseki91201[] = {
  {608,1},	{612,1},	{756,1},	{759,1},
  {684,2},	{682,2}
};

static struct patval fuseki91202[] = {
  {722,1},	{608,1},	{645,1},	{756,2},
  {609,2},	{681,2},	{612,2}
};

static struct patval fuseki91203[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {795,1},	{612,1},	{758,2}
};

static struct patval fuseki91204[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {723,1},	{612,1},	{686,1},	{722,2},
  {685,2}
};

static struct patval fuseki91205[] = {
  {608,1},	{612,1},	{756,1},	{610,1},
  {682,2}
};

static struct patval fuseki91206[] = {
  {722,1},	{685,1},	{684,2},	{756,2},
  {608,2},	{612,2},	{723,2},	{760,2}
};

static struct patval fuseki91207[] = {
  {608,1},	{756,1},	{610,1},	{760,1},
  {612,1},	{758,2}
};

static struct patval fuseki91208[] = {
  {758,1},	{719,1},	{756,2},	{684,2},
  {608,2},	{722,2},	{612,2},	{760,2}
};

static struct patval fuseki91209[] = {
  {608,1},	{684,1},	{756,2},	{612,2},
  {760,2}
};

static struct patval fuseki91210[] = {
  {718,1},	{608,1},	{760,1},	{756,1},
  {612,1},	{719,2}
};

static struct patval fuseki91211[] = {
  {756,1},	{646,1},	{612,1},	{760,2}
};

static struct patval fuseki91212[] = {
  {686,1},	{684,1},	{610,1},	{756,2},
  {612,2},	{645,2},	{760,2}
};

static struct patval fuseki91213[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {612,1},	{649,2},	{611,2}
};

static struct patval fuseki91214[] = {
  {682,1},	{756,1},	{612,1},	{610,1},
  {684,2},	{609,2}
};

static struct patval fuseki91215[] = {
  {759,1},	{648,1},	{611,1},	{684,2},
  {610,2},	{756,2},	{608,2},	{612,2}
};

static struct patval fuseki91216[] = {
  {611,1},	{649,1},	{684,2},	{608,2},
  {612,2},	{756,2}
};

static struct patval fuseki91217[] = {
  {612,1},	{756,1},	{609,1},	{683,1},
  {682,2},	{760,2}
};

static struct patval fuseki91218[] = {
  {608,1},	{684,1},	{756,2},	{759,2},
  {612,2}
};

static struct patval fuseki91219[] = {
  {645,1},	{682,1},	{720,1},	{756,2},
  {683,2},	{719,2},	{612,2}
};

static struct patval fuseki91220[] = {
  {610,1},	{682,1},	{723,1},	{608,2},
  {758,2},	{612,2},	{756,2}
};

static struct patval fuseki91221[] = {
  {608,1},	{686,1},	{684,2},	{612,2},
  {756,2}
};

static struct patval fuseki91222[] = {
  {756,1},	{609,1},	{723,1},	{612,1},
  {758,2},	{684,2}
};

static struct patval fuseki91223[] = {
  {760,1},	{646,1},	{572,2},	{612,2},
  {756,2}
};

static struct patval fuseki91224[] = {
  {681,1},	{608,1},	{612,1},	{756,1},
  {610,1},	{684,2},	{682,2}
};

static struct patval fuseki91225[] = {
  {683,1},	{756,1},	{609,1},	{612,1},
  {685,2},	{682,2}
};

static struct patval fuseki91226[] = {
  {645,1},	{757,1},	{756,2},	{610,2},
  {612,2}
};

static struct patval fuseki91227[] = {
  {608,1},	{760,1},	{722,1},	{758,2},
  {612,2},	{686,2},	{756,2}
};

static struct patval fuseki91228[] = {
  {686,1},	{759,1},	{757,1},	{610,2},
  {756,2},	{796,2},	{612,2},	{608,2},
  {760,2}
};

static struct patval fuseki91229[] = {
  {684,1},	{608,1},	{646,1},	{756,2},
  {645,2},	{607,2},	{612,2}
};

static struct patval fuseki91230[] = {
  {649,1},	{759,1},	{611,1},	{684,2},
  {756,2},	{612,2},	{608,2},	{760,2}
};

static struct patval fuseki91231[] = {
  {608,1},	{647,1},	{756,2},	{682,2},
  {612,2}
};

static struct patval fuseki91232[] = {
  {684,1},	{718,1},	{682,1},	{608,2},
  {756,2},	{681,2},	{612,2},	{686,2},
  {760,2}
};

static struct patval fuseki91233[] = {
  {759,1},	{645,1},	{756,2},	{608,2},
  {612,2}
};

static struct patval fuseki91234[] = {
  {608,1},	{760,1},	{756,1},	{612,1},
  {684,1},	{721,1},	{720,2},	{682,2}
};

static struct patval fuseki91235[] = {
  {756,1},	{609,1},	{723,1},	{612,1},
  {684,2},	{610,2}
};

static struct patval fuseki91236[] = {
  {718,1},	{682,1},	{612,1},	{756,1},
  {720,2},	{719,2}
};

static struct patval fuseki91237[] = {
  {608,1},	{756,1},	{724,1},	{612,1},
  {723,1},	{760,2},	{611,2}
};

static struct patval fuseki91238[] = {
  {682,1},	{756,1},	{687,1},	{612,1},
  {723,2},	{609,2}
};

static struct patval fuseki91239[] = {
  {723,1},	{721,1},	{684,2},	{612,2},
  {756,2}
};

static struct patval fuseki91240[] = {
  {608,1},	{612,1},	{756,1},	{610,1},
  {758,2},	{645,2}
};

static struct patval fuseki91241[] = {
  {756,1},	{720,1},	{686,1},	{612,1},
  {684,2},	{757,2}
};

static struct patval fuseki91242[] = {
  {759,1},	{760,1},	{610,1},	{795,2},
  {608,2},	{796,2},	{612,2},	{756,2}
};

static struct patval fuseki91243[] = {
  {608,1},	{756,1},	{610,1},	{684,1},
  {760,1},	{612,1},	{758,2}
};

static struct patval fuseki91244[] = {
  {684,1},	{610,1},	{646,1},	{609,2},
  {756,2},	{612,2},	{723,2}
};

static struct patval fuseki91245[] = {
  {756,1},	{760,1},	{722,1},	{612,1},
  {686,2},	{684,2}
};

static struct patval fuseki91246[] = {
  {573,1},	{756,2},	{608,2},	{612,2},
  {760,2}
};

static struct patval fuseki91247[] = {
  {608,1},	{760,1},	{756,1},	{684,1},
  {612,1},	{722,1},	{796,1},	{758,2},
  {719,2}
};

static struct patval fuseki91248[] = {
  {760,1},	{611,1},	{756,2},	{612,2},
  {608,2},	{724,2}
};

static struct patval fuseki91249[] = {
  {756,1},	{646,1},	{610,1},	{612,1},
  {758,2},	{684,2}
};

static struct patval fuseki91250[] = {
  {608,1},	{756,1},	{684,1},	{760,1},
  {795,1},	{759,1},	{612,1},	{796,2},
  {758,2}
};

static struct patval fuseki91251[] = {
  {608,1},	{612,1},	{756,1},	{610,1},
  {758,1},	{721,2},	{682,2}
};

static struct patval fuseki91252[] = {
  {608,1},	{760,1},	{756,1},	{684,1},
  {612,1},	{682,2}
};

static struct patval fuseki91253[] = {
  {608,1},	{612,1},	{756,1},	{720,1},
  {719,2}
};

static struct patval fuseki91254[] = {
  {682,1},	{756,1},	{650,1},	{612,1},
  {649,2},	{684,2}
};

static struct patval fuseki91255[] = {
  {682,1},	{685,1},	{609,2},	{756,2},
  {612,2}
};

static struct patval fuseki91256[] = {
  {607,1},	{758,1},	{645,1},	{756,2},
  {610,2},	{608,2},	{612,2}
};

static struct patval fuseki91257[] = {
  {686,1},	{610,1},	{756,2},	{612,2},
  {645,2}
};

static struct patval fuseki91258[] = {
  {682,1},	{756,1},	{612,1},	{720,2}
};

static struct patval fuseki91259[] = {
  {648,1},	{686,1},	{610,1},	{647,2},
  {645,2},	{612,2},	{756,2}
};

static struct patval fuseki91260[] = {
  {608,1},	{756,1},	{647,1},	{684,1},
  {760,1},	{722,1},	{612,1},	{686,2},
  {648,2}
};

static struct patval fuseki91261[] = {
  {684,1},	{718,1},	{682,1},	{608,2},
  {756,2},	{610,2},	{681,2},	{612,2}
};

static struct patval fuseki91262[] = {
  {608,1},	{645,1},	{609,1},	{756,2},
  {646,2},	{683,2},	{612,2}
};

static struct patval fuseki91263[] = {
  {645,1},	{756,1},	{723,1},	{612,1},
  {758,2},	{609,2}
};

static struct patval fuseki91264[] = {
  {760,1},	{722,1},	{611,1},	{756,2},
  {612,2},	{723,2},	{608,2},	{724,2}
};

static struct patval fuseki91265[] = {
  {608,1},	{756,1},	{684,1},	{612,1},
  {611,2}
};

static struct patval fuseki91266[] = {
  {608,1},	{760,1},	{756,1},	{720,1},
  {684,1},	{612,1},	{722,1},	{758,2},
  {719,2}
};

static struct patval fuseki91267[] = {
  {686,1},	{609,1},	{683,2},	{612,2},
  {756,2}
};

static struct patval fuseki91268[] = {
  {608,1},	{760,1},	{756,1},	{610,1},
  {686,1},	{612,1},	{758,2},	{719,2}
};

static struct patval fuseki91269[] = {
  {608,1},	{723,1},	{721,2},	{612,2},
  {756,2}
};

static struct patval fuseki91270[] = {
  {760,1},	{686,1},	{612,2},	{722,2},
  {756,2}
};

static struct patval fuseki91271[] = {
  {574,1},	{646,1},	{756,2},	{759,2},
  {612,2}
};

static struct patval fuseki91272[] = {
  {722,1},	{648,1},	{686,1},	{756,2},
  {612,2},	{649,2},	{685,2}
};

static struct patval fuseki91273[] = {
  {608,1},	{645,1},	{723,1},	{609,2},
  {683,2},	{612,2},	{756,2}
};

static struct patval fuseki91274[] = {
  {756,1},	{724,1},	{649,1},	{612,1},
  {685,2},	{648,2}
};

static struct patval fuseki91275[] = {
  {608,1},	{610,1},	{756,2},	{684,2},
  {612,2}
};

static struct patval fuseki91276[] = {
  {649,1},	{611,1},	{684,1},	{756,2},
  {612,2},	{682,2},	{650,2}
};

static struct patval fuseki91277[] = {
  {645,1},	{756,1},	{612,1},	{647,1},
  {610,2},	{686,2}
};

static struct patval fuseki91278[] = {
  {720,1},	{682,1},	{756,2},	{608,2},
  {684,2},	{612,2},	{760,2}
};

static struct patval fuseki91279[] = {
  {756,1},	{720,1},	{684,1},	{612,1},
  {721,2},	{723,2}
};

static struct patval fuseki91280[] = {
  {608,1},	{760,1},	{610,1},	{756,2},
  {685,2},	{612,2},	{682,2}
};

static struct patval fuseki91281[] = {
  {608,1},	{756,1},	{684,1},	{648,1},
  {685,1},	{760,1},	{612,1},	{686,2},
  {722,2}
};

static struct patval fuseki91282[] = {
  {681,1},	{608,1},	{686,1},	{756,1},
  {760,1},	{612,1},	{682,2},	{684,2}
};

static struct patval fuseki91283[] = {
  {686,1},	{756,1},	{758,1},	{612,1},
  {608,2},	{760,2}
};

static struct patval fuseki91284[] = {
  {684,1},	{646,1},	{756,2},	{682,2},
  {608,2},	{612,2}
};

static struct patval fuseki91285[] = {
  {686,1},	{646,1},	{573,1},	{759,2},
  {612,2},	{756,2},	{650,2}
};

static struct patval fuseki91286[] = {
  {759,1},	{611,1},	{684,2},	{756,2},
  {608,2},	{612,2}
};

static struct patval fuseki91287[] = {
  {723,1},	{650,1},	{758,1},	{683,2},
  {612,2},	{756,2},	{609,2}
};

static struct patval fuseki91288[] = {
  {684,1},	{646,1},	{609,1},	{756,2},
  {610,2},	{682,2},	{612,2}
};

static struct patval fuseki91289[] = {
  {608,1},	{682,1},	{756,1},	{612,1},
  {721,2}
};

static struct patval fuseki91290[] = {
  {758,1},	{723,1},	{721,1},	{684,2},
  {756,2},	{612,2},	{720,2}
};

static struct patval fuseki91291[] = {
  {758,1},	{686,1},	{684,1},	{610,2},
  {756,2},	{612,2},	{646,2}
};

static struct patval fuseki91292[] = {
  {686,1},	{756,1},	{760,1},	{612,1},
  {608,2},	{684,2}
};

static struct patval fuseki91293[] = {
  {757,1},	{720,1},	{719,1},	{756,2},
  {682,2},	{718,2},	{612,2}
};

static struct patval fuseki91294[] = {
  {608,1},	{682,1},	{756,1},	{610,1},
  {684,1},	{758,1},	{612,1},	{686,1},
  {760,1}
};

static struct patval fuseki91295[] = {
  {718,1},	{682,1},	{612,1},	{756,1},
  {757,2},	{719,2}
};

static struct patval fuseki91296[] = {
  {682,1},	{758,1},	{684,1},	{609,2},
  {756,2},	{612,2},	{723,2}
};

static struct patval fuseki91297[] = {
  {608,1},	{756,1},	{610,1},	{684,1},
  {612,1},	{759,2},	{611,2}
};

static struct patval fuseki91298[] = {
  {682,1},	{760,1},	{720,1},	{683,2},
  {609,2},	{612,2},	{756,2}
};

static struct patval fuseki91299[] = {
  {721,1},	{682,1},	{756,2},	{610,2},
  {608,2},	{612,2}
};

static struct patval fuseki91300[] = {
  {682,1},	{685,1},	{720,1},	{683,2},
  {609,2},	{756,2},	{612,2}
};

static struct patval fuseki91301[] = {
  {756,1},	{612,1},	{685,1},	{684,2}
};

static struct patval fuseki91302[] = {
  {757,1},	{682,1},	{720,1},	{756,2},
  {608,2},	{684,2},	{721,2},	{612,2},
  {760,2}
};

struct fullboard_pattern fuseki9[] = {
  {fuseki90,0,"Fuseki1",684,504.000000},
  {fuseki91,0,"Fuseki2",608,461.000000},
  {fuseki92,0,"Fuseki3",759,363.000000},
  {fuseki93,0,"Fuseki4",720,202.000000},
  {fuseki94,0,"Fuseki5",721,33.000000},
  {fuseki95,0,"Fuseki6",686,16.000000},
  {fuseki96,1,"Fuseki8",611,173.000000},
  {fuseki97,1,"Fuseki9",756,144.000000},
  {fuseki98,1,"Fuseki10",758,80.000000},
  {fuseki99,1,"Fuseki11",646,52.000000},
  {fuseki910,1,"Fuseki12",683,39.000000},
  {fuseki911,1,"Fuseki13",756,96.000000},
  {fuseki912,1,"Fuseki14",723,79.000000},
  {fuseki913,1,"Fuseki15",608,56.000000},
  {fuseki914,1,"Fuseki16",719,44.000000},
  {fuseki915,1,"Fuseki17",720,44.000000},
  {fuseki916,1,"Fuseki18",684,42.000000},
  {fuseki917,1,"Fuseki19",648,35.000000},
  {fuseki918,1,"Fuseki20",649,14.000000},
  {fuseki919,1,"Fuseki21",722,10.000000},
  {fuseki920,1,"Fuseki22",609,72.000000},
  {fuseki921,1,"Fuseki23",684,42.000000},
  {fuseki922,1,"Fuseki24",722,41.000000},
  {fuseki923,1,"Fuseki25",646,27.000000},
  {fuseki924,1,"Fuseki26",683,23.000000},
  {fuseki925,1,"Fuseki27",612,23.000000},
  {fuseki926,1,"Fuseki28",760,22.000000},
  {fuseki927,1,"Fuseki29",649,19.000000},
  {fuseki928,1,"Fuseki30",610,17.000000},
  {fuseki929,1,"Fuseki31",757,13.000000},
  {fuseki930,1,"Fuseki32",648,10.000000},
  {fuseki931,1,"Fuseki33",721,8.000000},
  {fuseki932,1,"Fuseki34",612,37.000000},
  {fuseki933,1,"Fuseki35",646,32.000000},
  {fuseki934,1,"Fuseki36",757,32.000000},
  {fuseki935,1,"Fuseki37",757,26.000000},
  {fuseki936,1,"Fuseki38",684,17.000000},
  {fuseki937,1,"Fuseki39",648,14.000000},
  {fuseki938,1,"Fuseki40",608,14.000000},
  {fuseki939,1,"Fuseki41",685,12.000000},
  {fuseki940,1,"Fuseki42",760,5.000000},
  {fuseki941,1,"Fuseki43",609,4.000000},
  {fuseki942,2,"Fuseki44",609,35.000000},
  {fuseki943,2,"Fuseki45",758,27.000000},
  {fuseki944,2,"Fuseki46",759,24.000000},
  {fuseki945,2,"Fuseki47",686,18.000000},
  {fuseki946,2,"Fuseki48",648,13.000000},
  {fuseki947,2,"Fuseki49",609,11.000000},
  {fuseki948,2,"Fuseki50",756,9.000000},
  {fuseki949,2,"Fuseki51",760,6.000000},
  {fuseki950,2,"Fuseki52",609,5.000000},
  {fuseki951,2,"Fuseki53",645,4.000000},
  {fuseki952,2,"Fuseki54",758,51.000000},
  {fuseki953,2,"Fuseki55",649,29.000000},
  {fuseki954,2,"Fuseki56",757,23.000000},
  {fuseki955,2,"Fuseki57",612,16.000000},
  {fuseki956,2,"Fuseki58",608,7.000000},
  {fuseki957,2,"Fuseki59",760,47.000000},
  {fuseki958,2,"Fuseki60",609,21.000000},
  {fuseki959,2,"Fuseki61",757,6.000000},
  {fuseki960,2,"Fuseki62",610,20.000000},
  {fuseki961,2,"Fuseki63",649,12.000000},
  {fuseki962,2,"Fuseki64",686,12.000000},
  {fuseki963,2,"Fuseki65",645,9.000000},
  {fuseki964,2,"Fuseki66",646,7.000000},
  {fuseki965,2,"Fuseki67",612,6.000000},
  {fuseki966,2,"Fuseki68",756,5.000000},
  {fuseki967,2,"Fuseki69",723,4.000000},
  {fuseki968,2,"Fuseki70",721,3.000000},
  {fuseki969,2,"Fuseki71",609,23.000000},
  {fuseki970,2,"Fuseki72",760,10.000000},
  {fuseki971,2,"Fuseki73",757,10.000000},
  {fuseki972,2,"Fuseki74",609,7.000000},
  {fuseki973,2,"Fuseki75",722,6.000000},
  {fuseki974,2,"Fuseki76",760,5.000000},
  {fuseki975,2,"Fuseki77",608,5.000000},
  {fuseki976,2,"Fuseki78",684,3.000000},
  {fuseki977,2,"Fuseki79",758,3.000000},
  {fuseki978,2,"Fuseki80",759,26.000000},
  {fuseki979,2,"Fuseki81",645,10.000000},
  {fuseki980,2,"Fuseki82",719,7.000000},
  {fuseki981,2,"Fuseki83",648,6.000000},
  {fuseki982,2,"Fuseki84",682,4.000000},
  {fuseki983,2,"Fuseki85",612,4.000000},
  {fuseki984,2,"Fuseki86",685,4.000000},
  {fuseki985,2,"Fuseki87",756,4.000000},
  {fuseki986,2,"Fuseki88",758,3.000000},
  {fuseki987,3,"Fuseki89",612,41.000000},
  {fuseki988,3,"Fuseki90",723,13.000000},
  {fuseki989,2,"Fuseki91",760,23.000000},
  {fuseki990,2,"Fuseki92",612,12.000000},
  {fuseki991,2,"Fuseki93",611,5.000000},
  {fuseki992,2,"Fuseki94",684,4.000000},
  {fuseki993,2,"Fuseki95",647,31.000000},
  {fuseki994,2,"Fuseki96",759,7.000000},
  {fuseki995,2,"Fuseki97",760,4.000000},
  {fuseki996,3,"Fuseki98",611,20.000000},
  {fuseki997,3,"Fuseki99",610,9.000000},
  {fuseki998,3,"Fuseki100",612,7.000000},
  {fuseki999,3,"Fuseki101",756,4.000000},
  {fuseki9100,3,"Fuseki102",682,2.000000},
  {fuseki9101,3,"Fuseki103",722,2.000000},
  {fuseki9102,3,"Fuseki104",646,2.000000},
  {fuseki9103,2,"Fuseki105",609,11.000000},
  {fuseki9104,2,"Fuseki106",608,8.000000},
  {fuseki9105,2,"Fuseki107",646,8.000000},
  {fuseki9106,2,"Fuseki108",760,5.000000},
  {fuseki9107,2,"Fuseki109",649,5.000000},
  {fuseki9108,2,"Fuseki110",684,2.000000},
  {fuseki9109,2,"Fuseki112",649,10.000000},
  {fuseki9110,2,"Fuseki113",608,7.000000},
  {fuseki9111,2,"Fuseki114",608,6.000000},
  {fuseki9112,2,"Fuseki115",645,5.000000},
  {fuseki9113,2,"Fuseki116",646,4.000000},
  {fuseki9114,2,"Fuseki117",650,2.000000},
  {fuseki9115,2,"Fuseki118",648,2.000000},
  {fuseki9116,2,"Fuseki119",758,10.000000},
  {fuseki9117,2,"Fuseki120",720,8.000000},
  {fuseki9118,2,"Fuseki121",757,5.000000},
  {fuseki9119,2,"Fuseki122",719,3.000000},
  {fuseki9120,2,"Fuseki123",612,2.000000},
  {fuseki9121,2,"Fuseki124",608,2.000000},
  {fuseki9122,2,"Fuseki125",685,2.000000},
  {fuseki9123,2,"Fuseki126",759,2.000000},
  {fuseki9124,2,"Fuseki127",609,2.000000},
  {fuseki9125,2,"Fuseki128",647,2.000000},
  {fuseki9126,2,"Fuseki129",756,20.000000},
  {fuseki9127,2,"Fuseki130",648,5.000000},
  {fuseki9128,2,"Fuseki131",612,5.000000},
  {fuseki9129,2,"Fuseki132",645,4.000000},
  {fuseki9130,2,"Fuseki133",759,3.000000},
  {fuseki9131,2,"Fuseki134",610,2.000000},
  {fuseki9132,2,"Fuseki135",647,2.000000},
  {fuseki9133,2,"Fuseki136",759,13.000000},
  {fuseki9134,2,"Fuseki137",757,6.000000},
  {fuseki9135,2,"Fuseki138",608,4.000000},
  {fuseki9136,2,"Fuseki139",722,3.000000},
  {fuseki9137,2,"Fuseki140",756,3.000000},
  {fuseki9138,2,"Fuseki141",610,2.000000},
  {fuseki9139,2,"Fuseki142",611,2.000000},
  {fuseki9140,2,"Fuseki143",648,2.000000},
  {fuseki9141,2,"Fuseki144",685,2.000000},
  {fuseki9142,4,"Fuseki145",682,8.000000},
  {fuseki9143,4,"Fuseki146",719,5.000000},
  {fuseki9144,4,"Fuseki147",685,4.000000},
  {fuseki9145,4,"Fuseki148",684,4.000000},
  {fuseki9146,4,"Fuseki149",650,3.000000},
  {fuseki9147,4,"Fuseki150",648,3.000000},
  {fuseki9148,4,"Fuseki151",757,2.000000},
  {fuseki9149,4,"Fuseki152",610,2.000000},
  {fuseki9150,4,"Fuseki153",685,2.000000},
  {fuseki9151,4,"Fuseki154",795,2.000000},
  {fuseki9152,2,"Fuseki155",611,11.000000},
  {fuseki9153,2,"Fuseki156",686,6.000000},
  {fuseki9154,2,"Fuseki157",720,6.000000},
  {fuseki9155,2,"Fuseki158",608,4.000000},
  {fuseki9156,2,"Fuseki159",683,3.000000},
  {fuseki9157,2,"Fuseki160",722,3.000000},
  {fuseki9158,2,"Fuseki161",649,2.000000},
  {fuseki9159,3,"Fuseki162",686,19.000000},
  {fuseki9160,3,"Fuseki163",608,5.000000},
  {fuseki9161,3,"Fuseki164",721,2.000000},
  {fuseki9162,3,"Fuseki165",683,2.000000},
  {fuseki9163,3,"Fuseki166",757,2.000000},
  {fuseki9164,2,"Fuseki167",720,20.000000},
  {fuseki9165,2,"Fuseki168",685,11.000000},
  {fuseki9166,2,"Fuseki169",645,23.000000},
  {fuseki9167,2,"Fuseki170",612,4.000000},
  {fuseki9168,2,"Fuseki171",612,3.000000},
  {fuseki9169,1,"Fuseki172",647,9.000000},
  {fuseki9170,1,"Fuseki173",646,7.000000},
  {fuseki9171,1,"Fuseki174",759,3.000000},
  {fuseki9172,1,"Fuseki175",760,3.000000},
  {fuseki9173,1,"Fuseki176",721,3.000000},
  {fuseki9174,1,"Fuseki177",684,2.000000},
  {fuseki9175,2,"Fuseki178",645,7.000000},
  {fuseki9176,2,"Fuseki179",683,5.000000},
  {fuseki9177,2,"Fuseki180",611,3.000000},
  {fuseki9178,2,"Fuseki181",612,3.000000},
  {fuseki9179,2,"Fuseki182",686,3.000000},
  {fuseki9180,2,"Fuseki183",685,3.000000},
  {fuseki9181,2,"Fuseki184",612,3.000000},
  {fuseki9182,2,"Fuseki185",722,2.000000},
  {fuseki9183,2,"Fuseki186",649,8.000000},
  {fuseki9184,2,"Fuseki187",648,6.000000},
  {fuseki9185,2,"Fuseki188",684,4.000000},
  {fuseki9186,2,"Fuseki189",647,3.000000},
  {fuseki9187,2,"Fuseki190",609,3.000000},
  {fuseki9188,2,"Fuseki191",609,2.000000},
  {fuseki9189,2,"Fuseki192",612,2.000000},
  {fuseki9190,2,"Fuseki193",610,2.000000},
  {fuseki9191,3,"Fuseki194",719,11.000000},
  {fuseki9192,3,"Fuseki195",683,11.000000},
  {fuseki9193,3,"Fuseki196",758,4.000000},
  {fuseki9194,3,"Fuseki197",646,2.000000},
  {fuseki9195,3,"Fuseki198",758,2.000000},
  {fuseki9196,3,"Fuseki199",650,13.000000},
  {fuseki9197,3,"Fuseki200",611,6.000000},
  {fuseki9198,3,"Fuseki201",646,5.000000},
  {fuseki9199,3,"Fuseki202",760,3.000000},
  {fuseki9200,2,"Fuseki203",719,7.000000},
  {fuseki9201,2,"Fuseki204",723,6.000000},
  {fuseki9202,2,"Fuseki205",720,6.000000},
  {fuseki9203,2,"Fuseki206",611,4.000000},
  {fuseki9204,3,"Fuseki207",646,9.000000},
  {fuseki9205,3,"Fuseki208",611,4.000000},
  {fuseki9206,3,"Fuseki209",649,3.000000},
  {fuseki9207,3,"Fuseki210",608,3.000000},
  {fuseki9208,3,"Fuseki211",608,2.000000},
  {fuseki9209,3,"Fuseki212",649,8.000000},
  {fuseki9210,3,"Fuseki213",609,6.000000},
  {fuseki9211,3,"Fuseki214",756,4.000000},
  {fuseki9212,3,"Fuseki215",610,2.000000},
  {fuseki9213,3,"Fuseki216",648,2.000000},
  {fuseki9214,2,"Fuseki217",648,5.000000},
  {fuseki9215,2,"Fuseki218",758,4.000000},
  {fuseki9216,2,"Fuseki219",611,3.000000},
  {fuseki9217,2,"Fuseki220",609,3.000000},
  {fuseki9218,2,"Fuseki221",608,2.000000},
  {fuseki9219,2,"Fuseki222",758,2.000000},
  {fuseki9220,3,"Fuseki223",683,17.000000},
  {fuseki9221,3,"Fuseki224",722,4.000000},
  {fuseki9222,3,"Fuseki226",648,10.000000},
  {fuseki9223,3,"Fuseki227",760,6.000000},
  {fuseki9224,3,"Fuseki228",760,3.000000},
  {fuseki9225,3,"Fuseki229",649,2.000000},
  {fuseki9226,2,"Fuseki230",760,5.000000},
  {fuseki9227,2,"Fuseki231",645,4.000000},
  {fuseki9228,2,"Fuseki232",646,4.000000},
  {fuseki9229,2,"Fuseki233",759,2.000000},
  {fuseki9230,2,"Fuseki234",720,2.000000},
  {fuseki9231,2,"Fuseki235",609,8.000000},
  {fuseki9232,2,"Fuseki236",723,3.000000},
  {fuseki9233,2,"Fuseki237",722,3.000000},
  {fuseki9234,2,"Fuseki238",759,3.000000},
  {fuseki9235,2,"Fuseki239",608,3.000000},
  {fuseki9236,2,"Fuseki240",682,2.000000},
  {fuseki9237,3,"Fuseki241",645,10.000000},
  {fuseki9238,3,"Fuseki242",612,7.000000},
  {fuseki9239,3,"Fuseki243",683,2.000000},
  {fuseki9240,3,"Fuseki244",646,2.000000},
  {fuseki9241,3,"Fuseki245",610,2.000000},
  {fuseki9242,3,"Fuseki246",609,10.000000},
  {fuseki9243,3,"Fuseki247",608,8.000000},
  {fuseki9244,2,"Fuseki248",758,6.000000},
  {fuseki9245,2,"Fuseki249",609,5.000000},
  {fuseki9246,2,"Fuseki250",611,3.000000},
  {fuseki9247,2,"Fuseki251",608,2.000000},
  {fuseki9248,3,"Fuseki252",721,11.000000},
  {fuseki9249,3,"Fuseki253",721,7.000000},
  {fuseki9250,3,"Fuseki254",645,10.000000},
  {fuseki9251,3,"Fuseki255",760,3.000000},
  {fuseki9252,3,"Fuseki256",682,3.000000},
  {fuseki9253,3,"Fuseki257",719,10.000000},
  {fuseki9254,3,"Fuseki258",573,3.000000},
  {fuseki9255,3,"Fuseki259",646,2.000000},
  {fuseki9256,3,"Fuseki260",649,2.000000},
  {fuseki9257,4,"Fuseki261",682,6.000000},
  {fuseki9258,4,"Fuseki262",649,6.000000},
  {fuseki9259,4,"Fuseki263",719,3.000000},
  {fuseki9260,4,"Fuseki264",758,2.000000},
  {fuseki9261,4,"Fuseki265",645,4.000000},
  {fuseki9262,4,"Fuseki266",682,4.000000},
  {fuseki9263,4,"Fuseki267",723,3.000000},
  {fuseki9264,4,"Fuseki268",719,3.000000},
  {fuseki9265,4,"Fuseki269",608,2.000000},
  {fuseki9266,2,"Fuseki270",723,5.000000},
  {fuseki9267,2,"Fuseki271",609,4.000000},
  {fuseki9268,2,"Fuseki272",648,3.000000},
  {fuseki9269,2,"Fuseki273",610,2.000000},
  {fuseki9270,2,"Fuseki274",611,2.000000},
  {fuseki9271,3,"Fuseki275",686,14.000000},
  {fuseki9272,3,"Fuseki276",758,2.000000},
  {fuseki9273,3,"Fuseki277",609,17.000000},
  {fuseki9274,3,"Fuseki278",647,7.000000},
  {fuseki9275,3,"Fuseki279",648,5.000000},
  {fuseki9276,3,"Fuseki280",573,2.000000},
  {fuseki9277,3,"Fuseki281",759,7.000000},
  {fuseki9278,3,"Fuseki282",758,5.000000},
  {fuseki9279,3,"Fuseki283",719,2.000000},
  {fuseki9280,3,"Fuseki284",687,2.000000},
  {fuseki9281,4,"Fuseki285",756,8.000000},
  {fuseki9282,4,"Fuseki286",757,3.000000},
  {fuseki9283,4,"Fuseki287",686,3.000000},
  {fuseki9284,4,"Fuseki288",794,2.000000},
  {fuseki9285,4,"Fuseki289",611,2.000000},
  {fuseki9286,2,"Fuseki290",760,7.000000},
  {fuseki9287,2,"Fuseki291",759,7.000000},
  {fuseki9288,2,"Fuseki292",719,2.000000},
  {fuseki9289,4,"Fuseki293",608,7.000000},
  {fuseki9290,4,"Fuseki294",608,4.000000},
  {fuseki9291,4,"Fuseki295",686,2.000000},
  {fuseki9292,2,"Fuseki296",647,9.000000},
  {fuseki9293,2,"Fuseki297",648,4.000000},
  {fuseki9294,2,"Fuseki298",609,3.000000},
  {fuseki9295,1,"Fuseki299",684,5.000000},
  {fuseki9296,1,"Fuseki300",611,3.000000},
  {fuseki9297,1,"Fuseki301",756,2.000000},
  {fuseki9298,1,"Fuseki302",760,5.000000},
  {fuseki9299,1,"Fuseki303",612,5.000000},
  {fuseki9300,4,"Fuseki304",686,3.000000},
  {fuseki9301,4,"Fuseki305",686,3.000000},
  {fuseki9302,4,"Fuseki306",611,2.000000},
  {fuseki9303,4,"Fuseki307",610,2.000000},
  {fuseki9304,2,"Fuseki308",718,3.000000},
  {fuseki9305,2,"Fuseki309",719,2.000000},
  {fuseki9306,2,"Fuseki310",684,2.000000},
  {fuseki9307,2,"Fuseki311",758,2.000000},
  {fuseki9308,2,"Fuseki312",756,4.000000},
  {fuseki9309,2,"Fuseki313",684,3.000000},
  {fuseki9310,2,"Fuseki314",720,2.000000},
  {fuseki9311,2,"Fuseki315",647,2.000000},
  {fuseki9312,2,"Fuseki316",719,3.000000},
  {fuseki9313,2,"Fuseki317",720,2.000000},
  {fuseki9314,2,"Fuseki318",721,2.000000},
  {fuseki9315,2,"Fuseki319",723,4.000000},
  {fuseki9316,2,"Fuseki320",608,3.000000},
  {fuseki9317,2,"Fuseki321",645,2.000000},
  {fuseki9318,2,"Fuseki322",722,2.000000},
  {fuseki9319,3,"Fuseki323",611,6.000000},
  {fuseki9320,3,"Fuseki324",610,3.000000},
  {fuseki9321,3,"Fuseki325",756,2.000000},
  {fuseki9322,4,"Fuseki326",610,5.000000},
  {fuseki9323,4,"Fuseki327",756,2.000000},
  {fuseki9324,4,"Fuseki328",795,2.000000},
  {fuseki9325,4,"Fuseki329",720,2.000000},
  {fuseki9326,4,"Fuseki330",757,4.000000},
  {fuseki9327,4,"Fuseki331",687,4.000000},
  {fuseki9328,4,"Fuseki332",686,3.000000},
  {fuseki9329,3,"Fuseki333",610,5.000000},
  {fuseki9330,3,"Fuseki334",645,4.000000},
  {fuseki9331,3,"Fuseki335",685,2.000000},
  {fuseki9332,3,"Fuseki336",608,4.000000},
  {fuseki9333,3,"Fuseki337",645,4.000000},
  {fuseki9334,3,"Fuseki338",682,2.000000},
  {fuseki9335,4,"Fuseki339",759,4.000000},
  {fuseki9336,4,"Fuseki340",574,2.000000},
  {fuseki9337,4,"Fuseki341",758,2.000000},
  {fuseki9338,4,"Fuseki342",760,3.000000},
  {fuseki9339,4,"Fuseki343",683,3.000000},
  {fuseki9340,3,"Fuseki344",686,3.000000},
  {fuseki9341,3,"Fuseki345",723,2.000000},
  {fuseki9342,3,"Fuseki346",646,2.000000},
  {fuseki9343,3,"Fuseki347",760,2.000000},
  {fuseki9344,3,"Fuseki348",682,6.000000},
  {fuseki9345,3,"Fuseki349",649,2.000000},
  {fuseki9346,3,"Fuseki350",760,10.000000},
  {fuseki9347,3,"Fuseki351",649,2.000000},
  {fuseki9348,3,"Fuseki352",757,2.000000},
  {fuseki9349,3,"Fuseki353",756,2.000000},
  {fuseki9350,3,"Fuseki354",723,2.000000},
  {fuseki9351,3,"Fuseki355",645,2.000000},
  {fuseki9352,3,"Fuseki356",723,6.000000},
  {fuseki9353,3,"Fuseki357",685,3.000000},
  {fuseki9354,2,"Fuseki358",609,4.000000},
  {fuseki9355,2,"Fuseki359",646,4.000000},
  {fuseki9356,3,"Fuseki360",721,6.000000},
  {fuseki9357,3,"Fuseki361",720,2.000000},
  {fuseki9358,3,"Fuseki362",719,6.000000},
  {fuseki9359,3,"Fuseki363",686,2.000000},
  {fuseki9360,4,"Fuseki364",720,5.000000},
  {fuseki9361,4,"Fuseki365",647,2.000000},
  {fuseki9362,4,"Fuseki366",758,2.000000},
  {fuseki9363,3,"Fuseki367",612,3.000000},
  {fuseki9364,3,"Fuseki368",723,2.000000},
  {fuseki9365,3,"Fuseki369",721,2.000000},
  {fuseki9366,4,"Fuseki370",685,5.000000},
  {fuseki9367,4,"Fuseki371",719,4.000000},
  {fuseki9368,4,"Fuseki372",682,2.000000},
  {fuseki9369,4,"Fuseki373",647,7.000000},
  {fuseki9370,4,"Fuseki374",682,2.000000},
  {fuseki9371,3,"Fuseki375",759,5.000000},
  {fuseki9372,3,"Fuseki376",649,4.000000},
  {fuseki9373,3,"Fuseki377",760,2.000000},
  {fuseki9374,3,"Fuseki378",721,5.000000},
  {fuseki9375,3,"Fuseki379",759,3.000000},
  {fuseki9376,4,"Fuseki380",756,4.000000},
  {fuseki9377,4,"Fuseki381",759,3.000000},
  {fuseki9378,2,"Fuseki382",757,7.000000},
  {fuseki9379,2,"Fuseki383",756,2.000000},
  {fuseki9380,3,"Fuseki384",723,6.000000},
  {fuseki9381,3,"Fuseki385",757,2.000000},
  {fuseki9382,4,"Fuseki386",682,3.000000},
  {fuseki9383,4,"Fuseki387",647,2.000000},
  {fuseki9384,3,"Fuseki388",612,3.000000},
  {fuseki9385,3,"Fuseki389",723,3.000000},
  {fuseki9386,3,"Fuseki390",609,2.000000},
  {fuseki9387,2,"Fuseki391",722,3.000000},
  {fuseki9388,2,"Fuseki392",756,2.000000},
  {fuseki9389,3,"Fuseki393",645,8.000000},
  {fuseki9390,4,"Fuseki394",682,3.000000},
  {fuseki9391,4,"Fuseki395",760,2.000000},
  {fuseki9392,4,"Fuseki396",646,2.000000},
  {fuseki9393,4,"Fuseki397",608,4.000000},
  {fuseki9394,4,"Fuseki398",685,4.000000},
  {fuseki9395,4,"Fuseki399",719,4.000000},
  {fuseki9396,4,"Fuseki400",723,2.000000},
  {fuseki9397,4,"Fuseki401",757,2.000000},
  {fuseki9398,4,"Fuseki402",572,4.000000},
  {fuseki9399,4,"Fuseki403",645,2.000000},
  {fuseki9400,4,"Fuseki404",686,2.000000},
  {fuseki9401,4,"Fuseki405",647,2.000000},
  {fuseki9402,4,"Fuseki406",648,2.000000},
  {fuseki9403,3,"Fuseki407",610,4.000000},
  {fuseki9404,3,"Fuseki408",649,2.000000},
  {fuseki9405,3,"Fuseki409",649,5.000000},
  {fuseki9406,3,"Fuseki410",758,3.000000},
  {fuseki9407,3,"Fuseki411",645,5.000000},
  {fuseki9408,4,"Fuseki414",647,3.000000},
  {fuseki9409,4,"Fuseki415",649,2.000000},
  {fuseki9410,3,"Fuseki416",794,3.000000},
  {fuseki9411,3,"Fuseki417",648,2.000000},
  {fuseki9412,4,"Fuseki418",723,3.000000},
  {fuseki9413,4,"Fuseki419",608,3.000000},
  {fuseki9414,4,"Fuseki420",682,2.000000},
  {fuseki9415,3,"Fuseki421",647,3.000000},
  {fuseki9416,3,"Fuseki422",683,2.000000},
  {fuseki9417,4,"Fuseki423",724,2.000000},
  {fuseki9418,2,"Fuseki424",646,5.000000},
  {fuseki9419,2,"Fuseki425",685,2.000000},
  {fuseki9420,4,"Fuseki426",757,5.000000},
  {fuseki9421,4,"Fuseki427",724,2.000000},
  {fuseki9422,3,"Fuseki428",610,3.000000},
  {fuseki9423,3,"Fuseki429",719,5.000000},
  {fuseki9424,3,"Fuseki430",720,2.000000},
  {fuseki9425,4,"Fuseki431",611,3.000000},
  {fuseki9426,4,"Fuseki432",610,2.000000},
  {fuseki9427,4,"Fuseki433",758,2.000000},
  {fuseki9428,3,"Fuseki434",609,3.000000},
  {fuseki9429,3,"Fuseki435",682,2.000000},
  {fuseki9430,3,"Fuseki436",760,2.000000},
  {fuseki9431,3,"Fuseki437",649,3.000000},
  {fuseki9432,3,"Fuseki438",608,2.000000},
  {fuseki9433,2,"Fuseki439",645,4.000000},
  {fuseki9434,4,"Fuseki440",612,2.000000},
  {fuseki9435,4,"Fuseki441",610,2.000000},
  {fuseki9436,4,"Fuseki442",610,2.000000},
  {fuseki9437,5,"Fuseki443",682,2.000000},
  {fuseki9438,5,"Fuseki444",609,2.000000},
  {fuseki9439,5,"Fuseki445",648,2.000000},
  {fuseki9440,5,"Fuseki446",757,2.000000},
  {fuseki9441,3,"Fuseki447",757,3.000000},
  {fuseki9442,3,"Fuseki448",646,2.000000},
  {fuseki9443,3,"Fuseki449",759,2.000000},
  {fuseki9444,5,"Fuseki450",686,5.000000},
  {fuseki9445,3,"Fuseki451",646,3.000000},
  {fuseki9446,3,"Fuseki452",760,2.000000},
  {fuseki9447,4,"Fuseki453",608,3.000000},
  {fuseki9448,4,"Fuseki454",645,3.000000},
  {fuseki9449,4,"Fuseki455",686,2.000000},
  {fuseki9450,4,"Fuseki456",646,2.000000},
  {fuseki9451,4,"Fuseki457",613,2.000000},
  {fuseki9452,2,"Fuseki458",685,2.000000},
  {fuseki9453,3,"Fuseki459",608,2.000000},
  {fuseki9454,3,"Fuseki460",759,2.000000},
  {fuseki9455,3,"Fuseki461",611,2.000000},
  {fuseki9456,3,"Fuseki462",609,3.000000},
  {fuseki9457,3,"Fuseki463",612,3.000000},
  {fuseki9458,3,"Fuseki464",646,3.000000},
  {fuseki9459,3,"Fuseki465",648,2.000000},
  {fuseki9460,3,"Fuseki466",683,3.000000},
  {fuseki9461,3,"Fuseki467",612,2.000000},
  {fuseki9462,5,"Fuseki468",758,5.000000},
  {fuseki9463,5,"Fuseki469",686,2.000000},
  {fuseki9464,5,"Fuseki470",760,2.000000},
  {fuseki9465,5,"Fuseki471",720,2.000000},
  {fuseki9466,4,"Fuseki472",720,3.000000},
  {fuseki9467,4,"Fuseki473",722,2.000000},
  {fuseki9468,3,"Fuseki474",645,6.000000},
  {fuseki9469,3,"Fuseki475",757,3.000000},
  {fuseki9470,4,"Fuseki476",686,2.000000},
  {fuseki9471,5,"Fuseki477",649,2.000000},
  {fuseki9472,4,"Fuseki478",684,3.000000},
  {fuseki9473,4,"Fuseki479",685,2.000000},
  {fuseki9474,3,"Fuseki480",722,2.000000},
  {fuseki9475,3,"Fuseki481",759,5.000000},
  {fuseki9476,3,"Fuseki482",685,2.000000},
  {fuseki9477,3,"Fuseki483",722,2.000000},
  {fuseki9478,3,"Fuseki484",685,5.000000},
  {fuseki9479,4,"Fuseki485",646,5.000000},
  {fuseki9480,4,"Fuseki486",646,2.000000},
  {fuseki9481,2,"Fuseki487",648,3.000000},
  {fuseki9482,2,"Fuseki488",686,2.000000},
  {fuseki9483,3,"Fuseki489",723,2.000000},
  {fuseki9484,3,"Fuseki490",756,2.000000},
  {fuseki9485,3,"Fuseki491",683,3.000000},
  {fuseki9486,4,"Fuseki492",682,2.000000},
  {fuseki9487,4,"Fuseki493",756,2.000000},
  {fuseki9488,3,"Fuseki494",722,4.000000},
  {fuseki9489,5,"Fuseki495",795,5.000000},
  {fuseki9490,3,"Fuseki496",611,2.000000},
  {fuseki9491,3,"Fuseki497",646,2.000000},
  {fuseki9492,3,"Fuseki498",723,2.000000},
  {fuseki9493,5,"Fuseki499",574,2.000000},
  {fuseki9494,5,"Fuseki500",684,2.000000},
  {fuseki9495,2,"Fuseki501",609,2.000000},
  {fuseki9496,5,"Fuseki502",720,6.000000},
  {fuseki9497,4,"Fuseki503",682,5.000000},
  {fuseki9498,3,"Fuseki504",645,3.000000},
  {fuseki9499,3,"Fuseki505",719,4.000000},
  {fuseki9500,3,"Fuseki506",612,2.000000},
  {fuseki9501,5,"Fuseki507",721,4.000000},
  {fuseki9502,5,"Fuseki508",757,2.000000},
  {fuseki9503,3,"Fuseki509",760,4.000000},
  {fuseki9504,4,"Fuseki510",609,2.000000},
  {fuseki9505,3,"Fuseki511",649,3.000000},
  {fuseki9506,3,"Fuseki512",757,2.000000},
  {fuseki9507,5,"Fuseki513",756,3.000000},
  {fuseki9508,3,"Fuseki514",756,3.000000},
  {fuseki9509,3,"Fuseki515",609,2.000000},
  {fuseki9510,3,"Fuseki516",686,2.000000},
  {fuseki9511,5,"Fuseki517",612,4.000000},
  {fuseki9512,4,"Fuseki518",724,2.000000},
  {fuseki9513,4,"Fuseki519",681,2.000000},
  {fuseki9514,2,"Fuseki520",610,2.000000},
  {fuseki9515,4,"Fuseki521",686,3.000000},
  {fuseki9516,3,"Fuseki522",608,3.000000},
  {fuseki9517,3,"Fuseki523",608,2.000000},
  {fuseki9518,4,"Fuseki524",610,3.000000},
  {fuseki9519,3,"Fuseki525",759,5.000000},
  {fuseki9520,4,"Fuseki526",796,5.000000},
  {fuseki9521,3,"Fuseki527",611,3.000000},
  {fuseki9522,3,"Fuseki528",611,3.000000},
  {fuseki9523,3,"Fuseki529",760,2.000000},
  {fuseki9524,5,"Fuseki530",645,2.000000},
  {fuseki9525,5,"Fuseki531",648,5.000000},
  {fuseki9526,3,"Fuseki532",758,2.000000},
  {fuseki9527,3,"Fuseki533",757,2.000000},
  {fuseki9528,4,"Fuseki534",686,2.000000},
  {fuseki9529,5,"Fuseki535",722,4.000000},
  {fuseki9530,2,"Fuseki536",719,2.000000},
  {fuseki9531,2,"Fuseki537",756,2.000000},
  {fuseki9532,5,"Fuseki538",608,3.000000},
  {fuseki9533,3,"Fuseki539",611,2.000000},
  {fuseki9534,3,"Fuseki540",760,2.000000},
  {fuseki9535,3,"Fuseki541",756,2.000000},
  {fuseki9536,3,"Fuseki542",719,5.000000},
  {fuseki9537,4,"Fuseki543",757,5.000000},
  {fuseki9538,3,"Fuseki544",611,3.000000},
  {fuseki9539,3,"Fuseki545",646,3.000000},
  {fuseki9540,3,"Fuseki546",610,2.000000},
  {fuseki9541,3,"Fuseki547",758,2.000000},
  {fuseki9542,4,"Fuseki548",721,4.000000},
  {fuseki9543,4,"Fuseki550",721,2.000000},
  {fuseki9544,4,"Fuseki551",685,2.000000},
  {fuseki9545,5,"Fuseki552",758,5.000000},
  {fuseki9546,5,"Fuseki553",722,2.000000},
  {fuseki9547,4,"Fuseki554",758,3.000000},
  {fuseki9548,5,"Fuseki556",721,5.000000},
  {fuseki9549,3,"Fuseki557",757,2.000000},
  {fuseki9550,3,"Fuseki558",609,2.000000},
  {fuseki9551,5,"Fuseki559",758,3.000000},
  {fuseki9552,4,"Fuseki560",682,2.000000},
  {fuseki9553,3,"Fuseki562",682,2.000000},
  {fuseki9554,3,"Fuseki563",758,2.000000},
  {fuseki9555,4,"Fuseki564",756,2.000000},
  {fuseki9556,4,"Fuseki566",759,3.000000},
  {fuseki9557,3,"Fuseki567",647,2.000000},
  {fuseki9558,3,"Fuseki568",612,2.000000},
  {fuseki9559,4,"Fuseki569",682,2.000000},
  {fuseki9560,4,"Fuseki570",649,2.000000},
  {fuseki9561,3,"Fuseki572",609,2.000000},
  {fuseki9562,3,"Fuseki573",683,2.000000},
  {fuseki9563,4,"Fuseki574",758,4.000000},
  {fuseki9564,3,"Fuseki575",719,2.000000},
  {fuseki9565,4,"Fuseki576",683,3.000000},
  {fuseki9566,1,"Fuseki577",608,2.000000},
  {fuseki9567,4,"Fuseki578",758,4.000000},
  {fuseki9568,1,"Fuseki579",687,2.000000},
  {fuseki9569,3,"Fuseki580",609,2.000000},
  {fuseki9570,3,"Fuseki581",645,3.000000},
  {fuseki9571,3,"Fuseki582",759,3.000000},
  {fuseki9572,3,"Fuseki584",685,2.000000},
  {fuseki9573,2,"Fuseki585",723,4.000000},
  {fuseki9574,3,"Fuseki586",645,2.000000},
  {fuseki9575,5,"Fuseki587",723,2.000000},
  {fuseki9576,4,"Fuseki588",682,4.000000},
  {fuseki9577,3,"Fuseki589",610,3.000000},
  {fuseki9578,4,"Fuseki590",608,3.000000},
  {fuseki9579,5,"Fuseki591",759,2.000000},
  {fuseki9580,5,"Fuseki592",608,2.000000},
  {fuseki9581,5,"Fuseki593",721,2.000000},
  {fuseki9582,3,"Fuseki594",611,3.000000},
  {fuseki9583,3,"Fuseki595",686,3.000000},
  {fuseki9584,4,"Fuseki596",682,2.000000},
  {fuseki9585,5,"Fuseki597",686,2.000000},
  {fuseki9586,3,"Fuseki598",608,3.000000},
  {fuseki9587,3,"Fuseki599",645,2.000000},
  {fuseki9588,3,"Fuseki600",756,2.000000},
  {fuseki9589,5,"Fuseki601",756,2.000000},
  {fuseki9590,4,"Fuseki602",757,2.000000},
  {fuseki9591,4,"Fuseki603",685,2.000000},
  {fuseki9592,4,"Fuseki604",683,2.000000},
  {fuseki9593,4,"Fuseki605",757,2.000000},
  {fuseki9594,3,"Fuseki606",685,2.000000},
  {fuseki9595,5,"Fuseki607",793,2.000000},
  {fuseki9596,5,"Fuseki608",574,2.000000},
  {fuseki9597,4,"Fuseki609",684,3.000000},
  {fuseki9598,4,"Fuseki610",649,2.000000},
  {fuseki9599,4,"Fuseki611",760,2.000000},
  {fuseki9600,3,"Fuseki612",682,2.000000},
  {fuseki9601,3,"Fuseki613",683,2.000000},
  {fuseki9602,5,"Fuseki614",757,2.000000},
  {fuseki9603,3,"Fuseki615",647,3.000000},
  {fuseki9604,5,"Fuseki616",758,2.000000},
  {fuseki9605,3,"Fuseki617",649,2.000000},
  {fuseki9606,5,"Fuseki618",756,3.000000},
  {fuseki9607,4,"Fuseki619",645,2.000000},
  {fuseki9608,4,"Fuseki620",610,2.000000},
  {fuseki9609,5,"Fuseki621",686,4.000000},
  {fuseki9610,5,"Fuseki622",609,2.000000},
  {fuseki9611,3,"Fuseki623",760,2.000000},
  {fuseki9612,4,"Fuseki624",686,3.000000},
  {fuseki9613,5,"Fuseki625",759,2.000000},
  {fuseki9614,4,"Fuseki626",758,3.000000},
  {fuseki9615,4,"Fuseki627",612,2.000000},
  {fuseki9616,4,"Fuseki628",609,2.000000},
  {fuseki9617,3,"Fuseki629",722,3.000000},
  {fuseki9618,5,"Fuseki630",646,3.000000},
  {fuseki9619,3,"Fuseki631",757,4.000000},
  {fuseki9620,5,"Fuseki632",720,2.000000},
  {fuseki9621,3,"Fuseki633",759,4.000000},
  {fuseki9622,5,"Fuseki634",686,2.000000},
  {fuseki9623,5,"Fuseki635",610,2.000000},
  {fuseki9624,3,"Fuseki636",723,2.000000},
  {fuseki9625,4,"Fuseki637",609,2.000000},
  {fuseki9626,3,"Fuseki638",610,4.000000},
  {fuseki9627,4,"Fuseki639",719,2.000000},
  {fuseki9628,4,"Fuseki640",612,2.000000},
  {fuseki9629,3,"Fuseki641",757,2.000000},
  {fuseki9630,2,"Fuseki642",608,2.000000},
  {fuseki9631,4,"Fuseki643",758,4.000000},
  {fuseki9632,4,"Fuseki644",720,3.000000},
  {fuseki9633,4,"Fuseki645",611,2.000000},
  {fuseki9634,3,"Fuseki646",756,2.000000},
  {fuseki9635,5,"Fuseki647",721,2.000000},
  {fuseki9636,2,"Fuseki648",757,2.000000},
  {fuseki9637,3,"Fuseki649",611,2.000000},
  {fuseki9638,3,"Fuseki650",611,2.000000},
  {fuseki9639,5,"Fuseki651",760,2.000000},
  {fuseki9640,4,"Fuseki652",719,2.000000},
  {fuseki9641,4,"Fuseki653",723,2.000000},
  {fuseki9642,4,"Fuseki654",719,2.000000},
  {fuseki9643,4,"Fuseki655",612,2.000000},
  {fuseki9644,4,"Fuseki656",610,3.000000},
  {fuseki9645,5,"Fuseki657",645,3.000000},
  {fuseki9646,3,"Fuseki658",684,2.000000},
  {fuseki9647,4,"Fuseki659",649,2.000000},
  {fuseki9648,5,"Fuseki660",649,2.000000},
  {fuseki9649,3,"Fuseki661",757,2.000000},
  {fuseki9650,4,"Fuseki662",760,2.000000},
  {fuseki9651,5,"Fuseki663",722,3.000000},
  {fuseki9652,4,"Fuseki664",722,3.000000},
  {fuseki9653,5,"Fuseki665",650,2.000000},
  {fuseki9654,5,"Fuseki666",759,3.000000},
  {fuseki9655,3,"Fuseki667",649,2.000000},
  {fuseki9656,4,"Fuseki668",757,2.000000},
  {fuseki9657,5,"Fuseki669",686,2.000000},
  {fuseki9658,4,"Fuseki670",650,2.000000},
  {fuseki9659,4,"Fuseki671",682,2.000000},
  {fuseki9660,5,"Fuseki672",723,3.000000},
  {fuseki9661,4,"Fuseki673",649,3.000000},
  {fuseki9662,3,"Fuseki674",759,2.000000},
  {fuseki9663,2,"Fuseki675",759,2.000000},
  {fuseki9664,5,"Fuseki676",758,3.000000},
  {fuseki9665,5,"Fuseki677",757,2.000000},
  {fuseki9666,5,"Fuseki678",684,2.000000},
  {fuseki9667,4,"Fuseki679",760,2.000000},
  {fuseki9668,5,"Fuseki680",610,2.000000},
  {fuseki9669,5,"Fuseki681",759,3.000000},
  {fuseki9670,3,"Fuseki682",684,2.000000},
  {fuseki9671,5,"Fuseki683",573,3.000000},
  {fuseki9672,5,"Fuseki684",682,2.000000},
  {fuseki9673,4,"Fuseki685",720,3.000000},
  {fuseki9674,4,"Fuseki686",758,2.000000},
  {fuseki9675,3,"Fuseki687",682,2.000000},
  {fuseki9676,3,"Fuseki688",645,2.000000},
  {fuseki9677,5,"Fuseki689",648,2.000000},
  {fuseki9678,3,"Fuseki690",612,2.000000},
  {fuseki9679,5,"Fuseki691",685,2.000000},
  {fuseki9680,3,"Fuseki692",612,2.000000},
  {fuseki9681,5,"Fuseki693",647,2.000000},
  {fuseki9682,5,"Fuseki694",645,3.000000},
  {fuseki9683,5,"Fuseki695",574,2.000000},
  {fuseki9684,5,"Fuseki696",758,3.000000},
  {fuseki9685,3,"Fuseki697",758,2.000000},
  {fuseki9686,2,"Fuseki698",722,2.000000},
  {fuseki9687,5,"Fuseki699",647,2.000000},
  {fuseki9688,4,"Fuseki700",610,2.000000},
  {fuseki9689,3,"Fuseki701",686,3.000000},
  {fuseki9690,3,"Fuseki703",756,2.000000},
  {fuseki9691,5,"Fuseki704",611,3.000000},
  {fuseki9692,3,"Fuseki705",756,3.000000},
  {fuseki9693,3,"Fuseki706",757,2.000000},
  {fuseki9694,4,"Fuseki707",723,2.000000},
  {fuseki9695,4,"Fuseki708",759,2.000000},
  {fuseki9696,3,"Fuseki709",759,2.000000},
  {fuseki9697,4,"Fuseki710",647,2.000000},
  {fuseki9698,4,"Fuseki712",574,3.000000},
  {fuseki9699,5,"Fuseki714",612,3.000000},
  {fuseki9700,4,"Fuseki715",609,2.000000},
  {fuseki9701,4,"Fuseki716",683,2.000000},
  {fuseki9702,5,"Fuseki717",796,2.000000},
  {fuseki9703,3,"Fuseki718",610,2.000000},
  {fuseki9704,4,"Fuseki719",721,3.000000},
  {fuseki9705,5,"Fuseki720",724,2.000000},
  {fuseki9706,4,"Fuseki721",682,2.000000},
  {fuseki9707,3,"Fuseki722",648,2.000000},
  {fuseki9708,5,"Fuseki723",611,2.000000},
  {fuseki9709,4,"Fuseki724",756,2.000000},
  {fuseki9710,4,"Fuseki725",608,3.000000},
  {fuseki9711,3,"Fuseki726",757,2.000000},
  {fuseki9712,4,"Fuseki727",686,2.000000},
  {fuseki9713,4,"Fuseki728",722,2.000000},
  {fuseki9714,4,"Fuseki729",610,2.000000},
  {fuseki9715,5,"Fuseki730",685,2.000000},
  {fuseki9716,5,"Fuseki731",609,3.000000},
  {fuseki9717,4,"Fuseki732",719,2.000000},
  {fuseki9718,4,"Fuseki733",682,2.000000},
  {fuseki9719,3,"Fuseki734",720,2.000000},
  {fuseki9720,4,"Fuseki735",649,2.000000},
  {fuseki9721,5,"Fuseki737",722,2.000000},
  {fuseki9722,4,"Fuseki738",610,2.000000},
  {fuseki9723,2,"Fuseki739",647,2.000000},
  {fuseki9724,5,"Fuseki740",682,2.000000},
  {fuseki9725,5,"Fuseki741",721,2.000000},
  {fuseki9726,5,"Fuseki742",758,2.000000},
  {fuseki9727,5,"Fuseki743",719,2.000000},
  {fuseki9728,4,"Fuseki744",609,2.000000},
  {fuseki9729,4,"Fuseki745",723,2.000000},
  {fuseki9730,5,"Fuseki746",609,2.000000},
  {fuseki9731,3,"Fuseki747",756,2.000000},
  {fuseki9732,5,"Fuseki748",758,2.000000},
  {fuseki9733,5,"Fuseki749",648,2.000000},
  {fuseki9734,5,"Fuseki750",612,2.000000},
  {fuseki9735,4,"Fuseki751",686,2.000000},
  {fuseki9736,4,"Fuseki752",757,2.000000},
  {fuseki9737,5,"Fuseki753",760,2.000000},
  {fuseki9738,5,"Fuseki754",687,2.000000},
  {fuseki9739,4,"Fuseki755",720,2.000000},
  {fuseki9740,3,"Fuseki756",759,2.000000},
  {fuseki9741,5,"Fuseki757",759,2.000000},
  {fuseki9742,4,"Fuseki758",649,2.000000},
  {fuseki9743,5,"Fuseki759",721,2.000000},
  {fuseki9744,4,"Fuseki760",685,2.000000},
  {fuseki9745,3,"Fuseki761",686,2.000000},
  {fuseki9746,5,"Fuseki762",683,2.000000},
  {fuseki9747,5,"Fuseki763",685,2.000000},
  {fuseki9748,5,"Fuseki764",721,2.000000},
  {fuseki9749,5,"Fuseki765",610,2.000000},
  {fuseki9750,5,"Fuseki766",575,2.000000},
  {fuseki9751,5,"Fuseki767",609,2.000000},
  {fuseki9752,4,"Fuseki768",682,2.000000},
  {fuseki9753,4,"Fuseki769",758,2.000000},
  {fuseki9754,4,"Fuseki770",647,2.000000},
  {fuseki9755,5,"Fuseki771",685,2.000000},
  {fuseki9756,5,"Fuseki772",759,2.000000},
  {fuseki9757,4,"Fuseki773",723,2.000000},
  {fuseki9758,5,"Fuseki774",758,2.000000},
  {fuseki9759,5,"Fuseki775",612,2.000000},
  {fuseki9760,5,"Fuseki776",796,2.000000},
  {fuseki9761,3,"Fuseki777",609,2.000000},
  {fuseki9762,5,"Fuseki778",719,2.000000},
  {fuseki9763,5,"Fuseki779",685,2.000000},
  {fuseki9764,4,"Fuseki780",760,2.000000},
  {fuseki9765,3,"Fuseki781",759,2.000000},
  {fuseki9766,5,"Fuseki782",796,2.000000},
  {fuseki9767,5,"Fuseki783",758,2.000000},
  {fuseki9768,4,"Fuseki784",721,2.000000},
  {fuseki9769,5,"Fuseki785",646,2.000000},
  {fuseki9770,4,"Fuseki786",720,2.000000},
  {fuseki9771,4,"Fuseki787",611,2.000000},
  {fuseki9772,4,"Fuseki788",720,2.000000},
  {fuseki9773,4,"Fuseki789",649,2.000000},
  {fuseki9774,5,"Fuseki790",648,2.000000},
  {fuseki9775,5,"Fuseki791",720,2.000000},
  {fuseki9776,4,"Fuseki792",609,2.000000},
  {fuseki9777,4,"Fuseki793",722,2.000000},
  {fuseki9778,4,"Fuseki794",647,2.000000},
  {fuseki9779,4,"Fuseki795",608,2.000000},
  {fuseki9780,5,"Fuseki796",686,2.000000},
  {fuseki9781,3,"Fuseki797",612,2.000000},
  {fuseki9782,4,"Fuseki799",685,2.000000},
  {fuseki9783,4,"Fuseki800",649,2.000000},
  {fuseki9784,4,"Fuseki801",682,2.000000},
  {fuseki9785,4,"Fuseki802",649,2.000000},
  {fuseki9786,4,"Fuseki803",611,2.000000},
  {fuseki9787,5,"Fuseki804",648,2.000000},
  {fuseki9788,3,"Fuseki805",760,2.000000},
  {fuseki9789,5,"Fuseki806",758,2.000000},
  {fuseki9790,3,"Fuseki807",609,2.000000},
  {fuseki9791,5,"Fuseki808",685,2.000000},
  {fuseki9792,5,"Fuseki809",756,2.000000},
  {fuseki9793,4,"Fuseki810",648,2.000000},
  {fuseki9794,4,"Fuseki811",649,2.000000},
  {fuseki9795,5,"Fuseki812",612,2.000000},
  {fuseki9796,4,"Fuseki813",760,2.000000},
  {fuseki9797,5,"Fuseki814",685,2.000000},
  {fuseki9798,3,"Fuseki815",682,2.000000},
  {fuseki9799,5,"Fuseki816",794,2.000000},
  {fuseki9800,5,"Fuseki817",611,2.000000},
  {fuseki9801,5,"Fuseki818",610,2.000000},
  {fuseki9802,5,"Fuseki819",686,2.000000},
  {fuseki9803,4,"Fuseki820",645,2.000000},
  {fuseki9804,5,"Fuseki821",721,2.000000},
  {fuseki9805,4,"Fuseki822",612,2.000000},
  {fuseki9806,5,"Fuseki823",649,2.000000},
  {fuseki9807,4,"Fuseki824",684,2.000000},
  {fuseki9808,4,"Fuseki825",648,2.000000},
  {fuseki9809,3,"Fuseki826",758,2.000000},
  {fuseki9810,5,"Fuseki827",648,2.000000},
  {fuseki9811,3,"Fuseki828",646,2.000000},
  {fuseki9812,5,"Fuseki829",610,2.000000},
  {fuseki9813,4,"Fuseki830",648,2.000000},
  {fuseki9814,5,"Fuseki831",760,2.000000},
  {fuseki9815,5,"Fuseki832",647,2.000000},
  {fuseki9816,5,"Fuseki834",756,2.000000},
  {fuseki9817,5,"Fuseki835",682,2.000000},
  {fuseki9818,5,"Fuseki836",608,2.000000},
  {fuseki9819,4,"Fuseki838",757,2.000000},
  {fuseki9820,4,"Fuseki839",646,2.000000},
  {fuseki9821,4,"Fuseki840",609,2.000000},
  {fuseki9822,4,"Fuseki841",723,2.000000},
  {fuseki9823,3,"Fuseki843",610,2.000000},
  {fuseki9824,3,"Fuseki844",722,2.000000},
  {fuseki9825,5,"Fuseki845",683,2.000000},
  {fuseki9826,4,"Fuseki846",649,2.000000},
  {fuseki9827,5,"Fuseki847",720,2.000000},
  {fuseki9828,5,"Fuseki848",683,2.000000},
  {fuseki9829,5,"Fuseki849",650,2.000000},
  {fuseki9830,2,"Fuseki1001",684,133.000000},
  {fuseki9831,2,"Fuseki1002",760,117.000000},
  {fuseki9832,2,"Fuseki1003",723,105.000000},
  {fuseki9833,2,"Fuseki1004",646,64.000000},
  {fuseki9834,2,"Fuseki1005",720,26.000000},
  {fuseki9835,2,"Fuseki1006",610,23.000000},
  {fuseki9836,2,"Fuseki1007",757,16.000000},
  {fuseki9837,2,"Fuseki1008",685,13.000000},
  {fuseki9838,3,"Fuseki1009",610,52.000000},
  {fuseki9839,3,"Fuseki1010",759,41.000000},
  {fuseki9840,3,"Fuseki1011",608,23.000000},
  {fuseki9841,3,"Fuseki1012",722,8.000000},
  {fuseki9842,3,"Fuseki1013",760,34.000000},
  {fuseki9843,3,"Fuseki1014",684,15.000000},
  {fuseki9844,3,"Fuseki1015",610,14.000000},
  {fuseki9845,3,"Fuseki1016",722,14.000000},
  {fuseki9846,3,"Fuseki1017",723,11.000000},
  {fuseki9847,3,"Fuseki1018",719,7.000000},
  {fuseki9848,3,"Fuseki1019",721,7.000000},
  {fuseki9849,3,"Fuseki1020",647,4.000000},
  {fuseki9850,3,"Fuseki1021",722,32.000000},
  {fuseki9851,3,"Fuseki1022",609,23.000000},
  {fuseki9852,3,"Fuseki1023",608,17.000000},
  {fuseki9853,3,"Fuseki1024",686,16.000000},
  {fuseki9854,3,"Fuseki1025",796,9.000000},
  {fuseki9855,3,"Fuseki1026",684,8.000000},
  {fuseki9856,3,"Fuseki1027",610,32.000000},
  {fuseki9857,3,"Fuseki1028",608,14.000000},
  {fuseki9858,3,"Fuseki1029",609,13.000000},
  {fuseki9859,3,"Fuseki1030",609,11.000000},
  {fuseki9860,3,"Fuseki1031",647,11.000000},
  {fuseki9861,3,"Fuseki1032",684,8.000000},
  {fuseki9862,3,"Fuseki1033",646,5.000000},
  {fuseki9863,4,"Fuseki1034",682,33.000000},
  {fuseki9864,4,"Fuseki1035",684,18.000000},
  {fuseki9865,4,"Fuseki1036",722,14.000000},
  {fuseki9866,4,"Fuseki1037",611,6.000000},
  {fuseki9867,3,"Fuseki1038",759,34.000000},
  {fuseki9868,3,"Fuseki1039",722,8.000000},
  {fuseki9869,3,"Fuseki1040",760,5.000000},
  {fuseki9870,3,"Fuseki1041",572,5.000000},
  {fuseki9871,3,"Fuseki1042",760,4.000000},
  {fuseki9872,4,"Fuseki1043",758,17.000000},
  {fuseki9873,4,"Fuseki1044",611,8.000000},
  {fuseki9874,4,"Fuseki1045",758,7.000000},
  {fuseki9875,4,"Fuseki1046",609,6.000000},
  {fuseki9876,4,"Fuseki1047",608,5.000000},
  {fuseki9877,4,"Fuseki1048",611,4.000000},
  {fuseki9878,4,"Fuseki1049",758,2.000000},
  {fuseki9879,5,"Fuseki1050",686,30.000000},
  {fuseki9880,5,"Fuseki1051",648,7.000000},
  {fuseki9881,5,"Fuseki1052",649,5.000000},
  {fuseki9882,4,"Fuseki1053",686,13.000000},
  {fuseki9883,4,"Fuseki1054",610,6.000000},
  {fuseki9884,4,"Fuseki1055",608,6.000000},
  {fuseki9885,4,"Fuseki1056",686,5.000000},
  {fuseki9886,4,"Fuseki1057",723,5.000000},
  {fuseki9887,4,"Fuseki1058",686,2.000000},
  {fuseki9888,4,"Fuseki1059",796,10.000000},
  {fuseki9889,4,"Fuseki1060",759,6.000000},
  {fuseki9890,4,"Fuseki1061",682,4.000000},
  {fuseki9891,4,"Fuseki1062",684,4.000000},
  {fuseki9892,4,"Fuseki1063",722,4.000000},
  {fuseki9893,4,"Fuseki1064",721,3.000000},
  {fuseki9894,4,"Fuseki1065",686,17.000000},
  {fuseki9895,4,"Fuseki1066",723,8.000000},
  {fuseki9896,4,"Fuseki1067",574,2.000000},
  {fuseki9897,4,"Fuseki1068",611,2.000000},
  {fuseki9898,5,"Fuseki1069",758,13.000000},
  {fuseki9899,5,"Fuseki1070",795,4.000000},
  {fuseki9900,5,"Fuseki1071",683,4.000000},
  {fuseki9901,5,"Fuseki1072",610,3.000000},
  {fuseki9902,5,"Fuseki1073",684,2.000000},
  {fuseki9903,5,"Fuseki1074",796,2.000000},
  {fuseki9904,5,"Fuseki1075",648,2.000000},
  {fuseki9905,4,"Fuseki1076",610,11.000000},
  {fuseki9906,4,"Fuseki1077",645,4.000000},
  {fuseki9907,4,"Fuseki1078",645,4.000000},
  {fuseki9908,4,"Fuseki1079",724,3.000000},
  {fuseki9909,4,"Fuseki1080",608,2.000000},
  {fuseki9910,4,"Fuseki1081",757,2.000000},
  {fuseki9911,4,"Fuseki1082",609,2.000000},
  {fuseki9912,4,"Fuseki1083",759,15.000000},
  {fuseki9913,4,"Fuseki1084",760,8.000000},
  {fuseki9914,4,"Fuseki1085",722,4.000000},
  {fuseki9915,4,"Fuseki1086",609,2.000000},
  {fuseki9916,4,"Fuseki1087",686,2.000000},
  {fuseki9917,6,"Fuseki1088",650,10.000000},
  {fuseki9918,6,"Fuseki1089",648,8.000000},
  {fuseki9919,6,"Fuseki1090",795,3.000000},
  {fuseki9920,6,"Fuseki1091",682,3.000000},
  {fuseki9921,6,"Fuseki1092",685,3.000000},
  {fuseki9922,6,"Fuseki1093",610,2.000000},
  {fuseki9923,3,"Fuseki1094",757,23.000000},
  {fuseki9924,3,"Fuseki1095",758,7.000000},
  {fuseki9925,3,"Fuseki1096",684,5.000000},
  {fuseki9926,3,"Fuseki1097",760,4.000000},
  {fuseki9927,3,"Fuseki1098",645,3.000000},
  {fuseki9928,4,"Fuseki1099",609,6.000000},
  {fuseki9929,4,"Fuseki1100",682,5.000000},
  {fuseki9930,4,"Fuseki1101",757,3.000000},
  {fuseki9931,4,"Fuseki1102",682,15.000000},
  {fuseki9932,4,"Fuseki1103",608,3.000000},
  {fuseki9933,4,"Fuseki1104",609,2.000000},
  {fuseki9934,4,"Fuseki1105",685,12.000000},
  {fuseki9935,4,"Fuseki1106",610,6.000000},
  {fuseki9936,4,"Fuseki1107",719,3.000000},
  {fuseki9937,5,"Fuseki1108",686,16.000000},
  {fuseki9938,5,"Fuseki1109",650,8.000000},
  {fuseki9939,5,"Fuseki1110",647,4.000000},
  {fuseki9940,5,"Fuseki1111",686,3.000000},
  {fuseki9941,4,"Fuseki1112",610,5.000000},
  {fuseki9942,4,"Fuseki1113",720,3.000000},
  {fuseki9943,4,"Fuseki1114",649,3.000000},
  {fuseki9944,4,"Fuseki1115",758,2.000000},
  {fuseki9945,4,"Fuseki1116",719,2.000000},
  {fuseki9946,5,"Fuseki1117",758,13.000000},
  {fuseki9947,5,"Fuseki1118",611,2.000000},
  {fuseki9948,5,"Fuseki1119",686,4.000000},
  {fuseki9949,5,"Fuseki1120",686,4.000000},
  {fuseki9950,5,"Fuseki1121",759,3.000000},
  {fuseki9951,5,"Fuseki1122",722,2.000000},
  {fuseki9952,3,"Fuseki1123",718,5.000000},
  {fuseki9953,3,"Fuseki1124",720,4.000000},
  {fuseki9954,3,"Fuseki1125",611,4.000000},
  {fuseki9955,4,"Fuseki1126",608,8.000000},
  {fuseki9956,4,"Fuseki1127",686,2.000000},
  {fuseki9957,4,"Fuseki1128",647,2.000000},
  {fuseki9958,6,"Fuseki1129",686,10.000000},
  {fuseki9959,6,"Fuseki1130",758,4.000000},
  {fuseki9960,5,"Fuseki1131",721,11.000000},
  {fuseki9961,5,"Fuseki1132",609,3.000000},
  {fuseki9962,4,"Fuseki1133",682,11.000000},
  {fuseki9963,4,"Fuseki1134",684,6.000000},
  {fuseki9964,4,"Fuseki1135",682,3.000000},
  {fuseki9965,4,"Fuseki1136",720,2.000000},
  {fuseki9966,6,"Fuseki1137",759,10.000000},
  {fuseki9967,5,"Fuseki1138",758,5.000000},
  {fuseki9968,5,"Fuseki1139",684,3.000000},
  {fuseki9969,5,"Fuseki1140",759,3.000000},
  {fuseki9970,4,"Fuseki1141",758,4.000000},
  {fuseki9971,4,"Fuseki1142",645,2.000000},
  {fuseki9972,4,"Fuseki1143",757,2.000000},
  {fuseki9973,4,"Fuseki1144",686,3.000000},
  {fuseki9974,4,"Fuseki1145",610,3.000000},
  {fuseki9975,4,"Fuseki1146",759,2.000000},
  {fuseki9976,3,"Fuseki1147",609,5.000000},
  {fuseki9977,3,"Fuseki1148",685,2.000000},
  {fuseki9978,3,"Fuseki1149",685,2.000000},
  {fuseki9979,4,"Fuseki1150",608,11.000000},
  {fuseki9980,6,"Fuseki1151",610,5.000000},
  {fuseki9981,6,"Fuseki1152",645,4.000000},
  {fuseki9982,5,"Fuseki1153",724,6.000000},
  {fuseki9983,5,"Fuseki1154",645,3.000000},
  {fuseki9984,5,"Fuseki1155",682,2.000000},
  {fuseki9985,5,"Fuseki1156",610,8.000000},
  {fuseki9986,5,"Fuseki1157",724,2.000000},
  {fuseki9987,5,"Fuseki1158",610,8.000000},
  {fuseki9988,5,"Fuseki1159",646,2.000000},
  {fuseki9989,6,"Fuseki1160",608,4.000000},
  {fuseki9990,6,"Fuseki1161",758,3.000000},
  {fuseki9991,6,"Fuseki1162",609,2.000000},
  {fuseki9992,4,"Fuseki1163",645,2.000000},
  {fuseki9993,4,"Fuseki1164",686,2.000000},
  {fuseki9994,4,"Fuseki1165",686,2.000000},
  {fuseki9995,4,"Fuseki1166",608,2.000000},
  {fuseki9996,4,"Fuseki1167",758,5.000000},
  {fuseki9997,4,"Fuseki1168",682,3.000000},
  {fuseki9998,5,"Fuseki1169",608,3.000000},
  {fuseki9999,5,"Fuseki1170",650,2.000000},
  {fuseki91000,5,"Fuseki1171",721,2.000000},
  {fuseki91001,5,"Fuseki1172",608,2.000000},
  {fuseki91002,5,"Fuseki1173",683,8.000000},
  {fuseki91003,5,"Fuseki1174",722,2.000000},
  {fuseki91004,4,"Fuseki1175",684,4.000000},
  {fuseki91005,4,"Fuseki1176",650,2.000000},
  {fuseki91006,5,"Fuseki1177",645,5.000000},
  {fuseki91007,5,"Fuseki1178",758,4.000000},
  {fuseki91008,7,"Fuseki1179",686,6.000000},
  {fuseki91009,7,"Fuseki1180",681,2.000000},
  {fuseki91010,5,"Fuseki1181",759,4.000000},
  {fuseki91011,5,"Fuseki1182",682,2.000000},
  {fuseki91012,5,"Fuseki1183",611,2.000000},
  {fuseki91013,7,"Fuseki1184",722,5.000000},
  {fuseki91014,7,"Fuseki1185",719,3.000000},
  {fuseki91015,5,"Fuseki1186",723,9.000000},
  {fuseki91016,7,"Fuseki1187",722,4.000000},
  {fuseki91017,7,"Fuseki1188",724,3.000000},
  {fuseki91018,6,"Fuseki1189",759,6.000000},
  {fuseki91019,6,"Fuseki1190",796,2.000000},
  {fuseki91020,5,"Fuseki1191",646,3.000000},
  {fuseki91021,5,"Fuseki1192",796,2.000000},
  {fuseki91022,5,"Fuseki1193",686,2.000000},
  {fuseki91023,4,"Fuseki1194",759,4.000000},
  {fuseki91024,5,"Fuseki1195",687,8.000000},
  {fuseki91025,9,"Fuseki1196",718,3.000000},
  {fuseki91026,9,"Fuseki1197",724,2.000000},
  {fuseki91027,4,"Fuseki1198",760,3.000000},
  {fuseki91028,4,"Fuseki1199",685,3.000000},
  {fuseki91029,4,"Fuseki1200",608,2.000000},
  {fuseki91030,4,"Fuseki1201",760,2.000000},
  {fuseki91031,6,"Fuseki1202",646,7.000000},
  {fuseki91032,6,"Fuseki1203",573,3.000000},
  {fuseki91033,6,"Fuseki1204",573,2.000000},
  {fuseki91034,6,"Fuseki1205",686,6.000000},
  {fuseki91035,6,"Fuseki1206",681,2.000000},
  {fuseki91036,5,"Fuseki1207",575,6.000000},
  {fuseki91037,5,"Fuseki1208",720,2.000000},
  {fuseki91038,7,"Fuseki1209",722,5.000000},
  {fuseki91039,7,"Fuseki1210",719,3.000000},
  {fuseki91040,6,"Fuseki1211",646,3.000000},
  {fuseki91041,6,"Fuseki1212",608,3.000000},
  {fuseki91042,6,"Fuseki1213",724,2.000000},
  {fuseki91043,4,"Fuseki1214",760,6.000000},
  {fuseki91044,4,"Fuseki1215",608,2.000000},
  {fuseki91045,4,"Fuseki1216",721,2.000000},
  {fuseki91046,8,"Fuseki1217",682,8.000000},
  {fuseki91047,6,"Fuseki1218",722,6.000000},
  {fuseki91048,6,"Fuseki1219",723,2.000000},
  {fuseki91049,7,"Fuseki1220",723,6.000000},
  {fuseki91050,4,"Fuseki1221",683,4.000000},
  {fuseki91051,4,"Fuseki1222",682,2.000000},
  {fuseki91052,7,"Fuseki1223",723,6.000000},
  {fuseki91053,6,"Fuseki1224",650,4.000000},
  {fuseki91054,6,"Fuseki1225",721,3.000000},
  {fuseki91055,6,"Fuseki1226",723,3.000000},
  {fuseki91056,4,"Fuseki1227",759,3.000000},
  {fuseki91057,4,"Fuseki1228",760,2.000000},
  {fuseki91058,5,"Fuseki1229",758,5.000000},
  {fuseki91059,5,"Fuseki1230",608,2.000000},
  {fuseki91060,5,"Fuseki1231",646,2.000000},
  {fuseki91061,5,"Fuseki1232",682,2.000000},
  {fuseki91062,8,"Fuseki1233",724,6.000000},
  {fuseki91063,6,"Fuseki1234",686,5.000000},
  {fuseki91064,5,"Fuseki1235",723,2.000000},
  {fuseki91065,5,"Fuseki1236",573,2.000000},
  {fuseki91066,6,"Fuseki1237",687,4.000000},
  {fuseki91067,5,"Fuseki1238",574,3.000000},
  {fuseki91068,5,"Fuseki1239",646,2.000000},
  {fuseki91069,7,"Fuseki1240",758,4.000000},
  {fuseki91070,5,"Fuseki1241",720,3.000000},
  {fuseki91071,5,"Fuseki1242",721,2.000000},
  {fuseki91072,5,"Fuseki1243",647,6.000000},
  {fuseki91073,5,"Fuseki1244",571,6.000000},
  {fuseki91074,7,"Fuseki1245",609,3.000000},
  {fuseki91075,7,"Fuseki1246",683,2.000000},
  {fuseki91076,6,"Fuseki1247",722,2.000000},
  {fuseki91077,6,"Fuseki1248",645,2.000000},
  {fuseki91078,5,"Fuseki1249",572,3.000000},
  {fuseki91079,5,"Fuseki1250",682,2.000000},
  {fuseki91080,6,"Fuseki1251",645,4.000000},
  {fuseki91081,6,"Fuseki1252",646,2.000000},
  {fuseki91082,4,"Fuseki1253",684,2.000000},
  {fuseki91083,4,"Fuseki1254",720,2.000000},
  {fuseki91084,5,"Fuseki1255",648,4.000000},
  {fuseki91085,5,"Fuseki1256",683,2.000000},
  {fuseki91086,5,"Fuseki1257",722,3.000000},
  {fuseki91087,5,"Fuseki1258",796,2.000000},
  {fuseki91088,7,"Fuseki1259",610,2.000000},
  {fuseki91089,7,"Fuseki1260",610,2.000000},
  {fuseki91090,6,"Fuseki1261",608,5.000000},
  {fuseki91091,5,"Fuseki1262",721,4.000000},
  {fuseki91092,6,"Fuseki1263",609,3.000000},
  {fuseki91093,4,"Fuseki1264",686,4.000000},
  {fuseki91094,5,"Fuseki1265",723,2.000000},
  {fuseki91095,9,"Fuseki1266",685,5.000000},
  {fuseki91096,6,"Fuseki1267",720,2.000000},
  {fuseki91097,4,"Fuseki1268",682,2.000000},
  {fuseki91098,4,"Fuseki1269",610,2.000000},
  {fuseki91099,7,"Fuseki1270",650,3.000000},
  {fuseki91100,7,"Fuseki1271",648,2.000000},
  {fuseki91101,4,"Fuseki1272",608,3.000000},
  {fuseki91102,5,"Fuseki1273",683,3.000000},
  {fuseki91103,5,"Fuseki1274",760,3.000000},
  {fuseki91104,5,"Fuseki1275",723,2.000000},
  {fuseki91105,10,"Fuseki1276",686,2.000000},
  {fuseki91106,8,"Fuseki1277",685,2.000000},
  {fuseki91107,8,"Fuseki1278",647,2.000000},
  {fuseki91108,8,"Fuseki1279",723,5.000000},
  {fuseki91109,5,"Fuseki1280",758,2.000000},
  {fuseki91110,4,"Fuseki1281",608,2.000000},
  {fuseki91111,4,"Fuseki1282",759,2.000000},
  {fuseki91112,4,"Fuseki1283",760,2.000000},
  {fuseki91113,6,"Fuseki1284",610,4.000000},
  {fuseki91114,7,"Fuseki1285",796,4.000000},
  {fuseki91115,4,"Fuseki1286",757,4.000000},
  {fuseki91116,5,"Fuseki1287",760,4.000000},
  {fuseki91117,7,"Fuseki1288",609,4.000000},
  {fuseki91118,5,"Fuseki1289",682,2.000000},
  {fuseki91119,5,"Fuseki1290",613,2.000000},
  {fuseki91120,7,"Fuseki1291",645,2.000000},
  {fuseki91121,7,"Fuseki1292",644,3.000000},
  {fuseki91122,7,"Fuseki1293",686,3.000000},
  {fuseki91123,5,"Fuseki1294",686,2.000000},
  {fuseki91124,5,"Fuseki1295",682,2.000000},
  {fuseki91125,7,"Fuseki1296",647,3.000000},
  {fuseki91126,5,"Fuseki1297",611,2.000000},
  {fuseki91127,5,"Fuseki1298",720,2.000000},
  {fuseki91128,5,"Fuseki1299",795,4.000000},
  {fuseki91129,5,"Fuseki1300",682,2.000000},
  {fuseki91130,5,"Fuseki1301",650,2.000000},
  {fuseki91131,6,"Fuseki1302",646,2.000000},
  {fuseki91132,6,"Fuseki1303",796,3.000000},
  {fuseki91133,6,"Fuseki1304",647,3.000000},
  {fuseki91134,8,"Fuseki1305",681,2.000000},
  {fuseki91135,8,"Fuseki1306",757,2.000000},
  {fuseki91136,6,"Fuseki1307",608,2.000000},
  {fuseki91137,6,"Fuseki1308",682,4.000000},
  {fuseki91138,8,"Fuseki1309",720,4.000000},
  {fuseki91139,7,"Fuseki1310",646,4.000000},
  {fuseki91140,5,"Fuseki1311",723,3.000000},
  {fuseki91141,4,"Fuseki1312",759,4.000000},
  {fuseki91142,7,"Fuseki1313",796,2.000000},
  {fuseki91143,7,"Fuseki1314",572,2.000000},
  {fuseki91144,5,"Fuseki1315",650,2.000000},
  {fuseki91145,9,"Fuseki1316",757,2.000000},
  {fuseki91146,4,"Fuseki1317",648,2.000000},
  {fuseki91147,6,"Fuseki1318",795,4.000000},
  {fuseki91148,7,"Fuseki1319",610,2.000000},
  {fuseki91149,6,"Fuseki1320",648,4.000000},
  {fuseki91150,5,"Fuseki1321",687,2.000000},
  {fuseki91151,6,"Fuseki1322",760,4.000000},
  {fuseki91152,7,"Fuseki1323",723,3.000000},
  {fuseki91153,5,"Fuseki1324",759,3.000000},
  {fuseki91154,5,"Fuseki1325",685,3.000000},
  {fuseki91155,6,"Fuseki1326",610,3.000000},
  {fuseki91156,5,"Fuseki1327",685,4.000000},
  {fuseki91157,4,"Fuseki1328",686,2.000000},
  {fuseki91158,7,"Fuseki1329",644,4.000000},
  {fuseki91159,4,"Fuseki1330",686,2.000000},
  {fuseki91160,7,"Fuseki1331",796,4.000000},
  {fuseki91161,7,"Fuseki1332",759,3.000000},
  {fuseki91162,8,"Fuseki1333",722,2.000000},
  {fuseki91163,5,"Fuseki1334",718,2.000000},
  {fuseki91164,6,"Fuseki1335",721,2.000000},
  {fuseki91165,6,"Fuseki1336",723,3.000000},
  {fuseki91166,7,"Fuseki1337",609,2.000000},
  {fuseki91167,6,"Fuseki1338",760,2.000000},
  {fuseki91168,10,"Fuseki1339",682,3.000000},
  {fuseki91169,4,"Fuseki1340",719,3.000000},
  {fuseki91170,5,"Fuseki1341",610,3.000000},
  {fuseki91171,7,"Fuseki1342",720,2.000000},
  {fuseki91172,6,"Fuseki1343",610,2.000000},
  {fuseki91173,6,"Fuseki1344",682,2.000000},
  {fuseki91174,5,"Fuseki1345",720,2.000000},
  {fuseki91175,6,"Fuseki1346",684,2.000000},
  {fuseki91176,5,"Fuseki1347",645,2.000000},
  {fuseki91177,4,"Fuseki1348",686,2.000000},
  {fuseki91178,8,"Fuseki1349",759,2.000000},
  {fuseki91179,6,"Fuseki1350",682,2.000000},
  {fuseki91180,5,"Fuseki1351",760,2.000000},
  {fuseki91181,4,"Fuseki1352",758,2.000000},
  {fuseki91182,7,"Fuseki1353",645,3.000000},
  {fuseki91183,6,"Fuseki1354",650,2.000000},
  {fuseki91184,8,"Fuseki1355",759,2.000000},
  {fuseki91185,6,"Fuseki1356",608,2.000000},
  {fuseki91186,7,"Fuseki1357",721,2.000000},
  {fuseki91187,5,"Fuseki1358",719,3.000000},
  {fuseki91188,5,"Fuseki1359",796,3.000000},
  {fuseki91189,7,"Fuseki1360",644,3.000000},
  {fuseki91190,5,"Fuseki1361",610,2.000000},
  {fuseki91191,6,"Fuseki1362",610,2.000000},
  {fuseki91192,7,"Fuseki1363",686,2.000000},
  {fuseki91193,5,"Fuseki1364",795,2.000000},
  {fuseki91194,5,"Fuseki1365",721,2.000000},
  {fuseki91195,7,"Fuseki1366",610,3.000000},
  {fuseki91196,5,"Fuseki1367",793,2.000000},
  {fuseki91197,6,"Fuseki1368",759,3.000000},
  {fuseki91198,6,"Fuseki1369",760,2.000000},
  {fuseki91199,6,"Fuseki1370",723,2.000000},
  {fuseki91200,7,"Fuseki1371",685,3.000000},
  {fuseki91201,6,"Fuseki1372",610,3.000000},
  {fuseki91202,7,"Fuseki1373",796,2.000000},
  {fuseki91203,7,"Fuseki1374",796,3.000000},
  {fuseki91204,9,"Fuseki1375",648,2.000000},
  {fuseki91205,5,"Fuseki1376",721,2.000000},
  {fuseki91206,8,"Fuseki1377",686,3.000000},
  {fuseki91207,6,"Fuseki1378",719,3.000000},
  {fuseki91208,8,"Fuseki1379",720,2.000000},
  {fuseki91209,5,"Fuseki1380",686,2.000000},
  {fuseki91210,6,"Fuseki1381",757,2.000000},
  {fuseki91211,4,"Fuseki1382",608,2.000000},
  {fuseki91212,7,"Fuseki1383",572,2.000000},
  {fuseki91213,7,"Fuseki1384",759,2.000000},
  {fuseki91214,6,"Fuseki1385",646,2.000000},
  {fuseki91215,8,"Fuseki1386",574,2.000000},
  {fuseki91216,6,"Fuseki1387",760,2.000000},
  {fuseki91217,6,"Fuseki1388",720,2.000000},
  {fuseki91218,5,"Fuseki1389",685,2.000000},
  {fuseki91219,7,"Fuseki1390",757,2.000000},
  {fuseki91220,7,"Fuseki1391",646,2.000000},
  {fuseki91221,5,"Fuseki1392",759,2.000000},
  {fuseki91222,6,"Fuseki1393",682,2.000000},
  {fuseki91223,5,"Fuseki1394",610,2.000000},
  {fuseki91224,7,"Fuseki1395",718,2.000000},
  {fuseki91225,6,"Fuseki1396",720,2.000000},
  {fuseki91226,5,"Fuseki1397",794,2.000000},
  {fuseki91227,7,"Fuseki1398",684,2.000000},
  {fuseki91228,9,"Fuseki1399",794,2.000000},
  {fuseki91229,7,"Fuseki1400",644,2.000000},
  {fuseki91230,8,"Fuseki1401",723,2.000000},
  {fuseki91231,5,"Fuseki1402",685,2.000000},
  {fuseki91232,9,"Fuseki1403",719,2.000000},
  {fuseki91233,5,"Fuseki1404",610,2.000000},
  {fuseki91234,8,"Fuseki1405",757,2.000000},
  {fuseki91235,6,"Fuseki1406",646,2.000000},
  {fuseki91236,6,"Fuseki1407",681,2.000000},
  {fuseki91237,7,"Fuseki1408",722,2.000000},
  {fuseki91238,6,"Fuseki1409",724,2.000000},
  {fuseki91239,5,"Fuseki1410",720,2.000000},
  {fuseki91240,6,"Fuseki1411",607,2.000000},
  {fuseki91241,6,"Fuseki1412",721,2.000000},
  {fuseki91242,8,"Fuseki1413",573,2.000000},
  {fuseki91243,7,"Fuseki1414",719,2.000000},
  {fuseki91244,7,"Fuseki1415",608,2.000000},
  {fuseki91245,6,"Fuseki1416",685,2.000000},
  {fuseki91246,5,"Fuseki1417",610,2.000000},
  {fuseki91247,9,"Fuseki1418",757,2.000000},
  {fuseki91248,6,"Fuseki1419",723,2.000000},
  {fuseki91249,6,"Fuseki1420",686,2.000000},
  {fuseki91250,9,"Fuseki1421",794,2.000000},
  {fuseki91251,7,"Fuseki1422",759,2.000000},
  {fuseki91252,6,"Fuseki1423",720,2.000000},
  {fuseki91253,5,"Fuseki1424",757,2.000000},
  {fuseki91254,6,"Fuseki1425",611,2.000000},
  {fuseki91255,5,"Fuseki1426",683,2.000000},
  {fuseki91256,7,"Fuseki1427",646,2.000000},
  {fuseki91257,5,"Fuseki1428",647,2.000000},
  {fuseki91258,4,"Fuseki1429",719,2.000000},
  {fuseki91259,7,"Fuseki1430",611,2.000000},
  {fuseki91260,9,"Fuseki1431",611,2.000000},
  {fuseki91261,8,"Fuseki1432",644,2.000000},
  {fuseki91262,7,"Fuseki1433",610,2.000000},
  {fuseki91263,6,"Fuseki1434",608,2.000000},
  {fuseki91264,8,"Fuseki1435",648,2.000000},
  {fuseki91265,5,"Fuseki1436",649,2.000000},
  {fuseki91266,9,"Fuseki1437",757,2.000000},
  {fuseki91267,5,"Fuseki1438",574,2.000000},
  {fuseki91268,8,"Fuseki1439",607,2.000000},
  {fuseki91269,5,"Fuseki1440",610,2.000000},
  {fuseki91270,5,"Fuseki1441",685,2.000000},
  {fuseki91271,5,"Fuseki1442",685,2.000000},
  {fuseki91272,7,"Fuseki1443",684,2.000000},
  {fuseki91273,7,"Fuseki1444",758,2.000000},
  {fuseki91274,6,"Fuseki1445",723,2.000000},
  {fuseki91275,5,"Fuseki1446",760,2.000000},
  {fuseki91276,7,"Fuseki1447",575,2.000000},
  {fuseki91277,6,"Fuseki1448",648,2.000000},
  {fuseki91278,7,"Fuseki1449",721,2.000000},
  {fuseki91279,6,"Fuseki1450",758,2.000000},
  {fuseki91280,7,"Fuseki1451",796,2.000000},
  {fuseki91281,9,"Fuseki1452",723,2.000000},
  {fuseki91282,8,"Fuseki1453",718,2.000000},
  {fuseki91283,6,"Fuseki1454",722,2.000000},
  {fuseki91284,6,"Fuseki1455",573,2.000000},
  {fuseki91285,7,"Fuseki1456",576,2.000000},
  {fuseki91286,6,"Fuseki1457",610,2.000000},
  {fuseki91287,7,"Fuseki1458",794,2.000000},
  {fuseki91288,7,"Fuseki1459",722,2.000000},
  {fuseki91289,5,"Fuseki1460",610,2.000000},
  {fuseki91290,7,"Fuseki1461",685,2.000000},
  {fuseki91291,7,"Fuseki1462",687,2.000000},
  {fuseki91292,6,"Fuseki1463",758,2.000000},
  {fuseki91293,7,"Fuseki1464",610,2.000000},
  {fuseki91294,9,"Fuseki1465",720,2.000000},
  {fuseki91295,6,"Fuseki1466",720,2.000000},
  {fuseki91296,7,"Fuseki1467",718,2.000000},
  {fuseki91297,7,"Fuseki1468",648,2.000000},
  {fuseki91298,7,"Fuseki1469",719,2.000000},
  {fuseki91299,6,"Fuseki1470",758,2.000000},
  {fuseki91300,7,"Fuseki1471",719,2.000000},
  {fuseki91301,4,"Fuseki1472",722,2.000000},
  {fuseki91302,9,"Fuseki1473",794,2.000000},
  {NULL,0,NULL,0,0.0}
};
