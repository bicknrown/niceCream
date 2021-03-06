# niceCream
your ram: frozen
your data: gone
*icecream*: *made*

## About
A proof of concept for physically freezing system memory to read the stored data on another physical system.

This project was originally created for the UBHacking Spring 2022 hackathon.

This project won the first place prize.
[DEVPOST](https://ub-hacking-spring-2022.devpost.com/)
[DEVPOST project page](https://devpost.com/software/nicecream-x2klfz)

A big thank you to the event staff for putting up with my shenanigans, all the people that encouraged me to pursue this project, listened to my rambling, and enjoyed the icecream with me. <3

[Event Pictures](#pictures-from-the-event)

[Ice cream recipe](#ice-cream-recipe-used-for-the-demo)

## Testing methodology
* Populate desired memory slots with desired dimms on the system to be frozen.
* Boot first installation environment.
* Write specified pattern using `niceCream -w`
* **Freeze the memory module(s)**
* Remove the module(s) from the now frozen system.
* Insert the frozen modules into the not frozen system.
* Boot second installation environment.
* Attempt to read the pattern from memory using `/dev/fmem`, and write it to a file on disk.
* Compare patterns from the read file, and the expected pattern.

## Data
All raw data from runs are located in `raw/` linked within markdown files.
Processed data will be in `data/`.

## Hardware Setup
### `ln^2`
it sure is liquid nitrogen.

### Platform components
* x86 instruction architecture
* AM2 cpu platform 
* DDR2 memory platform
* Display(s): Samsung GH19PS
    * Model: 940BE
    * Using VGA
* Storage: PNY 16GB USB 3.0 Flash Drive(s)
* Keyboard(s): Apple Aluminum 104-key USB Magic Keyboard

### Platform differences
#### "Frozone" - System being frozen.
* CPU: `AMD Phenom 9500 Quad-Core`
* Logic board:
    * Model: `ALONPAV`
    * Core Version: `V6.0`
    * Product Number: `D5468AT-ABA`
    * BIOS Revision: `5.17 04/23/2008`
* Power Supply: `ULTRA ULT-XF500`

#### "Violet" - System reading frozen DRAM.
* CPU: `AMD Athlon II X4 620`
* Logic board:
    * Model: `P6210Y`
    * Core Version: `08.00.15`
    * Product Number: `NY545AA-ABA`
    * BIOS Revision: `5.17 07/24/09`
* Power Supply: `Corsair TX650M`

### Memory

#### ECC
* Nanya
    * (2) 1GB 2Rx8 PC2-5300E-555-12-12-G1.667.ECC
        * `NT1GT72U8PA1BY-3C 0744.TW`
* Kingston
    * (1) `KTD-DM8400C6E/2G`

#### non-ECC
* Samsung
    * (2) 256MB 1Rx16 PC2-4200U-444-12-C3
        * Model: `M378T3354CZ3-CD5`
    * (2) 512MB 1Rx8 PC2-6400U-666-12-ZZ
        * Model: `M378T6553EZS-CF7`
* Qimonda
    * (1) 1GB 2R8 PC2-6400U-666-12-EQ
        * Model: `HYS64T128020EU-2 5-B2`

## Software setup
### Operating system
* Arch Linux
    * Version:  `2022-04-01-x86_64` install ISO, no updates
    * Disk Layout
        * VDisk cloned to identical PNY USB 3.0 16GB Drives 
        * 10GB VDisk
            * 512MB `/boot`
            * 9.5GB `/`
    * Packages
        * `base`
        * `base-devel`
        * `linux`
        * `linux-firmware`
        * `grub`
        * `vi`
        * 'git'
        * `niceCream`
    * Extra kernel modules
        * `fmem`
* `niceCream`
    * Functions
        * Write

## Resources and inspiration 
* [Wikipedia](https://en.wikipedia.org/wiki/Cold_boot_attack)
* [Palinopsia Blog](https://hsmr.cc/palinopsia/)
* [fmem](https://github.com/NateBrune/fmem)
* [Make](https://www.gnu.org/software/make)
* The `C` library function manpages.

## Pictures from the event
![Test setup for demonstration](https://user-images.githubusercontent.com/50608130/162247901-41ecb5b4-fe1e-4639-96f2-5cceac3dfa2c.jpeg)
The final testing setup used for demonstration with the two systems. ("Frozone" on the right, "Violet" on the left)
![Pouring liquid nitrogen onto the memory module](https://user-images.githubusercontent.com/50608130/162247994-e505a803-e8a2-4635-8e91-9a7c74c9fcbd.jpeg)
Using a vacuum insulated water bottle (unfortunatly not from [lttstore.com](https://lttstore.com)) to freeze the memory module being tested.
![Using liquid nitrogen to make icecream](https://user-images.githubusercontent.com/50608130/162248003-6b7c9ad3-699a-40be-bbaa-4a32d54af02d.jpeg)
Making (vanilla) ice cream, freezing with liquid nitrogen.

### Ice cream recipe (used for the demo)
#### Non-food items
* Liquid nitrogen. (about five (5) liters)
* Large bowl. (about two (2) times larger than the raw ingredients would occupy.)
* Measuring cups.
* Baking spatula.
#### Ingredients
* Two (2) cups of heavy cream (whipping or otherwise)
* Two (2) cups of "half and half" cream.
* One (1) cup of granulated table sugar.
* Two (2) teaspoons of vanilla extract.

#### Instructions that I came up with on the spot on demo day.
1. Combine all ingredients together in a large bowl.
    * I didn't find the adding order to matter that much.
2. Stir with baking spatula until thoroughly mixed.
3. Add about one (1) cup of liquid nitrogen.
4. Stir until all liquid nitrogen evaporates off.
5. Repeat steps 3 and 4 until the ice cream reaches a consistency you are happy with.
6. Enjoy!
