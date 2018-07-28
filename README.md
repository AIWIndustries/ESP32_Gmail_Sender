# ESP32_Gmail_Sender
This is an adaptation of the ESP8266 Gmail sender program. It allows for ESP32 to send emails to one recipient or multiple. 

Make sure to place these files in the ....\Arduino\hardware\espressif\esp32\libraries folder. At that point it should show up as Gsender in the examples for ESP32 Board.

Before using you will need to base64encode your email information you will use to log into gmail with as per this ESP8266 instructional in the edit the .h file (the Gsender_32.h file in this case). The sketch is where you add your wifi credentials and potential email recipients.
