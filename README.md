# Konkantezer
![KONKANTEZER_ICON](/src/KKTZ_256.bmp) 
\
Simple C program that helps you create an C array to embed any file in to your C/C++ code. \
It can also create ready to be compiled C source to extract directories, very helpful if you don't want to ship your program in a .zip or .tar.gz/bz2/xz.
 
## TO DO
* Comment more code.
+ User defined maximum size of .c parts.
* Colored output with the help of Prisma.h.

## Use 
* "Konkantize" a file: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [file_name] [extract_directory]```

##### From there you can just include the .h file and to extract it you just need to call the make directory and extract function.

* "Konkantize" a directory: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
Konkantezer [directory_name] [extract_directory]```

##### From there you can either include the .h files etc...(like said in the few lines up) or you can compile individually the XT[original_directory_name]_[part_number].c files, link them with XT[original_directory_name]main.c to get an bare-bones automatic extractor or include the [original_directory_name]main.h header, call the makedir and extract function from your own program and don't forget to link them.

## Build:
* For building you'll need git, cmake, and a C compiler of course(clang, gcc, mingw-w64 or tdm-gcc should work) and once you get that simply run:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    git clone "https://github.com/JeFaitDesSpaghettis/Konkantezer"``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cd "./Konkantezer"``` 
* If you're on windows and using mingw:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -G"MinGW Makefiles" -B"./build" -S"./src"``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake --build "./build" -j2```

* If not just:\
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake -B"./build -S./src"``` \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;```
    cmake --build "./build" -j 2``` 

*  Instead of running these command manually you can also run them automatically with the "auto-build[compiler_name].sh/.cmd" files
