# SwiftBoard Build Log

| Builder   | Chandan |
|-----------|---------|
| Project   | SwiftBoard |
| Purpose   | Built as a one-piece full keyboard project under Hack Club Highways |
| Total Hours | 14 hours |

---

## 1 July 2025

Kicked it off today by finally committing to the idea. My old keyboard was just vibes-only at this point and it didn’t type right anymore. I opened KiCad and just started sketching. First thing I handled was figuring out the layout. Didn’t wanna go ortholinear this time. Just needed something smooth and classic. Made a draft with decent spacing and a full row setup. Took a few stabs at the row and column counts before settling on something that made sense. Got the matrix blocks in, nothing wired yet but it felt like a solid start. There was some tweaking but nothing crazy. Will sleep on it and look again tomorrow.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| *(Insert layout sketch image here)* | Early layout sketch before wiring the matrix |

---

## 2 July 2025

Woke up and hated the matrix from yesterday so I redid most of it. Set up clean row and column pins, made sure there weren’t any weird overlaps or scuffed routes. Took my time getting all the net labels aligned and clean because that stuff always comes back to haunt you later. Started adding diodes into the schematic too. It’s a simple process but when you’re working with 40+ keys it can get tedious. Also added encoder footprints cause I wanna try adding one in this build. Not final yet but it’s getting close. Felt productive.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| *(Insert schematic image here)* | Final matrix schematic setup with diodes and encoder pins added |

---

## 4 July 2025

Didn’t touch it yesterday but today I went all in. Started the PCB layout. Threw the switches in, aligned them properly, and made the footprint grid feel even. The encoder placement was a bit of a pain cause I wasn’t sure if I wanted it on the top right or center but figured top right makes more sense for my hand position. Started placing traces. Tried not to cross stuff because I hate via clutter. Got about 70 percent of routing done before stopping. There’s something satisfying about making traces that look neat and flow well.

**Hours spent:** 3

| Image | Description |
|-------|-------------|
| *(Insert PCB layout image here)* | Routing progress with switch footprints and early trace work |

---

## 5 July 2025

More PCB routing today. Spent a good hour just re-routing half the board because I realized one column trace was interfering with the Pro Micro pinout. Fixed that and started placing decoupling caps and the pull-up resistors for the encoder. Took some time to make the board outline smooth and symmetrical. Nothing looks worse than a board with uneven corners. Also added mounting holes finally, which I somehow forgot until now. I think it’s ready for DRC. Almost sent it for review but might look at it again tomorrow.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| *(Insert final PCB layout image here)* | PCB layout completed with routing clean and mounting holes added |

---

## 6 July 2025

Exported the Gerbers and double-checked everything in the 3D viewer. The board looks clean. Uploaded it to JLC just to see how it’d look in preview and it passed everything which is always a relief. Also started designing the case. Went with a simple sandwich style, just top and bottom acrylic plates. Didn’t want anything too bulky. Measured the standoff heights and adjusted the hole spacing. I’ll probably laser cut the plates later this week. Wrapped up by ordering the PCBs finally. Hope the colors come out right.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| *(Insert 3D viewer render image here)* | 3D render of the board with Pro Micro and switch models in place |

---

## 7 July 2025

Final touches. Wrote the firmware today using QMK. Started with the default layout and mapped everything manually since I’m not doing anything split or layered just yet. Set up encoder input to control volume, cause what else do you even use it for. Tested the config in VIA and it works beautifully. Might play with RGB or macros later but for now it’s solid. Also started prepping the BOM for GitHub. Everything’s ready for the README. It’s weirdly satisfying seeing it all come together after a week of tweaking.

**Hours spent:** 3

| Image | Description |
|-------|-------------|
| *(Insert VIA/QMK config screenshot here)* | QMK firmware and encoder config loaded and tested in VIA |

---

