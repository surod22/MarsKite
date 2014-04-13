MPU6050_raw/MPU6050_raw.ino prints the acceleration and angular velocities along the three dimensions. 

MPU6050_DMP6.ino is a fancier version that uses quaternions. The output is yaw, roll, and pitch values (in angles).

Dependencies: I2CDev and MPU6050 libraries


Wiring:

ARDUINO    MPU6050
------------------
VDD     -> 3.3V
GND     -> GND
A4      -> SDA
A5      -> SCL
PIN 2   -> INT (for MPU6050_DMP6 interrupts)

Lastly, add a jumper wire from VDD to VIO



