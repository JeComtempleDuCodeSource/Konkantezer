# Konkantezer
Simple c program that helps you create an C array to embed file in your C/C++ code. \
It can also create ready to be compiled C source to extract directories very helpful if you don't want to ship you program in a archive. 

## TO DO
* Comment code: On going! 
* Selectable maximum size of .c parts: Soon! 
* Pairing with compression: With my Treemer program i'll try to do something. 
* Fix error where file cannot be extracted because directory has to been created. 

## Use 
* "Konkantize" a file: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [filename] [extract directory]```


* "Konkantize" a directory: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [directory name] [extract directory]```


## Build:
* For building you'll need git, cmake, and a compiler of course and once you get that simply run:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    git clone "https://github.com/JeComtempleDuCodeSource/Konkantezer"
    ```\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./Konkantezer/Source" 
    ```\
    \
* If you're on windows and using mingw: \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -G"MinGW Makefiles" -B"./build" -S"./"
    ``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./build"
    ``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    mingw32-make
    ``` \
    \
* If not just: \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -B"./build -S./"
    ``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./build"
    ``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    make
    ``` 
    
