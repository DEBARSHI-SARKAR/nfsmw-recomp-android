/* speed.exe 00675e10 FUN_00675e10; analysis pseudocode, not buildable source.
 * calls 00674660 FUN_00674660
 */

int __fastcall FUN_00675e10(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -8;
  }
  if (DAT_0092c900 <= DAT_0092c904) {
    uVar2 = (**(code **)(DAT_0092c8f8 + 0xc))(DAT_0092c904 + 1);
    FUN_00674660(uVar2);
  }
  piVar1 = (int *)(DAT_0092c8fc + DAT_0092c904 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092c904 = DAT_0092c904 + 1;
    return param_1;
  }
  DAT_0092c904 = DAT_0092c904 + 1;
  return param_1;
}

