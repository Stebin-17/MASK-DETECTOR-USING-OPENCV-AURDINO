# Mask Detection using YOLOv5 & AURDINO

This project aims to implemented a alarm system when the person is not wearing a mask is detected during the screening.

## INTRODUCTION

In the wake of the novel coronavirus, lots of disciplinary actions are imposed by the government of many countries to slow down the transmission of the deadly virus. With the enhancing usage of modern technology in the period of pandemics to smoothen up the operations and functionality of the numerous organizations. Among these, with the interpretation of AI, facemask detection technology is used to monitor social distancing and even to identify the usage of face masks.

<p align="center">
  <img src="https://user-images.githubusercontent.com/114398468/213355132-3a9945ef-ffaa-4cb6-9b6d-59d2afb6c936.png" />
</p>

## Hardwares Required

 - Aurdino IDE
 - Buzzer
 - Led
 - Aurdino Uno
 - Jumper Wires
 - Breadboard

## Steps to Replicate This Project

### 1. Clone the github repository by typing the following commands

```
# Clone
git clone (https://github.com/CHRISTInfotech/AI-IoT-Basic-Projects.git)
cd MASK DETECTOR USING OPENCV & AURDINO
```

### 2. Open the MASK_DETECTOR.py file in the file system

 - The python file is written in such a way to incorporate with the Aurdino uno board. Before running ensure the Aurdino board is connected to the system
 - For getting the multiple cascades refer to the github link given below
    ```
    https://github.com/Itseez/opencv/tree/master/data/haarcascades
    ```
 - In this project main focus is given to the mouth and the frontal face
 - Hence the focus is given more to the ```haarcascade_frontalface_default.xml``` and ```haarcascade_mcs_mouth.xml``` cascade files 
 - After cloning, set correct the file path for the cascasding files.
 - Run the file
 
### 3. IOT PART:

 - Check your Aurdino board and make necessary changes in the serial connection part.
 - Compile and run the Aurdino.ino file in the ```/AURDINO/Aurdino.ino```
 - Connection diagram and explanation is given below
 
## CIRCUT DIAGRAM

In this project Aurdino uno board has been used for obtaining the output. The circut diagram is shown below as:

+ Connect the 6 pin of the aurdino board to the led
+ Connect the other end to the ground
+ Connect the 10 pin to to the buzzer 
+ COnnect the other end to the ground

<p align="center">
  <img src="https://user-images.githubusercontent.com/114398468/213362284-26444d3c-2030-42c8-8927-7d9acae1efeb.jpeg" />
</p>


## OUTPUT:

- The output obtained from this overall project is being given in the following link:-

https://user-images.githubusercontent.com/114398468/213630797-1139dfbe-cb0d-4e17-b93a-eeb8ecb2dca4.mp4

[__https://drive.google.com/file/d/1sPAfTI63Lzk1x6X3-N9ceFKgj2Pd-zxJ/view?usp=sharing__]

## REFERENCE:
 - https://www.hackster.io/innovation4x/mask-detection-using-face-detection-729143










