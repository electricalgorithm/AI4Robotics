# Localization Problem

Whenever the map is known but the position is not, for GPS based system, we can only predict it with a resolution of 2-10 meters. However, the position resolution has to be at the range of 2-10 centimeters in case of autonomous vehicles.

Finding the position in not-known environment is not the subject of this document -- yet! In those conditions, you may want to refer to SLAM technique.

Let's consider a one-dimensional line as our road, and a car in that road. Since we have no information regarding to the position of the car, we may say that the car can be in anywhere in equal chances which means that the probility of car's location is a **uniform maximum confusion**.

If the car would have a "sensor" that senses only one attribute of the road which is not a common property, the probability of the car's location would increase on the locations of that probability but decreases on the remainin parts of the road. This belief called as **posterior belief**.
 
