/* speed.exe 007678b0 FUN_007678b0; analysis pseudocode, not buildable source.
 * calls 007676c0 FUN_007676c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007678b0(int *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined1 local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)*param_1;
  local_30 = *pfVar2;
  local_2c = pfVar2[1];
  local_28 = pfVar2[2];
  puVar1 = (undefined4 *)param_1[1];
  local_24 = *puVar1;
  local_20 = puVar1[1];
  local_1c = puVar1[2];
  puVar1 = (undefined4 *)param_1[2];
  local_18 = *puVar1;
  local_14 = puVar1[1];
  local_10 = puVar1[2];
  pfVar2 = (float *)param_1[3];
  local_c = *pfVar2;
  local_8 = pfVar2[1];
  local_4 = pfVar2[2];
  pfVar2 = (float *)FUN_007676c0(local_3c,&local_30);
  if (pfVar2[1] == _DAT_00890968) {
    return ABS((float10)local_8 - (float10)local_2c);
  }
  return ABS((float10)local_8 -
             ((float10)local_2c -
             (((float10)local_c - (float10)local_30) * (float10)*pfVar2 +
             ((float10)local_4 - (float10)local_28) * (float10)pfVar2[2]) / (float10)pfVar2[1]));
}

