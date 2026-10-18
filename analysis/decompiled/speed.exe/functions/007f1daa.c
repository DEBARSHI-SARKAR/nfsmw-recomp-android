/* speed.exe 007f1daa FUN_007f1daa; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_007f1daa(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0xa0);
  if (*piVar1 < 0x20) {
    *(int *)(param_1 + 0x20 + *piVar1 * 4) = param_2;
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(param_2 + 8);
    if (iVar2 == 1) {
      *(int *)(param_1 + 0xa8) = param_2;
      iVar2 = 0;
    }
    else if (iVar2 == 2) {
      *(int *)(param_1 + 0xa4) = param_2;
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -3;
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xac) = param_2;
      }
    }
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  else {
    uVar3 = (uint)piVar1 & 0xffffff00;
  }
  return uVar3;
}

