1. How to build the project

- Please set "Animation01_KeyFrame" project as a starter project and build with x64 configuration / Debug or Release mode.
  Or you can execute with "Animation01_KeyFrame.exe" file in x64\Debug(or Release) folder.

- GitHub Link:
https://github.com/kanious/AnimationProject01

- There are 3 projects
  Animation01_KeyFrame : Main client project for this assignment
  GeneratingAnimationData : Project used to create personal animation data (.animation files)
  PumpkinEngine : Engine project(DLL)


2. User Input Option

- You can see all options in the UI in game.

* Mouse Click (LB) : Select Target (if click background, target will be released)
* → : Next Animation Frame
* ← : Previous Animation Frame
* R : Reverse Animation
* Space : Animation Play/Pause Toggle
* 1 ~ 5 : Set Animation Speed (1x ~ 5x, default is x3)
* ESC : Close the program



3. Animation related classes

- Engine
Animation: Class with one animation data
AnimationData : Class that archives all animation data
AnimationController : A class that archives and controls the state of the animation currently being played by the character.

- Client
Animator: As a child class of Animation Controller, it sets detailed settings for each character.
AnimationManager: A class that controls the entire animation controller (or target) according to user input.

- A simple UML Diagram is attached. (Animation classes.png)



4. Etc

- Each character is targeted by clicking on it with the mouse LB.

- Click on the background to release the target.

- When there is a target, animation controls apply only to the target. When there is no target, it applies to all characters.

- The callback event function that runs when the animation is finished is in the Animator class. ( AnimationEndEvent() ) The Animation class executes this in the FrameMove Function.

- In the "GeneratingAnimationData" project, animations are created using glm's Ease functions, converted into 4x4 matrix, and saved as binary files.

- Color Information
  No Easing : White
  Ease In : Red
  Ease Out : Yellow
  Ease InOut : Blue
  Left 4 characters are not changed and rIght 4 characters will be changed to another ease option when current animation is finished.
