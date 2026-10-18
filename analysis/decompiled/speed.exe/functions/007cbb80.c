/* speed.exe 007cbb80 __control87; analysis pseudocode, not buildable source.
 * calls 007cbc40 __abstract_cw
 * calls 007cbd90 __hw_cw
 */

/* Library Function - Single Match
    __control87
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  uVar1 = _NewValue & _Mask | ~_Mask & uVar1;
  __hw_cw(uVar1);
  return uVar1;
}

