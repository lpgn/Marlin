/**
<<<<<<< HEAD
 * Italian
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
 * Italian
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
>>>>>>> MarlinFirmware/RC
 *
 */
#ifndef LANGUAGE_IT_H
#define LANGUAGE_IT_H

<<<<<<< HEAD
=======
#define MAPPER_NON
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

>>>>>>> MarlinFirmware/RC
#define WELCOME_MSG                         MACHINE_NAME " pronto."
#define MSG_SD_INSERTED                     "SD Card inserita"
#define MSG_SD_REMOVED                      "SD Card rimossa"
#define MSG_MAIN                            "Menu principale"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Disabilita Motori"
#define MSG_AUTO_HOME                       "Auto Home"
<<<<<<< HEAD
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Imposta Origine"
#define MSG_PREHEAT_PLA                     "Preriscalda PLA"
#define MSG_PREHEAT_PLA0                    "Preriscalda PLA 1"
#define MSG_PREHEAT_PLA1                    "Preriscalda PLA 2"
#define MSG_PREHEAT_PLA2                    "Preriscalda PLA 3"
#define MSG_PREHEAT_PLA012                  "Preris. PLA Tutto"
#define MSG_PREHEAT_PLA_BEDONLY             "Preri. PLA Piatto"
#define MSG_PREHEAT_PLA_SETTINGS            "Preris. PLA Conf"
#define MSG_PREHEAT_ABS                     "Preriscalda ABS"
#define MSG_PREHEAT_ABS0                    "Preriscalda ABS 1"
#define MSG_PREHEAT_ABS1                    "Preriscalda ABS 2"
#define MSG_PREHEAT_ABS2                    "Preriscalda ABS 3"
#define MSG_PREHEAT_ABS012                  "Preris. ABS Tutto"
#define MSG_PREHEAT_ABS_BEDONLY             "Preri. ABS Piatto"
#define MSG_PREHEAT_ABS_SETTINGS            "Preris. ABS Conf"
#define MSG_COOLDOWN                        "Raffredda"
#define MSG_SWITCH_PS_ON                    "Switch Power On"
#define MSG_SWITCH_PS_OFF                   "Switch Power Off"
#define MSG_EXTRUDE                         "Estrudi"
#define MSG_RETRACT                         "Ritrai"
#define MSG_MOVE_AXIS                       "Muovi Asse"
#define MSG_MOVE_X                          "Move X"
#define MSG_MOVE_Y                          "Move Y"
#define MSG_MOVE_Z                          "Move Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_E1                         "Extruder2"
#define MSG_MOVE_E2                         "Extruder3"
#define MSG_MOVE_01MM                       "Move 0.1mm"
#define MSG_MOVE_1MM                        "Move 1mm"
#define MSG_MOVE_10MM                       "Move 10mm"
#define MSG_SPEED                           "Velcità"
#define MSG_NOZZLE                          "Ugello"
#define MSG_NOZZLE1                         "Ugello2"
#define MSG_NOZZLE2                         "Ugello3"
#define MSG_BED                             "Piatto"
#define MSG_FAN_SPEED                       "Ventola"
#define MSG_FLOW                            "Flusso"
#define MSG_FLOW0                           "Flusso 0"
#define MSG_FLOW1                           "Flusso 1"
#define MSG_FLOW2                           "Flusso 2"
#define MSG_CONTROL                         "Controllo"
#define MSG_MIN                             " \002 Min:"
#define MSG_MAX                             " \002 Max:"
#define MSG_FACTOR                          " \002 Fact:"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
=======
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                "Setta offset home"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Imposta Origine"
#define MSG_PREHEAT_PLA                     "Preriscalda PLA"
#define MSG_PREHEAT_PLA_N                   "Preriscalda PLA "
#define MSG_PREHEAT_PLA_ALL                 "Prer. PLA Tutto"
#define MSG_PREHEAT_PLA_BEDONLY             "Prer. PLA Piatto"
#define MSG_PREHEAT_PLA_SETTINGS            "Config. prer. PLA"
#define MSG_PREHEAT_ABS                     "Preriscalda ABS"
#define MSG_PREHEAT_ABS_N                   "Preriscalda ABS "
#define MSG_PREHEAT_ABS_ALL                 "Prer. ABS Tutto"
#define MSG_PREHEAT_ABS_BEDONLY             "Prer. ABS Piatto"
#define MSG_PREHEAT_ABS_SETTINGS            "Config. prer. ABS"
#define MSG_COOLDOWN                        "Raffredda"
#define MSG_SWITCH_PS_ON                    "Accendi aliment."
#define MSG_SWITCH_PS_OFF                   "Spegni aliment."
#define MSG_EXTRUDE                         "Estrudi"
#define MSG_RETRACT                         "Ritrai"
#define MSG_MOVE_AXIS                       "Muovi Asse"
#define MSG_LEVEL_BED                       "Livellamento piano"
#define MSG_MOVE_X                          "Muovi X"
#define MSG_MOVE_Y                          "Muovi Y"
#define MSG_MOVE_Z                          "Muovi Z"
#define MSG_MOVE_E                          "Estrusore"
#define MSG_MOVE_01MM                       "Muovi di 0.1mm"
#define MSG_MOVE_1MM                        "Muovi di   1mm"
#define MSG_MOVE_10MM                       "Muovi di  10mm"
#define MSG_SPEED                           "Velcità"
#define MSG_NOZZLE                          "Ugello"
#define MSG_BED                             "Piatto"
#define MSG_FAN_SPEED                       "Ventola"
#define MSG_FLOW                            "Flusso"
#define MSG_CONTROL                         "Controllo"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "ON "
#define MSG_OFF                             "OFF"
>>>>>>> MarlinFirmware/RC
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
<<<<<<< HEAD
#define MSG_ACC                             "Accel"
=======
#define MSG_ACC                             "Accel."
>>>>>>> MarlinFirmware/RC
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax"
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax"
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xpassi/mm"
#define MSG_YSTEPS                          "Ypassi/mm"
#define MSG_ZSTEPS                          "Zpassi/mm"
#define MSG_ESTEPS                          "Epassi/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Movimento"
<<<<<<< HEAD
#define MSG_CONTRAST                        "LCD contrast"
=======
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm³"
#define MSG_FILAMENT_DIAM                   "Diam. filo"
#define MSG_CONTRAST                        "Contrasto LCD"
>>>>>>> MarlinFirmware/RC
#define MSG_STORE_EPROM                     "Salva in EEPROM"
#define MSG_LOAD_EPROM                      "Carica da EEPROM"
#define MSG_RESTORE_FAILSAFE                "Impostaz. default"
#define MSG_REFRESH                         "Aggiorna"
#define MSG_WATCH                           "Guarda"
#define MSG_PREPARE                         "Prepara"
#define MSG_TUNE                            "Adatta"
#define MSG_PAUSE_PRINT                     "Pausa"
<<<<<<< HEAD
#define MSG_RESUME_PRINT                    "Riprendi Stampa"
#define MSG_STOP_PRINT                      "Arresta Stampa"
=======
#define MSG_RESUME_PRINT                    "Riprendi stampa"
#define MSG_STOP_PRINT                      "Arresta stampa"
>>>>>>> MarlinFirmware/RC
#define MSG_CARD_MENU                       "SD Card Menu"
#define MSG_NO_CARD                         "No SD Card"
#define MSG_DWELL                           "Sospensione..."
#define MSG_USERWAIT                        "Attendi Utente..."
#define MSG_RESUMING                        "Riprendi Stampa"
<<<<<<< HEAD
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Nessun Movimento."
#define MSG_KILLED                          "UCCISO. "
#define MSG_STOPPED                         "ARRESTATO. "
=======
#define MSG_PRINT_ABORTED                   "Stampa abortita"
#define MSG_NO_MOVE                         "Nessun Movimento"
#define MSG_KILLED                          "UCCISO "
#define MSG_STOPPED                         "ARRESTATO "
>>>>>>> MarlinFirmware/RC
#define MSG_CONTROL_RETRACT                 "Ritrai mm"
#define MSG_CONTROL_RETRACT_SWAP            "Scamb. Ritrai mm"
#define MSG_CONTROL_RETRACTF                "Ritrai  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Salta mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Scamb. UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoArretramento"
#define MSG_FILAMENTCHANGE                  "Cambia filamento"
#define MSG_INIT_SDCARD                     "Iniz. SD-Card"
#define MSG_CNG_SDCARD                      "Cambia SD-Card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
<<<<<<< HEAD
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
=======
#define MSG_YX_UNHOMED                      "Home X/Y before Z"
>>>>>>> MarlinFirmware/RC
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
<<<<<<< HEAD
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#define MSG_RECTRACT                        "Ritrai"

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
=======
#define MSG_ENDSTOP_ABORT                   "Finecorsa abort"
#define MSG_END_HOUR                        "ore"
#define MSG_END_MINUTE                      "minuti"

#if ENABLED(DELTA_CALIBRATION_MENU)
  #define MSG_DELTA_CALIBRATE               "Calibraz. Delta"
  #define MSG_DELTA_CALIBRATE_X             "Calibra X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibra Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibra Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibra Center"
>>>>>>> MarlinFirmware/RC
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_IT_H
