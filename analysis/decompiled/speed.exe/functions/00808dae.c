/* speed.exe 00808dae FUN_00808dae; analysis pseudocode, not buildable source.
 */

void FUN_00808dae(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char acStack_104 [256];
  
  piVar1 = (int *)(param_1 + 0x94);
  piVar2 = (int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x98);
  pcVar7 = (char *)(param_4 + *(int *)(param_1 + 0x78));
  param_1 = *(int *)(param_1 + 0x78) + param_5;
  iVar6 = *piVar2 << 3;
  param_4 = *piVar1 << 3;
  iVar5 = 0;
  do {
    acStack_104[iVar5] = (char)iVar5;
    if (iVar5 < param_2) {
      acStack_104[iVar5] = (char)param_2;
    }
    if (0xff - param_3 < iVar5) {
      acStack_104[iVar5] = -1 - (char)param_3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  if (0 < param_4) {
    do {
      if (0 < iVar6) {
        pcVar4 = pcVar7;
        iVar5 = iVar6;
        do {
          *pcVar4 = acStack_104[(byte)pcVar4[param_1 - (int)pcVar7]];
          pcVar4 = pcVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + iVar3;
      pcVar7 = pcVar7 + iVar3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

