# Sensor Shirt

[Trello](https://trello.com/b/cZ3whJig/inform)

A shirt that determines your body position and then gives live feedback on your aligned compared to the correct form.

Read the [documentation.md](https://github.com/mguida22/sensor-shirt/blob/master/docs/Documentation.md) file that can be found in the docs folder for more complete information regarding this project.

## Setup

Use [git flow](http://danielkummer.github.io/git-flow-cheatsheet/) for contributing.

### Microcontroller

>While you can use any Arduino compatible board, this project was only tested on the Teensy 3.1 and all documentation assumes the use of that board when relevant.

To run the Teensy 3.1 just like an Arduino board, you will need to download the Teensyduino software onto your computer, which can be downloaded from [prjc](https://www.pjrc.com/teensy/td_download.html).

From there you can start Arduino and select the correct board you are using. For the first run, you will have to "Verify" the code and then press the reset button on the Teensy when prompted to before programming the board.

### Node Packages
<!-- TODO: create package.json file for all required node libraries -->
There are a few node packages required to run server for the sensor shirt. If you do not have it already, you will need to download the latest version of Node.js, which can be found on the official [node site](http://nodejs.org).

After installing node, or if you already have it, in your command line run `npm install` or run each of the following commands to install all required packages.

```
$ npm express
$ npm socket.io
$ npm serialport
```

### Python Module

This project requires you have the latest version of python 2 which can be downloaded from the [python site](https://www.python.org). To use the program to set the tolerances you will need to have pySerial installed. This can be installed through the command line using either

```
pip install pyserial
```

or

```
easy_install -U pyserial
```

### Arduino Library

You will also need to install an Arduino library called [ArduinoJson](https://github.com/bblanchon/ArduinoJson). Download the zip file from the ArduinoJson repository [wiki](https://github.com/bblanchon/ArduinoJson/wiki/Using%20the%20library%20with%20Arduino) and extract it to the following location.

```
<your Arduino folder>/libraries/ArduinoJson
```

For more detailed information regarding the installation of this library refer to the project's wiki.


## Running the Program, Server and Web Page

To run the server and web page first check you have all of the modules installed. The order of the next few steps is very important so make sure to follow them exactly.

First run the code on your microcontroller. On the Teensy 3.1 you should be able to press the physical reset button, but running the sketch from the Arduino IDE will always work.

Once that is running, start your server from the web directory using the following command. Replace the third argument, `/dev/tty.usbmodem728331`, with the port of your arduino. This can be found on the bottom right of the standard Arduino IDE.

```
$ node SerialServer.js /dev/tty.usbmodem728331
```

The server will now be running on `http://localhost:8080`. Open up a browser and navigate to that address, or if you have the page loaded already, be sure to refresh.

To stop the server, simply type control-c in your terminal.

## Updating the Tolerances

Before attempting to run the Tolerances program, be sure you have all of the required modules installed.

Once you have done that, upload the Tolerances sketch to your Teensy. After the sketch has finished uploading run the SaveTolerances.py file, which can be ran through the command line as follows. Replace the third arguement with your the port of your arduino and the fourth with your baud rate (most likely 9600).

```
$ python SaveTolerances.py /dev/tty.usbmodem728331 9600
```

This will regenerate the Tolerances.h file that the SensorShirt program uses to compute positions.
