/* speed.exe 0074cde0 FUN_0074cde0; analysis pseudocode, not buildable source.
 * calls 0074cb50 FUN_0074cb50
 */

int __fastcall FUN_0074cde0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0x11;
  }
  if (DAT_009b37d0 <= DAT_009b37d4) {
    uVar2 = (**(code **)(DAT_009b37c8 + 0xc))(DAT_009b37d4 + 1);
    FUN_0074cb50(uVar2);
  }
  piVar1 = (int *)(DAT_009b37cc + DAT_009b37d4 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_009b37d4 = DAT_009b37d4 + 1;
    return param_1;
  }
  DAT_009b37d4 = DAT_009b37d4 + 1;
  return param_1;
}

