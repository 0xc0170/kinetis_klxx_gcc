kinetis_gcc
================

Kinetis L/K - gpio demo using CMSIS files, ARM GCC and Makefiles. Consider this repository as simple baremetal gpio demo.

### BASIC INFO
Please build the demo using the makefile, flash openSDA with CMSIS-DAP interface shared on mbed site. KL25Z/KL05Z/KL46Z/K64F has official CMSIS-DAP interface, find it on mbed.
[mbed.org CMSIS-DAP for the freedom platform](http://mbed.org/platforms).

Then just copy the output .bin file to the msd drive on your computer (named mbed). The LED should be blinking.

### MORE INFO
Please visit my blog [Embedded stuff around the web](http://embeddedworldweb.blogspot.com) or follow me on [Twitter](https://twitter.com/0xc0170).

Versions
*********************
v0.1
initial version - includes only the freedom board KL25Z. More will come!

v0.2
KL02 project added.

v0.3
KL05, KL46 files added.

v0.4 (9. June 2014)
K64F files added. This repository contains support for Kinetis K.

--------
Created by Martin Kojtal (0xc0170), 2013
