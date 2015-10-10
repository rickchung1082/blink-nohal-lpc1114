gdb:
	arm-none-eabi-gdb -x build/nxp-lpc111x-gcc/source/t.gdb

gdbserver:
	JLinkGDBServer -device lpc1114 -if swd

