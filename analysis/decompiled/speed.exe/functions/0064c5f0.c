/* speed.exe 0064c5f0 FUN_0064c5f0; analysis pseudocode, not buildable source.
 * calls 0064bdf0 FUN_0064bdf0
 * calls 0064c1d0 FUN_0064c1d0
 * calls 0045f510 FUN_0045f510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064c5f0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  local_30 = _DAT_008f8380 * *param_2;
  local_2c = _DAT_008f8384 * param_2[1];
  local_28 = _DAT_008f8388 * param_2[2];
  fVar1 = SQRT(local_2c * local_2c + local_30 * local_30 + local_28 * local_28);
  if (_DAT_00890fc8 <= fVar1) {
    if (_DAT_00891988 < fVar1) {
      fVar1 = _DAT_00891988;
    }
    fVar1 = (fVar1 - _DAT_00890fc8) * _DAT_00897188;
    fVar2 = fVar1 * _DAT_00894b58 + _DAT_00890cd4;
    if ((&DAT_00925ab0)[param_1 * 8] == 0) {
      fVar3 = (float10)_DAT_00890968;
    }
    else {
      fVar3 = (float10)FUN_0064bdf0(*(undefined4 *)(&DAT_00925ab4 + param_1 * 0x20));
    }
    if (fVar3 < (float10)fVar2) {
      FUN_0045f510(local_20,&local_30,fVar2);
      FUN_0064c1d0(local_20,fVar1 * _DAT_008a89e4 + _DAT_00894b58,0x413be1e5);
      return;
    }
  }
  return;
}

