<<<<<<< HEAD
Current Status: Bug Fixing
===================

What bugs are we working on: https://github.com/ErikZalm/Marlin/milestones

Developer Notes
===================

- There are now 2 branches: The __development__ branch is where new features and code changes will be sorted out. This branch may have untested code in it, so please let us know if you find any bugs. When the __development__ branch has reached a state where it is stable, it will be moved to the __stable__ branch.

- We are doing a kind of cleanup in the list of Issues and Pull Requests, the aim is to get to a state where we can certify the code as stable. To get the code tested as widely as possible we require several volunteers with a wide variety of hardware configurations willing to test the firmware and help us to certify it as stable. If you want to help out testing go to this issue and let us know: https://github.com/ErikZalm/Marlin/issues/1209

- Before you submit any pull request, we ask that you _PLEASE_ test your code before submission, even if the change seems innocuous. When creating the pull request, please include the hardware you used for testing and a short synopsis of your testing procedure. Untested pull requests are less likely to be merged, as even slight changes create the risk of breaking the main branch.

- If you have a fix don't open an issue telling about it, but test the code and submit a pull request. Use the __development__ branch when you submit.

==========================
Marlin 3D Printer Firmware
==========================
[![Coverity Scan Build Status](https://scan.coverity.com/projects/2224/badge.svg)](https://scan.coverity.com/projects/2224)
[![Travis Build Status](https://travis-ci.org/ErikZalm/Marlin.svg)](https://travis-ci.org/ErikZalm/Marlin)

Marlin has a GPL license because I believe in open development.
Please do not use this code in products (3D printers, CNC etc) that are closed source or are crippled by a patent.

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/ErikZalm/Marlin&title=Marlin&language=&tags=github&category=software)

Quick Information
===================
This RepRap firmware is a mashup between <a href="https://github.com/kliment/Sprinter">Sprinter</a>, <a href="https://github.com/simen/grbl/tree">grbl</a> and many original parts.

Derived from Sprinter and Grbl by Erik van der Zalm.
Sprinters lead developers are Kliment and caru.
Grbls lead developer is Simen Svale Skogsrud. Sonney Jeon (Chamnit) improved some parts of grbl
A fork by bkubicek for the Ultimaker was merged, and further development was aided by him.
Some features have been added by:
Lampmaker, Bradley Feldman, and others...


Features:
=========

*   Interrupt based movement with real linear acceleration
*   High steprate
*   Look ahead (Keep the speed high when possible. High cornering speed)
*   Interrupt based temperature protection
*   preliminary support for Matthew Roberts advance algorithm
    For more info see: http://reprap.org/pipermail/reprap-dev/2011-May/003323.html
*   Full endstop support
*   SD Card support
*   SD Card folders (works in pronterface)
*   SD Card autostart support
*   LCD support (ideally 20x4)
*   LCD menu system for autonomous SD card printing, controlled by an click-encoder.
*   EEPROM storage of e.g. max-velocity, max-acceleration, and similar variables
*   many small but handy things originating from bkubicek's fork.
*   Arc support
*   Temperature oversampling
*   Dynamic Temperature setpointing aka "AutoTemp"
*   Support for QTMarlin, a very beta GUI for PID-tuning and velocity-acceleration testing. https://github.com/bkubicek/QTMarlin
*   Endstop trigger reporting to the host software.
*   Updated sdcardlib
*   Heater power reporting. Useful for PID monitoring.
*   PID tuning
*   CoreXY kinematics (www.corexy.com/theory.html)
*   Delta kinematics
*   SCARA kinematics
*   Dual X-carriage support for multiple extruder systems
*   Configurable serial port to support connection of wireless adaptors.
*   Automatic operation of extruder/cold-end cooling fans based on nozzle temperature
*   RC Servo Support, specify angle or duration for continuous rotation servos.
*   Bed Auto Leveling.
*   Support for a filament diameter sensor, which adjusts extrusion volume

The default baudrate is 250000. This baudrate has less jitter and hence errors than the usual 115200 baud, but is less supported by drivers and host-environments.


Differences and additions to the already good Sprinter firmware:
================================================================

Look-ahead:
-----------

Marlin has look-ahead. While sprinter has to break and re-accelerate at each corner,
lookahead will only decelerate and accelerate to a velocity,
so that the change in vectorial velocity magnitude is less than the xy_jerk_velocity.
This is only possible, if some future moves are already processed, hence the name.
It leads to less over-deposition at corners, especially at flat angles.

Arc support:
------------

Slic3r can find curves that, although broken into segments, were ment to describe an arc.
Marlin is able to print those arcs. The advantage is the firmware can choose the resolution,
and can perform the arc with nearly constant velocity, resulting in a nice finish.
Also, less serial communication is needed.

Temperature Oversampling:
-------------------------

To reduce noise and make the PID-differential term more useful, 16 ADC conversion results are averaged.

AutoTemp:
---------

If your gcode contains a wide spread of extruder velocities, or you realtime change the building speed, the temperature should be changed accordingly.
Usually, higher speed requires higher temperature.
This can now be performed by the AutoTemp function
By calling M109 S<mintemp> B<maxtemp> F<factor> you enter the autotemp mode.

You can leave it by calling M109 without any F.
If active, the maximal extruder stepper rate of all buffered moves will be calculated, and named "maxerate" [steps/sec].
The wanted temperature then will be set to t=tempmin+factor*maxerate, while being limited between tempmin and tempmax.
If the target temperature is set manually or by gcode to a value less then tempmin, it will be kept without change.
Ideally, your gcode can be completely free of temperature controls, apart from a M109 S T F in the start.gcode, and a M109 S0 in the end.gcode.

EEPROM:
-------

If you know your PID values, the acceleration and max-velocities of your unique machine, you can set them, and finally store them in the EEPROM.
After each reboot, it will magically load them from EEPROM, independent what your Configuration.h says.

LCD Menu:
---------

If your hardware supports it, you can build yourself a LCD-CardReader+Click+encoder combination. It will enable you to realtime tune temperatures,
accelerations, velocities, flow rates, select and print files from the SD card, preheat, disable the steppers, and do other fancy stuff.
One working hardware is documented here: http://www.thingiverse.com/thing:12663
Also, with just a 20x4 or 16x2 display, useful data is shown.

SD card folders:
----------------

If you have an SD card reader attached to your controller, also folders work now. Listing the files in pronterface will show "/path/subpath/file.g".
You can write to file in a subfolder by specifying a similar text using small letters in the path.
Also, backup copies of various operating systems are hidden, as well as files not ending with ".g".

SD card folders:
----------------

If you place a file auto[0-9].g into the root of the sd card, it will be automatically executed if you boot the printer. The same file will be executed by selecting "Autostart" from the menu.
First *0 will be performed, than *1 and so on. That way, you can heat up or even print automatically without user interaction.

Endstop trigger reporting:
--------------------------

If an endstop is hit while moving towards the endstop, the location at which the firmware thinks that the endstop was triggered is outputed on the serial port.
This is useful, because the user gets a warning message.
However, also tools like QTMarlin can use this for finding acceptable combinations of velocity+acceleration.
=======
# Marlin 3D Printer Firmware
<img align="top" width=175 src="Documentation/Logo/Marlin%20Logo%20GitHub.png" />
 Additional documentation can be found in [The Marlin Wiki](https://github.com/MarlinFirmware/Marlin/wiki/Main-Page).
>>>>>>> MarlinFirmware/RC

## Release Candidate -- Marlin 1.1.0-RC5 - 01 April 2016

__Not for production use – use with caution!__

You can download earlier versions of Marlin on the [Releases page](https://github.com/MarlinFirmware/Marlin/releases). (The latest "stable" release of Marlin is 1.0.2-1.)

You'll always find the latest Release Candidate in the ["RC" branch](https://github.com/MarlinFirmware/Marlin/tree/RC). Bugs that we find in the current Release Candidate are patched in the ["RCBugFix" branch](https://github.com/MarlinFirmware/Marlin/tree/RC), so during beta testing this is where you can always find the latest code on its way towards release.

Future development (Marlin 1.2 and beyond) takes place in the [MarlinDev repository](https://github.com/MarlinFirmware/MarlinDev/).

## Recent Changes
- RCBugFix
  - Throw error if compiling with older versions (<1.60) of Arduino due to serios problems with outdated Arduino versions
  - Please upgrade your IDE at least to Arduino 1.6.0. Thanks.

- RC5 - 01 Apr 2016
  - Warn if compiling with older versions (<1.50) of Arduino
  - Fix various LCD menu issues
  - Add formal support for MKSv1.3 and Sainsmart (RAMPS variants)
  - Fix bugs in M104, M109, and M190
  - Fix broken M404 command
  - Fix issues with M23 and "Start SD Print"
  - More output for M111
  - Rename FILAMENT_SENSOR to FILAMENT_WIDTH_SENSOR
  - Fix SD card bugs
  - and a lot more
  - see https://github.com/MarlinFirmware/Marlin/releases/tag/1.1.0-RC5 for details

- RC4 - 24 Mar 2016
  - Many lingering bugs and nagging issues addressed
  - Improvements to LCD menus, CoreXY/CoreXZ, Delta, Bed Leveling, and more…

- RC3 - 01 Dec 2015
  - A number of language sensitive strings have been revised
  - Formatting of the LCD display has been improved to handle negative coordinates better
  - Various compiler-related issues have been corrected

- RC2 - 29 Sep 2015
  - File styling reverted
  - LCD update frequency reduced

- RC1 - 19 Sep 2015
  - Published for testing

## Submitting Patches
Proposed patches should be submitted as a Pull Request against the [RCBugFix](https://github.com/MarlinFirmware/Marlin/tree/RCBugFix) branch.

- Don't submit new feature proposals. The RCBugFix branch is for fixing bugs in existing features.
- Do submit questions and concerns. The "naive" question is often the one we forget to ask.
- Follow the proper coding style. Pull requests with styling errors will be delayed. See our [Coding Standards](https://github.com/MarlinFirmware/Marlin/wiki/DNE-Coding-Standards) page for more information.

## Current Status: Testing

Please test this firmware and inform us if it misbehaves in any way. Volunteers are standing by!

[![Coverity Scan Build Status](https://scan.coverity.com/projects/2224/badge.svg)](https://scan.coverity.com/projects/2224)
[![Travis Build Status](https://travis-ci.org/MarlinFirmware/MarlinDev.svg)](https://travis-ci.org/MarlinFirmware/MarlinDev)

##### [RepRap.org Wiki Page](http://reprap.org/wiki/Marlin)

## Credits

The current Marlin dev team consists of:

 - Scott Lahteine [@thinkyhead] - English
 - [@Wurstnase] - Deutsch, English
 - F. Malpartida [@fmalpartida] - English, Spanish
 - Jochen Groppe [@CONSULitAS] - Deutsch, English
 - [@maverikou]
 - Chris Palmer [@nophead]
 - [@paclema]
 - Edward Patel [@epatel] - Swedish, English
 - Erik van der Zalm [@ErikZalm]
 - David Braam [@daid]
 - Bernhard Kubicek [@bkubicek]
 - Roxanne Neufeld [@Roxy-3DPrintBoard] - English

More features have been added by:
  - Alberto Cotronei [@MagoKimbra]
  - Lampmaker,
  - Bradley Feldman,
  - and others...

<<<<<<< HEAD
Filament Sensor
---------------
Supports the use of a real time filament diameter sensor that measures the diameter of the filament going into the extruder and then adjusts the extrusion rate to compensate for filament that does not match what is defined in the g-code.  The diameter can also be displayed on the LCD screen. This potentially eliminates the need to measure filament diameter when changing spools of filament. Gcode becomes independent of the filament diameter. Can also compensate for changing diameter.

For examples of these sensors, see: http://www.thingiverse.com/thing:454584, https://www.youmagine.com/designs/filament-diameter-sensor, http://diy3dprinting.blogspot.com/2014/01/diy-filament-diameter-sensor.html. Any sensor which produces a voltage equivalent to the diameter in mm (i.e. 1v = 1mm) can be used. This provides a very simple interface and may encourage more innovation in this area.

4 new Mcodes are defined to set relevant parameters: M404, M405, M406, M407 - see above.

 Implements a delay buffer to handle the transit delay between where the filament is measured and when it gets to the extruder.
=======
## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
>>>>>>> MarlinFirmware/RC

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
