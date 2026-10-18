/* speed.exe 005aecb0 FUN_005aecb0; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 */

int __thiscall FUN_005aecb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
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
      return iVar2;
    }
  }
  return param_1 + 8;
}

