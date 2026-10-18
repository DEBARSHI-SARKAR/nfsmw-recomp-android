/* speed.exe 005bcd20 FUN_005bcd20; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

undefined4 * __thiscall FUN_005bcd20(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  if (param_2 != (short *)0x0) {
    iVar2 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
      iVar2 = iVar2 + 1;
      sVar1 = param_2[iVar2];
    }
    if ((uint)param_1[1] < iVar2 + 1U) {
      FUN_005b91c0(iVar2 + 1U);
    }
    FUN_005b37c0(*param_1,param_2);
  }
  return param_1;
}

