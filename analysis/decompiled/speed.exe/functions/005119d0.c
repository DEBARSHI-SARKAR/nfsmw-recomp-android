/* speed.exe 005119d0 FUN_005119d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 */

int __thiscall FUN_005119d0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      pcVar3 = "RIVAL_%02d";
    }
    else {
      pcVar3 = "RIVAL_%02d_IG";
    }
    uVar1 = FUN_00573140(pcVar3,param_3);
    *param_2 = uVar1;
    iVar2 = 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      pcVar3 = "RIVAL_%02d_GRAF";
    }
    else {
      pcVar3 = "RIVAL_%02d_IG_GRAF";
    }
    uVar1 = FUN_00573140(pcVar3,param_3);
    param_2[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      pcVar3 = "RIVAL_%02d_BG";
    }
    else {
      pcVar3 = "RIVAL_%02d_IG_BG";
    }
    uVar1 = FUN_00573140(pcVar3,param_3);
    param_2[iVar2] = uVar1;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

