/* speed.exe 0056c7c0 FUN_0056c7c0; analysis pseudocode, not buildable source.
 */

uint FUN_0056c7c0(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_008f53f0;
  do {
    if (*piVar1 == param_1) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x8f5474);
  return (uint)piVar1 & 0xffffff00;
}

