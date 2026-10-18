/* speed.exe 0073d4e0 FUN_0073d4e0; analysis pseudocode, not buildable source.
 */

uint FUN_0073d4e0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)((int)&DAT_00904b44 + uVar1) == param_1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 0x14;
  } while (uVar1 < 0x28);
  return uVar1 & 0xffffff00;
}

