# CS201_PROJECT

How to run the project ?(Method 1 = For terminal only)
Step 1 -> Open the command prompt/terminal . Go inside the src folder.
Step 2 -> Compile the project using g++ -Wall *.cpp -o aco . 
          g++ = denotes  the compiler used GNU compiler.
          -Wall = enables all warnings
          *.cpp = compiles all the files inside the folder src
          -o aco = specifies the output file name
Step 3 -> Give the points in the points.txt file in the format x y and the result will also be stored in result.txt
Step 4 -> run the .exe using start aco.exe
Step 5 -> Program will ask you for number of iterations , number of ants and number of cities . It will then build a complete graph.
Step 6 -> Program gives you the most optimal route.


How to run the project ?(Method 2 = With OpenCv)

->This method requires you to install opencv from its official website: https://opencv.org/releases/
->Add the bin folder path into the user variables and system variables paths.
->Now open Vs code and configure using Cmake.
->Use only the MS compiler for c++ configuration because opencv doesnt work with MinGw compiler.
->Build the project and run the main.cpp file.
->A map of India will appear . Mark the required number of cities on the map and then press ESC.
->Leave VS code terminal as it is and running.
-> Open the command prompt/terminal . Go inside the src folder.
-> Compile the project using g++ -Wall *.cpp -o aco . 
          g++ = denotes  the compiler used GNU compiler.
          -Wall = enables all warnings
          *.cpp = compiles all the files inside the folder src
          -o aco = specifies the output file name
-> run the .exe using start aco.exe
-> Program will ask you for number of iterations , number of ants and number of cities . It will build a complete graph.
-> Program exits giving us the best route.
-> Go to VS Code terminal and enter any digit.
->Now it should display the optimal route on the map.
->Press Esc to exit.


Warning : Object Detection does not work with MinGw compiler.
Also do not forget to change the path of jennai.jpg ,result.txt and points.txt otherwise the program will not work for method 2 using opencv.

To run Object Detection VS Code build tools must be downloaded which contains the MS c++ compiler.
