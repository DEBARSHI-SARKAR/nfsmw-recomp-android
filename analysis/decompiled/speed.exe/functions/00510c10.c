/* speed.exe 00510c10 FUN_00510c10; analysis pseudocode, not buildable source.
 * calls 005fcea0 FUN_005fcea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00510c10(int param_1,float *param_2,float *param_3)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005fcea0(&local_10,&local_8);
    *param_2 = local_10 - _DAT_00899e64;
    param_2[1] = local_c + _DAT_00899e64;
    *param_3 = local_8 + _DAT_00899e64;
    param_3[1] = local_4 - _DAT_00899e64;
  }
  return;
}

