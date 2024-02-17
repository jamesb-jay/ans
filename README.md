# Another Stage Controller
An open source lighting, sound and stage managment system for small-medium sized events.

## Roadmap
 - Lighting controller
	- Basic Art-Net output
	- Basic lighting control features
	- DMX output visualiser
	- Fixture setup
	- Cuelist
	- Fixture visualiser

 - Controller platform
	- Network communication
	- Protocols
	- Server implementation

*to be continued*


## Requirements (Inital)
 - Build for Windows
 - Networked cue & timecode system for:
   - DMX Lighting Control
   - Audio cues
   - Teleprompt & script prompt displays
   - Backstage prompt displays
   - Stage Manager interface
 - ArtNet & Enttec USB DMX output
 - ? Integration with open-fixture-library.org
 - 2D visualiser

## Why?
The popular open source lighting and sound cue systems (in my opinion) have some of the worst UI design I have ever seen.
The end goal for this project is a capable set of tools for small or amateur events, that put ease and speed of use __first__.

### Design philosophy
 - Minimise setup time
 - Minimise programming time
 - Complex features should be hidden from new users, and optional
 - Clean, **consistent** UI design