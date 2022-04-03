# niceCream
your ram: frozen
your data: gone
*icecream*: *made*

## About
A proof of concept for physically freezing system memory to read the stored data on another physical system.

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
* CPU: AMD Phenom 9500 Quad-Core
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

## Testing methodology

* Populate desired memory slots with desired dimms on the system to be frozen.
* Boot first installation environment.
* Write specified pattern using `niceCream -w`
* **Freeze the memory module(s)**
* Remove the module(s) from the now frozen system.
* Insert the frozen modules into the not frozen system.
* Boot second installation environment.
* Attempt to read the pattern from memory, and write it to a file on disk.
* Compare patterns from the read file, and the expected pattern.
