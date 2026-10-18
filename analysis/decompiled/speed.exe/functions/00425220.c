/* speed.exe 00425220 FUN_00425220; analysis pseudocode, not buildable source.
 * calls 0041d820 FUN_0041d820
 */

int __fastcall FUN_00425220(int param_1)

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
  if (DAT_0092fd30 <= DAT_0092fd34) {
    uVar2 = (**(code **)(DAT_0092fd28 + 0xc))(DAT_0092fd34 + 1);
    FUN_0041d820(uVar2);
  }
  piVar1 = (int *)(DAT_0092fd2c + DAT_0092fd34 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fd34 = DAT_0092fd34 + 1;
    return param_1;
  }
  DAT_0092fd34 = DAT_0092fd34 + 1;
  return param_1;
}

