/* speed.exe 00865140 FUN_00865140; analysis pseudocode, not buildable source.
 * calls 008650d0 FUN_008650d0
 * calls 00866b30 FUN_00866b30
 */

void FUN_00865140(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == -2) {
    iVar3 = 0;
    if (0 < param_1[4]) {
      do {
        FUN_008650d0(iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[4]);
    }
  }
  else if ((-1 < param_2) && (param_2 < param_1[4])) {
    FUN_008650d0(param_2);
  }
  iVar3 = 0;
  if (0 < param_1[4]) {
    iVar2 = param_1[4];
    piVar1 = (int *)(param_1[5] + 0x28);
    do {
      if (*piVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 0x117;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar3 != 0) {
      return;
    }
  }
  if (*param_1 != 0) {
    FUN_00866b30(*param_1);
    *param_1 = 0;
  }
  return;
}

