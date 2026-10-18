/* speed.exe 006b08c0 FUN_006b08c0; analysis pseudocode, not buildable source.
 * calls 006b06d0 FUN_006b06d0
 * calls 006a46f0 FUN_006a46f0
 * calls 006a45f0 FUN_006a45f0
 */

undefined4 __thiscall FUN_006b08c0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_20 [3];
  byte bStack_14;
  undefined1 auStack_10 [16];
  
  if (((char)param_2 != '\0') && (cVar1 = FUN_006b06d0(2), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 4))();
  if (cVar1 == '\0') {
    return 0;
  }
  if ((((char)param_2 != '\0') && ((int *)param_1[0x29] != (int *)0x0)) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x29] + 0x14))(), iVar2 != 0)) {
    return 0;
  }
  if (param_1[3] < param_1[5]) {
    piVar4 = param_1 + 7;
  }
  else {
    piVar4 = param_1 + ((param_1[4] + 1) % param_1[5]) * 8 + 7;
  }
  piVar5 = aiStack_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  if ((bStack_14 & 1) != 0) {
    FUN_006a46f0(aiStack_20);
  }
  cVar1 = FUN_006a45f0(aiStack_20,auStack_10,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  param_1[3] = 0;
  param_1[4] = -1;
  iVar2 = (param_1[4] + 1) % param_1[5];
  param_1[4] = iVar2;
  if (param_1[3] < param_1[5]) {
    param_1[3] = param_1[3] + 1;
  }
  piVar4 = aiStack_20;
  piVar5 = param_1 + iVar2 * 8 + 7;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  return 1;
}

