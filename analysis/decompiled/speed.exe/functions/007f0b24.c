/* speed.exe 007f0b24 FUN_007f0b24; analysis pseudocode, not buildable source.
 * calls 007f0a31 FUN_007f0a31
 * calls 007f0961 FUN_007f0961
 * calls 007f08ff FUN_007f08ff
 * calls 007f0996 FUN_007f0996
 * calls 007f09c6 FUN_007f09c6
 * calls 007f0a70 FUN_007f0a70
 */

char * FUN_007f0b24(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int local_c;
  
  iVar5 = param_1;
  local_c = 0;
  iVar2 = FUN_007f0a70(0);
  iVar9 = 4;
  pcVar8 = (char *)(param_1 + 0x10);
  param_1 = 4;
  iVar3 = FUN_007f0a31(iVar5);
  pcVar4 = (char *)(iVar3 + (iVar5 - iVar2));
  iVar2 = FUN_007f09c6(iVar5);
  if (iVar2 == 1) {
    iVar9 = 3;
    pcVar8 = (char *)(iVar5 + 6);
    param_1 = 3;
  }
  else if ((iVar2 == 3) && (iVar9 = *(char *)(iVar5 + 3) + -0x30, param_1 = iVar9, 4 < iVar9)) {
    param_1 = 4;
  }
  if (param_2 == 0) {
    if (pcVar8 < pcVar4) {
      do {
        pcVar6 = pcVar8 + param_1 + iVar9;
        if (local_c == param_3) goto LAB_007f0c14;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_c = local_c + 1;
        pcVar8 = pcVar6;
      } while (pcVar6 < pcVar4);
    }
  }
  else if (pcVar8 < pcVar4) {
    do {
      pcVar6 = pcVar8 + param_1 + iVar9;
      iVar5 = FUN_007f0996();
      if (iVar5 == 0) {
LAB_007f0c14:
        if (param_4 != (undefined4 *)0x0) {
          uVar7 = FUN_007f0961(pcVar8,iVar9);
          *param_4 = uVar7;
        }
        if (param_5 == (undefined4 *)0x0) {
          return pcVar6;
        }
        uVar7 = FUN_007f08ff(pcVar8 + iVar9,param_1);
        *param_5 = uVar7;
        return pcVar6;
      }
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar8 = pcVar6;
    } while (pcVar6 < pcVar4);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  return (char *)0x0;
}

