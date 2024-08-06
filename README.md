# klocker
Tower-building robot

# Overview
This repository holds all the digital materials created by our team during the design and construction of our robot for the tower-building competition held on 2024-07-08 by the Faculty of Physics at the University of Warsaw. With our final design we managed to win 3rd place against 5 other teams.


# Team
* Łukasz Skrzyński (team captain and programmer)
* Michał Szczerbakowicz (Electronics and mechanics specialist)
* Wojciech Knop (programmer)
* Jan Gers (main programmer)
* Maria Waligórska (programmer)

supervisor: Piotr Kaźmierczak

# Construction
The robot's chassis and the plow and its mechanisms were 3D printed in a combination of PLA and PETG polymers.
 Here is the prototype:
![prototype](https://github.com/user-attachments/assets/b9332739-77bd-427c-a4f6-dce590f1ee0e)



Final version is on the picture at the end.
The final version consisted of
* 1 Seeed Xiao board
* 1 Adafruit servo shield
* 1 Raspberry Pi Zero 
* 5 motors + 4 wheels
* plow + thread and pulley (printed)
* bluetooth pad

Li-ion battery pack was provided by the contest holder, had a mass of ~300 g (excluded from mass requirement) and U max 12,6 V.
The robot is remotely controlled by the bluetooth pad, without any autonomy. The addition of the raspberry pi was necessary due to the fact that the Arduino does not contain a bluetooth interface. It was in the realm of possibility to get rid of the arduino instead and control the motor shield by the raspberry pi directly but we decided against this idea in order save time and to keep the electronics in the plug and play realm.

# Behavior
Final version of code is in file named nowy.ino. In a nutshell, the robot tries to gather blocks onto a plow. Then it puts the plow upright using a string wound around the block and attached to the plow. The robot tries to grab as many blocks as possible with its U-shaped chassis before its opponent does.


# Possible improvements
The robot was a bit inflexible, so this could be improved. A flap can be added to the plow to prevent the block tower from tipping over.
The robot's design was a bit inflexible - it depended on supporting the tower by the playfield's wall during its reorientation from the horizontal to the vertical position. Succesful reorientation required a lot of patience and focused attention from the pilot, more so the taller the tower was. Obvious improvement would be to automate the process and to add an actuated lid to the plow, so that the tower could be placed anywhere and much quicker.
The bluetooth pad we chose was of poor quality and it happened quite often during the contest that, unintentionally, multiple buttons were being pressed simultaneously which led to imprecise movement and loss of time.


![robot klocker 1](https://github.com/user-attachments/assets/5aadc3d3-a276-40a1-91cd-d3ce7dbd9a2a)

