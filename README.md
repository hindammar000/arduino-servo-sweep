# Four Servo Sweep using Arduino Uno

## Project Overview

This project controls four servo motors using an Arduino Uno in Tinkercad.

The program is based on the Arduino Servo Sweep example. All four servo motors perform the sweep motion simultaneously for 2 seconds. After that, they stop and hold at a 90° position.

## Components

- Arduino Uno
- 4 Servo Motors
- Jumper Wires
- Tinkercad Circuits

## Circuit Connections

| Servo | Signal Pin | Power | Ground |
|-------|------------|--------|--------|
| Servo 1 | D3 | 5V | GND |
| Servo 2 | D5 | 5V | GND |
| Servo 3 | D6 | 5V | GND |
| Servo 4 | D9 | 5V | GND |

## Working Principle

- The Arduino initializes four servo motors.
- All servos perform the Sweep motion together.
- The sweep runs for 2 seconds.
- After 2 seconds, all servos move to 90°.
- The program stops while keeping the motors at 90°.

## Software

- Arduino IDE
- Servo.h Library
- Tinkercad

## Files

- FourServoSweep.ino — Arduino source code.
- circuit.pdf — Circuit diagram.
- README.md — Project documentation.

## Author

Hind Ammar
