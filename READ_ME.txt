This is a single level game created for UE4 Developer Challenge.
Click the marble and drag, release to send the ball flying based on your angle & distance(like firing a bow).
Reset button can be used to spawn a new marble (and destroy old one). Marble is automatically reset 4 seconds after firing.
There are a number of objects in the scene to try and knock over, unfortunately there is no collision events.


Main functionality is handled by 2 classes, ForceController and MarbleSpawnController.
MarbleSpawnController handles the spawning and destruction of marbles, as well as tracking the currently available marble (and supplying this to ForceController).
ForceController calculates direction and power based on mouse position vs marble position. This can only be initiated when the marble is in the ready state and the player clicks down on the marble.
