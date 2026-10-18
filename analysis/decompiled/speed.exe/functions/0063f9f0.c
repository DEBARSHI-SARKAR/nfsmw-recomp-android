/* speed.exe 0063f9f0 FUN_0063f9f0; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

int * __fastcall FUN_0063f9f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00920468 + 1;
  DAT_00920468 = iVar2;
  *param_1 = iVar2;
  if (DAT_00920eb0 <= DAT_00920eb4) {
    uVar3 = (**(code **)(DAT_00920ea8 + 0xc))(DAT_00920eb4 + 1);
    FUN_0041c080(uVar3);
  }
  piVar1 = (int *)(DAT_00920eac + DAT_00920eb4 * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    piVar1[1] = (int)(param_1 + -2);
    DAT_00920eb4 = DAT_00920eb4 + 1;
    return param_1;
  }
  DAT_00920eb4 = DAT_00920eb4 + 1;
  return param_1;
}

