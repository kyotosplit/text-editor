REM 
@echo off

cl /Zi /MDd /IC:\dev_lib\SDL2-2.0.3\include *.c /link /NODEFAULTLIB:msvcrt.lib /ENTRY:mainCRTStartup /SUBSYSTEM:console /LIBPATH:C:\dev_lib\SDL2.2.0.3\lib\x64 /LIBPATH:C:\dev_lib\SDL2-2.03\lib\x64 SDL2main.lib SDL2_image.lib /out:spell_checker.exe
popd
