/* speed.exe 005bddd0 FUN_005bddd0; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 * calls 005b9d10 FUN_005b9d10
 * calls 005b5840 FUN_005b5840
 */

void FUN_005bddd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < *(char *)(param_1 + 3)) {
    cVar1 = *(char *)(param_1 + 2);
    if (cVar1 == '\0') {
      FUN_005b5840(param_1,param_2,param_3);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
      FUN_005b9d10(param_1,param_2,param_3);
    }
    iVar3 = 0;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      iVar2 = *(int *)(param_1 + 0x30);
    }
    else {
      iVar2 = FUN_005ad440();
    }
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar3 = iVar3 + 1;
      } while (iVar2 != 0);
      if (iVar3 != 0) {
        return;
      }
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x80;
  }
  return;
}

