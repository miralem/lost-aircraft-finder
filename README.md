# Lost Aircraft Finder
<img src="https://raw.githubusercontent.com/miralem/lost-aircraft-finder/master/img/pcb.png">
This is an open source project and it will stay free for ever. It is simple and very easy to DIY. You need some basic soldering skills and know-how to upload a Arduino Scatch to an ATTingy85 microcontroller. 

You can find the schema and print the PCB [here](https://easyeda.com/miralem/Lost_model_finder-cdb7c07722624fca823687639389e6d6).

## What is this for?
This is an RC model fider/detector, it detects if your model is moving, if it stopped moving it probably means the model has crashed, it might be that you dont know exactly wher it went down, it may be in high grass, crop fields or on some other place where you simply cant find yor model. This device will make loud sonund after it detects no movement so you can find it.

## How does it work?
Basically by detecting small vibrations the device "knows" if the model/aircraft is moving, if its not moving for a specific amount of time it will start beeping, follow the sound and find your model.

## Power
This device is ment to be used with its own power source, a small LiPo battery 100mAh is enough. This is important bacause if you use a separate power source it may get disconnected during a crash, this is why its recomanded to glue a single cell LiPo to the device so it cant be disconnected also if a crach happens.

## Parts needed

- ATtiny85
- Active Buzzer 12mm 3V Continous Beep Alarm Ringer
- 10K resistor
- SS12D00G3 small switch
- SW-18010P Vibration Sensor
- 1S1P LiPo, not more then 150mAh, keep it light
