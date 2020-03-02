# Magicforce 68 Handwired

This firmware is for a Magicforce 68 that's had its PCB removed and is handwired with an Arduino Micro. NOTE: The Arduino Micro is different than the Arduino *Pro* Micro.

Keyboard Maintainer: [The QMK Community](https://github.com/qmk)  
Hardware Supported: magicforce68, Arduino Micro  

## Wiring Layout

![Wiring Layout](http://i.imgur.com/NmTCv5u.png)

## Pinout

The following pins are used, if using an Arduino Micro:
- Columns 1-15: B2, B0, D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B6, B7, D6
- Rows 1-5: F0, F1, F4, F5, F6

Make example for this keyboard (after setting up your build environment):

    make handwired/magicforce68:default

To flash the firmware onto the microcontroller, run `make handwired/magicforce68:default:avrdude`, and press the reset button.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Hardware

### Pins
When setting matrix pins, you need to use the MCU definitions instead of what is printed on the PCB. Sourced from <https://www.pjrc.com/teensy/schematic32.gif>. The following table can be used to convert between the two.

|  PCB   | MCU | Notes                       |
|------- |-----|-----------------------------|
| 0      | B16 |                             |
| 1      | B17 |                             |
| 2      | D0  |                             |
| 3      | A12 |                             |
| 4      | A13 |                             |
| 5      | D7  |                             |
| 6      | D4  |                             |
| 7      | D2  |                             |
| 8      | D3  |                             |
| 9      | C3  |                             |
| 10     | C4  |                             |
| 11     | C6  |                             |
| 12     | C7  |                             |
| 13/LED | C5  |                             |
| 14/A0  | D1  |                             |
| 15/A1  | C0  |                             |
| 16/A2  | B0  |                             |
| 17/A3  | B1  |                             |
| 18/A4  | B3  |                             |
| 19/A5  | B2  |                             |
| 20/A6  | D5  |                             |
| 21/A7  | D6  |                             |
| 22/A8  | C1  |                             |
| 23/A9  | C2  |                             |
| 24/A10 |     | ADC0_DP0 in schematic *[1]* |
| 25/A11 |     | ADC0_DM0 in schematic *[1]* |
| 26/A12 |     | ADC0_DP3 in schematic *[1]* |

*[1]* - Currently not configured and may require extra work to implement.
