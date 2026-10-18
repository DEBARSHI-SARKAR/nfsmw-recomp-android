/* speed.exe 005e3980 FUN_005e3980; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

int __thiscall FUN_005e3980(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      piVar1 = (int *)FUN_00454810(0x6ce23062,0);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)FUN_006269b0(4);
      }
      if (*piVar1 == param_2) {
        return uVar2 * 0x1c + *(int *)(param_1 + 0x24);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return 0;
}

