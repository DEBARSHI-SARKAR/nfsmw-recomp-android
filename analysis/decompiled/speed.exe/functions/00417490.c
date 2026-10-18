/* speed.exe 00417490 FUN_00417490; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00410180 FUN_00410180
 * calls 00401c10 FUN_00401c10
 * calls 00401d10 FUN_00401d10
 * calls 00754290 FUN_00754290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall
FUN_00417490(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  float10 extraout_ST0;
  char cStack_5e;
  char cStack_5d;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  if (DAT_0090d621 != '\x01') {
    local_38 = *param_4;
    local_34 = param_4[1];
    local_30 = param_4[2];
    (**(code **)(*(int *)(param_1 + 0x7a4) + 0x28))(param_5);
    local_30 = *param_3;
    fStack_2c = param_3[1];
    fStack_58 = param_3[2];
    fStack_54 = -local_30;
    fStack_28 = fStack_58;
    fVar3 = (float10)FUN_00754290(&fStack_58,&fStack_24,&cStack_5d);
    fStack_5c = (float)fVar3;
    if ((cStack_5d != '\0') && (fStack_2c < fStack_5c)) {
      fStack_48 = local_30 - *param_2;
      fStack_44 = fStack_5c - param_2[1];
      fStack_40 = fStack_28 - param_2[2];
      FUN_0040fe20(&fStack_48,&fStack_48);
      local_30 = -fStack_20;
      fVar1 = fStack_40 * local_30 - fStack_48 * fStack_24;
      if (fVar1 < _DAT_00890968) {
        fVar1 = -fVar1;
      }
      param_6[1] = fStack_44;
      fStack_28 = fVar1 * fStack_24 * _DAT_00891054;
      *param_6 = fStack_48 + local_30 * fVar1 * _DAT_00891054;
      param_6[2] = fStack_40 + fStack_28;
    }
    fStack_4c = -fStack_3c;
    fStack_50 = local_34;
    FUN_00754290(&fStack_50,&fStack_24,&cStack_5e);
    fStack_5c = (float)extraout_ST0;
    if ((cStack_5e != '\0') && (local_38 < fStack_5c)) {
      fStack_48 = fStack_3c - *param_2;
      fStack_44 = fStack_5c - param_2[1];
      fStack_40 = local_34 - param_2[2];
      local_38 = fStack_5c;
      fVar3 = (float10)FUN_00410180(&fStack_48);
      fStack_5c = (float)fVar3;
      local_30 = *param_5 - *param_2;
      fStack_2c = param_5[1] - param_2[1];
      fStack_28 = param_5[2] - param_2[2];
      fVar3 = (float10)FUN_00410180(&local_30);
      if (_DAT_00890864 < fStack_5c) {
        FUN_00401c10(&fStack_48,(float)(fVar3 / (float10)fStack_5c),param_2,&fStack_3c);
      }
      if (param_5[1] < local_38) {
        param_5[1] = local_38;
      }
      FUN_0040fe20(&fStack_48,&fStack_48);
      local_30 = -fStack_20;
      fVar3 = (float10)FUN_00401d10(fStack_40 * local_30 - fStack_48 * fStack_24);
      fStack_28 = (float)(fVar3 * (float10)fStack_24 * (float10)_DAT_008906a0);
      fStack_48 = (float)((float10)fStack_48 + (float10)local_30 * fVar3 * (float10)_DAT_008906a0);
      fStack_40 = fStack_40 + fStack_28;
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
      fVar3 = (float10)(**(code **)(*piVar2 + 0x2c))();
      fStack_48 = (float)((float10)fStack_48 * fVar3);
      fStack_44 = (float)((float10)fStack_44 * fVar3);
      fStack_40 = (float)(fVar3 * (float10)fStack_40);
      (**(code **)(*piVar2 + 0x60))(&fStack_48);
    }
    return cStack_5e;
  }
  return '\0';
}

