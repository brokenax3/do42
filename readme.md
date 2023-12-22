# DO42

This is a 42 key keyboard with a trackpoint on the left half and a dpad on the right half.

- Keyboard Maintainer: BrokenAxe
- Hardware Supported: Pro Micro or clone
- Hardware Availability: [do42 with Trackpoint]()

```
make do42/rev1:default
```

## EE Hands
Flash with `avrdude-split-left` and `avrdude-split-right` to make EE hands work.

```
# Example
qmk flash -kb do42 -km brokenaxe -bl avrdude-split-left
qmk flash -kb do42 -km brokenaxe -bl avrdude-split-right
```

