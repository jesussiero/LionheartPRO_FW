/**
 * LIONHEART PRO pin assignments (AT90USB1286)
 * Requires the Teensyduino software with Teensy++ 2.0 selected in Arduino IDE!
 * http://www.pjrc.com/teensy/teensyduino.html
 */

#ifndef __AVR_AT90USB1286__
  #error Oops!  Make sure you have 'Teensy++ 2.0' selected from the 'Tools -> Boards' menu.
#endif

#ifdef AT90USBxx_TEENSYPP_ASSIGNMENTS  // use Teensyduino Teensy++2.0 pin assignments instead of Marlin traditional.
  #error These Lionheart Pro assignments depend on traditional Marlin assignments, not AT90USBxx_TEENSYPP_ASSIGNMENTS in fastio.h
#endif

#define AT90USB 1286  // Disable MarlinSerial etc.
#define USBCON

#define LARGE_FLASH        true

//Uncomment if HOME and KILL buttons are according to PCB LCD silkscreen
#define REVERSED_BUTTONS

#define X_STEP_PIN         0
#define X_DIR_PIN          1
#define X_ENABLE_PIN       39

#define Y_STEP_PIN         2
#define Y_DIR_PIN          3
#define Y_ENABLE_PIN       38

#define Z_STEP_PIN         4
#define Z_DIR_PIN          5
#define Z_ENABLE_PIN       23

#define E0_STEP_PIN         6
#define E0_DIR_PIN          7
#define E0_ENABLE_PIN       19

#define E1_STEP_PIN        16
#define E1_DIR_PIN         17
#define E1_ENABLE_PIN      18

#ifdef EXTRUDERS
    #define HEATER_0_PIN       21  // Extruder 1
    #if EXTRUDERS > 1
      #define HEATER_1_PIN       13  // Extruder 2
    #endif
    #if EXTRUDERS > 2
      #define HEATER_2_PIN       -1  // Extruder 3
    #endif
#endif
#define HEATER_BED_PIN     20  // Bed

// If soft or fast PWM is off then use Teensyduino pin numbering, Marlin
// fastio pin numbering otherwise
#ifdef FAN_SOFT_PWM || FAST_PWM_FAN
   #define FAN_PIN            22  // Fan 1 (PWM Output 1)
   #define FAN2_PIN           14  // Fan 2 (PWM Output 2)
   #define LED_STRIP_PIN      15  // Led Strip (PWM Output 3)
   #define LED_PIN            15  // Led Strip (PWM Output 3)
#else
   // Teensyduino pin mapping
   #define FAN_PIN            16  // Fan 1 (PWM Output 1)
   #define FAN2_PIN           26  // Fan 2 (PWM Output 2)
   #define LED_STRIP_PIN      27  // Led Strip (PWM Output 3)
   #define LED_PIN            27  // Led Strip (PWM Output 3)
#endif

#define TEST_MODE_PIN      35

#ifdef DUAL_X_CARRIAGE
  #define X_MIN_PIN          33   //SAG 20160531
  #define X_MAX_PIN          31   //SAG 20160531
#else
  #define X_STOP_PIN         33
#endif

#define Y_STOP_PIN         36
#define Z_STOP_PIN         37

#define TEMP_0_PIN          7  // Extruder 1 / Analog pin numbering
#define TEMP_1_PIN          5  // Extruder 2 / Analog pin numbering
#define TEMP_BED_PIN        6  // Bed / Analog pin numbering

#define TEMP_2_PIN         -1

#define SDPOWER            -1
#define SDSS               20  // PB0 - 8 in marlin env.
//#define LED_PIN            -1

#ifdef DUAL_X_CARRIAGE
  #define PS_ON_PIN          -1 //32 //SAG20160530
#else
  #define PS_ON_PIN           32
#endif



#define ALARM_PIN          -1
#define SDCARDDETECT       -1

#ifndef SDSUPPORT
   // these pins are defined in the SD library if building with SD support
  #define SCK_PIN          9
  #define MISO_PIN         11
  #define MOSI_PIN         10
#endif

#define RX1_PIN            26 // 2 (Teensy), 26 (Marlin)
#define TX1_PIN            27 // 3 (Teensy), 27 (Marlin)

#define BEEPER             -1
#define LCD_PINS_RS        -1
#define LCD_PINS_ENABLE    -1
#define LCD_PINS_D4        -1
#define LCD_PINS_D5        -1
#define LCD_PINS_D6        -1
#define LCD_PINS_D7        -1

#ifdef SAV_3DLCD
// For LCD SHIFT register LCD
#define SR_DATA_PIN         1
#define SR_CLK_PIN          0
//#define SS2                43  //Slave Select 2. Future use    

#define BTN_EN1            41
#define BTN_EN2            40
#define BTN_ENC            12

	#ifdef REVERSED_BUTTONS
		#define HOME_PIN           42 // A2 = 42 - teensy = 40
		#define KILL_PIN           44 // A4 = marlin 44 - teensy = 42
	#else
		//According to LCD PCB silkscreen
		#define KILL_PIN           42 // A2 = 42 - teensy = 40
		#define HOME_PIN           44 // A4 = marlin 44 - teensy = 42
	#endif
	
#endif

#ifdef NUM_SERVOS
    #define SERVO0_PIN          4 // In teensy's pin definition for pinMode (in Servo.cpp) - marlin pin 28 (PD4)

    #if NUM_SERVOS > 1
      #define SERVO1_PIN        5 // In teensy's pin definition for pinMode (in Servo.cpp) - marlin pin 29 (PD5)
    #endif

    #if NUM_SERVOS > 2
      #define SERVO2_PIN        6 // In teensy's pin definition for pinMode (in Servo.cpp) - marlin pin 30 (PD6)
    #endif

    #if NUM_SERVOS > 3
      #define SERVO3_PIN        7 // In teensy's pin definition for pinMode (in Servo.cpp) - marlin pin 31 (PD7)
    #endif
#endif

//SAG20160714
#ifdef FILAMENT_RUNOUT_SENSOR
  // define digital pin 31 for the filament runout sensor. Use the Lionheart Pro digital SERVO3 connector (the closest one to SD connector)
  #define FILRUNOUT_PIN        31
#endif

