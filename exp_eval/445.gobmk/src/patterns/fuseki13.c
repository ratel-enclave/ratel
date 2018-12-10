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

static struct patval fuseki130[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki131[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki132[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki133[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki134[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki135[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki136[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki137[] = {
  {576,1}
};

static struct patval fuseki138[] = {
  {570,1}
};

static struct patval fuseki139[] = {
  {576,1}
};

static struct patval fuseki1310[] = {
  {792,1}
};

static struct patval fuseki1311[] = {
  {576,1}
};

static struct patval fuseki1312[] = {
  {576,1}
};

static struct patval fuseki1313[] = {
  {792,1}
};

static struct patval fuseki1314[] = {
  {576,1}
};

static struct patval fuseki1315[] = {
  {792,1}
};

static struct patval fuseki1316[] = {
  {576,1}
};

static struct patval fuseki1317[] = {
  {791,1}
};

static struct patval fuseki1318[] = {
  {569,1}
};

static struct patval fuseki1319[] = {
  {539,1}
};

static struct patval fuseki1320[] = {
  {835,1}
};

static struct patval fuseki1321[] = {
  {569,1}
};

static struct patval fuseki1322[] = {
  {829,1}
};

static struct patval fuseki1323[] = {
  {799,1}
};

static struct patval fuseki1324[] = {
  {577,1}
};

static struct patval fuseki1325[] = {
  {799,1}
};

static struct patval fuseki1326[] = {
  {829,1}
};

static struct patval fuseki1327[] = {
  {539,1}
};

static struct patval fuseki1328[] = {
  {799,1}
};

static struct patval fuseki1329[] = {
  {829,1}
};

static struct patval fuseki1330[] = {
  {792,1},	{576,2}
};

static struct patval fuseki1331[] = {
  {792,1},	{576,2}
};

static struct patval fuseki1332[] = {
  {792,1},	{576,2}
};

static struct patval fuseki1333[] = {
  {570,1},	{798,2}
};

static struct patval fuseki1334[] = {
  {532,1}
};

static struct patval fuseki1335[] = {
  {532,1}
};

static struct patval fuseki1336[] = {
  {828,1}
};

static struct patval fuseki1337[] = {
  {532,1}
};

static struct patval fuseki1338[] = {
  {836,1}
};

static struct patval fuseki1339[] = {
  {836,1}
};

static struct patval fuseki1340[] = {
  {828,1}
};

static struct patval fuseki1341[] = {
  {828,1}
};

static struct patval fuseki1342[] = {
  {829,1},	{576,2}
};

static struct patval fuseki1343[] = {
  {791,1},	{576,2}
};

static struct patval fuseki1344[] = {
  {569,1},	{798,2}
};

static struct patval fuseki1345[] = {
  {533,1},	{798,2}
};

static struct patval fuseki1346[] = {
  {791,1},	{576,2}
};

static struct patval fuseki1347[] = {
  {829,1},	{576,2}
};

static struct patval fuseki1348[] = {
  {791,1},	{576,2}
};

static struct patval fuseki1349[] = {
  {835,1},	{570,2}
};

static struct patval fuseki1350[] = {
  {570,1},	{576,1},	{798,2}
};

static struct patval fuseki1351[] = {
  {798,1},	{576,1},	{792,2}
};

static struct patval fuseki1352[] = {
  {570,1},	{576,1},	{798,2}
};

static struct patval fuseki1353[] = {
  {570,1},	{576,1},	{792,2}
};

static struct patval fuseki1354[] = {
  {570,1},	{792,1},	{798,2}
};

static struct patval fuseki1355[] = {
  {798,1},	{576,2}
};

static struct patval fuseki1356[] = {
  {570,1},	{792,2}
};

static struct patval fuseki1357[] = {
  {576,1},	{798,2}
};

static struct patval fuseki1358[] = {
  {570,1},	{792,2}
};

static struct patval fuseki1359[] = {
  {798,1},	{792,2}
};

static struct patval fuseki1360[] = {
  {576,1},	{791,2}
};

static struct patval fuseki1361[] = {
  {576,1},	{829,2}
};

static struct patval fuseki1362[] = {
  {798,1},	{569,2}
};

static struct patval fuseki1363[] = {
  {792,1},	{577,2}
};

static struct patval fuseki1364[] = {
  {792,1},	{539,2}
};

static struct patval fuseki1365[] = {
  {570,1},	{835,2}
};

static struct patval fuseki1366[] = {
  {532,1},	{576,2}
};

static struct patval fuseki1367[] = {
  {828,1},	{570,2}
};

static struct patval fuseki1368[] = {
  {532,1},	{576,2}
};

static struct patval fuseki1369[] = {
  {836,1},	{792,2}
};

static struct patval fuseki1370[] = {
  {828,1},	{798,2}
};

static struct patval fuseki1371[] = {
  {540,1},	{570,2}
};

static struct patval fuseki1372[] = {
  {540,1},	{798,2}
};

static struct patval fuseki1373[] = {
  {836,1},	{576,2}
};

static struct patval fuseki1374[] = {
  {836,1},	{576,2}
};

static struct patval fuseki1375[] = {
  {577,1},	{798,2}
};

static struct patval fuseki1376[] = {
  {569,1},	{792,2}
};

static struct patval fuseki1377[] = {
  {533,1},	{576,2}
};

static struct patval fuseki1378[] = {
  {829,1},	{798,2}
};

static struct patval fuseki1379[] = {
  {577,1},	{798,2}
};

static struct patval fuseki1380[] = {
  {835,1},	{792,2}
};

static struct patval fuseki1381[] = {
  {540,1},	{792,2}
};

static struct patval fuseki1382[] = {
  {828,1},	{576,2}
};

static struct patval fuseki1383[] = {
  {828,1},	{576,2}
};

static struct patval fuseki1384[] = {
  {828,1},	{576,2}
};

static struct patval fuseki1385[] = {
  {577,1},	{835,1},	{792,2}
};

static struct patval fuseki1386[] = {
  {577,1},	{835,1},	{792,2}
};

static struct patval fuseki1387[] = {
  {569,1},	{829,1},	{798,2}
};

static struct patval fuseki1388[] = {
  {791,1},	{533,1},	{576,2}
};

static struct patval fuseki1389[] = {
  {791,1},	{533,1},	{576,2}
};

static struct patval fuseki1390[] = {
  {569,1},	{829,1},	{798,2}
};

static struct patval fuseki1391[] = {
  {569,1},	{829,1},	{798,2}
};

static struct patval fuseki1392[] = {
  {533,1},	{577,1},	{798,2}
};

static struct patval fuseki1393[] = {
  {791,1},	{533,1},	{576,2}
};

static struct patval fuseki1394[] = {
  {828,1},	{533,2}
};

static struct patval fuseki1395[] = {
  {532,1},	{577,2}
};

static struct patval fuseki1396[] = {
  {828,1},	{533,2}
};

static struct patval fuseki1397[] = {
  {532,1},	{829,2}
};

static struct patval fuseki1398[] = {
  {532,1},	{577,2}
};

static struct patval fuseki1399[] = {
  {836,1},	{539,2}
};

static struct patval fuseki13100[] = {
  {540,1},	{569,2}
};

static struct patval fuseki13101[] = {
  {540,1},	{835,2}
};

static struct patval fuseki13102[] = {
  {798,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13103[] = {
  {798,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13104[] = {
  {570,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13105[] = {
  {798,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13106[] = {
  {570,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13107[] = {
  {798,1},	{576,1},	{829,2}
};

static struct patval fuseki13108[] = {
  {792,1},	{798,1},	{577,2}
};

static struct patval fuseki13109[] = {
  {792,1},	{798,1},	{577,2}
};

static struct patval fuseki13110[] = {
  {798,1},	{576,1},	{829,2}
};

static struct patval fuseki13111[] = {
  {570,1},	{829,2}
};

static struct patval fuseki13112[] = {
  {798,1},	{539,2}
};

static struct patval fuseki13113[] = {
  {570,1},	{829,2}
};

static struct patval fuseki13114[] = {
  {576,1},	{835,2}
};

static struct patval fuseki13115[] = {
  {798,1},	{539,2}
};

static struct patval fuseki13116[] = {
  {570,1},	{829,2}
};

static struct patval fuseki13117[] = {
  {792,1},	{533,2}
};

static struct patval fuseki13118[] = {
  {792,1},	{799,2}
};

static struct patval fuseki13119[] = {
  {570,1},	{829,2}
};

static struct patval fuseki13120[] = {
  {569,1},	{799,2}
};

static struct patval fuseki13121[] = {
  {533,1},	{835,2}
};

static struct patval fuseki13122[] = {
  {533,1},	{835,2}
};

static struct patval fuseki13123[] = {
  {835,1},	{533,2}
};

static struct patval fuseki13124[] = {
  {799,1},	{569,2}
};

static struct patval fuseki13125[] = {
  {829,1},	{539,2}
};

static struct patval fuseki13126[] = {
  {799,1},	{569,2}
};

static struct patval fuseki13127[] = {
  {569,1},	{799,2}
};

static struct patval fuseki13128[] = {
  {835,1},	{569,2}
};

static struct patval fuseki13129[] = {
  {791,1},	{539,2}
};

static struct patval fuseki13130[] = {
  {533,1},	{799,2}
};

static struct patval fuseki13131[] = {
  {577,1},	{829,2}
};

static struct patval fuseki13132[] = {
  {539,1},	{791,2}
};

static struct patval fuseki13133[] = {
  {569,1},	{835,2}
};

static struct patval fuseki13134[] = {
  {577,1},	{829,2}
};

static struct patval fuseki13135[] = {
  {533,1},	{799,2}
};

static struct patval fuseki13136[] = {
  {540,1},	{829,2}
};

static struct patval fuseki13137[] = {
  {828,1},	{539,2}
};

static struct patval fuseki13138[] = {
  {828,1},	{539,2}
};

static struct patval fuseki13139[] = {
  {532,1},	{799,2}
};

static struct patval fuseki13140[] = {
  {828,1},	{577,2}
};

static struct patval fuseki13141[] = {
  {836,1},	{569,2}
};

static struct patval fuseki13142[] = {
  {836,1},	{533,2}
};

static struct patval fuseki13143[] = {
  {836,1},	{569,2}
};

static struct patval fuseki13144[] = {
  {576,1},	{570,1},	{828,2}
};

static struct patval fuseki13145[] = {
  {798,1},	{576,1},	{828,2}
};

static struct patval fuseki13146[] = {
  {570,1},	{792,1},	{540,2}
};

static struct patval fuseki13147[] = {
  {798,1},	{576,1},	{532,2}
};

static struct patval fuseki13148[] = {
  {791,1},	{533,2}
};

static struct patval fuseki13149[] = {
  {533,1},	{577,2}
};

static struct patval fuseki13150[] = {
  {835,1},	{791,2}
};

static struct patval fuseki13151[] = {
  {829,1},	{799,2}
};

static struct patval fuseki13152[] = {
  {570,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13153[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13154[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13155[] = {
  {835,1},	{576,1},	{792,2},	{570,2}
};

static struct patval fuseki13156[] = {
  {791,1},	{798,1},	{576,2},	{570,2}
};

static struct patval fuseki13157[] = {
  {570,1},	{829,1},	{576,2},	{798,2}
};

static struct patval fuseki13158[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13159[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13160[] = {
  {835,1},	{576,1},	{792,2},	{570,2}
};

static struct patval fuseki13161[] = {
  {835,1},	{576,1},	{792,2},	{570,2}
};

static struct patval fuseki13162[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13163[] = {
  {570,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13164[] = {
  {799,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13165[] = {
  {533,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13166[] = {
  {569,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13167[] = {
  {798,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13168[] = {
  {798,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13169[] = {
  {799,1},	{532,2}
};

static struct patval fuseki13170[] = {
  {569,1},	{836,2}
};

static struct patval fuseki13171[] = {
  {533,1},	{836,2}
};

static struct patval fuseki13172[] = {
  {533,1},	{836,2}
};

static struct patval fuseki13173[] = {
  {569,1},	{836,2}
};

static struct patval fuseki13174[] = {
  {725,1},	{798,2}
};

static struct patval fuseki13175[] = {
  {725,1},	{798,2}
};

static struct patval fuseki13176[] = {
  {535,1},	{570,2}
};

static struct patval fuseki13177[] = {
  {535,1},	{570,2}
};

static struct patval fuseki13178[] = {
  {535,1},	{570,2}
};

static struct patval fuseki13179[] = {
  {535,1},	{570,2}
};

static struct patval fuseki13180[] = {
  {835,1},	{576,2}
};

static struct patval fuseki13181[] = {
  {791,1},	{798,2}
};

static struct patval fuseki13182[] = {
  {829,1},	{570,2}
};

static struct patval fuseki13183[] = {
  {533,1},	{792,2}
};

static struct patval fuseki13184[] = {
  {835,1},	{576,2}
};

static struct patval fuseki13185[] = {
  {791,1},	{798,2}
};

static struct patval fuseki13186[] = {
  {829,1},	{570,2}
};

static struct patval fuseki13187[] = {
  {577,1},	{570,2}
};

static struct patval fuseki13188[] = {
  {835,1},	{576,2}
};

static struct patval fuseki13189[] = {
  {829,1},	{570,2}
};

static struct patval fuseki13190[] = {
  {577,1},	{570,2}
};

static struct patval fuseki13191[] = {
  {835,1},	{576,2}
};

static struct patval fuseki13192[] = {
  {569,1},	{576,2}
};

static struct patval fuseki13193[] = {
  {792,1},	{798,1},	{539,2}
};

static struct patval fuseki13194[] = {
  {798,1},	{576,1},	{791,2}
};

static struct patval fuseki13195[] = {
  {792,1},	{798,1},	{539,2}
};

static struct patval fuseki13196[] = {
  {570,1},	{576,1},	{835,2}
};

static struct patval fuseki13197[] = {
  {798,1},	{576,1},	{569,2}
};

static struct patval fuseki13198[] = {
  {798,1},	{532,2}
};

static struct patval fuseki13199[] = {
  {798,1},	{532,2}
};

static struct patval fuseki13200[] = {
  {798,1},	{532,2}
};

static struct patval fuseki13201[] = {
  {532,1},	{540,1},	{836,2}
};

static struct patval fuseki13202[] = {
  {532,1},	{828,1},	{836,2}
};

static struct patval fuseki13203[] = {
  {798,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki13204[] = {
  {798,1},	{792,1},	{539,2},	{569,2}
};

static struct patval fuseki13205[] = {
  {798,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki13206[] = {
  {798,1},	{829,2}
};

static struct patval fuseki13207[] = {
  {576,1},	{799,2}
};

static struct patval fuseki13208[] = {
  {792,1},	{835,2}
};

static struct patval fuseki13209[] = {
  {762,1}
};

static struct patval fuseki13210[] = {
  {534,1}
};

static struct patval fuseki13211[] = {
  {834,1}
};

static struct patval fuseki13212[] = {
  {534,1}
};

static struct patval fuseki13213[] = {
  {754,1}
};

static struct patval fuseki13214[] = {
  {534,1}
};

static struct patval fuseki13215[] = {
  {534,1}
};

static struct patval fuseki13216[] = {
  {830,1}
};

static struct patval fuseki13217[] = {
  {799,1},	{829,1},	{570,2}
};

static struct patval fuseki13218[] = {
  {569,1},	{539,1},	{798,2}
};

static struct patval fuseki13219[] = {
  {791,1},	{533,1},	{798,2}
};

static struct patval fuseki13220[] = {
  {791,1},	{533,1},	{798,2}
};

static struct patval fuseki13221[] = {
  {799,1},	{539,1},	{792,2}
};

static struct patval fuseki13222[] = {
  {791,1},	{533,1},	{798,2}
};

static struct patval fuseki13223[] = {
  {569,1},	{539,1},	{798,2}
};

static struct patval fuseki13224[] = {
  {791,1},	{533,1},	{798,2}
};

static struct patval fuseki13225[] = {
  {799,1},	{829,1},	{570,2}
};

static struct patval fuseki13226[] = {
  {791,1},	{533,1},	{798,2}
};

static struct patval fuseki13227[] = {
  {791,1},	{835,1},	{539,2}
};

static struct patval fuseki13228[] = {
  {799,1},	{829,1},	{533,2}
};

static struct patval fuseki13229[] = {
  {791,1},	{835,1},	{539,2}
};

static struct patval fuseki13230[] = {
  {799,1},	{829,1},	{533,2}
};

static struct patval fuseki13231[] = {
  {791,1},	{533,1},	{799,2}
};

static struct patval fuseki13232[] = {
  {791,1},	{533,1},	{799,2}
};

static struct patval fuseki13233[] = {
  {791,1},	{533,1},	{799,2}
};

static struct patval fuseki13234[] = {
  {791,1},	{835,1},	{539,2}
};

static struct patval fuseki13235[] = {
  {797,1}
};

static struct patval fuseki13236[] = {
  {571,1}
};

static struct patval fuseki13237[] = {
  {793,1}
};

static struct patval fuseki13238[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13239[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13240[] = {
  {791,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13241[] = {
  {532,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13242[] = {
  {791,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13243[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13244[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13245[] = {
  {791,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13246[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13247[] = {
  {836,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13248[] = {
  {540,1},	{835,1},	{792,2},	{570,2}
};

static struct patval fuseki13249[] = {
  {791,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13250[] = {
  {569,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13251[] = {
  {532,1},	{829,1},	{576,2},	{798,2}
};

static struct patval fuseki13252[] = {
  {569,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13253[] = {
  {836,1},	{532,2}
};

static struct patval fuseki13254[] = {
  {835,1},	{576,1},	{792,2}
};

static struct patval fuseki13255[] = {
  {798,1},	{539,1},	{570,2}
};

static struct patval fuseki13256[] = {
  {533,1},	{792,1},	{576,2}
};

static struct patval fuseki13257[] = {
  {792,1},	{799,1},	{576,2}
};

static struct patval fuseki13258[] = {
  {569,1},	{576,1},	{792,2}
};

static struct patval fuseki13259[] = {
  {570,1},	{577,1},	{798,2}
};

static struct patval fuseki13260[] = {
  {791,1},	{798,1},	{570,2}
};

static struct patval fuseki13261[] = {
  {835,1},	{576,1},	{792,2}
};

static struct patval fuseki13262[] = {
  {792,1},	{799,1},	{576,2}
};

static struct patval fuseki13263[] = {
  {569,1},	{539,1},	{799,2}
};

static struct patval fuseki13264[] = {
  {577,1},	{533,1},	{791,2}
};

static struct patval fuseki13265[] = {
  {799,1},	{829,1},	{569,2}
};

static struct patval fuseki13266[] = {
  {577,1},	{835,1},	{533,2}
};

static struct patval fuseki13267[] = {
  {791,1},	{533,1},	{835,2}
};

static struct patval fuseki13268[] = {
  {791,1},	{835,1},	{577,2}
};

static struct patval fuseki13269[] = {
  {791,1},	{533,1},	{835,2}
};

static struct patval fuseki13270[] = {
  {828,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13271[] = {
  {828,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13272[] = {
  {532,1},	{828,1},	{576,2},	{798,2}
};

static struct patval fuseki13273[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13274[] = {
  {828,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13275[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13276[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13277[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13278[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13279[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13280[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13281[] = {
  {828,1},	{836,1},	{576,2},	{570,2}
};

static struct patval fuseki13282[] = {
  {532,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13283[] = {
  {532,1},	{828,1},	{576,2},	{799,2}
};

static struct patval fuseki13284[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13285[] = {
  {828,1},	{836,1},	{539,2},	{570,2}
};

static struct patval fuseki13286[] = {
  {828,1},	{836,1},	{576,2},	{533,2}
};

static struct patval fuseki13287[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13288[] = {
  {532,1},	{828,1},	{798,2},	{577,2}
};

static struct patval fuseki13289[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13290[] = {
  {828,1},	{836,1},	{539,2},	{570,2}
};

static struct patval fuseki13291[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13292[] = {
  {828,1},	{836,1},	{539,2},	{570,2}
};

static struct patval fuseki13293[] = {
  {828,1},	{836,1},	{539,2},	{570,2}
};

static struct patval fuseki13294[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13295[] = {
  {532,1},	{540,1},	{835,2},	{792,2}
};

static struct patval fuseki13296[] = {
  {836,1},	{540,1},	{792,2}
};

static struct patval fuseki13297[] = {
  {828,1},	{836,1},	{576,2}
};

static struct patval fuseki13298[] = {
  {532,1},	{828,1},	{576,2}
};

static struct patval fuseki13299[] = {
  {532,1},	{828,1},	{798,2}
};

static struct patval fuseki13300[] = {
  {532,1},	{828,1},	{576,2}
};

static struct patval fuseki13301[] = {
  {532,1},	{828,1},	{576,2}
};

static struct patval fuseki13302[] = {
  {532,1},	{828,1},	{576,2}
};

static struct patval fuseki13303[] = {
  {717,1},	{570,1},	{576,1},	{792,2},
  {798,2}
};

static struct patval fuseki13304[] = {
  {570,1},	{792,1},	{833,1},	{576,2},
  {798,2}
};

static struct patval fuseki13305[] = {
  {717,1},	{570,1},	{576,1},	{792,2},
  {798,2}
};

static struct patval fuseki13306[] = {
  {643,1},	{798,1},	{792,1},	{576,2},
  {570,2}
};

static struct patval fuseki13307[] = {
  {798,1},	{576,1},	{831,1},	{792,2},
  {570,2}
};

static struct patval fuseki13308[] = {
  {643,1},	{798,1},	{792,1},	{576,2},
  {570,2}
};

static struct patval fuseki13309[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {570,2}
};

static struct patval fuseki13310[] = {
  {643,1},	{798,1},	{792,1},	{576,2},
  {570,2}
};

static struct patval fuseki13311[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {570,2}
};

static struct patval fuseki13312[] = {
  {643,1},	{798,1},	{792,1},	{576,2},
  {570,2}
};

static struct patval fuseki13313[] = {
  {570,1},	{792,1},	{537,1},	{576,2},
  {798,2}
};

static struct patval fuseki13314[] = {
  {570,1},	{792,1},	{833,1},	{576,2},
  {798,2}
};

static struct patval fuseki13315[] = {
  {570,1},	{539,1},	{798,2}
};

static struct patval fuseki13316[] = {
  {792,1},	{835,1},	{576,2}
};

static struct patval fuseki13317[] = {
  {799,1},	{576,1},	{792,2}
};

static struct patval fuseki13318[] = {
  {799,1},	{576,1},	{792,2}
};

static struct patval fuseki13319[] = {
  {799,1},	{576,1},	{792,2}
};

static struct patval fuseki13320[] = {
  {792,1},	{835,1},	{576,2}
};

static struct patval fuseki13321[] = {
  {533,1},	{576,1},	{792,2}
};

static struct patval fuseki13322[] = {
  {577,1},	{798,1},	{570,2}
};

static struct patval fuseki13323[] = {
  {836,1},	{540,1},	{828,2},	{532,2}
};

static struct patval fuseki13324[] = {
  {532,1},	{540,1},	{828,2},	{836,2}
};

static struct patval fuseki13325[] = {
  {532,1},	{540,1},	{828,2},	{836,2}
};

static struct patval fuseki13326[] = {
  {836,1},	{828,1},	{540,2},	{532,2}
};

static struct patval fuseki13327[] = {
  {532,1},	{828,1},	{540,2},	{836,2}
};

static struct patval fuseki13328[] = {
  {532,1},	{828,1},	{540,2},	{836,2}
};

static struct patval fuseki13329[] = {
  {532,1},	{540,1},	{828,2},	{836,2}
};

static struct patval fuseki13330[] = {
  {836,1},	{828,1},	{540,2},	{532,2}
};

static struct patval fuseki13331[] = {
  {836,1},	{828,1},	{540,2},	{532,2}
};

static struct patval fuseki13332[] = {
  {684,1}
};

static struct patval fuseki13333[] = {
  {684,1}
};

static struct patval fuseki13334[] = {
  {684,1}
};

static struct patval fuseki13335[] = {
  {684,1}
};

static struct patval fuseki13336[] = {
  {684,1}
};

static struct patval fuseki13337[] = {
  {684,1}
};

static struct patval fuseki13338[] = {
  {533,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13339[] = {
  {569,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13340[] = {
  {791,1},	{533,1},	{576,2},	{798,2}
};

static struct patval fuseki13341[] = {
  {799,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13342[] = {
  {791,1},	{533,1},	{576,2},	{798,2}
};

static struct patval fuseki13343[] = {
  {791,1},	{533,1},	{576,2},	{798,2}
};

static struct patval fuseki13344[] = {
  {799,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13345[] = {
  {569,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13346[] = {
  {569,1},	{829,1},	{576,2},	{798,2}
};

static struct patval fuseki13347[] = {
  {569,1},	{829,1},	{576,2},	{798,2}
};

static struct patval fuseki13348[] = {
  {791,1},	{533,1},	{576,2},	{798,2}
};

static struct patval fuseki13349[] = {
  {533,1},	{792,1},	{539,2}
};

static struct patval fuseki13350[] = {
  {798,1},	{539,1},	{533,2}
};

static struct patval fuseki13351[] = {
  {798,1},	{539,1},	{533,2}
};

static struct patval fuseki13352[] = {
  {798,1},	{539,1},	{533,2}
};

static struct patval fuseki13353[] = {
  {798,1},	{539,1},	{533,2}
};

static struct patval fuseki13354[] = {
  {570,1},	{577,1},	{799,2}
};

static struct patval fuseki13355[] = {
  {792,1},	{799,1},	{577,2}
};

static struct patval fuseki13356[] = {
  {576,1},	{792,1},	{570,2}
};

static struct patval fuseki13357[] = {
  {570,1},	{798,1},	{792,2}
};

static struct patval fuseki13358[] = {
  {792,1},	{576,1},	{798,2}
};

static struct patval fuseki13359[] = {
  {835,1},	{576,1},	{828,2}
};

static struct patval fuseki13360[] = {
  {835,1},	{576,1},	{828,2}
};

static struct patval fuseki13361[] = {
  {792,1},	{799,1},	{540,2}
};

static struct patval fuseki13362[] = {
  {792,1},	{799,1},	{540,2}
};

static struct patval fuseki13363[] = {
  {798,1},	{539,1},	{532,2}
};

static struct patval fuseki13364[] = {
  {792,1},	{799,1},	{540,2}
};

static struct patval fuseki13365[] = {
  {539,1},	{570,1},	{828,2}
};

static struct patval fuseki13366[] = {
  {799,1},	{576,1},	{532,2}
};

static struct patval fuseki13367[] = {
  {829,1},	{798,1},	{540,2}
};

static struct patval fuseki13368[] = {
  {792,1},	{576,1},	{835,2}
};

static struct patval fuseki13369[] = {
  {576,1},	{792,1},	{569,2}
};

static struct patval fuseki13370[] = {
  {576,1},	{792,1},	{533,2}
};

static struct patval fuseki13371[] = {
  {798,1},	{570,1},	{791,2}
};

static struct patval fuseki13372[] = {
  {570,1},	{798,1},	{539,2}
};

static struct patval fuseki13373[] = {
  {570,1},	{798,1},	{577,2}
};

static struct patval fuseki13374[] = {
  {569,1},	{829,1},	{540,2}
};

static struct patval fuseki13375[] = {
  {569,1},	{539,1},	{836,2}
};

static struct patval fuseki13376[] = {
  {791,1},	{533,1},	{836,2}
};

static struct patval fuseki13377[] = {
  {829,1},	{799,1},	{539,2}
};

static struct patval fuseki13378[] = {
  {829,1},	{799,1},	{539,2}
};

static struct patval fuseki13379[] = {
  {799,1},	{539,1},	{569,2}
};

static struct patval fuseki13380[] = {
  {791,1},	{533,1},	{577,2}
};

static struct patval fuseki13381[] = {
  {791,1},	{835,1},	{533,2}
};

static struct patval fuseki13382[] = {
  {791,1},	{835,1},	{533,2}
};

static struct patval fuseki13383[] = {
  {791,1},	{798,1},	{533,2},	{577,2}
};

static struct patval fuseki13384[] = {
  {791,1},	{798,1},	{533,2},	{577,2}
};

static struct patval fuseki13385[] = {
  {569,1},	{576,1},	{829,2},	{799,2}
};

static struct patval fuseki13386[] = {
  {791,1},	{798,1},	{533,2},	{577,2}
};

static struct patval fuseki13387[] = {
  {533,1},	{792,1},	{835,2},	{577,2}
};

static struct patval fuseki13388[] = {
  {577,1},	{570,1},	{835,2},	{791,2}
};

static struct patval fuseki13389[] = {
  {569,1},	{576,1},	{829,2},	{799,2}
};

static struct patval fuseki13390[] = {
  {798,1},	{539,1},	{829,2},	{569,2}
};

static struct patval fuseki13391[] = {
  {829,1},	{798,1},	{576,2}
};

static struct patval fuseki13392[] = {
  {829,1},	{798,1},	{576,2}
};

static struct patval fuseki13393[] = {
  {799,1},	{576,1},	{570,2}
};

static struct patval fuseki13394[] = {
  {569,1},	{792,1},	{798,2}
};

static struct patval fuseki13395[] = {
  {829,1},	{798,1},	{576,2}
};

static struct patval fuseki13396[] = {
  {835,1},	{792,1},	{570,2}
};

static struct patval fuseki13397[] = {
  {791,1},	{570,1},	{576,2}
};

static struct patval fuseki13398[] = {
  {835,1},	{792,1},	{570,2}
};

static struct patval fuseki13399[] = {
  {792,1},	{799,1},	{539,2}
};

static struct patval fuseki13400[] = {
  {791,1},	{798,1},	{533,2}
};

static struct patval fuseki13401[] = {
  {798,1},	{539,1},	{569,2}
};

static struct patval fuseki13402[] = {
  {533,1},	{792,1},	{577,2}
};

static struct patval fuseki13403[] = {
  {835,1},	{576,1},	{791,2}
};

static struct patval fuseki13404[] = {
  {532,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13405[] = {
  {828,1},	{798,1},	{576,2},	{570,2}
};

static struct patval fuseki13406[] = {
  {570,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13407[] = {
  {532,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13408[] = {
  {532,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13409[] = {
  {540,1},	{798,1},	{792,2},	{570,2}
};

static struct patval fuseki13410[] = {
  {540,1},	{798,1},	{792,2},	{570,2}
};

static struct patval fuseki13411[] = {
  {532,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13412[] = {
  {828,1},	{570,1},	{576,2},	{798,2}
};

static struct patval fuseki13413[] = {
  {836,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13414[] = {
  {570,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13415[] = {
  {828,1},	{570,1},	{576,2},	{798,2}
};

static struct patval fuseki13416[] = {
  {830,1},	{791,2}
};

static struct patval fuseki13417[] = {
  {830,1},	{791,2}
};

static struct patval fuseki13418[] = {
  {534,1},	{569,2}
};

static struct patval fuseki13419[] = {
  {534,1},	{569,2}
};

static struct patval fuseki13420[] = {
  {834,1},	{799,2}
};

static struct patval fuseki13421[] = {
  {834,1},	{799,2}
};

static struct patval fuseki13422[] = {
  {534,1},	{569,2}
};

static struct patval fuseki13423[] = {
  {533,1},	{792,1},	{836,2}
};

static struct patval fuseki13424[] = {
  {798,1},	{539,1},	{828,2}
};

static struct patval fuseki13425[] = {
  {799,1},	{792,1},	{532,2}
};

static struct patval fuseki13426[] = {
  {533,1},	{792,1},	{836,2}
};

static struct patval fuseki13427[] = {
  {791,1},	{798,1},	{540,2}
};

static struct patval fuseki13428[] = {
  {533,1},	{792,1},	{836,2}
};

static struct patval fuseki13429[] = {
  {828,1},	{532,2}
};

static struct patval fuseki13430[] = {
  {540,1},	{836,2}
};

static struct patval fuseki13431[] = {
  {540,1},	{836,2}
};

static struct patval fuseki13432[] = {
  {828,1},	{836,2}
};

static struct patval fuseki13433[] = {
  {532,1},	{828,2}
};

static struct patval fuseki13434[] = {
  {540,1},	{836,2}
};

static struct patval fuseki13435[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13436[] = {
  {533,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13437[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13438[] = {
  {828,1},	{835,1},	{576,2},	{570,2}
};

static struct patval fuseki13439[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13440[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13441[] = {
  {569,1},	{828,1},	{576,2},	{798,2}
};

static struct patval fuseki13442[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13443[] = {
  {533,1},	{540,1},	{798,2},	{792,2}
};

static struct patval fuseki13444[] = {
  {532,1},	{791,1},	{576,2},	{798,2}
};

static struct patval fuseki13445[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13446[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13447[] = {
  {532,1},	{791,1},	{576,2},	{798,2}
};

static struct patval fuseki13448[] = {
  {532,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13449[] = {
  {532,1},	{828,1},	{799,2}
};

static struct patval fuseki13450[] = {
  {828,1},	{836,1},	{539,2}
};

static struct patval fuseki13451[] = {
  {532,1},	{828,1},	{577,2}
};

static struct patval fuseki13452[] = {
  {828,1},	{836,1},	{539,2}
};

static struct patval fuseki13453[] = {
  {532,1},	{828,1},	{577,2}
};

static struct patval fuseki13454[] = {
  {532,1},	{828,1},	{577,2}
};

static struct patval fuseki13455[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13456[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13457[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13458[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13459[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13460[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13461[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {798,2}
};

static struct patval fuseki13462[] = {
  {835,1},	{791,1},	{532,2}
};

static struct patval fuseki13463[] = {
  {799,1},	{539,1},	{532,2}
};

static struct patval fuseki13464[] = {
  {577,1},	{835,1},	{828,2}
};

static struct patval fuseki13465[] = {
  {829,1},	{799,1},	{540,2}
};

static struct patval fuseki13466[] = {
  {829,1},	{799,1},	{540,2}
};

static struct patval fuseki13467[] = {
  {791,1},	{533,1},	{540,2}
};

static struct patval fuseki13468[] = {
  {533,1},	{829,2}
};

static struct patval fuseki13469[] = {
  {577,1},	{569,2}
};

static struct patval fuseki13470[] = {
  {835,1},	{539,2}
};

static struct patval fuseki13471[] = {
  {799,1},	{791,2}
};

static struct patval fuseki13472[] = {
  {835,1},	{539,2}
};

static struct patval fuseki13473[] = {
  {760,1}
};

static struct patval fuseki13474[] = {
  {612,1}
};

static struct patval fuseki13475[] = {
  {612,1}
};

static struct patval fuseki13476[] = {
  {756,1}
};

static struct patval fuseki13477[] = {
  {760,1}
};

static struct patval fuseki13478[] = {
  {612,1}
};

static struct patval fuseki13479[] = {
  {756,1}
};

static struct patval fuseki13480[] = {
  {836,1},	{540,1},	{829,2},	{569,2}
};

static struct patval fuseki13481[] = {
  {532,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13482[] = {
  {836,1},	{540,1},	{533,2},	{791,2}
};

static struct patval fuseki13483[] = {
  {836,1},	{540,1},	{533,2},	{791,2}
};

static struct patval fuseki13484[] = {
  {532,1},	{828,1},	{835,2},	{577,2}
};

static struct patval fuseki13485[] = {
  {532,1},	{540,1},	{835,2},	{791,2}
};

static struct patval fuseki13486[] = {
  {828,1},	{836,1},	{577,2},	{533,2}
};

static struct patval fuseki13487[] = {
  {532,1},	{828,1},	{539,2},	{799,2}
};

static struct patval fuseki13488[] = {
  {836,1},	{828,1},	{539,2},	{569,2}
};

static struct patval fuseki13489[] = {
  {828,1},	{613,2}
};

static struct patval fuseki13490[] = {
  {532,1},	{761,2}
};

static struct patval fuseki13491[] = {
  {532,1},	{761,2}
};

static struct patval fuseki13492[] = {
  {532,1},	{797,2}
};

static struct patval fuseki13493[] = {
  {828,1},	{613,2}
};

static struct patval fuseki13494[] = {
  {836,1},	{571,2}
};

static struct patval fuseki13495[] = {
  {532,1},	{761,2}
};

static struct patval fuseki13496[] = {
  {828,1},	{613,2}
};

static struct patval fuseki13497[] = {
  {532,1},	{761,2}
};

static struct patval fuseki13498[] = {
  {828,1},	{613,2}
};

static struct patval fuseki13499[] = {
  {724,1},	{798,1},	{725,2}
};

static struct patval fuseki13500[] = {
  {724,1},	{798,1},	{725,2}
};

static struct patval fuseki13501[] = {
  {829,1},	{836,2}
};

static struct patval fuseki13502[] = {
  {835,1},	{828,2}
};

static struct patval fuseki13503[] = {
  {569,1},	{828,2}
};

static struct patval fuseki13504[] = {
  {569,1},	{828,2}
};

static struct patval fuseki13505[] = {
  {791,1},	{532,2}
};

static struct patval fuseki13506[] = {
  {829,1},	{836,2}
};

static struct patval fuseki13507[] = {
  {792,1},	{835,1},	{540,2}
};

static struct patval fuseki13508[] = {
  {577,1},	{798,1},	{532,2}
};

static struct patval fuseki13509[] = {
  {576,1},	{533,1},	{828,2}
};

static struct patval fuseki13510[] = {
  {570,1},	{539,1},	{836,2}
};

static struct patval fuseki13511[] = {
  {576,1},	{792,1},	{570,2},	{798,2}
};

static struct patval fuseki13512[] = {
  {570,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki13513[] = {
  {570,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki13514[] = {
  {570,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki13515[] = {
  {576,1},	{792,1},	{570,2},	{798,2}
};

static struct patval fuseki13516[] = {
  {570,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki13517[] = {
  {576,1},	{792,1},	{570,2},	{798,2}
};

static struct patval fuseki13518[] = {
  {576,1},	{792,1},	{570,2},	{798,2}
};

static struct patval fuseki13519[] = {
  {533,1},	{539,2}
};

static struct patval fuseki13520[] = {
  {791,1},	{569,2}
};

static struct patval fuseki13521[] = {
  {835,1},	{829,2}
};

static struct patval fuseki13522[] = {
  {539,1},	{533,2}
};

static struct patval fuseki13523[] = {
  {539,1},	{533,2}
};

static struct patval fuseki13524[] = {
  {577,1},	{799,2}
};

static struct patval fuseki13525[] = {
  {577,1},	{799,2}
};

static struct patval fuseki13526[] = {
  {835,1},	{829,2}
};

static struct patval fuseki13527[] = {
  {532,1},	{539,1},	{792,2},	{799,2}
};

static struct patval fuseki13528[] = {
  {532,1},	{539,1},	{792,2},	{799,2}
};

static struct patval fuseki13529[] = {
  {828,1},	{835,1},	{570,2},	{577,2}
};

static struct patval fuseki13530[] = {
  {532,1},	{791,1},	{576,2},	{835,2}
};

static struct patval fuseki13531[] = {
  {532,1},	{539,1},	{792,2},	{799,2}
};

static struct patval fuseki13532[] = {
  {569,1},	{828,1},	{539,2},	{798,2}
};

static struct patval fuseki13533[] = {
  {791,1},	{570,1},	{576,2},	{798,2}
};

static struct patval fuseki13534[] = {
  {570,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13535[] = {
  {570,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13536[] = {
  {791,1},	{570,1},	{576,2},	{798,2}
};

static struct patval fuseki13537[] = {
  {569,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13538[] = {
  {533,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13539[] = {
  {569,1},	{792,1},	{576,2},	{798,2}
};

static struct patval fuseki13540[] = {
  {533,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13541[] = {
  {835,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13542[] = {
  {577,1},	{798,1},	{792,2},	{570,2}
};

static struct patval fuseki13543[] = {
  {570,1},	{539,1},	{792,2},	{798,2}
};

static struct patval fuseki13544[] = {
  {570,1},	{792,1},	{576,2},	{799,2}
};

static struct patval fuseki13545[] = {
  {798,1},	{792,1},	{539,2},	{570,2}
};

static struct patval fuseki13546[] = {
  {798,1},	{792,1},	{576,2},	{533,2}
};

static struct patval fuseki13547[] = {
  {798,1},	{792,1},	{539,2},	{570,2}
};

static struct patval fuseki13548[] = {
  {570,1},	{576,1},	{792,2},	{835,2}
};

static struct patval fuseki13549[] = {
  {570,1},	{792,1},	{576,2},	{799,2}
};

static struct patval fuseki13550[] = {
  {570,1},	{576,1},	{792,2},	{835,2}
};

static struct patval fuseki13551[] = {
  {798,1},	{576,1},	{792,2},	{569,2}
};

static struct patval fuseki13552[] = {
  {570,1},	{576,1},	{792,2},	{835,2}
};

static struct patval fuseki13553[] = {
  {799,1},	{576,1},	{533,2}
};

static struct patval fuseki13554[] = {
  {791,1},	{570,1},	{539,2}
};

static struct patval fuseki13555[] = {
  {533,1},	{576,1},	{799,2}
};

static struct patval fuseki13556[] = {
  {577,1},	{798,1},	{829,2}
};

static struct patval fuseki13557[] = {
  {829,1},	{798,1},	{577,2}
};

static struct patval fuseki13558[] = {
  {793,1},	{791,2}
};

static struct patval fuseki13559[] = {
  {793,1},	{791,2}
};

static struct patval fuseki13560[] = {
  {571,1},	{569,2}
};

static struct patval fuseki13561[] = {
  {755,1},	{829,2}
};

static struct patval fuseki13562[] = {
  {607,1},	{533,2}
};

static struct patval fuseki13563[] = {
  {797,1},	{799,2}
};

static struct patval fuseki13564[] = {
  {835,1},	{539,1},	{828,2}
};

static struct patval fuseki13565[] = {
  {569,1},	{577,1},	{828,2}
};

static struct patval fuseki13566[] = {
  {569,1},	{577,1},	{836,2}
};

static struct patval fuseki13567[] = {
  {791,1},	{799,1},	{540,2}
};

static struct patval fuseki13568[] = {
  {533,1},	{829,1},	{540,2}
};

static struct patval fuseki13569[] = {
  {569,1},	{577,1},	{836,2}
};

static struct patval fuseki13570[] = {
  {569,1},	{577,1},	{836,2}
};

static struct patval fuseki13571[] = {
  {569,1},	{577,1},	{836,2}
};

static struct patval fuseki13572[] = {
  {799,1},	{829,1},	{539,2},	{569,2}
};

static struct patval fuseki13573[] = {
  {577,1},	{835,1},	{533,2},	{791,2}
};

static struct patval fuseki13574[] = {
  {569,1},	{539,1},	{829,2},	{799,2}
};

static struct patval fuseki13575[] = {
  {577,1},	{835,1},	{533,2},	{791,2}
};

static struct patval fuseki13576[] = {
  {569,1},	{539,1},	{829,2},	{799,2}
};

static struct patval fuseki13577[] = {
  {791,1},	{533,1},	{835,2},	{577,2}
};

static struct patval fuseki13578[] = {
  {613,1},	{792,2}
};

static struct patval fuseki13579[] = {
  {793,1},	{576,2}
};

static struct patval fuseki13580[] = {
  {575,1},	{792,2}
};

static struct patval fuseki13581[] = {
  {571,1},	{798,2}
};

static struct patval fuseki13582[] = {
  {575,1},	{792,2}
};

static struct patval fuseki13583[] = {
  {570,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki13584[] = {
  {570,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki13585[] = {
  {570,1},	{792,1},	{576,2},	{835,2}
};

static struct patval fuseki13586[] = {
  {798,1},	{792,1},	{576,2},	{569,2}
};

static struct patval fuseki13587[] = {
  {570,1},	{792,1},	{576,2},	{835,2}
};

static struct patval fuseki13588[] = {
  {570,1},	{792,1},	{576,2},	{835,2}
};

static struct patval fuseki13589[] = {
  {798,1},	{792,1},	{576,2},	{569,2}
};

static struct patval fuseki13590[] = {
  {570,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki13591[] = {
  {799,1},	{792,1},	{569,2}
};

static struct patval fuseki13592[] = {
  {791,1},	{798,1},	{577,2}
};

static struct patval fuseki13593[] = {
  {533,1},	{792,1},	{835,2}
};

static struct patval fuseki13594[] = {
  {569,1},	{576,1},	{799,2}
};

static struct patval fuseki13595[] = {
  {798,1},	{539,1},	{829,2}
};

static struct patval fuseki13596[] = {
  {576,1},	{792,1},	{532,2}
};

static struct patval fuseki13597[] = {
  {792,1},	{576,1},	{836,2}
};

static struct patval fuseki13598[] = {
  {798,1},	{570,1},	{828,2}
};

static struct patval fuseki13599[] = {
  {791,1},	{570,1},	{835,2}
};

static struct patval fuseki13600[] = {
  {792,1},	{835,1},	{577,2}
};

static struct patval fuseki13601[] = {
  {576,1},	{533,1},	{791,2}
};

static struct patval fuseki13602[] = {
  {798,1},	{829,1},	{569,2}
};

static struct patval fuseki13603[] = {
  {577,1},	{798,1},	{533,2}
};

static struct patval fuseki13604[] = {
  {577,1},	{798,1},	{533,2}
};

static struct patval fuseki13605[] = {
  {533,1},	{791,2}
};

static struct patval fuseki13606[] = {
  {829,1},	{569,2}
};

static struct patval fuseki13607[] = {
  {533,1},	{791,2}
};

static struct patval fuseki13608[] = {
  {799,1},	{829,2}
};

static struct patval fuseki13609[] = {
  {799,1},	{829,2}
};

static struct patval fuseki13610[] = {
  {577,1},	{533,2}
};

static struct patval fuseki13611[] = {
  {836,1},	{538,1},	{792,2},	{570,2}
};

static struct patval fuseki13612[] = {
  {532,1},	{614,1},	{798,2},	{792,2}
};

static struct patval fuseki13613[] = {
  {828,1},	{762,1},	{576,2},	{570,2}
};

static struct patval fuseki13614[] = {
  {828,1},	{534,1},	{576,2},	{798,2}
};

static struct patval fuseki13615[] = {
  {828,1},	{534,1},	{576,2},	{798,2}
};

static struct patval fuseki13616[] = {
  {532,1},	{830,1},	{576,2},	{798,2}
};

static struct patval fuseki13617[] = {
  {828,1},	{570,1},	{798,2}
};

static struct patval fuseki13618[] = {
  {828,1},	{798,1},	{570,2}
};

static struct patval fuseki13619[] = {
  {570,1},	{540,1},	{798,2}
};

static struct patval fuseki13620[] = {
  {828,1},	{798,1},	{570,2}
};

static struct patval fuseki13621[] = {
  {569,1},	{576,1},	{792,2},	{835,2}
};

static struct patval fuseki13622[] = {
  {570,1},	{829,1},	{798,2},	{577,2}
};

static struct patval fuseki13623[] = {
  {798,1},	{539,1},	{570,2},	{791,2}
};

static struct patval fuseki13624[] = {
  {791,1},	{798,1},	{539,2},	{570,2}
};

static struct patval fuseki13625[] = {
  {570,1},	{577,1},	{798,2},	{829,2}
};

static struct patval fuseki13626[] = {
  {799,1},	{792,1},	{576,2},	{533,2}
};

static struct patval fuseki13627[] = {
  {533,1},	{792,1},	{576,2},	{799,2}
};

static struct patval fuseki13628[] = {
  {835,1},	{576,1},	{792,2},	{569,2}
};

static struct patval fuseki13629[] = {
  {569,1},	{576,1},	{792,2},	{835,2}
};

static struct patval fuseki13630[] = {
  {606,1},	{576,2}
};

static struct patval fuseki13631[] = {
  {762,1},	{792,2}
};

static struct patval fuseki13632[] = {
  {754,1},	{798,2}
};

static struct patval fuseki13633[] = {
  {762,1},	{792,2}
};

static struct patval fuseki13634[] = {
  {606,1},	{576,2}
};

static struct patval fuseki13635[] = {
  {534,1},	{792,2}
};

static struct patval fuseki13636[] = {
  {834,1},	{576,2}
};

static struct patval fuseki13637[] = {
  {799,1},	{576,1},	{791,2}
};

static struct patval fuseki13638[] = {
  {798,1},	{829,1},	{533,2}
};

static struct patval fuseki13639[] = {
  {798,1},	{829,1},	{533,2}
};

static struct patval fuseki13640[] = {
  {792,1},	{835,1},	{539,2}
};

static struct patval fuseki13641[] = {
  {799,1},	{576,1},	{791,2}
};

static struct patval fuseki13642[] = {
  {799,1},	{576,1},	{569,2}
};

static struct patval fuseki13643[] = {
  {829,1},	{798,1},	{539,2}
};

static struct patval fuseki13644[] = {
  {791,1},	{570,1},	{577,2}
};

static struct patval fuseki13645[] = {
  {835,1},	{792,1},	{533,2}
};

static struct patval fuseki13646[] = {
  {829,1},	{798,1},	{539,2}
};

static struct patval fuseki13647[] = {
  {533,1},	{577,1},	{829,2},	{799,2}
};

static struct patval fuseki13648[] = {
  {577,1},	{835,1},	{829,2},	{569,2}
};

static struct patval fuseki13649[] = {
  {835,1},	{791,1},	{539,2},	{569,2}
};

static struct patval fuseki13650[] = {
  {799,1},	{539,1},	{533,2},	{791,2}
};

static struct patval fuseki13651[] = {
  {835,1},	{791,1},	{539,2},	{569,2}
};

static struct patval fuseki13652[] = {
  {569,1},	{577,1},	{798,2}
};

static struct patval fuseki13653[] = {
  {835,1},	{539,1},	{792,2}
};

static struct patval fuseki13654[] = {
  {835,1},	{539,1},	{792,2}
};

static struct patval fuseki13655[] = {
  {791,1},	{799,1},	{576,2}
};

static struct patval fuseki13656[] = {
  {835,1},	{539,1},	{792,2}
};

static struct patval fuseki13657[] = {
  {725,1},	{761,1},	{798,2},	{724,2}
};

static struct patval fuseki13658[] = {
  {725,1},	{761,1},	{798,2},	{724,2}
};

static struct patval fuseki13659[] = {
  {569,1},	{791,1},	{830,2}
};

static struct patval fuseki13660[] = {
  {569,1},	{791,1},	{830,2}
};

static struct patval fuseki13661[] = {
  {569,1},	{791,1},	{830,2}
};

static struct patval fuseki13662[] = {
  {792,1},	{761,1},	{576,2}
};

static struct patval fuseki13663[] = {
  {607,1},	{576,1},	{792,2}
};

static struct patval fuseki13664[] = {
  {570,1},	{613,1},	{798,2}
};

static struct patval fuseki13665[] = {
  {607,1},	{576,1},	{792,2}
};

static struct patval fuseki13666[] = {
  {798,1},	{755,1},	{570,2}
};

static struct patval fuseki13667[] = {
  {576,1},	{797,1},	{792,2}
};

static struct patval fuseki13668[] = {
  {799,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki13669[] = {
  {577,1},	{798,1},	{829,2},	{569,2}
};

static struct patval fuseki13670[] = {
  {533,1},	{576,1},	{829,2},	{799,2}
};

static struct patval fuseki13671[] = {
  {577,1},	{798,1},	{829,2},	{569,2}
};

static struct patval fuseki13672[] = {
  {836,1},	{539,1},	{792,2},	{533,2}
};

static struct patval fuseki13673[] = {
  {836,1},	{539,1},	{792,2},	{533,2}
};

static struct patval fuseki13674[] = {
  {569,1},	{540,1},	{798,2},	{791,2}
};

static struct patval fuseki13675[] = {
  {540,1},	{835,1},	{829,2},	{570,2}
};

static struct patval fuseki13676[] = {
  {569,1},	{540,1},	{798,2},	{791,2}
};

static struct patval fuseki13677[] = {
  {836,1},	{539,1},	{792,2},	{533,2}
};

static struct patval fuseki13678[] = {
  {836,1},	{791,1},	{576,2},	{569,2}
};

static struct patval fuseki13679[] = {
  {795,1},	{798,2}
};

static struct patval fuseki13680[] = {
  {687,1},	{798,2}
};

static struct patval fuseki13681[] = {
  {573,1},	{570,2}
};

static struct patval fuseki13682[] = {
  {795,1},	{798,2}
};

static struct patval fuseki13683[] = {
  {573,1},	{570,2}
};

static struct patval fuseki13684[] = {
  {828,1},	{569,2}
};

static struct patval fuseki13685[] = {
  {836,1},	{577,2}
};

static struct patval fuseki13686[] = {
  {532,1},	{791,2}
};

static struct patval fuseki13687[] = {
  {828,1},	{569,2}
};

static struct patval fuseki13688[] = {
  {532,1},	{791,2}
};

static struct patval fuseki13689[] = {
  {836,1},	{829,2}
};

static struct patval fuseki13690[] = {
  {569,1},	{829,1},	{835,2}
};

static struct patval fuseki13691[] = {
  {569,1},	{539,1},	{791,2}
};

static struct patval fuseki13692[] = {
  {569,1},	{829,1},	{835,2}
};

static struct patval fuseki13693[] = {
  {569,1},	{829,1},	{835,2}
};

static struct patval fuseki13694[] = {
  {799,1},	{539,1},	{533,2}
};

static struct patval fuseki13695[] = {
  {570,1},	{614,1},	{798,2}
};

static struct patval fuseki13696[] = {
  {792,1},	{534,1},	{576,2}
};

static struct patval fuseki13697[] = {
  {570,1},	{830,1},	{798,2}
};

static struct patval fuseki13698[] = {
  {798,1},	{538,1},	{570,2}
};

static struct patval fuseki13699[] = {
  {684,1},	{576,2}
};

static struct patval fuseki13700[] = {
  {684,1},	{570,2}
};

static struct patval fuseki13701[] = {
  {684,1},	{798,2}
};

static struct patval fuseki13702[] = {
  {684,1},	{576,2}
};

static struct patval fuseki13703[] = {
  {684,1},	{792,2}
};

static struct patval fuseki13704[] = {
  {684,1},	{570,2}
};

static struct patval fuseki13705[] = {
  {539,1},	{533,1},	{828,2}
};

static struct patval fuseki13706[] = {
  {799,1},	{577,1},	{828,2}
};

static struct patval fuseki13707[] = {
  {539,1},	{533,1},	{828,2}
};

static struct patval fuseki13708[] = {
  {532,1},	{576,1},	{828,2}
};

static struct patval fuseki13709[] = {
  {836,1},	{576,1},	{828,2}
};

static struct patval fuseki13710[] = {
  {532,1},	{576,1},	{828,2}
};

static struct patval fuseki13711[] = {
  {606,1},	{577,1},	{533,1},	{798,2},
  {791,2}
};

static struct patval fuseki13712[] = {
  {791,1},	{762,1},	{835,1},	{577,2},
  {570,2}
};

static struct patval fuseki13713[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {835,2}
};

static struct patval fuseki13714[] = {
  {791,1},	{533,1},	{830,1},	{576,2},
  {835,2}
};

static struct patval fuseki13715[] = {
  {791,1},	{762,1},	{835,1},	{577,2},
  {570,2}
};

static struct patval fuseki13716[] = {
  {828,1},	{540,1},	{798,2},	{570,2}
};

static struct patval fuseki13717[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13718[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13719[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13720[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13721[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13722[] = {
  {532,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13723[] = {
  {760,1},	{761,1},	{798,2}
};

static struct patval fuseki13724[] = {
  {760,1},	{761,1},	{798,2}
};

static struct patval fuseki13725[] = {
  {761,1},	{576,2}
};

static struct patval fuseki13726[] = {
  {761,1},	{576,2}
};

static struct patval fuseki13727[] = {
  {761,1},	{576,2}
};

static struct patval fuseki13728[] = {
  {613,1},	{798,2}
};

static struct patval fuseki13729[] = {
  {607,1},	{792,2}
};

static struct patval fuseki13730[] = {
  {532,1},	{539,1},	{791,2},	{835,2}
};

static struct patval fuseki13731[] = {
  {532,1},	{791,1},	{539,2},	{799,2}
};

static struct patval fuseki13732[] = {
  {569,1},	{828,1},	{835,2},	{577,2}
};

static struct patval fuseki13733[] = {
  {532,1},	{791,1},	{539,2},	{799,2}
};

static struct patval fuseki13734[] = {
  {532,1},	{539,1},	{791,2},	{835,2}
};

static struct patval fuseki13735[] = {
  {569,1},	{791,1},	{539,1},	{830,2},
  {755,2}
};

static struct patval fuseki13736[] = {
  {569,1},	{791,1},	{539,1},	{830,2},
  {755,2}
};

static struct patval fuseki13737[] = {
  {569,1},	{791,1},	{539,1},	{830,2},
  {755,2}
};

static struct patval fuseki13738[] = {
  {569,1},	{791,1},	{539,1},	{830,2},
  {755,2}
};

static struct patval fuseki13739[] = {
  {569,1},	{791,1},	{539,1},	{830,2},
  {755,2}
};

static struct patval fuseki13740[] = {
  {569,1},	{539,1},	{828,2},	{836,2}
};

static struct patval fuseki13741[] = {
  {799,1},	{539,1},	{828,2},	{532,2}
};

static struct patval fuseki13742[] = {
  {830,1},	{755,1},	{791,2},	{569,2}
};

static struct patval fuseki13743[] = {
  {570,1},	{576,1},	{793,2}
};

static struct patval fuseki13744[] = {
  {570,1},	{792,1},	{613,2}
};

static struct patval fuseki13745[] = {
  {570,1},	{576,1},	{797,2}
};

static struct patval fuseki13746[] = {
  {792,1},	{798,1},	{575,2}
};

static struct patval fuseki13747[] = {
  {792,1},	{798,1},	{575,2}
};

static struct patval fuseki13748[] = {
  {570,1},	{576,1},	{797,2}
};

static struct patval fuseki13749[] = {
  {798,1},	{575,1},	{792,2},	{570,2}
};

static struct patval fuseki13750[] = {
  {761,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13751[] = {
  {570,1},	{793,1},	{576,2},	{798,2}
};

static struct patval fuseki13752[] = {
  {570,1},	{793,1},	{576,2},	{798,2}
};

static struct patval fuseki13753[] = {
  {607,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13754[] = {
  {570,1},	{613,1},	{792,2},	{798,2}
};

static struct patval fuseki13755[] = {
  {532,1},	{828,1},	{539,2},	{798,2}
};

static struct patval fuseki13756[] = {
  {532,1},	{828,1},	{576,2},	{835,2}
};

static struct patval fuseki13757[] = {
  {836,1},	{540,1},	{792,2},	{533,2}
};

static struct patval fuseki13758[] = {
  {828,1},	{836,1},	{577,2},	{570,2}
};

static struct patval fuseki13759[] = {
  {532,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13760[] = {
  {532,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13761[] = {
  {828,1},	{534,1},	{576,2},	{835,2}
};

static struct patval fuseki13762[] = {
  {532,1},	{830,1},	{539,2},	{798,2}
};

static struct patval fuseki13763[] = {
  {828,1},	{534,1},	{576,2},	{835,2}
};

static struct patval fuseki13764[] = {
  {754,1},	{836,1},	{577,2},	{570,2}
};

static struct patval fuseki13765[] = {
  {828,1},	{534,1},	{576,2},	{835,2}
};

static struct patval fuseki13766[] = {
  {532,1},	{614,1},	{798,2},	{791,2}
};

static struct patval fuseki13767[] = {
  {828,1},	{534,1},	{576,2},	{835,2}
};

static struct patval fuseki13768[] = {
  {792,1},	{684,2}
};

static struct patval fuseki13769[] = {
  {576,1},	{684,2}
};

static struct patval fuseki13770[] = {
  {798,1},	{684,2}
};

static struct patval fuseki13771[] = {
  {792,1},	{684,2}
};

static struct patval fuseki13772[] = {
  {798,1},	{684,2}
};

static struct patval fuseki13773[] = {
  {576,1},	{684,2}
};

static struct patval fuseki13774[] = {
  {569,1},	{576,1},	{798,2}
};

static struct patval fuseki13775[] = {
  {569,1},	{576,1},	{798,2}
};

static struct patval fuseki13776[] = {
  {570,1},	{577,1},	{792,2}
};

static struct patval fuseki13777[] = {
  {570,1},	{577,1},	{792,2}
};

static struct patval fuseki13778[] = {
  {570,1},	{577,1},	{792,2}
};

static struct patval fuseki13779[] = {
  {798,1},	{760,2}
};

static struct patval fuseki13780[] = {
  {792,1},	{829,2}
};

static struct patval fuseki13781[] = {
  {792,1},	{829,2}
};

static struct patval fuseki13782[] = {
  {760,1},	{725,1},	{761,1},	{798,2},
  {724,2},	{762,2}
};

static struct patval fuseki13783[] = {
  {760,1},	{725,1},	{761,1},	{798,2},
  {724,2},	{762,2}
};

static struct patval fuseki13784[] = {
  {799,1},	{792,1},	{614,1},	{539,2},
  {532,2}
};

static struct patval fuseki13785[] = {
  {569,1},	{754,1},	{576,1},	{829,2},
  {836,2}
};

static struct patval fuseki13786[] = {
  {799,1},	{792,1},	{614,1},	{539,2},
  {532,2}
};

static struct patval fuseki13787[] = {
  {798,1},	{539,1},	{534,1},	{828,2},
  {569,2}
};

static struct patval fuseki13788[] = {
  {799,1},	{792,1},	{614,1},	{539,2},
  {532,2}
};

static struct patval fuseki13789[] = {
  {799,1},	{828,1},	{569,2}
};

static struct patval fuseki13790[] = {
  {569,1},	{540,1},	{799,2}
};

static struct patval fuseki13791[] = {
  {836,1},	{539,1},	{829,2}
};

static struct patval fuseki13792[] = {
  {799,1},	{828,1},	{569,2}
};

static struct patval fuseki13793[] = {
  {798,1},	{791,1},	{576,2},	{569,2}
};

static struct patval fuseki13794[] = {
  {570,1},	{577,1},	{792,2},	{799,2}
};

static struct patval fuseki13795[] = {
  {569,1},	{576,1},	{791,2},	{798,2}
};

static struct patval fuseki13796[] = {
  {835,1},	{576,1},	{829,2},	{570,2}
};

static struct patval fuseki13797[] = {
  {569,1},	{576,1},	{791,2},	{798,2}
};

static struct patval fuseki13798[] = {
  {835,1},	{576,1},	{829,2},	{570,2}
};

static struct patval fuseki13799[] = {
  {570,1},	{792,1},	{538,1},	{835,2},
  {577,2}
};

static struct patval fuseki13800[] = {
  {614,1},	{792,1},	{798,1},	{539,2},
  {569,2}
};

static struct patval fuseki13801[] = {
  {606,1},	{798,1},	{792,1},	{533,2},
  {577,2}
};

static struct patval fuseki13802[] = {
  {762,1},	{570,1},	{576,1},	{835,2},
  {791,2}
};

static struct patval fuseki13803[] = {
  {754,1},	{570,1},	{576,1},	{829,2},
  {799,2}
};

static struct patval fuseki13804[] = {
  {606,1},	{798,1},	{792,1},	{533,2},
  {577,2}
};

static struct patval fuseki13805[] = {
  {724,1},	{762,1},	{798,1},	{725,2},
  {761,2}
};

static struct patval fuseki13806[] = {
  {830,1},	{576,2}
};

static struct patval fuseki13807[] = {
  {606,1},	{798,2}
};

static struct patval fuseki13808[] = {
  {614,1},	{792,2}
};

static struct patval fuseki13809[] = {
  {534,1},	{798,2}
};

static struct patval fuseki13810[] = {
  {754,1},	{576,2}
};

static struct patval fuseki13811[] = {
  {532,1},	{828,1},	{577,2},	{799,2}
};

static struct patval fuseki13812[] = {
  {828,1},	{836,1},	{539,2},	{533,2}
};

static struct patval fuseki13813[] = {
  {828,1},	{836,1},	{539,2},	{533,2}
};

static struct patval fuseki13814[] = {
  {532,1},	{828,1},	{577,2},	{799,2}
};

static struct patval fuseki13815[] = {
  {792,1},	{539,1},	{836,2}
};

static struct patval fuseki13816[] = {
  {570,1},	{835,1},	{540,2}
};

static struct patval fuseki13817[] = {
  {576,1},	{829,1},	{532,2}
};

static struct patval fuseki13818[] = {
  {792,1},	{539,1},	{836,2}
};

static struct patval fuseki13819[] = {
  {643,1},	{798,1},	{792,1},	{570,2},
  {577,2}
};

static struct patval fuseki13820[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {569,2}
};

static struct patval fuseki13821[] = {
  {798,1},	{576,1},	{831,1},	{792,2},
  {533,2}
};

static struct patval fuseki13822[] = {
  {570,1},	{792,1},	{537,1},	{576,2},
  {835,2}
};

static struct patval fuseki13823[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {569,2}
};

static struct patval fuseki13824[] = {
  {606,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13825[] = {
  {532,1},	{614,1},	{835,2},	{791,2}
};

static struct patval fuseki13826[] = {
  {606,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13827[] = {
  {754,1},	{836,1},	{577,2},	{533,2}
};

static struct patval fuseki13828[] = {
  {539,1},	{829,1},	{532,2}
};

static struct patval fuseki13829[] = {
  {569,1},	{799,1},	{540,2}
};

static struct patval fuseki13830[] = {
  {569,1},	{799,1},	{828,2}
};

static struct patval fuseki13831[] = {
  {570,1},	{540,1},	{829,2}
};

static struct patval fuseki13832[] = {
  {836,1},	{576,1},	{569,2}
};

static struct patval fuseki13833[] = {
  {799,1},	{791,1},	{539,2},	{569,2}
};

static struct patval fuseki13834[] = {
  {835,1},	{539,1},	{829,2},	{569,2}
};

static struct patval fuseki13835[] = {
  {835,1},	{539,1},	{533,2},	{791,2}
};

static struct patval fuseki13836[] = {
  {569,1},	{577,1},	{829,2},	{799,2}
};

static struct patval fuseki13837[] = {
  {532,1},	{539,1},	{829,2},	{799,2}
};

static struct patval fuseki13838[] = {
  {836,1},	{577,1},	{533,2},	{791,2}
};

static struct patval fuseki13839[] = {
  {836,1},	{829,1},	{539,2},	{569,2}
};

static struct patval fuseki13840[] = {
  {532,1},	{539,1},	{829,2},	{799,2}
};

static struct patval fuseki13841[] = {
  {836,1},	{828,1},	{614,1},	{539,2},
  {569,2}
};

static struct patval fuseki13842[] = {
  {532,1},	{828,1},	{538,1},	{835,2},
  {577,2}
};

static struct patval fuseki13843[] = {
  {532,1},	{828,1},	{538,1},	{835,2},
  {577,2}
};

static struct patval fuseki13844[] = {
  {798,1},	{828,2}
};

static struct patval fuseki13845[] = {
  {570,1},	{828,2}
};

static struct patval fuseki13846[] = {
  {792,1},	{836,2}
};

static struct patval fuseki13847[] = {
  {532,1},	{828,1},	{536,1},	{540,2},
  {836,2}
};

static struct patval fuseki13848[] = {
  {532,1},	{828,1},	{536,1},	{540,2},
  {836,2}
};

static struct patval fuseki13849[] = {
  {532,1},	{828,1},	{536,1},	{540,2},
  {836,2}
};

static struct patval fuseki13850[] = {
  {532,1},	{828,1},	{536,1},	{540,2},
  {836,2}
};

static struct patval fuseki13851[] = {
  {569,1},	{762,1},	{539,1},	{835,2},
  {792,2}
};

static struct patval fuseki13852[] = {
  {791,1},	{614,1},	{835,1},	{539,2},
  {570,2}
};

static struct patval fuseki13853[] = {
  {791,1},	{614,1},	{835,1},	{539,2},
  {570,2}
};

static struct patval fuseki13854[] = {
  {791,1},	{533,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13855[] = {
  {791,1},	{533,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13856[] = {
  {791,1},	{533,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13857[] = {
  {791,1},	{533,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13858[] = {
  {791,1},	{577,1},	{835,2}
};

static struct patval fuseki13859[] = {
  {829,1},	{539,1},	{799,2}
};

static struct patval fuseki13860[] = {
  {539,1},	{829,1},	{569,2}
};

static struct patval fuseki13861[] = {
  {569,1},	{799,1},	{829,2}
};

static struct patval fuseki13862[] = {
  {791,1},	{577,1},	{835,2}
};

static struct patval fuseki13863[] = {
  {570,1},	{799,1},	{829,2}
};

static struct patval fuseki13864[] = {
  {792,1},	{539,1},	{799,2}
};

static struct patval fuseki13865[] = {
  {576,1},	{829,1},	{569,2}
};

static struct patval fuseki13866[] = {
  {798,1},	{533,1},	{791,2}
};

static struct patval fuseki13867[] = {
  {791,1},	{830,1},	{576,2}
};

static struct patval fuseki13868[] = {
  {754,1},	{829,1},	{576,2}
};

static struct patval fuseki13869[] = {
  {614,1},	{539,1},	{792,2}
};

static struct patval fuseki13870[] = {
  {569,1},	{534,1},	{798,2}
};

static struct patval fuseki13871[] = {
  {569,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13872[] = {
  {791,1},	{836,1},	{577,2},	{570,2}
};

static struct patval fuseki13873[] = {
  {569,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13874[] = {
  {569,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13875[] = {
  {569,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki13876[] = {
  {569,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13877[] = {
  {569,1},	{577,1},	{798,2},	{792,2}
};

static struct patval fuseki13878[] = {
  {533,1},	{829,1},	{576,2},	{798,2}
};

static struct patval fuseki13879[] = {
  {835,1},	{539,1},	{792,2},	{570,2}
};

static struct patval fuseki13880[] = {
  {798,1},	{576,1},	{828,2},	{532,2}
};

static struct patval fuseki13881[] = {
  {798,1},	{792,1},	{532,2},	{540,2}
};

static struct patval fuseki13882[] = {
  {570,1},	{792,1},	{540,2},	{836,2}
};

static struct patval fuseki13883[] = {
  {533,1},	{799,1},	{577,2},	{792,2}
};

static struct patval fuseki13884[] = {
  {577,1},	{829,1},	{835,2},	{570,2}
};

static struct patval fuseki13885[] = {
  {577,1},	{829,1},	{570,2},	{799,2}
};

static struct patval fuseki13886[] = {
  {577,1},	{829,1},	{570,2},	{799,2}
};

static struct patval fuseki13887[] = {
  {791,1},	{539,1},	{533,2},	{798,2}
};

static struct patval fuseki13888[] = {
  {577,1},	{533,1},	{798,2},	{791,2}
};

static struct patval fuseki13889[] = {
  {577,1},	{835,1},	{792,2},	{533,2}
};

static struct patval fuseki13890[] = {
  {577,1},	{533,1},	{798,2},	{791,2}
};

static struct patval fuseki13891[] = {
  {532,1},	{828,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13892[] = {
  {532,1},	{828,1},	{538,1},	{798,2},
  {577,2}
};

static struct patval fuseki13893[] = {
  {532,1},	{828,1},	{834,1},	{576,2},
  {799,2}
};

static struct patval fuseki13894[] = {
  {796,1},	{798,1},	{725,2}
};

static struct patval fuseki13895[] = {
  {796,1},	{798,1},	{725,2}
};

static struct patval fuseki13896[] = {
  {796,1},	{798,1},	{725,2}
};

static struct patval fuseki13897[] = {
  {798,1},	{724,1},	{833,2}
};

static struct patval fuseki13898[] = {
  {533,1},	{539,1},	{798,2}
};

static struct patval fuseki13899[] = {
  {569,1},	{791,1},	{576,2}
};

static struct patval fuseki13900[] = {
  {762,1},	{570,1},	{576,1},	{791,2},
  {836,2}
};

static struct patval fuseki13901[] = {
  {798,1},	{576,1},	{534,1},	{829,2},
  {532,2}
};

static struct patval fuseki13902[] = {
  {762,1},	{570,1},	{576,1},	{791,2},
  {836,2}
};

static struct patval fuseki13903[] = {
  {570,1},	{792,1},	{538,1},	{835,2},
  {540,2}
};

static struct patval fuseki13904[] = {
  {835,1},	{576,1},	{828,2},	{532,2}
};

static struct patval fuseki13905[] = {
  {569,1},	{576,1},	{828,2},	{836,2}
};

static struct patval fuseki13906[] = {
  {799,1},	{576,1},	{828,2},	{532,2}
};

static struct patval fuseki13907[] = {
  {829,1},	{539,1},	{798,2}
};

static struct patval fuseki13908[] = {
  {569,1},	{799,1},	{576,2}
};

static struct patval fuseki13909[] = {
  {791,1},	{577,1},	{798,2}
};

static struct patval fuseki13910[] = {
  {798,1},	{539,1},	{533,2},	{791,2}
};

static struct patval fuseki13911[] = {
  {798,1},	{539,1},	{533,2},	{791,2}
};

static struct patval fuseki13912[] = {
  {570,1},	{577,1},	{829,2},	{799,2}
};

static struct patval fuseki13913[] = {
  {798,1},	{791,1},	{539,2},	{569,2}
};

static struct patval fuseki13914[] = {
  {570,1},	{799,1},	{539,2}
};

static struct patval fuseki13915[] = {
  {569,1},	{798,1},	{829,2}
};

static struct patval fuseki13916[] = {
  {533,1},	{798,1},	{577,2}
};

static struct patval fuseki13917[] = {
  {569,1},	{798,1},	{829,2}
};

static struct patval fuseki13918[] = {
  {576,1},	{791,1},	{532,2}
};

static struct patval fuseki13919[] = {
  {835,1},	{570,1},	{828,2}
};

static struct patval fuseki13920[] = {
  {569,1},	{798,1},	{828,2}
};

static struct patval fuseki13921[] = {
  {792,1},	{577,1},	{836,2}
};

static struct patval fuseki13922[] = {
  {533,1},	{798,1},	{792,2}
};

static struct patval fuseki13923[] = {
  {533,1},	{798,1},	{792,2}
};

static struct patval fuseki13924[] = {
  {569,1},	{798,1},	{576,2}
};

static struct patval fuseki13925[] = {
  {569,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13926[] = {
  {569,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13927[] = {
  {569,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki13928[] = {
  {791,1},	{836,1},	{577,2},	{533,2}
};

static struct patval fuseki13929[] = {
  {540,1},	{835,1},	{533,2},	{791,2}
};

static struct patval fuseki13930[] = {
  {532,1},	{836,1},	{576,2},	{791,2}
};

static struct patval fuseki13931[] = {
  {532,1},	{836,1},	{539,2},	{792,2}
};

static struct patval fuseki13932[] = {
  {532,1},	{836,1},	{576,2},	{829,2}
};

static struct patval fuseki13933[] = {
  {532,1},	{836,1},	{576,2},	{791,2}
};

static struct patval fuseki13934[] = {
  {532,1},	{836,1},	{577,2},	{792,2}
};

static struct patval fuseki13935[] = {
  {791,1},	{799,1},	{539,2}
};

static struct patval fuseki13936[] = {
  {533,1},	{829,1},	{799,2}
};

static struct patval fuseki13937[] = {
  {569,1},	{577,1},	{835,2}
};

static struct patval fuseki13938[] = {
  {791,1},	{799,1},	{533,2}
};

static struct patval fuseki13939[] = {
  {569,1},	{540,1},	{798,2},	{829,2}
};

static struct patval fuseki13940[] = {
  {540,1},	{835,1},	{570,2},	{791,2}
};

static struct patval fuseki13941[] = {
  {569,1},	{540,1},	{798,2},	{829,2}
};

static struct patval fuseki13942[] = {
  {540,1},	{835,1},	{570,2},	{791,2}
};

static struct patval fuseki13943[] = {
  {569,1},	{540,1},	{798,2},	{829,2}
};

static struct patval fuseki13944[] = {
  {540,1},	{835,1},	{570,2},	{791,2}
};

static struct patval fuseki13945[] = {
  {830,1},	{798,2}
};

static struct patval fuseki13946[] = {
  {606,1},	{792,2}
};

static struct patval fuseki13947[] = {
  {830,1},	{798,2}
};

static struct patval fuseki13948[] = {
  {754,1},	{570,2}
};

static struct patval fuseki13949[] = {
  {614,1},	{798,2}
};

static struct patval fuseki13950[] = {
  {606,1},	{792,2}
};

static struct patval fuseki13951[] = {
  {792,1},	{761,1},	{539,2}
};

static struct patval fuseki13952[] = {
  {607,1},	{576,1},	{829,2}
};

static struct patval fuseki13953[] = {
  {576,1},	{797,1},	{791,2}
};

static struct patval fuseki13954[] = {
  {791,1},	{533,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki13955[] = {
  {791,1},	{533,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki13956[] = {
  {569,1},	{539,1},	{833,1},	{792,2},
  {798,2}
};

static struct patval fuseki13957[] = {
  {791,1},	{533,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki13958[] = {
  {791,1},	{533,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki13959[] = {
  {754,1},	{798,1},	{576,2},	{570,2}
};

static struct patval fuseki13960[] = {
  {570,1},	{614,1},	{798,2},	{792,2}
};

static struct patval fuseki13961[] = {
  {606,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13962[] = {
  {798,1},	{538,1},	{792,2},	{570,2}
};

static struct patval fuseki13963[] = {
  {606,1},	{576,1},	{792,2},	{798,2}
};

static struct patval fuseki13964[] = {
  {762,1},	{792,1},	{576,2},	{570,2}
};

static struct patval fuseki13965[] = {
  {569,1},	{828,1},	{576,2},	{836,2}
};

static struct patval fuseki13966[] = {
  {836,1},	{829,1},	{540,2},	{570,2}
};

static struct patval fuseki13967[] = {
  {532,1},	{539,1},	{828,2},	{798,2}
};

static struct patval fuseki13968[] = {
  {569,1},	{828,1},	{576,2},	{836,2}
};

static struct patval fuseki13969[] = {
  {532,1},	{835,1},	{576,2},	{792,2}
};

static struct patval fuseki13970[] = {
  {533,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki13971[] = {
  {791,1},	{540,1},	{798,2},	{570,2}
};

static struct patval fuseki13972[] = {
  {570,1},	{688,1},	{576,1},	{798,2},
  {792,2}
};

static struct patval fuseki13973[] = {
  {688,1},	{792,1},	{798,1},	{576,2},
  {570,2}
};

static struct patval fuseki13974[] = {
  {798,1},	{576,1},	{536,1},	{792,2},
  {570,2}
};

static struct patval fuseki13975[] = {
  {680,1},	{570,1},	{576,1},	{792,2},
  {798,2}
};

static struct patval fuseki13976[] = {
  {688,1},	{792,1},	{798,1},	{576,2},
  {570,2}
};

static struct patval fuseki13977[] = {
  {798,1},	{576,1},	{536,1},	{792,2},
  {570,2}
};

static struct patval fuseki13978[] = {
  {828,1},	{798,1},	{540,2}
};

static struct patval fuseki13979[] = {
  {836,1},	{792,1},	{532,2}
};

static struct patval fuseki13980[] = {
  {532,1},	{792,1},	{836,2}
};

static struct patval fuseki13981[] = {
  {836,1},	{576,1},	{532,2}
};

static struct patval fuseki13982[] = {
  {754,1},	{836,1},	{540,2},	{570,2}
};

static struct patval fuseki13983[] = {
  {762,1},	{828,1},	{576,2},	{532,2}
};

static struct patval fuseki13984[] = {
  {762,1},	{828,1},	{576,2},	{532,2}
};

static struct patval fuseki13985[] = {
  {828,1},	{534,1},	{576,2},	{836,2}
};

static struct patval fuseki13986[] = {
  {836,1},	{538,1},	{570,2},	{828,2}
};

static struct patval fuseki13987[] = {
  {828,1},	{534,1},	{576,2},	{836,2}
};

static struct patval fuseki13988[] = {
  {760,1},	{797,1},	{761,1},	{798,2},
  {799,2}
};

static struct patval fuseki13989[] = {
  {793,1},	{755,1},	{756,1},	{792,2},
  {791,2}
};

static struct patval fuseki13990[] = {
  {577,1},	{684,2}
};

static struct patval fuseki13991[] = {
  {829,1},	{684,2}
};

static struct patval fuseki13992[] = {
  {791,1},	{684,2}
};

static struct patval fuseki13993[] = {
  {835,1},	{684,2}
};

static struct patval fuseki13994[] = {
  {836,1},	{829,1},	{570,2}
};

static struct patval fuseki13995[] = {
  {532,1},	{791,1},	{798,2}
};

static struct patval fuseki13996[] = {
  {836,1},	{577,1},	{570,2}
};

static struct patval fuseki13997[] = {
  {570,1},	{576,1},	{795,1},	{792,2},
  {798,2}
};

static struct patval fuseki13998[] = {
  {798,1},	{792,1},	{573,1},	{576,2},
  {570,2}
};

static struct patval fuseki13999[] = {
  {570,1},	{792,1},	{687,1},	{576,2},
  {798,2}
};

static struct patval fuseki131000[] = {
  {798,1},	{681,1},	{576,1},	{792,2},
  {570,2}
};

static struct patval fuseki131001[] = {
  {532,1},	{828,1},	{651,1},	{835,2},
  {576,2}
};

static struct patval fuseki131002[] = {
  {532,1},	{828,1},	{725,1},	{798,2},
  {539,2}
};

static struct patval fuseki131003[] = {
  {532,1},	{828,1},	{651,1},	{835,2},
  {576,2}
};

static struct patval fuseki131004[] = {
  {532,1},	{828,1},	{577,2},	{836,2}
};

static struct patval fuseki131005[] = {
  {836,1},	{828,1},	{539,2},	{532,2}
};

static struct patval fuseki131006[] = {
  {532,1},	{828,1},	{577,2},	{836,2}
};

static struct patval fuseki131007[] = {
  {539,1},	{614,1},	{836,2}
};

static struct patval fuseki131008[] = {
  {577,1},	{538,1},	{532,2}
};

static struct patval fuseki131009[] = {
  {791,1},	{830,1},	{836,2}
};

static struct patval fuseki131010[] = {
  {540,1},	{798,1},	{828,2},	{532,2}
};

static struct patval fuseki131011[] = {
  {754,1},	{829,1},	{570,2}
};

static struct patval fuseki131012[] = {
  {754,1},	{829,1},	{570,2}
};

static struct patval fuseki131013[] = {
  {606,1},	{533,1},	{792,2}
};

static struct patval fuseki131014[] = {
  {836,1},	{792,1},	{577,2},	{570,2}
};

static struct patval fuseki131015[] = {
  {532,1},	{576,1},	{791,2},	{798,2}
};

static struct patval fuseki131016[] = {
  {570,1},	{540,1},	{792,2},	{799,2}
};

static struct patval fuseki131017[] = {
  {540,1},	{798,1},	{792,2},	{533,2}
};

static struct patval fuseki131018[] = {
  {828,1},	{570,1},	{576,2},	{835,2}
};

static struct patval fuseki131019[] = {
  {836,1},	{539,1},	{570,2},	{791,2}
};

static struct patval fuseki131020[] = {
  {532,1},	{829,1},	{798,2},	{577,2}
};

static struct patval fuseki131021[] = {
  {836,1},	{539,1},	{570,2},	{791,2}
};

static struct patval fuseki131022[] = {
  {577,1},	{792,1},	{798,2},	{570,2}
};

static struct patval fuseki131023[] = {
  {569,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki131024[] = {
  {539,1},	{792,1},	{570,2},	{798,2}
};

static struct patval fuseki131025[] = {
  {791,1},	{576,1},	{570,2},	{798,2}
};

static struct patval fuseki131026[] = {
  {791,1},	{576,1},	{570,2},	{798,2}
};

static struct patval fuseki131027[] = {
  {569,1},	{577,1},	{539,1},	{828,2},
  {614,2},	{836,2}
};

static struct patval fuseki131028[] = {
  {532,1},	{643,1},	{540,1},	{644,1},
  {828,2},	{718,2},	{680,2},	{836,2}
};

static struct patval fuseki131029[] = {
  {532,1},	{643,1},	{540,1},	{644,1},
  {828,2},	{718,2},	{680,2},	{836,2}
};

static struct patval fuseki131030[] = {
  {532,1},	{643,1},	{540,1},	{644,1},
  {828,2},	{718,2},	{680,2},	{836,2}
};

static struct patval fuseki131031[] = {
  {532,1},	{643,1},	{540,1},	{644,1},
  {828,2},	{718,2},	{680,2},	{836,2}
};

static struct patval fuseki131032[] = {
  {532,1},	{643,1},	{540,1},	{644,1},
  {828,2},	{718,2},	{680,2},	{836,2}
};

static struct patval fuseki131033[] = {
  {532,1},	{828,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki131034[] = {
  {532,1},	{828,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki131035[] = {
  {532,1},	{828,1},	{725,1},	{798,2},
  {576,2}
};

static struct patval fuseki131036[] = {
  {828,1},	{835,1},	{539,2}
};

static struct patval fuseki131037[] = {
  {836,1},	{577,1},	{569,2}
};

static struct patval fuseki131038[] = {
  {836,1},	{829,1},	{533,2}
};

static struct patval fuseki131039[] = {
  {532,1},	{684,2}
};

static struct patval fuseki131040[] = {
  {540,1},	{684,2}
};

static struct patval fuseki131041[] = {
  {540,1},	{684,2}
};

static struct patval fuseki131042[] = {
  {540,1},	{684,2}
};

static struct patval fuseki131043[] = {
  {540,1},	{684,2}
};

static struct patval fuseki131044[] = {
  {606,1},	{799,1},	{829,1},	{577,2},
  {533,2}
};

static struct patval fuseki131045[] = {
  {791,1},	{533,1},	{834,1},	{539,2},
  {799,2}
};

static struct patval fuseki131046[] = {
  {791,1},	{533,1},	{834,1},	{539,2},
  {799,2}
};

static struct patval fuseki131047[] = {
  {540,1},	{798,1},	{569,2}
};

static struct patval fuseki131048[] = {
  {570,1},	{540,1},	{835,2}
};

static struct patval fuseki131049[] = {
  {570,1},	{540,1},	{835,2}
};

static struct patval fuseki131050[] = {
  {532,1},	{539,1},	{836,2}
};

static struct patval fuseki131051[] = {
  {576,1},	{533,1},	{791,2},	{835,2}
};

static struct patval fuseki131052[] = {
  {576,1},	{533,1},	{791,2},	{835,2}
};

static struct patval fuseki131053[] = {
  {569,1},	{792,1},	{539,2},	{799,2}
};

static struct patval fuseki131054[] = {
  {569,1},	{792,1},	{539,2},	{799,2}
};

static struct patval fuseki131055[] = {
  {798,1},	{687,1},	{576,1},	{792,2},
  {570,2}
};

static struct patval fuseki131056[] = {
  {798,1},	{687,1},	{576,1},	{792,2},
  {570,2}
};

static struct patval fuseki131057[] = {
  {798,1},	{687,1},	{576,1},	{792,2},
  {570,2}
};

static struct patval fuseki131058[] = {
  {532,1},	{828,1},	{725,1},	{540,2},
  {798,2}
};

static struct patval fuseki131059[] = {
  {532,1},	{828,1},	{651,1},	{576,2},
  {836,2}
};

static struct patval fuseki131060[] = {
  {532,1},	{828,1},	{651,1},	{576,2},
  {836,2}
};

static struct patval fuseki131061[] = {
  {532,1},	{828,1},	{725,1},	{540,2},
  {798,2}
};

static struct patval fuseki131062[] = {
  {532,1},	{828,1},	{725,1},	{540,2},
  {798,2}
};

static struct patval fuseki131063[] = {
  {718,1},	{836,1},	{680,1},	{828,1},
  {532,2},	{540,2},	{643,2}
};

static struct patval fuseki131064[] = {
  {828,1},	{534,1},	{539,2},	{798,2}
};

static struct patval fuseki131065[] = {
  {828,1},	{534,1},	{539,2},	{798,2}
};

static struct patval fuseki131066[] = {
  {828,1},	{534,1},	{539,2},	{798,2}
};

static struct patval fuseki131067[] = {
  {836,1},	{754,1},	{576,2},	{569,2}
};

static struct patval fuseki131068[] = {
  {614,1},	{828,1},	{836,1},	{613,1},
  {577,2},	{569,2},	{539,2}
};

static struct patval fuseki131069[] = {
  {532,1},	{828,1},	{538,1},	{575,1},
  {539,2},	{835,2},	{577,2}
};

static struct patval fuseki131070[] = {
  {532,1},	{828,1},	{538,1},	{575,1},
  {539,2},	{835,2},	{577,2}
};

static struct patval fuseki131071[] = {
  {614,1},	{828,1},	{836,1},	{613,1},
  {577,2},	{569,2},	{539,2}
};

static struct patval fuseki131072[] = {
  {576,1},	{607,1},	{533,2},	{791,2}
};

static struct patval fuseki131073[] = {
  {576,1},	{607,1},	{533,2},	{791,2}
};

static struct patval fuseki131074[] = {
  {570,1},	{576,1},	{829,2},	{835,2}
};

static struct patval fuseki131075[] = {
  {570,1},	{576,1},	{829,2},	{835,2}
};

static struct patval fuseki131076[] = {
  {570,1},	{792,1},	{577,2},	{799,2}
};

static struct patval fuseki131077[] = {
  {798,1},	{792,1},	{539,2},	{533,2}
};

static struct patval fuseki131078[] = {
  {798,1},	{792,1},	{539,2},	{533,2}
};

static struct patval fuseki131079[] = {
  {761,1},	{792,1},	{532,2}
};

static struct patval fuseki131080[] = {
  {607,1},	{576,1},	{836,2}
};

static struct patval fuseki131081[] = {
  {576,1},	{797,1},	{532,2}
};

static struct patval fuseki131082[] = {
  {607,1},	{576,1},	{836,2}
};

static struct patval fuseki131083[] = {
  {798,1},	{792,1},	{687,1},	{576,2},
  {570,2}
};

static struct patval fuseki131084[] = {
  {570,1},	{792,1},	{573,1},	{576,2},
  {798,2}
};

static struct patval fuseki131085[] = {
  {539,1},	{792,1},	{570,2}
};

static struct patval fuseki131086[] = {
  {569,1},	{798,1},	{792,2}
};

static struct patval fuseki131087[] = {
  {533,1},	{798,1},	{576,2}
};

static struct patval fuseki131088[] = {
  {791,1},	{576,1},	{570,2}
};

static struct patval fuseki131089[] = {
  {797,1},	{762,2}
};

static struct patval fuseki131090[] = {
  {607,1},	{534,2}
};

static struct patval fuseki131091[] = {
  {571,1},	{606,2}
};

static struct patval fuseki131092[] = {
  {797,1},	{762,2}
};

static struct patval fuseki131093[] = {
  {836,1},	{828,1},	{718,1},	{540,2},
  {532,2}
};

static struct patval fuseki131094[] = {
  {532,1},	{836,1},	{829,2}
};

static struct patval fuseki131095[] = {
  {828,1},	{540,1},	{835,2}
};

static struct patval fuseki131096[] = {
  {828,1},	{540,1},	{835,2}
};

static struct patval fuseki131097[] = {
  {532,1},	{836,1},	{829,2}
};

static struct patval fuseki131098[] = {
  {799,1},	{798,1},	{761,2},	{760,2}
};

static struct patval fuseki131099[] = {
  {570,1},	{798,1},	{831,1},	{576,2},
  {792,2}
};

static struct patval fuseki131100[] = {
  {570,1},	{651,1},	{798,1},	{576,2},
  {792,2}
};

static struct patval fuseki131101[] = {
  {570,1},	{651,1},	{798,1},	{576,2},
  {792,2}
};

static struct patval fuseki131102[] = {
  {836,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki131103[] = {
  {828,1},	{798,1},	{533,2},	{577,2}
};

static struct patval fuseki131104[] = {
  {540,1},	{798,1},	{829,2},	{569,2}
};

static struct patval fuseki131105[] = {
  {836,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki131106[] = {
  {532,1},	{576,1},	{829,2},	{799,2}
};

static struct patval fuseki131107[] = {
  {798,1},	{797,1},	{724,1},	{762,1},
  {760,2},	{725,2},	{761,2}
};

static struct patval fuseki131108[] = {
  {798,1},	{797,1},	{724,1},	{762,1},
  {760,2},	{725,2},	{761,2}
};

static struct patval fuseki131109[] = {
  {836,1},	{835,1},	{798,2}
};

static struct patval fuseki131110[] = {
  {828,1},	{829,1},	{792,2}
};

static struct patval fuseki131111[] = {
  {828,1},	{829,1},	{792,2}
};

static struct patval fuseki131112[] = {
  {532,1},	{791,1},	{797,2},	{576,2}
};

static struct patval fuseki131113[] = {
  {828,1},	{835,1},	{613,2},	{570,2}
};

static struct patval fuseki131114[] = {
  {532,1},	{539,1},	{792,2},	{761,2}
};

static struct patval fuseki131115[] = {
  {532,1},	{791,1},	{797,2},	{576,2}
};

static struct patval fuseki131116[] = {
  {532,1},	{539,1},	{792,2},	{761,2}
};

static struct patval fuseki131117[] = {
  {569,1},	{828,1},	{576,2},	{799,2}
};

static struct patval fuseki131118[] = {
  {569,1},	{828,1},	{576,2},	{799,2}
};

static struct patval fuseki131119[] = {
  {532,1},	{539,1},	{829,2},	{798,2}
};

static struct patval fuseki131120[] = {
  {798,1},	{687,1},	{576,1},	{792,2},
  {533,2}
};

static struct patval fuseki131121[] = {
  {798,1},	{792,1},	{795,1},	{570,2},
  {577,2}
};

static struct patval fuseki131122[] = {
  {576,1},	{570,1},	{573,1},	{791,2},
  {798,2}
};

static struct patval fuseki131123[] = {
  {798,1},	{687,1},	{576,1},	{792,2},
  {533,2}
};

static struct patval fuseki131124[] = {
  {532,1},	{539,1},	{791,2},	{799,2}
};

static struct patval fuseki131125[] = {
  {532,1},	{539,1},	{791,2},	{799,2}
};

static struct patval fuseki131126[] = {
  {835,1},	{828,1},	{569,2},	{577,2}
};

static struct patval fuseki131127[] = {
  {532,1},	{539,1},	{791,2},	{799,2}
};

static struct patval fuseki131128[] = {
  {532,1},	{539,1},	{791,2},	{799,2}
};

static struct patval fuseki131129[] = {
  {532,1},	{643,1},	{540,1},	{718,2},
  {828,2},	{836,2}
};

static struct patval fuseki131130[] = {
  {569,1},	{540,1},	{798,2},	{755,2}
};

static struct patval fuseki131131[] = {
  {836,1},	{539,1},	{571,2},	{792,2}
};

static struct patval fuseki131132[] = {
  {791,1},	{836,1},	{576,2},	{607,2}
};

static struct patval fuseki131133[] = {
  {791,1},	{836,1},	{576,2},	{607,2}
};

static struct patval fuseki131134[] = {
  {540,1},	{835,1},	{793,2},	{570,2}
};

static struct patval fuseki131135[] = {
  {532,1},	{836,1},	{539,2},	{829,2}
};

static struct patval fuseki131136[] = {
  {532,1},	{836,1},	{577,2},	{791,2}
};

static struct patval fuseki131137[] = {
  {532,1},	{836,1},	{539,2},	{829,2}
};

static struct patval fuseki131138[] = {
  {828,1},	{540,1},	{835,2},	{533,2}
};

static struct patval fuseki131139[] = {
  {799,1},	{576,1},	{834,1},	{828,2},
  {532,2}
};

static struct patval fuseki131140[] = {
  {762,1},	{792,1},	{835,1},	{540,2},
  {532,2}
};

static struct patval fuseki131141[] = {
  {828,1},	{799,1},	{577,2},	{533,2}
};

static struct patval fuseki131142[] = {
  {540,1},	{835,1},	{829,2},	{569,2}
};

static struct patval fuseki131143[] = {
  {569,1},	{540,1},	{835,2},	{791,2}
};

static struct patval fuseki131144[] = {
  {532,1},	{791,1},	{793,2}
};

static struct patval fuseki131145[] = {
  {532,1},	{791,1},	{793,2}
};

static struct patval fuseki131146[] = {
  {532,1},	{791,1},	{793,2}
};

static struct patval fuseki131147[] = {
  {570,1},	{836,1},	{577,2},	{792,2}
};

static struct patval fuseki131148[] = {
  {540,1},	{792,1},	{798,2},	{533,2}
};

static struct patval fuseki131149[] = {
  {570,1},	{836,1},	{576,2},	{829,2}
};

static struct patval fuseki131150[] = {
  {570,1},	{836,1},	{577,2},	{792,2}
};

static struct patval fuseki131151[] = {
  {575,1},	{829,2}
};

static struct patval fuseki131152[] = {
  {613,1},	{791,2}
};

static struct patval fuseki131153[] = {
  {793,1},	{539,2}
};

static struct patval fuseki131154[] = {
  {540,1},	{798,1},	{533,2},	{791,2}
};

static struct patval fuseki131155[] = {
  {570,1},	{540,1},	{829,2},	{799,2}
};

static struct patval fuseki131156[] = {
  {792,1},	{828,2}
};

static struct patval fuseki131157[] = {
  {792,1},	{828,2}
};

static struct patval fuseki131158[] = {
  {576,1},	{798,1},	{836,2}
};

static struct patval fuseki131159[] = {
  {576,1},	{798,1},	{540,2}
};

static struct patval fuseki131160[] = {
  {792,1},	{570,1},	{532,2}
};

static struct patval fuseki131161[] = {
  {540,1},	{798,1},	{570,2},	{828,2}
};

static struct patval fuseki131162[] = {
  {532,1},	{792,1},	{576,2},	{836,2}
};

static struct patval fuseki131163[] = {
  {569,1},	{829,1},	{534,1},	{540,2},
  {836,2}
};

static struct patval fuseki131164[] = {
  {569,1},	{829,1},	{534,1},	{540,2},
  {836,2}
};

static struct patval fuseki131165[] = {
  {798,1},	{536,1},	{569,2},	{577,2}
};

static struct patval fuseki131166[] = {
  {792,1},	{688,1},	{835,2},	{539,2}
};

static struct patval fuseki131167[] = {
  {798,1},	{536,1},	{569,2},	{577,2}
};

static struct patval fuseki131168[] = {
  {791,1},	{533,1},	{835,1},	{576,2},
  {607,2}
};

static struct patval fuseki131169[] = {
  {799,1},	{829,1},	{539,1},	{613,2},
  {570,2}
};

static struct patval fuseki131170[] = {
  {791,1},	{533,1},	{835,1},	{576,2},
  {607,2}
};

static struct patval fuseki131171[] = {
  {687,1},	{725,1},	{798,2},	{724,2}
};

static struct patval fuseki131172[] = {
  {725,1},	{762,1},	{687,1},	{761,1},
  {724,2},	{798,2},	{686,2},	{723,2}
};

static struct patval fuseki131173[] = {
  {614,1},	{798,1},	{539,2},	{569,2}
};

static struct patval fuseki131174[] = {
  {606,1},	{792,1},	{533,2},	{577,2}
};

static struct patval fuseki131175[] = {
  {576,1},	{534,1},	{829,2},	{569,2}
};

static struct patval fuseki131176[] = {
  {792,1},	{834,1},	{539,2},	{799,2}
};

static struct patval fuseki131177[] = {
  {754,1},	{792,1},	{791,2},	{829,2}
};

static struct patval fuseki131178[] = {
  {754,1},	{792,1},	{791,2},	{829,2}
};

static struct patval fuseki131179[] = {
  {570,1},	{687,1},	{576,1},	{792,2},
  {681,2},	{798,2}
};

static struct patval fuseki131180[] = {
  {576,1},	{798,1},	{795,1},	{573,2},
  {570,2},	{792,2}
};

static struct patval fuseki131181[] = {
  {570,1},	{681,1},	{576,1},	{792,2},
  {687,2},	{798,2}
};

static struct patval fuseki131182[] = {
  {687,1},	{798,1},	{792,1},	{576,2},
  {570,2},	{681,2}
};

static struct patval fuseki131183[] = {
  {576,1},	{834,1},	{792,2},	{799,2}
};

static struct patval fuseki131184[] = {
  {576,1},	{834,1},	{792,2},	{799,2}
};

static struct patval fuseki131185[] = {
  {606,1},	{576,1},	{792,2},	{533,2}
};

static struct patval fuseki131186[] = {
  {534,1},	{792,1},	{569,2},	{576,2}
};

static struct patval fuseki131187[] = {
  {830,1},	{798,1},	{755,1},	{569,2},
  {539,2},	{791,2}
};

static struct patval fuseki131188[] = {
  {831,1}
};

static struct patval fuseki131189[] = {
  {831,1}
};

static struct patval fuseki131190[] = {
  {725,1}
};

static struct patval fuseki131191[] = {
  {532,1},	{791,1},	{576,2},	{799,2}
};

static struct patval fuseki131192[] = {
  {532,1},	{539,1},	{792,2},	{835,2}
};

static struct patval fuseki131193[] = {
  {532,1},	{791,1},	{576,2},	{799,2}
};

static struct patval fuseki131194[] = {
  {569,1},	{577,1},	{791,2}
};

static struct patval fuseki131195[] = {
  {799,1},	{791,1},	{569,2}
};

static struct patval fuseki131196[] = {
  {569,1},	{577,1},	{799,2}
};

static struct patval fuseki131197[] = {
  {576,1},	{797,1},	{533,2},	{791,2}
};

static struct patval fuseki131198[] = {
  {792,1},	{571,1},	{835,2},	{577,2}
};

static struct patval fuseki131199[] = {
  {607,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki131200[] = {
  {607,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki131201[] = {
  {570,1},	{793,1},	{539,2},	{798,2}
};

static struct patval fuseki131202[] = {
  {798,1},	{576,1},	{570,1},	{828,2},
  {532,2}
};

static struct patval fuseki131203[] = {
  {576,1},	{570,1},	{792,1},	{828,2},
  {836,2}
};

static struct patval fuseki131204[] = {
  {614,1},	{570,1},	{798,1},	{539,2},
  {828,2}
};

static struct patval fuseki131205[] = {
  {762,1},	{792,1},	{576,1},	{835,2},
  {532,2}
};

static struct patval fuseki131206[] = {
  {798,1},	{570,1},	{538,1},	{828,2},
  {577,2}
};

static struct patval fuseki131207[] = {
  {613,1},	{828,2}
};

static struct patval fuseki131208[] = {
  {755,1},	{540,2}
};

static struct patval fuseki131209[] = {
  {613,1},	{828,2}
};

static struct patval fuseki131210[] = {
  {569,1},	{791,1},	{539,2}
};

static struct patval fuseki131211[] = {
  {533,1},	{539,1},	{799,2}
};

static struct patval fuseki131212[] = {
  {576,1},	{798,1},	{607,1},	{830,2},
  {791,2},	{533,2}
};

static struct patval fuseki131213[] = {
  {576,1},	{798,1},	{607,1},	{830,2},
  {791,2},	{533,2}
};

static struct patval fuseki131214[] = {
  {799,1},	{576,1},	{833,1},	{828,2},
  {532,2}
};

static struct patval fuseki131215[] = {
  {577,1},	{798,1},	{538,1},	{791,2},
  {532,2}
};

static struct patval fuseki131216[] = {
  {798,1},	{754,1},	{829,1},	{539,2},
  {532,2}
};

static struct patval fuseki131217[] = {
  {533,1},	{762,2}
};

static struct patval fuseki131218[] = {
  {835,1},	{606,2}
};

static struct patval fuseki131219[] = {
  {569,1},	{834,2}
};

static struct patval fuseki131220[] = {
  {539,1},	{754,2}
};

static struct patval fuseki131221[] = {
  {569,1},	{539,1},	{829,2},	{798,2}
};

static struct patval fuseki131222[] = {
  {569,1},	{539,1},	{829,2},	{798,2}
};

static struct patval fuseki131223[] = {
  {799,1},	{539,1},	{792,2},	{569,2}
};

static struct patval fuseki131224[] = {
  {791,1},	{835,1},	{576,2},	{533,2}
};

static struct patval fuseki131225[] = {
  {798,1},	{534,2}
};

static struct patval fuseki131226[] = {
  {798,1},	{606,2}
};

static struct patval fuseki131227[] = {
  {576,1},	{754,2}
};

static struct patval fuseki131228[] = {
  {792,1},	{538,2}
};

static struct patval fuseki131229[] = {
  {761,1},	{687,1},	{725,1},	{686,2},
  {798,2},	{724,2}
};

static struct patval fuseki131230[] = {
  {686,1},	{723,1},	{760,1},	{798,1},
  {724,1},	{761,2},	{687,2},	{725,2},
  {762,2}
};

static struct patval fuseki131231[] = {
  {532,1},	{539,1},	{828,2},	{836,2}
};

static struct patval fuseki131232[] = {
  {606,1},	{798,1},	{576,1},	{830,2},
  {533,2},	{791,2}
};

static struct patval fuseki131233[] = {
  {576,1},	{570,1},	{830,1},	{791,2},
  {835,2},	{762,2}
};

static struct patval fuseki131234[] = {
  {606,1},	{829,2}
};

static struct patval fuseki131235[] = {
  {606,1},	{829,2}
};

static struct patval fuseki131236[] = {
  {606,1},	{829,2}
};

static struct patval fuseki131237[] = {
  {791,1},	{829,1},	{792,2}
};

static struct patval fuseki131238[] = {
  {798,1},	{576,1},	{606,2}
};

static struct patval fuseki131239[] = {
  {798,1},	{576,1},	{754,2}
};

static struct patval fuseki131240[] = {
  {792,1},	{798,1},	{538,2}
};

static struct patval fuseki131241[] = {
  {828,1},	{799,1},	{576,2}
};

static struct patval fuseki131242[] = {
  {828,1},	{799,1},	{576,2}
};

static struct patval fuseki131243[] = {
  {532,1},	{577,1},	{798,2}
};

static struct patval fuseki131244[] = {
  {539,1},	{570,1},	{573,1},	{828,2},
  {836,2}
};

static struct patval fuseki131245[] = {
  {835,1},	{792,1},	{795,1},	{532,2},
  {540,2}
};

static struct patval fuseki131246[] = {
  {531,1},	{606,1},	{540,1},	{829,2},
  {533,2},	{799,2}
};

static struct patval fuseki131247[] = {
  {531,1},	{606,1},	{540,1},	{829,2},
  {533,2},	{799,2}
};

static struct patval fuseki131248[] = {
  {798,1},	{576,1},	{792,2},	{532,2}
};

static struct patval fuseki131249[] = {
  {576,1},	{570,1},	{828,2},	{798,2}
};

static struct patval fuseki131250[] = {
  {570,1},	{792,1},	{576,2},	{836,2}
};

static struct patval fuseki131251[] = {
  {798,1},	{576,1},	{792,2},	{532,2}
};

static struct patval fuseki131252[] = {
  {570,1},	{835,1},	{829,2}
};

static struct patval fuseki131253[] = {
  {829,1},	{576,1},	{835,2}
};

static struct patval fuseki131254[] = {
  {576,1},	{791,1},	{569,2}
};

static struct patval fuseki131255[] = {
  {828,1},	{570,1},	{835,2}
};

static struct patval fuseki131256[] = {
  {828,1},	{570,1},	{835,2}
};

static struct patval fuseki131257[] = {
  {532,1},	{792,1},	{539,2}
};

static struct patval fuseki131258[] = {
  {836,1},	{576,1},	{829,2}
};

static struct patval fuseki131259[] = {
  {792,1},	{754,1},	{798,1},	{717,2},
  {576,2},	{570,2}
};

static struct patval fuseki131260[] = {
  {570,1},	{792,1},	{534,1},	{535,2},
  {576,2},	{798,2}
};

static struct patval fuseki131261[] = {
  {606,1},	{576,1},	{570,1},	{792,2},
  {643,2},	{798,2}
};

static struct patval fuseki131262[] = {
  {570,1},	{576,1},	{792,2},	{761,2}
};

static struct patval fuseki131263[] = {
  {798,1},	{576,1},	{793,2},	{570,2}
};

static struct patval fuseki131264[] = {
  {798,1},	{792,1},	{576,2},	{607,2}
};

static struct patval fuseki131265[] = {
  {570,1},	{576,1},	{792,2},	{761,2}
};

static struct patval fuseki131266[] = {
  {570,1},	{829,1},	{576,2},	{799,2}
};

static struct patval fuseki131267[] = {
  {835,1},	{576,1},	{570,2},	{791,2}
};

static struct patval fuseki131268[] = {
  {799,1},	{792,1},	{539,2},	{570,2}
};

static struct patval fuseki131269[] = {
  {799,1},	{533,1},	{829,1},	{540,2},
  {606,2}
};

static struct patval fuseki131270[] = {
  {716,1},	{569,1},	{791,1},	{539,1},
  {830,2},	{755,2},	{798,2}
};

static struct patval fuseki131271[] = {
  {716,1},	{569,1},	{791,1},	{539,1},
  {830,2},	{755,2},	{798,2}
};

static struct patval fuseki131272[] = {
  {754,1},	{570,1},	{829,1},	{576,2},
  {798,2}
};

static struct patval fuseki131273[] = {
  {799,1},	{792,1},	{834,1},	{576,2},
  {570,2}
};

static struct patval fuseki131274[] = {
  {570,1},	{577,1},	{538,1},	{798,2},
  {792,2}
};

static struct patval fuseki131275[] = {
  {754,1},	{570,1},	{829,1},	{576,2},
  {798,2}
};

static struct patval fuseki131276[] = {
  {792,1},	{798,1},	{718,1},	{717,2},
  {576,2},	{570,2}
};

static struct patval fuseki131277[] = {
  {570,1},	{792,1},	{572,1},	{535,2},
  {576,2},	{798,2}
};

static struct patval fuseki131278[] = {
  {576,1},	{798,1},	{796,1},	{833,2},
  {570,2},	{792,2}
};

static struct patval fuseki131279[] = {
  {607,1},	{576,1},	{798,2}
};

static struct patval fuseki131280[] = {
  {792,1},	{571,1},	{798,2}
};

static struct patval fuseki131281[] = {
  {576,1},	{797,1},	{570,2}
};

static struct patval fuseki131282[] = {
  {570,1},	{793,1},	{576,2}
};

static struct patval fuseki131283[] = {
  {792,1},	{798,1},	{795,2}
};

static struct patval fuseki131284[] = {
  {533,1},	{577,1},	{798,2},	{829,2}
};

static struct patval fuseki131285[] = {
  {791,1},	{533,1},	{576,2},	{799,2}
};

static struct patval fuseki131286[] = {
  {569,1},	{829,1},	{798,2},	{577,2}
};

static struct patval fuseki131287[] = {
  {569,1},	{829,1},	{798,2},	{577,2}
};

static struct patval fuseki131288[] = {
  {686,1},	{723,1},	{798,1},	{724,1},
  {761,2},	{687,2},	{725,2}
};

static struct patval fuseki131289[] = {
  {533,1},	{792,1},	{834,2},	{576,2}
};

static struct patval fuseki131290[] = {
  {799,1},	{792,1},	{576,2},	{606,2}
};

static struct patval fuseki131291[] = {
  {791,1},	{798,1},	{570,2},	{614,2}
};

static struct patval fuseki131292[] = {
  {569,1},	{576,1},	{792,2},	{762,2}
};

static struct patval fuseki131293[] = {
  {570,1},	{793,1},	{835,2}
};

static struct patval fuseki131294[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {835,2}
};

static struct patval fuseki131295[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {835,2}
};

static struct patval fuseki131296[] = {
  {569,1},	{614,1},	{539,1},	{791,2},
  {799,2}
};

static struct patval fuseki131297[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {835,2}
};

static struct patval fuseki131298[] = {
  {569,1},	{791,1},	{793,2}
};

static struct patval fuseki131299[] = {
  {569,1},	{791,1},	{793,2}
};

static struct patval fuseki131300[] = {
  {569,1},	{791,1},	{793,2}
};

static struct patval fuseki131301[] = {
  {569,1},	{799,1},	{576,2},	{792,2}
};

static struct patval fuseki131302[] = {
  {533,1},	{835,1},	{576,2},	{792,2}
};

static struct patval fuseki131303[] = {
  {797,1},	{576,2}
};

static struct patval fuseki131304[] = {
  {761,1},	{792,2}
};

static struct patval fuseki131305[] = {
  {607,1},	{576,2}
};

static struct patval fuseki131306[] = {
  {791,1},	{570,1},	{576,2},	{799,2}
};

static struct patval fuseki131307[] = {
  {577,1},	{798,1},	{792,2},	{569,2}
};

static struct patval fuseki131308[] = {
  {533,1},	{576,1},	{829,2},	{798,2}
};

static struct patval fuseki131309[] = {
  {577,1},	{798,1},	{792,2},	{569,2}
};

static struct patval fuseki131310[] = {
  {799,1},	{792,1},	{540,2},	{569,2}
};

static struct patval fuseki131311[] = {
  {569,1},	{576,1},	{828,2},	{799,2}
};

static struct patval fuseki131312[] = {
  {569,1},	{576,1},	{828,2},	{799,2}
};

static struct patval fuseki131313[] = {
  {570,1},	{836,1},	{576,2},	{792,2}
};

static struct patval fuseki131314[] = {
  {540,1},	{792,1},	{798,2},	{570,2}
};

static struct patval fuseki131315[] = {
  {532,1},	{798,1},	{576,2},	{792,2}
};

static struct patval fuseki131316[] = {
  {532,1},	{828,1},	{537,1},	{833,2},
  {576,2},	{799,2}
};

static struct patval fuseki131317[] = {
  {532,1},	{828,1},	{833,1},	{537,2},
  {798,2},	{577,2}
};

static struct patval fuseki131318[] = {
  {532,1},	{828,1},	{537,1},	{833,2},
  {576,2},	{799,2}
};

static struct patval fuseki131319[] = {
  {762,1},	{576,1},	{835,2},	{792,2}
};

static struct patval fuseki131320[] = {
  {792,1},	{834,1},	{576,2},	{799,2}
};

static struct patval fuseki131321[] = {
  {762,1},	{576,1},	{835,2},	{792,2}
};

static struct patval fuseki131322[] = {
  {792,1},	{834,1},	{576,2},	{799,2}
};

static struct patval fuseki131323[] = {
  {836,1},	{539,1},	{791,2},	{569,2}
};

static struct patval fuseki131324[] = {
  {828,1},	{799,1},	{539,2},	{533,2}
};

static struct patval fuseki131325[] = {
  {569,1},	{828,1},	{577,2},	{836,2}
};

static struct patval fuseki131326[] = {
  {532,1},	{539,1},	{828,2},	{835,2}
};

static struct patval fuseki131327[] = {
  {532,1},	{539,1},	{828,2},	{835,2}
};

static struct patval fuseki131328[] = {
  {532,1},	{539,1},	{828,2},	{835,2}
};

static struct patval fuseki131329[] = {
  {687,1},	{795,1},	{792,2},	{798,2}
};

static struct patval fuseki131330[] = {
  {573,1},	{681,1},	{792,2},	{570,2}
};

static struct patval fuseki131331[] = {
  {795,1},	{687,1},	{576,2},	{798,2}
};

static struct patval fuseki131332[] = {
  {573,1},	{681,1},	{792,2},	{570,2}
};

static struct patval fuseki131333[] = {
  {791,1},	{570,1},	{830,1},	{539,2},
  {836,2}
};

static struct patval fuseki131334[] = {
  {606,1},	{576,1},	{533,1},	{828,2},
  {799,2}
};

static struct patval fuseki131335[] = {
  {799,1},	{576,1},	{834,1},	{533,2},
  {828,2}
};

static struct patval fuseki131336[] = {
  {539,1},	{792,1},	{570,2},	{799,2}
};

static struct patval fuseki131337[] = {
  {798,1},	{533,1},	{576,2},	{791,2}
};

static struct patval fuseki131338[] = {
  {577,1},	{792,1},	{798,2},	{533,2}
};

static struct patval fuseki131339[] = {
  {570,1},	{799,1},	{576,2},	{829,2}
};

static struct patval fuseki131340[] = {
  {686,1},	{798,1},	{724,1},	{687,2},
  {725,2}
};

static struct patval fuseki131341[] = {
  {533,1},	{799,1},	{576,2},	{792,2}
};

static struct patval fuseki131342[] = {
  {533,1},	{799,1},	{576,2},	{792,2}
};

static struct patval fuseki131343[] = {
  {569,1},	{835,1},	{576,2},	{792,2}
};

static struct patval fuseki131344[] = {
  {759,1},	{760,1},	{725,1},	{761,1},
  {724,2},	{798,2},	{797,2},	{762,2}
};

static struct patval fuseki131345[] = {
  {759,1},	{760,1},	{725,1},	{761,1},
  {724,2},	{798,2},	{797,2},	{762,2}
};

static struct patval fuseki131346[] = {
  {570,1},	{792,1},	{795,1},	{576,2},
  {835,2}
};

static struct patval fuseki131347[] = {
  {570,1},	{792,1},	{795,1},	{576,2},
  {835,2}
};

static struct patval fuseki131348[] = {
  {570,1},	{687,1},	{576,1},	{792,2},
  {799,2}
};

static struct patval fuseki131349[] = {
  {798,1},	{576,1},	{573,1},	{792,2},
  {533,2}
};

static struct patval fuseki131350[] = {
  {576,1},	{570,1},	{536,1},	{828,2},
  {836,2}
};

static struct patval fuseki131351[] = {
  {576,1},	{570,1},	{536,1},	{828,2},
  {836,2}
};

static struct patval fuseki131352[] = {
  {791,1},	{533,1},	{830,1},	{835,2},
  {577,2}
};

static struct patval fuseki131353[] = {
  {569,1},	{614,1},	{539,1},	{829,2},
  {799,2}
};

static struct patval fuseki131354[] = {
  {569,1},	{614,1},	{539,1},	{829,2},
  {799,2}
};

static struct patval fuseki131355[] = {
  {569,1},	{792,1},	{539,2},	{835,2}
};

static struct patval fuseki131356[] = {
  {576,1},	{533,1},	{791,2},	{799,2}
};

static struct patval fuseki131357[] = {
  {835,1},	{792,1},	{569,2},	{577,2}
};

static struct patval fuseki131358[] = {
  {576,1},	{533,1},	{791,2},	{799,2}
};

static struct patval fuseki131359[] = {
  {799,1},	{726,1},	{798,1},	{761,2},
  {760,2},	{797,2}
};

static struct patval fuseki131360[] = {
  {799,1},	{726,1},	{798,1},	{761,2},
  {760,2},	{797,2}
};

static struct patval fuseki131361[] = {
  {799,1},	{726,1},	{798,1},	{761,2},
  {760,2},	{797,2}
};

static struct patval fuseki131362[] = {
  {724,1},	{798,1},	{576,1},	{833,2},
  {570,2},	{792,2}
};

static struct patval fuseki131363[] = {
  {576,1},	{570,1},	{572,1},	{792,2},
  {643,2},	{798,2}
};

static struct patval fuseki131364[] = {
  {532,1},	{828,1},	{538,1},	{577,2},
  {836,2}
};

static struct patval fuseki131365[] = {
  {836,1},	{828,1},	{614,1},	{539,2},
  {532,2}
};

static struct patval fuseki131366[] = {
  {836,1},	{828,1},	{614,1},	{539,2},
  {532,2}
};

static struct patval fuseki131367[] = {
  {576,1},	{798,1},	{832,1},	{830,2},
  {791,2},	{533,2}
};

static struct patval fuseki131368[] = {
  {688,1},	{570,1},	{576,1},	{835,2},
  {791,2},	{762,2}
};

static struct patval fuseki131369[] = {
  {799,1},	{792,1},	{533,2}
};

static struct patval fuseki131370[] = {
  {835,1},	{576,1},	{569,2}
};

static struct patval fuseki131371[] = {
  {799,1},	{829,1},	{613,1},	{539,2},
  {532,2}
};

static struct patval fuseki131372[] = {
  {540,1},	{836,1},	{687,1},	{536,2},
  {532,2},	{828,2}
};

static struct patval fuseki131373[] = {
  {539,1},	{828,1},	{532,2},	{836,2}
};

static struct patval fuseki131374[] = {
  {540,1},	{829,1},	{532,2},	{836,2}
};

static struct patval fuseki131375[] = {
  {911,1}
};

static struct patval fuseki131376[] = {
  {467,1}
};

static struct patval fuseki131377[] = {
  {467,1}
};

static struct patval fuseki131378[] = {
  {724,1}
};

static struct patval fuseki131379[] = {
  {540,1},	{835,1},	{569,2}
};

static struct patval fuseki131380[] = {
  {540,1},	{835,1},	{569,2}
};

static struct patval fuseki131381[] = {
  {836,1},	{576,1},	{829,2},	{754,2}
};

static struct patval fuseki131382[] = {
  {532,1},	{576,1},	{830,2},	{791,2}
};

static struct patval fuseki131383[] = {
  {684,1},	{829,2}
};

static struct patval fuseki131384[] = {
  {684,1},	{829,2}
};

static struct patval fuseki131385[] = {
  {684,1},	{829,2}
};

static struct patval fuseki131386[] = {
  {760,1},	{797,1},	{687,1},	{724,1},
  {798,1},	{761,2},	{725,2},	{762,2},
  {799,2}
};

static struct patval fuseki131387[] = {
  {532,1},	{540,1},	{792,2},	{836,2}
};

static struct patval fuseki131388[] = {
  {836,1},	{828,1},	{576,2},	{532,2}
};

static struct patval fuseki131389[] = {
  {532,1},	{540,1},	{792,2},	{836,2}
};

static struct patval fuseki131390[] = {
  {798,1},	{651,1},	{725,2}
};

static struct patval fuseki131391[] = {
  {570,1},	{537,1},	{535,2}
};

static struct patval fuseki131392[] = {
  {799,1},	{576,1},	{831,1},	{792,2},
  {570,2}
};

static struct patval fuseki131393[] = {
  {651,1},	{792,1},	{835,1},	{576,2},
  {570,2}
};

static struct patval fuseki131394[] = {
  {569,1},	{539,1},	{574,1},	{791,2},
  {835,2},	{614,2}
};

static struct patval fuseki131395[] = {
  {577,1},	{533,1},	{572,1},	{829,2},
  {606,2},	{799,2}
};

static struct patval fuseki131396[] = {
  {835,1},	{828,1},	{569,2}
};

static struct patval fuseki131397[] = {
  {532,1},	{791,1},	{539,2}
};

static struct patval fuseki131398[] = {
  {835,1},	{828,1},	{569,2}
};

static struct patval fuseki131399[] = {
  {533,1},	{539,1},	{829,2}
};

static struct patval fuseki131400[] = {
  {533,1},	{539,1},	{835,2}
};

static struct patval fuseki131401[] = {
  {606,1},	{791,1},	{533,1},	{830,1},
  {607,2},	{576,2},	{798,2}
};

static struct patval fuseki131402[] = {
  {606,1},	{791,1},	{533,1},	{830,1},
  {607,2},	{576,2},	{798,2}
};

static struct patval fuseki131403[] = {
  {798,1},	{534,1},	{829,2},	{569,2}
};

static struct patval fuseki131404[] = {
  {576,1},	{830,1},	{533,2},	{791,2}
};

static struct patval fuseki131405[] = {
  {576,1},	{830,1},	{533,2},	{791,2}
};

static struct patval fuseki131406[] = {
  {836,1},	{534,2}
};

static struct patval fuseki131407[] = {
  {540,1},	{830,2}
};

static struct patval fuseki131408[] = {
  {836,1},	{606,2}
};

static struct patval fuseki131409[] = {
  {570,1},	{798,1},	{539,2},	{829,2}
};

static struct patval fuseki131410[] = {
  {798,1},	{570,1},	{791,2},	{577,2}
};

static struct patval fuseki131411[] = {
  {576,1},	{792,1},	{533,2},	{835,2}
};

static struct patval fuseki131412[] = {
  {792,1},	{576,1},	{797,2}
};

static struct patval fuseki131413[] = {
  {792,1},	{576,1},	{761,2}
};

static struct patval fuseki131414[] = {
  {792,1},	{576,1},	{571,2}
};

static struct patval fuseki131415[] = {
  {569,1},	{540,1},	{828,2},	{799,2}
};

static struct patval fuseki131416[] = {
  {569,1},	{540,1},	{828,2},	{799,2}
};

static struct patval fuseki131417[] = {
  {791,1},	{533,1},	{830,1},	{651,1},
  {576,2},	{798,2},	{832,2}
};

static struct patval fuseki131418[] = {
  {791,1},	{533,1},	{830,1},	{651,1},
  {576,2},	{798,2},	{832,2}
};

static struct patval fuseki131419[] = {
  {569,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki131420[] = {
  {569,1},	{576,1},	{792,2},	{799,2}
};

static struct patval fuseki131421[] = {
  {791,1},	{533,1},	{830,1},	{798,2},
  {540,2}
};

static struct patval fuseki131422[] = {
  {791,1},	{533,1},	{830,1},	{798,2},
  {540,2}
};

static struct patval fuseki131423[] = {
  {762,1},	{791,1},	{835,1},	{576,2},
  {532,2}
};

static struct patval fuseki131424[] = {
  {755,1},	{798,1},	{829,2}
};

static struct patval fuseki131425[] = {
  {792,1},	{761,1},	{835,2}
};

static struct patval fuseki131426[] = {
  {571,1},	{792,1},	{569,2}
};

static struct patval fuseki131427[] = {
  {798,1},	{754,2}
};

static struct patval fuseki131428[] = {
  {792,1},	{762,2}
};

static struct patval fuseki131429[] = {
  {792,1},	{534,2}
};

static struct patval fuseki131430[] = {
  {836,1},	{577,1},	{538,1},	{828,2},
  {532,2}
};

static struct patval fuseki131431[] = {
  {681,1}
};

static struct patval fuseki131432[] = {
  {681,1}
};

static struct patval fuseki131433[] = {
  {799,1},	{577,1},	{792,2},	{570,2}
};

static struct patval fuseki131434[] = {
  {569,1},	{791,1},	{576,2},	{798,2}
};

static struct patval fuseki131435[] = {
  {835,1},	{829,1},	{576,2},	{570,2}
};

static struct patval fuseki131436[] = {
  {531,1},	{606,1},	{540,1},	{797,1},
  {536,2},	{829,2},	{533,2},	{799,2}
};

static struct patval fuseki131437[] = {
  {495,1},	{761,1},	{534,1},	{828,1},
  {680,2},	{569,2},	{835,2},	{577,2}
};

static struct patval fuseki131438[] = {
  {531,1},	{606,1},	{540,1},	{797,1},
  {536,2},	{829,2},	{533,2},	{799,2}
};

static struct patval fuseki131439[] = {
  {828,1},	{836,1},	{651,1},	{576,2},
  {536,2},	{570,2}
};

static struct patval fuseki131440[] = {
  {532,1},	{828,1},	{537,1},	{576,2},
  {798,2},	{688,2}
};

static struct patval fuseki131441[] = {
  {532,1},	{828,1},	{537,1},	{576,2},
  {798,2},	{688,2}
};

static struct patval fuseki131442[] = {
  {760,1},	{724,1},	{798,1},	{761,2},
  {725,2}
};

static struct patval fuseki131443[] = {
  {798,1},	{576,1},	{572,1},	{792,2},
  {533,2}
};

static struct patval fuseki131444[] = {
  {570,1},	{792,1},	{574,1},	{539,2},
  {798,2}
};

static struct patval fuseki131445[] = {
  {792,1},	{537,1},	{576,2},	{798,2}
};

static struct patval fuseki131446[] = {
  {792,1},	{537,1},	{576,2},	{798,2}
};

static struct patval fuseki131447[] = {
  {643,1},	{798,1},	{576,2},	{570,2}
};

static struct patval fuseki131448[] = {
  {532,1},	{828,1},	{834,1},	{576,2},
  {687,2},	{799,2}
};

static struct patval fuseki131449[] = {
  {828,1},	{836,1},	{614,1},	{539,2},
  {573,2},	{570,2}
};

static struct patval fuseki131450[] = {
  {532,1},	{828,1},	{835,2}
};

static struct patval fuseki131451[] = {
  {836,1},	{540,1},	{829,2}
};

static struct patval fuseki131452[] = {
  {754,1},	{798,1},	{829,1},	{576,2},
  {570,2}
};

static struct patval fuseki131453[] = {
  {754,1},	{798,1},	{829,1},	{576,2},
  {570,2}
};

static struct patval fuseki131454[] = {
  {725,1},	{828,1},	{836,1},	{614,2},
  {532,2},	{539,2}
};

static struct patval fuseki131455[] = {
  {532,1},	{828,1},	{535,1},	{538,2},
  {577,2},	{836,2}
};

static struct patval fuseki131456[] = {
  {532,1},	{828,1},	{831,1},	{834,2},
  {540,2},	{799,2}
};

static struct patval fuseki131457[] = {
  {835,1},	{830,1},	{533,2},	{791,2}
};

static struct patval fuseki131458[] = {
  {828,1},	{762,1},	{761,1},	{576,2},
  {798,2},	{570,2}
};

static struct patval fuseki131459[] = {
  {575,1},	{836,1},	{538,1},	{570,2},
  {576,2},	{792,2}
};

static struct patval fuseki131460[] = {
  {830,1},	{570,1},	{791,2},	{835,2}
};

static struct patval fuseki131461[] = {
  {798,1},	{538,1},	{533,2},	{577,2}
};

static struct patval fuseki131462[] = {
  {532,1},	{651,1},	{540,1},	{835,2},
  {792,2},	{762,2}
};

static struct patval fuseki131463[] = {
  {532,1},	{828,1},	{831,1},	{834,2},
  {576,2},	{799,2}
};

static struct patval fuseki131464[] = {
  {532,1},	{828,1},	{831,1},	{834,2},
  {576,2},	{799,2}
};

static struct patval fuseki131465[] = {
  {532,1},	{791,1},	{835,1},	{539,2},
  {830,2}
};

static struct patval fuseki131466[] = {
  {532,1},	{791,1},	{835,1},	{539,2},
  {830,2}
};

static struct patval fuseki131467[] = {
  {532,1},	{791,1},	{835,1},	{539,2},
  {830,2}
};

static struct patval fuseki131468[] = {
  {569,1},	{791,1},	{830,1},	{539,2},
  {836,2}
};

static struct patval fuseki131469[] = {
  {791,1},	{533,1},	{539,2},	{798,2}
};

static struct patval fuseki131470[] = {
  {791,1},	{533,1},	{539,2},	{798,2}
};

static struct patval fuseki131471[] = {
  {533,1},	{577,1},	{792,2},	{799,2}
};

static struct patval fuseki131472[] = {
  {533,1},	{792,1},	{576,2},	{836,2}
};

static struct patval fuseki131473[] = {
  {577,1},	{570,1},	{798,2},	{828,2}
};

static struct patval fuseki131474[] = {
  {791,1},	{798,1},	{570,2},	{540,2}
};

static struct patval fuseki131475[] = {
  {577,1},	{570,1},	{538,1},	{835,2},
  {791,2}
};

static struct patval fuseki131476[] = {
  {791,1},	{798,1},	{830,1},	{533,2},
  {577,2}
};

static struct patval fuseki131477[] = {
  {754,1},	{570,1},	{829,1},	{539,2},
  {799,2}
};

static struct patval fuseki131478[] = {
  {573,1},	{792,2}
};

static struct patval fuseki131479[] = {
  {570,1},	{792,1},	{576,1},	{538,2},
  {836,2}
};

static struct patval fuseki131480[] = {
  {576,1},	{792,1},	{534,1},	{569,2},
  {799,2}
};

static struct patval fuseki131481[] = {
  {762,1},	{792,1},	{576,1},	{835,2},
  {533,2}
};

static struct patval fuseki131482[] = {
  {576,1},	{792,1},	{834,1},	{569,2},
  {799,2}
};

static struct patval fuseki131483[] = {
  {571,1},	{570,2}
};

static struct patval fuseki131484[] = {
  {607,1},	{570,2}
};

static struct patval fuseki131485[] = {
  {571,1},	{570,2}
};

static struct patval fuseki131486[] = {
  {791,1},	{533,1},	{538,1},	{835,2},
  {577,2}
};

static struct patval fuseki131487[] = {
  {577,1},	{835,1},	{830,1},	{533,2},
  {791,2}
};

static struct patval fuseki131488[] = {
  {799,1},	{829,1},	{614,1},	{539,2},
  {569,2}
};

static struct patval fuseki131489[] = {
  {532,1},	{614,1},	{539,1},	{613,2},
  {829,2},	{799,2}
};

static struct patval fuseki131490[] = {
  {532,1},	{614,1},	{539,1},	{613,2},
  {829,2},	{799,2}
};

static struct patval fuseki131491[] = {
  {835,1},	{613,1},	{828,2}
};

static struct patval fuseki131492[] = {
  {761,1},	{539,1},	{532,2}
};

static struct patval fuseki131493[] = {
  {532,1},	{828,1},	{725,1},	{724,1},
  {798,2},	{576,2},	{762,2}
};

static struct patval fuseki131494[] = {
  {532,1},	{828,1},	{725,1},	{724,1},
  {798,2},	{576,2},	{762,2}
};

static struct patval fuseki131495[] = {
  {532,1},	{828,1},	{725,1},	{724,1},
  {798,2},	{576,2},	{762,2}
};

static struct patval fuseki131496[] = {
  {532,1},	{828,1},	{536,1},	{538,1},
  {687,2},	{540,2},	{836,2}
};

static struct patval fuseki131497[] = {
  {532,1},	{828,1},	{536,1},	{538,1},
  {687,2},	{540,2},	{836,2}
};

static struct patval fuseki131498[] = {
  {835,1},	{791,1},	{613,1},	{539,2},
  {532,2}
};

static struct patval fuseki131499[] = {
  {830,1},	{680,1},	{791,1},	{533,1},
  {606,2},	{576,2},	{798,2}
};

static struct patval fuseki131500[] = {
  {830,1},	{680,1},	{791,1},	{533,1},
  {606,2},	{576,2},	{798,2}
};

static struct patval fuseki131501[] = {
  {798,1},	{792,1},	{684,1},	{576,2},
  {570,2}
};

static struct patval fuseki131502[] = {
  {798,1},	{576,1},	{684,1},	{792,2},
  {570,2}
};

static struct patval fuseki131503[] = {
  {798,1},	{576,1},	{684,1},	{792,2},
  {570,2}
};

static struct patval fuseki131504[] = {
  {613,1},	{791,1},	{538,1},	{835,1},
  {576,1},	{532,2},	{539,2},	{577,2},
  {614,2}
};

static struct patval fuseki131505[] = {
  {720,1}
};

static struct patval fuseki131506[] = {
  {720,1}
};

static struct patval fuseki131507[] = {
  {760,1},	{797,1},	{724,1},	{798,1},
  {761,2},	{725,2},	{762,2}
};

static struct patval fuseki131508[] = {
  {532,1},	{569,1},	{828,1},	{570,2},
  {576,2},	{798,2}
};

static struct patval fuseki131509[] = {
  {577,1},	{836,1},	{540,1},	{576,2},
  {570,2},	{792,2}
};

static struct patval fuseki131510[] = {
  {791,1},	{533,1},	{577,1},	{835,2},
  {830,2}
};

static struct patval fuseki131511[] = {
  {791,1},	{533,1},	{577,1},	{835,2},
  {830,2}
};

static struct patval fuseki131512[] = {
  {791,1},	{533,1},	{577,1},	{835,2},
  {830,2}
};

static struct patval fuseki131513[] = {
  {796,1},	{760,1},	{761,1},	{797,2},
  {798,2}
};

static struct patval fuseki131514[] = {
  {796,1},	{760,1},	{761,1},	{797,2},
  {798,2}
};

static struct patval fuseki131515[] = {
  {836,1},	{540,1},	{830,1},	{828,2},
  {532,2}
};

static struct patval fuseki131516[] = {
  {836,1},	{828,1},	{614,1},	{540,2},
  {532,2}
};

static struct patval fuseki131517[] = {
  {532,1},	{577,1},	{828,2}
};

static struct patval fuseki131518[] = {
  {791,1},	{836,1},	{540,2}
};

static struct patval fuseki131519[] = {
  {577,1},	{570,1},	{793,1},	{835,2},
  {791,2},	{762,2}
};

static struct patval fuseki131520[] = {
  {798,1},	{576,1},	{534,2},	{792,2}
};

static struct patval fuseki131521[] = {
  {576,1},	{570,1},	{754,2},	{798,2}
};

static struct patval fuseki131522[] = {
  {650,1},	{576,2}
};

static struct patval fuseki131523[] = {
  {574,1},	{576,2}
};

static struct patval fuseki131524[] = {
  {574,1},	{576,2}
};

static struct patval fuseki131525[] = {
  {835,1},	{540,2}
};

static struct patval fuseki131526[] = {
  {791,1},	{836,2}
};

static struct patval fuseki131527[] = {
  {536,1},	{799,1},	{533,1},	{829,1},
  {531,2},	{540,2},	{606,2}
};

static struct patval fuseki131528[] = {
  {797,1},	{798,1},	{835,2},	{836,2}
};

static struct patval fuseki131529[] = {
  {797,1},	{798,1},	{835,2},	{836,2}
};

static struct patval fuseki131530[] = {
  {792,1},	{755,1},	{828,2},	{791,2}
};

static struct patval fuseki131531[] = {
  {540,1},	{835,1},	{828,2},	{532,2}
};

static struct patval fuseki131532[] = {
  {836,1},	{539,1},	{828,2},	{532,2}
};

static struct patval fuseki131533[] = {
  {761,1},	{793,1},	{576,2},	{570,2}
};

static struct patval fuseki131534[] = {
  {613,1},	{797,1},	{792,2},	{570,2}
};

static struct patval fuseki131535[] = {
  {569,1},	{828,1},	{534,1},	{834,2},
  {576,2},	{799,2}
};

static struct patval fuseki131536[] = {
  {532,1},	{791,1},	{830,1},	{538,2},
  {798,2},	{577,2}
};

static struct patval fuseki131537[] = {
  {532,1},	{791,1},	{830,1},	{538,2},
  {798,2},	{577,2}
};

static struct patval fuseki131538[] = {
  {532,1},	{792,1},	{798,2}
};

static struct patval fuseki131539[] = {
  {828,1},	{570,1},	{576,2}
};

static struct patval fuseki131540[] = {
  {532,1},	{576,1},	{798,2}
};

static struct patval fuseki131541[] = {
  {755,1},	{798,1},	{754,1},	{830,1},
  {716,2},	{791,2},	{539,2},	{569,2}
};

static struct patval fuseki131542[] = {
  {830,1},	{792,2}
};

static struct patval fuseki131543[] = {
  {791,1},	{762,1},	{835,1},	{830,1},
  {793,2},	{577,2},	{570,2}
};

static struct patval fuseki131544[] = {
  {606,1},	{791,1},	{533,1},	{830,1},
  {607,2},	{576,2},	{835,2}
};

static struct patval fuseki131545[] = {
  {798,1},	{762,1},	{576,1},	{532,2},
  {725,2},	{828,2}
};

static struct patval fuseki131546[] = {
  {533,1},	{614,1},	{792,2}
};

static struct patval fuseki131547[] = {
  {606,1},	{539,1},	{798,2}
};

static struct patval fuseki131548[] = {
  {716,1},	{753,1},	{569,1},	{539,1},
  {791,1},	{755,2},	{830,2},	{754,2},
  {798,2}
};

static struct patval fuseki131549[] = {
  {716,1},	{753,1},	{569,1},	{539,1},
  {791,1},	{755,2},	{830,2},	{754,2},
  {798,2}
};

static struct patval fuseki131550[] = {
  {716,1},	{753,1},	{569,1},	{539,1},
  {791,1},	{755,2},	{830,2},	{754,2},
  {798,2}
};

static struct patval fuseki131551[] = {
  {569,1},	{829,1},	{798,2},	{540,2}
};

static struct patval fuseki131552[] = {
  {791,1},	{835,1},	{570,2},	{540,2}
};

static struct patval fuseki131553[] = {
  {539,1},	{836,1},	{534,1},	{830,2},
  {569,2},	{791,2}
};

static struct patval fuseki131554[] = {
  {539,1},	{836,1},	{534,1},	{830,2},
  {569,2},	{791,2}
};

static struct patval fuseki131555[] = {
  {539,1},	{830,1},	{791,2},	{835,2}
};

static struct patval fuseki131556[] = {
  {798,1},	{576,1},	{831,1},	{828,2},
  {532,2}
};

static struct patval fuseki131557[] = {
  {651,1},	{792,1},	{798,1},	{540,2},
  {532,2}
};

static struct patval fuseki131558[] = {
  {575,1},	{791,2}
};

static struct patval fuseki131559[] = {
  {575,1},	{791,2}
};

static struct patval fuseki131560[] = {
  {791,1},	{533,1},	{651,1},	{576,2},
  {797,2}
};

static struct patval fuseki131561[] = {
  {791,1},	{835,1},	{535,1},	{613,2},
  {570,2}
};

static struct patval fuseki131562[] = {
  {792,1},	{762,1},	{539,2}
};

static struct patval fuseki131563[] = {
  {754,1},	{798,1},	{533,2}
};

static struct patval fuseki131564[] = {
  {828,1},	{835,1},	{535,1},	{570,2},
  {577,2},	{762,2}
};

static struct patval fuseki131565[] = {
  {532,1},	{539,1},	{831,1},	{792,2},
  {614,2},	{799,2}
};

static struct patval fuseki131566[] = {
  {828,1},	{570,1},	{537,1},	{798,2},
  {540,2}
};

static struct patval fuseki131567[] = {
  {540,1},	{798,1},	{831,1},	{570,2},
  {828,2}
};

static struct patval fuseki131568[] = {
  {569,1},	{799,1},	{577,2}
};

static struct patval fuseki131569[] = {
  {569,1},	{799,1},	{577,2}
};

static struct patval fuseki131570[] = {
  {569,1},	{799,1},	{577,2}
};

static struct patval fuseki131571[] = {
  {762,1},	{799,1},	{725,1},	{761,1},
  {798,2},	{724,2},	{760,2},	{797,2}
};

static struct patval fuseki131572[] = {
  {569,1},	{828,1},	{534,1},	{832,2},
  {539,2},	{798,2}
};

static struct patval fuseki131573[] = {
  {532,1},	{614,1},	{539,1},	{792,2},
  {680,2},	{799,2}
};

static struct patval fuseki131574[] = {
  {798,1},	{792,1},	{606,2}
};

static struct patval fuseki131575[] = {
  {798,1},	{792,1},	{606,2}
};

static struct patval fuseki131576[] = {
  {532,1},	{798,1},	{792,2}
};

static struct patval fuseki131577[] = {
  {532,1},	{798,1},	{576,2}
};

static struct patval fuseki131578[] = {
  {532,1},	{798,1},	{792,2}
};

static struct patval fuseki131579[] = {
  {790,1},	{829,1},	{791,1},	{792,2},
  {754,2}
};

static struct patval fuseki131580[] = {
  {790,1},	{829,1},	{791,1},	{792,2},
  {754,2}
};

static struct patval fuseki131581[] = {
  {532,1},	{571,2}
};

static struct patval fuseki131582[] = {
  {532,1},	{607,2}
};

static struct patval fuseki131583[] = {
  {828,1},	{793,2}
};

static struct patval fuseki131584[] = {
  {798,1},	{576,1},	{832,1},	{828,2},
  {532,2}
};

static struct patval fuseki131585[] = {
  {798,1},	{576,1},	{536,1},	{828,2},
  {532,2}
};

static struct patval fuseki131586[] = {
  {570,1},	{538,1},	{535,2}
};

static struct patval fuseki131587[] = {
  {792,1},	{834,1},	{831,2}
};

static struct patval fuseki131588[] = {
  {798,1},	{614,1},	{725,2}
};

static struct patval fuseki131589[] = {
  {570,1},	{793,1},	{577,2}
};

static struct patval fuseki131590[] = {
  {607,1},	{576,1},	{835,2}
};

static struct patval fuseki131591[] = {
  {607,1},	{576,1},	{835,2}
};

static struct patval fuseki131592[] = {
  {792,1},	{798,1},	{684,2}
};

static struct patval fuseki131593[] = {
  {570,1},	{792,1},	{684,2}
};

static struct patval fuseki131594[] = {
  {798,1},	{576,1},	{684,2}
};

static struct patval fuseki131595[] = {
  {569,1},	{534,2}
};

static struct patval fuseki131596[] = {
  {791,1},	{830,2}
};

static struct patval fuseki131597[] = {
  {532,1},	{835,1},	{791,2},	{577,2}
};

static struct patval fuseki131598[] = {
  {539,1},	{828,1},	{569,2},	{799,2}
};

static struct patval fuseki131599[] = {
  {539,1},	{828,1},	{569,2},	{799,2}
};

static struct patval fuseki131600[] = {
  {540,1},	{792,1},	{798,2},	{569,2}
};

static struct patval fuseki131601[] = {
  {540,1},	{792,1},	{835,2},	{570,2}
};

static struct patval fuseki131602[] = {
  {836,1},	{570,1},	{576,2},	{791,2}
};

static struct patval fuseki131603[] = {
  {532,1},	{614,1},	{539,1},	{577,1},
  {613,2},	{835,2},	{576,2},	{791,2}
};

static struct patval fuseki131604[] = {
  {606,1},	{828,2}
};

static struct patval fuseki131605[] = {
  {834,1},	{828,2}
};

static struct patval fuseki131606[] = {
  {534,1},	{540,2}
};

static struct patval fuseki131607[] = {
  {532,1},	{614,1},	{539,1},	{613,2},
  {835,2},	{791,2}
};

static struct patval fuseki131608[] = {
  {725,1},	{762,1},	{761,1},	{798,2},
  {760,2},	{724,2}
};

static struct patval fuseki131609[] = {
  {798,1},	{797,1},	{761,2},	{760,2}
};

static struct patval fuseki131610[] = {
  {835,1},	{791,1},	{613,1},	{576,1},
  {539,2},	{532,2},	{614,2}
};

static struct patval fuseki131611[] = {
  {791,1},	{836,1},	{533,2}
};

static struct patval fuseki131612[] = {
  {828,1},	{799,1},	{539,2}
};

static struct patval fuseki131613[] = {
  {836,1},	{829,1},	{576,2},	{606,2}
};

static struct patval fuseki131614[] = {
  {532,1},	{539,1},	{792,2},	{762,2}
};

static struct patval fuseki131615[] = {
  {532,1},	{539,1},	{792,2},	{762,2}
};

static struct patval fuseki131616[] = {
  {836,1},	{576,1},	{831,1},	{828,2},
  {569,2}
};

static struct patval fuseki131617[] = {
  {532,1},	{717,1},	{576,1},	{828,2},
  {835,2}
};

static struct patval fuseki131618[] = {
  {606,1},	{835,1},	{576,1},	{830,2},
  {533,2},	{791,2}
};

static struct patval fuseki131619[] = {
  {798,1},	{791,1},	{538,1},	{533,2},
  {606,2},	{577,2}
};

static struct patval fuseki131620[] = {
  {799,1},	{828,1},	{577,2},	{532,2}
};

static struct patval fuseki131621[] = {
  {532,1},	{577,1},	{828,2},	{799,2}
};

static struct patval fuseki131622[] = {
  {792,1},	{540,1},	{573,2}
};

static struct patval fuseki131623[] = {
  {792,1},	{540,1},	{687,2}
};

static struct patval fuseki131624[] = {
  {532,1},	{836,1},	{828,2}
};

static struct patval fuseki131625[] = {
  {532,1},	{836,1},	{540,2}
};

static struct patval fuseki131626[] = {
  {532,1},	{836,1},	{540,2}
};

static struct patval fuseki131627[] = {
  {836,1},	{539,1},	{792,2},	{532,2}
};

static struct patval fuseki131628[] = {
  {569,1},	{540,1},	{798,2},	{828,2}
};

static struct patval fuseki131629[] = {
  {540,1},	{835,1},	{570,2},	{828,2}
};

static struct patval fuseki131630[] = {
  {569,1},	{577,1},	{835,2},	{792,2}
};

static struct patval fuseki131631[] = {
  {533,1},	{829,1},	{576,2},	{799,2}
};

static struct patval fuseki131632[] = {
  {533,1},	{799,1},	{761,1},	{576,2},
  {834,2},	{792,2}
};

static struct patval fuseki131633[] = {
  {791,1},	{539,1},	{575,1},	{570,2},
  {798,2},	{614,2}
};

static struct patval fuseki131634[] = {
  {792,1},	{539,1},	{576,2}
};

static struct patval fuseki131635[] = {
  {570,1},	{835,1},	{798,2}
};

static struct patval fuseki131636[] = {
  {570,1},	{575,1},	{792,2},	{798,2}
};

static struct patval fuseki131637[] = {
  {761,1},	{576,1},	{792,2},	{570,2}
};

static struct patval fuseki131638[] = {
  {569,1},	{792,1},	{797,2},	{576,2}
};

static struct patval fuseki131639[] = {
  {577,1},	{798,1},	{793,2},	{570,2}
};

static struct patval fuseki131640[] = {
  {762,1},	{726,1},	{797,1},	{724,1},
  {798,1},	{761,2},	{725,2},	{759,2},
  {760,2}
};

static struct patval fuseki131641[] = {
  {762,1},	{724,1},	{799,1},	{798,1},
  {725,2},	{760,2},	{761,2}
};

static struct patval fuseki131642[] = {
  {569,1},	{687,1},	{576,1},	{791,2},
  {798,2}
};

static struct patval fuseki131643[] = {
  {532,1},	{828,1},	{576,2},	{761,2}
};

static struct patval fuseki131644[] = {
  {688,1},	{799,1},	{576,1},	{757,1},
  {831,1},	{537,2},	{792,2},	{570,2},
  {681,2}
};

static struct patval fuseki131645[] = {
  {791,1},	{533,1},	{725,1},	{651,1},
  {724,1},	{798,2},	{576,2},	{796,2},
  {762,2}
};

static struct patval fuseki131646[] = {
  {791,1},	{533,1},	{725,1},	{651,1},
  {724,1},	{798,2},	{576,2},	{796,2},
  {762,2}
};

static struct patval fuseki131647[] = {
  {643,1},	{576,1},	{570,1},	{791,2},
  {798,2}
};

static struct patval fuseki131648[] = {
  {532,1},	{614,1},	{539,1},	{835,2},
  {792,2},	{762,2}
};

static struct patval fuseki131649[] = {
  {532,1},	{791,1},	{830,1},	{834,2},
  {576,2},	{799,2}
};

static struct patval fuseki131650[] = {
  {723,1},	{725,1},	{651,2},	{798,2}
};

static struct patval fuseki131651[] = {
  {799,1},	{726,1},	{724,1},	{762,1},
  {798,1},	{725,2},	{761,2},	{760,2},
  {687,2}
};

static struct patval fuseki131652[] = {
  {828,1},	{534,1},	{539,2},	{835,2}
};

static struct patval fuseki131653[] = {
  {606,1},	{540,1},	{791,2},	{799,2}
};

static struct patval fuseki131654[] = {
  {798,1},	{576,1},	{573,1},	{829,2},
  {570,2}
};

static struct patval fuseki131655[] = {
  {570,1},	{792,1},	{795,1},	{539,2},
  {798,2}
};

static struct patval fuseki131656[] = {
  {798,1},	{792,1},	{651,1},	{576,2},
  {570,2},	{573,2}
};

static struct patval fuseki131657[] = {
  {570,1},	{792,1},	{833,1},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki131658[] = {
  {569,1},	{571,1},	{836,2}
};

static struct patval fuseki131659[] = {
  {569,1},	{571,1},	{836,2}
};

static struct patval fuseki131660[] = {
  {569,1},	{829,1},	{534,1},	{835,2},
  {577,2}
};

static struct patval fuseki131661[] = {
  {577,1},	{835,1},	{538,1},	{829,2},
  {569,2}
};

static struct patval fuseki131662[] = {
  {791,1},	{535,1},	{570,2},	{576,2}
};

static struct patval fuseki131663[] = {
  {791,1},	{535,1},	{570,2},	{576,2}
};

static struct patval fuseki131664[] = {
  {539,1},	{533,1},	{536,1},	{828,2},
  {836,2}
};

static struct patval fuseki131665[] = {
  {688,1},	{828,1},	{537,1},	{536,1},
  {799,1},	{534,2},	{614,2},	{569,2},
  {540,2}
};

static struct patval fuseki131666[] = {
  {791,1},	{762,1},	{835,1},	{829,1},
  {830,1},	{793,2},	{792,2},	{577,2},
  {570,2}
};

static struct patval fuseki131667[] = {
  {798,1},	{614,1},	{539,1},	{832,1},
  {534,2},	{569,2},	{828,2}
};

static struct patval fuseki131668[] = {
  {643,1},	{799,1},	{792,1},	{576,2},
  {570,2}
};

static struct patval fuseki131669[] = {
  {533,1},	{792,1},	{833,1},	{576,2},
  {798,2}
};

static struct patval fuseki131670[] = {
  {570,1},	{792,1},	{537,1},	{831,2},
  {576,2},	{799,2}
};

static struct patval fuseki131671[] = {
  {799,1},	{576,1},	{755,2}
};

static struct patval fuseki131672[] = {
  {533,1},	{576,1},	{793,2}
};

static struct patval fuseki131673[] = {
  {532,1},	{828,1},	{650,1},	{651,1},
  {832,2},	{798,2},	{614,2},	{576,2}
};

static struct patval fuseki131674[] = {
  {532,1},	{828,1},	{650,1},	{651,1},
  {832,2},	{798,2},	{614,2},	{576,2}
};

static struct patval fuseki131675[] = {
  {829,1},	{534,1},	{540,2},	{836,2}
};

static struct patval fuseki131676[] = {
  {539,1},	{834,1},	{828,2},	{532,2}
};

static struct patval fuseki131677[] = {
  {570,1},	{798,1},	{539,2},	{792,2}
};

static struct patval fuseki131678[] = {
  {570,1},	{798,1},	{539,2},	{792,2}
};

static struct patval fuseki131679[] = {
  {532,1},	{717,1},	{828,1},	{830,2},
  {540,2},	{836,2}
};

static struct patval fuseki131680[] = {
  {828,1},	{534,1},	{613,2},	{835,2}
};

static struct patval fuseki131681[] = {
  {799,1},	{830,1},	{533,2},	{791,2}
};

static struct patval fuseki131682[] = {
  {570,1},	{762,1},	{835,1},	{577,2},
  {829,2}
};

static struct patval fuseki131683[] = {
  {569,1},	{798,1},	{534,1},	{539,2},
  {791,2}
};

static struct patval fuseki131684[] = {
  {569,1},	{792,1},	{539,2},	{798,2}
};

static struct patval fuseki131685[] = {
  {570,1},	{539,1},	{792,2},	{799,2}
};

static struct patval fuseki131686[] = {
  {791,1},	{534,2}
};

static struct patval fuseki131687[] = {
  {829,1},	{762,2}
};

static struct patval fuseki131688[] = {
  {613,1},	{829,1},	{799,1},	{576,1},
  {532,2},	{614,2},	{539,2}
};

static struct patval fuseki131689[] = {
  {791,1},	{496,1},	{835,1},	{535,1},
  {537,2},	{613,2},	{570,2}
};

static struct patval fuseki131690[] = {
  {791,1},	{533,1},	{578,1},	{651,1},
  {576,2},	{725,2},	{797,2}
};

static struct patval fuseki131691[] = {
  {577,1},	{687,2}
};

static struct patval fuseki131692[] = {
  {569,1},	{681,2}
};

static struct patval fuseki131693[] = {
  {798,1},	{831,1},	{829,2}
};

static struct patval fuseki131694[] = {
  {717,1},	{570,1},	{791,2}
};

static struct patval fuseki131695[] = {
  {791,1},	{533,1},	{830,1},	{798,2},
  {577,2}
};

static struct patval fuseki131696[] = {
  {791,1},	{762,1},	{835,1},	{576,2},
  {533,2}
};

static struct patval fuseki131697[] = {
  {540,1},	{798,1},	{534,1},	{829,2},
  {569,2}
};

static struct patval fuseki131698[] = {
  {532,1},	{792,1},	{538,1},	{835,2},
  {577,2}
};

static struct patval fuseki131699[] = {
  {570,1},	{614,1},	{799,2}
};

static struct patval fuseki131700[] = {
  {792,1},	{534,1},	{539,2}
};

static struct patval fuseki131701[] = {
  {576,1},	{793,2}
};

static struct patval fuseki131702[] = {
  {798,1},	{607,2}
};

static struct patval fuseki131703[] = {
  {828,1},	{761,1},	{835,2},	{577,2}
};

static struct patval fuseki131704[] = {
  {836,1},	{575,1},	{577,2},	{533,2}
};

static struct patval fuseki131705[] = {
  {570,1},	{798,1},	{830,2}
};

static struct patval fuseki131706[] = {
  {792,1},	{576,1},	{762,2}
};

static struct patval fuseki131707[] = {
  {570,1},	{798,1},	{576,1},	{612,2},
  {684,2},	{792,2}
};

static struct patval fuseki131708[] = {
  {791,1},	{761,1},	{576,2}
};

static struct patval fuseki131709[] = {
  {569,1},	{613,1},	{798,2}
};

static struct patval fuseki131710[] = {
  {651,1},	{792,1},	{576,1},	{798,2},
  {570,2}
};

static struct patval fuseki131711[] = {
  {576,1},	{792,1},	{537,1},	{570,2},
  {798,2}
};

static struct patval fuseki131712[] = {
  {540,1},	{835,1},	{535,1},	{828,2},
  {569,2}
};

static struct patval fuseki131713[] = {
  {576,1},	{834,1},	{828,2}
};

static struct patval fuseki131714[] = {
  {798,1},	{754,1},	{532,2}
};

static struct patval fuseki131715[] = {
  {532,1},	{828,1},	{538,1},	{835,2},
  {577,2},	{762,2}
};

static struct patval fuseki131716[] = {
  {532,1},	{754,1},	{540,1},	{834,2},
  {829,2},	{799,2}
};

static struct patval fuseki131717[] = {
  {614,1},	{798,1},	{539,1},	{828,2},
  {532,2},	{725,2}
};

static struct patval fuseki131718[] = {
  {651,1},	{792,1},	{798,1},	{539,2},
  {569,2}
};

static struct patval fuseki131719[] = {
  {606,1},	{798,1},	{576,1},	{533,2},
  {791,2}
};

static struct patval fuseki131720[] = {
  {570,1},	{576,1},	{834,1},	{829,2},
  {799,2}
};

static struct patval fuseki131721[] = {
  {577,1},	{835,1},	{571,2},	{792,2}
};

static struct patval fuseki131722[] = {
  {569,1},	{539,1},	{792,2},	{761,2}
};

static struct patval fuseki131723[] = {
  {828,1},	{755,1},	{534,1},	{538,2},
  {613,2},	{835,2}
};

static struct patval fuseki131724[] = {
  {828,1},	{755,1},	{534,1},	{538,2},
  {613,2},	{835,2}
};

static struct patval fuseki131725[] = {
  {576,1},	{798,1},	{609,1},	{535,1},
  {792,2},	{533,2},	{607,2}
};

static struct patval fuseki131726[] = {
  {798,1},	{792,1},	{651,1},	{649,1},
  {570,2},	{577,2},	{575,2}
};

static struct patval fuseki131727[] = {
  {536,1},	{651,1},	{798,1},	{571,1},
  {569,2},	{829,2},	{577,2},	{644,2}
};

static struct patval fuseki131728[] = {
  {576,1},	{793,1},	{791,2}
};

static struct patval fuseki131729[] = {
  {792,1},	{613,1},	{539,2}
};

static struct patval fuseki131730[] = {
  {612,1},	{792,1},	{684,1},	{570,2},
  {576,2}
};

static struct patval fuseki131731[] = {
  {680,1},	{577,1},	{533,1},	{829,2},
  {754,2},	{836,2}
};

static struct patval fuseki131732[] = {
  {569,1},	{688,1},	{539,1},	{835,2},
  {828,2},	{762,2}
};

static struct patval fuseki131733[] = {
  {532,1},	{828,1},	{578,1},	{651,1},
  {835,2},	{576,2},	{536,2}
};

static struct patval fuseki131734[] = {
  {569,1},	{830,1},	{791,1},	{533,1},
  {606,2},	{576,2},	{835,2}
};

static struct patval fuseki131735[] = {
  {835,1},	{754,1},	{829,1},	{799,1},
  {576,2},	{569,2},	{834,2}
};

static struct patval fuseki131736[] = {
  {606,1},	{577,1},	{533,1},	{828,2},
  {799,2}
};

static struct patval fuseki131737[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {836,2}
};

static struct patval fuseki131738[] = {
  {717,1},	{570,1},	{681,1},	{576,1},
  {792,2},	{718,2},	{798,2}
};

static struct patval fuseki131739[] = {
  {532,1},	{798,1},	{828,2}
};

static struct patval fuseki131740[] = {
  {532,1},	{828,1},	{538,1},	{834,2},
  {577,2},	{799,2}
};

static struct patval fuseki131741[] = {
  {532,1},	{762,1},	{540,1},	{835,2},
  {829,2},	{754,2}
};

static struct patval fuseki131742[] = {
  {762,1},	{576,1},	{792,2},	{570,2}
};

static struct patval fuseki131743[] = {
  {576,1},	{534,1},	{792,2},	{798,2}
};

static struct patval fuseki131744[] = {
  {835,1},	{576,1},	{571,2},	{792,2}
};

static struct patval fuseki131745[] = {
  {791,1},	{798,1},	{613,2},	{570,2}
};

static struct patval fuseki131746[] = {
  {762,1},	{792,1},	{577,2},	{570,2}
};

static struct patval fuseki131747[] = {
  {798,1},	{538,1},	{792,2},	{533,2}
};

static struct patval fuseki131748[] = {
  {569,1},	{577,1},	{574,1},	{539,1},
  {613,2},	{828,2},	{614,2},	{836,2}
};

static struct patval fuseki131749[] = {
  {798,1},	{576,1},	{831,1},	{570,2},
  {828,2}
};

static struct patval fuseki131750[] = {
  {651,1},	{792,1},	{798,1},	{540,2},
  {570,2}
};

static struct patval fuseki131751[] = {
  {569,1},	{828,1},	{797,1},	{831,2},
  {576,2},	{836,2}
};

static struct patval fuseki131752[] = {
  {569,1},	{614,1},	{576,1},	{798,2},
  {792,2},	{651,2}
};

static struct patval fuseki131753[] = {
  {570,1},	{613,1},	{686,1},	{829,2},
  {688,2},	{836,2}
};

static struct patval fuseki131754[] = {
  {570,1},	{613,1},	{686,1},	{829,2},
  {688,2},	{836,2}
};

static struct patval fuseki131755[] = {
  {835,1},	{540,1},	{687,1},	{535,1},
  {536,1},	{537,2},	{533,2},	{569,2},
  {828,2}
};

static struct patval fuseki131756[] = {
  {792,1},	{754,1},	{830,1},	{790,2},
  {829,2},	{791,2}
};

static struct patval fuseki131757[] = {
  {792,1},	{754,1},	{830,1},	{790,2},
  {829,2},	{791,2}
};

static struct patval fuseki131758[] = {
  {569,1},	{829,1},	{577,1},	{798,2},
  {536,2}
};

static struct patval fuseki131759[] = {
  {651,1},	{792,1},	{799,1},	{540,2},
  {569,2},	{536,2}
};

static struct patval fuseki131760[] = {
  {569,1},	{717,1},	{576,1},	{832,2},
  {828,2},	{799,2}
};

static struct patval fuseki131761[] = {
  {570,1},	{792,1},	{797,2}
};

static struct patval fuseki131762[] = {
  {570,1},	{576,1},	{761,2}
};

static struct patval fuseki131763[] = {
  {577,1},	{533,1},	{833,1},	{798,2},
  {791,2}
};

static struct patval fuseki131764[] = {
  {791,1},	{533,1},	{651,1},	{835,2},
  {576,2}
};

static struct patval fuseki131765[] = {
  {569,1},	{533,1},	{680,1},	{791,1},
  {577,1},	{608,2},	{830,2},	{606,2},
  {799,2}
};

static struct patval fuseki131766[] = {
  {791,1},	{533,1},	{829,1},	{835,1},
  {832,1},	{830,2},	{539,2},	{756,2},
  {762,2}
};

static struct patval fuseki131767[] = {
  {836,1},	{829,1},	{688,1},	{613,2},
  {570,2}
};

static struct patval fuseki131768[] = {
  {798,1},	{570,1},	{576,1},	{792,2},
  {532,2}
};

static struct patval fuseki131769[] = {
  {798,1},	{570,1},	{576,1},	{792,2},
  {532,2}
};

static struct patval fuseki131770[] = {
  {532,1},	{828,1},	{538,1},	{833,2},
  {577,2},	{799,2}
};

static struct patval fuseki131771[] = {
  {606,1},	{828,1},	{836,1},	{539,2},
  {651,2},	{533,2}
};

static struct patval fuseki131772[] = {
  {570,1},	{687,1},	{792,2}
};

static struct patval fuseki131773[] = {
  {681,1},	{798,1},	{576,2}
};

static struct patval fuseki131774[] = {
  {570,1},	{798,1},	{535,2}
};

static struct patval fuseki131775[] = {
  {576,1},	{792,1},	{717,2}
};

static struct patval fuseki131776[] = {
  {650,1},	{792,1},	{832,1},	{651,1},
  {798,1},	{569,2},	{576,2},	{614,2},
  {537,2}
};

static struct patval fuseki131777[] = {
  {761,1},	{576,1},	{834,1},	{828,2},
  {532,2}
};

static struct patval fuseki131778[] = {
  {576,1},	{834,1},	{792,2},	{569,2}
};

static struct patval fuseki131779[] = {
  {792,1},	{534,1},	{576,2},	{799,2}
};

static struct patval fuseki131780[] = {
  {569,1},	{828,1},	{534,1},	{834,1},
  {832,2},	{539,2},	{798,2},	{614,2}
};

static struct patval fuseki131781[] = {
  {795,1},	{792,1},	{681,2}
};

static struct patval fuseki131782[] = {
  {795,1},	{798,1},	{687,2}
};

static struct patval fuseki131783[] = {
  {754,1},	{828,1},	{829,2}
};

static struct patval fuseki131784[] = {
  {532,1},	{534,1},	{569,2}
};

static struct patval fuseki131785[] = {
  {576,1},	{829,1},	{571,1},	{569,2},
  {798,2}
};

static struct patval fuseki131786[] = {
  {533,1},	{836,1},	{614,1},	{762,2},
  {792,2}
};

static struct patval fuseki131787[] = {
  {533,1},	{836,1},	{614,1},	{762,2},
  {792,2}
};

static struct patval fuseki131788[] = {
  {794,1},	{798,1},	{796,1},	{649,1},
  {651,1},	{721,2},	{577,2},	{723,2},
  {725,2}
};

static struct patval fuseki131789[] = {
  {532,1},	{792,1},	{576,2},	{835,2}
};

static struct patval fuseki131790[] = {
  {798,1},	{792,1},	{534,1},	{576,2},
  {607,2}
};

static struct patval fuseki131791[] = {
  {570,1},	{792,1},	{614,1},	{798,2},
  {575,2}
};

static struct patval fuseki131792[] = {
  {791,1},	{538,1},	{577,2}
};

static struct patval fuseki131793[] = {
  {799,1},	{534,1},	{569,2}
};

static struct patval fuseki131794[] = {
  {606,1},	{834,1},	{792,1},	{577,1},
  {833,1},	{533,2},	{761,2},	{796,2},
  {799,2}
};

static struct patval fuseki131795[] = {
  {606,1},	{834,1},	{792,1},	{577,1},
  {833,1},	{533,2},	{761,2},	{796,2},
  {799,2}
};

static struct patval fuseki131796[] = {
  {576,1},	{532,1},	{572,1},	{570,1},
  {792,2},	{643,2},	{568,2},	{798,2}
};

static struct patval fuseki131797[] = {
  {577,1},	{723,1},	{725,1},	{796,2},
  {651,2},	{798,2}
};

static struct patval fuseki131798[] = {
  {835,1},	{607,1},	{792,2},	{533,2}
};

static struct patval fuseki131799[] = {
  {577,1},	{793,1},	{798,2},	{791,2}
};

static struct patval fuseki131800[] = {
  {643,1},	{570,1},	{576,1},	{792,2},
  {798,2}
};

static struct patval fuseki131801[] = {
  {725,1},	{792,1},	{798,1},	{576,2},
  {570,2}
};

static struct patval fuseki131802[] = {
  {798,1},	{575,1},	{533,2},	{791,2}
};

static struct patval fuseki131803[] = {
  {798,1},	{575,1},	{533,2},	{791,2}
};

static struct patval fuseki131804[] = {
  {725,1},	{539,1},	{798,2},	{570,2}
};

static struct patval fuseki131805[] = {
  {577,1},	{535,1},	{798,2},	{570,2}
};

static struct patval fuseki131806[] = {
  {570,1},	{792,1},	{829,1},	{831,2},
  {576,2},	{798,2}
};

static struct patval fuseki131807[] = {
  {569,1},	{576,1},	{570,1},	{792,2},
  {643,2},	{798,2}
};

static struct patval fuseki131808[] = {
  {606,1},	{799,1},	{792,1},	{540,2},
  {533,2}
};

static struct patval fuseki131809[] = {
  {606,1},	{799,1},	{792,1},	{540,2},
  {533,2}
};

static struct patval fuseki131810[] = {
  {576,1},	{570,1},	{829,2},	{754,2}
};

static struct patval fuseki131811[] = {
  {576,1},	{570,1},	{829,2},	{754,2}
};

static struct patval fuseki131812[] = {
  {799,1},	{828,1},	{688,1},	{540,2},
  {569,2}
};

static struct patval fuseki131813[] = {
  {576,1},	{792,1},	{684,1},	{570,2},
  {798,2}
};

static struct patval fuseki131814[] = {
  {576,1},	{792,1},	{684,1},	{570,2},
  {798,2}
};

static struct patval fuseki131815[] = {
  {570,1},	{576,1},	{795,1},	{792,2},
  {798,2},	{651,2}
};

static struct patval fuseki131816[] = {
  {576,1},	{570,1},	{795,1},	{792,2},
  {643,2},	{798,2}
};

static struct patval fuseki131817[] = {
  {569,1},	{540,1},	{534,1},	{536,2},
  {829,2},	{799,2}
};

static struct patval fuseki131818[] = {
  {576,1},	{570,1},	{573,1},	{828,2},
  {836,2}
};

static struct patval fuseki131819[] = {
  {569,1},	{791,1},	{533,1},	{830,1},
  {534,2},	{539,2},	{836,2}
};

static struct patval fuseki131820[] = {
  {798,1},	{832,1},	{829,2}
};

static struct patval fuseki131821[] = {
  {798,1},	{688,1},	{577,2}
};

static struct patval fuseki131822[] = {
  {829,1},	{577,1},	{799,2}
};

static struct patval fuseki131823[] = {
  {533,1},	{799,1},	{577,2}
};

static struct patval fuseki131824[] = {
  {538,1},	{575,1},	{502,2}
};

static struct patval fuseki131825[] = {
  {797,1},	{833,1},	{798,1},	{796,2},
  {761,2},	{760,2}
};

static struct patval fuseki131826[] = {
  {614,1},	{798,1},	{576,1},	{832,1},
  {830,2},	{533,2},	{791,2},	{651,2}
};

static struct patval fuseki131827[] = {
  {836,1},	{792,1},	{577,2},	{569,2}
};

static struct patval fuseki131828[] = {
  {540,1},	{798,1},	{829,2},	{533,2}
};

static struct patval fuseki131829[] = {
  {503,1},	{573,1},	{539,1},	{792,2},
  {540,2},	{577,2}
};

static struct patval fuseki131830[] = {
  {503,1},	{573,1},	{539,1},	{792,2},
  {540,2},	{577,2}
};

static struct patval fuseki131831[] = {
  {798,1},	{576,1},	{534,1},	{791,2},
  {532,2}
};

static struct patval fuseki131832[] = {
  {614,1},	{792,1},	{798,1},	{540,2},
  {533,2}
};

static struct patval fuseki131833[] = {
  {576,1},	{725,1},	{797,1},	{791,2},
  {651,2},	{533,2}
};

static struct patval fuseki131834[] = {
  {576,1},	{570,1},	{834,1},	{791,2},
  {799,2}
};

static struct patval fuseki131835[] = {
  {798,1},	{792,1},	{538,1},	{569,2},
  {577,2}
};

static struct patval fuseki131836[] = {
  {570,1},	{792,1},	{573,1},	{835,2},
  {540,2}
};

static struct patval fuseki131837[] = {
  {570,1},	{792,1},	{795,1},	{539,2},
  {836,2}
};

static struct patval fuseki131838[] = {
  {614,1},	{792,1},	{834,1},	{539,2},
  {532,2}
};

static struct patval fuseki131839[] = {
  {614,1},	{792,1},	{834,1},	{539,2},
  {532,2}
};

static struct patval fuseki131840[] = {
  {613,1},	{829,1},	{538,1},	{799,1},
  {576,1},	{532,2},	{577,2},	{614,2},
  {539,2}
};

static struct patval fuseki131841[] = {
  {577,1},	{792,1},	{834,1},	{533,2},
  {799,2}
};

static struct patval fuseki131842[] = {
  {836,1},	{614,1},	{539,1},	{798,1},
  {828,2},	{725,2},	{532,2},	{800,2}
};

static struct patval fuseki131843[] = {
  {577,1},	{540,1},	{576,2},	{570,2}
};

static struct patval fuseki131844[] = {
  {836,1},	{835,1},	{798,2},	{576,2}
};

static struct patval fuseki131845[] = {
  {576,1},	{570,1},	{688,1},	{754,2},
  {798,2},	{829,2}
};

static struct patval fuseki131846[] = {
  {680,1},	{798,1},	{792,1},	{539,2},
  {570,2},	{614,2}
};

static struct patval fuseki131847[] = {
  {835,1},	{792,1},	{795,1},	{576,2},
  {569,2}
};

static struct patval fuseki131848[] = {
  {577,1},	{798,1},	{687,1},	{829,2},
  {570,2}
};

static struct patval fuseki131849[] = {
  {569,1},	{540,1},	{536,1},	{792,2},
  {799,2}
};

static struct patval fuseki131850[] = {
  {569,1},	{577,1},	{540,1},	{798,2},
  {576,2},	{791,2}
};

static struct patval fuseki131851[] = {
  {835,1},	{540,1},	{539,1},	{576,2},
  {570,2},	{829,2}
};

static struct patval fuseki131852[] = {
  {798,1},	{536,1},	{571,1},	{829,2},
  {569,2},	{577,2}
};

static struct patval fuseki131853[] = {
  {761,1},	{539,2}
};

static struct patval fuseki131854[] = {
  {613,1},	{835,2}
};

static struct patval fuseki131855[] = {
  {570,1},	{576,1},	{573,1},	{829,2},
  {799,2}
};

static struct patval fuseki131856[] = {
  {798,1},	{687,1},	{576,1},	{533,2},
  {791,2}
};

static struct patval fuseki131857[] = {
  {829,1},	{571,1},	{577,2}
};

static struct patval fuseki131858[] = {
  {791,1},	{761,1},	{539,2}
};

static struct patval fuseki131859[] = {
  {569,1},	{828,1},	{835,2},	{540,2}
};

static struct patval fuseki131860[] = {
  {761,1},	{792,1},	{684,1},	{612,1},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki131861[] = {
  {502,1},	{538,2}
};

static struct patval fuseki131862[] = {
  {606,1},	{836,1},	{540,1},	{830,2},
  {533,2},	{791,2}
};

static struct patval fuseki131863[] = {
  {540,1},	{754,1},	{836,1},	{534,2},
  {569,2},	{829,2}
};

static struct patval fuseki131864[] = {
  {836,1},	{828,1},	{577,2},	{569,2}
};

static struct patval fuseki131865[] = {
  {532,1},	{828,1},	{539,2},	{835,2}
};

static struct patval fuseki131866[] = {
  {614,1},	{828,1},	{724,1},	{836,1},
  {613,1},	{574,2},	{577,2},	{569,2},
  {539,2}
};

static struct patval fuseki131867[] = {
  {532,1},	{828,1},	{572,1},	{538,1},
  {575,1},	{539,2},	{650,2},	{835,2},
  {577,2}
};

static struct patval fuseki131868[] = {
  {533,1},	{792,1},	{832,1},	{539,2},
  {836,2}
};

static struct patval fuseki131869[] = {
  {570,1},	{829,1},	{536,1},	{835,2},
  {540,2}
};

static struct patval fuseki131870[] = {
  {761,1},	{576,1},	{532,2}
};

static struct patval fuseki131871[] = {
  {577,1},	{570,1},	{792,1},	{793,1},
  {830,2},	{835,2},	{791,2},	{762,2}
};

static struct patval fuseki131872[] = {
  {688,1},	{570,1},	{576,1},	{791,2},
  {836,2}
};

static struct patval fuseki131873[] = {
  {577,1},	{680,1},	{791,1},	{533,1},
  {830,2},	{606,2},	{799,2}
};

static struct patval fuseki131874[] = {
  {570,1},	{792,1},	{576,1},	{539,1},
  {575,2},	{538,2},	{836,2}
};

static struct patval fuseki131875[] = {
  {798,1},	{570,1},	{576,1},	{799,1},
  {828,2},	{762,2},	{761,2}
};

static struct patval fuseki131876[] = {
  {754,1},	{569,2}
};

static struct patval fuseki131877[] = {
  {538,1},	{533,2}
};

static struct patval fuseki131878[] = {
  {532,1},	{541,1},	{614,1},	{798,2},
  {539,2},	{791,2}
};

static struct patval fuseki131879[] = {
  {495,1},	{534,1},	{828,1},	{569,2},
  {576,2},	{835,2}
};

static struct patval fuseki131880[] = {
  {798,1},	{570,1},	{577,1},	{576,1},
  {828,2},	{540,2},	{539,2}
};

static struct patval fuseki131881[] = {
  {835,1},	{792,1},	{576,1},	{798,1},
  {532,2},	{799,2},	{836,2}
};

static struct patval fuseki131882[] = {
  {791,1},	{577,1},	{835,1},	{830,2},
  {570,2}
};

static struct patval fuseki131883[] = {
  {791,1},	{577,1},	{835,1},	{830,2},
  {570,2}
};

static struct patval fuseki131884[] = {
  {643,1},	{791,1},	{533,1},	{832,1},
  {576,2},	{836,2},	{652,2}
};

static struct patval fuseki131885[] = {
  {793,1},	{754,1},	{791,2},	{569,2}
};

static struct patval fuseki131886[] = {
  {606,1},	{533,1},	{576,1},	{792,2},
  {799,2}
};

static struct patval fuseki131887[] = {
  {606,1},	{613,1},	{533,2},	{828,2}
};

static struct patval fuseki131888[] = {
  {606,1},	{613,1},	{533,2},	{828,2}
};

static struct patval fuseki131889[] = {
  {570,1},	{681,1},	{792,1},	{537,1},
  {831,2},	{757,2},	{576,2},	{799,2}
};

static struct patval fuseki131890[] = {
  {688,1},	{792,1},	{798,1},	{614,2},
  {532,2}
};

static struct patval fuseki131891[] = {
  {606,1},	{836,1},	{577,1},	{830,2},
  {533,2},	{791,2}
};

static struct patval fuseki131892[] = {
  {569,1},	{828,1},	{614,1},	{539,2},
  {834,2},	{799,2}
};

static struct patval fuseki131893[] = {
  {569,1},	{828,1},	{533,1},	{535,2},
  {835,2},	{540,2}
};

static struct patval fuseki131894[] = {
  {828,1},	{576,1},	{533,2}
};

static struct patval fuseki131895[] = {
  {532,1},	{798,1},	{829,2}
};

static struct patval fuseki131896[] = {
  {569,1},	{754,1},	{540,1},	{755,1},
  {829,2},	{835,2},	{791,2},	{762,2}
};

static struct patval fuseki131897[] = {
  {539,1},	{836,1},	{571,1},	{534,1},
  {533,2},	{830,2},	{569,2},	{791,2}
};

static struct patval fuseki131898[] = {
  {540,1},	{828,1},	{798,2},	{532,2}
};

static struct patval fuseki131899[] = {
  {828,1},	{540,1},	{570,2},	{836,2}
};

static struct patval fuseki131900[] = {
  {569,1},	{576,1},	{797,1},	{828,2},
  {799,2}
};

static struct patval fuseki131901[] = {
  {577,1},	{570,1},	{793,1},	{791,2},
  {836,2}
};

static struct patval fuseki131902[] = {
  {532,1},	{836,1},	{614,2},	{539,2}
};

static struct patval fuseki131903[] = {
  {576,1},	{836,1},	{831,1},	{834,1},
  {797,2},	{569,2},	{828,2}
};

static struct patval fuseki131904[] = {
  {532,1},	{799,1},	{792,2}
};

static struct patval fuseki131905[] = {
  {532,1},	{835,1},	{576,2}
};

static struct patval fuseki131906[] = {
  {576,1},	{643,1},	{607,1},	{798,1},
  {791,2},	{830,2},	{606,2},	{533,2}
};

static struct patval fuseki131907[] = {
  {576,1},	{643,1},	{607,1},	{798,1},
  {791,2},	{830,2},	{606,2},	{533,2}
};

static struct patval fuseki131908[] = {
  {798,1},	{684,1},	{792,2}
};

static struct patval fuseki131909[] = {
  {570,1},	{684,1},	{792,2}
};

static struct patval fuseki131910[] = {
  {791,1},	{533,1},	{832,1},	{836,2},
  {652,2}
};

static struct patval fuseki131911[] = {
  {606,1},	{871,1},	{576,2},	{798,2}
};

static struct patval fuseki131912[] = {
  {606,1},	{871,1},	{576,2},	{798,2}
};

static struct patval fuseki131913[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {798,2}
};

static struct patval fuseki131914[] = {
  {791,1},	{533,1},	{830,1},	{539,2},
  {798,2}
};

static struct patval fuseki131915[] = {
  {569,1},	{576,1},	{574,1},	{792,2},
  {798,2},	{651,2}
};

static struct patval fuseki131916[] = {
  {572,1},	{570,1},	{577,1},	{643,2},
  {798,2},	{792,2}
};

static struct patval fuseki131917[] = {
  {760,1},	{687,1},	{725,1},	{761,1},
  {798,2},	{724,2},	{762,2},	{799,2}
};

static struct patval fuseki131918[] = {
  {577,1},	{570,1},	{762,1},	{537,1},
  {835,2},	{828,2},	{535,2}
};

static struct patval fuseki131919[] = {
  {798,1},	{576,1},	{535,1},	{792,2},
  {533,2}
};

static struct patval fuseki131920[] = {
  {569,1},	{798,1},	{576,2},	{829,2}
};

static struct patval fuseki131921[] = {
  {577,1},	{828,1},	{569,2},	{799,2}
};

static struct patval fuseki131922[] = {
  {540,1},	{791,1},	{569,2},	{799,2}
};

static struct patval fuseki131923[] = {
  {532,1},	{539,1},	{834,2},	{792,2}
};

static struct patval fuseki131924[] = {
  {606,1},	{533,1},	{836,2}
};

static struct patval fuseki131925[] = {
  {754,1},	{829,1},	{540,2}
};

static struct patval fuseki131926[] = {
  {569,1},	{828,1},	{533,1},	{537,1},
  {535,2},	{687,2},	{835,2},	{540,2}
};

static struct patval fuseki131927[] = {
  {570,1},	{792,1},	{536,1},	{539,2},
  {799,2}
};

static struct patval fuseki131928[] = {
  {798,1},	{576,1},	{536,1},	{533,2},
  {791,2}
};

static struct patval fuseki131929[] = {
  {643,1},	{576,1},	{570,1},	{828,2},
  {798,2}
};

static struct patval fuseki131930[] = {
  {532,1},	{539,1},	{828,2},	{799,2}
};

static struct patval fuseki131931[] = {
  {540,1},	{533,1},	{791,2},	{836,2}
};

static struct patval fuseki131932[] = {
  {568,1},	{643,1},	{798,1},	{792,1},
  {572,2},	{576,2},	{570,2}
};

static struct patval fuseki131933[] = {
  {798,1},	{762,1},	{576,1},	{791,2},
  {725,2},	{533,2}
};

static struct patval fuseki131934[] = {
  {570,1},	{792,1},	{761,1},	{539,2},
  {835,2}
};

static struct patval fuseki131935[] = {
  {798,1},	{792,1},	{575,1},	{569,2},
  {577,2}
};

static struct patval fuseki131936[] = {
  {532,1},	{828,1},	{681,1},	{539,2},
  {835,2}
};

static struct patval fuseki131937[] = {
  {532,1},	{828,1},	{681,1},	{539,2},
  {835,2}
};

static struct patval fuseki131938[] = {
  {534,1},	{791,1},	{569,2},	{577,2}
};

static struct patval fuseki131939[] = {
  {569,1},	{830,1},	{791,2},	{799,2}
};

static struct patval fuseki131940[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {532,2}
};

static struct patval fuseki131941[] = {
  {651,1},	{792,1},	{798,1},	{576,2},
  {532,2}
};

static struct patval fuseki131942[] = {
  {791,1},	{533,1},	{725,1},	{724,1},
  {798,2},	{576,2},	{762,2}
};

static struct patval fuseki131943[] = {
  {569,1},	{576,1},	{533,2},	{791,2}
};

static struct patval fuseki131944[] = {
  {532,1},	{569,1},	{828,1},	{607,1},
  {570,2},	{533,2},	{576,2},	{798,2}
};

static struct patval fuseki131945[] = {
  {532,1},	{791,1},	{828,1},	{755,1},
  {792,2},	{829,2},	{576,2},	{798,2}
};

static struct patval fuseki131946[] = {
  {533,1},	{607,1},	{792,1},	{572,2},
  {576,2},	{798,2}
};

static struct patval fuseki131947[] = {
  {791,1},	{798,1},	{793,1},	{718,2},
  {576,2},	{570,2}
};

static struct patval fuseki131948[] = {
  {606,1},	{799,1},	{830,1},	{533,2},
  {577,2},	{791,2}
};

static struct patval fuseki131949[] = {
  {570,1},	{613,1},	{829,2},	{836,2}
};

static struct patval fuseki131950[] = {
  {836,1},	{576,1},	{537,1},	{533,2},
  {828,2}
};

static struct patval fuseki131951[] = {
  {576,1},	{762,1},	{796,1},	{798,1},
  {724,2},	{791,2},	{725,2},	{533,2}
};

static struct patval fuseki131952[] = {
  {538,1},	{575,1},	{612,1},	{649,1},
  {502,2},	{539,2},	{613,2}
};

static struct patval fuseki131953[] = {
  {570,1},	{760,1},	{797,1},	{761,1},
  {798,2},	{799,2},	{726,2}
};

static struct patval fuseki131954[] = {
  {570,1},	{798,1},	{687,2},	{576,2}
};

static struct patval fuseki131955[] = {
  {614,1},	{829,1},	{539,1},	{532,2},
  {836,2}
};

static struct patval fuseki131956[] = {
  {606,1},	{828,1},	{836,1},	{539,2},
  {688,2},	{533,2}
};

static struct patval fuseki131957[] = {
  {606,1},	{828,1},	{836,1},	{539,2},
  {688,2},	{533,2}
};

static struct patval fuseki131958[] = {
  {761,1},	{576,1},	{828,2}
};

static struct patval fuseki131959[] = {
  {798,1},	{613,1},	{532,2}
};

static struct patval fuseki131960[] = {
  {613,1},	{614,1},	{539,1},	{502,1},
  {649,2},	{612,2},	{538,2},	{575,2}
};

static struct patval fuseki131961[] = {
  {576,1},	{799,1},	{830,1},	{502,1},
  {833,1},	{537,2},	{572,2},	{532,2},
  {828,2}
};

static struct patval fuseki131962[] = {
  {791,1},	{835,1},	{761,1},	{533,2},
  {577,2}
};

static struct patval fuseki131963[] = {
  {799,1},	{755,1},	{829,1},	{539,2},
  {569,2}
};

static struct patval fuseki131964[] = {
  {799,1},	{828,1},	{577,2},	{569,2}
};

static struct patval fuseki131965[] = {
  {836,1},	{791,1},	{577,2},	{569,2}
};

static struct patval fuseki131966[] = {
  {540,1},	{755,1},	{836,1},	{534,2},
  {569,2},	{829,2}
};

static struct patval fuseki131967[] = {
  {540,1},	{836,1},	{607,1},	{830,2},
  {791,2},	{533,2}
};

static struct patval fuseki131968[] = {
  {569,1},	{835,1},	{576,1},	{534,2},
  {828,2}
};

static struct patval fuseki131969[] = {
  {643,1},	{836,1},	{539,1},	{832,2},
  {792,2},	{570,2}
};

static struct patval fuseki131970[] = {
  {791,1},	{836,1},	{535,1},	{576,2},
  {688,2},	{570,2}
};

static struct patval fuseki131971[] = {
  {570,1},	{762,1},	{576,1},	{761,1},
  {798,2},	{792,2},	{799,2}
};

static struct patval fuseki131972[] = {
  {570,1},	{792,1},	{797,1},	{834,1},
  {576,2},	{798,2},	{835,2}
};

static struct patval fuseki131973[] = {
  {799,1},	{576,1},	{830,2}
};

static struct patval fuseki131974[] = {
  {798,1},	{829,1},	{606,2}
};

static struct patval fuseki131975[] = {
  {606,1},	{836,1},	{576,2},	{829,2}
};

static struct patval fuseki131976[] = {
  {538,1},	{828,1},	{569,2},	{798,2}
};

static struct patval fuseki131977[] = {
  {570,1},	{576,1},	{612,2},	{684,2}
};

static struct patval fuseki131978[] = {
  {532,1},	{828,1},	{572,1},	{538,1},
  {650,2},	{798,2},	{577,2}
};

static struct patval fuseki131979[] = {
  {532,1},	{828,1},	{794,1},	{834,1},
  {576,2},	{724,2},	{799,2}
};

static struct patval fuseki131980[] = {
  {532,1},	{828,1},	{651,1},	{576,2},
  {798,2},	{832,2}
};

static struct patval fuseki131981[] = {
  {532,1},	{540,1},	{791,2},	{836,2}
};

static struct patval fuseki131982[] = {
  {532,1},	{540,1},	{791,2},	{836,2}
};

static struct patval fuseki131983[] = {
  {762,1},	{835,1},	{797,2}
};

static struct patval fuseki131984[] = {
  {762,1},	{835,1},	{797,2}
};

static struct patval fuseki131985[] = {
  {576,1},	{798,1},	{570,1},	{533,1},
  {828,2},	{532,2},	{569,2}
};

static struct patval fuseki131986[] = {
  {835,1},	{576,1},	{831,1},	{792,2},
  {532,2}
};

static struct patval fuseki131987[] = {
  {533,1},	{792,1},	{537,1},	{576,2},
  {836,2}
};

static struct patval fuseki131988[] = {
  {570,1},	{718,1},	{576,1},	{792,2},
  {798,2}
};

static struct patval fuseki131989[] = {
  {570,1},	{792,1},	{574,1},	{576,2},
  {798,2}
};

static struct patval fuseki131990[] = {
  {569,1},	{828,1},	{797,1},	{833,1},
  {831,2},	{834,2},	{576,2},	{836,2}
};

static struct patval fuseki131991[] = {
  {569,1},	{828,1},	{797,1},	{833,1},
  {831,2},	{834,2},	{576,2},	{836,2}
};

static struct patval fuseki131992[] = {
  {798,1},	{791,1},	{651,1},	{576,2},
  {643,2},	{570,2}
};

static struct patval fuseki131993[] = {
  {532,1},	{717,1},	{540,1},	{828,2},
  {836,2}
};

static struct patval fuseki131994[] = {
  {836,1},	{540,1},	{831,1},	{828,2},
  {532,2}
};

static struct patval fuseki131995[] = {
  {835,1},	{791,1},	{533,1},	{576,2},
  {569,2}
};

static struct patval fuseki131996[] = {
  {835,1},	{791,1},	{533,1},	{576,2},
  {569,2}
};

static struct patval fuseki131997[] = {
  {532,1},	{828,1},	{537,1},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki131998[] = {
  {828,1},	{836,1},	{651,1},	{576,2},
  {573,2},	{570,2}
};

static struct patval fuseki131999[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132000[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132001[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132002[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132003[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132004[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132005[] = {
  {570,1},	{792,1},	{576,1},	{798,1}
};

static struct patval fuseki132006[] = {
  {725,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132007[] = {
  {831,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132008[] = {
  {643,1},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132009[] = {
  {725,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132010[] = {
  {537,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132011[] = {
  {537,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132012[] = {
  {831,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132013[] = {
  {792,1},	{576,1}
};

static struct patval fuseki132014[] = {
  {792,1},	{576,1}
};

static struct patval fuseki132015[] = {
  {792,1},	{576,1}
};

static struct patval fuseki132016[] = {
  {792,1},	{576,1}
};

static struct patval fuseki132017[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132018[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132019[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132020[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132021[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132022[] = {
  {570,1},	{792,1},	{576,1}
};

static struct patval fuseki132023[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1}
};

static struct patval fuseki132024[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1}
};

static struct patval fuseki132025[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1}
};

static struct patval fuseki132026[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1}
};

static struct patval fuseki132027[] = {
  {643,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132028[] = {
  {535,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132029[] = {
  {651,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132030[] = {
  {831,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132031[] = {
  {717,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132032[] = {
  {651,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132033[] = {
  {725,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132034[] = {
  {651,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132035[] = {
  {725,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132036[] = {
  {831,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132037[] = {
  {798,1},	{576,2},	{792,2}
};

static struct patval fuseki132038[] = {
  {798,1},	{576,2},	{792,2}
};

static struct patval fuseki132039[] = {
  {798,1},	{576,2},	{792,2}
};

static struct patval fuseki132040[] = {
  {570,1},	{792,2},	{576,2}
};

static struct patval fuseki132041[] = {
  {570,1},	{792,2},	{576,2}
};

static struct patval fuseki132042[] = {
  {835,1},	{576,2},	{792,2}
};

static struct patval fuseki132043[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132044[] = {
  {835,1},	{576,2},	{792,2}
};

static struct patval fuseki132045[] = {
  {835,1},	{576,2},	{792,2}
};

static struct patval fuseki132046[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132047[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132048[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132049[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132050[] = {
  {569,1},	{792,2},	{576,2}
};

static struct patval fuseki132051[] = {
  {533,1},	{792,2},	{576,2}
};

static struct patval fuseki132052[] = {
  {569,1},	{792,2},	{576,2}
};

static struct patval fuseki132053[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132054[] = {
  {569,1},	{792,2},	{576,2}
};

static struct patval fuseki132055[] = {
  {799,1},	{576,2},	{792,2}
};

static struct patval fuseki132056[] = {
  {798,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132057[] = {
  {798,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132058[] = {
  {798,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132059[] = {
  {798,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132060[] = {
  {798,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132061[] = {
  {795,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132062[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {651,1},	{725,2}
};

static struct patval fuseki132063[] = {
  {643,1},	{798,1},	{570,1},	{792,1},
  {576,1},	{717,2}
};

static struct patval fuseki132064[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {651,1},	{725,2}
};

static struct patval fuseki132065[] = {
  {570,1},	{792,1},	{574,1},	{576,1},
  {798,1},	{687,2}
};

static struct patval fuseki132066[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{795,2}
};

static struct patval fuseki132067[] = {
  {570,1},	{792,1},	{574,1},	{576,1},
  {798,1},	{687,2}
};

static struct patval fuseki132068[] = {
  {570,1},	{792,1},	{574,1},	{576,1},
  {798,1},	{687,2}
};

static struct patval fuseki132069[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{795,2}
};

static struct patval fuseki132070[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{795,2}
};

static struct patval fuseki132071[] = {
  {570,1},	{798,1},	{792,1},	{572,1},
  {576,1},	{681,2}
};

static struct patval fuseki132072[] = {
  {832,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132073[] = {
  {536,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132074[] = {
  {570,1},	{792,1},	{830,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132075[] = {
  {831,1},	{794,1},	{830,2},	{792,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132076[] = {
  {651,1},	{537,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{725,2}
};

static struct patval fuseki132077[] = {
  {833,1},	{725,1},	{570,2},	{576,2},
  {798,2},	{651,2},	{792,2}
};

static struct patval fuseki132078[] = {
  {651,1},	{537,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{725,2}
};

static struct patval fuseki132079[] = {
  {651,1},	{537,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{725,2}
};

static struct patval fuseki132080[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132081[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132082[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132083[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132084[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132085[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132086[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132087[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132088[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132089[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132090[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132091[] = {
  {836,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132092[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132093[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132094[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132095[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132096[] = {
  {798,1},	{792,1},	{576,1},	{570,2}
};

static struct patval fuseki132097[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132098[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132099[] = {
  {570,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132100[] = {
  {798,1},	{792,1},	{576,1},	{570,2}
};

static struct patval fuseki132101[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{576,1},	{687,1},
  {798,1}
};

static struct patval fuseki132102[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{576,1},	{687,1},
  {798,1}
};

static struct patval fuseki132103[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{576,1},	{687,1},
  {798,1}
};

static struct patval fuseki132104[] = {
  {836,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132105[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132106[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132107[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132108[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132109[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132110[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132111[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132112[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132113[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132114[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132115[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132116[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132117[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132118[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132119[] = {
  {835,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132120[] = {
  {799,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132121[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132122[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132123[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132124[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132125[] = {
  {570,1},	{792,1},	{576,1},	{725,1},
  {798,2}
};

static struct patval fuseki132126[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132127[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132128[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132129[] = {
  {570,1},	{792,1},	{576,1},	{725,1},
  {798,2}
};

static struct patval fuseki132130[] = {
  {570,1},	{792,1},	{576,1},	{725,1},
  {798,2}
};

static struct patval fuseki132131[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132132[] = {
  {570,1},	{792,1},	{576,1},	{725,1},
  {798,2}
};

static struct patval fuseki132133[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,2}
};

static struct patval fuseki132134[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{831,2},	{794,2}
};

static struct patval fuseki132135[] = {
  {576,1},	{754,1},	{570,1},	{798,1},
  {792,1},	{794,1},	{717,2},	{718,2}
};

static struct patval fuseki132136[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{831,2},	{794,2}
};

static struct patval fuseki132137[] = {
  {570,1},	{644,1},	{792,1},	{534,1},
  {798,1},	{576,1},	{572,2},	{535,2}
};

static struct patval fuseki132138[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{831,2},	{794,2}
};

static struct patval fuseki132139[] = {
  {570,1},	{792,1},	{650,1},	{798,1},
  {538,1},	{576,1},	{537,2},	{574,2}
};

static struct patval fuseki132140[] = {
  {570,1},	{644,1},	{792,1},	{534,1},
  {798,1},	{576,1},	{572,2},	{535,2}
};

static struct patval fuseki132141[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {762,1},	{798,1},	{725,2},	{724,2}
};

static struct patval fuseki132142[] = {
  {570,1},	{792,1},	{574,1},	{576,1},
  {614,1},	{798,1},	{650,2},	{651,2}
};

static struct patval fuseki132143[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{831,2},	{794,2}
};

static struct patval fuseki132144[] = {
  {576,1},	{570,1},	{792,1},	{829,1},
  {684,1},	{798,1},	{828,2}
};

static struct patval fuseki132145[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{799,1},	{836,2}
};

static struct patval fuseki132146[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{799,1},	{836,2}
};

static struct patval fuseki132147[] = {
  {836,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132148[] = {
  {836,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132149[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {650,1},	{537,2}
};

static struct patval fuseki132150[] = {
  {576,1},	{570,1},	{792,1},	{794,1},
  {798,1},	{717,2}
};

static struct patval fuseki132151[] = {
  {576,1},	{570,1},	{792,1},	{572,1},
  {798,1},	{643,2}
};

static struct patval fuseki132152[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {724,1},	{833,2}
};

static struct patval fuseki132153[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132154[] = {
  {576,1},	{570,1},	{792,1},	{794,1},
  {798,1},	{717,2}
};

static struct patval fuseki132155[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {798,1},	{725,2}
};

static struct patval fuseki132156[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132157[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132158[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132159[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {798,1},	{725,2}
};

static struct patval fuseki132160[] = {
  {576,1},	{570,1},	{644,1},	{792,1},
  {798,1},	{643,2}
};

static struct patval fuseki132161[] = {
  {570,1},	{792,1},	{798,1},	{572,1},
  {576,1},	{535,2}
};

static struct patval fuseki132162[] = {
  {576,1},	{570,1},	{718,1},	{792,1},
  {798,1},	{717,2}
};

static struct patval fuseki132163[] = {
  {570,1},	{792,1},	{798,1},	{834,1},
  {576,1},	{832,2}
};

static struct patval fuseki132164[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {614,1},	{688,2}
};

static struct patval fuseki132165[] = {
  {570,1},	{792,1},	{830,1},	{798,1},
  {576,1},	{832,2}
};

static struct patval fuseki132166[] = {
  {570,1},	{792,1},	{830,1},	{798,1},
  {576,1},	{832,2}
};

static struct patval fuseki132167[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {614,1},	{688,2}
};

static struct patval fuseki132168[] = {
  {570,1},	{792,1},	{534,1},	{798,1},
  {576,1},	{536,2}
};

static struct patval fuseki132169[] = {
  {570,1},	{792,1},	{798,1},	{834,1},
  {576,1},	{832,2}
};

static struct patval fuseki132170[] = {
  {687,1},	{835,1},	{574,2},	{576,2},
  {570,2},	{798,2},	{792,2}
};

static struct patval fuseki132171[] = {
  {570,1},	{792,1},	{574,1},	{576,1},
  {836,1},	{798,1},	{835,2},	{687,2}
};

static struct patval fuseki132172[] = {
  {570,1},	{792,1},	{796,1},	{540,1},
  {576,1},	{798,1},	{687,2},	{539,2}
};

static struct patval fuseki132173[] = {
  {533,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132174[] = {
  {799,1},	{792,1},	{576,1},	{570,2}
};

static struct patval fuseki132175[] = {
  {835,1},	{792,1},	{576,1},	{570,2}
};

static struct patval fuseki132176[] = {
  {569,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132177[] = {
  {533,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132178[] = {
  {606,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{643,2}
};

static struct patval fuseki132179[] = {
  {532,1},	{792,2},	{576,2}
};

static struct patval fuseki132180[] = {
  {532,1},	{792,2},	{576,2}
};

static struct patval fuseki132181[] = {
  {836,1},	{576,2},	{792,2}
};

static struct patval fuseki132182[] = {
  {532,1},	{792,2},	{576,2}
};

static struct patval fuseki132183[] = {
  {836,1},	{576,2},	{792,2}
};

static struct patval fuseki132184[] = {
  {532,1},	{792,2},	{576,2}
};

static struct patval fuseki132185[] = {
  {532,1},	{792,2},	{576,2}
};

static struct patval fuseki132186[] = {
  {831,1},	{794,1},	{830,2},	{792,2},
  {570,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132187[] = {
  {717,1},	{718,1},	{570,2},	{754,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132188[] = {
  {717,1},	{718,1},	{570,2},	{754,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132189[] = {
  {717,1},	{718,1},	{570,2},	{754,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132190[] = {
  {831,1},	{794,1},	{830,2},	{792,2},
  {570,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132191[] = {
  {725,1},	{724,1},	{684,2},	{576,2},
  {792,2},	{798,2},	{570,2},	{762,2}
};

static struct patval fuseki132192[] = {
  {831,1},	{794,1},	{830,2},	{792,2},
  {570,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132193[] = {
  {644,1},	{643,1},	{570,2},	{606,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132194[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {799,1},	{836,2}
};

static struct patval fuseki132195[] = {
  {791,1},	{798,1},	{570,1},	{792,1},
  {576,1},	{828,2}
};

static struct patval fuseki132196[] = {
  {835,1},	{836,1},	{576,2},	{798,2},
  {570,2},	{799,2},	{792,2}
};

static struct patval fuseki132197[] = {
  {835,1},	{836,1},	{576,2},	{798,2},
  {570,2},	{799,2},	{792,2}
};

static struct patval fuseki132198[] = {
  {540,1},	{539,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{577,2}
};

static struct patval fuseki132199[] = {
  {540,1},	{577,1},	{539,2},	{576,2},
  {798,2},	{570,2},	{792,2}
};

static struct patval fuseki132200[] = {
  {540,1},	{681,2},	{570,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{687,2},
  {798,2},	{792,2}
};

static struct patval fuseki132201[] = {
  {532,1},	{570,2},	{681,2},	{792,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132202[] = {
  {828,1},	{570,2},	{681,2},	{792,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132203[] = {
  {540,1},	{681,2},	{570,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{687,2},
  {798,2},	{792,2}
};

static struct patval fuseki132204[] = {
  {836,1},	{681,2},	{570,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{687,2},
  {798,2},	{792,2}
};

static struct patval fuseki132205[] = {
  {532,1},	{570,2},	{681,2},	{792,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132206[] = {
  {570,1},	{792,1},	{537,1},	{576,1},
  {798,1},	{651,2}
};

static struct patval fuseki132207[] = {
  {570,1},	{792,1},	{537,1},	{576,1},
  {798,1},	{651,2}
};

static struct patval fuseki132208[] = {
  {576,1},	{570,1},	{792,1},	{831,1},
  {798,1},	{717,2}
};

static struct patval fuseki132209[] = {
  {717,1},	{570,1},	{792,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132210[] = {
  {570,1},	{792,1},	{651,1},	{576,1},
  {798,1},	{537,2}
};

static struct patval fuseki132211[] = {
  {570,1},	{792,1},	{537,1},	{576,1},
  {798,1},	{651,2}
};

static struct patval fuseki132212[] = {
  {570,1},	{792,1},	{651,1},	{576,1},
  {798,1},	{537,2}
};

static struct patval fuseki132213[] = {
  {570,1},	{792,1},	{725,1},	{576,1},
  {798,1},	{833,2}
};

static struct patval fuseki132214[] = {
  {570,1},	{792,1},	{833,1},	{576,1},
  {798,1},	{725,2}
};

static struct patval fuseki132215[] = {
  {570,1},	{792,1},	{725,1},	{576,1},
  {798,1},	{833,2}
};

static struct patval fuseki132216[] = {
  {835,1},	{687,1},	{797,1},	{574,2},
  {576,2},	{792,2},	{798,2},	{570,2},
  {836,2}
};

static struct patval fuseki132217[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{725,1},	{651,2}
};

static struct patval fuseki132218[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{651,1},	{725,2}
};

static struct patval fuseki132219[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{651,1},	{725,2}
};

static struct patval fuseki132220[] = {
  {570,1},	{792,1},	{535,1},	{684,1},
  {798,1},	{576,1},	{537,2}
};

static struct patval fuseki132221[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{651,1},	{725,2}
};

static struct patval fuseki132222[] = {
  {570,1},	{792,1},	{798,1},	{684,1},
  {537,1},	{576,1},	{535,2}
};

static struct patval fuseki132223[] = {
  {570,1},	{792,1},	{574,1},	{649,1},
  {836,1},	{576,1},	{799,1},	{798,1},
  {761,2},	{835,2},	{687,2},	{797,2}
};

static struct patval fuseki132224[] = {
  {570,1},	{792,1},	{574,1},	{649,1},
  {836,1},	{576,1},	{799,1},	{798,1},
  {761,2},	{835,2},	{687,2},	{797,2}
};

static struct patval fuseki132225[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1}
};

static struct patval fuseki132226[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1}
};

static struct patval fuseki132227[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1}
};

static struct patval fuseki132228[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1}
};

static struct patval fuseki132229[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1}
};

static struct patval fuseki132230[] = {
  {687,1},	{835,1},	{797,1},	{761,1},
  {574,2},	{576,2},	{570,2},	{649,2},
  {798,2},	{792,2},	{836,2}
};

static struct patval fuseki132231[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132232[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132233[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132234[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132235[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132236[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132237[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1}
};

static struct patval fuseki132238[] = {
  {570,1},	{792,1},	{574,1},	{649,1},
  {836,1},	{576,1},	{798,1},	{687,2},
  {835,2},	{797,2}
};

static struct patval fuseki132239[] = {
  {795,1},	{831,1},	{794,2},	{792,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132240[] = {
  {643,1},	{681,1},	{644,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132241[] = {
  {795,1},	{831,1},	{794,2},	{792,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132242[] = {
  {791,1},	{828,1},	{570,2},	{792,2},
  {829,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132243[] = {
  {799,1},	{836,1},	{684,2},	{576,2},
  {798,2},	{835,2},	{570,2},	{792,2}
};

static struct patval fuseki132244[] = {
  {644,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132245[] = {
  {794,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132246[] = {
  {718,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132247[] = {
  {718,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132248[] = {
  {724,1},	{792,2},	{684,2},	{576,2},
  {570,2},	{798,2}
};

static struct patval fuseki132249[] = {
  {644,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132250[] = {
  {572,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132251[] = {
  {724,1},	{792,2},	{684,2},	{576,2},
  {570,2},	{798,2}
};

static struct patval fuseki132252[] = {
  {835,1},	{761,1},	{687,1},	{834,1},
  {797,1},	{649,2},	{576,2},	{574,2},
  {792,2},	{798,2},	{570,2},	{799,2},
  {836,2}
};

static struct patval fuseki132253[] = {
  {539,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132254[] = {
  {577,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132255[] = {
  {577,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132256[] = {
  {533,1},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132257[] = {
  {684,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132258[] = {
  {684,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132259[] = {
  {684,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132260[] = {
  {761,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132261[] = {
  {797,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132262[] = {
  {761,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132263[] = {
  {761,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132264[] = {
  {797,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132265[] = {
  {761,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132266[] = {
  {797,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132267[] = {
  {797,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132268[] = {
  {754,1},	{798,1},	{576,1},	{570,1},
  {792,1},	{829,1},	{684,1},	{828,2},
  {791,2}
};

static struct patval fuseki132269[] = {
  {754,1},	{798,1},	{576,1},	{570,1},
  {792,1},	{829,1},	{684,1},	{828,2},
  {791,2}
};

static struct patval fuseki132270[] = {
  {791,1},	{687,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{795,1},
  {576,1},	{798,1},	{828,2}
};

static struct patval fuseki132271[] = {
  {576,1},	{569,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{795,1},
  {798,1},	{687,1},	{532,2}
};

static struct patval fuseki132272[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{576,1},	{687,1},
  {798,1},	{577,1},	{540,2}
};

static struct patval fuseki132273[] = {
  {576,1},	{533,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{795,1},
  {798,1},	{687,1},	{532,2}
};

static struct patval fuseki132274[] = {
  {718,1},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132275[] = {
  {724,1},	{792,2},	{576,2},	{570,2},
  {798,2}
};

static struct patval fuseki132276[] = {
  {572,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132277[] = {
  {796,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132278[] = {
  {574,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132279[] = {
  {570,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132280[] = {
  {570,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132281[] = {
  {570,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132282[] = {
  {570,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132283[] = {
  {798,1},	{792,1},	{576,1},	{533,2}
};

static struct patval fuseki132284[] = {
  {533,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132285[] = {
  {533,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132286[] = {
  {835,1},	{792,1},	{576,1},	{569,2}
};

static struct patval fuseki132287[] = {
  {835,1},	{792,1},	{576,1},	{569,2}
};

static struct patval fuseki132288[] = {
  {569,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132289[] = {
  {533,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132290[] = {
  {569,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132291[] = {
  {651,1},	{798,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132292[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132293[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132294[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132295[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132296[] = {
  {651,1},	{798,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132297[] = {
  {798,1},	{534,1},	{792,2},	{576,2},
  {569,2}
};

static struct patval fuseki132298[] = {
  {798,1},	{534,1},	{792,2},	{576,2},
  {569,2}
};

static struct patval fuseki132299[] = {
  {570,1},	{762,1},	{576,2},	{835,2},
  {792,2}
};

static struct patval fuseki132300[] = {
  {798,1},	{534,1},	{792,2},	{576,2},
  {569,2}
};

static struct patval fuseki132301[] = {
  {606,1},	{798,1},	{792,2},	{576,2},
  {533,2}
};

static struct patval fuseki132302[] = {
  {680,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132303[] = {
  {688,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132304[] = {
  {688,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132305[] = {
  {688,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132306[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132307[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132308[] = {
  {570,1},	{792,1},	{573,1},	{576,1},
  {798,2}
};

static struct patval fuseki132309[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132310[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132311[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132312[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132313[] = {
  {606,1},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132314[] = {
  {534,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132315[] = {
  {614,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132316[] = {
  {614,1},	{792,2},	{576,2},	{798,2},
  {570,2}
};

static struct patval fuseki132317[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {650,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132318[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {650,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132319[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {650,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132320[] = {
  {576,1},	{570,1},	{719,1},	{718,1},
  {792,1},	{798,1},	{717,2},	{681,2}
};

static struct patval fuseki132321[] = {
  {570,1},	{792,1},	{757,1},	{794,1},
  {798,1},	{576,1},	{795,2},	{831,2}
};

static struct patval fuseki132322[] = {
  {570,1},	{792,1},	{576,1},	{759,1},
  {796,1},	{798,1},	{795,2},	{833,2}
};

static struct patval fuseki132323[] = {
  {831,1},	{833,1},	{794,1},	{830,2},
  {792,2},	{570,2},	{718,2},	{576,2},
  {798,2}
};

static struct patval fuseki132324[] = {
  {831,1},	{833,1},	{794,1},	{830,2},
  {792,2},	{570,2},	{718,2},	{576,2},
  {798,2}
};

static struct patval fuseki132325[] = {
  {574,1},	{537,1},	{535,1},	{792,2},
  {570,2},	{538,2},	{576,2},	{650,2},
  {798,2}
};

static struct patval fuseki132326[] = {
  {570,1},	{792,1},	{651,1},	{760,1},
  {576,1},	{798,1},	{833,2},	{725,2}
};

static struct patval fuseki132327[] = {
  {755,1},	{791,1},	{828,1},	{570,2},
  {754,2},	{792,2},	{829,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132328[] = {
  {762,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132329[] = {
  {834,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132330[] = {
  {762,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132331[] = {
  {762,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132332[] = {
  {834,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132333[] = {
  {834,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132334[] = {
  {762,1},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132335[] = {
  {533,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132336[] = {
  {569,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132337[] = {
  {799,1},	{792,1},	{576,1},	{569,2}
};

static struct patval fuseki132338[] = {
  {569,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132339[] = {
  {651,1},	{537,1},	{684,2},	{792,2},
  {576,2},	{798,2},	{570,2},	{725,2}
};

static struct patval fuseki132340[] = {
  {651,1},	{537,1},	{684,2},	{792,2},
  {576,2},	{798,2},	{570,2},	{725,2}
};

static struct patval fuseki132341[] = {
  {570,1},	{792,1},	{798,1},	{610,1},
  {576,1},	{536,2}
};

static struct patval fuseki132342[] = {
  {570,1},	{792,1},	{686,1},	{576,1},
  {798,1},	{688,2}
};

static struct patval fuseki132343[] = {
  {570,1},	{792,1},	{758,1},	{798,1},
  {576,1},	{832,2}
};

static struct patval fuseki132344[] = {
  {570,1},	{792,1},	{758,1},	{798,1},
  {576,1},	{832,2}
};

static struct patval fuseki132345[] = {
  {725,1},	{836,1},	{833,1},	{760,2},
  {576,2},	{798,2},	{651,2},	{570,2},
  {792,2}
};

static struct patval fuseki132346[] = {
  {570,1},	{792,1},	{834,1},	{576,1},
  {798,1},	{799,1},	{835,2},	{836,2}
};

static struct patval fuseki132347[] = {
  {754,1},	{798,1},	{576,1},	{570,1},
  {792,1},	{829,1},	{828,2},	{791,2}
};

static struct patval fuseki132348[] = {
  {576,1},	{569,1},	{534,1},	{570,1},
  {792,1},	{798,1},	{532,2},	{533,2}
};

static struct patval fuseki132349[] = {
  {570,1},	{792,1},	{725,1},	{612,1},
  {576,1},	{798,1},	{577,1},	{540,2},
  {651,2},	{537,2}
};

static struct patval fuseki132350[] = {
  {570,1},	{792,1},	{651,1},	{760,1},
  {576,1},	{798,1},	{799,1},	{725,2},
  {833,2},	{836,2}
};

static struct patval fuseki132351[] = {
  {576,1},	{570,1},	{792,1},	{794,1},
  {684,1},	{798,1},	{717,2}
};

static struct patval fuseki132352[] = {
  {570,1},	{792,1},	{684,1},	{574,1},
  {576,1},	{798,1},	{651,2}
};

static struct patval fuseki132353[] = {
  {570,1},	{792,1},	{684,1},	{574,1},
  {576,1},	{798,1},	{651,2}
};

static struct patval fuseki132354[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {684,1},	{576,1},	{831,2}
};

static struct patval fuseki132355[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {684,1},	{576,1},	{831,2}
};

static struct patval fuseki132356[] = {
  {717,1},	{754,1},	{798,1},	{576,1},
  {570,1},	{684,1},	{792,1},	{829,1},
  {755,2},	{828,2},	{791,2}
};

static struct patval fuseki132357[] = {
  {684,1},	{576,1},	{606,1},	{643,1},
  {533,1},	{570,1},	{798,1},	{792,1},
  {532,2},	{569,2},	{607,2}
};

static struct patval fuseki132358[] = {
  {651,1},	{578,1},	{537,1},	{540,1},
  {792,2},	{798,2},	{612,2},	{577,2},
  {570,2},	{725,2},	{576,2}
};

static struct patval fuseki132359[] = {
  {532,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132360[] = {
  {836,1},	{792,1},	{576,1},	{533,2}
};

static struct patval fuseki132361[] = {
  {836,1},	{792,1},	{576,1},	{569,2}
};

static struct patval fuseki132362[] = {
  {836,1},	{792,1},	{576,1},	{569,2}
};

static struct patval fuseki132363[] = {
  {532,1},	{792,1},	{576,1},	{835,2}
};

static struct patval fuseki132364[] = {
  {650,1},	{651,1},	{537,1},	{684,2},
  {576,2},	{570,2},	{798,2},	{614,2},
  {792,2},	{725,2}
};

static struct patval fuseki132365[] = {
  {717,1},	{831,1},	{794,1},	{830,2},
  {792,2},	{570,2},	{684,2},	{833,2},
  {576,2},	{798,2}
};

static struct patval fuseki132366[] = {
  {570,1},	{792,1},	{798,1},	{612,1},
  {539,1},	{576,1},	{725,1},	{577,1},
  {540,2},	{651,2},	{537,2},	{578,2}
};

static struct patval fuseki132367[] = {
  {502,1},	{536,1},	{534,2},	{792,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132368[] = {
  {832,1},	{866,1},	{792,2},	{570,2},
  {834,2},	{576,2},	{798,2}
};

static struct patval fuseki132369[] = {
  {540,1},	{504,1},	{537,1},	{578,1},
  {651,1},	{612,2},	{798,2},	{570,2},
  {577,2},	{539,2},	{725,2},	{792,2},
  {576,2}
};

static struct patval fuseki132370[] = {
  {762,1},	{576,2},	{792,2}
};

static struct patval fuseki132371[] = {
  {834,1},	{792,2},	{576,2}
};

static struct patval fuseki132372[] = {
  {834,1},	{792,2},	{576,2}
};

static struct patval fuseki132373[] = {
  {834,1},	{792,2},	{576,2}
};

static struct patval fuseki132374[] = {
  {684,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132375[] = {
  {684,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132376[] = {
  {684,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132377[] = {
  {684,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132378[] = {
  {684,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132379[] = {
  {570,1},	{792,1},	{682,1},	{798,1},
  {576,1},	{684,2}
};

static struct patval fuseki132380[] = {
  {570,1},	{792,1},	{682,1},	{798,1},
  {576,1},	{684,2}
};

static struct patval fuseki132381[] = {
  {570,1},	{792,1},	{798,1},	{686,1},
  {576,1},	{684,2}
};

static struct patval fuseki132382[] = {
  {570,1},	{792,1},	{610,1},	{798,1},
  {576,1},	{684,2}
};

static struct patval fuseki132383[] = {
  {570,1},	{792,1},	{798,1},	{758,1},
  {576,1},	{684,2}
};

static struct patval fuseki132384[] = {
  {570,1},	{792,1},	{610,1},	{798,1},
  {576,1},	{684,2}
};

static struct patval fuseki132385[] = {
  {576,1},	{792,1},	{534,1},	{569,2}
};

static struct patval fuseki132386[] = {
  {576,1},	{792,1},	{534,1},	{569,2}
};

static struct patval fuseki132387[] = {
  {792,1},	{834,1},	{576,1},	{799,2}
};

static struct patval fuseki132388[] = {
  {792,1},	{834,1},	{576,1},	{799,2}
};

static struct patval fuseki132389[] = {
  {576,1},	{792,1},	{534,1},	{569,2}
};

static struct patval fuseki132390[] = {
  {792,1},	{834,1},	{576,1},	{799,2}
};

static struct patval fuseki132391[] = {
  {871,1},	{836,1},	{835,1},	{570,2},
  {576,2},	{798,2},	{834,2},	{799,2},
  {792,2}
};

static struct patval fuseki132392[] = {
  {502,1},	{537,1},	{792,2},	{570,2},
  {576,2},	{650,2},	{798,2}
};

static struct patval fuseki132393[] = {
  {574,1},	{650,1},	{651,1},	{537,1},
  {684,2},	{570,2},	{538,2},	{576,2},
  {792,2},	{798,2},	{614,2},	{535,2}
};

static struct patval fuseki132394[] = {
  {650,1},	{651,1},	{574,1},	{537,1},
  {684,2},	{538,2},	{576,2},	{570,2},
  {798,2},	{614,2},	{792,2},	{725,2}
};

static struct patval fuseki132395[] = {
  {570,1},	{792,1},	{539,1},	{576,1},
  {798,1},	{651,1},	{614,1},	{577,2},
  {540,2},	{615,2}
};

static struct patval fuseki132396[] = {
  {570,1},	{792,1},	{833,1},	{834,1},
  {799,1},	{576,1},	{798,1},	{835,2},
  {871,2},	{836,2}
};

static struct patval fuseki132397[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki132398[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval fuseki132399[] = {
  {570,1},	{792,1},	{795,1},	{576,1},
  {798,1},	{614,1},	{688,2},	{800,2}
};

static struct patval fuseki132400[] = {
  {570,1},	{792,1},	{534,1},	{798,1},
  {687,1},	{576,1},	{502,2},	{536,2}
};

static struct patval fuseki132401[] = {
  {651,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132402[] = {
  {725,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132403[] = {
  {651,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132404[] = {
  {651,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132405[] = {
  {570,1},	{792,1},	{798,1},	{574,1},
  {576,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132406[] = {
  {570,1},	{792,1},	{798,1},	{574,1},
  {576,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132407[] = {
  {570,1},	{792,1},	{535,1},	{798,1},
  {576,1},	{650,1},	{537,2},	{651,2}
};

static struct patval fuseki132408[] = {
  {570,1},	{792,1},	{576,1},	{687,1},
  {798,1},	{651,2}
};

static struct patval fuseki132409[] = {
  {570,1},	{792,1},	{573,1},	{798,1},
  {576,1},	{537,2}
};

static struct patval fuseki132410[] = {
  {576,1},	{570,1},	{681,1},	{792,1},
  {798,1},	{643,2}
};

static struct patval fuseki132411[] = {
  {570,1},	{792,1},	{684,1},	{798,1},
  {538,1},	{576,1},	{725,1},	{614,1},
  {537,2},	{651,2},	{650,2}
};

static struct patval fuseki132412[] = {
  {570,1},	{792,1},	{798,1},	{540,1},
  {576,1},	{650,1},	{537,2},	{502,2}
};

static struct patval fuseki132413[] = {
  {828,1},	{570,1},	{718,1},	{792,1},
  {798,1},	{576,1},	{831,2},	{866,2}
};

static struct patval fuseki132414[] = {
  {532,1},	{798,1},	{570,1},	{644,1},
  {792,1},	{576,1},	{535,2},	{496,2}
};

static struct patval fuseki132415[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {798,1},	{836,1},	{725,2},	{800,2}
};

static struct patval fuseki132416[] = {
  {570,1},	{792,1},	{684,1},	{725,1},
  {576,1},	{798,1},	{614,1},	{651,2},
  {537,2}
};

static struct patval fuseki132417[] = {
  {835,1},	{688,1},	{576,2},	{798,2},
  {570,2},	{614,2},	{792,2}
};

static struct patval fuseki132418[] = {
  {688,1},	{800,1},	{536,1},	{795,2},
  {576,2},	{798,2},	{614,2},	{570,2},
  {792,2}
};

static struct patval fuseki132419[] = {
  {570,1},	{792,1},	{649,1},	{576,1},
  {798,1},	{651,2}
};

static struct patval fuseki132420[] = {
  {570,1},	{792,1},	{757,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132421[] = {
  {570,1},	{792,1},	{686,1},	{576,1},
  {798,1},	{762,1},	{614,1},	{688,2},
  {835,2},	{836,2}
};

static struct patval fuseki132422[] = {
  {570,1},	{792,1},	{686,1},	{576,1},
  {798,1},	{762,1},	{614,1},	{688,2},
  {835,2},	{836,2}
};

static struct patval fuseki132423[] = {
  {570,1},	{792,1},	{686,1},	{614,1},
  {576,1},	{798,1},	{762,1},	{539,2},
  {688,2},	{540,2}
};

static struct patval fuseki132424[] = {
  {650,1},	{651,1},	{537,1},	{689,1},
  {570,2},	{798,2},	{576,2},	{792,2},
  {725,2},	{652,2},	{614,2}
};

static struct patval fuseki132425[] = {
  {687,1},	{792,2},	{684,2},	{576,2},
  {570,2},	{798,2}
};

static struct patval fuseki132426[] = {
  {795,1},	{792,2},	{684,2},	{570,2},
  {576,2},	{798,2}
};

static struct patval fuseki132427[] = {
  {573,1},	{792,2},	{570,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132428[] = {
  {681,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132429[] = {
  {570,1},	{792,1},	{615,1},	{576,1},
  {725,1},	{798,1},	{614,1},	{652,1},
  {650,2},	{537,2},	{651,2},	{689,2}
};

static struct patval fuseki132430[] = {
  {570,1},	{792,1},	{534,1},	{503,1},
  {795,1},	{614,1},	{576,1},	{798,1},
  {536,2},	{502,2},	{688,2},	{800,2}
};

static struct patval fuseki132431[] = {
  {570,1},	{792,1},	{534,1},	{503,1},
  {795,1},	{614,1},	{576,1},	{798,1},
  {536,2},	{502,2},	{688,2},	{800,2}
};

static struct patval fuseki132432[] = {
  {835,1},	{836,1},	{688,1},	{798,2},
  {570,2},	{614,2},	{576,2},	{762,2},
  {792,2}
};

static struct patval fuseki132433[] = {
  {687,1},	{796,1},	{574,2},	{792,2},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki132434[] = {
  {795,1},	{718,1},	{792,2},	{570,2},
  {576,2},	{724,2},	{798,2}
};

static struct patval fuseki132435[] = {
  {724,1},	{795,1},	{792,2},	{718,2},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki132436[] = {
  {651,1},	{835,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132437[] = {
  {799,1},	{831,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132438[] = {
  {569,1},	{537,1},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132439[] = {
  {651,1},	{835,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132440[] = {
  {651,1},	{835,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132441[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {762,1},	{614,1},	{688,2},	{835,2}
};

static struct patval fuseki132442[] = {
  {753,1},	{717,1},	{681,1},	{791,1},
  {570,2},	{754,2},	{718,2},	{792,2},
  {719,2},	{576,2},	{798,2}
};

static struct patval fuseki132443[] = {
  {717,1},	{791,1},	{681,1},	{570,2},
  {718,2},	{792,2},	{719,2},	{576,2},
  {798,2}
};

static struct patval fuseki132444[] = {
  {570,1},	{755,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{684,1},	{831,2},
  {794,2}
};

static struct patval fuseki132445[] = {
  {570,1},	{792,1},	{684,1},	{797,1},
  {576,1},	{762,1},	{798,1},	{725,2},
  {724,2}
};

static struct patval fuseki132446[] = {
  {570,1},	{755,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{684,1},	{831,2},
  {794,2}
};

static struct patval fuseki132447[] = {
  {651,1},	{650,1},	{537,1},	{576,2},
  {792,2},	{798,2},	{614,2},	{570,2},
  {725,2}
};

static struct patval fuseki132448[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{834,1},	{833,2},
  {831,2},	{794,2}
};

static struct patval fuseki132449[] = {
  {606,1},	{576,1},	{798,1},	{754,1},
  {570,1},	{794,1},	{792,1},	{718,2},
  {643,2},	{717,2}
};

static struct patval fuseki132450[] = {
  {719,1},	{754,1},	{798,1},	{570,1},
  {576,1},	{718,1},	{792,1},	{717,2},
  {681,2},	{791,2}
};

static struct patval fuseki132451[] = {
  {831,1},	{792,2},	{576,2}
};

static struct patval fuseki132452[] = {
  {537,1},	{792,2},	{576,2}
};

static struct patval fuseki132453[] = {
  {717,1},	{792,2},	{576,2}
};

static struct patval fuseki132454[] = {
  {831,1},	{792,2},	{576,2}
};

static struct patval fuseki132455[] = {
  {717,1},	{792,2},	{576,2}
};

static struct patval fuseki132456[] = {
  {798,1}
};

static struct patval fuseki132457[] = {
  {576,1}
};

static struct patval fuseki132458[] = {
  {570,1}
};

static struct patval fuseki132459[] = {
  {792,1}
};

static struct patval fuseki132460[] = {
  {798,1}
};

static struct patval fuseki132461[] = {
  {570,1},	{792,1},	{614,1},	{576,1},
  {798,1},	{725,1},	{651,2},	{537,2}
};

static struct patval fuseki132462[] = {
  {835,1},	{871,1},	{836,1},	{870,1},
  {834,2},	{792,2},	{576,2},	{798,2},
  {570,2},	{799,2},	{833,2}
};

static struct patval fuseki132463[] = {
  {577,1},	{615,1},	{652,1},	{540,1},
  {798,2},	{576,2},	{570,2},	{614,2},
  {651,2},	{792,2},	{539,2}
};

static struct patval fuseki132464[] = {
  {570,1},	{792,1},	{684,1},	{833,1},
  {576,1},	{798,1},	{725,2}
};

static struct patval fuseki132465[] = {
  {717,1},	{570,1},	{792,1},	{798,1},
  {684,1},	{576,1},	{831,2}
};

static struct patval fuseki132466[] = {
  {570,1},	{792,1},	{684,1},	{537,1},
  {576,1},	{798,1},	{651,2}
};

static struct patval fuseki132467[] = {
  {717,1},	{570,1},	{792,1},	{798,1},
  {684,1},	{576,1},	{831,2}
};

static struct patval fuseki132468[] = {
  {576,1},	{570,1},	{792,1},	{831,1},
  {684,1},	{798,1},	{717,2}
};

static struct patval fuseki132469[] = {
  {798,1},	{792,1},	{576,1},	{532,2}
};

static struct patval fuseki132470[] = {
  {798,1},	{792,1},	{576,1},	{532,2}
};

static struct patval fuseki132471[] = {
  {570,1},	{792,1},	{576,1},	{836,2}
};

static struct patval fuseki132472[] = {
  {570,1},	{792,1},	{534,1},	{614,1},
  {795,1},	{576,1},	{798,1},	{536,2},
  {688,2},	{800,2}
};

static struct patval fuseki132473[] = {
  {570,1},	{792,1},	{573,1},	{576,1},
  {836,2}
};

static struct patval fuseki132474[] = {
  {570,1},	{792,1},	{573,1},	{576,1},
  {836,2}
};

static struct patval fuseki132475[] = {
  {570,1},	{792,1},	{573,1},	{576,1},
  {836,2}
};

static struct patval fuseki132476[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {798,1},	{724,2}
};

static struct patval fuseki132477[] = {
  {570,1},	{644,1},	{792,1},	{798,1},
  {576,1},	{572,2}
};

static struct patval fuseki132478[] = {
  {570,1},	{798,1},	{792,1},	{794,1},
  {576,1},	{718,2}
};

static struct patval fuseki132479[] = {
  {570,1},	{792,1},	{796,1},	{576,1},
  {798,1},	{724,2}
};

static struct patval fuseki132480[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {724,1},	{796,2}
};

static struct patval fuseki132481[] = {
  {651,1},	{688,1},	{537,1},	{689,1},
  {650,1},	{576,2},	{614,2},	{570,2},
  {792,2},	{725,2},	{615,2},	{652,2},
  {798,2}
};

static struct patval fuseki132482[] = {
  {576,1},	{570,1},	{718,1},	{792,1},
  {684,1},	{798,1},	{717,2}
};

static struct patval fuseki132483[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {724,1},	{798,1},	{725,2}
};

static struct patval fuseki132484[] = {
  {576,1},	{570,1},	{718,1},	{792,1},
  {684,1},	{798,1},	{717,2}
};

static struct patval fuseki132485[] = {
  {719,1},	{576,1},	{754,1},	{792,1},
  {570,1},	{755,1},	{718,1},	{798,1},
  {681,2},	{753,2},	{717,2},	{791,2}
};

static struct patval fuseki132486[] = {
  {606,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{680,2}
};

static struct patval fuseki132487[] = {
  {606,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{680,2}
};

static struct patval fuseki132488[] = {
  {606,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{680,2}
};

static struct patval fuseki132489[] = {
  {606,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{680,2}
};

static struct patval fuseki132490[] = {
  {570,1},	{792,1},	{652,1},	{576,1},
  {725,1},	{798,1},	{614,1},	{651,2},
  {650,2},	{537,2}
};

static struct patval fuseki132491[] = {
  {679,1},	{753,1},	{717,1},	{681,1},
  {791,1},	{570,2},	{754,2},	{718,2},
  {755,2},	{792,2},	{719,2},	{576,2},
  {798,2}
};

static struct patval fuseki132492[] = {
  {536,1},	{688,1},	{800,1},	{502,1},
  {795,2},	{570,2},	{576,2},	{798,2},
  {614,2},	{792,2},	{534,2}
};

static struct patval fuseki132493[] = {
  {570,1},	{792,1},	{575,1},	{798,1},
  {576,1},	{539,2}
};

static struct patval fuseki132494[] = {
  {539,1},	{538,1},	{792,2},	{575,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132495[] = {
  {537,1},	{792,2},	{570,2},	{576,2}
};

static struct patval fuseki132496[] = {
  {532,1},	{569,1},	{607,1},	{496,1},
  {643,2},	{533,2},	{570,2},	{606,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132497[] = {
  {570,1},	{644,1},	{792,1},	{534,1},
  {798,1},	{650,1},	{576,1},	{538,1},
  {574,2},	{537,2},	{572,2},	{535,2}
};

static struct patval fuseki132498[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{724,1},	{576,1},	{834,1},
  {833,2},	{796,2},	{831,2},	{794,2}
};

static struct patval fuseki132499[] = {
  {651,1},	{537,1},	{792,2},	{576,2},
  {570,2},	{799,2}
};

static struct patval fuseki132500[] = {
  {570,1},	{792,1},	{798,1},	{574,1},
  {539,1},	{576,1},	{725,1},	{577,1},
  {540,2},	{651,2},	{537,2},	{578,2}
};

static struct patval fuseki132501[] = {
  {651,1},	{687,1},	{537,1},	{612,1},
  {613,1},	{576,2},	{649,2},	{650,2},
  {792,2},	{798,2},	{570,2},	{688,2},
  {725,2}
};

static struct patval fuseki132502[] = {
  {651,1},	{687,1},	{537,1},	{612,1},
  {613,1},	{576,2},	{649,2},	{650,2},
  {792,2},	{798,2},	{570,2},	{688,2},
  {725,2}
};

static struct patval fuseki132503[] = {
  {570,1},	{792,1},	{725,1},	{649,1},
  {576,1},	{688,1},	{650,1},	{798,1},
  {687,2},	{651,2},	{613,2},	{537,2}
};

static struct patval fuseki132504[] = {
  {796,1},	{833,1},	{831,1},	{794,1},
  {830,2},	{792,2},	{570,2},	{718,2},
  {834,2},	{576,2},	{798,2}
};

static struct patval fuseki132505[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {798,2}
};

static struct patval fuseki132506[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {798,2}
};

static struct patval fuseki132507[] = {
  {755,1},	{756,1},	{791,1},	{828,1},
  {570,2},	{717,2},	{792,2},	{829,2},
  {754,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132508[] = {
  {532,1},	{569,1},	{607,1},	{608,1},
  {533,2},	{570,2},	{606,2},	{792,2},
  {643,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132509[] = {
  {540,1},	{828,1},	{791,2},	{681,2},
  {792,2},	{573,2},	{684,2},	{795,2},
  {576,2},	{687,2},	{798,2},	{570,2}
};

static struct patval fuseki132510[] = {
  {570,1},	{792,1},	{799,1},	{576,1},
  {537,2}
};

static struct patval fuseki132511[] = {
  {651,1},	{540,1},	{537,1},	{574,2},
  {576,2},	{798,2},	{792,2},	{570,2},
  {725,2}
};

static struct patval fuseki132512[] = {
  {790,1},	{717,1},	{570,2},	{681,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132513[] = {
  {790,1},	{717,1},	{570,2},	{681,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132514[] = {
  {651,1},	{578,1},	{576,2},	{687,2},
  {798,2},	{570,2},	{792,2}
};

static struct patval fuseki132515[] = {
  {790,1},	{717,1},	{570,2},	{681,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132516[] = {
  {570,1},	{792,1},	{832,1},	{833,1},
  {798,1},	{834,1},	{799,1},	{576,1},
  {870,2},	{835,2},	{871,2},	{836,2}
};

static struct patval fuseki132517[] = {
  {570,1},	{792,1},	{536,1},	{576,1},
  {537,1},	{798,1},	{538,1},	{577,1},
  {500,2},	{501,2},	{540,2},	{539,2}
};

static struct patval fuseki132518[] = {
  {791,1},	{576,1},	{570,1},	{792,1},
  {798,1},	{830,1},	{832,1},	{831,1},
  {868,2},	{867,2},	{828,2},	{829,2}
};

static struct patval fuseki132519[] = {
  {651,1},	{578,1},	{537,1},	{540,1},
  {792,2},	{798,2},	{574,2},	{577,2},
  {570,2},	{725,2},	{576,2}
};

static struct patval fuseki132520[] = {
  {570,1},	{792,1},	{799,1},	{612,1},
  {576,1},	{651,2},	{537,2}
};

static struct patval fuseki132521[] = {
  {532,1},	{540,1},	{828,1},	{570,2},
  {681,2},	{791,2},	{573,2},	{684,2},
  {795,2},	{539,2},	{576,2},	{687,2},
  {798,2},	{792,2}
};

static struct patval fuseki132522[] = {
  {532,1},	{540,1},	{828,1},	{570,2},
  {681,2},	{791,2},	{573,2},	{684,2},
  {795,2},	{539,2},	{576,2},	{687,2},
  {798,2},	{792,2}
};

static struct patval fuseki132523[] = {
  {570,1},	{792,1},	{831,1},	{576,1},
  {836,2}
};

static struct patval fuseki132524[] = {
  {570,1},	{792,1},	{576,1},	{651,1},
  {836,2}
};

static struct patval fuseki132525[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {687,1},	{798,1},	{651,2}
};

static struct patval fuseki132526[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {687,1},	{798,1},	{651,2}
};

static struct patval fuseki132527[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {798,1},	{576,1},	{537,2}
};

static struct patval fuseki132528[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {687,1},	{798,1},	{725,2}
};

static struct patval fuseki132529[] = {
  {790,1},	{717,1},	{643,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132530[] = {
  {790,1},	{717,1},	{643,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132531[] = {
  {790,1},	{717,1},	{643,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132532[] = {
  {569,1},	{792,1},	{576,1},	{537,1},
  {534,2},	{798,2}
};

static struct patval fuseki132533[] = {
  {569,1},	{792,1},	{576,1},	{537,1},
  {534,2},	{798,2}
};

static struct patval fuseki132534[] = {
  {569,1},	{792,1},	{576,1},	{537,1},
  {534,2},	{798,2}
};

static struct patval fuseki132535[] = {
  {576,1},	{754,1},	{570,1},	{798,1},
  {792,1},	{794,1},	{684,1},	{717,2},
  {718,2}
};

static struct patval fuseki132536[] = {
  {576,1},	{754,1},	{570,1},	{798,1},
  {792,1},	{794,1},	{684,1},	{717,2},
  {718,2}
};

static struct patval fuseki132537[] = {
  {576,1},	{754,1},	{570,1},	{798,1},
  {792,1},	{794,1},	{684,1},	{717,2},
  {718,2}
};

static struct patval fuseki132538[] = {
  {797,1},	{792,2},	{576,2}
};

static struct patval fuseki132539[] = {
  {761,1},	{576,2},	{792,2}
};

static struct patval fuseki132540[] = {
  {797,1},	{792,2},	{576,2}
};

static struct patval fuseki132541[] = {
  {761,1},	{576,2},	{792,2}
};

static struct patval fuseki132542[] = {
  {570,1},	{792,1},	{725,1},	{574,1},
  {576,1},	{798,1},	{577,1},	{540,2},
  {651,2},	{537,2}
};

static struct patval fuseki132543[] = {
  {724,1},	{651,1},	{649,2},	{576,2},
  {570,2},	{798,2},	{792,2}
};

static struct patval fuseki132544[] = {
  {684,1},	{576,1},	{606,1},	{643,1},
  {498,1},	{533,1},	{570,1},	{798,1},
  {792,1},	{496,2},	{532,2},	{569,2},
  {607,2}
};

static struct patval fuseki132545[] = {
  {684,1},	{576,1},	{606,1},	{643,1},
  {498,1},	{533,1},	{570,1},	{798,1},
  {792,1},	{496,2},	{532,2},	{569,2},
  {607,2}
};

static struct patval fuseki132546[] = {
  {569,1},	{798,1},	{570,1},	{792,1},
  {576,1},	{606,2}
};

static struct patval fuseki132547[] = {
  {570,1},	{792,1},	{835,1},	{576,1},
  {798,1},	{834,2}
};

static struct patval fuseki132548[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {799,1},	{762,2}
};

static struct patval fuseki132549[] = {
  {570,1},	{792,1},	{577,1},	{612,1},
  {576,1},	{799,1},	{537,2},	{651,2},
  {540,2}
};

static struct patval fuseki132550[] = {
  {570,1},	{792,1},	{577,1},	{612,1},
  {576,1},	{799,1},	{537,2},	{651,2},
  {540,2}
};

static struct patval fuseki132551[] = {
  {651,1},	{613,1},	{537,1},	{687,1},
  {792,2},	{650,2},	{576,2},	{798,2},
  {570,2},	{688,2},	{725,2}
};

static struct patval fuseki132552[] = {
  {651,1},	{687,1},	{537,1},	{576,2},
  {650,2},	{792,2},	{798,2},	{570,2},
  {725,2}
};

static struct patval fuseki132553[] = {
  {791,1},	{798,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{795,1},
  {539,1},	{576,1},	{687,1},	{828,2},
  {540,2}
};

static struct patval fuseki132554[] = {
  {651,1},	{540,1},	{537,1},	{612,2},
  {576,2},	{792,2},	{570,2},	{799,2}
};

static struct patval fuseki132555[] = {
  {570,1},	{792,1},	{725,1},	{576,1},
  {650,1},	{688,1},	{798,1},	{651,2},
  {687,2},	{537,2}
};

static struct patval fuseki132556[] = {
  {643,1},	{798,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132557[] = {
  {643,1},	{798,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132558[] = {
  {570,1},	{833,1},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132559[] = {
  {651,1},	{570,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{798,2},	{792,2}
};

static struct patval fuseki132560[] = {
  {717,1},	{570,2},	{792,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{798,2}
};

static struct patval fuseki132561[] = {
  {651,1},	{570,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{798,2},	{792,2}
};

static struct patval fuseki132562[] = {
  {540,1},	{504,1},	{537,1},	{578,1},
  {651,1},	{574,2},	{798,2},	{570,2},
  {577,2},	{539,2},	{725,2},	{792,2},
  {576,2}
};

static struct patval fuseki132563[] = {
  {687,1},	{577,1},	{539,1},	{796,2},
  {576,2},	{570,2},	{798,2},	{540,2},
  {792,2}
};

static struct patval fuseki132564[] = {
  {573,1},	{569,1},	{533,1},	{570,2},
  {792,2},	{532,2},	{576,2},	{650,2},
  {798,2}
};

static struct patval fuseki132565[] = {
  {570,1},	{792,1},	{722,1},	{649,1},
  {576,1},	{798,1},	{724,2},	{651,2}
};

static struct patval fuseki132566[] = {
  {570,1},	{792,1},	{722,1},	{649,1},
  {576,1},	{798,1},	{724,2},	{651,2}
};

static struct patval fuseki132567[] = {
  {570,1},	{792,1},	{574,1},	{798,1},
  {575,1},	{576,1},	{539,2},	{538,2}
};

static struct patval fuseki132568[] = {
  {570,1},	{792,1},	{796,1},	{797,1},
  {798,1},	{576,1},	{834,2},	{835,2}
};

static struct patval fuseki132569[] = {
  {684,1},	{792,2},	{576,2}
};

static struct patval fuseki132570[] = {
  {684,1},	{792,2},	{576,2}
};

static struct patval fuseki132571[] = {
  {684,1},	{792,2},	{576,2}
};

static struct patval fuseki132572[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {687,1},	{537,2}
};

static struct patval fuseki132573[] = {
  {570,1},	{792,1},	{795,1},	{576,1},
  {798,1},	{725,2}
};

static struct patval fuseki132574[] = {
  {576,1},	{570,1},	{792,1},	{795,1},
  {798,1},	{717,2}
};

static struct patval fuseki132575[] = {
  {532,1},	{570,2},	{792,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{798,2}
};

static struct patval fuseki132576[] = {
  {828,1},	{570,2},	{792,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{798,2}
};

static struct patval fuseki132577[] = {
  {532,1},	{570,2},	{792,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{798,2}
};

static struct patval fuseki132578[] = {
  {836,1},	{570,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{798,2},	{792,2}
};

static struct patval fuseki132579[] = {
  {570,1},	{792,1},	{576,1},	{762,1},
  {835,2}
};

static struct patval fuseki132580[] = {
  {570,1},	{792,1},	{576,1},	{762,1},
  {835,2}
};

static struct patval fuseki132581[] = {
  {570,1},	{792,1},	{576,1},	{762,1},
  {835,2}
};

static struct patval fuseki132582[] = {
  {570,1},	{792,1},	{576,1},	{762,1},
  {835,2}
};

static struct patval fuseki132583[] = {
  {799,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132584[] = {
  {791,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132585[] = {
  {835,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132586[] = {
  {791,1},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132587[] = {
  {831,1},	{798,1},	{794,1},	{830,2},
  {570,2},	{576,2},	{792,2}
};

static struct patval fuseki132588[] = {
  {831,1},	{798,1},	{794,1},	{830,2},
  {570,2},	{576,2},	{792,2}
};

static struct patval fuseki132589[] = {
  {798,1},	{651,1},	{650,1},	{576,2},
  {570,2},	{614,2},	{792,2}
};

static struct patval fuseki132590[] = {
  {757,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132591[] = {
  {649,1},	{792,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132592[] = {
  {717,1},	{535,1},	{792,2},	{570,2},
  {794,2},	{576,2},	{798,2}
};

static struct patval fuseki132593[] = {
  {717,1},	{535,1},	{792,2},	{570,2},
  {794,2},	{576,2},	{798,2}
};

static struct patval fuseki132594[] = {
  {798,1},	{688,1},	{833,2},	{576,2},
  {570,2},	{792,2}
};

static struct patval fuseki132595[] = {
  {870,1},	{836,1},	{684,2},	{570,2},
  {576,2},	{798,2},	{799,2},	{792,2}
};

static struct patval fuseki132596[] = {
  {570,1},	{792,1},	{797,1},	{576,1},
  {798,1},	{799,1},	{835,2},	{836,2}
};

static struct patval fuseki132597[] = {
  {570,1},	{792,1},	{797,1},	{576,1},
  {798,1},	{799,1},	{835,2},	{836,2}
};

static struct patval fuseki132598[] = {
  {576,1},	{570,1},	{792,1},	{536,1},
  {798,1},	{643,2}
};

static struct patval fuseki132599[] = {
  {576,1},	{570,1},	{792,1},	{536,1},
  {798,1},	{643,2}
};

static struct patval fuseki132600[] = {
  {570,1},	{792,1},	{832,1},	{576,1},
  {798,1},	{725,2}
};

static struct patval fuseki132601[] = {
  {799,1},	{836,1},	{576,2},	{798,2},
  {570,2},	{792,2}
};

static struct patval fuseki132602[] = {
  {835,1},	{836,1},	{576,2},	{798,2},
  {570,2},	{792,2}
};

static struct patval fuseki132603[] = {
  {835,1},	{836,1},	{576,2},	{798,2},
  {570,2},	{792,2}
};

static struct patval fuseki132604[] = {
  {614,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132605[] = {
  {614,1},	{570,2},	{684,2},	{576,2},
  {798,2},	{792,2}
};

static struct patval fuseki132606[] = {
  {577,1},	{687,1},	{578,1},	{539,1},
  {576,2},	{792,2},	{798,2},	{540,2},
  {570,2},	{614,2},	{796,2}
};

static struct patval fuseki132607[] = {
  {576,1},	{792,1},	{834,1},	{570,2}
};

static struct patval fuseki132608[] = {
  {606,1},	{835,1},	{792,2},	{576,2},
  {533,2}
};

static struct patval fuseki132609[] = {
  {606,1},	{835,1},	{792,2},	{576,2},
  {533,2}
};

static struct patval fuseki132610[] = {
  {799,1},	{534,1},	{792,2},	{576,2},
  {569,2}
};

static struct patval fuseki132611[] = {
  {792,1},	{576,1},	{798,1},	{836,2}
};

static struct patval fuseki132612[] = {
  {576,1},	{570,1},	{792,1},	{532,2}
};

static struct patval fuseki132613[] = {
  {576,1},	{570,1},	{792,1},	{532,2}
};

static struct patval fuseki132614[] = {
  {723,1},	{725,1},	{570,2},	{576,2},
  {798,2},	{651,2},	{792,2}
};

static struct patval fuseki132615[] = {
  {831,1},	{757,1},	{792,2},	{570,2},
  {833,2},	{576,2},	{798,2}
};

static struct patval fuseki132616[] = {
  {795,1},	{569,1},	{687,1},	{570,1},
  {681,1},	{792,1},	{798,1},	{534,1},
  {498,1},	{573,1},	{684,1},	{576,1},
  {532,2},	{533,2},	{497,2}
};

static struct patval fuseki132617[] = {
  {795,1},	{642,1},	{687,1},	{798,1},
  {606,1},	{533,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{576,1},
  {605,2},	{532,2},	{569,2}
};

static struct patval fuseki132618[] = {
  {539,1},	{651,1},	{537,1},	{540,1},
  {570,2},	{650,2},	{798,2},	{576,2},
  {614,2},	{792,2},	{725,2}
};

static struct patval fuseki132619[] = {
  {831,1},	{795,1},	{830,1},	{757,2},
  {794,2},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132620[] = {
  {795,1},	{725,1},	{792,2},	{570,2},
  {576,2},	{798,2},	{718,2}
};

static struct patval fuseki132621[] = {
  {687,1},	{833,1},	{574,2},	{792,2},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki132622[] = {
  {795,1},	{725,1},	{792,2},	{570,2},
  {576,2},	{798,2},	{718,2}
};

static struct patval fuseki132623[] = {
  {538,1},	{539,1},	{537,1},	{574,2},
  {570,2},	{575,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132624[] = {
  {537,1},	{574,1},	{651,1},	{499,1},
  {650,1},	{500,2},	{570,2},	{792,2},
  {538,2},	{576,2},	{684,2},	{798,2},
  {614,2},	{535,2}
};

static struct patval fuseki132625[] = {
  {717,1},	{572,1},	{718,1},	{570,2},
  {792,2},	{754,2},	{794,2},	{576,2},
  {798,2}
};

static struct patval fuseki132626[] = {
  {532,1},	{497,1},	{533,1},	{569,2},
  {681,2},	{792,2},	{570,2},	{534,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132627[] = {
  {680,1},	{570,1},	{792,1},	{576,1},
  {798,2}
};

static struct patval fuseki132628[] = {
  {570,1},	{792,1},	{536,1},	{576,1},
  {798,2}
};

static struct patval fuseki132629[] = {
  {794,1},	{754,1},	{570,1},	{644,1},
  {798,1},	{792,1},	{576,1},	{717,2},
  {572,2},	{718,2}
};

static struct patval fuseki132630[] = {
  {570,1},	{650,1},	{792,1},	{572,1},
  {798,1},	{576,1},	{538,1},	{574,2},
  {644,2},	{537,2}
};

static struct patval fuseki132631[] = {
  {570,1},	{792,1},	{535,1},	{684,1},
  {500,1},	{798,1},	{614,1},	{538,1},
  {576,1},	{650,2},	{537,2},	{574,2},
  {651,2}
};

static struct patval fuseki132632[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {761,2}
};

static struct patval fuseki132633[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {761,2}
};

static struct patval fuseki132634[] = {
  {799,1},	{792,1},	{576,1},	{532,2}
};

static struct patval fuseki132635[] = {
  {533,1},	{792,1},	{576,1},	{836,2}
};

static struct patval fuseki132636[] = {
  {569,1},	{792,1},	{576,1},	{836,2}
};

static struct patval fuseki132637[] = {
  {717,1},	{754,1},	{798,1},	{684,1},
  {570,1},	{794,1},	{792,1},	{829,1},
  {576,1},	{755,2},	{828,2},	{756,2},
  {791,2}
};

static struct patval fuseki132638[] = {
  {532,1},	{569,1},	{496,1},	{534,1},
  {607,1},	{606,2},	{570,2},	{533,2},
  {792,2},	{643,2},	{498,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132639[] = {
  {576,1},	{791,1},	{798,1},	{533,1},
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{539,1},	{687,1},
  {532,2},	{828,2},	{540,2}
};

static struct patval fuseki132640[] = {
  {798,1},	{533,1},	{570,1},	{681,1},
  {792,1},	{573,1},	{684,1},	{795,1},
  {539,1},	{576,1},	{687,1},	{799,1},
  {540,2},	{532,2},	{836,2}
};

static struct patval fuseki132641[] = {
  {576,1},	{791,1},	{798,1},	{533,1},
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{539,1},	{687,1},
  {532,2},	{828,2},	{540,2}
};

static struct patval fuseki132642[] = {
  {570,1},	{792,1},	{535,1},	{798,1},
  {725,1},	{576,1},	{650,1},	{614,1},
  {540,2},	{537,2},	{651,2},	{539,2}
};

static struct patval fuseki132643[] = {
  {570,1},	{792,1},	{535,1},	{798,1},
  {725,1},	{576,1},	{650,1},	{614,1},
  {540,2},	{537,2},	{651,2},	{539,2}
};

static struct patval fuseki132644[] = {
  {570,1},	{792,1},	{577,1},	{574,1},
  {798,1},	{575,1},	{576,1},	{539,2},
  {538,2},	{537,2}
};

static struct patval fuseki132645[] = {
  {570,1},	{792,1},	{577,1},	{574,1},
  {798,1},	{575,1},	{576,1},	{539,2},
  {538,2},	{537,2}
};

static struct patval fuseki132646[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {795,1},	{576,1},	{687,1},	{798,1}
};

static struct patval fuseki132647[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {795,1},	{576,1},	{687,1},	{798,1}
};

static struct patval fuseki132648[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {795,1},	{576,1},	{687,1},	{798,1}
};

static struct patval fuseki132649[] = {
  {570,1},	{792,1},	{538,1},	{798,1},
  {576,1},	{539,2}
};

static struct patval fuseki132650[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {614,1},	{577,2}
};

static struct patval fuseki132651[] = {
  {570,1},	{792,1},	{867,1},	{798,1},
  {684,1},	{796,1},	{799,1},	{576,1},
  {837,1},	{870,2},	{836,2},	{873,2},
  {831,2}
};

static struct patval fuseki132652[] = {
  {612,1},	{613,1},	{536,1},	{610,2},
  {570,2},	{576,2},	{792,2},	{687,2},
  {798,2}
};

static struct patval fuseki132653[] = {
  {612,1},	{613,1},	{536,1},	{610,2},
  {570,2},	{576,2},	{792,2},	{687,2},
  {798,2}
};

static struct patval fuseki132654[] = {
  {613,1},	{687,1},	{578,1},	{539,1},
  {577,1},	{570,2},	{792,2},	{798,2},
  {540,2},	{576,2},	{614,2},	{541,2},
  {796,2}
};

static struct patval fuseki132655[] = {
  {501,1},	{688,1},	{800,1},	{536,1},
  {502,1},	{570,2},	{795,2},	{576,2},
  {798,2},	{503,2},	{614,2},	{792,2},
  {534,2}
};

static struct patval fuseki132656[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{651,2}
};

static struct patval fuseki132657[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{651,2}
};

static struct patval fuseki132658[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{651,2}
};

static struct patval fuseki132659[] = {
  {570,1},	{792,1},	{684,1},	{614,1},
  {798,1},	{501,1},	{538,1},	{576,1},
  {725,1},	{574,2},	{537,2},	{651,2},
  {650,2}
};

static struct patval fuseki132660[] = {
  {570,1},	{792,1},	{684,1},	{614,1},
  {798,1},	{501,1},	{538,1},	{576,1},
  {725,1},	{574,2},	{537,2},	{651,2},
  {650,2}
};

static struct patval fuseki132661[] = {
  {570,1},	{792,1},	{795,1},	{722,1},
  {649,1},	{798,1},	{576,1},	{724,2},
  {760,2},	{651,2}
};

static struct patval fuseki132662[] = {
  {570,1},	{792,1},	{795,1},	{722,1},
  {649,1},	{798,1},	{576,1},	{724,2},
  {760,2},	{651,2}
};

static struct patval fuseki132663[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{835,1},	{799,1},	{836,2},
  {800,2}
};

static struct patval fuseki132664[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{835,1},	{799,1},	{836,2},
  {800,2}
};

static struct patval fuseki132665[] = {
  {836,1},	{873,1},	{831,1},	{870,1},
  {796,2},	{684,2},	{576,2},	{798,2},
  {799,2},	{570,2},	{792,2},	{837,2}
};

static struct patval fuseki132666[] = {
  {717,1},	{836,1},	{792,2},	{573,2},
  {576,2},	{570,2}
};

static struct patval fuseki132667[] = {
  {717,1},	{836,1},	{792,2},	{573,2},
  {576,2},	{570,2}
};

static struct patval fuseki132668[] = {
  {717,1},	{836,1},	{792,2},	{573,2},
  {576,2},	{570,2}
};

static struct patval fuseki132669[] = {
  {798,1},	{794,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132670[] = {
  {798,1},	{794,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132671[] = {
  {798,1},	{794,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132672[] = {
  {687,1},	{799,1},	{574,2},	{576,2},
  {570,2},	{798,2},	{792,2}
};

static struct patval fuseki132673[] = {
  {533,1},	{573,1},	{792,2},	{570,2},
  {576,2},	{650,2},	{798,2}
};

static struct patval fuseki132674[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {836,2}
};

static struct patval fuseki132675[] = {
  {576,1},	{569,1},	{798,1},	{570,1},
  {681,1},	{792,1},	{534,1},	{573,1},
  {684,1},	{795,1},	{687,1},	{532,2},
  {533,2}
};

static struct patval fuseki132676[] = {
  {570,1},	{792,1},	{796,1},	{540,1},
  {576,1},	{614,1},	{798,1},	{539,2},
  {577,2},	{687,2}
};

static struct patval fuseki132677[] = {
  {570,1},	{792,1},	{578,1},	{574,1},
  {798,1},	{575,1},	{577,1},	{576,1},
  {538,2},	{540,2},	{539,2},	{537,2}
};

static struct patval fuseki132678[] = {
  {570,1},	{792,1},	{796,1},	{798,1},
  {797,1},	{799,1},	{576,1},	{800,1},
  {835,2},	{834,2},	{836,2},	{833,2}
};

static struct patval fuseki132679[] = {
  {570,1},	{792,1},	{578,1},	{574,1},
  {798,1},	{575,1},	{577,1},	{576,1},
  {538,2},	{540,2},	{539,2},	{537,2}
};

static struct patval fuseki132680[] = {
  {612,1},	{536,1},	{792,2},	{610,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132681[] = {
  {570,1},	{792,1},	{687,1},	{610,1},
  {798,1},	{576,1},	{536,2},	{612,2}
};

static struct patval fuseki132682[] = {
  {532,1},	{533,1},	{569,2},	{570,2},
  {681,2},	{792,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{687,2},	{798,2}
};

static struct patval fuseki132683[] = {
  {798,1},	{651,1},	{833,2},	{576,2},
  {570,2},	{792,2}
};

static struct patval fuseki132684[] = {
  {570,1},	{792,1},	{536,1},	{576,1},
  {835,2}
};

static struct patval fuseki132685[] = {
  {680,1},	{570,1},	{792,1},	{576,1},
  {799,2}
};

static struct patval fuseki132686[] = {
  {836,1},	{800,1},	{684,2},	{576,2},
  {798,2},	{799,2},	{570,2},	{792,2}
};

static struct patval fuseki132687[] = {
  {836,1},	{873,1},	{870,1},	{684,2},
  {576,2},	{798,2},	{799,2},	{570,2},
  {792,2},	{837,2}
};

static struct patval fuseki132688[] = {
  {532,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132689[] = {
  {836,1},	{792,1},	{576,1},	{570,2}
};

static struct patval fuseki132690[] = {
  {532,1},	{792,1},	{576,1},	{798,2}
};

static struct patval fuseki132691[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {836,2}
};

static struct patval fuseki132692[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {836,2}
};

static struct patval fuseki132693[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {836,2}
};

static struct patval fuseki132694[] = {
  {570,1},	{792,1},	{831,1},	{576,1},
  {798,2}
};

static struct patval fuseki132695[] = {
  {570,1},	{792,1},	{831,1},	{576,1},
  {798,2}
};

static struct patval fuseki132696[] = {
  {717,1},	{651,1},	{792,2},	{537,2},
  {576,2},	{798,2},	{570,2}
};

static struct patval fuseki132697[] = {
  {537,1},	{831,1},	{792,2},	{570,2},
  {717,2},	{576,2},	{798,2}
};

static struct patval fuseki132698[] = {
  {570,1},	{792,1},	{829,1},	{576,1},
  {757,1},	{794,1},	{798,1},	{795,2},
  {830,2},	{831,2}
};

static struct patval fuseki132699[] = {
  {570,1},	{792,1},	{723,1},	{576,1},
  {799,1},	{724,1},	{798,1},	{725,2},
  {762,2},	{687,2}
};

static struct patval fuseki132700[] = {
  {570,1},	{792,1},	{829,1},	{576,1},
  {757,1},	{794,1},	{798,1},	{795,2},
  {830,2},	{831,2}
};

static struct patval fuseki132701[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{688,2}
};

static struct patval fuseki132702[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{688,2}
};

static struct patval fuseki132703[] = {
  {570,1},	{792,1},	{573,1},	{833,1},
  {576,1},	{798,2},	{688,2}
};

static struct patval fuseki132704[] = {
  {570,1},	{792,1},	{725,1},	{576,1},
  {650,1},	{798,1},	{614,1},	{540,2},
  {651,2},	{537,2}
};

static struct patval fuseki132705[] = {
  {792,1},	{833,1},	{576,1},	{798,2}
};

static struct patval fuseki132706[] = {
  {792,1},	{576,1},	{725,1},	{798,2}
};

static struct patval fuseki132707[] = {
  {570,1},	{792,1},	{684,1},	{649,1},
  {576,1},	{798,1},	{650,2}
};

static struct patval fuseki132708[] = {
  {570,1},	{798,1},	{792,1},	{645,1},
  {684,1},	{576,1},	{644,2}
};

static struct patval fuseki132709[] = {
  {760,1},	{651,1},	{724,1},	{649,2},
  {570,2},	{576,2},	{722,2},	{798,2},
  {792,2}
};

static struct patval fuseki132710[] = {
  {570,1},	{792,1},	{684,1},	{837,1},
  {576,1},	{798,1},	{799,1},	{836,2},
  {870,2}
};

static struct patval fuseki132711[] = {
  {570,1},	{792,1},	{796,1},	{541,1},
  {576,1},	{614,1},	{798,1},	{540,1},
  {577,2},	{687,2},	{539,2},	{578,2}
};

static struct patval fuseki132712[] = {
  {828,1},	{873,1},	{831,1},	{836,1},
  {870,1},	{792,2},	{796,2},	{684,2},
  {576,2},	{798,2},	{799,2},	{867,2},
  {570,2},	{837,2}
};

static struct patval fuseki132713[] = {
  {687,1},	{795,1},	{792,2},	{574,2},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki132714[] = {
  {570,1},	{792,1},	{684,1},	{796,1},
  {837,1},	{576,1},	{798,1},	{799,1},
  {836,2},	{873,2},	{870,2}
};

static struct patval fuseki132715[] = {
  {570,1},	{651,1},	{576,2},	{835,2},
  {792,2}
};

static struct patval fuseki132716[] = {
  {798,1},	{537,1},	{792,2},	{576,2},
  {569,2}
};

static struct patval fuseki132717[] = {
  {570,1},	{831,1},	{792,2},	{576,2},
  {799,2}
};

static struct patval fuseki132718[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {574,1},	{576,1},	{687,2},	{795,2}
};

static struct patval fuseki132719[] = {
  {570,1},	{798,1},	{792,1},	{572,1},
  {724,1},	{576,1},	{795,2},	{681,2}
};

static struct patval fuseki132720[] = {
  {570,1},	{644,1},	{792,1},	{798,1},
  {796,1},	{576,1},	{687,2},	{573,2}
};

static struct patval fuseki132721[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2},	{688,2}
};

static struct patval fuseki132722[] = {
  {798,1},	{831,1},	{792,2},	{576,2},
  {570,2},	{688,2}
};

static struct patval fuseki132723[] = {
  {570,1},	{792,1},	{576,1},	{762,2}
};

static struct patval fuseki132724[] = {
  {570,1},	{792,1},	{576,1},	{762,2}
};

static struct patval fuseki132725[] = {
  {570,1},	{792,1},	{576,1},	{834,2}
};

static struct patval fuseki132726[] = {
  {756,1},	{793,1},	{791,1},	{828,1},
  {755,1},	{570,2},	{792,2},	{829,2},
  {717,2},	{754,2},	{794,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132727[] = {
  {539,1},	{540,1},	{537,1},	{538,1},
  {574,2},	{575,2},	{570,2},	{576,2},
  {798,2},	{792,2},	{577,2}
};

static struct patval fuseki132728[] = {
  {651,1},	{540,1},	{537,1},	{576,2},
  {650,2},	{798,2},	{792,2},	{570,2},
  {725,2}
};

static struct patval fuseki132729[] = {
  {569,1},	{537,1},	{792,2},	{576,2},
  {836,2}
};

static struct patval fuseki132730[] = {
  {569,1},	{537,1},	{792,2},	{576,2},
  {836,2}
};

static struct patval fuseki132731[] = {
  {651,1},	{835,1},	{576,2},	{792,2},
  {532,2}
};

static struct patval fuseki132732[] = {
  {570,1},	{792,1},	{576,1},	{614,1},
  {798,2},	{651,2}
};

static struct patval fuseki132733[] = {
  {834,1},	{831,1},	{794,1},	{830,2},
  {792,2},	{755,2},	{684,2},	{570,2},
  {576,2},	{798,2}
};

static struct patval fuseki132734[] = {
  {614,1},	{725,1},	{724,1},	{797,2},
  {576,2},	{684,2},	{798,2},	{570,2},
  {792,2},	{762,2}
};

static struct patval fuseki132735[] = {
  {651,1},	{578,1},	{537,2},	{576,2},
  {798,2},	{570,2},	{792,2}
};

static struct patval fuseki132736[] = {
  {831,1},	{866,1},	{792,2},	{570,2},
  {717,2},	{576,2},	{798,2}
};

static struct patval fuseki132737[] = {
  {872,1},	{833,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{725,2}
};

static struct patval fuseki132738[] = {
  {570,1},	{792,1},	{798,1},	{795,1},
  {576,1},	{684,2}
};

static struct patval fuseki132739[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {687,1},	{684,2}
};

static struct patval fuseki132740[] = {
  {570,1},	{792,1},	{798,1},	{795,1},
  {576,1},	{684,2}
};

static struct patval fuseki132741[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {684,2}
};

static struct patval fuseki132742[] = {
  {570,1},	{792,1},	{798,1},	{576,1},
  {684,2}
};

static struct patval fuseki132743[] = {
  {540,1},	{578,1},	{681,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{687,2},
  {798,2},	{570,2},	{577,2},	{792,2}
};

static struct patval fuseki132744[] = {
  {790,1},	{828,1},	{791,2},	{570,2},
  {681,2},	{792,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{687,2},	{798,2}
};

static struct patval fuseki132745[] = {
  {717,1},	{754,1},	{793,1},	{830,1},
  {755,1},	{718,2},	{792,2},	{756,2},
  {791,2},	{570,2},	{794,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132746[] = {
  {570,1},	{792,1},	{578,1},	{576,1},
  {798,1},	{541,1},	{577,1},	{504,2},
  {540,2},	{539,2}
};

static struct patval fuseki132747[] = {
  {570,1},	{792,1},	{578,1},	{576,1},
  {798,1},	{541,1},	{577,1},	{504,2},
  {540,2},	{539,2}
};

static struct patval fuseki132748[] = {
  {756,1},	{792,2},	{570,2},	{573,2},
  {684,2},	{795,2},	{576,2},	{798,2}
};

static struct patval fuseki132749[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{649,1},	{576,1},
  {725,1},	{687,1},	{798,1},	{614,1},
  {651,2},	{688,2},	{650,2}
};

static struct patval fuseki132750[] = {
  {570,1},	{681,1},	{792,1},	{573,1},
  {684,1},	{795,1},	{649,1},	{576,1},
  {725,1},	{687,1},	{798,1},	{614,1},
  {651,2},	{688,2},	{650,2}
};

static struct patval fuseki132751[] = {
  {532,1},	{798,1},	{792,2},	{831,2},
  {576,2},	{570,2}
};

static struct patval fuseki132752[] = {
  {570,1},	{792,1},	{574,1},	{796,1},
  {576,1},	{614,1},	{798,1},	{724,2},
  {650,2},	{651,2}
};

static struct patval fuseki132753[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{724,1},	{576,1},	{796,2},
  {831,2},	{794,2}
};

static struct patval fuseki132754[] = {
  {795,1},	{798,1},	{758,1},	{570,2},
  {796,2},	{833,2},	{576,2},	{792,2}
};

static struct patval fuseki132755[] = {
  {762,1},	{835,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132756[] = {
  {762,1},	{835,1},	{576,2},	{792,2},
  {570,2}
};

static struct patval fuseki132757[] = {
  {795,1},	{569,1},	{687,1},	{798,1},
  {570,1},	{681,1},	{792,1},	{576,1},
  {534,1},	{498,1},	{572,1},	{573,1},
  {684,1},	{532,2},	{497,2},	{496,2},
  {533,2}
};

static struct patval fuseki132758[] = {
  {532,1},	{798,1},	{792,2},	{833,2},
  {576,2},	{570,2}
};

static struct patval fuseki132759[] = {
  {569,1},	{792,1},	{832,1},	{576,1},
  {835,2},	{762,2}
};

static struct patval fuseki132760[] = {
  {533,1},	{792,1},	{688,1},	{576,1},
  {834,2},	{799,2}
};

static struct patval fuseki132761[] = {
  {532,1},	{798,1},	{533,1},	{497,1},
  {792,2},	{570,2},	{534,2},	{576,2},
  {569,2}
};

static struct patval fuseki132762[] = {
  {532,1},	{798,1},	{533,1},	{497,1},
  {792,2},	{570,2},	{534,2},	{576,2},
  {569,2}
};

static struct patval fuseki132763[] = {
  {832,1},	{757,1},	{830,2},	{792,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132764[] = {
  {569,1},	{717,1},	{644,1},	{534,1},
  {792,2},	{755,2},	{759,2},	{576,2},
  {799,2}
};

static struct patval fuseki132765[] = {
  {717,1},	{681,1},	{570,2},	{718,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132766[] = {
  {687,1},	{725,1},	{684,2},	{576,2},
  {570,2},	{724,2},	{798,2},	{792,2}
};

static struct patval fuseki132767[] = {
  {651,1},	{688,1},	{650,1},	{792,2},
  {684,2},	{795,2},	{576,2},	{573,2},
  {687,2},	{798,2},	{614,2},	{570,2},
  {681,2},	{725,2}
};

static struct patval fuseki132768[] = {
  {570,1},	{761,1},	{834,2},	{576,2},
  {792,2}
};

static struct patval fuseki132769[] = {
  {717,1},	{572,1},	{718,1},	{570,2},
  {792,2},	{754,2},	{794,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132770[] = {
  {831,1},	{724,1},	{794,1},	{830,2},
  {792,2},	{570,2},	{684,2},	{576,2},
  {718,2},	{798,2}
};

static struct patval fuseki132771[] = {
  {792,1},	{569,1},	{644,1},	{576,1},
  {570,1},	{607,1},	{606,2},	{532,2},
  {643,2},	{798,2}
};

static struct patval fuseki132772[] = {
  {570,1},	{792,1},	{795,1},	{576,1},
  {836,2}
};

static struct patval fuseki132773[] = {
  {570,1},	{687,1},	{576,2},	{792,2},
  {798,2}
};

static struct patval fuseki132774[] = {
  {798,1},	{681,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132775[] = {
  {717,1},	{570,1},	{792,1},	{831,1},
  {576,1},	{833,2},	{836,2}
};

static struct patval fuseki132776[] = {
  {570,1},	{792,1},	{684,1},	{574,1},
  {576,1},	{798,1},	{687,2}
};

static struct patval fuseki132777[] = {
  {570,1},	{792,1},	{684,1},	{796,1},
  {576,1},	{798,1},	{687,2}
};

static struct patval fuseki132778[] = {
  {643,1},	{574,1},	{792,2},	{572,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132779[] = {
  {614,1},	{651,1},	{537,1},	{612,1},
  {613,1},	{576,2},	{539,2},	{650,2},
  {798,2},	{577,2},	{570,2},	{792,2},
  {725,2}
};

static struct patval fuseki132780[] = {
  {496,1},	{535,1},	{792,2},	{570,2},
  {572,2},	{576,2},	{798,2}
};

static struct patval fuseki132781[] = {
  {570,1},	{792,1},	{795,1},	{576,1},
  {798,1},	{836,2}
};

static struct patval fuseki132782[] = {
  {570,1},	{792,1},	{576,1},	{687,1},
  {798,1},	{540,2}
};

static struct patval fuseki132783[] = {
  {532,1},	{570,2},	{792,2},	{576,2}
};

static struct patval fuseki132784[] = {
  {717,1},	{570,1},	{792,1},	{831,1},
  {651,1},	{576,1},	{833,2},	{537,2},
  {836,2}
};

static struct patval fuseki132785[] = {
  {643,1},	{717,1},	{570,2},	{792,2},
  {831,2},	{576,2},	{798,2}
};

static struct patval fuseki132786[] = {
  {570,1},	{792,1},	{684,1},	{832,1},
  {574,1},	{576,1},	{798,1},	{835,1},
  {873,1},	{651,2},	{799,2},	{836,2},
  {577,2}
};

static struct patval fuseki132787[] = {
  {570,1},	{792,1},	{684,1},	{795,1},
  {576,1},	{798,1},	{725,2}
};

static struct patval fuseki132788[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {576,1},	{798,1},	{651,2}
};

static struct patval fuseki132789[] = {
  {570,1},	{792,1},	{867,1},	{798,1},
  {684,1},	{576,1},	{794,2}
};

static struct patval fuseki132790[] = {
  {570,1},	{792,1},	{867,1},	{798,1},
  {684,1},	{576,1},	{794,2}
};

static struct patval fuseki132791[] = {
  {717,1},	{754,1},	{755,1},	{793,1},
  {718,2},	{791,2},	{792,2},	{756,2},
  {570,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132792[] = {
  {570,1},	{718,1},	{792,1},	{576,1},
  {831,2},	{798,2}
};

static struct patval fuseki132793[] = {
  {753,1},	{828,1},	{791,1},	{754,2},
  {570,2},	{792,2},	{829,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132794[] = {
  {605,1},	{532,1},	{569,1},	{606,2},
  {533,2},	{570,2},	{792,2},	{684,2},
  {576,2},	{798,2}
};

static struct patval fuseki132795[] = {
  {576,1},	{569,1},	{570,1},	{792,1},
  {831,1},	{532,2},	{798,2}
};

static struct patval fuseki132796[] = {
  {687,1},	{792,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{570,2},	{798,2}
};

static struct patval fuseki132797[] = {
  {687,1},	{792,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{570,2},	{798,2}
};

static struct patval fuseki132798[] = {
  {570,1},	{791,1},	{828,1},	{866,1},
  {792,2},	{829,2},	{754,2},	{576,2},
  {835,2}
};

static struct patval fuseki132799[] = {
  {790,1},	{798,1},	{829,1},	{828,1},
  {792,2},	{791,2},	{830,2},	{576,2},
  {569,2}
};

static struct patval fuseki132800[] = {
  {534,1},	{569,1},	{717,1},	{644,1},
  {540,1},	{755,2},	{790,2},	{759,2},
  {576,2},	{792,2},	{799,2}
};

static struct patval fuseki132801[] = {
  {754,1},	{835,1},	{576,1},	{829,1},
  {792,1},	{570,2},	{828,2},	{791,2}
};

static struct patval fuseki132802[] = {
  {795,1},	{798,1},	{570,2},	{833,2},
  {576,2},	{792,2}
};

static struct patval fuseki132803[] = {
  {570,1},	{792,1},	{577,1},	{576,1},
  {798,1},	{725,1},	{651,2},	{574,2}
};

static struct patval fuseki132804[] = {
  {570,1},	{792,1},	{686,1},	{576,1},
  {798,1},	{836,1},	{688,2},	{835,2}
};

static struct patval fuseki132805[] = {
  {570,1},	{792,1},	{686,1},	{576,1},
  {798,1},	{836,1},	{688,2},	{835,2}
};

static struct patval fuseki132806[] = {
  {570,1},	{792,1},	{576,1},	{796,1},
  {612,1},	{798,1},	{687,2},	{574,2}
};

static struct patval fuseki132807[] = {
  {570,1},	{792,1},	{574,1},	{798,1},
  {760,1},	{576,1},	{687,2},	{796,2}
};

static struct patval fuseki132808[] = {
  {532,1},	{496,1},	{798,1},	{535,1},
  {534,1},	{792,2},	{571,2},	{570,2},
  {572,2},	{576,2},	{533,2}
};

static struct patval fuseki132809[] = {
  {568,1},	{532,1},	{798,1},	{606,1},
  {643,1},	{570,2},	{607,2},	{644,2},
  {792,2},	{576,2},	{569,2}
};

static struct patval fuseki132810[] = {
  {569,1},	{792,1},	{576,1},	{608,1},
  {534,2},	{798,2}
};

static struct patval fuseki132811[] = {
  {606,1},	{798,1},	{791,1},	{576,1},
  {570,1},	{792,1},	{684,1},	{828,2},
  {680,2}
};

static struct patval fuseki132812[] = {
  {642,1},	{569,1},	{717,1},	{576,1},
  {792,1},	{537,1},	{831,2},	{534,2},
  {607,2},	{798,2}
};

static struct patval fuseki132813[] = {
  {532,1},	{651,1},	{576,2},	{798,2},
  {792,2}
};

static struct patval fuseki132814[] = {
  {836,1},	{537,1},	{792,2},	{576,2},
  {570,2}
};

static struct patval fuseki132815[] = {
  {798,1},	{760,1},	{758,1},	{795,1},
  {570,2},	{833,2},	{792,2},	{576,2},
  {724,2},	{796,2}
};

static struct patval fuseki132816[] = {
  {570,1},	{792,1},	{684,1},	{574,1},
  {576,1},	{798,1},	{540,1},	{577,2},
  {651,2}
};

static struct patval fuseki132817[] = {
  {570,1},	{792,1},	{684,1},	{574,1},
  {576,1},	{798,1},	{540,1},	{577,2},
  {651,2}
};

static struct patval fuseki132818[] = {
  {576,1},	{792,1},	{723,1},	{834,1},
  {763,1},	{761,2},	{651,2},	{570,2}
};

static struct patval fuseki132819[] = {
  {570,1},	{792,1},	{576,1},	{688,1},
  {799,2}
};

static struct patval fuseki132820[] = {
  {570,1},	{792,1},	{832,1},	{576,1},
  {835,2}
};

static struct patval fuseki132821[] = {
  {798,1},	{796,1},	{800,1},	{831,1},
  {797,1},	{718,2},	{833,2},	{795,2},
  {576,2},	{570,2},	{688,2},	{792,2}
};

static struct patval fuseki132822[] = {
  {570,1},	{792,1},	{799,1},	{576,1},
  {834,2}
};

static struct patval fuseki132823[] = {
  {570,1},	{792,1},	{576,1},	{835,1},
  {762,2}
};

static struct patval fuseki132824[] = {
  {684,1},	{576,1},	{791,1},	{570,1},
  {718,1},	{756,1},	{792,1},	{798,1},
  {755,2},	{754,2},	{717,2}
};

static struct patval fuseki132825[] = {
  {576,1},	{569,1},	{831,1},	{570,1},
  {792,1},	{534,1},	{533,2},	{532,2},
  {798,2}
};

static struct patval fuseki132826[] = {
  {725,1},	{792,1},	{723,1},	{834,1},
  {576,1},	{763,1},	{651,2},	{570,2},
  {762,2},	{761,2}
};

static struct patval fuseki132827[] = {
  {576,1},	{792,1},	{834,1},	{533,2}
};

static struct patval fuseki132828[] = {
  {606,1},	{792,1},	{576,1},	{799,2}
};

static struct patval fuseki132829[] = {
  {651,1},	{574,1},	{792,2},	{576,2},
  {798,2},	{570,2},	{725,2}
};

static struct patval fuseki132830[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {540,1},	{725,1},	{651,2},	{577,2}
};

static struct patval fuseki132831[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {540,1},	{725,1},	{651,2},	{577,2}
};

static struct patval fuseki132832[] = {
  {570,1},	{792,1},	{577,1},	{610,1},
  {798,1},	{576,1},	{687,1},	{613,2},
  {612,2},	{536,2}
};

static struct patval fuseki132833[] = {
  {835,1},	{761,1},	{687,1},	{871,1},
  {797,1},	{649,2},	{576,2},	{574,2},
  {792,2},	{798,2},	{570,2},	{799,2},
  {836,2}
};

static struct patval fuseki132834[] = {
  {836,1},	{651,1},	{874,1},	{577,1},
  {799,1},	{832,2},	{798,2},	{835,2},
  {576,2},	{792,2},	{574,2},	{570,2},
  {873,2},	{684,2}
};

static struct patval fuseki132835[] = {
  {574,1},	{681,1},	{792,2},	{572,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132836[] = {
  {687,1},	{794,1},	{792,2},	{796,2},
  {576,2},	{570,2},	{798,2}
};

static struct patval fuseki132837[] = {
  {577,1},	{614,1},	{540,1},	{576,2},
  {613,2},	{798,2},	{539,2},	{570,2},
  {792,2}
};

static struct patval fuseki132838[] = {
  {834,1},	{836,1},	{835,1},	{570,2},
  {576,2},	{798,2},	{797,2},	{799,2},
  {792,2}
};

static struct patval fuseki132839[] = {
  {532,1},	{540,1},	{539,1},	{576,2},
  {792,2},	{577,2},	{836,2}
};

static struct patval fuseki132840[] = {
  {537,1},	{798,1},	{792,2},	{570,2},
  {576,2},	{681,2}
};

static struct patval fuseki132841[] = {
  {537,1},	{798,1},	{792,2},	{570,2},
  {576,2},	{681,2}
};

static struct patval fuseki132842[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {687,1},	{576,1},	{831,2},	{757,2}
};

static struct patval fuseki132843[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {687,1},	{576,1},	{831,2},	{757,2}
};

static struct patval fuseki132844[] = {
  {570,1},	{792,1},	{651,1},	{537,1},
  {576,1},	{535,2},	{836,2}
};

static struct patval fuseki132845[] = {
  {532,1},	{533,1},	{496,1},	{497,1},
  {569,2},	{681,2},	{792,2},	{570,2},
  {534,2},	{498,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{687,2},	{798,2}
};

static struct patval fuseki132846[] = {
  {536,1},	{570,1},	{792,1},	{576,1},
  {534,1},	{798,1},	{572,1},	{496,2},
  {497,2},	{535,2}
};

static struct patval fuseki132847[] = {
  {649,1},	{651,1},	{534,1},	{571,1},
  {574,1},	{572,2},	{535,2},	{570,2},
  {576,2},	{798,2},	{577,2},	{792,2},
  {725,2}
};

static struct patval fuseki132848[] = {
  {570,1},	{792,1},	{725,1},	{539,1},
  {576,1},	{577,1},	{650,1},	{798,1},
  {613,2},	{614,2},	{651,2},	{537,2}
};

static struct patval fuseki132849[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {796,1},	{576,1},	{794,2},	{725,2}
};

static struct patval fuseki132850[] = {
  {650,1},	{570,1},	{792,1},	{572,1},
  {798,1},	{576,1},	{643,2},	{574,2}
};

static struct patval fuseki132851[] = {
  {576,1},	{792,1},	{570,1},	{607,1},
  {644,1},	{643,2},	{606,2},	{798,2}
};

static struct patval fuseki132852[] = {
  {570,1},	{792,1},	{573,1},	{539,1},
  {576,1},	{798,1},	{540,2},	{577,2}
};

static struct patval fuseki132853[] = {
  {570,1},	{792,1},	{795,1},	{576,1},
  {798,1},	{835,1},	{799,2},	{836,2}
};

static struct patval fuseki132854[] = {
  {828,1},	{570,1},	{792,2},	{576,2},
  {835,2}
};

static struct patval fuseki132855[] = {
  {570,1},	{792,1},	{576,1},	{762,1},
  {836,2}
};

static struct patval fuseki132856[] = {
  {570,1},	{792,1},	{834,1},	{576,1},
  {836,2}
};

static struct patval fuseki132857[] = {
  {570,1},	{792,1},	{684,1},	{725,1},
  {539,1},	{576,1},	{798,1},	{651,2},
  {537,2}
};

static struct patval fuseki132858[] = {
  {570,1},	{792,1},	{684,1},	{725,1},
  {539,1},	{576,1},	{798,1},	{651,2},
  {537,2}
};

static struct patval fuseki132859[] = {
  {504,1},	{540,1},	{539,1},	{576,2},
  {798,2},	{792,2},	{577,2},	{570,2},
  {541,2}
};

static struct patval fuseki132860[] = {
  {792,1},	{797,1},	{576,1},	{799,2}
};

static struct patval fuseki132861[] = {
  {792,1},	{797,1},	{576,1},	{799,2}
};

static struct patval fuseki132862[] = {
  {650,1},	{651,1},	{540,1},	{537,1},
  {574,1},	{501,2},	{538,2},	{576,2},
  {570,2},	{798,2},	{684,2},	{614,2},
  {792,2},	{725,2}
};

static struct patval fuseki132863[] = {
  {613,1},	{612,1},	{536,1},	{614,1},
  {792,2},	{576,2},	{610,2},	{687,2},
  {798,2},	{577,2},	{570,2}
};

static struct patval fuseki132864[] = {
  {828,1},	{680,1},	{606,2},	{570,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132865[] = {
  {790,1},	{828,1},	{791,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132866[] = {
  {643,1},	{724,1},	{651,1},	{760,1},
  {570,2},	{649,2},	{795,2},	{576,2},
  {722,2},	{798,2},	{792,2}
};

static struct patval fuseki132867[] = {
  {688,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132868[] = {
  {688,1},	{570,2},	{573,2},	{795,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132869[] = {
  {532,1},	{798,1},	{533,1},	{570,2},
  {792,2},	{576,2},	{569,2}
};

static struct patval fuseki132870[] = {
  {754,1},	{570,1},	{792,1},	{831,1},
  {576,1},	{798,1},	{577,2},	{614,2}
};

static struct patval fuseki132871[] = {
  {831,1},	{833,1},	{866,1},	{792,2},
  {718,2},	{828,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132872[] = {
  {831,1},	{833,1},	{866,1},	{792,2},
  {718,2},	{828,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132873[] = {
  {831,1},	{798,1},	{829,1},	{792,2},
  {570,2},	{576,2},	{718,2}
};

static struct patval fuseki132874[] = {
  {570,1},	{792,1},	{830,1},	{798,1},
  {576,1},	{833,1},	{831,2},	{794,2}
};

static struct patval fuseki132875[] = {
  {643,1},	{798,1},	{754,1},	{570,1},
  {576,1},	{792,1},	{718,2},	{717,2}
};

static struct patval fuseki132876[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {576,1},	{757,2}
};

static struct patval fuseki132877[] = {
  {688,1},	{569,1},	{836,1},	{607,1},
  {835,1},	{686,2},	{576,2},	{798,2},
  {792,2},	{614,2},	{532,2},	{762,2},
  {570,2}
};

static struct patval fuseki132878[] = {
  {537,1},	{836,1},	{833,1},	{831,2},
  {717,2},	{792,2},	{576,2},	{570,2}
};

static struct patval fuseki132879[] = {
  {688,1},	{799,1},	{686,2},	{576,2},
  {798,2},	{570,2},	{792,2}
};

static struct patval fuseki132880[] = {
  {832,1},	{835,1},	{758,2},	{570,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132881[] = {
  {570,1},	{792,1},	{576,1},	{612,1},
  {539,1},	{577,1},	{799,1},	{537,2},
  {651,2},	{540,2},	{578,2}
};

static struct patval fuseki132882[] = {
  {717,1},	{535,1},	{573,1},	{534,1},
  {570,2},	{572,2},	{609,2},	{794,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132883[] = {
  {577,1},	{651,1},	{799,1},	{832,2},
  {574,2},	{576,2},	{798,2},	{570,2},
  {792,2},	{684,2}
};

static struct patval fuseki132884[] = {
  {605,1},	{606,1},	{569,2},	{570,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132885[] = {
  {606,1},	{799,1},	{792,2},	{576,2},
  {533,2}
};

static struct patval fuseki132886[] = {
  {569,1},	{762,1},	{576,2},	{835,2},
  {792,2}
};

static struct patval fuseki132887[] = {
  {651,1},	{798,1},	{576,2},	{833,2},
  {792,2}
};

static struct patval fuseki132888[] = {
  {651,1},	{798,1},	{576,2},	{833,2},
  {792,2}
};

static struct patval fuseki132889[] = {
  {643,1},	{798,1},	{570,1},	{792,1},
  {573,1},	{795,1},	{576,1},	{717,2}
};

static struct patval fuseki132890[] = {
  {570,1},	{792,1},	{573,1},	{795,1},
  {576,1},	{798,1},	{725,1},	{651,2}
};

static struct patval fuseki132891[] = {
  {570,1},	{718,1},	{792,1},	{688,1},
  {833,1},	{576,1},	{798,2},	{831,2},
  {800,2}
};

static struct patval fuseki132892[] = {
  {570,1},	{792,1},	{539,1},	{576,1},
  {798,1},	{577,2}
};

static struct patval fuseki132893[] = {
  {570,1},	{762,1},	{761,1},	{651,1},
  {724,1},	{576,2},	{723,2},	{834,2},
  {725,2},	{792,2},	{763,2}
};

static struct patval fuseki132894[] = {
  {570,1},	{792,1},	{576,1},	{866,1},
  {798,1},	{684,1},	{833,1},	{829,2},
  {831,2}
};

static struct patval fuseki132895[] = {
  {576,1},	{792,1},	{723,1},	{834,1},
  {570,2},	{761,2}
};

static struct patval fuseki132896[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{763,1},	{725,2}
};

static struct patval fuseki132897[] = {
  {753,1},	{798,1},	{570,1},	{792,1},
  {684,1},	{576,1},	{717,2}
};

static struct patval fuseki132898[] = {
  {609,1},	{570,1},	{792,1},	{576,1},
  {572,1},	{798,1},	{794,1},	{573,2},
  {535,2},	{717,2}
};

static struct patval fuseki132899[] = {
  {828,1},	{831,1},	{829,1},	{792,2},
  {866,2},	{570,2},	{684,2},	{833,2},
  {576,2},	{798,2}
};

static struct patval fuseki132900[] = {
  {576,1},	{497,1},	{606,1},	{792,1},
  {533,1},	{570,1},	{651,1},	{496,2},
  {532,2},	{798,2},	{569,2}
};

static struct patval fuseki132901[] = {
  {831,1},	{605,1},	{792,1},	{569,1},
  {534,1},	{570,1},	{576,1},	{533,2},
  {568,2},	{532,2},	{798,2}
};

static struct patval fuseki132902[] = {
  {570,1},	{792,1},	{723,1},	{576,1},
  {725,1},	{651,2},	{798,2}
};

static struct patval fuseki132903[] = {
  {570,1},	{792,1},	{576,1},	{759,1},
  {833,1},	{831,2},	{798,2}
};

static struct patval fuseki132904[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,1},	{835,1},	{799,1},	{763,1},
  {873,2},	{836,2},	{800,2}
};

static struct patval fuseki132905[] = {
  {576,1},	{570,1},	{681,1},	{792,1},
  {833,1},	{532,2},	{798,2}
};

static struct patval fuseki132906[] = {
  {576,1},	{570,1},	{681,1},	{792,1},
  {833,1},	{532,2},	{798,2}
};

static struct patval fuseki132907[] = {
  {680,1},	{717,1},	{570,2},	{718,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132908[] = {
  {680,1},	{717,1},	{570,2},	{718,2},
  {792,2},	{576,2},	{798,2}
};

static struct patval fuseki132909[] = {
  {568,1},	{532,1},	{798,1},	{533,1},
  {570,2},	{792,2},	{534,2},	{831,2},
  {576,2},	{569,2}
};

static struct patval fuseki132910[] = {
  {533,1},	{569,1},	{532,2},	{570,2},
  {681,2},	{792,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{687,2},	{798,2}
};

static struct patval fuseki132911[] = {
  {791,1},	{829,1},	{570,2},	{681,2},
  {792,2},	{828,2},	{573,2},	{684,2},
  {795,2},	{576,2},	{687,2},	{798,2}
};

static struct patval fuseki132912[] = {
  {533,1},	{688,1},	{836,1},	{835,1},
  {570,2},	{798,2},	{686,2},	{614,2},
  {576,2},	{762,2},	{792,2}
};

static struct patval fuseki132913[] = {
  {569,1},	{570,2},	{681,2},	{792,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132914[] = {
  {684,1},	{536,1},	{792,2},	{610,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132915[] = {
  {680,1},	{684,1},	{792,2},	{682,2},
  {570,2},	{576,2},	{798,2}
};

static struct patval fuseki132916[] = {
  {831,1},	{798,1},	{688,1},	{607,1},
  {534,1},	{792,2},	{642,2},	{537,2},
  {576,2},	{569,2},	{717,2}
};

static struct patval fuseki132917[] = {
  {831,1},	{796,1},	{794,1},	{830,2},
  {792,2},	{570,2},	{718,2},	{576,2},
  {798,2}
};

static struct patval fuseki132918[] = {
  {717,1},	{754,1},	{570,2},	{718,2},
  {792,2},	{684,2},	{576,2},	{798,2}
};

static struct patval fuseki132919[] = {
  {570,1},	{681,1},	{792,1},	{688,1},
  {576,1},	{761,2},	{796,2}
};

static struct patval fuseki132920[] = {
  {570,1},	{681,1},	{792,1},	{688,1},
  {576,1},	{761,2},	{796,2}
};

static struct patval fuseki132921[] = {
  {688,1},	{799,1},	{684,2},	{576,2},
  {650,2},	{798,2},	{570,2},	{792,2}
};

static struct patval fuseki132922[] = {
  {576,1},	{717,1},	{570,1},	{644,1},
  {792,1},	{798,1},	{643,2},	{645,2}
};

static struct patval fuseki132923[] = {
  {570,1},	{792,1},	{651,1},	{576,1},
  {724,1},	{798,1},	{723,2},	{725,2}
};

static struct patval fuseki132924[] = {
  {531,1},	{532,1},	{497,1},	{496,1},
  {533,1},	{570,2},	{681,2},	{792,2},
  {569,2},	{534,2},	{498,2},	{572,2},
  {573,2},	{684,2},	{795,2},	{576,2},
  {687,2},	{798,2}
};

static struct patval fuseki132925[] = {
  {570,1},	{792,1},	{684,1},	{576,1},
  {798,2}
};

static struct patval fuseki132926[] = {
  {570,1},	{792,1},	{576,1},	{724,1},
  {759,1},	{796,1},	{833,1},	{760,2},
  {758,2},	{795,2},	{798,2}
};

static struct patval fuseki132927[] = {
  {577,1},	{651,1},	{684,2},	{574,2},
  {576,2},	{798,2},	{570,2},	{792,2}
};

static struct patval fuseki132928[] = {
  {606,1},	{643,1},	{798,1},	{644,2},
  {792,2},	{576,2},	{570,2}
};

static struct patval fuseki132929[] = {
  {570,1},	{681,1},	{792,1},	{576,1},
  {798,1},	{687,2}
};

static struct patval fuseki132930[] = {
  {570,1},	{792,1},	{798,1},	{795,1},
  {576,1},	{573,2}
};

static struct patval fuseki132931[] = {
  {651,1},	{539,1},	{578,1},	{537,1},
  {540,1},	{792,2},	{576,2},	{612,2},
  {577,2},	{570,2},	{799,2},	{610,2}
};

static struct patval fuseki132932[] = {
  {828,1},	{605,1},	{606,1},	{569,2},
  {568,2},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132933[] = {
  {828,1},	{605,1},	{606,1},	{569,2},
  {568,2},	{570,2},	{792,2},	{576,2},
  {798,2}
};

static struct patval fuseki132934[] = {
  {798,1},	{651,1},	{792,2},	{576,2},
  {570,2},	{681,2}
};

static struct patval fuseki132935[] = {
  {798,1},	{651,1},	{792,2},	{576,2},
  {570,2},	{681,2}
};

static struct patval fuseki132936[] = {
  {570,1},	{792,1},	{798,1},	{870,1},
  {576,1},	{833,2}
};

static struct patval fuseki132937[] = {
  {570,1},	{792,1},	{798,1},	{870,1},
  {576,1},	{833,2}
};

static struct patval fuseki132938[] = {
  {831,1},	{828,1},	{793,1},	{829,1},
  {792,2},	{866,2},	{570,2},	{791,2},
  {684,2},	{833,2},	{576,2},	{798,2}
};

static struct patval fuseki132939[] = {
  {574,1},	{651,1},	{534,1},	{649,1},
  {570,2},	{572,2},	{576,2},	{798,2},
  {577,2},	{792,2},	{725,2}
};

static struct patval fuseki132940[] = {
  {539,1},	{540,1},	{538,2},	{570,2},
  {576,2},	{798,2},	{792,2}
};

static struct patval fuseki132941[] = {
  {613,1},	{614,1},	{684,2},	{576,2},
  {570,2},	{798,2},	{577,2},	{792,2}
};

static struct patval fuseki132942[] = {
  {833,1},	{502,1},	{836,1},	{537,1},
  {831,2},	{717,2},	{570,2},	{576,2},
  {651,2},	{792,2}
};

static struct patval fuseki132943[] = {
  {537,1},	{574,1},	{647,1},	{572,1},
  {535,1},	{534,2},	{792,2},	{570,2},
  {644,2},	{538,2},	{576,2},	{650,2},
  {798,2}
};

static struct patval fuseki132944[] = {
  {644,1},	{643,1},	{836,1},	{606,2},
  {570,2},	{795,2},	{576,2},	{792,2}
};

static struct patval fuseki132945[] = {
  {644,1},	{643,1},	{836,1},	{606,2},
  {570,2},	{795,2},	{576,2},	{792,2}
};

static struct patval fuseki132946[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{796,1},	{832,1},
  {721,2},	{831,2},	{724,2},	{794,2}
};

static struct patval fuseki132947[] = {
  {680,1},	{576,1},	{754,1},	{570,1},
  {644,1},	{794,1},	{792,1},	{798,1},
  {683,2},	{718,2},	{717,2},	{572,2}
};

static struct patval fuseki132948[] = {
  {532,1},	{798,1},	{570,1},	{792,1},
  {576,1},	{533,2}
};

static struct patval fuseki132949[] = {
  {828,1},	{570,1},	{792,1},	{798,1},
  {576,1},	{829,2}
};

static struct patval fuseki132950[] = {
  {570,1},	{792,1},	{866,1},	{798,1},
  {684,1},	{576,1},	{831,2}
};

static struct patval fuseki132951[] = {
  {870,1},	{836,1},	{800,1},	{871,1},
  {835,1},	{570,2},	{833,2},	{576,2},
  {798,2},	{834,2},	{799,2},	{792,2},
  {832,2}
};

static struct patval fuseki132952[] = {
  {569,1},	{534,1},	{792,2},	{576,2},
  {799,2}
};

static struct patval fuseki132953[] = {
  {642,1},	{569,1},	{576,1},	{792,1},
  {537,1},	{534,2},	{607,2},	{798,2}
};

static struct patval fuseki132954[] = {
  {570,1},	{651,1},	{576,2},	{798,2},
  {792,2}
};

static struct patval fuseki132955[] = {
  {651,1},	{649,1},	{574,1},	{792,2},
  {576,2},	{798,2},	{577,2},	{570,2},
  {725,2}
};

static struct patval fuseki132956[] = {
  {796,1},	{833,1},	{684,1},	{831,1},
  {794,1},	{830,2},	{792,2},	{570,2},
  {718,2},	{834,2},	{576,2},	{724,2},
  {798,2}
};

static struct patval fuseki132957[] = {
  {796,1},	{833,1},	{684,1},	{831,1},
  {794,1},	{830,2},	{792,2},	{570,2},
  {718,2},	{834,2},	{576,2},	{724,2},
  {798,2}
};

static struct patval fuseki132958[] = {
  {496,1},	{535,1},	{792,2},	{570,2},
  {684,2},	{537,2},	{576,2},	{798,2}
};

static struct patval fuseki132959[] = {
  {725,1},	{800,1},	{684,2},	{576,2},
  {798,2},	{651,2},	{570,2},	{792,2}
};

static struct patval fuseki132960[] = {
  {717,1},	{570,1},	{792,1},	{831,1},
  {540,1},	{651,1},	{576,1},	{502,2},
  {537,2},	{833,2},	{836,2}
};

static struct patval fuseki132961[] = {
  {570,1},	{792,1},	{576,1},	{724,1},
  {798,2}
};

static struct patval fuseki132962[] = {
  {570,1},	{792,1},	{576,1},	{724,1},
  {798,2}
};

static struct patval fuseki132963[] = {
  {833,1},	{836,1},	{831,2},	{570,2},
  {576,2},	{792,2}
};

static struct patval fuseki132964[] = {
  {576,1},	{798,1},	{791,1},	{570,1},
  {718,1},	{792,1},	{684,1},	{717,2},
  {754,2}
};

static struct patval fuseki132965[] = {
  {577,1},	{792,1},	{576,1},	{836,1},
  {532,2},	{540,2}
};

static struct patval fuseki132966[] = {
  {643,1},	{717,1},	{725,1},	{570,2},
  {535,2},	{831,2},	{576,2},	{798,2},
  {792,2}
};

static struct patval fuseki132967[] = {
  {643,1},	{717,1},	{725,1},	{570,2},
  {535,2},	{831,2},	{576,2},	{798,2},
  {792,2}
};

static struct patval fuseki132968[] = {
  {496,1},	{535,1},	{497,1},	{792,2},
  {534,2},	{570,2},	{572,2},	{576,2},
  {798,2}
};

static struct patval fuseki132969[] = {
  {753,1},	{798,1},	{791,1},	{576,1},
  {570,1},	{792,1},	{828,2},	{790,2}
};

static struct patval fuseki132970[] = {
  {576,1},	{605,1},	{792,1},	{569,1},
  {570,1},	{798,1},	{568,2},	{532,2}
};

static struct patval fuseki132971[] = {
  {576,1},	{643,1},	{792,1},	{828,1},
  {570,1},	{798,1},	{790,2},	{717,2}
};

static struct patval fuseki132972[] = {
  {836,1},	{792,1},	{576,1},	{532,2}
};

static struct patval fuseki132973[] = {
  {570,1},	{718,1},	{792,1},	{830,1},
  {798,1},	{576,1},	{724,2},	{795,2}
};

static struct patval fuseki132974[] = {
  {570,1},	{798,1},	{792,1},	{724,1},
  {834,1},	{576,1},	{795,2},	{718,2}
};

static struct patval fuseki132975[] = {
  {791,1},	{828,1},	{570,1},	{792,2},
  {829,2},	{576,2},	{835,2}
};

static struct patval fuseki132976[] = {
  {569,1},	{717,1},	{534,1},	{792,2},
  {759,2},	{576,2},	{799,2}
};

static struct patval fuseki132977[] = {
  {570,1},	{718,1},	{792,1},	{798,1},
  {684,1},	{537,1},	{576,1},	{831,2},
  {651,2}
};

static struct patval fuseki132978[] = {
  {798,1},	{570,1},	{792,1},	{794,1},
  {684,1},	{651,1},	{576,1},	{717,2},
  {537,2}
};

static struct patval fuseki132979[] = {
  {570,1},	{651,1},	{761,1},	{834,2},
  {576,2},	{723,2},	{792,2}
};

static struct patval fuseki132980[] = {
  {792,1},	{576,1},	{761,1},	{799,2}
};

static struct patval fuseki132981[] = {
  {576,1},	{792,1},	{571,1},	{533,2}
};

static struct patval fuseki132982[] = {
  {835,1},	{688,1},	{686,2},	{576,2},
  {798,2},	{570,2},	{792,2}
};

static struct patval fuseki132983[] = {
  {538,1},	{792,1},	{537,1},	{577,1},
  {576,1},	{836,1},	{532,2},	{540,2},
  {501,2},	{539,2}
};

static struct patval fuseki132984[] = {
  {687,1},	{725,1},	{573,2},	{795,2},
  {576,2},	{570,2},	{724,2},	{798,2},
  {792,2}
};

static struct patval fuseki132985[] = {
  {687,1},	{725,1},	{573,2},	{795,2},
  {576,2},	{570,2},	{724,2},	{798,2},
  {792,2}
};

static struct patval fuseki132986[] = {
  {651,1},	{799,1},	{836,1},	{577,1},
  {574,2},	{576,2},	{798,2},	{835,2},
  {832,2},	{570,2},	{792,2},	{684,2}
};

static struct patval fuseki132987[] = {
  {717,1},	{573,1},	{535,1},	{792,2},
  {572,2},	{794,2},	{570,2},	{576,2},
  {798,2}
};

static struct patval fuseki132988[] = {
  {791,1},	{576,1},	{570,1},	{792,1},
  {798,1},	{866,1},	{833,1},	{684,1},
  {831,2},	{828,2},	{829,2}
};

static struct patval fuseki132989[] = {
  {798,1},	{570,1},	{792,1},	{831,1},
  {537,1},	{576,1},	{717,2},	{651,2}
};

static struct patval fuseki132990[] = {
  {798,1},	{570,1},	{792,1},	{535,1},
  {833,1},	{576,1},	{643,2},	{725,2}
};

static struct patval fuseki132991[] = {
  {831,1},	{798,1},	{607,1},	{534,1},
  {792,2},	{642,2},	{537,2},	{576,2},
  {569,2}
};

static struct patval fuseki132992[] = {
  {651,1},	{798,1},	{576,2},	{792,2},
  {570,2},	{725,2}
};

static struct patval fuseki132993[] = {
  {570,1},	{792,1},	{576,1},	{796,1},
  {833,1},	{795,2},	{798,2}
};

static struct patval fuseki132994[] = {
  {570,1},	{792,1},	{829,1},	{798,1},
  {576,1},	{831,2}
};

static struct patval fuseki132995[] = {
  {570,1},	{792,1},	{576,1},	{798,1},
  {799,1},	{725,2}
};

static struct patval fuseki132996[] = {
  {576,1},	{570,1},	{792,1},	{534,1},
  {798,1},	{572,1},	{496,2},	{535,2}
};

static struct patval fuseki132997[] = {
  {569,1},	{798,1},	{570,1},	{792,1},
  {573,1},	{684,1},	{795,1},	{576,1},
  {643,2}
};

static struct patval fuseki132998[] = {
  {570,1},	{792,1},	{573,1},	{684,1},
  {795,1},	{576,1},	{798,1},	{577,1},
  {651,2}
};

struct fullboard_pattern fuseki13[] = {
  {fuseki130,0,"Fuseki1",576,799.000000},
  {fuseki131,0,"Fuseki2",791,534.000000},
  {fuseki132,0,"Fuseki3",836,144.000000},
  {fuseki133,0,"Fuseki4",762,28.000000},
  {fuseki134,0,"Fuseki5",797,27.000000},
  {fuseki135,0,"Fuseki6",684,21.000000},
  {fuseki136,0,"Fuseki7",612,15.000000},
  {fuseki137,1,"Fuseki8",792,174.000000},
  {fuseki138,1,"Fuseki9",835,138.000000},
  {fuseki139,1,"Fuseki10",798,95.000000},
  {fuseki1310,1,"Fuseki11",836,86.000000},
  {fuseki1311,1,"Fuseki12",533,79.000000},
  {fuseki1312,1,"Fuseki13",828,65.000000},
  {fuseki1313,1,"Fuseki14",717,33.000000},
  {fuseki1314,1,"Fuseki15",835,32.000000},
  {fuseki1315,1,"Fuseki16",613,11.000000},
  {fuseki1316,1,"Fuseki17",606,10.000000},
  {fuseki1317,1,"Fuseki18",576,95.000000},
  {fuseki1318,1,"Fuseki19",540,57.000000},
  {fuseki1319,1,"Fuseki20",798,54.000000},
  {fuseki1320,1,"Fuseki21",533,52.000000},
  {fuseki1321,1,"Fuseki22",835,48.000000},
  {fuseki1322,1,"Fuseki23",540,45.000000},
  {fuseki1323,1,"Fuseki24",829,38.000000},
  {fuseki1324,1,"Fuseki25",798,28.000000},
  {fuseki1325,1,"Fuseki26",834,16.000000},
  {fuseki1326,1,"Fuseki27",533,15.000000},
  {fuseki1327,1,"Fuseki28",533,13.000000},
  {fuseki1328,1,"Fuseki29",797,12.000000},
  {fuseki1329,1,"Fuseki30",799,10.000000},
  {fuseki1330,2,"Fuseki31",798,94.000000},
  {fuseki1331,2,"Fuseki32",835,21.000000},
  {fuseki1332,2,"Fuseki33",533,17.000000},
  {fuseki1333,2,"Fuseki34",755,10.000000},
  {fuseki1334,1,"Fuseki35",799,33.000000},
  {fuseki1335,1,"Fuseki36",798,29.000000},
  {fuseki1336,1,"Fuseki37",540,26.000000},
  {fuseki1337,1,"Fuseki38",828,16.000000},
  {fuseki1338,1,"Fuseki39",829,14.000000},
  {fuseki1339,1,"Fuseki40",792,7.000000},
  {fuseki1340,1,"Fuseki41",613,4.000000},
  {fuseki1341,1,"Fuseki42",792,4.000000},
  {fuseki1342,2,"Fuseki43",798,32.000000},
  {fuseki1343,2,"Fuseki44",798,22.000000},
  {fuseki1344,2,"Fuseki45",539,17.000000},
  {fuseki1345,2,"Fuseki46",539,16.000000},
  {fuseki1346,2,"Fuseki47",799,10.000000},
  {fuseki1347,2,"Fuseki48",607,6.000000},
  {fuseki1348,2,"Fuseki49",533,5.000000},
  {fuseki1349,2,"Fuseki50",793,4.000000},
  {fuseki1350,3,"Fuseki51",792,56.000000},
  {fuseki1351,3,"Fuseki52",533,26.000000},
  {fuseki1352,3,"Fuseki53",828,13.000000},
  {fuseki1353,3,"Fuseki54",761,8.000000},
  {fuseki1354,3,"Fuseki55",577,8.000000},
  {fuseki1355,2,"Fuseki56",570,35.000000},
  {fuseki1356,2,"Fuseki57",576,20.000000},
  {fuseki1357,2,"Fuseki58",829,7.000000},
  {fuseki1358,2,"Fuseki59",539,4.000000},
  {fuseki1359,2,"Fuseki60",571,4.000000},
  {fuseki1360,2,"Fuseki61",533,47.000000},
  {fuseki1361,2,"Fuseki62",798,10.000000},
  {fuseki1362,2,"Fuseki63",539,8.000000},
  {fuseki1363,2,"Fuseki64",569,7.000000},
  {fuseki1364,2,"Fuseki65",614,6.000000},
  {fuseki1365,2,"Fuseki66",576,5.000000},
  {fuseki1366,2,"Fuseki67",798,23.000000},
  {fuseki1367,2,"Fuseki68",539,16.000000},
  {fuseki1368,2,"Fuseki69",792,11.000000},
  {fuseki1369,2,"Fuseki70",533,10.000000},
  {fuseki1370,2,"Fuseki71",569,5.000000},
  {fuseki1371,2,"Fuseki72",835,4.000000},
  {fuseki1372,2,"Fuseki73",828,4.000000},
  {fuseki1373,2,"Fuseki74",798,4.000000},
  {fuseki1374,2,"Fuseki75",607,3.000000},
  {fuseki1375,2,"Fuseki76",792,24.000000},
  {fuseki1376,2,"Fuseki77",576,13.000000},
  {fuseki1377,2,"Fuseki78",799,8.000000},
  {fuseki1378,2,"Fuseki79",569,6.000000},
  {fuseki1379,2,"Fuseki80",791,5.000000},
  {fuseki1380,2,"Fuseki81",761,3.000000},
  {fuseki1381,2,"Fuseki82",570,21.000000},
  {fuseki1382,2,"Fuseki83",835,18.000000},
  {fuseki1383,2,"Fuseki84",532,9.000000},
  {fuseki1384,2,"Fuseki85",533,6.000000},
  {fuseki1385,3,"Fuseki86",570,19.000000},
  {fuseki1386,3,"Fuseki87",533,12.000000},
  {fuseki1387,3,"Fuseki88",577,7.000000},
  {fuseki1388,3,"Fuseki89",607,5.000000},
  {fuseki1389,3,"Fuseki90",797,4.000000},
  {fuseki1390,3,"Fuseki91",540,4.000000},
  {fuseki1391,3,"Fuseki92",534,3.000000},
  {fuseki1392,3,"Fuseki93",538,3.000000},
  {fuseki1393,3,"Fuseki94",569,2.000000},
  {fuseki1394,2,"Fuseki95",577,16.000000},
  {fuseki1395,2,"Fuseki96",798,8.000000},
  {fuseki1396,2,"Fuseki97",539,7.000000},
  {fuseki1397,2,"Fuseki98",539,6.000000},
  {fuseki1398,2,"Fuseki99",538,5.000000},
  {fuseki1399,2,"Fuseki100",532,5.000000},
  {fuseki13100,2,"Fuseki101",798,3.000000},
  {fuseki13101,2,"Fuseki102",754,2.000000},
  {fuseki13102,4,"Fuseki103",717,23.000000},
  {fuseki13103,4,"Fuseki104",688,6.000000},
  {fuseki13104,4,"Fuseki105",687,5.000000},
  {fuseki13105,4,"Fuseki106",795,5.000000},
  {fuseki13106,4,"Fuseki107",687,4.000000},
  {fuseki13107,3,"Fuseki108",532,22.000000},
  {fuseki13108,3,"Fuseki109",533,14.000000},
  {fuseki13109,3,"Fuseki110",570,9.000000},
  {fuseki13110,3,"Fuseki111",533,7.000000},
  {fuseki13111,2,"Fuseki112",799,20.000000},
  {fuseki13112,2,"Fuseki113",570,6.000000},
  {fuseki13113,2,"Fuseki114",754,5.000000},
  {fuseki13114,2,"Fuseki115",533,5.000000},
  {fuseki13115,2,"Fuseki116",533,4.000000},
  {fuseki13116,2,"Fuseki117",576,3.000000},
  {fuseki13117,2,"Fuseki118",614,3.000000},
  {fuseki13118,2,"Fuseki119",532,2.000000},
  {fuseki13119,2,"Fuseki120",836,2.000000},
  {fuseki13120,2,"Fuseki121",539,14.000000},
  {fuseki13121,2,"Fuseki122",577,10.000000},
  {fuseki13122,2,"Fuseki123",792,9.000000},
  {fuseki13123,2,"Fuseki124",792,6.000000},
  {fuseki13124,2,"Fuseki125",540,5.000000},
  {fuseki13125,2,"Fuseki126",533,2.000000},
  {fuseki13126,2,"Fuseki127",577,2.000000},
  {fuseki13127,2,"Fuseki128",534,2.000000},
  {fuseki13128,2,"Fuseki129",539,18.000000},
  {fuseki13129,2,"Fuseki130",569,7.000000},
  {fuseki13130,2,"Fuseki131",791,5.000000},
  {fuseki13131,2,"Fuseki132",798,4.000000},
  {fuseki13132,2,"Fuseki133",569,3.000000},
  {fuseki13133,2,"Fuseki134",540,3.000000},
  {fuseki13134,2,"Fuseki135",571,2.000000},
  {fuseki13135,2,"Fuseki136",792,2.000000},
  {fuseki13136,2,"Fuseki137",799,13.000000},
  {fuseki13137,2,"Fuseki138",835,10.000000},
  {fuseki13138,2,"Fuseki139",798,6.000000},
  {fuseki13139,2,"Fuseki140",576,3.000000},
  {fuseki13140,2,"Fuseki141",799,2.000000},
  {fuseki13141,2,"Fuseki142",539,2.000000},
  {fuseki13142,2,"Fuseki143",606,2.000000},
  {fuseki13143,2,"Fuseki144",571,2.000000},
  {fuseki13144,3,"Fuseki145",836,24.000000},
  {fuseki13145,3,"Fuseki146",534,9.000000},
  {fuseki13146,3,"Fuseki147",835,4.000000},
  {fuseki13147,3,"Fuseki148",792,4.000000},
  {fuseki13148,2,"Fuseki149",577,15.000000},
  {fuseki13149,2,"Fuseki150",798,6.000000},
  {fuseki13150,2,"Fuseki151",577,5.000000},
  {fuseki13151,2,"Fuseki152",570,3.000000},
  {fuseki13152,4,"Fuseki153",643,7.000000},
  {fuseki13153,4,"Fuseki154",687,5.000000},
  {fuseki13154,4,"Fuseki155",572,3.000000},
  {fuseki13155,4,"Fuseki156",795,3.000000},
  {fuseki13156,4,"Fuseki157",643,2.000000},
  {fuseki13157,4,"Fuseki158",573,2.000000},
  {fuseki13158,4,"Fuseki159",535,2.000000},
  {fuseki13159,4,"Fuseki160",688,2.000000},
  {fuseki13160,4,"Fuseki161",799,1.000000},
  {fuseki13161,4,"Fuseki162",834,1.000000},
  {fuseki13162,4,"Fuseki163",830,1.000000},
  {fuseki13163,4,"Fuseki164",680,1.000000},
  {fuseki13164,4,"Fuseki165",688,1.000000},
  {fuseki13165,4,"Fuseki166",574,1.000000},
  {fuseki13166,4,"Fuseki167",571,1.000000},
  {fuseki13167,4,"Fuseki168",644,1.000000},
  {fuseki13168,4,"Fuseki169",836,1.000000},
  {fuseki13169,2,"Fuseki170",828,16.000000},
  {fuseki13170,2,"Fuseki171",576,6.000000},
  {fuseki13171,2,"Fuseki172",829,5.000000},
  {fuseki13172,2,"Fuseki173",791,3.000000},
  {fuseki13173,2,"Fuseki174",534,2.000000},
  {fuseki13174,2,"Fuseki175",724,14.000000},
  {fuseki13175,2,"Fuseki176",796,6.000000},
  {fuseki13176,2,"Fuseki177",537,3.000000},
  {fuseki13177,2,"Fuseki178",538,3.000000},
  {fuseki13178,2,"Fuseki179",798,2.000000},
  {fuseki13179,2,"Fuseki180",576,2.000000},
  {fuseki13180,2,"Fuseki181",570,8.000000},
  {fuseki13181,2,"Fuseki182",570,6.000000},
  {fuseki13182,2,"Fuseki183",835,4.000000},
  {fuseki13183,2,"Fuseki184",577,4.000000},
  {fuseki13184,2,"Fuseki185",607,2.000000},
  {fuseki13185,2,"Fuseki186",534,1.000000},
  {fuseki13186,2,"Fuseki187",540,1.000000},
  {fuseki13187,2,"Fuseki188",575,1.000000},
  {fuseki13188,2,"Fuseki189",762,1.000000},
  {fuseki13189,2,"Fuseki190",792,1.000000},
  {fuseki13190,2,"Fuseki191",791,1.000000},
  {fuseki13191,2,"Fuseki192",830,1.000000},
  {fuseki13192,2,"Fuseki193",835,1.000000},
  {fuseki13193,3,"Fuseki194",532,14.000000},
  {fuseki13194,3,"Fuseki195",533,7.000000},
  {fuseki13195,3,"Fuseki196",570,4.000000},
  {fuseki13196,3,"Fuseki197",829,3.000000},
  {fuseki13197,3,"Fuseki198",755,2.000000},
  {fuseki13198,2,"Fuseki199",828,20.000000},
  {fuseki13199,2,"Fuseki200",577,4.000000},
  {fuseki13200,2,"Fuseki201",791,3.000000},
  {fuseki13201,3,"Fuseki202",828,22.000000},
  {fuseki13202,3,"Fuseki203",539,3.000000},
  {fuseki13203,4,"Fuseki204",830,16.000000},
  {fuseki13204,4,"Fuseki205",833,6.000000},
  {fuseki13205,4,"Fuseki206",833,2.000000},
  {fuseki13206,2,"Fuseki207",569,17.000000},
  {fuseki13207,2,"Fuseki208",792,4.000000},
  {fuseki13208,2,"Fuseki209",539,3.000000},
  {fuseki13209,1,"Fuseki210",797,5.000000},
  {fuseki13210,1,"Fuseki211",798,4.000000},
  {fuseki13211,1,"Fuseki212",569,4.000000},
  {fuseki13212,1,"Fuseki213",836,3.000000},
  {fuseki13213,1,"Fuseki214",798,3.000000},
  {fuseki13214,1,"Fuseki215",569,3.000000},
  {fuseki13215,1,"Fuseki217",791,2.000000},
  {fuseki13216,1,"Fuseki218",793,1.000000},
  {fuseki13217,3,"Fuseki219",576,10.000000},
  {fuseki13218,3,"Fuseki220",614,4.000000},
  {fuseki13219,3,"Fuseki221",539,4.000000},
  {fuseki13220,3,"Fuseki222",540,3.000000},
  {fuseki13221,3,"Fuseki223",569,2.000000},
  {fuseki13222,3,"Fuseki224",575,1.000000},
  {fuseki13223,3,"Fuseki225",613,1.000000},
  {fuseki13224,3,"Fuseki226",607,1.000000},
  {fuseki13225,3,"Fuseki227",834,1.000000},
  {fuseki13226,3,"Fuseki228",570,1.000000},
  {fuseki13227,3,"Fuseki229",532,8.000000},
  {fuseki13228,3,"Fuseki230",577,8.000000},
  {fuseki13229,3,"Fuseki231",830,3.000000},
  {fuseki13230,3,"Fuseki232",576,3.000000},
  {fuseki13231,3,"Fuseki233",830,2.000000},
  {fuseki13232,3,"Fuseki234",793,1.000000},
  {fuseki13233,3,"Fuseki235",577,1.000000},
  {fuseki13234,3,"Fuseki236",614,1.000000},
  {fuseki13235,1,"Fuseki237",532,14.000000},
  {fuseki13236,1,"Fuseki238",532,3.000000},
  {fuseki13237,1,"Fuseki239",576,2.000000},
  {fuseki13238,4,"Fuseki240",538,6.000000},
  {fuseki13239,4,"Fuseki241",832,2.000000},
  {fuseki13240,4,"Fuseki242",573,2.000000},
  {fuseki13241,4,"Fuseki243",725,2.000000},
  {fuseki13242,4,"Fuseki244",688,2.000000},
  {fuseki13243,4,"Fuseki245",573,2.000000},
  {fuseki13244,4,"Fuseki246",682,1.000000},
  {fuseki13245,4,"Fuseki247",536,1.000000},
  {fuseki13246,4,"Fuseki248",575,1.000000},
  {fuseki13247,4,"Fuseki249",688,1.000000},
  {fuseki13248,4,"Fuseki250",643,1.000000},
  {fuseki13249,4,"Fuseki251",725,1.000000},
  {fuseki13250,4,"Fuseki252",576,1.000000},
  {fuseki13251,4,"Fuseki253",681,1.000000},
  {fuseki13252,4,"Fuseki254",534,1.000000},
  {fuseki13253,2,"Fuseki255",540,21.000000},
  {fuseki13254,3,"Fuseki256",570,9.000000},
  {fuseki13255,3,"Fuseki257",793,4.000000},
  {fuseki13256,3,"Fuseki258",606,4.000000},
  {fuseki13257,3,"Fuseki259",569,3.000000},
  {fuseki13258,3,"Fuseki260",571,1.000000},
  {fuseki13259,3,"Fuseki261",829,1.000000},
  {fuseki13260,3,"Fuseki262",794,1.000000},
  {fuseki13261,3,"Fuseki263",532,1.000000},
  {fuseki13262,3,"Fuseki264",606,1.000000},
  {fuseki13263,3,"Fuseki265",791,6.000000},
  {fuseki13264,3,"Fuseki266",798,5.000000},
  {fuseki13265,3,"Fuseki267",540,5.000000},
  {fuseki13266,3,"Fuseki268",791,4.000000},
  {fuseki13267,3,"Fuseki269",830,3.000000},
  {fuseki13268,3,"Fuseki270",607,1.000000},
  {fuseki13269,3,"Fuseki271",793,1.000000},
  {fuseki13270,4,"Fuseki272",536,4.000000},
  {fuseki13271,4,"Fuseki273",792,4.000000},
  {fuseki13272,4,"Fuseki274",832,3.000000},
  {fuseki13273,4,"Fuseki275",651,3.000000},
  {fuseki13274,4,"Fuseki276",573,2.000000},
  {fuseki13275,4,"Fuseki277",536,1.000000},
  {fuseki13276,4,"Fuseki278",534,1.000000},
  {fuseki13277,4,"Fuseki279",725,1.000000},
  {fuseki13278,4,"Fuseki280",577,1.000000},
  {fuseki13279,4,"Fuseki281",571,1.000000},
  {fuseki13280,4,"Fuseki282",650,1.000000},
  {fuseki13281,4,"Fuseki283",535,1.000000},
  {fuseki13282,4,"Fuseki284",539,1.000000},
  {fuseki13283,4,"Fuseki285",833,4.000000},
  {fuseki13284,4,"Fuseki286",762,4.000000},
  {fuseki13285,4,"Fuseki287",573,4.000000},
  {fuseki13286,4,"Fuseki288",755,2.000000},
  {fuseki13287,4,"Fuseki289",796,2.000000},
  {fuseki13288,4,"Fuseki290",833,1.000000},
  {fuseki13289,4,"Fuseki291",832,1.000000},
  {fuseki13290,4,"Fuseki292",684,1.000000},
  {fuseki13291,4,"Fuseki293",680,1.000000},
  {fuseki13292,4,"Fuseki294",755,1.000000},
  {fuseki13293,4,"Fuseki295",798,1.000000},
  {fuseki13294,4,"Fuseki296",643,1.000000},
  {fuseki13295,4,"Fuseki297",831,1.000000},
  {fuseki13296,3,"Fuseki298",570,7.000000},
  {fuseki13297,3,"Fuseki299",569,6.000000},
  {fuseki13298,3,"Fuseki300",799,5.000000},
  {fuseki13299,3,"Fuseki301",540,3.000000},
  {fuseki13300,3,"Fuseki302",797,1.000000},
  {fuseki13301,3,"Fuseki303",834,1.000000},
  {fuseki13302,3,"Fuseki304",570,1.000000},
  {fuseki13303,5,"Fuseki305",718,4.000000},
  {fuseki13304,5,"Fuseki306",724,4.000000},
  {fuseki13305,5,"Fuseki307",754,4.000000},
  {fuseki13306,5,"Fuseki308",795,2.000000},
  {fuseki13307,5,"Fuseki309",829,2.000000},
  {fuseki13308,5,"Fuseki310",573,1.000000},
  {fuseki13309,5,"Fuseki311",537,1.000000},
  {fuseki13310,5,"Fuseki312",836,1.000000},
  {fuseki13311,5,"Fuseki313",681,1.000000},
  {fuseki13312,5,"Fuseki314",828,1.000000},
  {fuseki13313,5,"Fuseki315",831,1.000000},
  {fuseki13314,5,"Fuseki316",759,1.000000},
  {fuseki13315,3,"Fuseki317",792,7.000000},
  {fuseki13316,3,"Fuseki318",569,5.000000},
  {fuseki13317,3,"Fuseki319",834,4.000000},
  {fuseki13318,3,"Fuseki320",532,2.000000},
  {fuseki13319,3,"Fuseki321",534,2.000000},
  {fuseki13320,3,"Fuseki322",534,1.000000},
  {fuseki13321,3,"Fuseki323",607,1.000000},
  {fuseki13322,3,"Fuseki324",793,1.000000},
  {fuseki13323,4,"Fuseki325",536,7.000000},
  {fuseki13324,4,"Fuseki326",718,5.000000},
  {fuseki13325,4,"Fuseki327",614,3.000000},
  {fuseki13326,4,"Fuseki328",717,2.000000},
  {fuseki13327,4,"Fuseki329",650,1.000000},
  {fuseki13328,4,"Fuseki330",792,1.000000},
  {fuseki13329,4,"Fuseki331",793,1.000000},
  {fuseki13330,4,"Fuseki332",759,1.000000},
  {fuseki13331,4,"Fuseki333",832,1.000000},
  {fuseki13332,1,"Fuseki334",798,8.000000},
  {fuseki13333,1,"Fuseki335",577,5.000000},
  {fuseki13334,1,"Fuseki336",540,5.000000},
  {fuseki13335,1,"Fuseki337",762,1.000000},
  {fuseki13336,1,"Fuseki338",683,1.000000},
  {fuseki13337,1,"Fuseki339",722,1.000000},
  {fuseki13338,4,"Fuseki340",606,7.000000},
  {fuseki13339,4,"Fuseki341",651,2.000000},
  {fuseki13340,4,"Fuseki342",687,2.000000},
  {fuseki13341,4,"Fuseki343",536,2.000000},
  {fuseki13342,4,"Fuseki344",606,2.000000},
  {fuseki13343,4,"Fuseki345",832,1.000000},
  {fuseki13344,4,"Fuseki346",831,1.000000},
  {fuseki13345,4,"Fuseki347",799,1.000000},
  {fuseki13346,4,"Fuseki348",538,1.000000},
  {fuseki13347,4,"Fuseki349",755,1.000000},
  {fuseki13348,4,"Fuseki350",793,1.000000},
  {fuseki13349,3,"Fuseki351",836,9.000000},
  {fuseki13350,3,"Fuseki352",792,5.000000},
  {fuseki13351,3,"Fuseki353",829,2.000000},
  {fuseki13352,3,"Fuseki354",755,1.000000},
  {fuseki13353,3,"Fuseki355",791,1.000000},
  {fuseki13354,3,"Fuseki356",612,1.000000},
  {fuseki13355,3,"Fuseki357",538,1.000000},
  {fuseki13356,3,"Fuseki358",798,14.000000},
  {fuseki13357,3,"Fuseki359",577,2.000000},
  {fuseki13358,3,"Fuseki360",532,2.000000},
  {fuseki13359,3,"Fuseki361",534,8.000000},
  {fuseki13360,3,"Fuseki362",570,4.000000},
  {fuseki13361,3,"Fuseki363",569,3.000000},
  {fuseki13362,3,"Fuseki364",533,2.000000},
  {fuseki13363,3,"Fuseki365",828,2.000000},
  {fuseki13364,3,"Fuseki366",571,1.000000},
  {fuseki13365,3,"Fuseki367",836,15.000000},
  {fuseki13366,3,"Fuseki368",830,2.000000},
  {fuseki13367,3,"Fuseki369",569,2.000000},
  {fuseki13368,3,"Fuseki370",532,6.000000},
  {fuseki13369,3,"Fuseki371",799,4.000000},
  {fuseki13370,3,"Fuseki372",799,4.000000},
  {fuseki13371,3,"Fuseki373",576,3.000000},
  {fuseki13372,3,"Fuseki374",725,1.000000},
  {fuseki13373,3,"Fuseki375",725,1.000000},
  {fuseki13374,3,"Fuseki376",836,11.000000},
  {fuseki13375,3,"Fuseki377",829,2.000000},
  {fuseki13376,3,"Fuseki378",652,2.000000},
  {fuseki13377,3,"Fuseki379",569,7.000000},
  {fuseki13378,3,"Fuseki380",532,5.000000},
  {fuseki13379,3,"Fuseki381",792,3.000000},
  {fuseki13380,3,"Fuseki382",796,1.000000},
  {fuseki13381,3,"Fuseki383",762,1.000000},
  {fuseki13382,3,"Fuseki384",606,1.000000},
  {fuseki13383,4,"Fuseki385",606,9.000000},
  {fuseki13384,4,"Fuseki386",833,2.000000},
  {fuseki13385,4,"Fuseki387",614,1.000000},
  {fuseki13386,4,"Fuseki388",607,1.000000},
  {fuseki13387,4,"Fuseki389",536,1.000000},
  {fuseki13388,4,"Fuseki390",651,1.000000},
  {fuseki13389,4,"Fuseki391",540,1.000000},
  {fuseki13390,4,"Fuseki392",535,1.000000},
  {fuseki13391,3,"Fuseki393",570,5.000000},
  {fuseki13392,3,"Fuseki394",533,3.000000},
  {fuseki13393,3,"Fuseki395",829,3.000000},
  {fuseki13394,3,"Fuseki396",534,2.000000},
  {fuseki13395,3,"Fuseki397",607,1.000000},
  {fuseki13396,3,"Fuseki398",575,1.000000},
  {fuseki13397,3,"Fuseki399",793,1.000000},
  {fuseki13398,3,"Fuseki400",687,1.000000},
  {fuseki13399,3,"Fuseki401",532,10.000000},
  {fuseki13400,3,"Fuseki402",577,3.000000},
  {fuseki13401,3,"Fuseki403",792,2.000000},
  {fuseki13402,3,"Fuseki404",799,1.000000},
  {fuseki13403,3,"Fuseki405",762,1.000000},
  {fuseki13404,4,"Fuseki406",570,2.000000},
  {fuseki13405,4,"Fuseki407",643,2.000000},
  {fuseki13406,4,"Fuseki408",651,2.000000},
  {fuseki13407,4,"Fuseki409",651,2.000000},
  {fuseki13408,4,"Fuseki410",687,2.000000},
  {fuseki13409,4,"Fuseki411",538,1.000000},
  {fuseki13410,4,"Fuseki412",683,1.000000},
  {fuseki13411,4,"Fuseki413",607,1.000000},
  {fuseki13412,4,"Fuseki414",651,1.000000},
  {fuseki13413,4,"Fuseki415",688,1.000000},
  {fuseki13414,4,"Fuseki416",573,1.000000},
  {fuseki13415,4,"Fuseki417",536,1.000000},
  {fuseki13416,2,"Fuseki418",569,10.000000},
  {fuseki13417,2,"Fuseki419",829,1.000000},
  {fuseki13418,2,"Fuseki420",754,1.000000},
  {fuseki13419,2,"Fuseki421",539,1.000000},
  {fuseki13420,2,"Fuseki422",724,1.000000},
  {fuseki13421,2,"Fuseki423",532,1.000000},
  {fuseki13422,2,"Fuseki424",643,1.000000},
  {fuseki13423,3,"Fuseki425",540,6.000000},
  {fuseki13424,3,"Fuseki426",534,5.000000},
  {fuseki13425,3,"Fuseki427",539,2.000000},
  {fuseki13426,3,"Fuseki428",607,1.000000},
  {fuseki13427,3,"Fuseki429",569,1.000000},
  {fuseki13428,3,"Fuseki430",576,1.000000},
  {fuseki13429,2,"Fuseki431",540,8.000000},
  {fuseki13430,2,"Fuseki432",532,3.000000},
  {fuseki13431,2,"Fuseki433",791,2.000000},
  {fuseki13432,2,"Fuseki434",577,1.000000},
  {fuseki13433,2,"Fuseki435",613,1.000000},
  {fuseki13434,2,"Fuseki436",570,1.000000},
  {fuseki13435,4,"Fuseki437",614,2.000000},
  {fuseki13436,4,"Fuseki438",614,2.000000},
  {fuseki13437,4,"Fuseki439",607,1.000000},
  {fuseki13438,4,"Fuseki440",643,1.000000},
  {fuseki13439,4,"Fuseki441",649,1.000000},
  {fuseki13440,4,"Fuseki442",688,1.000000},
  {fuseki13441,4,"Fuseki443",688,1.000000},
  {fuseki13442,4,"Fuseki444",613,1.000000},
  {fuseki13443,4,"Fuseki445",538,1.000000},
  {fuseki13444,4,"Fuseki446",573,1.000000},
  {fuseki13445,4,"Fuseki447",680,1.000000},
  {fuseki13446,4,"Fuseki448",795,1.000000},
  {fuseki13447,4,"Fuseki449",872,1.000000},
  {fuseki13448,4,"Fuseki450",651,1.000000},
  {fuseki13449,3,"Fuseki451",539,8.000000},
  {fuseki13450,3,"Fuseki452",532,3.000000},
  {fuseki13451,3,"Fuseki453",799,2.000000},
  {fuseki13452,3,"Fuseki454",651,1.000000},
  {fuseki13453,3,"Fuseki455",798,1.000000},
  {fuseki13454,3,"Fuseki456",535,1.000000},
  {fuseki13455,5,"Fuseki457",607,4.000000},
  {fuseki13456,5,"Fuseki458",606,4.000000},
  {fuseki13457,5,"Fuseki459",832,4.000000},
  {fuseki13458,5,"Fuseki460",572,1.000000},
  {fuseki13459,5,"Fuseki461",687,1.000000},
  {fuseki13460,5,"Fuseki462",535,1.000000},
  {fuseki13461,5,"Fuseki463",644,1.000000},
  {fuseki13462,3,"Fuseki464",614,7.000000},
  {fuseki13463,3,"Fuseki465",828,3.000000},
  {fuseki13464,3,"Fuseki466",761,2.000000},
  {fuseki13465,3,"Fuseki467",570,1.000000},
  {fuseki13466,3,"Fuseki468",835,1.000000},
  {fuseki13467,3,"Fuseki469",835,1.000000},
  {fuseki13468,2,"Fuseki470",799,9.000000},
  {fuseki13469,2,"Fuseki471",799,3.000000},
  {fuseki13470,2,"Fuseki472",533,1.000000},
  {fuseki13471,2,"Fuseki473",797,1.000000},
  {fuseki13472,2,"Fuseki474",762,1.000000},
  {fuseki13473,1,"Fuseki475",798,8.000000},
  {fuseki13474,1,"Fuseki476",828,2.000000},
  {fuseki13475,1,"Fuseki477",835,1.000000},
  {fuseki13476,1,"Fuseki478",576,1.000000},
  {fuseki13477,1,"Fuseki479",829,1.000000},
  {fuseki13478,1,"Fuseki480",755,1.000000},
  {fuseki13479,1,"Fuseki481",539,1.000000},
  {fuseki13480,4,"Fuseki482",534,4.000000},
  {fuseki13481,4,"Fuseki483",834,2.000000},
  {fuseki13482,4,"Fuseki484",795,2.000000},
  {fuseki13483,4,"Fuseki485",832,1.000000},
  {fuseki13484,4,"Fuseki486",570,1.000000},
  {fuseki13485,4,"Fuseki487",606,1.000000},
  {fuseki13486,4,"Fuseki488",643,1.000000},
  {fuseki13487,4,"Fuseki489",793,1.000000},
  {fuseki13488,4,"Fuseki490",571,1.000000},
  {fuseki13489,2,"Fuseki491",835,3.000000},
  {fuseki13490,2,"Fuseki492",792,2.000000},
  {fuseki13491,2,"Fuseki493",576,2.000000},
  {fuseki13492,2,"Fuseki494",684,1.000000},
  {fuseki13493,2,"Fuseki495",797,1.000000},
  {fuseki13494,2,"Fuseki496",760,1.000000},
  {fuseki13495,2,"Fuseki497",577,1.000000},
  {fuseki13496,2,"Fuseki498",834,1.000000},
  {fuseki13497,2,"Fuseki499",540,1.000000},
  {fuseki13498,2,"Fuseki500",793,1.000000},
  {fuseki13499,3,"Fuseki501",761,10.000000},
  {fuseki13500,3,"Fuseki502",687,4.000000},
  {fuseki13501,2,"Fuseki503",532,5.000000},
  {fuseki13502,2,"Fuseki504",532,3.000000},
  {fuseki13503,2,"Fuseki505",799,2.000000},
  {fuseki13504,2,"Fuseki506",835,2.000000},
  {fuseki13505,2,"Fuseki507",613,1.000000},
  {fuseki13506,2,"Fuseki508",576,1.000000},
  {fuseki13507,3,"Fuseki509",532,9.000000},
  {fuseki13508,3,"Fuseki510",829,2.000000},
  {fuseki13509,3,"Fuseki511",762,2.000000},
  {fuseki13510,3,"Fuseki512",792,1.000000},
  {fuseki13511,4,"Fuseki513",831,5.000000},
  {fuseki13512,4,"Fuseki514",537,2.000000},
  {fuseki13513,4,"Fuseki515",684,2.000000},
  {fuseki13514,4,"Fuseki516",754,1.000000},
  {fuseki13515,4,"Fuseki517",795,1.000000},
  {fuseki13516,4,"Fuseki518",685,1.000000},
  {fuseki13517,4,"Fuseki519",832,1.000000},
  {fuseki13518,4,"Fuseki520",686,1.000000},
  {fuseki13519,2,"Fuseki521",798,4.000000},
  {fuseki13520,2,"Fuseki522",577,2.000000},
  {fuseki13521,2,"Fuseki523",569,2.000000},
  {fuseki13522,2,"Fuseki524",575,1.000000},
  {fuseki13523,2,"Fuseki525",612,1.000000},
  {fuseki13524,2,"Fuseki526",533,1.000000},
  {fuseki13525,2,"Fuseki527",828,1.000000},
  {fuseki13526,2,"Fuseki528",717,1.000000},
  {fuseki13527,4,"Fuseki529",614,7.000000},
  {fuseki13528,4,"Fuseki530",613,1.000000},
  {fuseki13529,4,"Fuseki531",792,1.000000},
  {fuseki13530,4,"Fuseki532",607,1.000000},
  {fuseki13531,4,"Fuseki533",680,1.000000},
  {fuseki13532,4,"Fuseki534",831,1.000000},
  {fuseki13533,4,"Fuseki535",830,2.000000},
  {fuseki13534,4,"Fuseki536",687,1.000000},
  {fuseki13535,4,"Fuseki537",684,1.000000},
  {fuseki13536,4,"Fuseki538",535,1.000000},
  {fuseki13537,4,"Fuseki539",688,1.000000},
  {fuseki13538,4,"Fuseki540",688,1.000000},
  {fuseki13539,4,"Fuseki541",643,1.000000},
  {fuseki13540,4,"Fuseki542",795,1.000000},
  {fuseki13541,4,"Fuseki543",724,1.000000},
  {fuseki13542,4,"Fuseki544",576,1.000000},
  {fuseki13543,4,"Fuseki545",613,1.000000},
  {fuseki13544,4,"Fuseki546",831,3.000000},
  {fuseki13545,4,"Fuseki547",614,2.000000},
  {fuseki13546,4,"Fuseki548",724,1.000000},
  {fuseki13547,4,"Fuseki549",643,1.000000},
  {fuseki13548,4,"Fuseki550",643,1.000000},
  {fuseki13549,4,"Fuseki551",797,1.000000},
  {fuseki13550,4,"Fuseki552",795,1.000000},
  {fuseki13551,4,"Fuseki553",573,1.000000},
  {fuseki13552,4,"Fuseki554",725,1.000000},
  {fuseki13553,3,"Fuseki555",792,5.000000},
  {fuseki13554,3,"Fuseki556",836,3.000000},
  {fuseki13555,3,"Fuseki557",607,1.000000},
  {fuseki13556,3,"Fuseki558",569,1.000000},
  {fuseki13557,3,"Fuseki559",836,1.000000},
  {fuseki13558,2,"Fuseki560",532,4.000000},
  {fuseki13559,2,"Fuseki561",569,4.000000},
  {fuseki13560,2,"Fuseki562",644,1.000000},
  {fuseki13561,2,"Fuseki563",681,1.000000},
  {fuseki13562,2,"Fuseki564",576,1.000000},
  {fuseki13563,2,"Fuseki565",539,1.000000},
  {fuseki13564,3,"Fuseki566",532,2.000000},
  {fuseki13565,3,"Fuseki567",835,2.000000},
  {fuseki13566,3,"Fuseki568",792,2.000000},
  {fuseki13567,3,"Fuseki569",606,2.000000},
  {fuseki13568,3,"Fuseki570",754,1.000000},
  {fuseki13569,3,"Fuseki571",536,1.000000},
  {fuseki13570,3,"Fuseki572",791,1.000000},
  {fuseki13571,3,"Fuseki573",793,1.000000},
  {fuseki13572,4,"Fuseki574",614,4.000000},
  {fuseki13573,4,"Fuseki575",538,3.000000},
  {fuseki13574,4,"Fuseki576",717,1.000000},
  {fuseki13575,4,"Fuseki577",762,1.000000},
  {fuseki13576,4,"Fuseki578",755,1.000000},
  {fuseki13577,4,"Fuseki579",725,1.000000},
  {fuseki13578,2,"Fuseki580",570,6.000000},
  {fuseki13579,2,"Fuseki581",533,2.000000},
  {fuseki13580,2,"Fuseki582",717,1.000000},
  {fuseki13581,2,"Fuseki583",569,1.000000},
  {fuseki13582,2,"Fuseki584",533,1.000000},
  {fuseki13583,4,"Fuseki585",643,2.000000},
  {fuseki13584,4,"Fuseki586",834,2.000000},
  {fuseki13585,4,"Fuseki587",831,2.000000},
  {fuseki13586,4,"Fuseki588",651,1.000000},
  {fuseki13587,4,"Fuseki589",573,1.000000},
  {fuseki13588,4,"Fuseki590",795,1.000000},
  {fuseki13589,4,"Fuseki591",721,1.000000},
  {fuseki13590,4,"Fuseki592",680,1.000000},
  {fuseki13591,3,"Fuseki593",540,4.000000},
  {fuseki13592,3,"Fuseki594",533,3.000000},
  {fuseki13593,3,"Fuseki595",607,2.000000},
  {fuseki13594,3,"Fuseki596",534,1.000000},
  {fuseki13595,3,"Fuseki597",534,1.000000},
  {fuseki13596,3,"Fuseki598",836,8.000000},
  {fuseki13597,3,"Fuseki599",570,2.000000},
  {fuseki13598,3,"Fuseki600",831,1.000000},
  {fuseki13599,3,"Fuseki601",540,4.000000},
  {fuseki13600,3,"Fuseki602",569,2.000000},
  {fuseki13601,3,"Fuseki603",835,2.000000},
  {fuseki13602,3,"Fuseki604",833,1.000000},
  {fuseki13603,3,"Fuseki605",792,1.000000},
  {fuseki13604,3,"Fuseki606",836,1.000000},
  {fuseki13605,2,"Fuseki607",835,4.000000},
  {fuseki13606,2,"Fuseki608",799,2.000000},
  {fuseki13607,2,"Fuseki609",540,1.000000},
  {fuseki13608,2,"Fuseki610",533,1.000000},
  {fuseki13609,2,"Fuseki611",577,1.000000},
  {fuseki13610,2,"Fuseki612",606,1.000000},
  {fuseki13611,4,"Fuseki613",576,3.000000},
  {fuseki13612,4,"Fuseki614",688,2.000000},
  {fuseki13613,4,"Fuseki615",680,2.000000},
  {fuseki13614,4,"Fuseki616",607,1.000000},
  {fuseki13615,4,"Fuseki617",606,1.000000},
  {fuseki13616,4,"Fuseki618",535,1.000000},
  {fuseki13617,3,"Fuseki619",540,3.000000},
  {fuseki13618,3,"Fuseki620",576,3.000000},
  {fuseki13619,3,"Fuseki621",791,3.000000},
  {fuseki13620,3,"Fuseki622",754,1.000000},
  {fuseki13621,4,"Fuseki623",795,2.000000},
  {fuseki13622,4,"Fuseki624",832,1.000000},
  {fuseki13623,4,"Fuseki625",650,1.000000},
  {fuseki13624,4,"Fuseki626",795,1.000000},
  {fuseki13625,4,"Fuseki627",754,1.000000},
  {fuseki13626,4,"Fuseki628",607,1.000000},
  {fuseki13627,4,"Fuseki629",795,1.000000},
  {fuseki13628,4,"Fuseki630",762,1.000000},
  {fuseki13629,4,"Fuseki631",725,1.000000},
  {fuseki13630,2,"Fuseki632",798,4.000000},
  {fuseki13631,2,"Fuseki633",532,1.000000},
  {fuseki13632,2,"Fuseki634",829,1.000000},
  {fuseki13633,2,"Fuseki635",576,1.000000},
  {fuseki13634,2,"Fuseki636",791,1.000000},
  {fuseki13635,2,"Fuseki637",799,1.000000},
  {fuseki13636,2,"Fuseki638",607,1.000000},
  {fuseki13637,3,"Fuseki639",532,4.000000},
  {fuseki13638,3,"Fuseki640",577,3.000000},
  {fuseki13639,3,"Fuseki641",539,1.000000},
  {fuseki13640,3,"Fuseki642",614,1.000000},
  {fuseki13641,3,"Fuseki643",570,1.000000},
  {fuseki13642,3,"Fuseki644",828,5.000000},
  {fuseki13643,3,"Fuseki645",569,2.000000},
  {fuseki13644,3,"Fuseki646",535,1.000000},
  {fuseki13645,3,"Fuseki647",539,1.000000},
  {fuseki13646,3,"Fuseki648",755,1.000000},
  {fuseki13647,4,"Fuseki649",606,5.000000},
  {fuseki13648,4,"Fuseki650",534,2.000000},
  {fuseki13649,4,"Fuseki651",651,1.000000},
  {fuseki13650,4,"Fuseki652",797,1.000000},
  {fuseki13651,4,"Fuseki653",535,1.000000},
  {fuseki13652,3,"Fuseki654",536,4.000000},
  {fuseki13653,3,"Fuseki655",569,3.000000},
  {fuseki13654,3,"Fuseki656",761,1.000000},
  {fuseki13655,3,"Fuseki657",607,1.000000},
  {fuseki13656,3,"Fuseki658",606,1.000000},
  {fuseki13657,4,"Fuseki659",762,7.000000},
  {fuseki13658,4,"Fuseki660",760,3.000000},
  {fuseki13659,3,"Fuseki661",755,8.000000},
  {fuseki13660,3,"Fuseki662",532,1.000000},
  {fuseki13661,3,"Fuseki663",539,1.000000},
  {fuseki13662,3,"Fuseki664",570,3.000000},
  {fuseki13663,3,"Fuseki665",836,2.000000},
  {fuseki13664,3,"Fuseki666",791,2.000000},
  {fuseki13665,3,"Fuseki667",760,1.000000},
  {fuseki13666,3,"Fuseki668",614,1.000000},
  {fuseki13667,3,"Fuseki669",569,1.000000},
  {fuseki13668,4,"Fuseki670",834,6.000000},
  {fuseki13669,4,"Fuseki671",534,2.000000},
  {fuseki13670,4,"Fuseki672",834,1.000000},
  {fuseki13671,4,"Fuseki673",535,1.000000},
  {fuseki13672,4,"Fuseki674",832,2.000000},
  {fuseki13673,4,"Fuseki675",606,2.000000},
  {fuseki13674,4,"Fuseki676",576,2.000000},
  {fuseki13675,4,"Fuseki677",572,1.000000},
  {fuseki13676,4,"Fuseki678",829,1.000000},
  {fuseki13677,4,"Fuseki679",834,1.000000},
  {fuseki13678,4,"Fuseki680",834,1.000000},
  {fuseki13679,2,"Fuseki681",792,4.000000},
  {fuseki13680,2,"Fuseki682",795,2.000000},
  {fuseki13681,2,"Fuseki683",535,1.000000},
  {fuseki13682,2,"Fuseki684",722,1.000000},
  {fuseki13683,2,"Fuseki685",792,1.000000},
  {fuseki13684,2,"Fuseki686",577,2.000000},
  {fuseki13685,2,"Fuseki687",533,2.000000},
  {fuseki13686,2,"Fuseki688",798,2.000000},
  {fuseki13687,2,"Fuseki689",799,1.000000},
  {fuseki13688,2,"Fuseki690",606,1.000000},
  {fuseki13689,2,"Fuseki691",576,1.000000},
  {fuseki13690,3,"Fuseki692",540,3.000000},
  {fuseki13691,3,"Fuseki693",798,2.000000},
  {fuseki13692,3,"Fuseki694",577,2.000000},
  {fuseki13693,3,"Fuseki695",539,1.000000},
  {fuseki13694,3,"Fuseki696",793,1.000000},
  {fuseki13695,3,"Fuseki697",791,4.000000},
  {fuseki13696,3,"Fuseki698",798,3.000000},
  {fuseki13697,3,"Fuseki699",538,1.000000},
  {fuseki13698,3,"Fuseki700",756,1.000000},
  {fuseki13699,2,"Fuseki701",798,3.000000},
  {fuseki13700,2,"Fuseki702",798,2.000000},
  {fuseki13701,2,"Fuseki703",569,1.000000},
  {fuseki13702,2,"Fuseki704",760,1.000000},
  {fuseki13703,2,"Fuseki705",540,1.000000},
  {fuseki13704,2,"Fuseki706",539,1.000000},
  {fuseki13705,3,"Fuseki707",836,7.000000},
  {fuseki13706,3,"Fuseki708",834,1.000000},
  {fuseki13707,3,"Fuseki709",799,1.000000},
  {fuseki13708,3,"Fuseki710",762,6.000000},
  {fuseki13709,3,"Fuseki711",533,2.000000},
  {fuseki13710,3,"Fuseki712",836,1.000000},
  {fuseki13711,5,"Fuseki713",538,3.000000},
  {fuseki13712,5,"Fuseki714",793,3.000000},
  {fuseki13713,5,"Fuseki715",681,1.000000},
  {fuseki13714,5,"Fuseki716",761,1.000000},
  {fuseki13715,5,"Fuseki717",538,1.000000},
  {fuseki13716,4,"Fuseki718",576,2.000000},
  {fuseki13717,4,"Fuseki719",760,1.000000},
  {fuseki13718,4,"Fuseki720",680,1.000000},
  {fuseki13719,4,"Fuseki721",834,1.000000},
  {fuseki13720,4,"Fuseki722",831,1.000000},
  {fuseki13721,4,"Fuseki723",684,1.000000},
  {fuseki13722,4,"Fuseki724",725,1.000000},
  {fuseki13723,3,"Fuseki725",799,5.000000},
  {fuseki13724,3,"Fuseki726",797,3.000000},
  {fuseki13725,2,"Fuseki727",792,3.000000},
  {fuseki13726,2,"Fuseki728",570,2.000000},
  {fuseki13727,2,"Fuseki729",569,1.000000},
  {fuseki13728,2,"Fuseki730",829,1.000000},
  {fuseki13729,2,"Fuseki731",643,1.000000},
  {fuseki13730,4,"Fuseki732",613,3.000000},
  {fuseki13731,4,"Fuseki733",834,2.000000},
  {fuseki13732,4,"Fuseki734",574,1.000000},
  {fuseki13733,4,"Fuseki735",686,1.000000},
  {fuseki13734,4,"Fuseki736",614,1.000000},
  {fuseki13735,5,"Fuseki737",798,4.000000},
  {fuseki13736,5,"Fuseki738",754,1.000000},
  {fuseki13737,5,"Fuseki739",761,1.000000},
  {fuseki13738,5,"Fuseki740",799,1.000000},
  {fuseki13739,5,"Fuseki741",613,1.000000},
  {fuseki13740,4,"Fuseki742",614,7.000000},
  {fuseki13741,4,"Fuseki743",688,1.000000},
  {fuseki13742,4,"Fuseki744",539,8.000000},
  {fuseki13743,3,"Fuseki745",761,3.000000},
  {fuseki13744,3,"Fuseki746",538,1.000000},
  {fuseki13745,3,"Fuseki747",754,1.000000},
  {fuseki13746,3,"Fuseki748",570,1.000000},
  {fuseki13747,3,"Fuseki749",569,1.000000},
  {fuseki13748,3,"Fuseki750",643,1.000000},
  {fuseki13749,4,"Fuseki751",614,2.000000},
  {fuseki13750,4,"Fuseki752",717,2.000000},
  {fuseki13751,4,"Fuseki753",681,1.000000},
  {fuseki13752,4,"Fuseki754",828,1.000000},
  {fuseki13753,4,"Fuseki755",537,1.000000},
  {fuseki13754,4,"Fuseki756",686,1.000000},
  {fuseki13755,4,"Fuseki757",793,2.000000},
  {fuseki13756,4,"Fuseki758",570,2.000000},
  {fuseki13757,4,"Fuseki759",643,1.000000},
  {fuseki13758,4,"Fuseki760",762,1.000000},
  {fuseki13759,4,"Fuseki761",797,1.000000},
  {fuseki13760,4,"Fuseki762",680,1.000000},
  {fuseki13761,4,"Fuseki763",569,2.000000},
  {fuseki13762,4,"Fuseki764",792,1.000000},
  {fuseki13763,4,"Fuseki765",831,1.000000},
  {fuseki13764,4,"Fuseki766",575,1.000000},
  {fuseki13765,4,"Fuseki767",680,1.000000},
  {fuseki13766,4,"Fuseki768",540,1.000000},
  {fuseki13767,4,"Fuseki769",537,1.000000},
  {fuseki13768,2,"Fuseki770",798,2.000000},
  {fuseki13769,2,"Fuseki771",612,2.000000},
  {fuseki13770,2,"Fuseki772",724,1.000000},
  {fuseki13771,2,"Fuseki773",576,1.000000},
  {fuseki13772,2,"Fuseki774",725,1.000000},
  {fuseki13773,2,"Fuseki775",830,1.000000},
  {fuseki13774,3,"Fuseki776",792,3.000000},
  {fuseki13775,3,"Fuseki777",791,2.000000},
  {fuseki13776,3,"Fuseki778",762,1.000000},
  {fuseki13777,3,"Fuseki779",836,1.000000},
  {fuseki13778,3,"Fuseki780",575,1.000000},
  {fuseki13779,2,"Fuseki781",761,8.000000},
  {fuseki13780,2,"Fuseki782",791,4.000000},
  {fuseki13781,2,"Fuseki783",828,2.000000},
  {fuseki13782,6,"Fuseki784",797,5.000000},
  {fuseki13783,6,"Fuseki785",799,2.000000},
  {fuseki13784,5,"Fuseki786",831,3.000000},
  {fuseki13785,5,"Fuseki787",791,1.000000},
  {fuseki13786,5,"Fuseki788",572,1.000000},
  {fuseki13787,5,"Fuseki789",536,1.000000},
  {fuseki13788,5,"Fuseki790",575,1.000000},
  {fuseki13789,3,"Fuseki791",540,3.000000},
  {fuseki13790,3,"Fuseki792",792,2.000000},
  {fuseki13791,3,"Fuseki793",834,1.000000},
  {fuseki13792,3,"Fuseki794",577,1.000000},
  {fuseki13793,4,"Fuseki795",687,2.000000},
  {fuseki13794,4,"Fuseki796",796,1.000000},
  {fuseki13795,4,"Fuseki797",614,1.000000},
  {fuseki13796,4,"Fuseki798",535,1.000000},
  {fuseki13797,4,"Fuseki799",651,1.000000},
  {fuseki13798,4,"Fuseki800",762,1.000000},
  {fuseki13799,5,"Fuseki801",536,2.000000},
  {fuseki13800,5,"Fuseki802",725,1.000000},
  {fuseki13801,5,"Fuseki803",608,1.000000},
  {fuseki13802,5,"Fuseki804",761,1.000000},
  {fuseki13803,5,"Fuseki805",831,1.000000},
  {fuseki13804,5,"Fuseki806",571,1.000000},
  {fuseki13805,5,"Fuseki807",760,7.000000},
  {fuseki13806,2,"Fuseki808",799,2.000000},
  {fuseki13807,2,"Fuseki809",792,2.000000},
  {fuseki13808,2,"Fuseki810",540,1.000000},
  {fuseki13809,2,"Fuseki811",569,1.000000},
  {fuseki13810,2,"Fuseki812",648,1.000000},
  {fuseki13811,4,"Fuseki813",833,2.000000},
  {fuseki13812,4,"Fuseki814",688,2.000000},
  {fuseki13813,4,"Fuseki815",536,2.000000},
  {fuseki13814,4,"Fuseki816",570,1.000000},
  {fuseki13815,3,"Fuseki817",532,3.000000},
  {fuseki13816,3,"Fuseki818",792,2.000000},
  {fuseki13817,3,"Fuseki819",834,1.000000},
  {fuseki13818,3,"Fuseki820",614,1.000000},
  {fuseki13819,5,"Fuseki821",572,2.000000},
  {fuseki13820,5,"Fuseki822",614,2.000000},
  {fuseki13821,5,"Fuseki823",833,1.000000},
  {fuseki13822,5,"Fuseki824",831,1.000000},
  {fuseki13823,5,"Fuseki825",535,1.000000},
  {fuseki13824,4,"Fuseki826",533,4.000000},
  {fuseki13825,4,"Fuseki827",688,1.000000},
  {fuseki13826,4,"Fuseki828",791,1.000000},
  {fuseki13827,4,"Fuseki829",828,1.000000},
  {fuseki13828,3,"Fuseki830",836,5.000000},
  {fuseki13829,3,"Fuseki831",791,1.000000},
  {fuseki13830,3,"Fuseki832",534,1.000000},
  {fuseki13831,3,"Fuseki833",836,6.000000},
  {fuseki13832,3,"Fuseki834",829,1.000000},
  {fuseki13833,4,"Fuseki835",614,4.000000},
  {fuseki13834,4,"Fuseki836",718,1.000000},
  {fuseki13835,4,"Fuseki837",831,1.000000},
  {fuseki13836,4,"Fuseki838",575,1.000000},
  {fuseki13837,4,"Fuseki839",613,3.000000},
  {fuseki13838,4,"Fuseki840",830,2.000000},
  {fuseki13839,4,"Fuseki841",651,1.000000},
  {fuseki13840,4,"Fuseki842",570,1.000000},
  {fuseki13841,5,"Fuseki843",577,5.000000},
  {fuseki13842,5,"Fuseki844",536,1.000000},
  {fuseki13843,5,"Fuseki845",762,1.000000},
  {fuseki13844,2,"Fuseki846",532,4.000000},
  {fuseki13845,2,"Fuseki847",798,2.000000},
  {fuseki13846,2,"Fuseki848",532,1.000000},
  {fuseki13847,5,"Fuseki849",687,3.000000},
  {fuseki13848,5,"Fuseki850",538,2.000000},
  {fuseki13849,5,"Fuseki851",680,1.000000},
  {fuseki13850,5,"Fuseki852",832,1.000000},
  {fuseki13851,5,"Fuseki853",570,1.000000},
  {fuseki13852,5,"Fuseki854",613,1.000000},
  {fuseki13853,5,"Fuseki855",687,1.000000},
  {fuseki13854,5,"Fuseki856",688,1.000000},
  {fuseki13855,5,"Fuseki857",760,1.000000},
  {fuseki13856,5,"Fuseki858",832,1.000000},
  {fuseki13857,5,"Fuseki859",835,1.000000},
  {fuseki13858,3,"Fuseki860",532,3.000000},
  {fuseki13859,3,"Fuseki861",533,1.000000},
  {fuseki13860,3,"Fuseki862",613,1.000000},
  {fuseki13861,3,"Fuseki863",576,1.000000},
  {fuseki13862,3,"Fuseki864",533,1.000000},
  {fuseki13863,3,"Fuseki865",577,4.000000},
  {fuseki13864,3,"Fuseki866",613,1.000000},
  {fuseki13865,3,"Fuseki867",798,1.000000},
  {fuseki13866,3,"Fuseki868",606,1.000000},
  {fuseki13867,3,"Fuseki869",532,3.000000},
  {fuseki13868,3,"Fuseki870",798,2.000000},
  {fuseki13869,3,"Fuseki871",571,1.000000},
  {fuseki13870,3,"Fuseki872",791,1.000000},
  {fuseki13871,4,"Fuseki873",614,2.000000},
  {fuseki13872,4,"Fuseki874",793,2.000000},
  {fuseki13873,4,"Fuseki875",760,1.000000},
  {fuseki13874,4,"Fuseki876",613,1.000000},
  {fuseki13875,4,"Fuseki877",576,1.000000},
  {fuseki13876,4,"Fuseki878",538,2.000000},
  {fuseki13877,4,"Fuseki879",575,2.000000},
  {fuseki13878,4,"Fuseki880",687,2.000000},
  {fuseki13879,4,"Fuseki881",795,1.000000},
  {fuseki13880,4,"Fuseki882",725,5.000000},
  {fuseki13881,4,"Fuseki883",573,1.000000},
  {fuseki13882,4,"Fuseki884",688,1.000000},
  {fuseki13883,4,"Fuseki885",834,2.000000},
  {fuseki13884,4,"Fuseki886",762,1.000000},
  {fuseki13885,4,"Fuseki887",833,1.000000},
  {fuseki13886,4,"Fuseki888",796,1.000000},
  {fuseki13887,4,"Fuseki889",830,1.000000},
  {fuseki13888,4,"Fuseki890",830,3.000000},
  {fuseki13889,4,"Fuseki891",538,2.000000},
  {fuseki13890,4,"Fuseki892",536,1.000000},
  {fuseki13891,5,"Fuseki893",797,2.000000},
  {fuseki13892,5,"Fuseki894",539,2.000000},
  {fuseki13893,5,"Fuseki895",724,2.000000},
  {fuseki13894,3,"Fuseki896",576,2.000000},
  {fuseki13895,3,"Fuseki897",800,2.000000},
  {fuseki13896,3,"Fuseki898",836,1.000000},
  {fuseki13897,3,"Fuseki899",651,1.000000},
  {fuseki13898,3,"Fuseki900",792,5.000000},
  {fuseki13899,3,"Fuseki901",799,1.000000},
  {fuseki13900,5,"Fuseki902",535,2.000000},
  {fuseki13901,5,"Fuseki903",536,2.000000},
  {fuseki13902,5,"Fuseki904",651,1.000000},
  {fuseki13903,5,"Fuseki905",613,1.000000},
  {fuseki13904,4,"Fuseki906",651,5.000000},
  {fuseki13905,4,"Fuseki907",534,1.000000},
  {fuseki13906,4,"Fuseki908",834,6.000000},
  {fuseki13907,3,"Fuseki909",570,3.000000},
  {fuseki13908,3,"Fuseki910",534,2.000000},
  {fuseki13909,3,"Fuseki911",569,1.000000},
  {fuseki13910,4,"Fuseki912",725,2.000000},
  {fuseki13911,4,"Fuseki913",830,2.000000},
  {fuseki13912,4,"Fuseki914",833,1.000000},
  {fuseki13913,4,"Fuseki915",651,1.000000},
  {fuseki13914,3,"Fuseki916",792,2.000000},
  {fuseki13915,3,"Fuseki917",577,2.000000},
  {fuseki13916,3,"Fuseki918",791,1.000000},
  {fuseki13917,3,"Fuseki919",540,1.000000},
  {fuseki13918,3,"Fuseki920",836,3.000000},
  {fuseki13919,3,"Fuseki921",762,1.000000},
  {fuseki13920,3,"Fuseki922",538,1.000000},
  {fuseki13921,3,"Fuseki923",570,1.000000},
  {fuseki13922,3,"Fuseki924",540,3.000000},
  {fuseki13923,3,"Fuseki925",577,2.000000},
  {fuseki13924,3,"Fuseki926",534,1.000000},
  {fuseki13925,4,"Fuseki927",536,2.000000},
  {fuseki13926,4,"Fuseki928",614,1.000000},
  {fuseki13927,4,"Fuseki929",754,1.000000},
  {fuseki13928,4,"Fuseki930",537,1.000000},
  {fuseki13929,4,"Fuseki931",799,1.000000},
  {fuseki13930,4,"Fuseki932",762,2.000000},
  {fuseki13931,4,"Fuseki933",651,1.000000},
  {fuseki13932,4,"Fuseki934",570,1.000000},
  {fuseki13933,4,"Fuseki935",797,1.000000},
  {fuseki13934,4,"Fuseki936",833,1.000000},
  {fuseki13935,3,"Fuseki937",532,3.000000},
  {fuseki13936,3,"Fuseki938",577,1.000000},
  {fuseki13937,3,"Fuseki939",536,1.000000},
  {fuseki13938,3,"Fuseki940",576,1.000000},
  {fuseki13939,4,"Fuseki941",534,1.000000},
  {fuseki13940,4,"Fuseki942",796,1.000000},
  {fuseki13941,4,"Fuseki943",725,1.000000},
  {fuseki13942,4,"Fuseki944",536,1.000000},
  {fuseki13943,4,"Fuseki945",754,1.000000},
  {fuseki13944,4,"Fuseki946",681,1.000000},
  {fuseki13945,2,"Fuseki947",570,1.000000},
  {fuseki13946,2,"Fuseki948",798,1.000000},
  {fuseki13947,2,"Fuseki949",791,1.000000},
  {fuseki13948,2,"Fuseki950",539,1.000000},
  {fuseki13949,2,"Fuseki951",607,1.000000},
  {fuseki13950,2,"Fuseki952",681,1.000000},
  {fuseki13951,3,"Fuseki953",532,4.000000},
  {fuseki13952,3,"Fuseki954",835,1.000000},
  {fuseki13953,3,"Fuseki955",570,1.000000},
  {fuseki13954,5,"Fuseki956",762,2.000000},
  {fuseki13955,5,"Fuseki957",796,1.000000},
  {fuseki13956,5,"Fuseki958",796,1.000000},
  {fuseki13957,5,"Fuseki959",651,1.000000},
  {fuseki13958,5,"Fuseki960",793,1.000000},
  {fuseki13959,4,"Fuseki961",680,1.000000},
  {fuseki13960,4,"Fuseki962",687,1.000000},
  {fuseki13961,4,"Fuseki963",571,1.000000},
  {fuseki13962,4,"Fuseki964",681,1.000000},
  {fuseki13963,4,"Fuseki965",573,1.000000},
  {fuseki13964,4,"Fuseki966",717,1.000000},
  {fuseki13965,4,"Fuseki967",831,3.000000},
  {fuseki13966,4,"Fuseki968",797,1.000000},
  {fuseki13967,4,"Fuseki969",794,1.000000},
  {fuseki13968,4,"Fuseki970",536,1.000000},
  {fuseki13969,4,"Fuseki971",762,4.000000},
  {fuseki13970,4,"Fuseki972",607,1.000000},
  {fuseki13971,4,"Fuseki973",687,1.000000},
  {fuseki13972,5,"Fuseki974",725,1.000000},
  {fuseki13973,5,"Fuseki975",684,1.000000},
  {fuseki13974,5,"Fuseki976",682,1.000000},
  {fuseki13975,5,"Fuseki977",791,1.000000},
  {fuseki13976,5,"Fuseki978",650,1.000000},
  {fuseki13977,5,"Fuseki979",834,1.000000},
  {fuseki13978,3,"Fuseki980",569,2.000000},
  {fuseki13979,3,"Fuseki981",540,2.000000},
  {fuseki13980,3,"Fuseki982",538,1.000000},
  {fuseki13981,3,"Fuseki983",792,1.000000},
  {fuseki13982,4,"Fuseki984",795,1.000000},
  {fuseki13983,4,"Fuseki985",651,1.000000},
  {fuseki13984,4,"Fuseki986",725,1.000000},
  {fuseki13985,4,"Fuseki987",569,1.000000},
  {fuseki13986,4,"Fuseki988",540,1.000000},
  {fuseki13987,4,"Fuseki989",572,1.000000},
  {fuseki13988,5,"Fuseki990",726,4.000000},
  {fuseki13989,5,"Fuseki991",830,1.000000},
  {fuseki13990,2,"Fuseki992",532,2.000000},
  {fuseki13991,2,"Fuseki993",539,1.000000},
  {fuseki13992,2,"Fuseki994",570,1.000000},
  {fuseki13993,2,"Fuseki995",761,1.000000},
  {fuseki13994,3,"Fuseki996",613,2.000000},
  {fuseki13995,3,"Fuseki997",576,2.000000},
  {fuseki13996,3,"Fuseki998",830,1.000000},
  {fuseki13997,5,"Fuseki999",573,2.000000},
  {fuseki13998,5,"Fuseki1000",717,1.000000},
  {fuseki13999,5,"Fuseki1001",649,1.000000},
  {fuseki131000,5,"Fuseki1002",643,1.000000},
  {fuseki131001,5,"Fuseki1003",536,2.000000},
  {fuseki131002,5,"Fuseki1004",614,2.000000},
  {fuseki131003,5,"Fuseki1005",725,1.000000},
  {fuseki131004,4,"Fuseki1006",538,3.000000},
  {fuseki131005,4,"Fuseki1007",536,1.000000},
  {fuseki131006,4,"Fuseki1008",537,1.000000},
  {fuseki131007,3,"Fuseki1009",532,2.000000},
  {fuseki131008,3,"Fuseki1010",791,2.000000},
  {fuseki131009,3,"Fuseki1011",539,1.000000},
  {fuseki131010,4,"Fuseki1012",725,5.000000},
  {fuseki131011,3,"Fuseki1013",798,2.000000},
  {fuseki131012,3,"Fuseki1014",576,2.000000},
  {fuseki131013,3,"Fuseki1015",799,1.000000},
  {fuseki131014,4,"Fuseki1016",575,1.000000},
  {fuseki131015,4,"Fuseki1017",606,1.000000},
  {fuseki131016,4,"Fuseki1018",535,1.000000},
  {fuseki131017,4,"Fuseki1019",539,1.000000},
  {fuseki131018,4,"Fuseki1020",537,1.000000},
  {fuseki131019,4,"Fuseki1021",830,3.000000},
  {fuseki131020,4,"Fuseki1022",870,1.000000},
  {fuseki131021,4,"Fuseki1023",798,1.000000},
  {fuseki131022,4,"Fuseki1024",573,1.000000},
  {fuseki131023,4,"Fuseki1025",688,1.000000},
  {fuseki131024,4,"Fuseki1026",831,1.000000},
  {fuseki131025,4,"Fuseki1027",612,1.000000},
  {fuseki131026,4,"Fuseki1028",796,1.000000},
  {fuseki131027,6,"Fuseki1029",613,5.000000},
  {fuseki131028,8,"Fuseki1030",679,1.000000},
  {fuseki131029,8,"Fuseki1031",681,1.000000},
  {fuseki131030,8,"Fuseki1032",794,1.000000},
  {fuseki131031,8,"Fuseki1033",642,1.000000},
  {fuseki131032,8,"Fuseki1034",678,1.000000},
  {fuseki131033,5,"Fuseki1035",762,3.000000},
  {fuseki131034,5,"Fuseki1036",832,1.000000},
  {fuseki131035,5,"Fuseki1037",651,1.000000},
  {fuseki131036,3,"Fuseki1038",532,3.000000},
  {fuseki131037,3,"Fuseki1039",538,1.000000},
  {fuseki131038,3,"Fuseki1040",577,1.000000},
  {fuseki131039,2,"Fuseki1041",836,1.000000},
  {fuseki131040,2,"Fuseki1042",577,1.000000},
  {fuseki131041,2,"Fuseki1043",829,1.000000},
  {fuseki131042,2,"Fuseki1044",614,1.000000},
  {fuseki131043,2,"Fuseki1045",792,1.000000},
  {fuseki131044,5,"Fuseki1046",572,3.000000},
  {fuseki131045,5,"Fuseki1047",761,1.000000},
  {fuseki131046,5,"Fuseki1048",832,1.000000},
  {fuseki131047,3,"Fuseki1049",829,3.000000},
  {fuseki131048,3,"Fuseki1050",792,1.000000},
  {fuseki131049,3,"Fuseki1051",754,1.000000},
  {fuseki131050,3,"Fuseki1052",828,5.000000},
  {fuseki131051,4,"Fuseki1053",762,2.000000},
  {fuseki131052,4,"Fuseki1054",606,1.000000},
  {fuseki131053,4,"Fuseki1055",831,1.000000},
  {fuseki131054,4,"Fuseki1056",687,1.000000},
  {fuseki131055,5,"Fuseki1057",833,2.000000},
  {fuseki131056,5,"Fuseki1058",574,2.000000},
  {fuseki131057,5,"Fuseki1059",681,1.000000},
  {fuseki131058,5,"Fuseki1060",723,1.000000},
  {fuseki131059,5,"Fuseki1061",725,1.000000},
  {fuseki131060,5,"Fuseki1062",578,1.000000},
  {fuseki131061,5,"Fuseki1063",762,1.000000},
  {fuseki131062,5,"Fuseki1064",832,1.000000},
  {fuseki131063,7,"Fuseki1065",644,5.000000},
  {fuseki131064,4,"Fuseki1066",832,2.000000},
  {fuseki131065,4,"Fuseki1067",794,1.000000},
  {fuseki131066,4,"Fuseki1068",680,1.000000},
  {fuseki131067,4,"Fuseki1069",571,1.000000},
  {fuseki131068,7,"Fuseki1070",574,2.000000},
  {fuseki131069,7,"Fuseki1071",687,1.000000},
  {fuseki131070,7,"Fuseki1072",651,1.000000},
  {fuseki131071,7,"Fuseki1073",725,1.000000},
  {fuseki131072,4,"Fuseki1074",835,4.000000},
  {fuseki131073,4,"Fuseki1075",836,1.000000},
  {fuseki131074,4,"Fuseki1076",643,1.000000},
  {fuseki131075,4,"Fuseki1077",754,1.000000},
  {fuseki131076,4,"Fuseki1078",797,1.000000},
  {fuseki131077,4,"Fuseki1079",536,1.000000},
  {fuseki131078,4,"Fuseki1080",643,1.000000},
  {fuseki131079,3,"Fuseki1081",613,2.000000},
  {fuseki131080,3,"Fuseki1082",791,1.000000},
  {fuseki131081,3,"Fuseki1083",791,1.000000},
  {fuseki131082,3,"Fuseki1084",830,1.000000},
  {fuseki131083,5,"Fuseki1085",681,4.000000},
  {fuseki131084,5,"Fuseki1086",828,1.000000},
  {fuseki131085,3,"Fuseki1087",798,2.000000},
  {fuseki131086,3,"Fuseki1088",539,1.000000},
  {fuseki131087,3,"Fuseki1089",725,1.000000},
  {fuseki131088,3,"Fuseki1090",836,1.000000},
  {fuseki131089,2,"Fuseki1091",835,2.000000},
  {fuseki131090,2,"Fuseki1092",828,1.000000},
  {fuseki131091,2,"Fuseki1093",834,1.000000},
  {fuseki131092,2,"Fuseki1094",607,1.000000},
  {fuseki131093,5,"Fuseki1095",643,5.000000},
  {fuseki131094,3,"Fuseki1096",540,2.000000},
  {fuseki131095,3,"Fuseki1097",651,1.000000},
  {fuseki131096,3,"Fuseki1098",570,1.000000},
  {fuseki131097,3,"Fuseki1099",539,1.000000},
  {fuseki131098,4,"Fuseki1100",797,5.000000},
  {fuseki131099,5,"Fuseki1101",680,2.000000},
  {fuseki131100,5,"Fuseki1102",535,2.000000},
  {fuseki131101,5,"Fuseki1103",614,1.000000},
  {fuseki131102,4,"Fuseki1104",795,1.000000},
  {fuseki131103,4,"Fuseki1105",689,1.000000},
  {fuseki131104,4,"Fuseki1106",718,1.000000},
  {fuseki131105,4,"Fuseki1107",830,1.000000},
  {fuseki131106,4,"Fuseki1108",537,1.000000},
  {fuseki131107,7,"Fuseki1109",759,4.000000},
  {fuseki131108,7,"Fuseki1110",799,1.000000},
  {fuseki131109,3,"Fuseki1111",797,3.000000},
  {fuseki131110,3,"Fuseki1112",830,1.000000},
  {fuseki131111,3,"Fuseki1113",791,1.000000},
  {fuseki131112,4,"Fuseki1114",794,1.000000},
  {fuseki131113,4,"Fuseki1115",754,1.000000},
  {fuseki131114,4,"Fuseki1116",607,1.000000},
  {fuseki131115,4,"Fuseki1117",687,1.000000},
  {fuseki131116,4,"Fuseki1118",680,1.000000},
  {fuseki131117,4,"Fuseki1119",834,3.000000},
  {fuseki131118,4,"Fuseki1120",792,1.000000},
  {fuseki131119,4,"Fuseki1121",793,1.000000},
  {fuseki131120,5,"Fuseki1122",680,2.000000},
  {fuseki131121,5,"Fuseki1123",573,1.000000},
  {fuseki131122,5,"Fuseki1124",651,1.000000},
  {fuseki131123,5,"Fuseki1125",537,1.000000},
  {fuseki131124,4,"Fuseki1126",535,1.000000},
  {fuseki131125,4,"Fuseki1127",795,1.000000},
  {fuseki131126,4,"Fuseki1128",538,1.000000},
  {fuseki131127,4,"Fuseki1129",614,1.000000},
  {fuseki131128,4,"Fuseki1130",832,1.000000},
  {fuseki131129,6,"Fuseki1131",680,5.000000},
  {fuseki131130,4,"Fuseki1132",613,1.000000},
  {fuseki131131,4,"Fuseki1133",762,1.000000},
  {fuseki131132,4,"Fuseki1134",611,1.000000},
  {fuseki131133,4,"Fuseki1135",797,1.000000},
  {fuseki131134,4,"Fuseki1136",538,1.000000},
  {fuseki131135,4,"Fuseki1137",614,2.000000},
  {fuseki131136,4,"Fuseki1138",606,1.000000},
  {fuseki131137,4,"Fuseki1139",651,1.000000},
  {fuseki131138,4,"Fuseki1140",754,1.000000},
  {fuseki131139,5,"Fuseki1141",831,3.000000},
  {fuseki131140,5,"Fuseki1142",571,1.000000},
  {fuseki131141,4,"Fuseki1143",606,2.000000},
  {fuseki131142,4,"Fuseki1144",614,1.000000},
  {fuseki131143,4,"Fuseki1145",795,1.000000},
  {fuseki131144,3,"Fuseki1146",606,2.000000},
  {fuseki131145,3,"Fuseki1147",570,1.000000},
  {fuseki131146,3,"Fuseki1148",539,1.000000},
  {fuseki131147,4,"Fuseki1149",606,1.000000},
  {fuseki131148,4,"Fuseki1150",717,1.000000},
  {fuseki131149,4,"Fuseki1151",754,1.000000},
  {fuseki131150,4,"Fuseki1152",573,1.000000},
  {fuseki131151,2,"Fuseki1153",799,2.000000},
  {fuseki131152,2,"Fuseki1154",799,1.000000},
  {fuseki131153,2,"Fuseki1155",570,1.000000},
  {fuseki131154,4,"Fuseki1156",830,3.000000},
  {fuseki131155,4,"Fuseki1157",755,1.000000},
  {fuseki131156,2,"Fuseki1158",829,3.000000},
  {fuseki131157,2,"Fuseki1159",836,1.000000},
  {fuseki131158,3,"Fuseki1160",835,2.000000},
  {fuseki131159,3,"Fuseki1161",792,1.000000},
  {fuseki131160,3,"Fuseki1162",576,1.000000},
  {fuseki131161,4,"Fuseki1163",537,3.000000},
  {fuseki131162,4,"Fuseki1164",831,1.000000},
  {fuseki131163,5,"Fuseki1165",755,2.000000},
  {fuseki131164,5,"Fuseki1166",754,2.000000},
  {fuseki131165,4,"Fuseki1167",829,2.000000},
  {fuseki131166,4,"Fuseki1168",724,1.000000},
  {fuseki131167,4,"Fuseki1169",791,1.000000},
  {fuseki131168,5,"Fuseki1170",762,2.000000},
  {fuseki131169,5,"Fuseki1171",797,1.000000},
  {fuseki131170,5,"Fuseki1172",761,1.000000},
  {fuseki131171,4,"Fuseki1173",686,4.000000},
  {fuseki131172,8,"Fuseki1174",760,4.000000},
  {fuseki131173,4,"Fuseki1175",791,1.000000},
  {fuseki131174,4,"Fuseki1176",572,1.000000},
  {fuseki131175,4,"Fuseki1177",607,1.000000},
  {fuseki131176,4,"Fuseki1178",569,1.000000},
  {fuseki131177,4,"Fuseki1179",790,3.000000},
  {fuseki131178,4,"Fuseki1180",793,1.000000},
  {fuseki131179,6,"Fuseki1181",795,1.000000},
  {fuseki131180,6,"Fuseki1182",684,1.000000},
  {fuseki131181,6,"Fuseki1183",573,1.000000},
  {fuseki131182,6,"Fuseki1184",754,1.000000},
  {fuseki131183,4,"Fuseki1185",835,1.000000},
  {fuseki131184,4,"Fuseki1186",797,1.000000},
  {fuseki131185,4,"Fuseki1187",537,1.000000},
  {fuseki131186,4,"Fuseki1188",573,1.000000},
  {fuseki131187,6,"Fuseki1189",716,4.000000},
  {fuseki131188,1,"Fuseki1190",830,1.000000},
  {fuseki131189,1,"Fuseki1191",570,1.000000},
  {fuseki131190,1,"Fuseki1192",835,1.000000},
  {fuseki131191,4,"Fuseki1193",834,2.000000},
  {fuseki131192,4,"Fuseki1194",613,1.000000},
  {fuseki131193,4,"Fuseki1195",831,1.000000},
  {fuseki131194,3,"Fuseki1196",534,2.000000},
  {fuseki131195,3,"Fuseki1197",576,1.000000},
  {fuseki131196,3,"Fuseki1198",828,1.000000},
  {fuseki131197,4,"Fuseki1199",651,3.000000},
  {fuseki131198,4,"Fuseki1200",538,1.000000},
  {fuseki131199,4,"Fuseki1201",651,1.000000},
  {fuseki131200,4,"Fuseki1202",532,1.000000},
  {fuseki131201,4,"Fuseki1203",536,1.000000},
  {fuseki131202,5,"Fuseki1204",569,3.000000},
  {fuseki131203,5,"Fuseki1205",791,1.000000},
  {fuseki131204,5,"Fuseki1206",535,2.000000},
  {fuseki131205,5,"Fuseki1207",761,1.000000},
  {fuseki131206,5,"Fuseki1208",613,1.000000},
  {fuseki131207,2,"Fuseki1209",533,2.000000},
  {fuseki131208,2,"Fuseki1210",836,1.000000},
  {fuseki131209,2,"Fuseki1211",570,1.000000},
  {fuseki131210,3,"Fuseki1212",836,3.000000},
  {fuseki131211,3,"Fuseki1213",791,1.000000},
  {fuseki131212,6,"Fuseki1214",606,3.000000},
  {fuseki131213,6,"Fuseki1215",572,1.000000},
  {fuseki131214,5,"Fuseki1216",537,4.000000},
  {fuseki131215,5,"Fuseki1217",830,3.000000},
  {fuseki131216,5,"Fuseki1218",833,1.000000},
  {fuseki131217,2,"Fuseki1219",539,1.000000},
  {fuseki131218,2,"Fuseki1220",762,1.000000},
  {fuseki131219,2,"Fuseki1221",614,1.000000},
  {fuseki131220,2,"Fuseki1222",835,1.000000},
  {fuseki131221,4,"Fuseki1223",688,1.000000},
  {fuseki131222,4,"Fuseki1224",614,1.000000},
  {fuseki131223,4,"Fuseki1225",835,1.000000},
  {fuseki131224,4,"Fuseki1226",724,1.000000},
  {fuseki131225,2,"Fuseki1227",725,1.000000},
  {fuseki131226,2,"Fuseki1228",793,1.000000},
  {fuseki131227,2,"Fuseki1229",829,1.000000},
  {fuseki131228,2,"Fuseki1230",570,1.000000},
  {fuseki131229,6,"Fuseki1231",723,4.000000},
  {fuseki131230,9,"Fuseki1232",799,4.000000},
  {fuseki131231,4,"Fuseki1233",614,4.000000},
  {fuseki131232,6,"Fuseki1234",680,3.000000},
  {fuseki131233,6,"Fuseki1235",866,1.000000},
  {fuseki131234,2,"Fuseki1236",799,2.000000},
  {fuseki131235,2,"Fuseki1237",532,1.000000},
  {fuseki131236,2,"Fuseki1238",576,1.000000},
  {fuseki131237,3,"Fuseki1239",754,4.000000},
  {fuseki131238,3,"Fuseki1240",871,2.000000},
  {fuseki131239,3,"Fuseki1241",534,1.000000},
  {fuseki131240,3,"Fuseki1242",571,1.000000},
  {fuseki131241,3,"Fuseki1243",569,2.000000},
  {fuseki131242,3,"Fuseki1244",577,1.000000},
  {fuseki131243,3,"Fuseki1245",755,1.000000},
  {fuseki131244,5,"Fuseki1246",614,3.000000},
  {fuseki131245,5,"Fuseki1247",651,1.000000},
  {fuseki131246,6,"Fuseki1248",536,3.000000},
  {fuseki131247,6,"Fuseki1249",607,1.000000},
  {fuseki131248,4,"Fuseki1250",570,1.000000},
  {fuseki131249,4,"Fuseki1251",540,1.000000},
  {fuseki131250,4,"Fuseki1252",535,1.000000},
  {fuseki131251,4,"Fuseki1253",724,1.000000},
  {fuseki131252,3,"Fuseki1254",577,2.000000},
  {fuseki131253,3,"Fuseki1255",532,1.000000},
  {fuseki131254,3,"Fuseki1256",799,1.000000},
  {fuseki131255,3,"Fuseki1257",576,1.000000},
  {fuseki131256,3,"Fuseki1258",540,1.000000},
  {fuseki131257,3,"Fuseki1259",835,1.000000},
  {fuseki131258,3,"Fuseki1260",606,1.000000},
  {fuseki131259,6,"Fuseki1261",725,2.000000},
  {fuseki131260,6,"Fuseki1262",571,1.000000},
  {fuseki131261,6,"Fuseki1263",644,1.000000},
  {fuseki131262,4,"Fuseki1264",573,1.000000},
  {fuseki131263,4,"Fuseki1265",724,1.000000},
  {fuseki131264,4,"Fuseki1266",688,1.000000},
  {fuseki131265,4,"Fuseki1267",644,1.000000},
  {fuseki131266,4,"Fuseki1268",687,2.000000},
  {fuseki131267,4,"Fuseki1269",538,1.000000},
  {fuseki131268,4,"Fuseki1270",688,1.000000},
  {fuseki131269,5,"Fuseki1271",531,4.000000},
  {fuseki131270,7,"Fuseki1272",754,3.000000},
  {fuseki131271,7,"Fuseki1273",614,1.000000},
  {fuseki131272,5,"Fuseki1274",535,1.000000},
  {fuseki131273,5,"Fuseki1275",684,1.000000},
  {fuseki131274,5,"Fuseki1276",532,1.000000},
  {fuseki131275,5,"Fuseki1277",536,1.000000},
  {fuseki131276,6,"Fuseki1278",681,2.000000},
  {fuseki131277,6,"Fuseki1279",574,1.000000},
  {fuseki131278,6,"Fuseki1280",687,1.000000},
  {fuseki131279,3,"Fuseki1281",792,1.000000},
  {fuseki131280,3,"Fuseki1282",540,1.000000},
  {fuseki131281,3,"Fuseki1283",799,1.000000},
  {fuseki131282,3,"Fuseki1284",834,1.000000},
  {fuseki131283,3,"Fuseki1285",687,4.000000},
  {fuseki131284,4,"Fuseki1286",680,1.000000},
  {fuseki131285,4,"Fuseki1287",795,1.000000},
  {fuseki131286,4,"Fuseki1288",537,1.000000},
  {fuseki131287,4,"Fuseki1289",832,1.000000},
  {fuseki131288,7,"Fuseki1290",762,4.000000},
  {fuseki131289,4,"Fuseki1291",687,1.000000},
  {fuseki131290,4,"Fuseki1292",754,1.000000},
  {fuseki131291,4,"Fuseki1293",536,1.000000},
  {fuseki131292,4,"Fuseki1294",651,1.000000},
  {fuseki131293,3,"Fuseki1295",540,4.000000},
  {fuseki131294,5,"Fuseki1296",725,1.000000},
  {fuseki131295,5,"Fuseki1297",607,1.000000},
  {fuseki131296,5,"Fuseki1298",612,1.000000},
  {fuseki131297,5,"Fuseki1299",643,1.000000},
  {fuseki131298,3,"Fuseki1300",754,2.000000},
  {fuseki131299,3,"Fuseki1301",829,1.000000},
  {fuseki131300,3,"Fuseki1302",571,1.000000},
  {fuseki131301,4,"Fuseki1303",834,3.000000},
  {fuseki131302,4,"Fuseki1304",761,1.000000},
  {fuseki131303,2,"Fuseki1305",570,2.000000},
  {fuseki131304,2,"Fuseki1306",607,1.000000},
  {fuseki131305,2,"Fuseki1307",797,1.000000},
  {fuseki131306,4,"Fuseki1308",795,1.000000},
  {fuseki131307,4,"Fuseki1309",535,1.000000},
  {fuseki131308,4,"Fuseki1310",833,1.000000},
  {fuseki131309,4,"Fuseki1311",534,1.000000},
  {fuseki131310,4,"Fuseki1312",536,2.000000},
  {fuseki131311,4,"Fuseki1313",721,1.000000},
  {fuseki131312,4,"Fuseki1314",834,1.000000},
  {fuseki131313,4,"Fuseki1315",688,2.000000},
  {fuseki131314,4,"Fuseki1316",831,1.000000},
  {fuseki131315,4,"Fuseki1317",607,1.000000},
  {fuseki131316,6,"Fuseki1318",502,2.000000},
  {fuseki131317,6,"Fuseki1319",725,1.000000},
  {fuseki131318,6,"Fuseki1320",539,1.000000},
  {fuseki131319,4,"Fuseki1321",795,1.000000},
  {fuseki131320,4,"Fuseki1322",725,1.000000},
  {fuseki131321,4,"Fuseki1323",799,1.000000},
  {fuseki131322,4,"Fuseki1324",872,1.000000},
  {fuseki131323,4,"Fuseki1325",830,3.000000},
  {fuseki131324,4,"Fuseki1326",536,1.000000},
  {fuseki131325,4,"Fuseki1327",571,1.000000},
  {fuseki131326,4,"Fuseki1328",762,1.000000},
  {fuseki131327,4,"Fuseki1329",832,1.000000},
  {fuseki131328,4,"Fuseki1330",831,1.000000},
  {fuseki131329,4,"Fuseki1331",576,1.000000},
  {fuseki131330,4,"Fuseki1332",645,1.000000},
  {fuseki131331,4,"Fuseki1333",760,1.000000},
  {fuseki131332,4,"Fuseki1334",798,1.000000},
  {fuseki131333,5,"Fuseki1335",614,2.000000},
  {fuseki131334,5,"Fuseki1336",540,1.000000},
  {fuseki131335,5,"Fuseki1337",537,1.000000},
  {fuseki131336,4,"Fuseki1338",614,1.000000},
  {fuseki131337,4,"Fuseki1339",607,1.000000},
  {fuseki131338,4,"Fuseki1340",717,1.000000},
  {fuseki131339,4,"Fuseki1341",651,1.000000},
  {fuseki131340,5,"Fuseki1342",761,4.000000},
  {fuseki131341,4,"Fuseki1343",834,2.000000},
  {fuseki131342,4,"Fuseki1344",535,1.000000},
  {fuseki131343,4,"Fuseki1345",681,1.000000},
  {fuseki131344,8,"Fuseki1346",796,2.000000},
  {fuseki131345,8,"Fuseki1347",726,2.000000},
  {fuseki131346,5,"Fuseki1348",538,1.000000},
  {fuseki131347,5,"Fuseki1349",725,1.000000},
  {fuseki131348,5,"Fuseki1350",643,1.000000},
  {fuseki131349,5,"Fuseki1351",607,1.000000},
  {fuseki131350,5,"Fuseki1352",651,3.000000},
  {fuseki131351,5,"Fuseki1353",688,1.000000},
  {fuseki131352,5,"Fuseki1354",606,2.000000},
  {fuseki131353,5,"Fuseki1355",755,1.000000},
  {fuseki131354,5,"Fuseki1356",754,1.000000},
  {fuseki131355,4,"Fuseki1357",830,1.000000},
  {fuseki131356,4,"Fuseki1358",606,1.000000},
  {fuseki131357,4,"Fuseki1359",537,1.000000},
  {fuseki131358,4,"Fuseki1360",540,1.000000},
  {fuseki131359,6,"Fuseki1361",570,2.000000},
  {fuseki131360,6,"Fuseki1362",792,1.000000},
  {fuseki131361,6,"Fuseki1363",829,1.000000},
  {fuseki131362,6,"Fuseki1364",681,2.000000},
  {fuseki131363,6,"Fuseki1365",568,2.000000},
  {fuseki131364,5,"Fuseki1366",539,2.000000},
  {fuseki131365,5,"Fuseki1367",680,1.000000},
  {fuseki131366,5,"Fuseki1368",613,1.000000},
  {fuseki131367,6,"Fuseki1369",651,3.000000},
  {fuseki131368,6,"Fuseki1370",830,1.000000},
  {fuseki131369,3,"Fuseki1371",577,2.000000},
  {fuseki131370,3,"Fuseki1372",680,1.000000},
  {fuseki131371,5,"Fuseki1373",614,3.000000},
  {fuseki131372,6,"Fuseki1374",538,3.000000},
  {fuseki131373,4,"Fuseki1375",614,2.000000},
  {fuseki131374,4,"Fuseki1376",571,1.000000},
  {fuseki131375,1,"Fuseki1377",873,1.000000},
  {fuseki131376,1,"Fuseki1378",494,1.000000},
  {fuseki131377,1,"Fuseki1379",579,1.000000},
  {fuseki131378,1,"Fuseki1380",532,2.000000},
  {fuseki131379,3,"Fuseki1381",828,2.000000},
  {fuseki131380,3,"Fuseki1382",792,1.000000},
  {fuseki131381,4,"Fuseki1383",571,2.000000},
  {fuseki131382,4,"Fuseki1384",798,1.000000},
  {fuseki131383,2,"Fuseki1385",836,1.000000},
  {fuseki131384,2,"Fuseki1386",798,1.000000},
  {fuseki131385,2,"Fuseki1387",799,1.000000},
  {fuseki131386,9,"Fuseki1388",835,3.000000},
  {fuseki131387,4,"Fuseki1389",651,1.000000},
  {fuseki131388,4,"Fuseki1390",643,1.000000},
  {fuseki131389,4,"Fuseki1391",680,1.000000},
  {fuseki131390,3,"Fuseki1392",723,2.000000},
  {fuseki131391,3,"Fuseki1393",532,1.000000},
  {fuseki131392,5,"Fuseki1394",537,2.000000},
  {fuseki131393,5,"Fuseki1395",761,1.000000},
  {fuseki131394,6,"Fuseki1396",762,2.000000},
  {fuseki131395,6,"Fuseki1397",645,1.000000},
  {fuseki131396,3,"Fuseki1398",539,1.000000},
  {fuseki131397,3,"Fuseki1399",836,1.000000},
  {fuseki131398,3,"Fuseki1400",576,1.000000},
  {fuseki131399,3,"Fuseki1401",835,2.000000},
  {fuseki131400,3,"Fuseki1402",791,1.000000},
  {fuseki131401,7,"Fuseki1403",643,2.000000},
  {fuseki131402,7,"Fuseki1404",570,1.000000},
  {fuseki131403,4,"Fuseki1405",576,1.000000},
  {fuseki131404,4,"Fuseki1406",799,1.000000},
  {fuseki131405,4,"Fuseki1407",836,1.000000},
  {fuseki131406,2,"Fuseki1408",755,1.000000},
  {fuseki131407,2,"Fuseki1409",571,1.000000},
  {fuseki131408,2,"Fuseki1410",576,1.000000},
  {fuseki131409,4,"Fuseki1411",614,1.000000},
  {fuseki131410,4,"Fuseki1412",643,1.000000},
  {fuseki131411,4,"Fuseki1413",643,1.000000},
  {fuseki131412,3,"Fuseki1414",570,1.000000},
  {fuseki131413,3,"Fuseki1415",831,1.000000},
  {fuseki131414,3,"Fuseki1416",797,1.000000},
  {fuseki131415,4,"Fuseki1417",688,2.000000},
  {fuseki131416,4,"Fuseki1418",651,1.000000},
  {fuseki131417,7,"Fuseki1419",614,2.000000},
  {fuseki131418,7,"Fuseki1420",725,1.000000},
  {fuseki131419,4,"Fuseki1421",684,1.000000},
  {fuseki131420,4,"Fuseki1422",537,1.000000},
  {fuseki131421,5,"Fuseki1423",535,1.000000},
  {fuseki131422,5,"Fuseki1424",572,1.000000},
  {fuseki131423,5,"Fuseki1425",651,1.000000},
  {fuseki131424,3,"Fuseki1426",539,1.000000},
  {fuseki131425,3,"Fuseki1427",799,1.000000},
  {fuseki131426,3,"Fuseki1428",681,1.000000},
  {fuseki131427,2,"Fuseki1429",534,1.000000},
  {fuseki131428,2,"Fuseki1430",533,1.000000},
  {fuseki131429,2,"Fuseki1431",576,1.000000},
  {fuseki131430,5,"Fuseki1432",535,3.000000},
  {fuseki131431,1,"Fuseki1433",569,2.000000},
  {fuseki131432,1,"Fuseki1434",799,1.000000},
  {fuseki131433,4,"Fuseki1435",795,1.000000},
  {fuseki131434,4,"Fuseki1436",574,1.000000},
  {fuseki131435,4,"Fuseki1437",754,1.000000},
  {fuseki131436,8,"Fuseki1438",835,1.000000},
  {fuseki131437,8,"Fuseki1439",687,1.000000},
  {fuseki131438,8,"Fuseki1440",832,1.000000},
  {fuseki131439,6,"Fuseki1441",578,1.000000},
  {fuseki131440,6,"Fuseki1442",538,1.000000},
  {fuseki131441,6,"Fuseki1443",539,1.000000},
  {fuseki131442,5,"Fuseki1444",762,3.000000},
  {fuseki131443,5,"Fuseki1445",607,2.000000},
  {fuseki131444,5,"Fuseki1446",532,1.000000},
  {fuseki131445,4,"Fuseki1447",535,1.000000},
  {fuseki131446,4,"Fuseki1448",574,1.000000},
  {fuseki131447,4,"Fuseki1449",606,1.000000},
  {fuseki131448,6,"Fuseki1450",836,2.000000},
  {fuseki131449,6,"Fuseki1451",792,1.000000},
  {fuseki131450,3,"Fuseki1452",539,2.000000},
  {fuseki131451,3,"Fuseki1453",534,1.000000},
  {fuseki131452,5,"Fuseki1454",688,2.000000},
  {fuseki131453,5,"Fuseki1455",725,1.000000},
  {fuseki131454,6,"Fuseki1456",535,1.000000},
  {fuseki131455,6,"Fuseki1457",687,1.000000},
  {fuseki131456,6,"Fuseki1458",792,1.000000},
  {fuseki131457,4,"Fuseki1459",577,3.000000},
  {fuseki131458,6,"Fuseki1460",799,2.000000},
  {fuseki131459,6,"Fuseki1461",798,1.000000},
  {fuseki131460,4,"Fuseki1462",577,2.000000},
  {fuseki131461,4,"Fuseki1463",687,1.000000},
  {fuseki131462,6,"Fuseki1464",717,1.000000},
  {fuseki131463,6,"Fuseki1465",680,1.000000},
  {fuseki131464,6,"Fuseki1466",651,1.000000},
  {fuseki131465,5,"Fuseki1467",762,1.000000},
  {fuseki131466,5,"Fuseki1468",755,1.000000},
  {fuseki131467,5,"Fuseki1469",828,1.000000},
  {fuseki131468,5,"Fuseki1470",534,3.000000},
  {fuseki131469,4,"Fuseki1471",536,1.000000},
  {fuseki131470,4,"Fuseki1472",793,1.000000},
  {fuseki131471,4,"Fuseki1473",644,1.000000},
  {fuseki131472,4,"Fuseki1474",606,1.000000},
  {fuseki131473,4,"Fuseki1475",755,1.000000},
  {fuseki131474,4,"Fuseki1476",725,1.000000},
  {fuseki131475,5,"Fuseki1477",680,1.000000},
  {fuseki131476,5,"Fuseki1478",680,1.000000},
  {fuseki131477,5,"Fuseki1479",572,1.000000},
  {fuseki131478,2,"Fuseki1480",540,3.000000},
  {fuseki131479,5,"Fuseki1481",575,3.000000},
  {fuseki131480,5,"Fuseki1482",537,1.000000},
  {fuseki131481,5,"Fuseki1483",799,1.000000},
  {fuseki131482,5,"Fuseki1484",832,1.000000},
  {fuseki131483,2,"Fuseki1485",836,1.000000},
  {fuseki131484,2,"Fuseki1486",613,1.000000},
  {fuseki131485,2,"Fuseki1487",533,1.000000},
  {fuseki131486,5,"Fuseki1488",575,1.000000},
  {fuseki131487,5,"Fuseki1489",538,1.000000},
  {fuseki131488,5,"Fuseki1490",574,1.000000},
  {fuseki131489,6,"Fuseki1491",576,2.000000},
  {fuseki131490,6,"Fuseki1492",651,1.000000},
  {fuseki131491,3,"Fuseki1493",534,2.000000},
  {fuseki131492,3,"Fuseki1494",828,1.000000},
  {fuseki131493,7,"Fuseki1495",680,1.000000},
  {fuseki131494,7,"Fuseki1496",833,1.000000},
  {fuseki131495,7,"Fuseki1497",796,1.000000},
  {fuseki131496,7,"Fuseki1498",613,2.000000},
  {fuseki131497,7,"Fuseki1499",576,1.000000},
  {fuseki131498,5,"Fuseki1500",614,3.000000},
  {fuseki131499,7,"Fuseki1501",608,2.000000},
  {fuseki131500,7,"Fuseki1502",534,1.000000},
  {fuseki131501,5,"Fuseki1503",680,1.000000},
  {fuseki131502,5,"Fuseki1504",688,1.000000},
  {fuseki131503,5,"Fuseki1505",683,1.000000},
  {fuseki131504,9,"Fuseki1506",540,3.000000},
  {fuseki131505,1,"Fuseki1507",569,2.000000},
  {fuseki131506,1,"Fuseki1508",540,1.000000},
  {fuseki131507,7,"Fuseki1509",799,3.000000},
  {fuseki131508,6,"Fuseki1510",533,2.000000},
  {fuseki131509,6,"Fuseki1511",613,1.000000},
  {fuseki131510,5,"Fuseki1512",607,1.000000},
  {fuseki131511,5,"Fuseki1513",687,1.000000},
  {fuseki131512,5,"Fuseki1514",717,1.000000},
  {fuseki131513,5,"Fuseki1515",833,2.000000},
  {fuseki131514,5,"Fuseki1516",762,1.000000},
  {fuseki131515,5,"Fuseki1517",717,2.000000},
  {fuseki131516,5,"Fuseki1518",724,1.000000},
  {fuseki131517,3,"Fuseki1519",799,2.000000},
  {fuseki131518,3,"Fuseki1520",532,1.000000},
  {fuseki131519,6,"Fuseki1521",830,3.000000},
  {fuseki131520,4,"Fuseki1522",725,2.000000},
  {fuseki131521,4,"Fuseki1523",606,1.000000},
  {fuseki131522,2,"Fuseki1524",614,1.000000},
  {fuseki131523,2,"Fuseki1525",684,1.000000},
  {fuseki131524,2,"Fuseki1526",649,1.000000},
  {fuseki131525,2,"Fuseki1527",570,2.000000},
  {fuseki131526,2,"Fuseki1528",577,1.000000},
  {fuseki131527,7,"Fuseki1529",797,3.000000},
  {fuseki131528,4,"Fuseki1530",763,1.000000},
  {fuseki131529,4,"Fuseki1531",799,1.000000},
  {fuseki131530,4,"Fuseki1532",865,1.000000},
  {fuseki131531,4,"Fuseki1533",718,2.000000},
  {fuseki131532,4,"Fuseki1534",718,1.000000},
  {fuseki131533,4,"Fuseki1535",573,2.000000},
  {fuseki131534,4,"Fuseki1536",799,1.000000},
  {fuseki131535,6,"Fuseki1537",537,1.000000},
  {fuseki131536,6,"Fuseki1538",570,1.000000},
  {fuseki131537,6,"Fuseki1539",832,1.000000},
  {fuseki131538,3,"Fuseki1540",576,1.000000},
  {fuseki131539,3,"Fuseki1541",535,1.000000},
  {fuseki131540,3,"Fuseki1542",828,1.000000},
  {fuseki131541,8,"Fuseki1543",753,3.000000},
  {fuseki131542,2,"Fuseki1544",793,2.000000},
  {fuseki131543,7,"Fuseki1545",792,2.000000},
  {fuseki131544,7,"Fuseki1546",643,1.000000},
  {fuseki131545,6,"Fuseki1547",724,3.000000},
  {fuseki131546,3,"Fuseki1548",762,2.000000},
  {fuseki131547,3,"Fuseki1549",828,1.000000},
  {fuseki131548,9,"Fuseki1550",828,1.000000},
  {fuseki131549,9,"Fuseki1551",614,1.000000},
  {fuseki131550,9,"Fuseki1552",613,1.000000},
  {fuseki131551,4,"Fuseki1553",534,2.000000},
  {fuseki131552,4,"Fuseki1554",680,1.000000},
  {fuseki131553,6,"Fuseki1555",533,2.000000},
  {fuseki131554,6,"Fuseki1556",573,1.000000},
  {fuseki131555,4,"Fuseki1557",532,3.000000},
  {fuseki131556,5,"Fuseki1558",725,2.000000},
  {fuseki131557,5,"Fuseki1559",717,1.000000},
  {fuseki131558,2,"Fuseki1560",533,2.000000},
  {fuseki131559,2,"Fuseki1561",798,1.000000},
  {fuseki131560,5,"Fuseki1562",725,2.000000},
  {fuseki131561,5,"Fuseki1563",538,1.000000},
  {fuseki131562,3,"Fuseki1564",532,2.000000},
  {fuseki131563,3,"Fuseki1565",576,1.000000},
  {fuseki131564,6,"Fuseki1566",537,2.000000},
  {fuseki131565,6,"Fuseki1567",830,1.000000},
  {fuseki131566,5,"Fuseki1568",613,2.000000},
  {fuseki131567,5,"Fuseki1569",537,1.000000},
  {fuseki131568,3,"Fuseki1570",834,1.000000},
  {fuseki131569,3,"Fuseki1571",534,1.000000},
  {fuseki131570,3,"Fuseki1572",828,1.000000},
  {fuseki131571,8,"Fuseki1573",687,3.000000},
  {fuseki131572,6,"Fuseki1574",614,2.000000},
  {fuseki131573,6,"Fuseki1575",688,1.000000},
  {fuseki131574,3,"Fuseki1576",576,2.000000},
  {fuseki131575,3,"Fuseki1577",540,1.000000},
  {fuseki131576,3,"Fuseki1578",540,1.000000},
  {fuseki131577,3,"Fuseki1579",725,1.000000},
  {fuseki131578,3,"Fuseki1580",539,1.000000},
  {fuseki131579,5,"Fuseki1581",830,2.000000},
  {fuseki131580,5,"Fuseki1582",755,1.000000},
  {fuseki131581,2,"Fuseki1583",791,1.000000},
  {fuseki131582,2,"Fuseki1584",792,1.000000},
  {fuseki131583,2,"Fuseki1585",791,1.000000},
  {fuseki131584,5,"Fuseki1586",651,2.000000},
  {fuseki131585,5,"Fuseki1587",833,1.000000},
  {fuseki131586,3,"Fuseki1588",829,1.000000},
  {fuseki131587,3,"Fuseki1589",829,1.000000},
  {fuseki131588,3,"Fuseki1590",836,1.000000},
  {fuseki131589,3,"Fuseki1591",798,1.000000},
  {fuseki131590,3,"Fuseki1592",828,1.000000},
  {fuseki131591,3,"Fuseki1593",791,1.000000},
  {fuseki131592,3,"Fuseki1594",832,1.000000},
  {fuseki131593,3,"Fuseki1595",681,1.000000},
  {fuseki131594,3,"Fuseki1596",756,1.000000},
  {fuseki131595,2,"Fuseki1597",532,2.000000},
  {fuseki131596,2,"Fuseki1598",755,1.000000},
  {fuseki131597,4,"Fuseki1599",570,1.000000},
  {fuseki131598,4,"Fuseki1600",834,1.000000},
  {fuseki131599,4,"Fuseki1601",614,1.000000},
  {fuseki131600,4,"Fuseki1602",831,1.000000},
  {fuseki131601,4,"Fuseki1603",537,1.000000},
  {fuseki131602,4,"Fuseki1604",762,1.000000},
  {fuseki131603,8,"Fuseki1605",538,3.000000},
  {fuseki131604,2,"Fuseki1606",834,1.000000},
  {fuseki131605,2,"Fuseki1607",532,1.000000},
  {fuseki131606,2,"Fuseki1608",791,1.000000},
  {fuseki131607,6,"Fuseki1609",576,3.000000},
  {fuseki131608,6,"Fuseki1610",797,3.000000},
  {fuseki131609,4,"Fuseki1611",796,3.000000},
  {fuseki131610,7,"Fuseki1612",577,3.000000},
  {fuseki131611,3,"Fuseki1613",540,2.000000},
  {fuseki131612,3,"Fuseki1614",569,1.000000},
  {fuseki131613,4,"Fuseki1615",718,1.000000},
  {fuseki131614,4,"Fuseki1616",606,1.000000},
  {fuseki131615,4,"Fuseki1617",607,1.000000},
  {fuseki131616,5,"Fuseki1618",797,2.000000},
  {fuseki131617,5,"Fuseki1619",762,1.000000},
  {fuseki131618,6,"Fuseki1620",569,2.000000},
  {fuseki131619,6,"Fuseki1621",725,1.000000},
  {fuseki131620,4,"Fuseki1622",716,1.000000},
  {fuseki131621,4,"Fuseki1623",606,1.000000},
  {fuseki131622,3,"Fuseki1624",539,2.000000},
  {fuseki131623,3,"Fuseki1625",539,1.000000},
  {fuseki131624,3,"Fuseki1626",539,1.000000},
  {fuseki131625,3,"Fuseki1627",828,1.000000},
  {fuseki131626,3,"Fuseki1628",651,1.000000},
  {fuseki131627,4,"Fuseki1629",831,1.000000},
  {fuseki131628,4,"Fuseki1630",614,1.000000},
  {fuseki131629,4,"Fuseki1631",762,1.000000},
  {fuseki131630,4,"Fuseki1632",717,1.000000},
  {fuseki131631,4,"Fuseki1633",680,1.000000},
  {fuseki131632,6,"Fuseki1634",795,1.000000},
  {fuseki131633,6,"Fuseki1635",680,1.000000},
  {fuseki131634,3,"Fuseki1636",540,1.000000},
  {fuseki131635,3,"Fuseki1637",834,1.000000},
  {fuseki131636,4,"Fuseki1638",650,1.000000},
  {fuseki131637,4,"Fuseki1639",798,1.000000},
  {fuseki131638,4,"Fuseki1640",870,1.000000},
  {fuseki131639,4,"Fuseki1641",680,1.000000},
  {fuseki131640,9,"Fuseki1642",688,2.000000},
  {fuseki131641,7,"Fuseki1643",687,2.000000},
  {fuseki131642,5,"Fuseki1644",796,2.000000},
  {fuseki131643,4,"Fuseki1645",834,2.000000},
  {fuseki131644,9,"Fuseki1646",836,2.000000},
  {fuseki131645,9,"Fuseki1647",578,1.000000},
  {fuseki131646,9,"Fuseki1648",614,1.000000},
  {fuseki131647,5,"Fuseki1649",651,2.000000},
  {fuseki131648,6,"Fuseki1650",644,1.000000},
  {fuseki131649,6,"Fuseki1651",534,1.000000},
  {fuseki131650,4,"Fuseki1652",796,2.000000},
  {fuseki131651,9,"Fuseki1653",723,2.000000},
  {fuseki131652,4,"Fuseki1654",643,1.000000},
  {fuseki131653,4,"Fuseki1655",830,1.000000},
  {fuseki131654,5,"Fuseki1656",796,1.000000},
  {fuseki131655,5,"Fuseki1657",573,1.000000},
  {fuseki131656,6,"Fuseki1658",614,1.000000},
  {fuseki131657,6,"Fuseki1659",573,1.000000},
  {fuseki131658,3,"Fuseki1660",792,1.000000},
  {fuseki131659,3,"Fuseki1661",575,1.000000},
  {fuseki131660,5,"Fuseki1662",754,1.000000},
  {fuseki131661,5,"Fuseki1663",754,1.000000},
  {fuseki131662,4,"Fuseki1664",792,1.000000},
  {fuseki131663,4,"Fuseki1665",829,1.000000},
  {fuseki131664,5,"Fuseki1666",606,2.000000},
  {fuseki131665,9,"Fuseki1667",575,2.000000},
  {fuseki131666,9,"Fuseki1668",754,2.000000},
  {fuseki131667,7,"Fuseki1669",834,2.000000},
  {fuseki131668,5,"Fuseki1670",644,1.000000},
  {fuseki131669,5,"Fuseki1671",606,1.000000},
  {fuseki131670,6,"Fuseki1672",757,2.000000},
  {fuseki131671,3,"Fuseki1673",688,1.000000},
  {fuseki131672,3,"Fuseki1674",835,1.000000},
  {fuseki131673,8,"Fuseki1675",612,1.000000},
  {fuseki131674,8,"Fuseki1676",792,1.000000},
  {fuseki131675,4,"Fuseki1677",532,1.000000},
  {fuseki131676,4,"Fuseki1678",687,1.000000},
  {fuseki131677,4,"Fuseki1679",643,1.000000},
  {fuseki131678,4,"Fuseki1680",725,1.000000},
  {fuseki131679,6,"Fuseki1681",833,2.000000},
  {fuseki131680,4,"Fuseki1682",538,2.000000},
  {fuseki131681,4,"Fuseki1683",577,2.000000},
  {fuseki131682,5,"Fuseki1684",717,1.000000},
  {fuseki131683,5,"Fuseki1685",833,1.000000},
  {fuseki131684,4,"Fuseki1686",831,1.000000},
  {fuseki131685,4,"Fuseki1687",614,1.000000},
  {fuseki131686,2,"Fuseki1688",569,1.000000},
  {fuseki131687,2,"Fuseki1689",534,1.000000},
  {fuseki131688,7,"Fuseki1690",577,2.000000},
  {fuseki131689,7,"Fuseki1691",609,1.000000},
  {fuseki131690,7,"Fuseki1692",540,1.000000},
  {fuseki131691,2,"Fuseki1693",576,1.000000},
  {fuseki131692,2,"Fuseki1694",573,1.000000},
  {fuseki131693,3,"Fuseki1695",532,1.000000},
  {fuseki131694,3,"Fuseki1696",830,1.000000},
  {fuseki131695,5,"Fuseki1697",606,1.000000},
  {fuseki131696,5,"Fuseki1698",793,1.000000},
  {fuseki131697,5,"Fuseki1699",608,1.000000},
  {fuseki131698,5,"Fuseki1700",539,1.000000},
  {fuseki131699,3,"Fuseki1701",792,1.000000},
  {fuseki131700,3,"Fuseki1702",836,1.000000},
  {fuseki131701,2,"Fuseki1703",761,1.000000},
  {fuseki131702,2,"Fuseki1704",830,1.000000},
  {fuseki131703,4,"Fuseki1705",688,1.000000},
  {fuseki131704,4,"Fuseki1706",650,1.000000},
  {fuseki131705,3,"Fuseki1707",539,1.000000},
  {fuseki131706,3,"Fuseki1708",532,1.000000},
  {fuseki131707,6,"Fuseki1709",761,2.000000},
  {fuseki131708,3,"Fuseki1710",606,1.000000},
  {fuseki131709,3,"Fuseki1711",829,1.000000},
  {fuseki131710,5,"Fuseki1712",717,1.000000},
  {fuseki131711,5,"Fuseki1713",755,1.000000},
  {fuseki131712,5,"Fuseki1714",533,2.000000},
  {fuseki131713,3,"Fuseki1715",534,1.000000},
  {fuseki131714,3,"Fuseki1716",577,1.000000},
  {fuseki131715,6,"Fuseki1717",650,1.000000},
  {fuseki131716,6,"Fuseki1718",831,1.000000},
  {fuseki131717,6,"Fuseki1719",800,2.000000},
  {fuseki131718,5,"Fuseki1720",577,2.000000},
  {fuseki131719,5,"Fuseki1721",830,1.000000},
  {fuseki131720,5,"Fuseki1722",651,1.000000},
  {fuseki131721,4,"Fuseki1723",575,1.000000},
  {fuseki131722,4,"Fuseki1724",836,1.000000},
  {fuseki131723,6,"Fuseki1725",762,1.000000},
  {fuseki131724,6,"Fuseki1726",652,1.000000},
  {fuseki131725,7,"Fuseki1727",540,1.000000},
  {fuseki131726,7,"Fuseki1728",717,1.000000},
  {fuseki131727,8,"Fuseki1729",538,2.000000},
  {fuseki131728,3,"Fuseki1730",569,1.000000},
  {fuseki131729,3,"Fuseki1731",569,1.000000},
  {fuseki131730,5,"Fuseki1732",798,2.000000},
  {fuseki131731,6,"Fuseki1733",715,1.000000},
  {fuseki131732,6,"Fuseki1734",725,1.000000},
  {fuseki131733,7,"Fuseki1735",725,2.000000},
  {fuseki131734,7,"Fuseki1736",717,1.000000},
  {fuseki131735,7,"Fuseki1737",797,1.000000},
  {fuseki131736,5,"Fuseki1738",834,1.000000},
  {fuseki131737,5,"Fuseki1739",606,1.000000},
  {fuseki131738,7,"Fuseki1740",719,2.000000},
  {fuseki131739,3,"Fuseki1741",540,2.000000},
  {fuseki131740,6,"Fuseki1742",503,1.000000},
  {fuseki131741,6,"Fuseki1743",833,1.000000},
  {fuseki131742,4,"Fuseki1744",797,1.000000},
  {fuseki131743,4,"Fuseki1745",570,1.000000},
  {fuseki131744,4,"Fuseki1746",687,1.000000},
  {fuseki131745,4,"Fuseki1747",643,1.000000},
  {fuseki131746,4,"Fuseki1748",835,1.000000},
  {fuseki131747,4,"Fuseki1749",831,1.000000},
  {fuseki131748,8,"Fuseki1750",724,2.000000},
  {fuseki131749,5,"Fuseki1751",836,1.000000},
  {fuseki131750,5,"Fuseki1752",717,1.000000},
  {fuseki131751,6,"Fuseki1753",834,2.000000},
  {fuseki131752,6,"Fuseki1754",650,2.000000},
  {fuseki131753,6,"Fuseki1755",760,1.000000},
  {fuseki131754,6,"Fuseki1756",644,1.000000},
  {fuseki131755,9,"Fuseki1757",500,2.000000},
  {fuseki131756,6,"Fuseki1758",753,1.000000},
  {fuseki131757,6,"Fuseki1759",755,1.000000},
  {fuseki131758,5,"Fuseki1760",571,2.000000},
  {fuseki131759,6,"Fuseki1761",614,1.000000},
  {fuseki131760,6,"Fuseki1762",687,1.000000},
  {fuseki131761,3,"Fuseki1763",571,1.000000},
  {fuseki131762,3,"Fuseki1764",829,1.000000},
  {fuseki131763,5,"Fuseki1765",724,1.000000},
  {fuseki131764,5,"Fuseki1766",537,1.000000},
  {fuseki131765,9,"Fuseki1767",833,1.000000},
  {fuseki131766,9,"Fuseki1768",831,1.000000},
  {fuseki131767,5,"Fuseki1769",686,2.000000},
  {fuseki131768,5,"Fuseki1770",569,1.000000},
  {fuseki131769,5,"Fuseki1771",533,1.000000},
  {fuseki131770,6,"Fuseki1772",606,1.000000},
  {fuseki131771,6,"Fuseki1773",762,1.000000},
  {fuseki131772,3,"Fuseki1774",798,1.000000},
  {fuseki131773,3,"Fuseki1775",792,1.000000},
  {fuseki131774,3,"Fuseki1776",577,1.000000},
  {fuseki131775,3,"Fuseki1777",574,1.000000},
  {fuseki131776,9,"Fuseki1778",836,2.000000},
  {fuseki131777,5,"Fuseki1779",832,2.000000},
  {fuseki131778,4,"Fuseki1780",573,1.000000},
  {fuseki131779,4,"Fuseki1781",607,1.000000},
  {fuseki131780,8,"Fuseki1782",797,2.000000},
  {fuseki131781,3,"Fuseki1783",570,1.000000},
  {fuseki131782,3,"Fuseki1784",533,1.000000},
  {fuseki131783,3,"Fuseki1785",532,1.000000},
  {fuseki131784,3,"Fuseki1786",531,1.000000},
  {fuseki131785,5,"Fuseki1787",754,2.000000},
  {fuseki131786,5,"Fuseki1788",577,1.000000},
  {fuseki131787,5,"Fuseki1789",835,1.000000},
  {fuseki131788,9,"Fuseki1790",575,2.000000},
  {fuseki131789,4,"Fuseki1791",831,2.000000},
  {fuseki131790,5,"Fuseki1792",571,1.000000},
  {fuseki131791,5,"Fuseki1793",577,1.000000},
  {fuseki131792,3,"Fuseki1794",536,1.000000},
  {fuseki131793,3,"Fuseki1795",608,1.000000},
  {fuseki131794,9,"Fuseki1796",795,1.000000},
  {fuseki131795,9,"Fuseki1797",571,1.000000},
  {fuseki131796,8,"Fuseki1798",795,2.000000},
  {fuseki131797,6,"Fuseki1799",649,2.000000},
  {fuseki131798,4,"Fuseki1800",606,1.000000},
  {fuseki131799,4,"Fuseki1801",532,1.000000},
  {fuseki131800,5,"Fuseki1802",725,1.000000},
  {fuseki131801,5,"Fuseki1803",833,1.000000},
  {fuseki131802,4,"Fuseki1804",680,1.000000},
  {fuseki131803,4,"Fuseki1805",725,1.000000},
  {fuseki131804,4,"Fuseki1806",614,1.000000},
  {fuseki131805,4,"Fuseki1807",792,1.000000},
  {fuseki131806,6,"Fuseki1808",718,1.000000},
  {fuseki131807,6,"Fuseki1809",535,1.000000},
  {fuseki131808,5,"Fuseki1810",834,1.000000},
  {fuseki131809,5,"Fuseki1811",608,1.000000},
  {fuseki131810,4,"Fuseki1812",798,1.000000},
  {fuseki131811,4,"Fuseki1813",797,1.000000},
  {fuseki131812,5,"Fuseki1814",614,2.000000},
  {fuseki131813,5,"Fuseki1815",795,1.000000},
  {fuseki131814,5,"Fuseki1816",717,1.000000},
  {fuseki131815,6,"Fuseki1817",833,1.000000},
  {fuseki131816,6,"Fuseki1818",724,1.000000},
  {fuseki131817,6,"Fuseki1819",538,2.000000},
  {fuseki131818,5,"Fuseki1820",651,2.000000},
  {fuseki131819,7,"Fuseki1821",571,2.000000},
  {fuseki131820,3,"Fuseki1822",607,1.000000},
  {fuseki131821,3,"Fuseki1823",533,1.000000},
  {fuseki131822,3,"Fuseki1824",571,1.000000},
  {fuseki131823,3,"Fuseki1825",828,1.000000},
  {fuseki131824,3,"Fuseki1826",539,2.000000},
  {fuseki131825,6,"Fuseki1827",832,2.000000},
  {fuseki131826,8,"Fuseki1828",650,2.000000},
  {fuseki131827,4,"Fuseki1829",717,1.000000},
  {fuseki131828,4,"Fuseki1830",574,1.000000},
  {fuseki131829,6,"Fuseki1831",613,1.000000},
  {fuseki131830,6,"Fuseki1832",504,1.000000},
  {fuseki131831,5,"Fuseki1833",606,1.000000},
  {fuseki131832,5,"Fuseki1834",575,1.000000},
  {fuseki131833,6,"Fuseki1835",578,2.000000},
  {fuseki131834,5,"Fuseki1836",761,1.000000},
  {fuseki131835,5,"Fuseki1837",688,1.000000},
  {fuseki131836,5,"Fuseki1838",717,1.000000},
  {fuseki131837,5,"Fuseki1839",761,1.000000},
  {fuseki131838,5,"Fuseki1840",572,1.000000},
  {fuseki131839,5,"Fuseki1841",573,1.000000},
  {fuseki131840,9,"Fuseki1842",650,2.000000},
  {fuseki131841,5,"Fuseki1843",761,2.000000},
  {fuseki131842,8,"Fuseki1844",723,2.000000},
  {fuseki131843,4,"Fuseki1845",614,1.000000},
  {fuseki131844,4,"Fuseki1846",799,1.000000},
  {fuseki131845,6,"Fuseki1847",763,1.000000},
  {fuseki131846,6,"Fuseki1848",643,1.000000},
  {fuseki131847,5,"Fuseki1849",717,1.000000},
  {fuseki131848,5,"Fuseki1850",538,1.000000},
  {fuseki131849,5,"Fuseki1851",651,2.000000},
  {fuseki131850,6,"Fuseki1852",539,1.000000},
  {fuseki131851,6,"Fuseki1853",538,1.000000},
  {fuseki131852,6,"Fuseki1854",644,2.000000},
  {fuseki131853,2,"Fuseki1855",792,1.000000},
  {fuseki131854,2,"Fuseki1856",791,1.000000},
  {fuseki131855,5,"Fuseki1857",540,1.000000},
  {fuseki131856,5,"Fuseki1858",793,1.000000},
  {fuseki131857,3,"Fuseki1859",754,1.000000},
  {fuseki131858,3,"Fuseki1860",570,1.000000},
  {fuseki131859,4,"Fuseki1861",535,2.000000},
  {fuseki131860,7,"Fuseki1862",575,2.000000},
  {fuseki131861,2,"Fuseki1863",575,2.000000},
  {fuseki131862,6,"Fuseki1864",680,1.000000},
  {fuseki131863,6,"Fuseki1865",791,1.000000},
  {fuseki131864,4,"Fuseki1866",725,1.000000},
  {fuseki131865,4,"Fuseki1867",832,1.000000},
  {fuseki131866,9,"Fuseki1868",680,1.000000},
  {fuseki131867,9,"Fuseki1869",830,1.000000},
  {fuseki131868,5,"Fuseki1870",717,1.000000},
  {fuseki131869,5,"Fuseki1871",754,1.000000},
  {fuseki131870,3,"Fuseki1872",828,2.000000},
  {fuseki131871,8,"Fuseki1873",829,2.000000},
  {fuseki131872,5,"Fuseki1874",535,2.000000},
  {fuseki131873,7,"Fuseki1875",608,2.000000},
  {fuseki131874,7,"Fuseki1876",612,1.000000},
  {fuseki131875,7,"Fuseki1877",800,1.000000},
  {fuseki131876,2,"Fuseki1878",613,1.000000},
  {fuseki131877,2,"Fuseki1879",792,1.000000},
  {fuseki131878,6,"Fuseki1880",536,1.000000},
  {fuseki131879,6,"Fuseki1881",644,1.000000},
  {fuseki131880,7,"Fuseki1882",831,1.000000},
  {fuseki131881,7,"Fuseki1883",761,1.000000},
  {fuseki131882,5,"Fuseki1884",756,1.000000},
  {fuseki131883,5,"Fuseki1885",761,1.000000},
  {fuseki131884,7,"Fuseki1886",685,2.000000},
  {fuseki131885,4,"Fuseki1887",539,2.000000},
  {fuseki131886,5,"Fuseki1888",651,2.000000},
  {fuseki131887,4,"Fuseki1889",539,1.000000},
  {fuseki131888,4,"Fuseki1890",799,1.000000},
  {fuseki131889,8,"Fuseki1891",688,2.000000},
  {fuseki131890,5,"Fuseki1892",717,2.000000},
  {fuseki131891,6,"Fuseki1893",680,1.000000},
  {fuseki131892,6,"Fuseki1894",577,1.000000},
  {fuseki131893,6,"Fuseki1895",687,2.000000},
  {fuseki131894,3,"Fuseki1896",537,1.000000},
  {fuseki131895,3,"Fuseki1897",613,1.000000},
  {fuseki131896,8,"Fuseki1898",795,1.000000},
  {fuseki131897,8,"Fuseki1899",834,1.000000},
  {fuseki131898,4,"Fuseki1900",651,1.000000},
  {fuseki131899,4,"Fuseki1901",538,1.000000},
  {fuseki131900,5,"Fuseki1902",794,1.000000},
  {fuseki131901,5,"Fuseki1903",830,1.000000},
  {fuseki131902,4,"Fuseki1904",828,2.000000},
  {fuseki131903,7,"Fuseki1905",833,2.000000},
  {fuseki131904,3,"Fuseki1906",577,1.000000},
  {fuseki131905,3,"Fuseki1907",792,1.000000},
  {fuseki131906,8,"Fuseki1908",535,1.000000},
  {fuseki131907,8,"Fuseki1909",536,1.000000},
  {fuseki131908,3,"Fuseki1910",577,1.000000},
  {fuseki131909,3,"Fuseki1911",799,1.000000},
  {fuseki131910,5,"Fuseki1912",576,2.000000},
  {fuseki131911,4,"Fuseki1913",873,1.000000},
  {fuseki131912,4,"Fuseki1914",791,1.000000},
  {fuseki131913,5,"Fuseki1915",535,1.000000},
  {fuseki131914,5,"Fuseki1916",607,1.000000},
  {fuseki131915,6,"Fuseki1917",648,1.000000},
  {fuseki131916,6,"Fuseki1918",650,1.000000},
  {fuseki131917,8,"Fuseki1919",726,2.000000},
  {fuseki131918,7,"Fuseki1920",496,2.000000},
  {fuseki131919,5,"Fuseki1921",607,2.000000},
  {fuseki131920,4,"Fuseki1922",571,2.000000},
  {fuseki131921,4,"Fuseki1923",833,1.000000},
  {fuseki131922,4,"Fuseki1924",793,1.000000},
  {fuseki131923,4,"Fuseki1925",614,2.000000},
  {fuseki131924,3,"Fuseki1926",538,1.000000},
  {fuseki131925,3,"Fuseki1927",836,1.000000},
  {fuseki131926,8,"Fuseki1928",536,2.000000},
  {fuseki131927,5,"Fuseki1929",614,1.000000},
  {fuseki131928,5,"Fuseki1930",833,1.000000},
  {fuseki131929,5,"Fuseki1931",717,2.000000},
  {fuseki131930,4,"Fuseki1932",795,1.000000},
  {fuseki131931,4,"Fuseki1933",607,1.000000},
  {fuseki131932,7,"Fuseki1934",532,2.000000},
  {fuseki131933,6,"Fuseki1935",724,2.000000},
  {fuseki131934,5,"Fuseki1936",829,1.000000},
  {fuseki131935,5,"Fuseki1937",536,1.000000},
  {fuseki131936,5,"Fuseki1938",570,1.000000},
  {fuseki131937,5,"Fuseki1939",830,1.000000},
  {fuseki131938,4,"Fuseki1940",644,1.000000},
  {fuseki131939,4,"Fuseki1941",829,1.000000},
  {fuseki131940,5,"Fuseki1942",650,1.000000},
  {fuseki131941,5,"Fuseki1943",577,1.000000},
  {fuseki131942,7,"Fuseki1944",796,2.000000},
  {fuseki131943,4,"Fuseki1945",835,2.000000},
  {fuseki131944,8,"Fuseki1946",608,1.000000},
  {fuseki131945,8,"Fuseki1947",794,1.000000},
  {fuseki131946,6,"Fuseki1948",794,1.000000},
  {fuseki131947,6,"Fuseki1949",687,1.000000},
  {fuseki131948,6,"Fuseki1950",680,2.000000},
  {fuseki131949,4,"Fuseki1951",688,2.000000},
  {fuseki131950,5,"Fuseki1952",796,2.000000},
  {fuseki131951,8,"Fuseki1953",651,2.000000},
  {fuseki131952,7,"Fuseki1954",614,2.000000},
  {fuseki131953,7,"Fuseki1955",791,2.000000},
  {fuseki131954,4,"Fuseki1956",573,2.000000},
  {fuseki131955,5,"Fuseki1957",754,2.000000},
  {fuseki131956,6,"Fuseki1958",680,1.000000},
  {fuseki131957,6,"Fuseki1959",797,1.000000},
  {fuseki131958,3,"Fuseki1960",534,1.000000},
  {fuseki131959,3,"Fuseki1961",791,1.000000},
  {fuseki131960,8,"Fuseki1962",650,2.000000},
  {fuseki131961,9,"Fuseki1963",651,2.000000},
  {fuseki131962,5,"Fuseki1964",830,1.000000},
  {fuseki131963,5,"Fuseki1965",613,1.000000},
  {fuseki131964,4,"Fuseki1966",572,1.000000},
  {fuseki131965,4,"Fuseki1967",796,1.000000},
  {fuseki131966,6,"Fuseki1968",832,1.000000},
  {fuseki131967,6,"Fuseki1969",606,1.000000},
  {fuseki131968,5,"Fuseki1970",495,2.000000},
  {fuseki131969,6,"Fuseki1971",644,1.000000},
  {fuseki131970,6,"Fuseki1972",534,1.000000},
  {fuseki131971,7,"Fuseki1973",800,1.000000},
  {fuseki131972,7,"Fuseki1974",760,1.000000},
  {fuseki131973,3,"Fuseki1975",570,1.000000},
  {fuseki131974,3,"Fuseki1976",533,1.000000},
  {fuseki131975,4,"Fuseki1977",533,1.000000},
  {fuseki131976,4,"Fuseki1978",540,1.000000},
  {fuseki131977,4,"Fuseki1979",792,2.000000},
  {fuseki131978,7,"Fuseki1980",831,1.000000},
  {fuseki131979,7,"Fuseki1981",572,1.000000},
  {fuseki131980,6,"Fuseki1982",614,2.000000},
  {fuseki131981,4,"Fuseki1983",793,1.000000},
  {fuseki131982,4,"Fuseki1984",724,1.000000},
  {fuseki131983,3,"Fuseki1985",533,1.000000},
  {fuseki131984,3,"Fuseki1986",569,1.000000},
  {fuseki131985,7,"Fuseki1987",607,2.000000},
  {fuseki131986,5,"Fuseki1988",717,1.000000},
  {fuseki131987,5,"Fuseki1989",502,1.000000},
  {fuseki131988,5,"Fuseki1990",684,1.000000},
  {fuseki131989,5,"Fuseki1991",794,1.000000},
  {fuseki131990,8,"Fuseki1992",798,1.000000},
  {fuseki131991,8,"Fuseki1993",796,1.000000},
  {fuseki131992,6,"Fuseki1994",614,2.000000},
  {fuseki131993,5,"Fuseki1995",644,1.000000},
  {fuseki131994,5,"Fuseki1996",797,1.000000},
  {fuseki131995,5,"Fuseki1997",570,1.000000},
  {fuseki131996,5,"Fuseki1998",830,1.000000},
  {fuseki131997,6,"Fuseki1999",832,1.000000},
  {fuseki131998,6,"Fuseki2000",614,1.000000},
  {fuseki131999,4,"Fuseki2001",725,158.000000},
  {fuseki132000,4,"Fuseki2002",687,51.000000},
  {fuseki132001,4,"Fuseki2003",536,31.000000},
  {fuseki132002,4,"Fuseki2004",836,19.000000},
  {fuseki132003,4,"Fuseki2005",684,11.000000},
  {fuseki132004,4,"Fuseki2006",577,11.000000},
  {fuseki132005,4,"Fuseki2007",718,10.000000},
  {fuseki132006,5,"Fuseki2008",651,43.000000},
  {fuseki132007,5,"Fuseki2009",830,30.000000},
  {fuseki132008,5,"Fuseki2010",644,19.000000},
  {fuseki132009,5,"Fuseki2011",796,19.000000},
  {fuseki132010,5,"Fuseki2012",651,15.000000},
  {fuseki132011,5,"Fuseki2013",573,6.000000},
  {fuseki132012,5,"Fuseki2014",757,5.000000},
  {fuseki132013,2,"Fuseki2015",798,55.000000},
  {fuseki132014,2,"Fuseki2016",533,51.000000},
  {fuseki132015,2,"Fuseki2017",532,16.000000},
  {fuseki132016,2,"Fuseki2018",762,7.000000},
  {fuseki132017,3,"Fuseki2019",798,51.000000},
  {fuseki132018,3,"Fuseki2020",836,25.000000},
  {fuseki132019,3,"Fuseki2021",799,22.000000},
  {fuseki132020,3,"Fuseki2022",761,11.000000},
  {fuseki132021,3,"Fuseki2023",762,8.000000},
  {fuseki132022,3,"Fuseki2024",684,7.000000},
  {fuseki132023,5,"Fuseki2025",643,67.000000},
  {fuseki132024,5,"Fuseki2026",836,22.000000},
  {fuseki132025,5,"Fuseki2027",718,12.000000},
  {fuseki132026,5,"Fuseki2028",688,9.000000},
  {fuseki132027,6,"Fuseki2029",606,16.000000},
  {fuseki132028,6,"Fuseki2030",537,14.000000},
  {fuseki132029,6,"Fuseki2031",574,8.000000},
  {fuseki132030,6,"Fuseki2032",717,5.000000},
  {fuseki132031,6,"Fuseki2033",718,5.000000},
  {fuseki132032,6,"Fuseki2034",687,4.000000},
  {fuseki132033,6,"Fuseki2035",763,2.000000},
  {fuseki132034,6,"Fuseki2036",573,2.000000},
  {fuseki132035,6,"Fuseki2037",680,2.000000},
  {fuseki132036,6,"Fuseki2038",866,2.000000},
  {fuseki132037,3,"Fuseki2039",570,24.000000},
  {fuseki132038,3,"Fuseki2040",533,16.000000},
  {fuseki132039,3,"Fuseki2041",833,3.000000},
  {fuseki132040,3,"Fuseki2042",834,3.000000},
  {fuseki132041,3,"Fuseki2043",836,3.000000},
  {fuseki132042,3,"Fuseki2044",569,9.000000},
  {fuseki132043,3,"Fuseki2045",570,9.000000},
  {fuseki132044,3,"Fuseki2046",533,8.000000},
  {fuseki132045,3,"Fuseki2047",532,7.000000},
  {fuseki132046,3,"Fuseki2048",834,6.000000},
  {fuseki132047,3,"Fuseki2049",797,2.000000},
  {fuseki132048,3,"Fuseki2050",606,2.000000},
  {fuseki132049,3,"Fuseki2051",761,2.000000},
  {fuseki132050,3,"Fuseki2052",687,1.000000},
  {fuseki132051,3,"Fuseki2053",762,1.000000},
  {fuseki132052,3,"Fuseki2054",761,1.000000},
  {fuseki132053,3,"Fuseki2055",718,1.000000},
  {fuseki132054,3,"Fuseki2056",831,1.000000},
  {fuseki132055,3,"Fuseki2057",651,1.000000},
  {fuseki132056,4,"Fuseki2058",725,22.000000},
  {fuseki132057,4,"Fuseki2059",573,9.000000},
  {fuseki132058,4,"Fuseki2060",688,4.000000},
  {fuseki132059,4,"Fuseki2061",680,3.000000},
  {fuseki132060,4,"Fuseki2062",831,3.000000},
  {fuseki132061,5,"Fuseki2063",718,42.000000},
  {fuseki132062,6,"Fuseki2064",833,28.000000},
  {fuseki132063,6,"Fuseki2065",790,4.000000},
  {fuseki132064,6,"Fuseki2066",723,3.000000},
  {fuseki132065,6,"Fuseki2067",835,17.000000},
  {fuseki132066,6,"Fuseki2068",724,5.000000},
  {fuseki132067,6,"Fuseki2069",795,3.000000},
  {fuseki132068,6,"Fuseki2070",799,3.000000},
  {fuseki132069,6,"Fuseki2071",725,3.000000},
  {fuseki132070,6,"Fuseki2072",643,2.000000},
  {fuseki132071,6,"Fuseki2073",574,2.000000},
  {fuseki132072,5,"Fuseki2074",830,18.000000},
  {fuseki132073,5,"Fuseki2075",610,8.000000},
  {fuseki132074,6,"Fuseki2076",794,28.000000},
  {fuseki132075,7,"Fuseki2077",718,21.000000},
  {fuseki132076,7,"Fuseki2078",650,9.000000},
  {fuseki132077,7,"Fuseki2079",760,8.000000},
  {fuseki132078,7,"Fuseki2080",574,6.000000},
  {fuseki132079,7,"Fuseki2081",614,5.000000},
  {fuseki132080,4,"Fuseki2082",573,5.000000},
  {fuseki132081,4,"Fuseki2083",831,4.000000},
  {fuseki132082,4,"Fuseki2084",798,3.000000},
  {fuseki132083,4,"Fuseki2085",688,3.000000},
  {fuseki132084,4,"Fuseki2086",834,2.000000},
  {fuseki132085,4,"Fuseki2087",795,2.000000},
  {fuseki132086,4,"Fuseki2088",909,1.000000},
  {fuseki132087,4,"Fuseki2089",645,1.000000},
  {fuseki132088,4,"Fuseki2090",833,1.000000},
  {fuseki132089,4,"Fuseki2091",680,1.000000},
  {fuseki132090,4,"Fuseki2092",835,1.000000},
  {fuseki132091,4,"Fuseki2093",614,1.000000},
  {fuseki132092,4,"Fuseki2094",651,9.000000},
  {fuseki132093,4,"Fuseki2095",643,4.000000},
  {fuseki132094,4,"Fuseki2096",794,3.000000},
  {fuseki132095,4,"Fuseki2097",681,2.000000},
  {fuseki132096,4,"Fuseki2098",651,2.000000},
  {fuseki132097,4,"Fuseki2099",532,1.000000},
  {fuseki132098,4,"Fuseki2100",540,1.000000},
  {fuseki132099,4,"Fuseki2101",687,1.000000},
  {fuseki132100,4,"Fuseki2102",724,1.000000},
  {fuseki132101,9,"Fuseki2103",540,15.000000},
  {fuseki132102,9,"Fuseki2104",608,2.000000},
  {fuseki132103,9,"Fuseki2105",569,2.000000},
  {fuseki132104,6,"Fuseki2106",799,20.000000},
  {fuseki132105,4,"Fuseki2107",762,4.000000},
  {fuseki132106,4,"Fuseki2108",680,3.000000},
  {fuseki132107,4,"Fuseki2109",832,2.000000},
  {fuseki132108,4,"Fuseki2110",572,1.000000},
  {fuseki132109,4,"Fuseki2111",573,1.000000},
  {fuseki132110,4,"Fuseki2112",681,1.000000},
  {fuseki132111,4,"Fuseki2113",833,1.000000},
  {fuseki132112,4,"Fuseki2114",615,1.000000},
  {fuseki132113,4,"Fuseki2115",867,1.000000},
  {fuseki132114,4,"Fuseki2116",796,1.000000},
  {fuseki132115,4,"Fuseki2117",684,1.000000},
  {fuseki132116,4,"Fuseki2118",722,1.000000},
  {fuseki132117,4,"Fuseki2119",798,1.000000},
  {fuseki132118,4,"Fuseki2120",651,1.000000},
  {fuseki132119,4,"Fuseki2121",761,1.000000},
  {fuseki132120,4,"Fuseki2122",832,1.000000},
  {fuseki132121,5,"Fuseki2123",688,3.000000},
  {fuseki132122,5,"Fuseki2124",651,3.000000},
  {fuseki132123,5,"Fuseki2125",795,2.000000},
  {fuseki132124,5,"Fuseki2126",759,2.000000},
  {fuseki132125,5,"Fuseki2127",651,2.000000},
  {fuseki132126,5,"Fuseki2128",532,2.000000},
  {fuseki132127,5,"Fuseki2129",687,2.000000},
  {fuseki132128,5,"Fuseki2130",680,1.000000},
  {fuseki132129,5,"Fuseki2131",680,1.000000},
  {fuseki132130,5,"Fuseki2132",643,1.000000},
  {fuseki132131,5,"Fuseki2133",537,1.000000},
  {fuseki132132,5,"Fuseki2134",762,1.000000},
  {fuseki132133,5,"Fuseki2135",796,1.000000},
  {fuseki132134,8,"Fuseki2136",833,8.000000},
  {fuseki132135,8,"Fuseki2137",572,3.000000},
  {fuseki132136,8,"Fuseki2138",796,2.000000},
  {fuseki132137,8,"Fuseki2139",646,2.000000},
  {fuseki132138,8,"Fuseki2140",835,1.000000},
  {fuseki132139,8,"Fuseki2141",532,1.000000},
  {fuseki132140,8,"Fuseki2142",684,1.000000},
  {fuseki132141,8,"Fuseki2143",681,1.000000},
  {fuseki132142,8,"Fuseki2144",762,1.000000},
  {fuseki132143,8,"Fuseki2145",725,1.000000},
  {fuseki132144,7,"Fuseki2146",791,11.000000},
  {fuseki132145,7,"Fuseki2147",870,3.000000},
  {fuseki132146,7,"Fuseki2148",800,3.000000},
  {fuseki132147,5,"Fuseki2149",799,15.000000},
  {fuseki132148,5,"Fuseki2150",795,2.000000},
  {fuseki132149,6,"Fuseki2151",502,6.000000},
  {fuseki132150,6,"Fuseki2152",535,3.000000},
  {fuseki132151,6,"Fuseki2153",574,2.000000},
  {fuseki132152,6,"Fuseki2154",836,1.000000},
  {fuseki132153,6,"Fuseki2155",796,1.000000},
  {fuseki132154,6,"Fuseki2156",687,1.000000},
  {fuseki132155,6,"Fuseki2157",837,1.000000},
  {fuseki132156,6,"Fuseki2158",643,1.000000},
  {fuseki132157,6,"Fuseki2159",834,1.000000},
  {fuseki132158,6,"Fuseki2160",724,1.000000},
  {fuseki132159,6,"Fuseki2161",799,1.000000},
  {fuseki132160,6,"Fuseki2162",681,12.000000},
  {fuseki132161,6,"Fuseki2163",496,2.000000},
  {fuseki132162,6,"Fuseki2164",680,2.000000},
  {fuseki132163,6,"Fuseki2165",866,7.000000},
  {fuseki132164,6,"Fuseki2166",835,5.000000},
  {fuseki132165,6,"Fuseki2167",757,2.000000},
  {fuseki132166,6,"Fuseki2168",835,1.000000},
  {fuseki132167,6,"Fuseki2169",833,1.000000},
  {fuseki132168,6,"Fuseki2170",501,1.000000},
  {fuseki132169,6,"Fuseki2171",758,1.000000},
  {fuseki132170,7,"Fuseki2172",836,17.000000},
  {fuseki132171,8,"Fuseki2173",797,14.000000},
  {fuseki132172,8,"Fuseki2174",577,3.000000},
  {fuseki132173,4,"Fuseki2175",606,9.000000},
  {fuseki132174,4,"Fuseki2176",831,3.000000},
  {fuseki132175,4,"Fuseki2177",828,2.000000},
  {fuseki132176,4,"Fuseki2178",533,1.000000},
  {fuseki132177,4,"Fuseki2179",607,1.000000},
  {fuseki132178,7,"Fuseki2180",644,14.000000},
  {fuseki132179,3,"Fuseki2181",798,5.000000},
  {fuseki132180,3,"Fuseki2182",799,3.000000},
  {fuseki132181,3,"Fuseki2183",798,3.000000},
  {fuseki132182,3,"Fuseki2184",836,2.000000},
  {fuseki132183,3,"Fuseki2185",684,1.000000},
  {fuseki132184,3,"Fuseki2186",534,1.000000},
  {fuseki132185,3,"Fuseki2187",651,1.000000},
  {fuseki132186,8,"Fuseki2188",755,5.000000},
  {fuseki132187,8,"Fuseki2189",794,4.000000},
  {fuseki132188,8,"Fuseki2190",716,1.000000},
  {fuseki132189,8,"Fuseki2191",756,1.000000},
  {fuseki132190,8,"Fuseki2192",867,1.000000},
  {fuseki132191,8,"Fuseki2193",687,1.000000},
  {fuseki132192,8,"Fuseki2194",833,1.000000},
  {fuseki132193,8,"Fuseki2195",609,1.000000},
  {fuseki132194,6,"Fuseki2196",835,13.000000},
  {fuseki132195,6,"Fuseki2197",790,2.000000},
  {fuseki132196,7,"Fuseki2198",834,8.000000},
  {fuseki132197,7,"Fuseki2199",797,3.000000},
  {fuseki132198,7,"Fuseki2200",541,2.000000},
  {fuseki132199,7,"Fuseki2201",573,2.000000},
  {fuseki132200,10,"Fuseki2202",577,10.000000},
  {fuseki132201,10,"Fuseki2203",568,1.000000},
  {fuseki132202,10,"Fuseki2204",867,1.000000},
  {fuseki132203,10,"Fuseki2205",538,1.000000},
  {fuseki132204,10,"Fuseki2206",760,1.000000},
  {fuseki132205,10,"Fuseki2207",499,1.000000},
  {fuseki132206,6,"Fuseki2208",578,3.000000},
  {fuseki132207,6,"Fuseki2209",717,3.000000},
  {fuseki132208,6,"Fuseki2210",643,2.000000},
  {fuseki132209,6,"Fuseki2211",725,1.000000},
  {fuseki132210,6,"Fuseki2212",725,1.000000},
  {fuseki132211,6,"Fuseki2213",540,1.000000},
  {fuseki132212,6,"Fuseki2214",833,1.000000},
  {fuseki132213,6,"Fuseki2215",830,1.000000},
  {fuseki132214,6,"Fuseki2216",758,1.000000},
  {fuseki132215,6,"Fuseki2217",650,1.000000},
  {fuseki132216,9,"Fuseki2218",649,13.000000},
  {fuseki132217,7,"Fuseki2219",537,8.000000},
  {fuseki132218,7,"Fuseki2220",800,2.000000},
  {fuseki132219,7,"Fuseki2221",836,1.000000},
  {fuseki132220,7,"Fuseki2222",650,1.000000},
  {fuseki132221,7,"Fuseki2223",723,1.000000},
  {fuseki132222,7,"Fuseki2224",718,1.000000},
  {fuseki132223,12,"Fuseki2225",834,11.000000},
  {fuseki132224,12,"Fuseki2226",871,2.000000},
  {fuseki132225,7,"Fuseki2227",651,4.000000},
  {fuseki132226,7,"Fuseki2228",836,4.000000},
  {fuseki132227,7,"Fuseki2229",687,2.000000},
  {fuseki132228,7,"Fuseki2230",756,2.000000},
  {fuseki132229,7,"Fuseki2231",533,1.000000},
  {fuseki132230,11,"Fuseki2232",799,13.000000},
  {fuseki132231,6,"Fuseki2233",651,6.000000},
  {fuseki132232,6,"Fuseki2234",688,2.000000},
  {fuseki132233,6,"Fuseki2235",836,1.000000},
  {fuseki132234,6,"Fuseki2236",761,1.000000},
  {fuseki132235,6,"Fuseki2237",687,1.000000},
  {fuseki132236,6,"Fuseki2238",799,1.000000},
  {fuseki132237,6,"Fuseki2239",724,1.000000},
  {fuseki132238,10,"Fuseki2240",761,13.000000},
  {fuseki132239,7,"Fuseki2241",757,9.000000},
  {fuseki132240,7,"Fuseki2242",607,1.000000},
  {fuseki132241,7,"Fuseki2243",830,1.000000},
  {fuseki132242,8,"Fuseki2244",754,10.000000},
  {fuseki132243,8,"Fuseki2245",873,1.000000},
  {fuseki132244,6,"Fuseki2246",645,3.000000},
  {fuseki132245,6,"Fuseki2247",867,2.000000},
  {fuseki132246,6,"Fuseki2248",795,1.000000},
  {fuseki132247,6,"Fuseki2249",643,1.000000},
  {fuseki132248,6,"Fuseki2250",726,1.000000},
  {fuseki132249,6,"Fuseki2251",608,1.000000},
  {fuseki132250,6,"Fuseki2252",644,1.000000},
  {fuseki132251,6,"Fuseki2253",762,1.000000},
  {fuseki132252,13,"Fuseki2254",832,11.000000},
  {fuseki132253,5,"Fuseki2255",575,4.000000},
  {fuseki132254,5,"Fuseki2256",614,3.000000},
  {fuseki132255,5,"Fuseki2257",539,2.000000},
  {fuseki132256,5,"Fuseki2258",532,2.000000},
  {fuseki132257,5,"Fuseki2259",682,7.000000},
  {fuseki132258,5,"Fuseki2260",795,3.000000},
  {fuseki132259,5,"Fuseki2261",717,1.000000},
  {fuseki132260,4,"Fuseki2262",681,3.000000},
  {fuseki132261,4,"Fuseki2263",799,2.000000},
  {fuseki132262,4,"Fuseki2264",834,1.000000},
  {fuseki132263,4,"Fuseki2265",688,1.000000},
  {fuseki132264,4,"Fuseki2266",684,1.000000},
  {fuseki132265,4,"Fuseki2267",831,1.000000},
  {fuseki132266,4,"Fuseki2268",688,1.000000},
  {fuseki132267,4,"Fuseki2269",834,1.000000},
  {fuseki132268,9,"Fuseki2270",755,8.000000},
  {fuseki132269,9,"Fuseki2271",753,2.000000},
  {fuseki132270,11,"Fuseki2272",540,4.000000},
  {fuseki132271,11,"Fuseki2273",533,3.000000},
  {fuseki132272,11,"Fuseki2274",578,2.000000},
  {fuseki132273,11,"Fuseki2275",568,1.000000},
  {fuseki132274,5,"Fuseki2276",794,5.000000},
  {fuseki132275,5,"Fuseki2277",795,1.000000},
  {fuseki132276,5,"Fuseki2278",688,1.000000},
  {fuseki132277,5,"Fuseki2279",871,1.000000},
  {fuseki132278,5,"Fuseki2280",537,1.000000},
  {fuseki132279,4,"Fuseki2281",651,5.000000},
  {fuseki132280,4,"Fuseki2282",833,1.000000},
  {fuseki132281,4,"Fuseki2283",574,1.000000},
  {fuseki132282,4,"Fuseki2284",762,1.000000},
  {fuseki132283,4,"Fuseki2285",688,1.000000},
  {fuseki132284,4,"Fuseki2286",834,2.000000},
  {fuseki132285,4,"Fuseki2287",606,2.000000},
  {fuseki132286,4,"Fuseki2288",761,1.000000},
  {fuseki132287,4,"Fuseki2289",651,1.000000},
  {fuseki132288,4,"Fuseki2290",795,1.000000},
  {fuseki132289,4,"Fuseki2291",651,1.000000},
  {fuseki132290,4,"Fuseki2292",725,1.000000},
  {fuseki132291,5,"Fuseki2293",614,3.000000},
  {fuseki132292,5,"Fuseki2294",718,2.000000},
  {fuseki132293,5,"Fuseki2295",725,1.000000},
  {fuseki132294,5,"Fuseki2296",794,1.000000},
  {fuseki132295,5,"Fuseki2297",652,1.000000},
  {fuseki132296,5,"Fuseki2298",615,1.000000},
  {fuseki132297,5,"Fuseki2299",537,4.000000},
  {fuseki132298,5,"Fuseki2300",608,2.000000},
  {fuseki132299,5,"Fuseki2301",799,1.000000},
  {fuseki132300,5,"Fuseki2302",681,1.000000},
  {fuseki132301,5,"Fuseki2303",536,1.000000},
  {fuseki132302,6,"Fuseki2304",606,5.000000},
  {fuseki132303,6,"Fuseki2305",650,2.000000},
  {fuseki132304,6,"Fuseki2306",651,1.000000},
  {fuseki132305,6,"Fuseki2307",795,1.000000},
  {fuseki132306,5,"Fuseki2308",537,2.000000},
  {fuseki132307,5,"Fuseki2309",651,2.000000},
  {fuseki132308,5,"Fuseki2310",688,1.000000},
  {fuseki132309,5,"Fuseki2311",535,1.000000},
  {fuseki132310,5,"Fuseki2312",831,1.000000},
  {fuseki132311,5,"Fuseki2313",828,1.000000},
  {fuseki132312,5,"Fuseki2314",532,1.000000},
  {fuseki132313,5,"Fuseki2315",569,4.000000},
  {fuseki132314,5,"Fuseki2316",831,2.000000},
  {fuseki132315,5,"Fuseki2317",831,2.000000},
  {fuseki132316,5,"Fuseki2318",725,1.000000},
  {fuseki132317,8,"Fuseki2319",687,4.000000},
  {fuseki132318,8,"Fuseki2320",540,3.000000},
  {fuseki132319,8,"Fuseki2321",614,2.000000},
  {fuseki132320,8,"Fuseki2322",791,5.000000},
  {fuseki132321,8,"Fuseki2323",830,3.000000},
  {fuseki132322,8,"Fuseki2324",836,1.000000},
  {fuseki132323,9,"Fuseki2325",834,5.000000},
  {fuseki132324,9,"Fuseki2326",724,2.000000},
  {fuseki132325,9,"Fuseki2327",497,1.000000},
  {fuseki132326,8,"Fuseki2328",836,8.000000},
  {fuseki132327,10,"Fuseki2329",717,8.000000},
  {fuseki132328,4,"Fuseki2330",835,2.000000},
  {fuseki132329,4,"Fuseki2331",717,1.000000},
  {fuseki132330,4,"Fuseki2332",797,1.000000},
  {fuseki132331,4,"Fuseki2333",681,1.000000},
  {fuseki132332,4,"Fuseki2334",760,1.000000},
  {fuseki132333,4,"Fuseki2335",643,1.000000},
  {fuseki132334,4,"Fuseki2336",688,1.000000},
  {fuseki132335,4,"Fuseki2337",606,3.000000},
  {fuseki132336,4,"Fuseki2338",537,2.000000},
  {fuseki132337,4,"Fuseki2339",534,2.000000},
  {fuseki132338,4,"Fuseki2340",831,1.000000},
  {fuseki132339,8,"Fuseki2341",614,6.000000},
  {fuseki132340,8,"Fuseki2342",539,2.000000},
  {fuseki132341,6,"Fuseki2343",612,3.000000},
  {fuseki132342,6,"Fuseki2344",835,2.000000},
  {fuseki132343,6,"Fuseki2345",835,2.000000},
  {fuseki132344,6,"Fuseki2346",866,1.000000},
  {fuseki132345,9,"Fuseki2347",799,8.000000},
  {fuseki132346,8,"Fuseki2348",871,6.000000},
  {fuseki132347,8,"Fuseki2349",866,1.000000},
  {fuseki132348,8,"Fuseki2350",571,1.000000},
  {fuseki132349,10,"Fuseki2351",578,7.000000},
  {fuseki132350,10,"Fuseki2352",835,1.000000},
  {fuseki132351,7,"Fuseki2353",537,2.000000},
  {fuseki132352,7,"Fuseki2354",577,2.000000},
  {fuseki132353,7,"Fuseki2355",799,2.000000},
  {fuseki132354,7,"Fuseki2356",828,1.000000},
  {fuseki132355,7,"Fuseki2357",687,1.000000},
  {fuseki132356,11,"Fuseki2358",756,4.000000},
  {fuseki132357,11,"Fuseki2359",496,4.000000},
  {fuseki132358,11,"Fuseki2360",539,7.000000},
  {fuseki132359,4,"Fuseki2361",651,3.000000},
  {fuseki132360,4,"Fuseki2362",798,1.000000},
  {fuseki132361,4,"Fuseki2363",831,1.000000},
  {fuseki132362,4,"Fuseki2364",534,1.000000},
  {fuseki132363,4,"Fuseki2365",537,1.000000},
  {fuseki132364,10,"Fuseki2366",538,6.000000},
  {fuseki132365,10,"Fuseki2367",790,1.000000},
  {fuseki132366,12,"Fuseki2368",504,7.000000},
  {fuseki132367,7,"Fuseki2369",687,6.000000},
  {fuseki132368,7,"Fuseki2370",680,1.000000},
  {fuseki132369,13,"Fuseki2371",610,7.000000},
  {fuseki132370,3,"Fuseki2372",570,3.000000},
  {fuseki132371,3,"Fuseki2373",532,2.000000},
  {fuseki132372,3,"Fuseki2374",569,1.000000},
  {fuseki132373,3,"Fuseki2375",762,1.000000},
  {fuseki132374,4,"Fuseki2376",798,3.000000},
  {fuseki132375,4,"Fuseki2377",573,1.000000},
  {fuseki132376,4,"Fuseki2378",795,1.000000},
  {fuseki132377,4,"Fuseki2379",835,1.000000},
  {fuseki132378,4,"Fuseki2380",646,1.000000},
  {fuseki132379,6,"Fuseki2381",680,2.000000},
  {fuseki132380,6,"Fuseki2382",532,1.000000},
  {fuseki132381,6,"Fuseki2383",831,1.000000},
  {fuseki132382,6,"Fuseki2384",724,1.000000},
  {fuseki132383,6,"Fuseki2385",606,1.000000},
  {fuseki132384,6,"Fuseki2386",795,1.000000},
  {fuseki132385,4,"Fuseki2387",571,1.000000},
  {fuseki132386,4,"Fuseki2388",836,1.000000},
  {fuseki132387,4,"Fuseki2389",570,1.000000},
  {fuseki132388,4,"Fuseki2390",687,1.000000},
  {fuseki132389,4,"Fuseki2391",533,1.000000},
  {fuseki132390,4,"Fuseki2392",831,1.000000},
  {fuseki132391,9,"Fuseki2393",833,6.000000},
  {fuseki132392,7,"Fuseki2394",540,6.000000},
  {fuseki132393,12,"Fuseki2395",500,3.000000},
  {fuseki132394,12,"Fuseki2396",501,3.000000},
  {fuseki132395,10,"Fuseki2397",652,5.000000},
  {fuseki132396,10,"Fuseki2398",800,1.000000},
  {fuseki132397,0,"Fuseki2399",576,5.000000},
  {fuseki132398,0,"Fuseki2400",836,1.000000},
  {fuseki132399,8,"Fuseki2401",536,5.000000},
  {fuseki132400,8,"Fuseki2402",540,1.000000},
  {fuseki132401,7,"Fuseki2403",725,2.000000},
  {fuseki132402,7,"Fuseki2404",724,2.000000},
  {fuseki132403,7,"Fuseki2405",687,1.000000},
  {fuseki132404,7,"Fuseki2406",828,1.000000},
  {fuseki132405,8,"Fuseki2407",540,4.000000},
  {fuseki132406,8,"Fuseki2408",575,1.000000},
  {fuseki132407,8,"Fuseki2409",687,1.000000},
  {fuseki132408,6,"Fuseki2410",578,4.000000},
  {fuseki132409,6,"Fuseki2411",574,1.000000},
  {fuseki132410,6,"Fuseki2412",680,1.000000},
  {fuseki132411,11,"Fuseki2413",574,6.000000},
  {fuseki132412,8,"Fuseki2414",534,2.000000},
  {fuseki132413,8,"Fuseki2415",833,2.000000},
  {fuseki132414,8,"Fuseki2416",688,1.000000},
  {fuseki132415,8,"Fuseki2417",574,1.000000},
  {fuseki132416,9,"Fuseki2418",650,6.000000},
  {fuseki132417,7,"Fuseki2419",762,5.000000},
  {fuseki132418,9,"Fuseki2420",534,5.000000},
  {fuseki132419,6,"Fuseki2421",724,4.000000},
  {fuseki132420,6,"Fuseki2422",866,1.000000},
  {fuseki132421,10,"Fuseki2423",569,2.000000},
  {fuseki132422,10,"Fuseki2424",533,2.000000},
  {fuseki132423,10,"Fuseki2425",569,1.000000},
  {fuseki132424,11,"Fuseki2426",615,5.000000},
  {fuseki132425,6,"Fuseki2427",796,2.000000},
  {fuseki132426,6,"Fuseki2428",717,1.000000},
  {fuseki132427,6,"Fuseki2429",795,1.000000},
  {fuseki132428,6,"Fuseki2430",754,1.000000},
  {fuseki132429,12,"Fuseki2431",688,5.000000},
  {fuseki132430,12,"Fuseki2432",501,3.000000},
  {fuseki132431,12,"Fuseki2433",539,2.000000},
  {fuseki132432,9,"Fuseki2434",686,5.000000},
  {fuseki132433,7,"Fuseki2435",760,2.000000},
  {fuseki132434,7,"Fuseki2436",834,2.000000},
  {fuseki132435,7,"Fuseki2437",762,1.000000},
  {fuseki132436,5,"Fuseki2438",577,1.000000},
  {fuseki132437,5,"Fuseki2439",830,1.000000},
  {fuseki132438,5,"Fuseki2440",687,1.000000},
  {fuseki132439,5,"Fuseki2441",572,1.000000},
  {fuseki132440,5,"Fuseki2442",832,1.000000},
  {fuseki132441,8,"Fuseki2443",836,5.000000},
  {fuseki132442,11,"Fuseki2444",755,5.000000},
  {fuseki132443,9,"Fuseki2445",754,5.000000},
  {fuseki132444,9,"Fuseki2446",834,3.000000},
  {fuseki132445,9,"Fuseki2447",833,1.000000},
  {fuseki132446,9,"Fuseki2448",836,1.000000},
  {fuseki132447,9,"Fuseki2449",652,5.000000},
  {fuseki132448,10,"Fuseki2450",796,4.000000},
  {fuseki132449,10,"Fuseki2451",720,1.000000},
  {fuseki132450,10,"Fuseki2452",753,5.000000},
  {fuseki132451,3,"Fuseki2453",762,1.000000},
  {fuseki132452,3,"Fuseki2454",835,1.000000},
  {fuseki132453,3,"Fuseki2455",643,1.000000},
  {fuseki132454,3,"Fuseki2456",830,1.000000},
  {fuseki132455,3,"Fuseki2457",794,1.000000},
  {fuseki132456,1,"Fuseki2458",577,1.000000},
  {fuseki132457,1,"Fuseki2459",540,1.000000},
  {fuseki132458,1,"Fuseki2460",798,1.000000},
  {fuseki132459,1,"Fuseki2461",613,1.000000},
  {fuseki132460,1,"Fuseki2462",532,1.000000},
  {fuseki132461,8,"Fuseki2463",650,5.000000},
  {fuseki132462,11,"Fuseki2464",832,4.000000},
  {fuseki132463,11,"Fuseki2465",689,1.000000},
  {fuseki132464,7,"Fuseki2466",800,1.000000},
  {fuseki132465,7,"Fuseki2467",643,1.000000},
  {fuseki132466,7,"Fuseki2468",831,1.000000},
  {fuseki132467,7,"Fuseki2469",687,1.000000},
  {fuseki132468,7,"Fuseki2470",643,1.000000},
  {fuseki132469,4,"Fuseki2471",651,2.000000},
  {fuseki132470,4,"Fuseki2472",717,2.000000},
  {fuseki132471,4,"Fuseki2473",533,1.000000},
  {fuseki132472,10,"Fuseki2474",502,5.000000},
  {fuseki132473,5,"Fuseki2475",717,3.000000},
  {fuseki132474,5,"Fuseki2476",831,1.000000},
  {fuseki132475,5,"Fuseki2477",643,1.000000},
  {fuseki132476,6,"Fuseki2478",836,1.000000},
  {fuseki132477,6,"Fuseki2479",794,1.000000},
  {fuseki132478,6,"Fuseki2480",796,1.000000},
  {fuseki132479,6,"Fuseki2481",831,1.000000},
  {fuseki132480,6,"Fuseki2482",830,1.000000},
  {fuseki132481,13,"Fuseki2483",726,5.000000},
  {fuseki132482,7,"Fuseki2484",754,2.000000},
  {fuseki132483,7,"Fuseki2485",687,2.000000},
  {fuseki132484,7,"Fuseki2486",680,1.000000},
  {fuseki132485,12,"Fuseki2487",679,5.000000},
  {fuseki132486,7,"Fuseki2488",828,2.000000},
  {fuseki132487,7,"Fuseki2489",536,1.000000},
  {fuseki132488,7,"Fuseki2490",791,1.000000},
  {fuseki132489,7,"Fuseki2491",790,1.000000},
  {fuseki132490,10,"Fuseki2492",689,5.000000},
  {fuseki132491,13,"Fuseki2493",828,5.000000},
  {fuseki132492,11,"Fuseki2494",503,5.000000},
  {fuseki132493,6,"Fuseki2495",538,4.000000},
  {fuseki132494,7,"Fuseki2496",574,4.000000},
  {fuseki132495,4,"Fuseki2497",799,4.000000},
  {fuseki132496,12,"Fuseki2498",498,4.000000},
  {fuseki132497,12,"Fuseki2499",647,2.000000},
  {fuseki132498,12,"Fuseki2500",684,2.000000},
  {fuseki132499,6,"Fuseki2501",612,4.000000},
  {fuseki132500,12,"Fuseki2502",504,4.000000},
  {fuseki132501,13,"Fuseki2503",614,3.000000},
  {fuseki132502,13,"Fuseki2504",575,1.000000},
  {fuseki132503,12,"Fuseki2505",612,4.000000},
  {fuseki132504,11,"Fuseki2506",724,4.000000},
  {fuseki132505,5,"Fuseki2507",831,3.000000},
  {fuseki132506,5,"Fuseki2508",606,1.000000},
  {fuseki132507,12,"Fuseki2509",794,3.000000},
  {fuseki132508,12,"Fuseki2510",681,1.000000},
  {fuseki132509,12,"Fuseki2511",539,4.000000},
  {fuseki132510,5,"Fuseki2512",651,4.000000},
  {fuseki132511,9,"Fuseki2513",577,4.000000},
  {fuseki132512,7,"Fuseki2514",795,1.000000},
  {fuseki132513,7,"Fuseki2515",828,1.000000},
  {fuseki132514,7,"Fuseki2516",541,1.000000},
  {fuseki132515,7,"Fuseki2517",756,1.000000},
  {fuseki132516,12,"Fuseki2518",800,2.000000},
  {fuseki132517,12,"Fuseki2519",836,1.000000},
  {fuseki132518,12,"Fuseki2520",569,1.000000},
  {fuseki132519,11,"Fuseki2521",539,4.000000},
  {fuseki132520,7,"Fuseki2522",540,4.000000},
  {fuseki132521,14,"Fuseki2523",533,3.000000},
  {fuseki132522,14,"Fuseki2524",577,1.000000},
  {fuseki132523,5,"Fuseki2525",833,2.000000},
  {fuseki132524,5,"Fuseki2526",535,2.000000},
  {fuseki132525,7,"Fuseki2527",650,1.000000},
  {fuseki132526,7,"Fuseki2528",726,1.000000},
  {fuseki132527,7,"Fuseki2529",717,1.000000},
  {fuseki132528,7,"Fuseki2530",717,1.000000},
  {fuseki132529,7,"Fuseki2531",828,2.000000},
  {fuseki132530,7,"Fuseki2532",535,1.000000},
  {fuseki132531,7,"Fuseki2533",865,1.000000},
  {fuseki132532,6,"Fuseki2534",607,2.000000},
  {fuseki132533,6,"Fuseki2535",608,1.000000},
  {fuseki132534,6,"Fuseki2536",717,1.000000},
  {fuseki132535,9,"Fuseki2537",572,2.000000},
  {fuseki132536,9,"Fuseki2538",535,1.000000},
  {fuseki132537,9,"Fuseki2539",721,1.000000},
  {fuseki132538,3,"Fuseki2540",569,1.000000},
  {fuseki132539,3,"Fuseki2541",832,1.000000},
  {fuseki132540,3,"Fuseki2542",607,1.000000},
  {fuseki132541,3,"Fuseki2543",569,1.000000},
  {fuseki132542,10,"Fuseki2544",578,4.000000},
  {fuseki132543,7,"Fuseki2545",722,4.000000},
  {fuseki132544,13,"Fuseki2546",534,3.000000},
  {fuseki132545,13,"Fuseki2547",497,1.000000},
  {fuseki132546,6,"Fuseki2548",605,2.000000},
  {fuseki132547,6,"Fuseki2549",797,1.000000},
  {fuseki132548,6,"Fuseki2550",724,1.000000},
  {fuseki132549,9,"Fuseki2551",539,2.000000},
  {fuseki132550,9,"Fuseki2552",578,2.000000},
  {fuseki132551,11,"Fuseki2553",649,4.000000},
  {fuseki132552,9,"Fuseki2554",688,4.000000},
  {fuseki132553,13,"Fuseki2555",532,4.000000},
  {fuseki132554,8,"Fuseki2556",577,4.000000},
  {fuseki132555,10,"Fuseki2557",613,4.000000},
  {fuseki132556,5,"Fuseki2558",644,2.000000},
  {fuseki132557,5,"Fuseki2559",572,1.000000},
  {fuseki132558,5,"Fuseki2560",836,1.000000},
  {fuseki132559,8,"Fuseki2561",577,2.000000},
  {fuseki132560,8,"Fuseki2562",680,1.000000},
  {fuseki132561,8,"Fuseki2563",650,1.000000},
  {fuseki132562,13,"Fuseki2564",536,4.000000},
  {fuseki132563,9,"Fuseki2565",614,3.000000},
  {fuseki132564,9,"Fuseki2566",607,1.000000},
  {fuseki132565,8,"Fuseki2567",760,3.000000},
  {fuseki132566,8,"Fuseki2568",717,1.000000},
  {fuseki132567,8,"Fuseki2569",537,3.000000},
  {fuseki132568,8,"Fuseki2570",799,1.000000},
  {fuseki132569,3,"Fuseki2571",569,2.000000},
  {fuseki132570,3,"Fuseki2572",573,1.000000},
  {fuseki132571,3,"Fuseki2573",570,1.000000},
  {fuseki132572,6,"Fuseki2574",540,2.000000},
  {fuseki132573,6,"Fuseki2575",537,1.000000},
  {fuseki132574,6,"Fuseki2576",790,1.000000},
  {fuseki132575,8,"Fuseki2577",569,1.000000},
  {fuseki132576,8,"Fuseki2578",829,1.000000},
  {fuseki132577,8,"Fuseki2579",643,1.000000},
  {fuseki132578,8,"Fuseki2580",687,1.000000},
  {fuseki132579,5,"Fuseki2581",831,1.000000},
  {fuseki132580,5,"Fuseki2582",537,1.000000},
  {fuseki132581,5,"Fuseki2583",799,1.000000},
  {fuseki132582,5,"Fuseki2584",687,1.000000},
  {fuseki132583,6,"Fuseki2585",761,1.000000},
  {fuseki132584,6,"Fuseki2586",680,1.000000},
  {fuseki132585,6,"Fuseki2587",834,1.000000},
  {fuseki132586,6,"Fuseki2588",828,1.000000},
  {fuseki132587,7,"Fuseki2589",718,1.000000},
  {fuseki132588,7,"Fuseki2590",793,1.000000},
  {fuseki132589,7,"Fuseki2591",652,1.000000},
  {fuseki132590,5,"Fuseki2592",718,2.000000},
  {fuseki132591,5,"Fuseki2593",608,1.000000},
  {fuseki132592,7,"Fuseki2594",572,2.000000},
  {fuseki132593,7,"Fuseki2595",534,1.000000},
  {fuseki132594,6,"Fuseki2596",573,3.000000},
  {fuseki132595,8,"Fuseki2597",837,3.000000},
  {fuseki132596,8,"Fuseki2598",834,2.000000},
  {fuseki132597,8,"Fuseki2599",870,1.000000},
  {fuseki132598,6,"Fuseki2600",831,1.000000},
  {fuseki132599,6,"Fuseki2601",754,1.000000},
  {fuseki132600,6,"Fuseki2602",577,1.000000},
  {fuseki132601,6,"Fuseki2603",687,1.000000},
  {fuseki132602,6,"Fuseki2604",573,1.000000},
  {fuseki132603,6,"Fuseki2605",797,1.000000},
  {fuseki132604,6,"Fuseki2606",577,2.000000},
  {fuseki132605,6,"Fuseki2607",540,1.000000},
  {fuseki132606,11,"Fuseki2608",541,3.000000},
  {fuseki132607,4,"Fuseki2609",761,2.000000},
  {fuseki132608,5,"Fuseki2610",571,1.000000},
  {fuseki132609,5,"Fuseki2611",644,1.000000},
  {fuseki132610,5,"Fuseki2612",681,1.000000},
  {fuseki132611,4,"Fuseki2613",835,1.000000},
  {fuseki132612,4,"Fuseki2614",799,1.000000},
  {fuseki132613,4,"Fuseki2615",836,1.000000},
  {fuseki132614,7,"Fuseki2616",724,2.000000},
  {fuseki132615,7,"Fuseki2617",681,1.000000},
  {fuseki132616,15,"Fuseki2618",496,2.000000},
  {fuseki132617,15,"Fuseki2619",567,1.000000},
  {fuseki132618,11,"Fuseki2620",535,3.000000},
  {fuseki132619,9,"Fuseki2621",829,3.000000},
  {fuseki132620,7,"Fuseki2622",830,1.000000},
  {fuseki132621,7,"Fuseki2623",681,1.000000},
  {fuseki132622,7,"Fuseki2624",651,1.000000},
  {fuseki132623,9,"Fuseki2625",577,3.000000},
  {fuseki132624,14,"Fuseki2626",501,3.000000},
  {fuseki132625,9,"Fuseki2627",644,3.000000},
  {fuseki132626,14,"Fuseki2628",498,3.000000},
  {fuseki132627,5,"Fuseki2629",651,2.000000},
  {fuseki132628,5,"Fuseki2630",717,1.000000},
  {fuseki132629,10,"Fuseki2631",683,2.000000},
  {fuseki132630,10,"Fuseki2632",648,1.000000},
  {fuseki132631,13,"Fuseki2633",499,3.000000},
  {fuseki132632,5,"Fuseki2634",796,2.000000},
  {fuseki132633,5,"Fuseki2635",831,1.000000},
  {fuseki132634,4,"Fuseki2636",540,1.000000},
  {fuseki132635,4,"Fuseki2637",606,1.000000},
  {fuseki132636,4,"Fuseki2638",540,1.000000},
  {fuseki132637,13,"Fuseki2639",793,3.000000},
  {fuseki132638,14,"Fuseki2640",573,3.000000},
  {fuseki132639,15,"Fuseki2641",569,1.000000},
  {fuseki132640,15,"Fuseki2642",569,1.000000},
  {fuseki132641,15,"Fuseki2643",829,1.000000},
  {fuseki132642,12,"Fuseki2644",568,2.000000},
  {fuseki132643,12,"Fuseki2645",643,1.000000},
  {fuseki132644,10,"Fuseki2646",540,2.000000},
  {fuseki132645,10,"Fuseki2647",535,1.000000},
  {fuseki132646,8,"Fuseki2648",539,1.000000},
  {fuseki132647,8,"Fuseki2649",532,1.000000},
  {fuseki132648,8,"Fuseki2650",797,1.000000},
  {fuseki132649,6,"Fuseki2651",540,2.000000},
  {fuseki132650,6,"Fuseki2652",613,1.000000},
  {fuseki132651,13,"Fuseki2653",828,3.000000},
  {fuseki132652,9,"Fuseki2654",577,2.000000},
  {fuseki132653,9,"Fuseki2655",575,1.000000},
  {fuseki132654,13,"Fuseki2656",615,3.000000},
  {fuseki132655,13,"Fuseki2657",540,3.000000},
  {fuseki132656,7,"Fuseki2658",831,1.000000},
  {fuseki132657,7,"Fuseki2659",643,1.000000},
  {fuseki132658,7,"Fuseki2660",532,1.000000},
  {fuseki132659,13,"Fuseki2661",540,2.000000},
  {fuseki132660,13,"Fuseki2662",615,1.000000},
  {fuseki132661,10,"Fuseki2663",643,2.000000},
  {fuseki132662,10,"Fuseki2664",717,1.000000},
  {fuseki132663,9,"Fuseki2665",873,2.000000},
  {fuseki132664,9,"Fuseki2666",872,1.000000},
  {fuseki132665,12,"Fuseki2667",867,3.000000},
  {fuseki132666,6,"Fuseki2668",831,1.000000},
  {fuseki132667,6,"Fuseki2669",791,1.000000},
  {fuseki132668,6,"Fuseki2670",754,1.000000},
  {fuseki132669,5,"Fuseki2671",831,1.000000},
  {fuseki132670,5,"Fuseki2672",573,1.000000},
  {fuseki132671,5,"Fuseki2673",718,1.000000},
  {fuseki132672,7,"Fuseki2674",795,2.000000},
  {fuseki132673,7,"Fuseki2675",532,1.000000},
  {fuseki132674,5,"Fuseki2676",835,3.000000},
  {fuseki132675,13,"Fuseki2677",497,3.000000},
  {fuseki132676,10,"Fuseki2678",578,3.000000},
  {fuseki132677,12,"Fuseki2679",535,1.000000},
  {fuseki132678,12,"Fuseki2680",795,1.000000},
  {fuseki132679,12,"Fuseki2681",536,1.000000},
  {fuseki132680,7,"Fuseki2682",687,3.000000},
  {fuseki132681,8,"Fuseki2683",613,3.000000},
  {fuseki132682,12,"Fuseki2684",534,3.000000},
  {fuseki132683,6,"Fuseki2685",573,3.000000},
  {fuseki132684,5,"Fuseki2686",762,2.000000},
  {fuseki132685,5,"Fuseki2687",831,1.000000},
  {fuseki132686,8,"Fuseki2688",835,3.000000},
  {fuseki132687,10,"Fuseki2689",796,3.000000},
  {fuseki132688,4,"Fuseki2690",717,1.000000},
  {fuseki132689,4,"Fuseki2691",539,1.000000},
  {fuseki132690,4,"Fuseki2692",572,1.000000},
  {fuseki132691,5,"Fuseki2693",717,1.000000},
  {fuseki132692,5,"Fuseki2694",535,1.000000},
  {fuseki132693,5,"Fuseki2695",680,1.000000},
  {fuseki132694,5,"Fuseki2696",532,2.000000},
  {fuseki132695,5,"Fuseki2697",651,1.000000},
  {fuseki132696,7,"Fuseki2698",831,2.000000},
  {fuseki132697,7,"Fuseki2699",650,1.000000},
  {fuseki132698,10,"Fuseki2700",833,1.000000},
  {fuseki132699,10,"Fuseki2701",614,1.000000},
  {fuseki132700,10,"Fuseki2702",758,1.000000},
  {fuseki132701,7,"Fuseki2703",831,1.000000},
  {fuseki132702,7,"Fuseki2704",717,1.000000},
  {fuseki132703,7,"Fuseki2705",532,1.000000},
  {fuseki132704,10,"Fuseki2706",539,3.000000},
  {fuseki132705,4,"Fuseki2707",651,2.000000},
  {fuseki132706,4,"Fuseki2708",569,1.000000},
  {fuseki132707,7,"Fuseki2709",574,2.000000},
  {fuseki132708,7,"Fuseki2710",569,1.000000},
  {fuseki132709,9,"Fuseki2711",795,3.000000},
  {fuseki132710,9,"Fuseki2712",873,3.000000},
  {fuseki132711,12,"Fuseki2713",613,3.000000},
  {fuseki132712,14,"Fuseki2714",791,3.000000},
  {fuseki132713,7,"Fuseki2715",718,3.000000},
  {fuseki132714,11,"Fuseki2716",831,3.000000},
  {fuseki132715,5,"Fuseki2717",614,1.000000},
  {fuseki132716,5,"Fuseki2718",535,1.000000},
  {fuseki132717,5,"Fuseki2719",643,1.000000},
  {fuseki132718,8,"Fuseki2720",834,1.000000},
  {fuseki132719,8,"Fuseki2721",540,1.000000},
  {fuseki132720,8,"Fuseki2722",794,1.000000},
  {fuseki132721,6,"Fuseki2723",718,2.000000},
  {fuseki132722,6,"Fuseki2724",829,1.000000},
  {fuseki132723,4,"Fuseki2725",835,1.000000},
  {fuseki132724,4,"Fuseki2726",831,1.000000},
  {fuseki132725,4,"Fuseki2727",572,1.000000},
  {fuseki132726,14,"Fuseki2728",830,3.000000},
  {fuseki132727,11,"Fuseki2729",578,3.000000},
  {fuseki132728,9,"Fuseki2730",614,3.000000},
  {fuseki132729,5,"Fuseki2731",688,1.000000},
  {fuseki132730,5,"Fuseki2732",725,1.000000},
  {fuseki132731,5,"Fuseki2733",578,1.000000},
  {fuseki132732,6,"Fuseki2734",650,3.000000},
  {fuseki132733,10,"Fuseki2735",835,2.000000},
  {fuseki132734,10,"Fuseki2736",613,1.000000},
  {fuseki132735,7,"Fuseki2737",649,1.000000},
  {fuseki132736,7,"Fuseki2738",828,1.000000},
  {fuseki132737,7,"Fuseki2739",873,1.000000},
  {fuseki132738,6,"Fuseki2740",534,1.000000},
  {fuseki132739,6,"Fuseki2741",681,1.000000},
  {fuseki132740,6,"Fuseki2742",759,1.000000},
  {fuseki132741,5,"Fuseki2743",795,2.000000},
  {fuseki132742,5,"Fuseki2744",794,1.000000},
  {fuseki132743,12,"Fuseki2745",539,1.000000},
  {fuseki132744,12,"Fuseki2746",827,1.000000},
  {fuseki132745,14,"Fuseki2747",867,2.000000},
  {fuseki132746,10,"Fuseki2748",538,1.000000},
  {fuseki132747,10,"Fuseki2749",537,1.000000},
  {fuseki132748,8,"Fuseki2750",828,2.000000},
  {fuseki132749,15,"Fuseki2751",724,1.000000},
  {fuseki132750,15,"Fuseki2752",686,1.000000},
  {fuseki132751,6,"Fuseki2753",569,2.000000},
  {fuseki132752,10,"Fuseki2754",836,1.000000},
  {fuseki132753,10,"Fuseki2755",835,1.000000},
  {fuseki132754,8,"Fuseki2756",724,2.000000},
  {fuseki132755,5,"Fuseki2757",795,1.000000},
  {fuseki132756,5,"Fuseki2758",832,1.000000},
  {fuseki132757,17,"Fuseki2759",531,2.000000},
  {fuseki132758,6,"Fuseki2760",681,2.000000},
  {fuseki132759,6,"Fuseki2761",828,1.000000},
  {fuseki132760,6,"Fuseki2762",606,1.000000},
  {fuseki132761,9,"Fuseki2763",531,1.000000},
  {fuseki132762,9,"Fuseki2764",535,1.000000},
  {fuseki132763,7,"Fuseki2765",834,2.000000},
  {fuseki132764,9,"Fuseki2766",790,2.000000},
  {fuseki132765,8,"Fuseki2767",680,1.000000},
  {fuseki132766,8,"Fuseki2768",762,1.000000},
  {fuseki132767,14,"Fuseki2769",649,2.000000},
  {fuseki132768,5,"Fuseki2770",723,2.000000},
  {fuseki132769,10,"Fuseki2771",643,1.000000},
  {fuseki132770,10,"Fuseki2772",799,1.000000},
  {fuseki132771,10,"Fuseki2773",568,2.000000},
  {fuseki132772,5,"Fuseki2774",643,2.000000},
  {fuseki132773,5,"Fuseki2775",795,1.000000},
  {fuseki132774,5,"Fuseki2776",610,1.000000},
  {fuseki132775,7,"Fuseki2777",537,2.000000},
  {fuseki132776,7,"Fuseki2778",796,1.000000},
  {fuseki132777,7,"Fuseki2779",573,1.000000},
  {fuseki132778,7,"Fuseki2780",650,2.000000},
  {fuseki132779,13,"Fuseki2781",535,2.000000},
  {fuseki132780,7,"Fuseki2782",534,2.000000},
  {fuseki132781,6,"Fuseki2783",828,1.000000},
  {fuseki132782,6,"Fuseki2784",614,1.000000},
  {fuseki132783,4,"Fuseki2785",835,2.000000},
  {fuseki132784,9,"Fuseki2786",502,2.000000},
  {fuseki132785,7,"Fuseki2787",535,2.000000},
  {fuseki132786,13,"Fuseki2788",874,2.000000},
  {fuseki132787,7,"Fuseki2789",835,1.000000},
  {fuseki132788,7,"Fuseki2790",717,1.000000},
  {fuseki132789,7,"Fuseki2791",834,1.000000},
  {fuseki132790,7,"Fuseki2792",828,1.000000},
  {fuseki132791,12,"Fuseki2793",794,2.000000},
  {fuseki132792,6,"Fuseki2794",829,2.000000},
  {fuseki132793,10,"Fuseki2795",717,1.000000},
  {fuseki132794,10,"Fuseki2796",688,1.000000},
  {fuseki132795,7,"Fuseki2797",533,2.000000},
  {fuseki132796,8,"Fuseki2798",651,1.000000},
  {fuseki132797,8,"Fuseki2799",652,1.000000},
  {fuseki132798,9,"Fuseki2800",867,1.000000},
  {fuseki132799,9,"Fuseki2801",866,1.000000},
  {fuseki132800,11,"Fuseki2802",539,2.000000},
  {fuseki132801,8,"Fuseki2803",866,2.000000},
  {fuseki132802,6,"Fuseki2804",796,2.000000},
  {fuseki132803,8,"Fuseki2805",649,2.000000},
  {fuseki132804,8,"Fuseki2806",799,1.000000},
  {fuseki132805,8,"Fuseki2807",797,1.000000},
  {fuseki132806,8,"Fuseki2808",684,1.000000},
  {fuseki132807,8,"Fuseki2809",759,1.000000},
  {fuseki132808,11,"Fuseki2810",495,1.000000},
  {fuseki132809,11,"Fuseki2811",680,1.000000},
  {fuseki132810,6,"Fuseki2812",537,2.000000},
  {fuseki132811,9,"Fuseki2813",829,2.000000},
  {fuseki132812,10,"Fuseki2814",688,2.000000},
  {fuseki132813,5,"Fuseki2815",688,1.000000},
  {fuseki132814,5,"Fuseki2816",535,1.000000},
  {fuseki132815,10,"Fuseki2817",759,2.000000},
  {fuseki132816,9,"Fuseki2818",613,1.000000},
  {fuseki132817,9,"Fuseki2819",578,1.000000},
  {fuseki132818,8,"Fuseki2820",762,2.000000},
  {fuseki132819,5,"Fuseki2821",828,1.000000},
  {fuseki132820,5,"Fuseki2822",717,1.000000},
  {fuseki132821,12,"Fuseki2823",794,2.000000},
  {fuseki132822,5,"Fuseki2824",687,1.000000},
  {fuseki132823,5,"Fuseki2825",651,1.000000},
  {fuseki132824,11,"Fuseki2826",793,2.000000},
  {fuseki132825,9,"Fuseki2827",568,2.000000},
  {fuseki132826,10,"Fuseki2828",724,2.000000},
  {fuseki132827,4,"Fuseki2829",537,1.000000},
  {fuseki132828,4,"Fuseki2830",571,1.000000},
  {fuseki132829,7,"Fuseki2831",577,2.000000},
  {fuseki132830,8,"Fuseki2832",578,1.000000},
  {fuseki132831,8,"Fuseki2833",613,1.000000},
  {fuseki132832,10,"Fuseki2834",614,2.000000},
  {fuseki132833,13,"Fuseki2835",760,2.000000},
  {fuseki132834,14,"Fuseki2836",761,2.000000},
  {fuseki132835,7,"Fuseki2837",794,1.000000},
  {fuseki132836,7,"Fuseki2838",722,1.000000},
  {fuseki132837,9,"Fuseki2839",573,1.000000},
  {fuseki132838,9,"Fuseki2840",796,1.000000},
  {fuseki132839,7,"Fuseki2841",538,2.000000},
  {fuseki132840,6,"Fuseki2842",535,1.000000},
  {fuseki132841,6,"Fuseki2843",538,1.000000},
  {fuseki132842,8,"Fuseki2844",834,1.000000},
  {fuseki132843,8,"Fuseki2845",684,1.000000},
  {fuseki132844,7,"Fuseki2846",496,2.000000},
  {fuseki132845,16,"Fuseki2847",572,2.000000},
  {fuseki132846,10,"Fuseki2848",498,2.000000},
  {fuseki132847,13,"Fuseki2849",537,2.000000},
  {fuseki132848,12,"Fuseki2850",612,2.000000},
  {fuseki132849,8,"Fuseki2851",834,1.000000},
  {fuseki132850,8,"Fuseki2852",532,1.000000},
  {fuseki132851,8,"Fuseki2853",532,2.000000},
  {fuseki132852,8,"Fuseki2854",650,1.000000},
  {fuseki132853,8,"Fuseki2855",866,1.000000},
  {fuseki132854,5,"Fuseki2856",829,2.000000},
  {fuseki132855,5,"Fuseki2857",651,1.000000},
  {fuseki132856,5,"Fuseki2858",832,1.000000},
  {fuseki132857,9,"Fuseki2859",612,1.000000},
  {fuseki132858,9,"Fuseki2860",578,1.000000},
  {fuseki132859,9,"Fuseki2861",578,2.000000},
  {fuseki132860,4,"Fuseki2862",724,1.000000},
  {fuseki132861,4,"Fuseki2863",533,1.000000},
  {fuseki132862,14,"Fuseki2864",503,2.000000},
  {fuseki132863,11,"Fuseki2865",652,2.000000},
  {fuseki132864,8,"Fuseki2866",791,2.000000},
  {fuseki132865,7,"Fuseki2867",753,2.000000},
  {fuseki132866,11,"Fuseki2868",645,2.000000},
  {fuseki132867,7,"Fuseki2869",532,1.000000},
  {fuseki132868,7,"Fuseki2870",831,1.000000},
  {fuseki132869,7,"Fuseki2871",534,2.000000},
  {fuseki132870,8,"Fuseki2872",834,2.000000},
  {fuseki132871,9,"Fuseki2873",687,1.000000},
  {fuseki132872,9,"Fuseki2874",796,1.000000},
  {fuseki132873,7,"Fuseki2875",828,2.000000},
  {fuseki132874,8,"Fuseki2876",796,1.000000},
  {fuseki132875,8,"Fuseki2877",720,1.000000},
  {fuseki132876,6,"Fuseki2878",831,2.000000},
  {fuseki132877,13,"Fuseki2879",571,2.000000},
  {fuseki132878,8,"Fuseki2880",651,2.000000},
  {fuseki132879,7,"Fuseki2881",836,1.000000},
  {fuseki132880,7,"Fuseki2882",834,1.000000},
  {fuseki132881,11,"Fuseki2883",504,2.000000},
  {fuseki132882,11,"Fuseki2884",533,2.000000},
  {fuseki132883,10,"Fuseki2885",835,2.000000},
  {fuseki132884,7,"Fuseki2886",568,2.000000},
  {fuseki132885,5,"Fuseki2887",680,1.000000},
  {fuseki132886,5,"Fuseki2888",799,1.000000},
  {fuseki132887,5,"Fuseki2889",532,1.000000},
  {fuseki132888,5,"Fuseki2890",872,1.000000},
  {fuseki132889,8,"Fuseki2891",790,1.000000},
  {fuseki132890,8,"Fuseki2892",649,1.000000},
  {fuseki132891,9,"Fuseki2893",796,2.000000},
  {fuseki132892,6,"Fuseki2894",540,2.000000},
  {fuseki132893,11,"Fuseki2895",650,2.000000},
  {fuseki132894,9,"Fuseki2896",828,2.000000},
  {fuseki132895,6,"Fuseki2897",651,2.000000},
  {fuseki132896,7,"Fuseki2898",796,1.000000},
  {fuseki132897,7,"Fuseki2899",719,1.000000},
  {fuseki132898,10,"Fuseki2900",534,2.000000},
  {fuseki132899,10,"Fuseki2901",791,2.000000},
  {fuseki132900,11,"Fuseki2902",494,1.000000},
  {fuseki132901,11,"Fuseki2903",497,1.000000},
  {fuseki132902,7,"Fuseki2904",649,1.000000},
  {fuseki132903,7,"Fuseki2905",828,1.000000},
  {fuseki132904,11,"Fuseki2906",801,1.000000},
  {fuseki132905,7,"Fuseki2907",533,1.000000},
  {fuseki132906,7,"Fuseki2908",605,1.000000},
  {fuseki132907,7,"Fuseki2909",756,1.000000},
  {fuseki132908,7,"Fuseki2910",643,1.000000},
  {fuseki132909,10,"Fuseki2911",605,2.000000},
  {fuseki132910,12,"Fuseki2912",496,1.000000},
  {fuseki132911,12,"Fuseki2913",865,1.000000},
  {fuseki132912,11,"Fuseki2914",532,2.000000},
  {fuseki132913,10,"Fuseki2915",532,2.000000},
  {fuseki132914,7,"Fuseki2916",680,1.000000},
  {fuseki132915,7,"Fuseki2917",686,1.000000},
  {fuseki132916,11,"Fuseki2918",614,2.000000},
  {fuseki132917,9,"Fuseki2919",724,2.000000},
  {fuseki132918,8,"Fuseki2920",791,2.000000},
  {fuseki132919,7,"Fuseki2921",536,1.000000},
  {fuseki132920,7,"Fuseki2922",831,1.000000},
  {fuseki132921,8,"Fuseki2923",836,2.000000},
  {fuseki132922,8,"Fuseki2924",681,1.000000},
  {fuseki132923,8,"Fuseki2925",540,1.000000},
  {fuseki132924,18,"Fuseki2926",568,2.000000},
  {fuseki132925,5,"Fuseki2927",795,2.000000},
  {fuseki132926,11,"Fuseki2928",723,2.000000},
  {fuseki132927,8,"Fuseki2929",540,2.000000},
  {fuseki132928,7,"Fuseki2930",607,2.000000},
  {fuseki132929,6,"Fuseki2931",574,1.000000},
  {fuseki132930,6,"Fuseki2932",651,1.000000},
  {fuseki132931,12,"Fuseki2933",615,2.000000},
  {fuseki132932,9,"Fuseki2934",791,1.000000},
  {fuseki132933,9,"Fuseki2935",829,1.000000},
  {fuseki132934,6,"Fuseki2936",614,1.000000},
  {fuseki132935,6,"Fuseki2937",725,1.000000},
  {fuseki132936,6,"Fuseki2938",871,1.000000},
  {fuseki132937,6,"Fuseki2939",834,1.000000},
  {fuseki132938,12,"Fuseki2940",827,2.000000},
  {fuseki132939,11,"Fuseki2941",535,2.000000},
  {fuseki132940,7,"Fuseki2942",575,2.000000},
  {fuseki132941,8,"Fuseki2943",612,2.000000},
  {fuseki132942,10,"Fuseki2944",540,2.000000},
  {fuseki132943,13,"Fuseki2945",723,2.000000},
  {fuseki132944,8,"Fuseki2946",608,1.000000},
  {fuseki132945,8,"Fuseki2947",717,1.000000},
  {fuseki132946,12,"Fuseki2948",869,1.000000},
  {fuseki132947,12,"Fuseki2949",753,1.000000},
  {fuseki132948,6,"Fuseki2950",534,1.000000},
  {fuseki132949,6,"Fuseki2951",791,1.000000},
  {fuseki132950,7,"Fuseki2952",829,2.000000},
  {fuseki132951,13,"Fuseki2953",763,2.000000},
  {fuseki132952,5,"Fuseki2954",759,2.000000},
  {fuseki132953,8,"Fuseki2955",831,2.000000},
  {fuseki132954,5,"Fuseki2956",614,2.000000},
  {fuseki132955,9,"Fuseki2957",572,2.000000},
  {fuseki132956,13,"Fuseki2958",535,1.000000},
  {fuseki132957,13,"Fuseki2959",868,1.000000},
  {fuseki132958,8,"Fuseki2960",681,1.000000},
  {fuseki132959,8,"Fuseki2961",686,1.000000},
  {fuseki132960,11,"Fuseki2962",535,2.000000},
  {fuseki132961,5,"Fuseki2963",681,1.000000},
  {fuseki132962,5,"Fuseki2964",796,1.000000},
  {fuseki132963,6,"Fuseki2965",717,2.000000},
  {fuseki132964,9,"Fuseki2966",755,2.000000},
  {fuseki132965,6,"Fuseki2967",539,2.000000},
  {fuseki132966,9,"Fuseki2968",833,1.000000},
  {fuseki132967,9,"Fuseki2969",651,1.000000},
  {fuseki132968,9,"Fuseki2970",536,2.000000},
  {fuseki132969,8,"Fuseki2971",864,1.000000},
  {fuseki132970,8,"Fuseki2972",531,1.000000},
  {fuseki132971,8,"Fuseki2973",719,2.000000},
  {fuseki132972,4,"Fuseki2974",540,2.000000},
  {fuseki132973,8,"Fuseki2975",831,1.000000},
  {fuseki132974,8,"Fuseki2976",535,1.000000},
  {fuseki132975,7,"Fuseki2977",754,2.000000},
  {fuseki132976,7,"Fuseki2978",755,2.000000},
  {fuseki132977,9,"Fuseki2979",796,1.000000},
  {fuseki132978,9,"Fuseki2980",836,1.000000},
  {fuseki132979,7,"Fuseki2981",763,2.000000},
  {fuseki132980,4,"Fuseki2982",798,1.000000},
  {fuseki132981,4,"Fuseki2983",835,1.000000},
  {fuseki132982,7,"Fuseki2984",836,2.000000},
  {fuseki132983,10,"Fuseki2985",500,2.000000},
  {fuseki132984,9,"Fuseki2986",685,1.000000},
  {fuseki132985,9,"Fuseki2987",651,1.000000},
  {fuseki132986,12,"Fuseki2988",873,2.000000},
  {fuseki132987,9,"Fuseki2989",609,2.000000},
  {fuseki132988,11,"Fuseki2990",793,2.000000},
  {fuseki132989,8,"Fuseki2991",577,1.000000},
  {fuseki132990,8,"Fuseki2992",794,1.000000},
  {fuseki132991,9,"Fuseki2993",717,2.000000},
  {fuseki132992,6,"Fuseki2994",723,2.000000},
  {fuseki132993,7,"Fuseki2995",758,2.000000},
  {fuseki132994,6,"Fuseki2996",644,1.000000},
  {fuseki132995,6,"Fuseki2997",723,1.000000},
  {fuseki132996,8,"Fuseki2998",497,2.000000},
  {fuseki132997,9,"Fuseki2999",754,1.000000},
  {fuseki132998,9,"Fuseki3000",799,1.000000},
  {NULL,0,NULL,0,0.0}
};
