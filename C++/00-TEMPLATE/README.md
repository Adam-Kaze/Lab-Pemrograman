# Template C++

### Short Description
A template for doing C++ programming that has changed the settings to make it easier to run the program just by running using `CTRL + Shift + B` on your VS Code.

### How To Use
#### 1. Follow this all structure folder
```
/.vsccdoe
/bin
/src
```

#### 2. Open the .vscode folder on your VS Code

#### 3. Add the following 3 files `.json` and their contents according to what is on this github
```
c_cpp_properties.json
settings.json
tasks.json
```

#### 4. Open the file `c_cpp_properties.json` and change the compiler path address according to the address where you put the mingw compiler
```
{
    "configurations": [
        {
            "name": "Win32",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "_UNICODE"
            ],
            "compilerPath": "Change to your mingw address on your PC",
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "gcc-x64"
        }
    ],
    "version": 4
}
```

#### 5. Save changes and create a `main.cpp` file in the src folder

#### 6. Tulis program C++ mu, dan running menggunakan `CTRL + Shift + B`