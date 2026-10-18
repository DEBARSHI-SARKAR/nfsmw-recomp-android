/* speed.exe 0046b6b0 FUN_0046b6b0; analysis pseudocode, not buildable source.
 * calls 0045ed10 thunk_FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046b6b0(int *param_1,undefined4 param_2,float param_3)

{
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  if (*param_1 != 0) {
    local_28 = _DAT_0089096c - param_3;
    local_2c = local_28 * local_28;
    local_24 = 0x3f800000;
    local_30 = local_28 * local_2c;
    thunk_FUN_006bd920(local_20,param_1 + 4,&local_30);
    thunk_FUN_006bd920(param_2,*param_1,local_20);
  }
  return;
}

