# klocker
Tower-building robot

# Overview
This repository holds all digital materials created for tower-building robot competition held on 2024-07-08 at the Faculty of Physics at the University of Warsaw. Final contraption won 3rd place against 5 other teams.

# Team
* Łukasz Skrzyński (captain and programmer)
* Michał Szczerbakowicz (Hardware specialist and programmer)
* Wojciech Knop (programmer)
* Jan Gers (main programmer)
* Maria Waligórska (programmer)

supervisor: Piotr Kaźmierczak

# Construction
The robot's chassis was 3D printed. Initially, the robot was supposed to have the plow positioned horizontally, but it was more difficult to scoop the blocks. Here is the prototype:
![prototype](https://github.com/user-attachments/assets/b9332739-77bd-427c-a4f6-dce590f1ee0e)



The first iteration was meant to utilize all parts in file `hardware/części\ v2.xlsx`.
Final version is on the picture at the end.
The final version consisted of
* 1 Seeed Xiao board
* 1 Adafruit servo shield
* 1 Raspberry Pi Zero 
* 5 motors + 4 wheels
* plow + thread and pulley (printed)
* pad

Li-ion battery pack was provided by the contest holder, had a mass of ~300 g (excluded from mass requirement) and U max 12,6 V.

# Behavior
Final version of code is in file named nowy.ino. In a nutshell, the robot is remotely controlled by a pad. The pad connects via Bluetooth to the Raspberry and it connects to the Arduino. This excessive complication is caused by the fact that initially the pad did not want to connect directly to the Arduino. The robot tries to gather blocks onto a plow. Then it puts the plow upright using a string wound around the block and attached to the plow. The robot tries to grab as many blocks as possible with its U-shaped chassis before its opponent does.

# Possible improvements
The robot was a bit inflexible, so this could be improved. A flap can be added to the plow to prevent the block tower from tipping over.

![robot klocker 1](https://github.com/user-attachments/assets/5aadc3d3-a276-40a1-91cd-d3ce7dbd9a2a)

