/* speed.exe 007cbbd0 __controlfp; analysis pseudocode, not buildable source.
 * calls 007cbb80 __control87
 */

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Debug */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}

