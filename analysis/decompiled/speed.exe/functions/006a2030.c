/* speed.exe 006a2030 FUN_006a2030; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a2030(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float *pfVar5;
  float *pfStack_70;
  float *pfStack_6c;
  float fStack_68;
  float *pfStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  float *pfStack_58;
  undefined4 uStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int *piStack_34;
  float fStack_30;
  float fStack_2c;
  int *piStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  float fStack_4;
  
  uStack_54 = 0;
  pfStack_58 = param_2;
  pfStack_5c = (float *)0x6a204c;
  (**(code **)(**(int **)(param_1 + 200) + 0xa4))();
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * _DAT_00890e98;
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) * _DAT_00890e98;
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) * _DAT_00890e98;
  *param_2 = (*(float *)(param_1 + 0x6c) + *param_2) * _DAT_00895074;
  param_2[1] = (*(float *)(param_1 + 0x70) + param_2[1]) * _DAT_00895074;
  fVar1 = (*(float *)(param_1 + 0x74) + param_2[2]) * _DAT_00895074;
  param_2[2] = fVar1;
  fStack_4 = -((_DAT_00890dd8 / DAT_008f8dcc) * fVar1 * *(float *)(*(int *)(param_1 + 0xa4) + 0x38))
  ;
  if (_DAT_00890968 < param_2[1]) {
    pfStack_5c = (float *)0x6a20d5;
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 200) + 0x2c))();
    if ((float10)_DAT_00890dac < fVar4) {
      pfStack_5c = (float *)0x6a20ed;
      iVar2 = (**(code **)(**(int **)(param_1 + 200) + 0x24))();
      if (_DAT_00890968 < *(float *)(iVar2 + 4)) {
        fStack_4 = param_2[1] * _DAT_008aae60 + fStack_4;
      }
    }
  }
  fVar1 = _DAT_00890cd4;
  if ((fStack_4 < _DAT_00890cd4) && (fVar1 = fStack_4, fStack_4 < _DAT_008aae40)) {
    fStack_4 = -0.1;
    fVar1 = fStack_4;
  }
  fStack_4 = fVar1;
  pfStack_5c = &fStack_44;
  pfStack_60 = (float *)0x6a215a;
  (**(code **)(**(int **)(param_1 + 200) + 0x34))();
  fVar4 = (float10)fsin((float10)fStack_8 * (float10)_DAT_008aabd8);
  fStack_3c = fStack_48;
  pfStack_64 = &fStack_48;
  fStack_38 = fStack_44;
  piStack_34 = (int *)fStack_40;
  fStack_44 = (float)fVar4;
  fStack_68 = 9.746601e-39;
  pfStack_60 = pfStack_64;
  FUN_0040fe20();
  fStack_24 = (float)piStack_34 * fStack_44 - fStack_38 * fStack_40;
  fStack_20 = fStack_40 * fStack_3c - fStack_48 * (float)piStack_34;
  fStack_1c = fStack_38 * fStack_48 - fStack_3c * fStack_44;
  pfStack_60 = (float *)0x6a21f7;
  fStack_18 = fStack_24;
  fStack_14 = fStack_20;
  fStack_10 = fStack_1c;
  puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 200) + 0x28))();
  uStack_54 = *puVar3;
  pfStack_60 = (float *)0x0;
  pfStack_64 = (float *)&uStack_54;
  fStack_68 = 9.746804e-39;
  (**(code **)(**(int **)(param_1 + 200) + 0xa4))();
  fStack_68 = 0.0;
  pfStack_6c = &fStack_2c;
  pfStack_58 = (float *)0x0;
  uStack_54 = 0;
  pfStack_70 = (float *)0x6a2245;
  (**(code **)(**(int **)(param_1 + 200) + 0xa4))();
  fVar1 = -((float)piStack_34 * *(float *)(*(int *)(param_1 + 0xa4) + 0x1c));
  pfStack_64 = (float *)_DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (pfStack_64 = (float *)fVar1, fVar1 < _DAT_008aac20)) {
    pfStack_64 = (float *)_DAT_008aac20;
  }
  fVar1 = -((_DAT_00891044 / DAT_008f8dcc) * *param_2 * *(float *)(*(int *)(param_1 + 0xa4) + 0x40))
  ;
  fStack_18 = _DAT_00890cd4;
  if ((fVar1 < _DAT_00890cd4) && (fStack_18 = fVar1, fVar1 < _DAT_008aae40)) {
    fStack_18 = -0.1;
  }
  pfStack_70 = &fStack_40;
  (**(code **)(**(int **)(param_1 + 200) + 0x38))();
  fVar1 = fStack_44;
  fVar4 = (float10)fsin((float10)fStack_1c * (float10)_DAT_008aabd8);
  fStack_48 = fStack_3c;
  FUN_0040fe20(&stack0xffffffb0,&stack0xffffffb0);
  iVar2 = 0;
  fStack_38 = fStack_3c * (float)fVar4 - fStack_40 * fStack_48;
  piStack_34 = (int *)(fStack_48 * fStack_44 - fStack_3c * fVar1);
  fStack_30 = fStack_40 * fVar1 - fStack_44 * (float)fVar4;
  pfVar5 = &fStack_38;
  fStack_2c = fStack_38;
  piStack_28 = piStack_34;
  fStack_24 = fStack_30;
  (**(code **)(**(int **)(param_1 + 200) + 0xa4))();
  fVar1 = -(fStack_38 * *(float *)(*(int *)(param_1 + 0xa4) + 0x60));
  fStack_68 = _DAT_0089096c;
  if ((fVar1 < _DAT_0089096c) && (fStack_68 = fVar1, fVar1 < _DAT_008aac20)) {
    fStack_68 = _DAT_008aac20;
  }
  (**(code **)(**(int **)(param_1 + 200) + 0xa0))(&pfStack_70,0);
  *piStack_28 = (int)pfVar5;
  piStack_28[1] = iVar2;
  piStack_28[2] = (int)pfStack_70;
  (**(code **)(**(int **)(param_1 + 200) + 0x94))(&DAT_008a2fb4);
  return;
}

