SERIAL_DRIVER = bitbang
SWAP_HANDS_ENABLE = no

#  		 Pointing Device 		 #
# For use with Trackpoint
# The slave split has to be configured to not have PS2 Enabled. Otherwise, inputs will be missed.
# Tested with interrupts but the above workaround does not work even when PS2 is disabled for slave split. Input still lags.
PS2_MOUSE_ENABLE = no
PS2_ENABLE = no
# PS2_DRIVER = interrupt
PS2_DRIVER = busywait

#  		 Debug 		 #
CONSOLE_ENABLE = no
