/* speed.exe 006906b0 FUN_006906b0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 * calls 006533b0 FUN_006533b0
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006906b0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  
  iVar5 = *(int *)(param_1 + 0xfc);
  iVar6 = *(int *)(*(int *)(param_1 + 0xf8) + 8);
  fVar4 = *(float *)(iVar6 + 8 + iVar5 * 4) * _DAT_008a938c * _DAT_00890e98;
  iVar7 = *(int *)(*(int *)(param_1 + 0xf4) + 8);
  fVar3 = *(float *)(iVar6 + 0x10) * _DAT_008a938c * _DAT_008aac84;
  fVar1 = *(float *)(iVar7 + 0x20 + iVar5 * 4);
  fVar2 = *(float *)(iVar7 + 0x38 + iVar5 * 4);
  *(float *)(param_1 + 0xf0) = param_3;
  fVar9 = _DAT_00890968;
  *(float *)(param_1 + 0x104) = param_2;
  fVar8 = _DAT_00890968;
  if (fVar9 < param_4) {
    fVar8 = param_4;
  }
  *(float *)(param_1 + 0xd4) = fVar8;
  fVar4 = fVar4 * *(float *)(param_1 + 200);
  fVar3 = fVar3 * *(float *)(param_1 + 0xcc);
  if (_DAT_00890968 < param_3) {
    fVar4 = -fVar4;
  }
  fVar4 = fVar4 + *(float *)(param_1 + 0xe0);
  *(float *)(param_1 + 0xe0) = fVar4;
  if (_DAT_00890968 < param_3) {
    fVar3 = -fVar3;
  }
  *(float *)(param_1 + 0xe0) = fVar4 + fVar3;
  if (_DAT_00890968 <= param_3) {
    param_4 = param_3;
  }
  else {
    param_4 = -param_3;
  }
  fVar10 = (float10)FUN_005cb5d0(param_2,param_4);
  fVar3 = (float)fVar10;
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xd0) - param_3;
  *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xe0) / *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + 0x18 + *(int *)(param_1 + 0xfc) * 4);
  if (fVar10 < (float10)_DAT_00890968) {
    fVar10 = -fVar10;
  }
  fVar10 = (float10)FUN_006533b0((float)fVar10);
  fVar10 = fVar10 * (float10)*(float *)(param_1 + 0xd4) * (float10)fVar4;
  *(float *)(param_1 + 0xd8) = (float)fVar10;
  if (_DAT_00890968 < param_2) {
    *(float *)(param_1 + 0xd8) = (float)-fVar10;
  }
  if (*(float *)(param_1 + 0xcc) <= _DAT_008933d4) {
    if (*(int *)(param_1 + 0xfc) == 1) {
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) * _DAT_008aac78;
    }
    *(float *)(param_1 + 0xd0) = param_3 / *(float *)(param_1 + 0xc4);
  }
  else {
    if (*(int *)(param_1 + 0xfc) == 1) {
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) * _DAT_00891050;
    }
    *(undefined1 *)(param_1 + 0x100) = 1;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  fVar10 = (float10)FUN_005c5e80(*(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd8) +
                                 *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc));
  fVar4 = (float)fVar10;
  if ((fVar2 * *(float *)(param_1 + 0xd4) < fVar4) && (_DAT_00890d60 < fVar4)) {
    fVar4 = (fVar1 * *(float *)(param_1 + 0xd4)) / fVar4;
    *(float *)(param_1 + 0xd8) = fVar4 * *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xdc) = fVar4 * *(float *)(param_1 + 0xdc);
  }
  fVar1 = param_3;
  if (param_3 < _DAT_00890968) {
    fVar1 = -param_3;
  }
  if (fVar1 <= _DAT_0089096c) {
    if (param_2 < _DAT_00890968) {
      param_2 = -param_2;
    }
    if (_DAT_0089096c <= param_2) {
      param_2 = _DAT_0089096c;
    }
    *(float *)(param_1 + 0xd8) = param_2 * *(float *)(param_1 + 0xd8);
  }
  else {
    fVar10 = (float10)fsin((float10)fVar3 * (float10)_DAT_008aabd8);
    *(float *)(param_1 + 0xdc) =
         (float)((float10)*(float *)(param_1 + 0xdc) -
                fVar10 * (float10)*(float *)(param_1 + 0xd8) * (float10)_DAT_008933d4);
  }
  if (_DAT_00890968 < *(float *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(float *)(param_1 + 0xe4) = -param_3;
  }
  return;
}

