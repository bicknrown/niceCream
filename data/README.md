# Data
This is the folder for the preliminary data analysis on the dumped memory from runs.

Command used for string matches:
`$ hexdump -C [memdumpfile] | grep niceCream | wc -l`

## Non liquid nitrogen runs
### Run 0
Memory:
* (1) 256MB 1Rx16 PC2-4200U-444-12-C3
        * Model: `M378T3354CZ3-CD5`

#### "Frozone"
Exact string matches for "niceCream" in the 256MB dumped ram *before* writing:
`107`

Exact string matches for `niceCream` in the 256MB dumped ram *after* writing:
`660964`

#### "Violet"
Exact string matches for `niceCream` in the 256MB dumped ram *after* writing, removing the module from "Frozone", and installing the module on "Violet":
`42235`

## Liquid nitrogen runs
### Run 0
#### "Violet"
Exact string matches for `niceCream` in the 256MB dumped ram *after* writing, freezing the module with liquid nitrogen, removing the module from "Frozone", and installing the module on "Violet":
`67577`
