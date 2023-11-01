#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h> // Hardware-specific library

#define LCD_CS A4 // Chip Select goes to Analog 3
#define LCD_CD A2 // Command/Data goes to Analog 2
#define LCD_WR A1 // LCD Write goes to Analog 1
#define LCD_RD A0 // LCD Read goes to Analog 0
#define LCD_RESET A3 // Can alternately just connect to Arduino's reset pin

//   D0 connects to digital pin 8  (Notice these are
//   D1 connects to digital pin 9   NOT in order!)
//   D2 connects to digital pin 2
//   D3 connects to digital pin 3
//   D4 connects to digital pin 4
//   D5 connects to digital pin 5
//   D6 connects to digital pin 6
//   D7 connects to digital pin 7

// Assign human-readable names to some common 16-bit color values:
#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);
 
void setup(void) {   
   
  tft.reset();
  tft.begin(0x9341, 1); 
  tft.cp437(true);  
}

void loop(void) {  
  testText();
}

unsigned long testText() {
  tft.fillScreen(BLACK);
  tft.setTextSize(2);
  tft.setCursor(0, 0);
  tft.println();
  tft.setTextColor(0xFCA0);
  tft.println("Andrusha");
  tft.setTextSize(3);
  tft.setTextColor(0xFCA0);
  tft.print("P");
  tft.setTextColor(BLUE);
  tft.print("I");
  tft.setTextColor(YELLOW);
  tft.print("D");
  tft.setTextColor(GREEN);
  tft.print("O");
  tft.setTextColor(WHITE);
  tft.print("R");
  delay(500);
  

  /*
  unsigned long start = micros();
  tft.setCursor(0, 0);
  tft.setTextColor(WHITE);  tft.setTextSize(1);
  tft.println("Hello World!  v5.3");
  tft.setTextColor(YELLOW); tft.setTextSize(2);
  tft.println(1234.56);
  tft.setTextColor(RED);    tft.setTextSize(2);
  tft.println(0xDEADBEEF, HEX);
  tft.println();
  tft.setTextColor(GREEN);
  tft.setTextSize(3);
  tft.println("Пельмень");
  tft.setTextSize(1);
  tft.println("I implore thee,");
  tft.setTextSize(1);
  tft.println("my foonting turlingdromes.");
  tft.println("And hooptiously drangle me");
  tft.println("with crinkly bindlewurdles,");
  tft.println("Or I will rend thee");
  tft.println("in the gobberwarts");
  tft.println("with my blurglecruncheon,");
  tft.println("see if I don't!");
  return micros() - start;*/
}
