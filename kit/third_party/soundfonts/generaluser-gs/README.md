# GeneralUser GS 2.0.3

A General MIDI / GS SoundFont by S. Christian Collins, under its own licence
(`LICENSE`): free to use in software projects, and to modify and repackage.
The file is an unmodified copy of `GeneralUser-GS.sf2` from
https://github.com/mrbumpy409/GeneralUser-GS at commit
`684543d5e5efaef08d02be50dcda8d552478fa60` ("update documentation to r6").
The author asks that projects ship their own copy rather than link to his
downloads, which is what this is. More at http://www.schristiancollins.com.

| File | Bytes | SHA-256 |
| --- | --- | --- |
| `GeneralUser-GS.sf2` | 32319396 | `9575028c7a1f589f5770fccc8cff2734566af40cd26ed836944e9a5152688cfe` |

The licence notes that the author cannot be certain where every sample
originated, though none came from commercial packages, and that no complaint
about sample ownership has been received since 2000.

## Why the kit carries a SoundFont

A Windows game that plays MIDI through the system - `midiOut`, DirectMusic
- hears Windows' own General MIDI synthesizer, whose instrument bank cannot be
redistributed. A game that ships its own bank still uses that; any other game
now plays through this one instead of in silence
(`runtime/misc.cpp` `midi_soundfont_path`). Apps carry it as the resource
`general-midi.sf2`; a developer build reads it from here.
