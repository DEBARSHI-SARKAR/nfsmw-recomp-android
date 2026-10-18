/* speed.exe 006f3670 FUN_006f3670; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

int * __fastcall FUN_006f3670(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0092c68c + 1;
  DAT_0092c68c = iVar2;
  *param_1 = iVar2;
  if (DAT_009303c8 <= DAT_009303cc) {
    uVar3 = (**(code **)(DAT_009303c0 + 0xc))(DAT_009303cc + 1);
    FUN_0041c080(uVar3);
  }
  piVar1 = (int *)(DAT_009303c4 + DAT_009303cc * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
    piVar1[1] = (int)(param_1 + -2);
    DAT_009303cc = DAT_009303cc + 1;
    return param_1;
  }
  DAT_009303cc = DAT_009303cc + 1;
  return param_1;
}

