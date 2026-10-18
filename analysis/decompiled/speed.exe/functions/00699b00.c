/* speed.exe 00699b00 FUN_00699b00; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00699b00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x78);
  if (((*(byte *)(*piVar1 + 0x1c) >> 6 & 1) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x84), *(char *)((int)piVar1 + 0xfe) == '\0')) {
    piVar1 = (int *)(**(code **)(*(int *)(param_1 + 0x50) + 0x34))();
    if ((char)piVar1 == '\0') {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x11c) >> 8),*(int *)(param_1 + 0x11c) != 0);
    }
  }
  return (uint)piVar1 & 0xffffff00;
}

