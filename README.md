#OrbZorb

##Description 
OrbZorb is designed for children undergoing hand therapy to improve mobility, using an adjustable motion sensor controller. To play, children navigate a spaceship through an assault course of planets, asteroids, and aliens, in a race to get home. Difficulty levels can be adjusted to suit individual needs and abilities, a creative and fun way for children to perform hand exercises, whilst reducing frustration. 

##Core Game Mechanics
- Flying: navigate spaceship around planets, asteroids and more!
- Uses motion sensors to control spaceship.

##Controller 

- Sphere shaped controller with attachable Velcro digit glove(see attached image), allowing customisation to size of user's hands. 
- Controller includes three large buttons for use in setting up the game. 
- A detachable stand ensures sphere can be tidied away after use. 

##Unique Selling Points
- Adaptable to individual needs and abilities: with different difficulty levels and an adjustable controller.
- Enter child's name and get regular personalised encouragement during game.
- Helps to make physiotherapy less of a chore!
- Control your very own spaceship!

const int red = 12;const int yellow = 7;const int green = 2;
void setup() {  pinMode(red, OUTPUT);  pinMode(yellow, OUTPUT);  pinMode(green, OUTPUT);}
void loop() {  digitalWrite(red, HIGH);  delay(1000);  digitalWrite(yellow, HIGH);  delay(1000);  digitalWrite(green, HIGH);  delay(1000);  digitalWrite(green, LOW);  digitalWrite(red,LOW);  digitalWrite(yellow, LOW);}
