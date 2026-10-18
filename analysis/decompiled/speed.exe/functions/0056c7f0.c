/* speed.exe 0056c7f0 FUN_0056c7f0; analysis pseudocode, not buildable source.
 */

uint FUN_0056c7f0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_008f5474;
  do {
    if (*piVar1 == param_1) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x8f5480);
  return (uint)piVar1 & 0xffffff00;
}

