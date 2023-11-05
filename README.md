# CS201_PROJECT

## Method 1: Terminal Only

1. **Step 1**: Open the command prompt/terminal. Go inside the `src` folder.

2. **Step 2**: Compile the project using the following command:
    ```bash
    g++ -Wall *.cpp -o aco
    ```
    - `g++`: Denotes the compiler used (GNU compiler).
    - `-Wall`: Enables all warnings.
    - `*.cpp`: Compiles all the files inside the `src` folder.
    - `-o aco`: Specifies the output file name.

3. **Step 3**: Provide the points in the `points.txt` file in the format `x y`, and the result will also be stored in `result.txt`.

4. **Step 4**: Run the executable using:
    ```bash
    start aco.exe
    ```

5. **Step 5**: The program will ask you for the number of iterations, the number of ants, and the number of cities. It will then build a complete graph.

6. **Step 6**: The program will give you the most optimal route.

## Method 2: With OpenCV

- This method requires you to install OpenCV from its official website: [OpenCV Official Website](https://opencv.org/releases/).
- Add the `bin` folder path to the user variables and system variables paths.
- Now open VS Code and configure using CMake.
- Use only the MS compiler for C++ configuration because OpenCV doesn't work with the MinGW compiler.
- Build the project and run the `main.cpp` file.
- A map of India will appear. Mark the required number of cities on the map and then press `ESC`.
- Leave the VS Code terminal running.
- Open the command prompt/terminal. Go inside the `src` folder.
- Compile the project using the following command:
    ```bash
    g++ -Wall *.cpp -o aco
    ```
    - `g++`: Denotes the compiler used (GNU compiler).
    - `-Wall`: Enables all warnings.
    - `*.cpp`: Compiles all the files inside the `src` folder.
    - `-o aco`: Specifies the output file name.
- Run the executable using:
    ```bash
    start aco.exe
    ```
- The program will ask you for the number of iterations, the number of ants, and the number of cities. It will build a complete graph.
- The program exits, giving us the best route.
- Go to the VS Code terminal and enter any digit.
- Now it should display the optimal route on the map.
- Press `ESC` to exit.

### Warning

- Object Detection does not work with the MinGW compiler.
- Also, do not forget to change the path of `jennai.jpg`, `result.txt`, and `points.txt`, otherwise the program will not work for Method 2 using OpenCV.
- To run Object Detection, VS Code build tools must be downloaded, which contains the MS C++ compiler.
