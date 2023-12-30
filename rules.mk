SPLIT_KEYBOARD = yes
SERIAL_DRIVER = bitbang
DEFAULT_FOLDER = brokendo42/rev1
SWAP_HANDS_ENABLE = no

# For use with Trackpoint
# The slave split has to be configured to not have PS2 Enabled. Otherwise, inputs will be missed.
# Tested with interrupts but the above workaround does not work even when PS2 is disabled for slave split. Input still lags.
PS2_MOUSE_ENABLE = no
PS2_ENABLE = no
# PS2_DRIVER = interrupt
PS2_DRIVER = busywait

LTO_ENABLE = yes
MOUSEKEY_ENABLE = yes
NKRO_ENABLE = yes
EXTRAKEY_ENABLE = yes

CONSOLE_ENABLE = no
