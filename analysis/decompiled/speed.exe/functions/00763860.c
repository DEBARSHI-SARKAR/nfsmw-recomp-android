/* speed.exe 00763860 FUN_00763860; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00763860(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      if (*piVar1 == param_2) {
        if (uVar2 < *(int *)(param_1 + 0x20) - 1U) {
          *piVar1 = *(int *)(param_1 + 0x20 + *(int *)(param_1 + 0x20) * 4);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
        else {
          *piVar1 = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
      }
      else {
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      }
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

