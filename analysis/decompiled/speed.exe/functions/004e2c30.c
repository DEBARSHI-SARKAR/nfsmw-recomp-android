/* speed.exe 004e2c30 FUN_004e2c30; analysis pseudocode, not buildable source.
 */

int * __thiscall FUN_004e2c30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return (int *)0x0;
  }
  uVar4 = *param_2 >> 0x18 & 0xf;
  iVar2 = 0;
  if (uVar4 != 0) {
    piVar3 = (int *)(param_1 + 0x88);
    uVar5 = uVar4;
    do {
      iVar2 = iVar2 + *piVar3;
      piVar3 = piVar3 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x8c + uVar4 * 8);
  piVar3 = (int *)(iVar2 * 0x10 + *(int *)(param_1 + 0x130));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*piVar3 == *param_2) {
        return piVar3;
      }
      piVar3 = piVar3 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8c + uVar4 * 8));
  }
  *(int *)(param_1 + 0x8c + uVar4 * 8) = iVar1 + 1;
  *piVar3 = *param_2;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0x7fff;
  return piVar3;
}

