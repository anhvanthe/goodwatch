/*! \file api.h
  \brief Main API header, that includes the others.

  This should be the only header file included by applications.  It
  should allow for general I/O functions, but nothing internal to a
  driver.  (But of course it includes too much for now.)
*/

#include <stdint.h>
#include <msp430.h>

#include "config.h"
#include "configdefault.h"

//GoodWatch modules.
#include "lcd.h"
#include "uart.h"
#include "monitor.h"
#include "ucs.h"
#include "lcdtext.h"
#include "keypad.h"
#include "apps.h"
#include "rtc.h"
#include "sidebutton.h"
#include "radio.h"
#include "packet.h"
#include "codeplug.h"
#include "power.h"
#include "dmesg.h"
#include "gittag.h" //Autogenerated

//Handy libraries.  These are tested host-side.
#include "libs/assembler.h"
#include "libs/morse.h"

//Standalone functions.

//! Power On Self Test
int post();
