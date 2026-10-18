/* speed.exe 0047b980 FUN_0047b980; analysis pseudocode, not buildable source.
 * calls 004792a0 FUN_004792a0
 */

int __fastcall FUN_0047b980(int param_1)

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
  if (DAT_0092fe28 <= DAT_0092fe2c) {
    uVar2 = (**(code **)(DAT_0092fe20 + 0xc))(DAT_0092fe2c + 1);
    FUN_004792a0(uVar2);
  }
  piVar1 = (int *)(DAT_0092fe24 + DAT_0092fe2c * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092fe2c = DAT_0092fe2c + 1;
    return param_1;
  }
  DAT_0092fe2c = DAT_0092fe2c + 1;
  return param_1;
}

