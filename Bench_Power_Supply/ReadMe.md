# DIY ATX Bench Power Supply

A compact, modular bench power supply built from a standard ATX computer power supply. This project features a custom-designed 3D printable enclosure, a custom ATX breakout PCB that requires no modification to the original power supply, and multiple fused output rails for safe electronics prototyping. The goal of this project was to improve on designs found online by avoiding having to modify the power supply, this way they can be easily changed out if it ever fails. 

## Features

* Uses a standard 20 or 24 pin ATX power supply as the power source
* Custom-designed 3D printable enclosure
* Custom 4 layer PCB with solid pours
* Multiple output voltages:

  * 3.3 V
  * 5 V
  * 12 V
  * Adjustable DC output using ZK4KX off the shelf buck-boost converter
* Individual overcurrent protection using replaceable glass fuses
* Modular design for easy assembly and maintenance

---

## Project Overview

This project was created to give myself access to an affordable and reliable bench power supply using readily available ATX computer power supplies. Rather than permanently modifying an ATX supply, the custom breakout board plugs directly into the 24-pin connector, preserving the power supply for future use and facilitating its replacement.

The enclosure was designed from scratch to securely house the breakout PCB, output terminals, fuse holders, and adjustable voltage module while maintaining a clean and professional appearance.

---

## Output Rails

| Output         | Description                                          |
| -------------- | ---------------------------------------------------- |
| **3.3 V**      | Fixed regulated ATX output                           |
| **5 V**        | Fixed regulated ATX output                           |
| **12 V**       | Fixed regulated ATX output                           |
| **Adjustable** | Variable voltage output generated from the 12 V rail |

Each output is protected by its own replaceable glass fuse to help prevent damage from accidental shorts or excessive current draw.

---

## Safety Features

* Individual glass fuse protection for every output rail
* No permanent modification of the ATX power supply
* Modular components for easy troubleshooting and replacement
* Clearly labeled output voltages

---

## Hardware

### Custom Components

* Custom-designed ATX breakout PCB
* Custom 3D printable enclosure

### Off-the-Shelf Components

* Standard ATX power supply
* Adjustable DC-DC voltage regulator
* Glass fuse holders
* Glass fuses
* Banana binding posts
* Power switch
* Status LED
* 5V cooling fan

