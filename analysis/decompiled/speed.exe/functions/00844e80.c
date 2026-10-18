/* speed.exe 00844e80 FUN_00844e80; analysis pseudocode, not buildable source.
 * calls 007c9470 _strncmp
 * calls 0083e3b0 FUN_0083e3b0
 * calls 0083e460 FUN_0083e460
 * calls 0083e3a0 FUN_0083e3a0
 * calls 0083e480 FUN_0083e480
 */

int FUN_00844e80(int param_1,int param_2,uint param_3,uint param_4,char *param_5,int param_6)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  int local_4;
  
  iVar4 = param_6;
  local_8 = param_6;
  piVar2 = *(int **)(param_1 + 0x1834);
  local_c = -1;
  local_4 = param_6;
  param_6 = 999;
  if (param_5 == (char *)0x0) {
    param_5 = "";
  }
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    return iVar4;
  }
  uVar3 = FUN_0083e480(piVar2[1]);
  FUN_0083e460(piVar2[1],uVar3);
  iVar7 = 0;
  iVar4 = FUN_0083e3a0(piVar2[1]);
  if (0 < iVar4) {
    do {
      iVar4 = FUN_0083e3b0(piVar2[1],iVar7);
      if ((*(uint *)(iVar4 + 8) & param_3) == param_4) {
        pcVar5 = param_5;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar6 = _strncmp((char *)(iVar4 + 0x20),param_5,(int)pcVar5 - (int)(param_5 + 1));
        if (iVar6 == 0) {
          iVar4 = (*(int *)(iVar4 + 0x10) * 100) / *(int *)(iVar4 + 0xc);
          if ((iVar4 < param_2) && (local_c < iVar4)) {
            local_c = iVar4;
            local_4 = iVar7;
          }
          if (iVar4 < param_6) {
            param_6 = iVar4;
            local_8 = iVar7;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar4 = FUN_0083e3a0(piVar2[1]);
    } while (iVar7 < iVar4);
    if (-1 < local_c) {
      return local_4;
    }
  }
  return local_8;
}

