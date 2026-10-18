/* speed.exe 006b1200 FUN_006b1200; analysis pseudocode, not buildable source.
 * calls 006747b0 FUN_006747b0
 */

int __fastcall FUN_006b1200(int param_1)

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
  if (DAT_0092d600 <= DAT_0092d604) {
    uVar2 = (**(code **)(DAT_0092d5f8 + 0xc))(DAT_0092d604 + 1);
    FUN_006747b0(uVar2);
  }
  piVar1 = (int *)(DAT_0092d5fc + DAT_0092d604 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092d604 = DAT_0092d604 + 1;
    return param_1;
  }
  DAT_0092d604 = DAT_0092d604 + 1;
  return param_1;
}

