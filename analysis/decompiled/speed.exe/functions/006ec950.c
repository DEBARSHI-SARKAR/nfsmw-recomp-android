/* speed.exe 006ec950 FUN_006ec950; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 * calls 0040feb0 FUN_0040feb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_006ec950(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  float fVar3;
  float10 fVar4;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *param_1 - *param_2;
  local_c = param_1[1] - param_2[1];
  local_8 = param_1[2] - param_2[2];
  fVar4 = (float10)FUN_005c5e80(local_10 * local_10 + local_8 * local_8 + local_c * local_c);
  fVar1 = (float)fVar4;
  fVar2 = param_1[0x28] + param_2[0x28];
  if (fVar1 == _DAT_00890968) {
    param_3[0x20] = 0.0;
    param_3[0x21] = -1.0;
    param_3[0x22] = 0.0;
    fVar3 = *param_1;
    param_3[0x1c] = fVar3;
    param_3[0x1c] = param_1[0x28] + param_1[1];
    param_3[0x1c] = param_1[2];
    param_3[0x24] = -param_1[0x28];
  }
  else {
    fVar3 = (float)CONCAT22(extraout_var,
                            (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                            | (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 >= fVar2) goto LAB_006ecaa5;
    fVar3 = (float)FUN_0040feb0(&local_10,param_3 + 0x20);
    param_3[0x24] = fVar1 - fVar2;
    fVar1 = (fVar1 - fVar2) + param_2[0x28];
    param_3[0x1c] = fVar1 * param_3[0x20] + *param_2;
    param_3[0x1d] = fVar1 * param_3[0x21] + param_2[1];
    param_3[0x1e] = fVar1 * param_3[0x22] + param_2[2];
  }
  if (param_1 == param_3) {
    param_3[0x20] = param_3[0x20] * _DAT_00890da8;
    param_3[0x21] = param_3[0x21] * _DAT_00890da8;
    param_3[0x22] = param_3[0x22] * _DAT_00890da8;
  }
LAB_006ecaa5:
  return (uint)fVar3 & 0xffffff00;
}

