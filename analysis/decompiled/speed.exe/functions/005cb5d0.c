/* speed.exe 005cb5d0 FUN_005cb5d0; analysis pseudocode, not buildable source.
 * calls 0045ded0 FUN_0045ded0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005cb5d0(float param_1,float param_2)

{
  float fVar1;
  short sVar2;
  undefined4 local_4;
  
  fVar1 = param_2;
  if (param_2 < _DAT_00890968) {
    fVar1 = -param_2;
  }
  if (fVar1 <= _DAT_008a2f9c) {
    local_4 = 0.0;
  }
  else {
    local_4 = param_2;
  }
  fVar1 = param_1;
  if (param_1 < _DAT_00890968) {
    fVar1 = -param_1;
  }
  if (fVar1 <= _DAT_008a2f9c) {
    param_2 = 0.0;
  }
  else {
    param_2 = param_1;
  }
  sVar2 = FUN_0045ded0(local_4,param_2);
  return (float10)(int)sVar2 * (float10)_DAT_00890980;
}

