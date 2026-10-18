/* speed.exe 005e3a00 FUN_005e3a00; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_005e3a00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (((piVar1 == (int *)0x0) || (*piVar1 != 0)) &&
     ((piVar1 = *(int **)(param_1 + 0x10), piVar1 == (int *)0x0 || (*piVar1 != 0)))) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}

