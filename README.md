# SwiftBoard

This is SwiftBoard  
a no-nonsense, smooth layout keyboard that still slaps way harder than any off-the-shelf stuff  
it’s clean, sleek, and custom from the ground up  
basically a full-send from idea to PCB to flex-worthy typing experience

<img width="1364" height="746" alt="image" src="https://github.com/user-attachments/assets/56bdbf8f-d01a-4591-813f-fd0ab3d2dbb8" />

---

## how it started

It all started during one of those late-night sessions when the standard keyboards just weren’t vibing right  
There was too much going on and not enough control  
So I fired up KiCad and started drafting something that felt *right*  
Went with a standard layout but tuned the matrix for minimal latency and max precision  
Kept the routing neat, dropped in hot swap sockets, and gave it a solid frame  
SwiftBoard became this clean, single-piece board that works anywhere, anytime  
Not flashy, but definitely a beast under the hood  
And yeah, it was built from scratch just because the default wasn’t good enough

---

## why i think its dope

SwiftBoard runs an MX-compatible, hot-swappable layout with full-row support  
No splits, no gaps just a solid slab of productivity  
Supports a rp 2040 for easy firmware flashing  
Includes rotary encoder support
The matrix is clean, rows and columns are balanced and optimized  
You could run QMK or VIA on this thing in under 5 minutes  
And the case? 3D printable, tight tolerances, and zero rattle  
It’s not just a board. It’s a vibe.

---

## SwiftBoard Bill of Materials (BOM)

| Component            | Description                              | Qty | Unit Price (USD) | Total Price (USD) |
|----------------------|------------------------------------------|-----|------------------|-------------------|
| rp 2040              | USB-C microcontroller                    | 1   | 8                | 8                 |
| MX Switches          | Mechanical switches                      | 45  | 0.35             | 15.75             |
| Keycaps              | High-quality set for 45 keys             | 1   | 20.00            | 20.00             |
| Diodes               | 1N4148 for switch matrix                 | 45  | 0.03             | 1.35              |
| Resistors            | Pullups and encoder use                 | 10  | 0.05              | 0.50              |
| Rotary Encoder       | Vertical encoder with detent and push    | 1   | 3.00             | 3.00              |
| OLED Display         | Optional 128x32 screen (fun extra)       | 1   | 5.00             | 5.00              |
| PCB                  | Custom PCB (manufactured)                | 1   | 18.00            | 30.00             |
| Acrylic Case         | Laser-cut top and bottom plates          | 1   | 15.00            | 15.00             |
| Screws & Standoffs   | M3 hardware kit                          | 1   | 2.00             | 2.00              |
| Soldering Materials  | Solder, flux, braid, wire                | 1   | 3.00             | 3.00              |
| Miscellaneous        | Rubber feet, foam, labels, packaging     | 1   | 2.40             | 2.40              |

**Total Estimated Cost:** ~$106.00


---

## pics 

| Image | Description |
|-------|-------------|
| <img width="1440" height="739" alt="image" src="https://github.com/user-attachments/assets/7a120fe3-3c2f-42de-a406-30c696633d6d" />  | Full PCB view with matrix routing and Pro Micro headers |

| Image | Description |
|-------|-------------|
| <img width="1500" height="532" alt="image" src="https://github.com/user-attachments/assets/5c15c727-9c5e-4294-8927-d8e72b9ba3e1" /> | Clean schematic showing the rows, cols |

| Image | Description |
|-------|-------------|
| <img width="1364" height="746" alt="image" src="https://github.com/user-attachments/assets/6964913a-be66-46f0-8292-2d4252808d76" /> | 3D view of the board in Fusion with switches and case |

---

## license thingy

MIT License  
You can remix, fork, sell, mod, whatever  
Just don’t lock it down or keep it to yourself  
