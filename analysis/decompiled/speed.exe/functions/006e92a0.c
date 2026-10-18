/* speed.exe 006e92a0 FUN_006e92a0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e92a0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  *param_2 = _DAT_0089096c - ((float)param_1[1] + _DAT_0089096c) * _DAT_008933d4;
  fVar5 = (float10)FUN_005cb5d0(uVar2,uVar3);
  fVar4 = (float10)_DAT_0089096c;
  *param_3 = (float)(fVar4 - fVar5);
  if (fVar4 - fVar5 < (float10)_DAT_00890968) {
    fVar1 = *param_3;
    do {
      fVar1 = fVar1 + _DAT_0089096c;
    } while (fVar1 < _DAT_00890968);
    *param_3 = fVar1;
  }
  if (_DAT_0089096c < *param_3) {
    fVar1 = *param_3;
    do {
      fVar1 = fVar1 - _DAT_0089096c;
    } while (_DAT_0089096c < fVar1);
    *param_3 = fVar1;
  }
  return;
}

