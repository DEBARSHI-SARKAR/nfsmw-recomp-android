/* speed.exe 006b12e0 FUN_006b12e0; analysis pseudocode, not buildable source.
 * calls 006745f0 FUN_006745f0
 */

int __fastcall FUN_006b12e0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + -0xc;
  }
  if (DAT_0092d940 <= DAT_0092d944) {
    uVar2 = (**(code **)(DAT_0092d938 + 0xc))(DAT_0092d944 + 1);
    FUN_006745f0(uVar2);
  }
  piVar1 = (int *)(DAT_0092d93c + DAT_0092d944 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_0092d944 = DAT_0092d944 + 1;
    return param_1;
  }
  DAT_0092d944 = DAT_0092d944 + 1;
  return param_1;
}

