/* speed.exe 00603b30 FUN_00603b30; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

void FUN_00603b30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00454810(0x50104d90,param_1);
  if (iVar1 == 0) {
    FUN_006269b0(4);
  }
  return;
}

