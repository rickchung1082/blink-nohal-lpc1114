set confirm 0
set disassemble-next-line 1

target remote:2331
file ./build/nxp-lpc111x-gcc/source/blink-nohal-lpc1114
load 

monitor reset
continue
