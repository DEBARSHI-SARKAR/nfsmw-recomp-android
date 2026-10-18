/* speed.exe 007659c0 FUN_007659c0; analysis pseudocode, not buildable source.
 * calls 00404390 FUN_00404390
 * calls 007647e0 FUN_007647e0
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007659c0(int param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  ushort *puVar3;
  float10 fVar4;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18 [2];
  float local_10;
  float local_c [2];
  float local_4;
  
  puVar3 = (ushort *)(param_1 * 0x16 + DAT_009b38c0);
  local_30[0] = (float)((uint)*puVar3 * 0x20 + DAT_009b38bc);
  local_30[1] = (float)((uint)puVar3[1] * 0x20 + DAT_009b38bc);
  pfVar1 = (float *)local_30[param_2];
  pfVar2 = (float *)local_30[param_2 ^ 1];
  if ((param_2 ^ 1) == 0) {
    FUN_00404390(local_c);
  }
  else {
    FUN_007647e0(local_c);
  }
  if (param_2 == 0) {
    FUN_00404390(local_18);
  }
  else {
    FUN_007647e0(local_18);
  }
  local_30[2] = *pfVar2;
  local_30[3] = pfVar2[2];
  local_38 = -local_18[0];
  local_20 = *pfVar1;
  local_1c = pfVar1[2];
  local_34 = -local_10;
  local_30[0] = local_38 + local_c[0];
  local_30[1] = local_34 + local_4;
  FUN_0045f3c0(local_30,local_30);
  FUN_0045f3c0(&local_38,&local_38);
  fVar4 = (float10)local_30[0] * (float10)local_38 + (float10)local_30[1] * (float10)local_34;
  if (fVar4 < (float10)_DAT_00890cd4) {
    fVar4 = (float10)_DAT_00890cd4;
  }
  return ((float10)local_34 * ((float10)local_30[2] - (float10)local_20) -
         ((float10)local_30[3] - (float10)local_1c) * (float10)local_38) -
         (((float10)local_30[2] - (float10)local_20) * (float10)local_38 +
         ((float10)local_30[3] - (float10)local_1c) * (float10)local_34) *
         (((float10)local_34 * (float10)local_30[0] - (float10)local_30[1] * (float10)local_38) /
         fVar4);
}

