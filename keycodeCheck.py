import sys

#Access arguments that were used during the scipt call
keycodeFile = sys.argv[1]
keymapFile = sys.argv[2]

#Read in keycodes that are required
with open(keycodeFile, 'r') as keycodes:
    keycodesToCheck = set(keycode.strip() for keycode in keycodes)

#Read in the keymap that needs to be checked
with open(keymapFile, 'r') as keymap:
    keymapToCheck = keymap.read()

#Split on whitespace and remove commas to isolate keycodes
keymapParsed = set([i.strip(",") for i in keymapToCheck.split()])

#Check keymap against keycode list and print out items that are in the keycode list but missing from the keymap. 
#Formatted to a line per keycode.
for element in keycodesToCheck - keymapParsed:
    print(element)