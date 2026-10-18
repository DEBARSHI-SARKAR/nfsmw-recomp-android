/* speed.exe 00753ac0 FUN_00753ac0; analysis pseudocode, not buildable source.
 * calls 0073ca50 FUN_0073ca50
 * calls 0074b5c0 FUN_0074b5c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00753ac0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_0073ca50(param_1,param_2);
  iVar2 = DAT_009b0c48;
  if (DAT_009b0c48 != 0) {
    _DAT_009b0c54 = FUN_0074b5c0(param_1,param_2);
    fVar1 = _DAT_00890968;
    if ((_DAT_009b0c54 != 0) &&
       (pfVar3 = (float *)(*(int *)(*(int *)(iVar2 + 0x10) + 4) + _DAT_009b0c54),
       pfVar3 != (float *)0x0)) {
      fVar1 = *pfVar3;
    }
    if ((float)fVar4 <= fVar1) {
      if ((_DAT_009b0c54 != 0) &&
         (pfVar3 = (float *)(**(int **)(iVar2 + 0x10) + _DAT_009b0c54), pfVar3 != (float *)0x0)) {
        return (float10)*pfVar3;
      }
      return (float10)_DAT_00890968;
    }
  }
  return (float10)DAT_009b0a3c;
}

