# Uchiha Board Build Log

| Builder   | Chandan |
|-----------|---------|
| Project   | Uchiha Board |
| Purpose   | Built as a one-piece full keyboard project |
| Total Hours | 16 hours |

---

## 11 July 2025 - 10:45 pm to 1 am

I got underway tonight by finally acting on the idea. My previous keyboard was barely working half of the keys were squishy, and it just wasn't fun to work with anymore. At about 10:50 PM, I launched easy eda pro  and gazed at the empty board for a few minutes, leaving it there.

By 11:00 PM I started roughing out the layout. I did not want to use an ortholinear design this time around; I already had. I felt in the mood for something more old-fashioned, something that was easier to type on. I tried various key spacing and staggering of rows.

From 11:30 to midnight, I was fiddling with the number of rows and columns. I experimented with a number of different matrix sizes and even thought about adding an extra column for navigation keys, but decided against it. In the end, I ended up with a simple configuration full rows, no weird offsets, good symmetry.

At about 12:15 AM, I set the matrix blocks. There was nothing plugged in yet, but just having them laid out made it seem real. I gave it a brief visual scan and moved some keys, but I kept things simple. 

I finished around 1:00 AM.

**Hours spent:** 2

---

## 12 July 2025 - 11:22 am to 1:47 pm

I woke up and checked yesterday’s matrix, and I immediately disliked it. Around 11:30 AM, I discarded most of it and started fresh. This time, I concentrated on getting the correct row and column pins in place. I wanted to avoid those annoying overlaps and those one pixel off traces. 

By noon, I was in label chaos. I took my time to ensure each one was aligned, neat, and made sense.

At about 12:30 PM, I began adding the diodes to the schematic. It wasn’t anything special, but doing it for over 40 keys is a lot. My brain started to feel a bit fried, but it needed to be done. During that process, I also added encoder footprints because I wanted to try one in this build. I’m still figuring out exactly where it will go, but the idea is there now. 

I finished at around 1:47 PM.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| <img width="1188" height="536" alt="Screenshot 2025-07-20 215403" src="https://github.com/user-attachments/assets/15a2c7b0-406e-4f6e-af7f-a595811e5002" /> | Final matrix schematic setup with diodes and encoder pins added |

---

## 14 July 2025 - 9:38 pm to 12:12 am

I did pcb stuff tonight . First, I placed all the switch footprints and began aligning them. It took some tweaking, but I eventually arranged them in a nice, even grid. It's really satisfying when everything lines up neatly.

The encoder was a bit tricky. I spent a good amount of time around 10:15 PM positioning it between the center and the top right corner while I thought about hand position and comfort. In the end, I chose the top right. It just felt more natural for how I use my thumb.

By 11:00 PM, I was deep into routing. I tried to keep it clean by avoiding messy crossings and minimizing vias. I really dislike when the vias get tangled. I completed about 70% of the matrix before my mind started to feel foggy.

I wrapped up around 12:12 AM. 
**Hours spent:** 3

---

## 15 July 2025 6:12 pm to 8:41 pm

More PCB routing today. I spent a good part of the first hour undoing half of yesterday’s work after I noticed one of the column traces interfered with the Elite C pinout. That was a bit frustrating, but I caught it before fabrication. I fixed the conflict and re routed that section to clean it up.

Around 7:30 PM, I started placing the decoupling caps and pull up resistors for the encoder. I wanted to plan their placement carefully while keeping layout symmetry in mind. After that, I cleaned up the board outline. I took my time to ensure the corners were smooth and everything was centered properly. There is nothing worse than a poorly shaped board, especially after all the effort I've put in.

At 8:20 PM, I realized I hadn’t added the mounting holes. I quickly took care of that; it’s basic stuff but easy to overlook. I wrapped up around 8:41 PM and think it’s ready for DRC now. I almost hit "send for review," but I decided to sleep on it and take one more look tomorrow just to be sure.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| <img width="1096" height="582" alt="Screenshot 2025-07-21 010158" src="https://github.com/user-attachments/assets/43a664ae-d691-466e-8b11-49d4d2712599" /> | PCB layout completed with routing clean and mounting holes added |

---

## 16 July 2025 5:21 pm to 7:10 pm

I finally exported the Gerbers today. I double-checked everything in the 3D viewer before moving on. The board looks clean, with no odd gaps or floating pads. Around 5:45 PM, I uploaded the files to JLC just to preview them, and everything passed on the first try. It’s always a nice boost when that happens. 

After that, I switched gears and started designing the case. I kept it simple by choosing a sandwich-style case.

**Hours spent:** 2

| Image | Description |
|-------|-------------|
| <img width="1454" height="832" alt="Screenshot 2025-07-20 220158" src="https://github.com/user-attachments/assets/ff2d1a95-a529-4f09-8b6e-c7135c8dceb8" /> | 3D render of the board |

---

## 17 July 2025 3:10 pm to 6:04 pm

Final touches today. I sat down around 3:15 PM and started working on the firmware. I used QMK and began with the default layout. I mapped everything by hand since I’m not using splits or layers yet. It looks simple and clean.

I got the encoder working as a volume knob because, honestly, what else would it do? I tested everything in VIA around 4:30 PM, and it worked on the first try, which almost never happens. That felt great.

**Hours spent:** 3


---

## 18 July 2025 9:32 pm to 11:29 am

I spent a couple of hours in Fusion working on the case for the main keyboard. I started with the top plate outline from the PCB and stacked the layers to match my initial plan. It’s a classic sandwich style, nothing too complicated.

I adjusted the curve on the front edge a bit to fit the key layout better and make it look less boxy. Getting the standoff positions to align across the layers took a few tries, but they finally lined up. I also added a slight recess so the keycaps don’t sit too high above the top plate.
| Image | Description |
|-------|-------------|
| <img width="1046" height="465" alt="image" src="https://github.com/user-attachments/assets/a7350d7c-09c8-4b77-ac2c-028820afa3e2" /> | 3D render of the final keyboard |


**Hours spent:** 2
