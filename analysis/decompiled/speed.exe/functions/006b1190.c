/* speed.exe 006b1190 FUN_006b1190; analysis pseudocode, not buildable source.
 * calls 00674740 FUN_00674740
 */

int __fastcall FUN_006b1190(int param_1)

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
  if (DAT_0092d370 <= DAT_0092d374) {
    uVar2 = (**(code **)(DAT_0092d368 + 0xc))(DAT_0092d374 + 1);
    FUN_00674740(uVar2);
  }
  piVar1 = (int *)(DAT_0092d36c + DAT_0092d374 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092d374 = DAT_0092d374 + 1;
    return param_1;
  }
  DAT_0092d374 = DAT_0092d374 + 1;
  return param_1;
}

