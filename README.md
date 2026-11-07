Number Guessing Game in C.

An interactive CLI-based number guessing game developed in C. The computer randomly chooses a secret number between 1 and 100, and guides the player to find it using dynamic hints while tracking total attempts.


Game Features


Truly Random Numbers: Uses srand(time(0)) to seed the generator so you get a different number every match.
Smart Hints: Alerts you whether your guess was high or low.
Score Tracking: Counts the exact number of attempts taken to guess the secret number.

Core C Concepts Used:


srand(time(0)) - Uses the current system time to generate a new secret number every game.

(rand() % 100) + 1 - Restricts the random number within the range of 1 to 100.

do-while loop - Ensures the prompt runs at least once and continues until you guess correctly.

attempts++ - Adds 1 to your attempt count after every guess.

if-else - Compares user guess with the computer's secret number to give hints.

How to Compile & Run


//bash

Using GCC / MinGW: gcc "Number Guess Game.c" -o "Number Guess Game"
./"Number Guess Game"

// Windows Terminal or CMD

Using MSVC (Developer Command Prompt / VS Code): cl "Number Guess Game.c"
"Number Guess Game.exe"

Sample Gameplay 
<img width="1920" height="1200" alt="Screenshot 2026-11-07 111053" src="https://github.com/user-attachments/assets/6e4ec829-fa60-42e8-8031-778415cfafdf" />

