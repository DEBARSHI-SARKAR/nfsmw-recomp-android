/* speed.exe 0045dc10 FUN_0045dc10; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dc10(float *param_1,float *param_2,ushort param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  uVar7 = (uint)param_3;
  _param_3 = 1.0;
  fVar1 = (float)uVar7 * _DAT_008941f4;
  if (fVar1 < _DAT_0089421c) {
    if (_DAT_00891654 <= fVar1) {
      fVar1 = fVar1 - _DAT_00894214;
      _param_3 = -1.0;
    }
  }
  else {
    fVar1 = fVar1 - _DAT_00894218;
  }
  fVar2 = fVar1 * fVar1;
  fVar3 = fVar2 * fVar1 * fVar2;
  fVar5 = fVar2 * fVar2 * fVar2;
  fVar4 = fVar3 * fVar2;
  fVar6 = fVar5 * fVar2;
  *param_1 = (fVar4 * fVar2 * _DAT_00894204 +
             ((fVar3 * _DAT_0089420c + (fVar1 - fVar2 * fVar1 * _DAT_00894210)) -
             fVar4 * _DAT_00894208)) * _param_3;
  *param_2 = ((fVar6 * _DAT_00894224 +
              ((fVar2 * fVar2 * _DAT_0089422c + (_DAT_0089096c - _DAT_008933d4 * fVar2)) -
              fVar5 * _DAT_00894228)) - fVar6 * fVar2 * _DAT_00894220) * _param_3;
  return;
}

