/* speed.exe 005aed00 FUN_005aed00; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 */

void __thiscall FUN_005aed00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar2 = FUN_005ad440();
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    while ((iVar1 != 0 && (*(int *)(iVar2 + 0xc) < param_2))) {
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = *(int *)(iVar2 + 4);
    }
    return;
  }
  return;
}

