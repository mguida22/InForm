Kylie Dale and Michael Guida
University of Colorado
2015

# Sensor Shirt
A shirt that helps you learn yoga by giving live feedback on your body position compared to the correct form. Developed for Mark Gross's 'Technology for Sport and Play' class at the University of Colorado Boulder, by Kylie Dale and Michael Guida.

##Table of Contents
<!--TODO-MG: link to headings-->

- Inspiration
- Applications
- Goals
	- MVP
	- Full Plans
- Research
	- General
	- Sensors
	- Microcontrollers
	- Competitors
- Hardware Implementation
- Software Implementation

##Inspiration
<!--TODO-KD: write -->
<!--A story, 
 - We enrolled in Sport and Play
 - Wanted to include some type of hardware or wearables
 - While in the process of brainstorming ideas, we realized we could fill the need for a personal trainer using wearable technology such the shirt we have created
 - We figured with the introduction of our idea into excersize, we could help people learn the correct form without having to have someone else there to give feedback on their positioning
 - In this way, they could avoid the cost of a personal trainer, and still improve 
-->

##Applications
<!--TODO-KD: write -->

##Goals

###MVP
Our plan for a minimum viable product is listed below. The idea for the MVP is to define what pieces of the project are necessary to convince initial users of where the project can go.

- Gather data from body using conductive fabric in key areas on the shirt
	- Send data via cable to computer
- Process data
	- Compute differences between correct form and the users form to find out what body parts are out of place
- Display to user on webpage
	- Shows correctly and incorrectly positioned parts of upper body


###Full Plans
These are our full plans, describing where the project will go in the future. Some new features are included and there is a focus on user experience.

- Gather data from body
	- EMG sensors on muscles
	- Resistant fabric in specific areas
	- Accelerometer
	- Heart rate
- Send data to mobile device
	- timestamp data on microcontroller
	- send data via bluetooth to mobile device
- Process data
	- Compute differences between correct form and the users form to find out what body parts are out of place
	- Additionally compute what direction they need to move
	- Figure out what vibration sensors to turn on in shirt to notify user
- Display to user on app
	- Shows correctly and incorrectly positioned parts of body
	- Tell user how to fix position to be correct
	- Gives heart rate, muscle exertion/fatigue information, time of workout
- Send data back to microcontroller from phone
	- Shirt vibrates in incorrectly positioned areas


##Research

###General
<!--TODO: write -->

###Sensors
<!--TODO: write -->

###Microcontrollers
The selection of a microcontroller was very important to us. We had strict critera due to the nature of our project. The microcontroller would have to be attached to the shirt in some way and remain on the user for the duration of its use so it had to be small and not noticeable. Aside from size, power requirements, price and analog inputs were large deciding factors.

We compiled this table of information below (accurate as of 2/2015) on the top three microcontrollers we considered. We eventually decided on the Teensy 3.1 due to its low price, small size and incredible number of analog inputs.

To run the Teensy using like an Arduino manufactured board, we downloaded the Teensyduino software from [prjc](https://www.pjrc.com/teensy/td_download.html). Once the software was downloaded, sketches can be run like normal. One exception is the first time running a sketch requires a manual reboot of the Teensy when prompted from the Teensyduino software.

Uno (8 bit)          | LilyPad (8 bit)        | Teensy 3.1 (32 bit)
-------------------- | ---------------------- | -------------------
1 KB ROM             | 0.5 KB ROM             | 2 KB EEPROM
16 MHz CPU speed     | 8 MHz CPU speed        | 72 MHz CPU speed
USB Native           | FTDI-Compatible Header | USB Native
7-12 V               | 2.7-5.5 V              | 3.3 V
6 analog inputs      | 6 analog inputs        | 21 analog inputs
14 digital I/O       | 14 digital I/O         | 34 digital I/O
1 KB SRAM            | 1 KB SRAM              | 64 KB RA
16 KB flash          | 16 KB flash            | 256 KB flash
large for wearable   | small enough to wear   | very small

###Competitors
<!--TODO: write -->

##Hardware Implementation
<!--TODO-MG: write, add parts list, diagrams of circuit -->

##Software Implementation
<!--TODO-MG: write, add code snippets, api calls-->
