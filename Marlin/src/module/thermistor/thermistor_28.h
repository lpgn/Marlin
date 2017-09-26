/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// meu termistor chines

const short temptable_28[][2] PROGMEM = {

{       23*OVERSAMPLENR ,       310     },
{       25*OVERSAMPLENR ,       305     },
{       27*OVERSAMPLENR ,       300     },
{       28*OVERSAMPLENR ,       295     },
{       31*OVERSAMPLENR ,       290     },
{       33*OVERSAMPLENR ,       285     },
{       35*OVERSAMPLENR ,       280     },
{       38*OVERSAMPLENR ,       275     },
{       41*OVERSAMPLENR ,       270     },
{       44*OVERSAMPLENR ,       265     },
{       48*OVERSAMPLENR ,       260     },
{       52*OVERSAMPLENR ,       255     },
{       56*OVERSAMPLENR ,       250     },
{       61*OVERSAMPLENR ,       245     },
{       66*OVERSAMPLENR ,       240     },
{       71*OVERSAMPLENR ,       235     },
{       78*OVERSAMPLENR ,       230     },
{       84*OVERSAMPLENR ,       225     },
{       92*OVERSAMPLENR ,       220     },
{       100*OVERSAMPLENR        ,       215     },
{       109*OVERSAMPLENR        ,       210     },
{       120*OVERSAMPLENR        ,       205     },
{       131*OVERSAMPLENR        ,       200     },
{       143*OVERSAMPLENR        ,       195     },
{       156*OVERSAMPLENR        ,       190     },
{       171*OVERSAMPLENR        ,       185     },
{       187*OVERSAMPLENR        ,       180     },
{       205*OVERSAMPLENR        ,       175     },
{       224*OVERSAMPLENR        ,       170     },
{       245*OVERSAMPLENR        ,       165     },
{       268*OVERSAMPLENR        ,       160     },
{       293*OVERSAMPLENR        ,       155     },
{       320*OVERSAMPLENR        ,       150     },
{       348*OVERSAMPLENR        ,       145     },
{       379*OVERSAMPLENR        ,       140     },
{       411*OVERSAMPLENR        ,       135     },
{       445*OVERSAMPLENR        ,       130     },
{       480*OVERSAMPLENR        ,       125     },
{       516*OVERSAMPLENR        ,       120     },
{       553*OVERSAMPLENR        ,       115     },
{       591*OVERSAMPLENR        ,       110     },
{       628*OVERSAMPLENR        ,       105      },
{       665*OVERSAMPLENR        ,       100      },
{       702*OVERSAMPLENR        ,       95      },
{       737*OVERSAMPLENR        ,       90      },
{       770*OVERSAMPLENR        ,       85      },
{       801*OVERSAMPLENR        ,       80      },
{       830*OVERSAMPLENR        ,       75      },
{       857*OVERSAMPLENR        ,       70      },
{       881*OVERSAMPLENR        ,       65      },
{       903*OVERSAMPLENR        ,       60      },
{       922*OVERSAMPLENR        ,       55      },
{       939*OVERSAMPLENR        ,       50      },
{       954*OVERSAMPLENR        ,       45      },
{       966*OVERSAMPLENR        ,       40      },
{       977*OVERSAMPLENR        ,       35      },
{       985*OVERSAMPLENR        ,       30      },
{       993*OVERSAMPLENR        ,       25      },
{       999*OVERSAMPLENR        ,       20      },
{       1004*OVERSAMPLENR       ,       15       },
{       1008*OVERSAMPLENR       ,       0       } //safety
};