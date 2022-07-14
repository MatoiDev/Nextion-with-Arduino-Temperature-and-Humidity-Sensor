# Nextion+Arduino Temperature & Humidity Sensor
## Hardware you need:
- [Arduino Uno](https://store.arduino.cc/collections/core-family/products/arduino-uno-rev3)
- [Nextion NX3224T024](https://nextion.tech/datasheets/nx3224t024/)
- SHT1x (I used [this](https://amperka.ru/product/temperature-humidity-sensor-sht1x?ysclid=l5kwwvondw871733156))
- Micro SD (I used 1 GB and it is more than enough)
- Any Card reader

## Dependences
- [SHT1x library](https://github.com/practicalarduino/SHT1x)
- [Nextion library](https://github.com/bborncr/nextion)
- [Nextion ITEADLIB](https://github.com/itead/ITEADLIB_Arduino_Nextion?ysclid=l5kv0fsehm213707112)
- [SoftwareSerial](https://github.com/arduino/ArduinoCore-avr/tree/master/libraries/SoftwareSerial)

# Instruction
### *Before*
Make sure you've already installed [Arduino IDE](https://www.arduino.cc/en/software)
1) Download this repo and all libraries above
2) Upload the sketch to your microcontroller
#### I recommend using my firmware from this repo, but if you need to change the background for example, you need to have [Nextion Editor](https://nextion.tech/nextion-editor/). Skip to *5* step if you needn't
3) Open firmwarePattern.HMI in Nextion Editor and change all you need
<img src="/githubAssets/firmwareEdit.jpg">
4) Save your project as .tft
5) Open the SD card and make sure that it is empty
6) Drag and drop *firmware.tft* (*firmwarePattern.tft* if you did 4-5 steps)
<img src="/githubAssets/loadTFT.png">
7) Eject SD card
8) Assemble the device according to the scheme
<img src="/githubAssets/scheme.jpg">
9) Insert the SD card into the monitor tray and connect the device to a power source
10) Wait ~10 seconds to this screen
<img src="/githubAssets/firmwareLoad.jpg">
11) Reconnect the device
12) Profit
<img src="/githubAssets/profit.jpg">
<img src="/githubAssets/profit1.jpg">

