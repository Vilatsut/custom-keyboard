# Firmware for a hand soldered 60TKL keyboard
This repository contains the firmware I used to flash my **Arduino Pro Micro** that was handsoldered to 60TKL Layout keyboard.

I used QMK configurator to plan the layout:
[QMK Configurator](https://config.qmk.fm/)

Then the now deprecated Keyboard Firmware Builder to get an outline for the firmware:
[Keyboard Firmware Builder](https://kbfirmware.com/)

Then I downloaded a version of QMK MSYS and created a new keyboard forantti60, adjusted the keymap and keyboard.json to my needs and compiled:
[QMK MSYS](https://github.com/qmk/qmk_distro_msys/releases/latest)

I used command
```bash
qmk compile -kb forantti60 -km default -c
```
to compile, with -c added for a clean compilation because of the compiler ignoring changes to .json files.

Then I used QMK toolbox to flash the firmware on the Arduino micro
[QMK Toolbox](https://github.com/qmk/qmk_toolbox)


The pinout in the Arduino Pro Micro was soldered as follows:
Columns from 0 to 14:   "C6", "D7", "E6", "B4", "B5", "B6", "B2", "B3", "B1", "F7", "F6", "F5", "F4", "B0", "D5"

Rows from 0 to 4:       "D0", "D1", "D2", "D3", "D4"

with 0,0 at the left top.
![Arduino Pro Micro](pro_micro_pinout.jpg)