/* speed.exe 006a3180 FUN_006a3180; analysis pseudocode, not buildable source.
 * calls 006a29b0 FUN_006a29b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a3180(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_14;
  float local_10;
  
  iVar5 = *(int *)(param_1 + 100);
  if ((iVar5 != 0) && (*(float *)(param_1 + 0x68) <= _DAT_00890968)) {
    fVar3 = *(float *)(param_1 + 0xc0) * _DAT_008a9394;
    if (iVar5 == 1) {
      *(undefined4 *)(param_1 + 100) = 2;
      return;
    }
    if (*(float *)(param_1 + 0x68) < _DAT_00890968 != (*(float *)(param_1 + 0x68) == _DAT_00890968))
    {
      fVar1 = *(float *)(param_1 + 0x70 + iVar5 * 4);
      local_10 = *(float *)(param_1 + 0x9c + (iVar5 + -1) * 4);
      local_14 = 0.0;
      fVar6 = (float10)FUN_006a29b0(iVar5 + -1);
      iVar5 = *(int *)(param_1 + 100);
      if ((iVar5 != 2) && (_DAT_00890968 < (float)fVar6)) {
        fVar2 = *(float *)(param_1 + 0x6c + iVar5 * 4);
        fVar7 = (float10)FUN_006a29b0(iVar5);
        local_14 = (float)(((float10)fVar2 / (float10)(float)fVar6) * fVar7 - (float10)_DAT_008970cc
                          );
      }
      iVar5 = *(int *)(param_1 + 100);
      if (iVar5 < 3) {
        if (_DAT_00895074 <= *(float *)(param_1 + 0x6c)) {
          local_10 = 0.0;
        }
        else {
          local_10 = *(float *)(*(int *)(param_1 + 0xdc) + 0x5c) + _DAT_008aac40;
        }
      }
      if (fVar1 <= fVar3) {
        iVar5 = *(int *)(param_1 + 100);
        iVar4 = (**(code **)(*(int *)(param_1 + 0x4c) + 8))();
        if (iVar5 < iVar4) {
          (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(iVar5 + 1);
          return;
        }
      }
      if (((fVar3 < local_10 != (fVar3 == local_10)) && (1 < iVar5)) &&
         (fVar3 < local_14 != (fVar3 == local_14))) {
        (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(iVar5 + -1);
      }
    }
  }
  return;
}

