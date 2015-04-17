Kylie Dale and Michael Guida
University of Colorado
2015

# Sensor Shirt
A shirt that helps you learn yoga by giving live feedback on your body position compared to the correct form. Developed for Mark Gross's 'Technology for Sport and Play' class at the University of Colorado Boulder, by Kylie Dale and Michael Guida.

## Table of Contents
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
	- Parts List
	- Circuit Schematics
	- Building the Circuit
	- Shirt Schematics
- Software Implementation
- Credits 

## Inspiration
We enrolled in CSCI 4830 Technology for Sport and Play at the Univeristy of Colorado at Boulder. The end goal for the class was to create a project to demo at the end of the semester expo. From the beginning we both knew that we wanted to include some type of hardware or wearables in the project. While in the process of brainstorming ideas, we realized we had the opportunity to fill the need for a personal trainer or instructor when learning new activities, and we have filled that role by creating this product. We figure with the introduction of our idea into a variety of activities, we can help people learn the correct form without needing someone else there to give feedback on their positioning. In this way, users can avoid the cost of a personal trainer, while still improving.

## Applications
There are many potential uses for the Sensor Shirt

1. Yoga poses
	- Beginners to yoga could use this to help them learn certain poses that are commonly done incorrctly. 
2. Weight lifiting
	- This could help weight lifters avoid potential injury when not lifting correctly by giving feedback during training.
3. Controller
	- Users could use this to control technologies based off body movements (particularly in the field of dance):
		- Lights
		- Projection
		- Music
	- Users could control videogames based on arm and body movements.
	- Signaling
		- Users could signal on bikes or other vehicles to ensure safety. 
4. Games
	- This product could be used for games such as Simon Says since it can map and record body movements to then be repeated. 

## Goals

### MVP
Our plan for a minimum viable product is listed below. The idea for the MVP is to define what pieces of the project are necessary to convince initial users of where the project can go.

- Gather data from body using conductive fabric in key areas on the shirt
	- Send data via cable to computer
- Process data
	- Compute differences between correct form and the users form to find out what body parts are out of place
- Display to user on webpage
	- Shows correctly and incorrectly positioned parts of upper body


### Full Plans
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


## Research

### General
To begin our research, we began by looking into our competitors, as well as available applications that help users learn yoga. We found that in both of these cases the user was not given real-time feedback during their activity, and even if they were, it gave feedback on information such as muscle fatigue, heartrate, and breathing rate rather than relative positioning of body parts. Due to this research, we knew we needed to find some kind of sensor and microcontroller that could handle the data we needed to obtain, make the product feel like any other excercise clothing, and give feedback to the user to make sure they are performing and improving correctly in order to avoid injury. 

### Sensors
We researched many different kinds of possible sensors to use for our product. Our initial thought was to use some sort of flex or pressure sensor. These, upon bending, register changes in movement and could give us data to determine a person's position. We went through the process of pricing them out, found they were a bit pricey, and then tried to make our own. This could have been done, but it is a tedious and time consuming process. In addition, the flex sensors were a bit bulky and would be felt by the user upon changing their position. 

<!--Do we even add in EMG sensors as part of process?-->
We also researched EMG sensors, which stands for electromyogram and tracks muscle activity. Some of the competing products (primarily Athos) use these. The problem was we were not sure if we could obtain accurate readings about body position based off muscle activity and fatigue. When you move your arm from by your side to above your head, there are so many muslces working throughout just your upper body, and with so much data coming in, it would become complicated to parse and figure out exactly what your body was doing at that time. 

In the end, after talking to our professor and other classmates, we were pointed in the direction of conductive fabric. After some research, we found that this would be less expensive, more accurate, and would enable us to make a more aesthetically pleasing and comfortable product. With the conductive fabric sewn on and connected to the microcontroller via conductive thread, it is essentially unnoticable to the user, meaning it does not interfere with their workouts or movements. 

### Microcontrollers
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

