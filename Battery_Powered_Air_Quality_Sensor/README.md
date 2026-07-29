# Portable Air Quality Sensor

A compact, battery-powered air quality sensor built around the **ESP32-C3-MINI-1**. The device is designed to monitor indoor air quality and publish sensor data over **MQTT**, making it easy to integrate with smart home platforms such as Home Assistant.

> **Note:** This project is currently hardware-only. The PCB has been designed but has not been assembled yet.

## Features

* ESP32-C3-MINI-1 microcontroller
* ENS160 air quality sensor
* SHT41 temperature and humidity sensor
* MQTT support for smart home integration
* USB-C power input
* Li-ion battery operation with onboard charging and power-path management
* Four-layer PCB designed for compact SMT assembly

## Hardware Overview

### Power System

* **USB-C** 5V input
* **BQ25185** battery charger and power-path management IC
* Designed for a single **3.7V Li-ion** cell
* Power rails:

  * 5V (USB)
  * 3.3V via **SGM2212**
  * 1.8V via **AMS1117-1.8**

### Sensors

Both sensors communicate over the I²C bus:

* **ENS160** – Indoor air quality (VOC/eCO₂)
* **SHT41** – Temperature and humidity

## PCB

The board is a **4-layer SMT design** with the following stack-up:

1. Top signal layer
2. Solid ground plane
3. Power / ground plane
4. Bottom signal layer

This layout was chosen to improve signal integrity, power distribution, and overall EMC performance while keeping the board compact.

## Repository Contents

* PCB design files
* Schematics
* Manufacturing files (Gerbers)
* Bill of Materials (BOM)
