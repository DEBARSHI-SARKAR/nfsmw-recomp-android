/* speed.exe 00701170 FUN_00701170; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00701170(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if (((0 < (int)uVar1) && ((int)uVar1 < 0x51)) && (uVar1 = 0, *(int *)(param_1 + 0x1a4) != 0)) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1a4) >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

