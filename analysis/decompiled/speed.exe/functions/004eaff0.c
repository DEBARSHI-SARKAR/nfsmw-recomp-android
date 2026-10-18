/* speed.exe 004eaff0 FUN_004eaff0; analysis pseudocode, not buildable source.
 * calls 004ea920 FUN_004ea920
 */

int __fastcall FUN_004eaff0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -4;
  }
  if (DAT_00914b10 <= DAT_00914b14) {
    uVar2 = (**(code **)(DAT_00914b08 + 0xc))(DAT_00914b14 + 1);
    FUN_004ea920(uVar2);
  }
  piVar1 = (int *)(DAT_00914b0c + DAT_00914b14 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_00914b14 = DAT_00914b14 + 1;
    return param_1;
  }
  DAT_00914b14 = DAT_00914b14 + 1;
  return param_1;
}

