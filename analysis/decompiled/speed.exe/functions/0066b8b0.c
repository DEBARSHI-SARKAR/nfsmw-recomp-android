/* speed.exe 0066b8b0 FUN_0066b8b0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

bool FUN_0066b8b0(undefined4 param_1,byte param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_00454810(0xcdc136e8,0);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)FUN_006269b0(4);
  }
  return (*puVar1 & 1 << (param_2 & 0x1f)) != 0;
}

