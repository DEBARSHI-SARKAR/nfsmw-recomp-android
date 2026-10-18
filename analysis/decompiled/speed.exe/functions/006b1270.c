/* speed.exe 006b1270 FUN_006b1270; analysis pseudocode, not buildable source.
 * calls 00674820 FUN_00674820
 */

int __fastcall FUN_006b1270(int param_1)

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
  if (DAT_0092d0e0 <= DAT_0092d0e4) {
    uVar2 = (**(code **)(DAT_0092d0d8 + 0xc))(DAT_0092d0e4 + 1);
    FUN_00674820(uVar2);
  }
  piVar1 = (int *)(DAT_0092d0dc + DAT_0092d0e4 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092d0e4 = DAT_0092d0e4 + 1;
    return param_1;
  }
  DAT_0092d0e4 = DAT_0092d0e4 + 1;
  return param_1;
}

