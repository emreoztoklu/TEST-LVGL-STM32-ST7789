# TEST-LVGL-STM32-ST7789
This is my first Base test with LVGL GUI application


#LVGL PC SDL2

for windows:
	you will need wingw64  setup and install		(version: 8.1.0)
	then download SDL2  							(version: 2.0.22)
	
	
	copy
		from   		C:\SDL2-devel-2.0.22-mingw\SDL2-2.0.22\x86_64-w64-mingw32\include\SDL2
all file and subfolder into	  C:\mingw64\x86_64-w64-mingw32\include
		
		from 		C:\SDL2-devel-2.0.22-mingw\SDL2-2.0.22\x86_64-w64-mingw32\lib	
		
all file and subfolder into	 C:\mingw64\x86_64-w64-mingw32\lib
		
		from		C:\SDL2-devel-2.0.22-mingw\SDL2-2.0.22\x86_64-w64-mingw32\bin
all file and subfolder into  C:\mingw64\x86_64-w64-mingw32\bin



		From : c:\SDL2-devel-2.0.22-mingw\SDL2-2.0.22\x86_64-w64-mingw32\bin\SDL2.dll
		
		into project folder\Debug    paste it.
		
		
		then run .exe after debug
		
		
		

WARNİNG:
	Dont forget:
	
		IDE Setting:
			
			Project properties > C/C++ Build > Tool Chain Editor > Select tool chain for MinGW GCC
			
			Project properties > C/C++ Build > Settings > MinGW linker > libraries (-I)   >>  SDL2main, mingw32, SDL 
			