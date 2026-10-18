/* speed.exe 00856dc0 FUN_00856dc0; analysis pseudocode, not buildable source.
 * calls 00856510 FUN_00856510
 */

void FUN_00856dc0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((int)param_3 < 0) {
    param_3 = 0;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      iVar2 = param_3 + 1;
      param_3 = param_3 + 1;
      cVar1 = param_2[iVar2];
    }
  }
  uVar5 = *(uint *)(param_1 + 0x48) & 0x3f;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) + param_3;
  if (uVar5 != 0) {
    uVar3 = 0x40 - uVar5;
    pcVar6 = param_1 + uVar5;
    if ((int)param_3 < (int)uVar3) goto LAB_00856e57;
    pcVar6 = param_2;
    pcVar7 = param_1 + uVar5;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
    FUN_00856510(param_1);
  }
  if (0x3f < (int)param_3) {
    uVar5 = param_3 >> 6;
    param_3 = param_3 + uVar5 * -0x40;
    do {
      FUN_00856510(param_1);
      param_2 = param_2 + 0x40;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  pcVar6 = param_1;
  if ((int)param_3 < 1) {
    return;
  }
LAB_00856e57:
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *pcVar6 = *param_2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

