/* speed.exe 005beaa0 FUN_005beaa0; analysis pseudocode, not buildable source.
 * calls 005b7a70 FUN_005b7a70
 * calls 005bbc00 FUN_005bbc00
 * calls 005bbb90 FUN_005bbb90
 */

void FUN_005beaa0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x18) == 4) &&
     (cVar1 = FUN_005b7a70(param_1,param_2,param_3), cVar1 != '\0')) {
    return;
  }
  if ((*(int *)(param_1 + 0x18) == 6) &&
     (cVar1 = FUN_005bbb90(param_1,param_2,param_3), cVar1 != '\0')) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != 0) {
    while (*(int *)(iVar2 + 0xc) != param_3) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return;
      }
    }
    if (iVar2 != 0) {
      FUN_005bbc00(iVar2,param_1,param_2,param_4);
    }
  }
  return;
}

