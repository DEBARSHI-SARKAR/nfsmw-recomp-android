/* speed.exe 00425290 FUN_00425290; analysis pseudocode, not buildable source.
 * calls 0041d8c0 FUN_0041d8c0
 */

int __fastcall FUN_00425290(int param_1)

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
  if (DAT_0092fd60 <= DAT_0092fd64) {
    uVar2 = (**(code **)(DAT_0092fd58 + 0xc))(DAT_0092fd64 + 1);
    FUN_0041d8c0(uVar2);
  }
  piVar1 = (int *)(DAT_0092fd5c + DAT_0092fd64 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fd64 = DAT_0092fd64 + 1;
    return param_1;
  }
  DAT_0092fd64 = DAT_0092fd64 + 1;
  return param_1;
}

