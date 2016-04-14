/**
<<<<<<< HEAD
 * German
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
=======
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

/**
 * German
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
>>>>>>> MarlinFirmware/RC
 *
 */
#ifndef LANGUAGE_DE_H
#define LANGUAGE_DE_H

<<<<<<< HEAD
#define WELCOME_MSG                         MACHINE_NAME " Bereit."
#define MSG_SD_INSERTED                     "SDKarte erkannt"
#define MSG_SD_REMOVED                      "SDKarte entfernt"
#define MSG_MAIN                            "Hauptmenü"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Stepper abschalt."
#define MSG_AUTO_HOME                       "Auto Nullpunkt"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Setze Nullpunkt"
#define MSG_PREHEAT_PLA                     "Vorwärmen PLA"
#define MSG_PREHEAT_PLA0                    "Vorwärmen PLA 1"
#define MSG_PREHEAT_PLA1                    "Vorwärmen PLA 2"
#define MSG_PREHEAT_PLA2                    "Vorwärmen PLA 3"
#define MSG_PREHEAT_PLA012                  "Vorw. PLA Alle"
#define MSG_PREHEAT_PLA_BEDONLY             "Vorw. PLA Bett"
#define MSG_PREHEAT_PLA_SETTINGS            "Vorwärm. PLA Ein."
#define MSG_PREHEAT_ABS                     "Vorwärmen ABS"
#define MSG_PREHEAT_ABS0                    "Vorwärmen ABS 1"
#define MSG_PREHEAT_ABS1                    "Vorwärmen ABS 2"
#define MSG_PREHEAT_ABS2                    "Vorwärmen ABS 3"
#define MSG_PREHEAT_ABS012                  "Vorw. ABS Alle"
#define MSG_PREHEAT_ABS_BEDONLY             "Vorw. ABS Bett"
#define MSG_PREHEAT_ABS_SETTINGS            "Vorwärm. ABS Ein."
#define MSG_COOLDOWN                        "Abkühlen"
#define MSG_SWITCH_PS_ON                    "Switch Power On"
#define MSG_SWITCH_PS_OFF                   "Switch Power Off"
#define MSG_EXTRUDE                         "Extrude"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Achsen bewegen"
#define MSG_MOVE_X                          "X bewegen"
#define MSG_MOVE_Y                          "Y bewegen"
#define MSG_MOVE_Z                          "Z bewegen"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "0.1mm bewegen"
#define MSG_MOVE_1MM                        "1mm bewegen"
#define MSG_MOVE_10MM                       "10mm bewegen"
#define MSG_SPEED                           "Geschw"
#define MSG_NOZZLE                          "Düse"
#define MSG_NOZZLE1                         "Düse2"
#define MSG_NOZZLE2                         "Düse3"
#define MSG_BED                             "Bett"
#define MSG_FAN_SPEED                       "Lüftergeschw."
#define MSG_FLOW                            "Fluss"
#define MSG_FLOW0                           "Fluss 0"
#define MSG_FLOW1                           "Fluss 1"
#define MSG_FLOW2                           "Fluss 2"
#define MSG_CONTROL                         "Einstellungen"
#define MSG_MIN                             "\002 Min"
#define MSG_MAX                             "\002 Max"
#define MSG_FACTOR                          "\002 Faktor"
#define MSG_AUTOTEMP                        "AutoTemp"
#define MSG_ON                              "Ein"
#define MSG_OFF                             "Aus"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Acc"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
=======
#define MAPPER_C2C3
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " bereit."
#define MSG_SD_INSERTED                     "SDKarte erkannt."
#define MSG_SD_REMOVED                      "SDKarte entfernt."
#define MSG_MAIN                            "Hauptmenü"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Motoren Aus" // M84
#define MSG_AUTO_HOME                       "Home" // G28
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "Setze Home hier"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Setze Null hier" //"G92 X0 Y0 Z0" commented out in ultralcd.cpp
#define MSG_PREHEAT_PLA                     "Vorwärmen PLA"
#define MSG_PREHEAT_PLA_N                   "Vorwärmen PLA "
#define MSG_PREHEAT_PLA_ALL                 "Vorw. PLA Alle"
#define MSG_PREHEAT_PLA_BEDONLY             "Vorw. PLA Bett"
#define MSG_PREHEAT_PLA_SETTINGS            "Vorwärm. PLA Ein."
#define MSG_PREHEAT_ABS                     "Vorwärmen ABS"
#define MSG_PREHEAT_ABS_N                   "Vorwärmen ABS "
#define MSG_PREHEAT_ABS_ALL                 "Vorw. ABS Alle"
#define MSG_PREHEAT_ABS_BEDONLY             "Vorw. ABS Bett"
#define MSG_PREHEAT_ABS_SETTINGS            "Vorwärm. ABS Ein."
#define MSG_COOLDOWN                        "Abkühlen"
#define MSG_SWITCH_PS_ON                    "Netzteil Ein"
#define MSG_SWITCH_PS_OFF                   "Netzteil Aus"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Bewegen"
#define MSG_MOVE_X                          "X"
#define MSG_MOVE_Y                          "Y"
#define MSG_MOVE_Z                          "Z"
#define MSG_MOVE_E                          "E"
#define MSG_MOVE_01MM                       " 0.1 mm"
#define MSG_MOVE_1MM                        " 1.0 mm"
#define MSG_MOVE_10MM                       "10.0 mm"
#define MSG_SPEED                           "Geschw."
#define MSG_NOZZLE                          "Düse"
#define MSG_BED                             "Bett"
#define MSG_FAN_SPEED                       "Lüftergeschw."
#define MSG_FLOW                            "Fluss"
#define MSG_CONTROL                         "Einstellungen"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Faktor"
#define MSG_AUTOTEMP                        "AutoTemp"
#define MSG_ON                              "Ein"
#define MSG_OFF                             "Aus"
#define MSG_PID_P                           "PID P"
#define MSG_PID_I                           "PID I"
#define MSG_PID_D                           "PID D"
#define MSG_PID_C                           "PID C"
#define MSG_ACC                             "A"
#define MSG_VXY_JERK                        "V xy Ruck"
#define MSG_VZ_JERK                         "V z  Ruck"
#define MSG_VE_JERK                         "V e  Ruck"
#define MSG_VMAX                            "V max " // space by purpose
>>>>>>> MarlinFirmware/RC
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
<<<<<<< HEAD
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-Retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bewegung"
#define MSG_CONTRAST                        "LCD contrast"
=======
#define MSG_VMIN                            "V min"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "A max " // space by purpose
#define MSG_A_RETRACT                       "A Retract"
#define MSG_XSTEPS                          "X steps/mm"
#define MSG_YSTEPS                          "Y steps/mm"
#define MSG_ZSTEPS                          "Z steps/mm"
#define MSG_ESTEPS                          "E steps/mm"
#define MSG_TEMPERATURE                     "Temperatur"
#define MSG_MOTION                          "Bewegung"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm³"
#define MSG_FILAMENT_DIAM                   "Filament D"
#define MSG_CONTRAST                        "LCD Kontrast"
>>>>>>> MarlinFirmware/RC
#define MSG_STORE_EPROM                     "EPROM speichern"
#define MSG_LOAD_EPROM                      "EPROM laden"
#define MSG_RESTORE_FAILSAFE                "Standardkonfig."
#define MSG_REFRESH                         "Aktualisieren"
<<<<<<< HEAD
#define MSG_WATCH                           "Beobachten"
#define MSG_PREPARE                         "Vorbereitung"
#define MSG_TUNE                            "Justierung"
#define MSG_PAUSE_PRINT                     "Druck anhalten"
#define MSG_RESUME_PRINT                    "Druck fortsetz"
#define MSG_STOP_PRINT                      "Druck stoppen"
#define MSG_CARD_MENU                       "SDKarten Menü"
#define MSG_NO_CARD                         "Keine SDKarte"
#define MSG_DWELL                           "Warten..."
#define MSG_USERWAIT                        "Warte auf Nutzer"
#define MSG_RESUMING                        "Druck fortsetzung"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Kein Zug."
#define MSG_KILLED                          "KILLED"
#define MSG_STOPPED                         "GESTOPPT"
=======
#define MSG_WATCH                           "Info"
#define MSG_PREPARE                         "Vorbereitung"
#define MSG_TUNE                            "Justierung"
#define MSG_PAUSE_PRINT                     "SD-Druck Pause"
#define MSG_RESUME_PRINT                    "SD-Druck Weiter"
#define MSG_STOP_PRINT                      "SD-Druck Abbruch"
#define MSG_CARD_MENU                       "SDKarte"
#define MSG_NO_CARD                         "Keine SDKarte"
#define MSG_DWELL                           "Warten..."
#define MSG_USERWAIT                        "Warte auf Nutzer."
#define MSG_RESUMING                        "Druck geht weiter"
#define MSG_PRINT_ABORTED                   "Druck abgebrochen"
#define MSG_NO_MOVE                         "Motoren Eingesch."
#define MSG_KILLED                          "KILLED."
#define MSG_STOPPED                         "ANGEHALTEN."
>>>>>>> MarlinFirmware/RC
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Wechs. Retract mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Wechs. UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Filament wechseln"
<<<<<<< HEAD
#define MSG_INIT_SDCARD                     "Init. SD-Card"
#define MSG_CNG_SDCARD                      "Change SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
=======
#define MSG_INIT_SDCARD                     "SDKarte erkennen"// Manually initialize the SD-card via user interface
#define MSG_CNG_SDCARD                      "SDKarte erkennen"// SD-card changed by user. For machines with no autocarddetect. Both send "M21"
#define MSG_ZPROBE_OUT                      "Sensor ausserhalb"
#define MSG_YX_UNHOMED                      "X/Y vor Z homen."
>>>>>>> MarlinFirmware/RC
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
<<<<<<< HEAD
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_STEPPER_RELEASED                "Stepper frei"
#define MSG_RECTRACT_WIDE                   "Rectract"

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
=======
#define MSG_ENDSTOP_ABORT                   "Endstop Abbr. Ein"
#define MSG_END_HOUR                        "Stunden"
#define MSG_END_MINUTE                      "Minuten"
#define MSG_HEATING                         "Aufheizen..."
#define MSG_HEATING_COMPLETE                "Aufgeheizt"
#define MSG_BED_HEATING                     "Bett aufheizen"
#define MSG_BED_DONE                        "Bett aufgeheizt"

#if ENABLED(DELTA_CALIBRATION_MENU)
  #define MSG_DELTA_CALIBRATE               "Delta kalibrieren"
  #define MSG_DELTA_CALIBRATE_X             "Kalibriere X"
  #define MSG_DELTA_CALIBRATE_Y             "Kalibriere Y"
  #define MSG_DELTA_CALIBRATE_Z             "Kalibriere Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Kalibriere Mitte"
>>>>>>> MarlinFirmware/RC
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_DE_H
