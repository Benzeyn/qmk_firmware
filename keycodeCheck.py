import sys

#Access arguments that were used during the scipt call
file1 = sys.argv[1]
file2 = sys.argv[2]

#Initialise variables to make this less confusing for me
missingKC = []
keymapToCheck = ""
keycodesToCheck = {}

#Read in keycodes that you want to check for in a keymap as a set
with open(file1, 'r') as keycodes:
    keycodesToCheck = set(keycode.strip() for keycode in keycodes)

#Read in the keymap you want to check as one long string
with open(file2, 'r') as keymap:
    keymapToCheck = keymap.read()

#Check for each keycode in the string and push any missing keycodes into the array
for keycode in keycodesToCheck:
    if not keycode in keymapToCheck:
        missingKC.append(keycode)

#Write out the array of missing keycodes. You could pipe this to a file
sys.stdout.write(str(missingKC))
