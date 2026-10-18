/* speed.exe 00659e70 FUN_00659e70; analysis pseudocode, not buildable source.
 * calls 00659ce0 FUN_00659ce0
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00659e70(undefined4 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = FUN_007c4b80();
  local_4 = (float)iVar3;
  if (param_2 < local_4) {
    local_4 = local_4 - _DAT_0089096c;
  }
  param_2 = param_2 - local_4;
  fVar2 = _DAT_008959e4 * param_2 * param_2;
  fVar1 = param_2 * param_2 * _DAT_00890dd8;
  FUN_00659ce0(param_1,local_4,((param_2 * _DAT_00890e98 - fVar2) - _DAT_0089096c) * _DAT_008933d4,
               (fVar1 - param_2 * _DAT_00890bf8) * _DAT_008933d4,
               ((param_2 * _DAT_00890dbc - fVar1) + _DAT_0089096c) * _DAT_008933d4,
               (fVar2 - (param_2 + param_2)) * _DAT_008933d4);
  return;
}

