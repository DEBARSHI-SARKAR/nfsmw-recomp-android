/* speed.exe 0084d0f0 FUN_0084d0f0; analysis pseudocode, not buildable source.
 * calls 0084c580 FUN_0084c580
 */

undefined4
FUN_0084d0f0(int param_1,char *param_2,char *param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar3 != iVar1) {
      while (((((*(char *)(iVar3 + 0x28) == '\0' || (*(int *)(iVar3 + 0x19c) != 0)) ||
               ((param_2 != (char *)0x0 &&
                ((*param_2 != '\0' && (iVar2 = FUN_0084c580(), iVar2 != 0)))))) ||
              ((param_3 != (char *)0x0 &&
               ((*param_3 != '\0' && (iVar2 = FUN_0084c580(), iVar2 != 0)))))) ||
             (*(int *)(iVar3 + 0x194) == 0))) {
        iVar3 = iVar3 + 0x1a4;
        if (iVar3 == iVar1) {
          return param_5;
        }
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(iVar3 + 0x198);
      }
      param_5 = *(undefined4 *)(iVar3 + 0x194);
    }
  }
  return param_5;
}

