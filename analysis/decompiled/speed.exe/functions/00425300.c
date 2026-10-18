/* speed.exe 00425300 FUN_00425300; analysis pseudocode, not buildable source.
 * calls 0041d960 FUN_0041d960
 */

int __fastcall FUN_00425300(int param_1)

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
  if (DAT_0092fda8 <= DAT_0092fdac) {
    uVar2 = (**(code **)(DAT_0092fda0 + 0xc))(DAT_0092fdac + 1);
    FUN_0041d960(uVar2);
  }
  piVar1 = (int *)(DAT_0092fda4 + DAT_0092fdac * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fdac = DAT_0092fdac + 1;
    return param_1;
  }
  DAT_0092fdac = DAT_0092fdac + 1;
  return param_1;
}

