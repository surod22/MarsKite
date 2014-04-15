MarsKite
========

Creating mechanism to land a CubeSat on Mars.

### MPU6050_raw.ino 
Prints the acceleration and angular velocities along the three dimensions. 

### MPU6050_DMP6.ino 
A fancier version that uses quaternions (to solve the "gimbal lock" problem). The output is yaw, roll, and pitch values (in angles). This includes a Processing sketch to visualize the orientation of the accelerometer/gyroscope.

### MPU6050_DMP6_SD.ino 
Adds SD card functionality to record data

### Dependencies 
 - I2CDev 
 - MPU6050
 - SD (included in Arduino Processing)
 
### Issues
 - The included visualization for MPU6050_DMP6 does not correctly parse the yaw, roll, and pitch.
 - The SD card is likely reading from the wrong serial stream

### Wiring

ARDUINO  |   MPU6050
---------|---------
VDD      |-> 3.3V
GND      |-> GND
A4       |-> SDA
A5       |-> SCL
PIN 2    |-> INT (for MPU6050_DMP6 interrupts)

Lastly, add a jumper wire from VDD to VIO
