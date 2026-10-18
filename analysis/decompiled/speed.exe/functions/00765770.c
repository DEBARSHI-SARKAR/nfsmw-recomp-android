/* speed.exe 00765770 FUN_00765770; analysis pseudocode, not buildable source.
 * calls 007647e0 FUN_007647e0
 * calls 00404390 FUN_00404390
 * calls 005d0bf0 FUN_005d0bf0
 */

void FUN_00765770(ushort *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_007647e0(&local_18);
  FUN_00404390(&local_c);
  pfVar2 = (float *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  pfVar1 = (float *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  local_18 = *pfVar2 + local_18;
  local_14 = pfVar2[1] + local_14;
  local_10 = pfVar2[2] + local_10;
  local_c = *pfVar1 + local_c;
  local_8 = pfVar1[1] + local_8;
  local_4 = pfVar1[2] + local_4;
  FUN_005d0bf0(pfVar1,&local_c,pfVar2,&local_18);
  return;
}

