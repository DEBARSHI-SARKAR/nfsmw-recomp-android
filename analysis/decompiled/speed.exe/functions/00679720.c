/* speed.exe 00679720 FUN_00679720; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

int * __fastcall FUN_00679720(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0092c688 + 1;
  DAT_0092c688 = iVar2;
  *param_1 = iVar2;
  if (DAT_0092feb8 <= DAT_0092febc) {
    uVar3 = (**(code **)(DAT_0092feb0 + 0xc))(DAT_0092febc + 1);
    FUN_0041c080(uVar3);
  }
  piVar1 = (int *)(DAT_0092feb4 + DAT_0092febc * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    piVar1[1] = (int)(param_1 + -2);
    DAT_0092febc = DAT_0092febc + 1;
    return param_1;
  }
  DAT_0092febc = DAT_0092febc + 1;
  return param_1;
}

