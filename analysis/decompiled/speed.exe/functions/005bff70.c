/* speed.exe 005bff70 FUN_005bff70; analysis pseudocode, not buildable source.
 * calls 005b37c0 FUN_005b37c0
 * calls 005b91c0 FUN_005b91c0
 */

undefined4 * __thiscall FUN_005bff70(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  psVar2 = (short *)*param_2;
  if (psVar2 != (short *)0x0) {
    iVar3 = 0;
    sVar1 = *psVar2;
    while (sVar1 != 0) {
      iVar3 = iVar3 + 1;
      sVar1 = psVar2[iVar3];
    }
    if (iVar3 + 1 != 0) {
      FUN_005b91c0(iVar3 + 1);
    }
    FUN_005b37c0(*param_1,*param_2);
  }
  psVar2 = (short *)*param_1;
  iVar3 = 0;
  if (psVar2 != (short *)0x0) {
    sVar1 = *psVar2;
    while (sVar1 != 0) {
      iVar3 = iVar3 + 1;
      sVar1 = psVar2[iVar3];
    }
  }
  param_1[1] = iVar3;
  return param_1;
}

