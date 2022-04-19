/**
 * @file languages.h
 *
 * @brief Localized strings
 */

#pragma once


#include "userConfig.h"

#if (LANGUAGE == 0) // DE
#if (DISPLAYTEMPLATE == 1) || (DISPLAYTEMPLATE == 2)
    static const char *langstring_set_temp =      "Soll:  ";
    static const char *langstring_current_temp =  "Ist:   ";
    static const char *langstring_brew =          "Brew:  ";
#endif
#if (DISPLAYTEMPLATE >= 20)  //vertical templates
    static const char *langstring_set_temp_rot_ur =      "S: ";
    static const char *langstring_current_temp_rot_ur =  "I: ";
    static const char *langstring_brew_rot_ur =          "B: ";
#endif

static const char *langstring_offlinemod =    "Offlinemodus";
static const char *langstring_wasserleer =    "Wasser leer";

static const char *langstring_wifirecon =     "Wifi reconnect:";
static const char *langstring_connectwifi1 =  "1: Connect Wifi to:";
static const char *langstring_nowifi[] = {"No ", "WIFI"};

static const char *langstring_error_tsensor[] = {"Error, Temp: ", "Check Temp. Sensor!"};
// static const char *langstring_emergencyStop[] = {"HEATING", "STOPPED"};

static const char *langstring_bckffinished[] = {"Backflush finished", "Please reset brewswitch..."};
static const char *langstring_bckfactivated[] = {"Backflush activated", "Please set brewswitch..."};
static const char *langstring_bckfrunning[] = {"Backflush running:", "from"};

#elif LANGUAGE == 1 // EN
#if (DISPLAYTEMPLATE == 1) || (DISPLAYTEMPLATE == 2)
    static const char *langstring_set_temp =      "Set:   ";
    static const char *langstring_current_temp =  "Temp:  ";
    static const char *langstring_brew =          "Brew:  ";
#endif
#if (DISPLAYTEMPLATE >= 20)  //vertical templates
    static const char *langstring_set_temp_rot_ur =      "S: ";
    static const char *langstring_current_temp_rot_ur =  "T: ";
    static const char *langstring_brew_rot_ur =          "B: ";
#endif

static const char *langstring_offlinemod =    "Offline mode";

// static const char *langstring_wifirecon =     "Wifi reconnect:";
static const char *langstring_connectwifi1 =  "1: Connect Wifi to:";
static const char *langstring_nowifi[] = {"No ", "WIFI"};

static const char *langstring_error_tsensor[] = {"Error, Temp: ", "Check Temp. Sensor!"};
// static const char *langstring_emergencyStop[] = {"HEATING", "STOPPED"};

static const char *langstring_bckffinished[] = {"Backflush finished", "Please reset brewswitch..."};
static const char *langstring_bckfactivated[] = {"Backflush activated", "Please set brewswitch..."};
static const char *langstring_bckfrunning[] = {"Backflush running:", "from"};

#elif LANGUAGE == 2 // ES
#if (DISPLAYTEMPLATE == 1) || (DISPLAYTEMPLATE == 2)
    static const char *langstring_set_temp =      "Obj:  ";
    static const char *langstring_current_temp =  "T:    ";
    static const char *langstring_brew =          "Brew:  ";
#endif
#if (DISPLAYTEMPLATE >= 20)  //vertical templates
    static const char *langstring_set_temp_rot_ur =      "O: ";
    static const char *langstring_current_temp_rot_ur =  "T: ";
    static const char *langstring_brew_rot_ur =          "B: ";
#endif

static const char *langstring_offlinemod =    "Modo offline";
static const char *langstring_wasserleer =    "Agua vacía";

static const char *langstring_wifirecon =     "Reconecta wifi:";
static const char *langstring_connectwifi1 =  "1: Wifi conectado :";
static const char *langstring_nowifi[] = {"No ", "WIFI"};

static const char *langstring_error_tsensor[] = {"Error, Temp: ", "Comprueba sensor T!"};
// static const char *langstring_emergencyStop[] = {"CALENT.", "PARADO "};

static const char *langstring_bckffinished[] = {"Backflush terminado", "Apague el boton de cafe..."};
static const char *langstring_bckfactivated[] = {"Backflush activado ", "Encienda boton de cafe.."};
static const char *langstring_bckfrunning[] = {"Backflush activo: ", "desde"};
#endif
