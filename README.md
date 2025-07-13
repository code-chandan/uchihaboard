# Swift Board

Swift Board is a custom split mechanical keyboard, cooked up by Chandan as a part of the Hack Club Highways fellowship and made specifically for YSWS. It’s not just a keyboard — it’s a full-on hardware flex, with a clean, functional layout, meant for those who like to build stuff from scratch and care about ergonomics, speed, and looking cool while typing. It’s inspired by open-source boards like Lily58 and Corne, but this one has its own soul and story. From hand-routing traces at 2AM to test fitting switches in a 3D-printed case that still smelled like PLA fumes, Swift Board has been a whole journey.

The layout is a split 3x6 ortholinear grid with thumb clusters, aimed at reducing finger travel while still giving you access to everything you need. The board supports Pro Micro or RP2040 controllers and is fully compatible with QMK firmware, which means you can map your keys however you like — want your spacebar on your pinky? Go wild. The top and bottom plates were modeled and prototyped in Fusion 360, and the PCBs were designed in KiCad. The vibe was to keep it light, modular, and beginner-friendly but still slick enough to show off in a setup photo.

One of the highlights of the board is its hot-swappability, so no, you don’t need to commit to a switch forever. You can start off with linears and move on to tactiles or clickies just because your vibe changes midweek. The build process included everything from selecting the right key switches to routing traces for clean signal flow and eventually making the case files available for 3D printing or CNC. Everything is open-source, well-documented, and reproducible if you're down to build your own.

This whole thing was made possible thanks to the support and mentorship from Hack Club Highways and YSWS. Big shoutout to the Slack fam and to everyone who dropped tips in #hardware-help when nothing was working right. It’s wild to think that this went from a sketch on paper to a fully functioning keyboard that clicks and clacks like a dream. Honestly, the final version is kinda fire.

All design files — including the PCB in KiCad format, STEP files for the case, and the firmware folder for QMK — are included in this repo. If you want to build your own Swift Board, clone this project, get your PCBs made at JLCPCB or wherever you prefer, grab a soldering iron, and start building. It's designed to be beginner-friendly but still feels super premium once it’s all assembled.

Below are image placeholders you can replace once you upload actual screenshots of the project.

---

## PCB Design

| Image | Description |
|-------|-------------|
| ![PCB](https://github.com/user/repo/blob/main/images/pcb.png) | This is the final routed PCB layout made in KiCad. All diodes are hand-placed for symmetry. |

---

## Schematic

| Image | Description |
|-------|-------------|
| ![Schematic](https://github.com/user/repo/blob/main/images/schematic.png) | The complete schematic with labeled matrix columns and rows, controller pins, and diode orientations. |

---

## 3D Model

| Image | Description |
|-------|-------------|
| ![3D Model](https://github.com/user/repo/blob/main/images/3dmodel.png) | The rendered view of Swift Board with caps and switches, modeled in Fusion 360. |

---

## Firmware

Swift Board is fully programmable via QMK. You can compile the firmware from source using the QMK CLI or use VIA if you’ve included the VIA JSON. Keymaps are stored in the `firmware` folder. If you’re using a Pro Micro, flash via QMK Toolbox. If you’re on RP2040, drag and drop the `.uf2` file. There’s also support for rotary encoders and RGB if you decide to go extra.

---

## Materials & BOM

All parts used to build this board are listed in the `bom.csv` file in this repo. The total cost for the build comes out to around $100 USD, keeping things affordable while still premium. The build includes the PCB, switches, keycaps, controller, diodes, acrylic plates, and screws. Cables are not included in the BOM. Everything else you’ll need is in there — if it’s not, ping me.


---

## License

This project is open-sourced under the MIT License.  
Remix it, clone it, build it, break it — just give credit when you do.

---

Made with burnt fingers and a lot of Ctrl+Zs
