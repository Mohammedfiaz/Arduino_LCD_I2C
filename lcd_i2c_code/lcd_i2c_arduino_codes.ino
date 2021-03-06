//From I2c the masters:
//https://github.com/karthick965938/Arduino_LCD_I2C

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//I2C pins declaration
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
	lcd.begin();//Initializing display
	lcd.backlight();//To Power ON the back light
	//lcd.backlight();// To Power OFF the back light
}
void loop() 
{
	//Write your code
	lcd.clear();
	lcd.setCursor(0,0); //Defining positon to write from first row,first column .
	lcd.print("Stay Safe,ACT144 "); //You can write 16 Characters per line .
	delay(1000);//Delay used to give a dynamic effect
	lcd.setCursor(3,1);  //Defining positon to write from second row,first column .
	lcd.print("From Home");
	delay(3000); 
	lcd.clear();//Clean the screen
	lcd.setCursor(4,0);
	lcd.print("COVID-19");
	delay(1000);//Delay used to give a dynamic effect
	lcd.setCursor(1,1);
	lcd.print("Rises: 7,39,385");
	delay(4000);
	lcd.clear();
	lcd.setCursor(5,0); 
	lcd.print(" #WFH ");
	delay(1000);
	lcd.setCursor(0,1);
	lcd.print("Spritle Software");
	delay(3000);
}
