# Konkantezer
Simple C program that helps you create an C array to embed any file in to your C/C++ code. \
It can also create ready to be compiled C source to extract directories, very helpful if you don't want to ship you program in a .zip or .tar.gz/bz2/xz. 

## TO DO
* Comment code: On going! 
* Selectable maximum size of .c parts: Soon! 
* Pairing with compression: With my Treemer program i'll try to do something. 

## Use 
* "Konkantize" a file: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [file_name] [extract_directory]```

##### From there you can just include the .h file and to extract it you just need to call the make directory and extract function.

* "Konkantize" a directory: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [directory_name] [extract_directory]```

##### From there you can either include the .h files etc...(like said in the few lines up) or you can compile individually the XT[original_directory_name].c files and link them to get an automatic extractor.

## Build:
* For building you'll need git, cmake, and a compiler of course and once you get that simply run:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    git clone "https://github.com/JeComtempleDuCodeSource/Konkantezer"```

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./Konkantezer/Source"```

* If you're on windows and using mingw:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -G"MinGW Makefiles" -B"./build" -S"./"``` 

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./build"``` 

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    mingw32-make``` 

* If not just:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -B"./build -S./"``` 
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./build"``` 
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    make``` 
