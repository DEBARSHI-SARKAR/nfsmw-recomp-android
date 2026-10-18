/* speed.exe 00667aa0 FUN_00667aa0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00667aa0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 8) != 0 || *(int *)(param_1 + 4 + uVar1 * 8) != 0) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 3);
  return uVar1 & 0xffffff00;
}