### Competitors
<!--Do we need more of an explaination here?-->
 - [Athos](http://www.liveathos.com)
 - [Myo](https://www.thalmic.com/en/myo/)
 - [Myontec](http://www.myontec.com/en/)
 - [Zypher](http://www.zephyranywherestore.com/BioHarness-3-Team-Compression-Shirts/dp/B009ZTUDCC)


## Hardware Implementation
<!--TODO-MG: write, diagrams of circuit -->
### Parts List
 - [Teensy 3.1](https://www.pjrc.com/teensy/teensy31.html)
 - [MedTex130](http://www.amazon.com/gp/product/B004G4ZLRI/ref=oh_aui_detailpage_o02_s00?ie=UTF8&psc=1) (Conductive Fabric)
 - [Conductive Thread](https://www.sparkfun.com/products/10867)
 - Standard Thread
 - UnderArmour t-shirt
 - Wire
 - 100 Ω resistors
 - 10 kΩ resistors
 - Copper foil
 - Push button
 - MicroUSB cable

### Circuit Diagrams
<!--![Breadboard Diagram](link.to.gihub/goes.here "Frizting Breadboard Diagram Diagram")-->
<!--![Circuit Schematic](link.to.gihub/goes.here "Frizting Circuit Schematic")-->
<!--![Top View of Circuit](link.to.gihub/goes.here "Top View of Circuit")-->
<!--![Bottom View of Circuit](link.to.gihub/goes.here "Bottom View of Circuit")-->

### Circuit Design
To build the circuit we first laid it all out on a breadboard. The black square sensors represent a connection with the conductive fabric on our shirt, which will be described in more detail later. The 100 Ω resistors are needed for the connnection between our board and the ground. Originally we had used very weak resistors (~10 Ω) thinking that less resistance would be more beneficial because the values would have more variation. This proved to be a problem when we were testing the circuit because there was too much power for the resistors to handle and they were rapidly heating up. They are rated at ¼ watts and we were putting over 1 watt of power through them (power is given by the equation P = ε^2/R). To solve this we swapped out our resistors for 100 ohm resistors so we only run about 1/10 of a watt through them at the max power.

After testing everything and finalizing our circuit, we constructed a Fritzing diagram of our breadboard. [Fritzing](http://fritzing.org/home/) is an open source prototyping software that allows for easy construction of circuits. We used Fritzing to produce the diagrams above and help us in the process of consolidating our circuit to fit in a smaller container.

With the help of the diagram we laid out the components of the circuit on a small piece of cardboard. This enabled us to arrange our circuit in different ways and draw the connections in. Eventually using both sides of the cardboard we built a fairly small circuit and soldered all of the pieces together. 

### Connecting to the Shirt

The connection to the shirt is a custom built cable bus that extends off of our circuit board. The cable bus coming off of the circuit consists of 6 or 10 wires (depending on the version) arranged in a rectangle. These wires are then secured in place with electrical tape. A similar cable bus is also attached to the shirt, with female adapters. This system allows for us to attach the circuit to the shirt in a secure way, while allowing the user to remove the circuit when they need to wash the shirt.

Once connected to the shirt, the circuit is housed in a small case made of foam core. The case serves as a way to attach the circuit to your waist, protect the circuit during exercise and provide a more aesthetically pleasing product.

### Shirt Diagrams
<!--![Diagram of Shirt](link.to.gihub/goes.here "Diagram of shirt")-->
<!--![Back View of Shirt](link.to.gihub/goes.here "Back View of Shirt")-->
<!--![Side View of Shirt](link.to.gihub/goes.here "Side View of Shirt")-->

### Shirt Design
The shirt itself is the key to the success of this project. When setting out to design the shirt we had two goals in mind, accurately track body position and make the shirt feel as close to normal as possible. When a user is wearing the shirt we want them to feel as if it is a normal piece of clothing.

The base of our shirt is a skin-tight compression shirt. This provides a comfortable experience that allows us to position our sensors (conductive fabric) tightly against the body. The more each strip of conductive fabric is stretched or relaxed with the movements of the users body, the better the readings. 

<!-- Original plans to use grid of fabric, flex sensors, accelerometers -->
<!-- Positioning fabric in key areas -->
<!-- Sewing with conductive thread, connection area-->
<!-- Conclude with goals of comfort and no electronics discussion -->

## Software Implementation
<!--TODO-MG: write, add code snippets, api calls-->
<!-- 
	discuss serialport - server - client site connection
	make diagram of the interactions from user input to displayed feedback
-->

## Credits
<!-- Should we include this? -->