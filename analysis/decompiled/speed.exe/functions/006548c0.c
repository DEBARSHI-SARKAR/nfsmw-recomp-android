/* speed.exe 006548c0 FUN_006548c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_006548c0(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_4;
  
  fVar1 = ((float)*param_1 * _DAT_00890984) / param_2;
  iVar2 = FUN_007c4b80();
  local_4 = (float)iVar2;
  if (fVar1 < (float)iVar2) {
    local_4 = (float)iVar2 - _DAT_0089096c;
  }
  if (_DAT_008933d4 <= fVar1 - local_4) {
    local_4 = local_4 + _DAT_0089096c;
  }
  fVar1 = local_4 * param_2 * _DAT_00893718;
  iVar2 = FUN_007c4b80();
  fVar3 = (float10)iVar2;
  if (fVar3 < (float10)fVar1) {
    fVar3 = fVar3 + (float10)_DAT_0089096c;
  }
  return fVar3 * (float10)_DAT_00890984;
}

