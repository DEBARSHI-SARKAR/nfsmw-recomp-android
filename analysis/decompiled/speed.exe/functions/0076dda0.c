/* speed.exe 0076dda0 FUN_0076dda0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

void FUN_0076dda0(ushort *param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)((uint)param_1[1] * 0x20 + DAT_009b38bc);
  pfVar1 = (float *)((uint)*param_1 * 0x20 + DAT_009b38bc);
  local_c = *pfVar2 - *pfVar1;
  local_8 = pfVar2[1] - pfVar1[1];
  local_4 = pfVar2[2] - pfVar1[2];
  FUN_0040fe20(&local_c,param_2,local_c,local_8,local_4);
  return;
}

