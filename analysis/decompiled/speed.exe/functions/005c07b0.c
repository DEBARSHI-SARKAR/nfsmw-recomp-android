/* speed.exe 005c07b0 FUN_005c07b0; analysis pseudocode, not buildable source.
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void FUN_005c07b0(int param_1,byte param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (uint)param_2 * 0x38;
  iVar1 = *(int *)(param_1 + 0x20) + iVar3;
  cVar2 = *(char *)(iVar1 + 2);
  if (cVar2 == '\0') {
    FUN_005b5840(*(int *)(param_1 + 0x20) + iVar3,param_3,
                 *(int *)(param_4 + 0x2c) + *(char *)(*(int *)(param_1 + 0x20) + 7 + iVar3) * 4);
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\x03')) {
    FUN_005b9d10(iVar1,param_3,*(int *)(param_4 + 0x2c) + *(char *)(iVar1 + 7) * 4);
    return;
  }
  return;
}

