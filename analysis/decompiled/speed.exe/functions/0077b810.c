/* speed.exe 0077b810 FUN_0077b810; analysis pseudocode, not buildable source.
 * calls 0077b720 FUN_0077b720
 * calls 005d5ed0 FUN_005d5ed0
 * calls 00765770 FUN_00765770
 * calls 0076dda0 FUN_0076dda0
 * calls 005d2d30 FUN_005d2d30
 * calls 007c5df0 _atexit
 */

void FUN_0077b810(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881c0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0077b720(param_1,param_2,param_3);
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    if ((DAT_009b3c38 & 1) == 0) {
      DAT_009b3c38 = DAT_009b3c38 | 1;
      local_4 = 0;
      FUN_005d5ed0();
      _atexit((_func_4879 *)&LAB_0088eed0);
      local_4 = 0xffffffff;
    }
    FUN_00765770(param_1,&DAT_009b3bc8);
    FUN_005d2d30(param_2,&local_1c);
    *param_4 = local_1c;
    param_4[1] = local_18;
    param_4[2] = local_14;
    ExceptionList = local_c;
    return;
  }
  FUN_0076dda0(param_1,param_4);
  ExceptionList = local_c;
  return;
}

