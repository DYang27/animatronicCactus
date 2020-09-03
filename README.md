This side project looks to explore creating a simple animatronics.
# General Info
![video-1599150241_Trim3 (1)](https://user-images.githubusercontent.com/36009360/92145020-987f6180-ede5-11ea-95ae-357e2ae6ce44.gif)

The animatronic cactus has two animating parts. The mouth opens and closes and the arms rotate. The animatronics' motion is controlled by a push button. Pressing the button starts or stops the motion depending on the previous state.
# Build Documentation
## Dimensions to construct the cactus
The cactus is made using cardstock and cardboard. The body and arms are hollow tubes to create space for the wires that control the mouth and arms.

![image](https://user-images.githubusercontent.com/36009360/92152839-59570d80-edf1-11ea-9051-e058ad8f334d.png)
![image](https://user-images.githubusercontent.com/36009360/92153446-498bf900-edf2-11ea-93a7-43843211b4ad.png)
![image](https://user-images.githubusercontent.com/36009360/92153457-4f81da00-edf2-11ea-9ddd-f67cd5185b98.png)
## Mouth and arms mechanisms
The mouth is made from 2 circular pieces of cardboard. A wire runs straight up behind the floor of the mouth and is bent in an L-shape. Then it attaches to the roof of the mouth. As the wire is pushed and pulled by the servo, it opens and closes the mouth.
![image](https://user-images.githubusercontent.com/36009360/92153608-8bb53a80-edf2-11ea-8521-dee8b1dd5b97.png)

The arms are connected by a toothpick. There is a second perpendicular toothpick connected perpendicular to the rod. A wire is attached to the rod which links to the servo. As the servo rotates, it moves the wire up and down which rotates the arms.
![image](https://user-images.githubusercontent.com/36009360/92153630-9374df00-edf2-11ea-8bfe-ef64e9b14698.png)

The 2 micro servos are positioned in a box underneath the cactus. The wires that move the mechanisms go down the hollow body and connect to the servos underneath. There wasn't enough room to place the servos inside the cactus.

![image](https://user-images.githubusercontent.com/36009360/92156654-5232fe00-edf7-11ea-92b3-4b0f581284db.png)

## Dome top
The dome head was made by gluing several segments together. The template for each segment is taken from https://www.templatemaker.nl/en/sphere/.

![image](https://user-images.githubusercontent.com/36009360/92155949-38dd8200-edf6-11ea-80a0-af045b872ecc.png)
## Electrical schematic
Electrical schematic which includes 2 micro servos, Arduino Uno R3, push button and a 10kohm resistor.
![image](https://user-images.githubusercontent.com/36009360/92154757-4e51ac80-edf4-11ea-9f1e-aef47d3b3e6f.png)
# Setup
1. Download the [Aruduino IDE](https://www.arduino.cc/en/main/software).
2. Clone the repo
3. Upload the code to the Arduino
