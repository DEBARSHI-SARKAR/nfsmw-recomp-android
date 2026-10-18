/* speed.exe 006b0c30 FUN_006b0c30; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

int * __fastcall FUN_006b0c30(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0092c684 + 1;
  DAT_0092c684 = iVar2;
  *param_1 = iVar2;
  if (DAT_00930518 <= DAT_0093051c) {
    uVar3 = (**(code **)(DAT_00930510 + 0xc))(DAT_0093051c + 1);
    FUN_0041c080(uVar3);
  }
  piVar1 = (int *)(DAT_00930514 + DAT_0093051c * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    piVar1[1] = (int)(param_1 + -2);
    DAT_0093051c = DAT_0093051c + 1;
    return param_1;
  }
  DAT_0093051c = DAT_0093051c + 1;
  return param_1;
}

