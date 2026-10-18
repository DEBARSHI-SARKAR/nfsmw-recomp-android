/* speed.exe 004c0c70 FUN_004c0c70; analysis pseudocode, not buildable source.
 * calls 004c0420 FUN_004c0420
 */

int __fastcall FUN_004c0c70(int param_1)

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
  if (DAT_00913ed8 <= DAT_00913edc) {
    uVar2 = (**(code **)(DAT_00913ed0 + 0xc))(DAT_00913edc + 1);
    FUN_004c0420(uVar2);
  }
  piVar1 = (int *)(DAT_00913ed4 + DAT_00913edc * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_00913edc = DAT_00913edc + 1;
    return param_1;
  }
  DAT_00913edc = DAT_00913edc + 1;
  return param_1;
}

