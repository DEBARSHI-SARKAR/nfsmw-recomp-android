/* speed.exe 005bccd0 FUN_005bccd0; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

undefined4 * __thiscall FUN_005bccd0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)*param_2;
  if (psVar2 != (short *)0x0) {
    iVar3 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
      iVar3 = iVar3 + 1;
      sVar1 = psVar2[iVar3];
    }
    if ((uint)param_1[1] < iVar3 + 1U) {
      FUN_005b91c0(iVar3 + 1U);
    }
    FUN_005b37c0(*param_1,*param_2);
  }
  return param_1;
}

