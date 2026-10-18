/* speed.exe 005947f0 FUN_005947f0; analysis pseudocode, not buildable source.
 * calls 0058b900 FUN_0058b900
 */

int __fastcall FUN_005947f0(int param_1)

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
  if (DAT_0092fd90 <= DAT_0092fd94) {
    uVar2 = (**(code **)(DAT_0092fd88 + 0xc))(DAT_0092fd94 + 1);
    FUN_0058b900(uVar2);
  }
  piVar1 = (int *)(DAT_0092fd8c + DAT_0092fd94 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fd94 = DAT_0092fd94 + 1;
    return param_1;
  }
  DAT_0092fd94 = DAT_0092fd94 + 1;
  return param_1;
}

