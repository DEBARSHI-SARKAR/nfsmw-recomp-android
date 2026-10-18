/* speed.exe 007a8fe0 FUN_007a8fe0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 0051e1a0 FUN_0051e1a0
 * calls 0056d0d0 FUN_0056d0d0
 * calls 00452430 FUN_00452430
 */

undefined4 FUN_007a8fe0(undefined4 param_1)

{
  undefined4 uVar1;
  int local_30;
  undefined4 local_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008829e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051e1a0(param_1,0,0);
  local_4 = 0;
  if (local_30 != 0) {
    FUN_0056d0d0(local_2c,0,0);
    local_4._0_1_ = 1;
    uVar1 = FUN_00452430();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0045a430();
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0xf907e767;
}

