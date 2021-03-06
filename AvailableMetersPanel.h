/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_AvailableMetersPanel
#define HEADER_AvailableMetersPanel

#include "Settings.h"
#include "Header.h"
#include "ScreenManager.h"
#include "CPUMeter.h"

#include "Panel.h"

#include "debug.h"
#include <assert.h>


typedef struct AvailableMetersPanel_ {
   Panel super;

   Settings* settings;
   Panel* leftPanel;
   Panel* rightPanel;
   ScreenManager* scr;
} AvailableMetersPanel;


AvailableMetersPanel* AvailableMetersPanel_new(Settings* settings, Panel* leftMeters, Panel* rightMeters, ScreenManager* scr);

#endif
