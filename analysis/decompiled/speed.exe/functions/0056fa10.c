/* speed.exe 0056fa10 FUN_0056fa10; analysis pseudocode, not buildable source.
 * calls 0045f1c0 FUN_0045f1c0
 * calls 0045f2e0 FUN_0045f2e0
 * calls 00466330 FUN_00466330
 */

void FUN_0056fa10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045f1c0(param_1);
  if (-1 < iVar1) {
    FUN_0045f2e0(param_1);
    return;
  }
  FUN_0045f2e0(param_1);
  if (*(int *)(DAT_0091cfa4 + 0x18) == 0) {
    FUN_00466330(DAT_0091cfa4);
    DAT_0091cfa4 = 0;
  }
  return;
}

