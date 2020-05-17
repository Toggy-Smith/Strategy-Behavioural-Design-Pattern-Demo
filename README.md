# Strategy Behavioural Design Pattern Demo

## TL;DR

This is a program which uses the strategy pattern to change between a spaceship's different firing modes. You can change between the firing modes using the number keys 1 to 5 (not on the numpad).

## How was this program written?

This program was written in the C++ language and uses the Simple Fast Multimedia Library (SFML) to draw graphics.

## What is the point of this program?

This program demonstrates the strategy pattern - an OOP design pattern which falls under the class of behavioural patterns.

## What is the strategy pattern?

To quote Wikipedia, a *"design pattern is a general, reusable solution to a commonly occurring problem [..] object-oriented design patterns typically show relationships and interactions between classes and objects, without specifying the final application classes or objects that are involved."*

OOP design patterns can be divided into three types: creational, structural and behavioural.

The strategy pattern falls under behavioural design patterns. To quote Wikipedia again: *"the strategy pattern [..] enables selecting an algorithm at runtime. Instead of implementing a single algorithm directly, code receives run-time instructions as to which in a family of algorithms to use."*

## How does the program work?

The program is a rough demo of the strategy pattern in action. In terms of the codebase, there is a SpaceShip object which shoots every 500 milliseconds. The SpaceShip object has five different firing modes. The firing modes differ in the:
- Number of Bullet objects generated.
- Colour of the Bullet objects.
- Angle (heading) of the Bullet objects.

The natural solution to such a problem would be creating a variable to store the firing mode and then using a series of if-else statements to choose the correct "algorithm" (firing mode). However, an alternative solution is the strategy pattern.

In this case, I created an abstract class called ShootingStrategy and five concrete classes called ShootingConcreteStrategy1, ShootingConcreteStrategy2, etc. which all inherit from the ShootingStrategy class. The SpaceShip class simply stores a ShootingStrategy pointer to the current concrete shooting strategy object. The ShootingStrategy pointer can be changed easily to point a different concrete shooting strategy.

The benefit of this approach is twofold: (1) there is less "code bloat" inside the SpaceShip class and (2) the SpaceShip class doesn't have to concern itself with the implementation of each firing mode / shooting strategy. In terms of code, this means that the SpaceShip class just calls "m_shootingStrategy.fire()" to shoot rather than having a series of if-else statements containing each algorithm for each firing mode.
