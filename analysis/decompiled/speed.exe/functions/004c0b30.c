/* speed.exe 004c0b30 FUN_004c0b30; analysis pseudocode, not buildable source.
 * calls 004c0320 FUN_004c0320
 */

int __fastcall FUN_004c0b30(int param_1)

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
  if (DAT_00913e78 <= DAT_00913e7c) {
    uVar2 = (**(code **)(DAT_00913e70 + 0xc))(DAT_00913e7c + 1);
    FUN_004c0320(uVar2);
  }
  piVar1 = (int *)(DAT_00913e74 + DAT_00913e7c * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar3;
    DAT_00913e7c = DAT_00913e7c + 1;
    return param_1;
  }
  DAT_00913e7c = DAT_00913e7c + 1;
  return param_1;
}

