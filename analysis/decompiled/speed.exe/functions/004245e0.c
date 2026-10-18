/* speed.exe 004245e0 FUN_004245e0; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

int * __fastcall FUN_004245e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0092c680 + 1;
  DAT_0092c680 = iVar2;
  *param_1 = iVar2;
  if (DAT_00934ce8 <= DAT_00934cec) {
    uVar3 = (**(code **)(DAT_00934ce0 + 0xc))(DAT_00934cec + 1);
    FUN_0041c080(uVar3);
  }
  piVar1 = (int *)(DAT_00934ce4 + DAT_00934cec * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    piVar1[1] = (int)(param_1 + -2);
    DAT_00934cec = DAT_00934cec + 1;
    return param_1;
  }
  DAT_00934cec = DAT_00934cec + 1;
  return param_1;
}

