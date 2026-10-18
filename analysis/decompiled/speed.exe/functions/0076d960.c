/* speed.exe 0076d960 FUN_0076d960; analysis pseudocode, not buildable source.
 * calls 00765450 FUN_00765450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0076d960(undefined4 param_1,int param_2,float param_3)

{
  float10 fVar1;
  int local_8;
  int local_4;
  
  FUN_00765450(param_1,&local_8);
  fVar1 = (float10)((*(int *)(local_8 + 4 + param_2 * 4) << 0xe) >> 0x12) * (float10)_DAT_009b3a68;
  return ((float10)((*(int *)(local_4 + 4 + param_2 * 4) << 0xe) >> 0x12) * (float10)_DAT_009b3a68 -
         fVar1) * (float10)param_3 + fVar1;
}

