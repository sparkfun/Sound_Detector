#SparkFun Sound Detector Hookup Guide

##Introduction

### Covered In This Tutorial

### Required Materials

* [SparkFun Sound Detector](https://www.sparkfun.com/products/...) 
* [Arduino](https://www.sparkfun.com/products/11021), [RedBoard](https://www.sparkfun.com/products/11575) or any [Arduino-compatible](https://www.sparkfun.com/categories/242) board. 
* [Male PTH headers](https://www.sparkfun.com/products/116) or [right angle PTH headers](https://www.sparkfun.com/products/553).
* [Jumper Wires](https://www.sparkfun.com/products/9385)

### Suggested Reading

* [What is an Arduino?](tutorials/50)
* [How to Solder](tutorials/5)
* [Working with Wire](tutorials/41)
* [Analog to Digital Conversion](tutorials/35)

---

## Background

Before we discuss how to hook up the Sound Detector board, let's take a step back and look at some of the fundamentals of what sound is.  Sound itself is a somewhat unruly phenemenon, and an understanding of the basics will help you make more effective use of the Sound Detector.

### Definition

Sound is a periodic change in air pressure.  By periodic, we mean that the air is moving back and forth.  If the air were consistently moving in one direction, it is the phonemenon we call *wind*.  The air is usually set in motion by a vibrating object.

There are several basic parameters of sound.  We'll examine them below.

#### Amplitude

The first component of sound that we'll examine is loudness, or  amplitude.  In the physical sense, amplitude is the intensity of the vibrations being carried by the air.  A louder vibration causes the air to move back and forth further than a quieter sound.

Amplitude is often measured in decibels of sound pressure level, abbreviated as dB SPL.  A doubling in the physical intensity results in a difference of 6 dB.  This compresses a wide range of variation in air pressure into a unit that doesn't change quite so much.  Our ears are sensitive over the range of about 0 to 130 dB SPL, which correlates to a pressure change of about 1,000,000:1.

Amplitude also changes with proximity to the sound source.  The further away a sound source is, the quieter it gets.

#### Frequency

Frequency is how often the air is moving back and forth.  Sound frequency is usually measured in Hertz, which is the number of cycles the air makes per second.  Roughly, we can hear the range between 20 and 20,000 Hertz. 

Engineers and physicists usually measure frequency in Hertz, while musicians think in terms of *pitch,* commonly expressed in terms of the notes of the scale.

`pic - piano keyboard vs Hz.  Old RCA?`

### Combining These Parameters

Sounds in the real world may involve combinations of the above parameters, or rapid sequences of amplitude, frequency, changes.


A _ and a _ can both play the same note, but we can tell the difference because _



The

Often, when we think of sound, we mean the variation in air pressure that our ears can hear, but it exists more broadly in the physical world.  There are extremely quiet sounds we simply can't hear (called *microsound*).  There are also frequencies we can't hear, such as the low frequency rumbling of earthquakes (called *infrasound*), or the high frequencies of a dog whistle (known as *ultrasound*).  When based on what we hear, it called the *perceptual* basis of sound, as opposed to the *physical*, which is based on the actual movement of atoms of air.  

The study of the physics of sound is called *acoustics*, while the study of our perception of sound is known as *psychoacoustics*. 

One of the difficulties we face when working with sound is that the physical and perceptual worlds don't always align.  Our ears may not match those of our electronic systems.


---

## Sound And Electricity


A microphone is a transducer that converts pressure waves in air into electrical signals.  Most microphones 




Inverse square law
Closer things are much louder.

dB

There is a more detailed definition of sound in this [Wikipedia Article](http://en.wikipedia.org/wiki/Sound).

##Board Overview

Looking at the front of the board,

`front pic`
-> *Front of Sound Detector* <-

**G** should be connected to the ground of the host circuit.

**V** is the analog output of the keypad, and should be connected to an analogto-digital channel (ausuch as A0, A1, etc on an Arduino).

**V** is the power supply, and should be connected to a voltage between 2.5V - 5.5V.

### Basics of Sound

air pressure

frequency

amplitude - dB


### How It Works

---

##Hookup Example

###Connecting The Sound Detector To An Arduino

`pic`
-> *Basic hookup to an Arduino* <-

(Sound Detector → Arduino)

* V+ → 5V

---

---
##Example Code

...obtain the example sketch

Build and upload the sketch, then open a serial terminal, and observe the output while pressing buttons.  The Arduino will print notifications as buttons are pressed and released. 

`pic`
-> *The ...* <-

---

##Resources and Going Further
 

###Modifications

The Sound Detector 

#### Change the Gain

`pix`

-> *caption* <-

###Digging Deeper

A SPICE simulation of the peak detector and Schmitt trigger is available in the *documents* directory of the [Sound Detector Github repository](https://github.com/sparkfun/Sound_Detector).

* schem
* eagle files zip
* [Github Repository](https://github.com/sparkfun/Sound_Detector)