/* speed.exe 00681410 FUN_00681410; analysis pseudocode, not buildable source.
 * calls 00501480 FUN_00501480
 * calls 00681340 FUN_00681340
 * calls 0045a430 FUN_0045a430
 * calls 005cc240 FUN_005cc240
 * calls 00506af0 FUN_00506af0
 * calls 005d29d0 FUN_005d29d0
 * calls 0072e9b0 FUN_0072e9b0
 * calls 00460bc0 FUN_00460bc0
 * calls 006708b0 FUN_006708b0
 * calls 0067baa0 FUN_0067baa0
 */

undefined4 FUN_00681410(void)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b522;
  local_c = ExceptionList;
  if ((DAT_0092d944 < 0x8f9) && (DAT_0092c670 < 0xd)) {
    ExceptionList = &local_c;
    FUN_00460bc0();
    FUN_005cc240();
    FUN_0072e9b0();
    iVar1 = FUN_00681340();
    if ((iVar1 != 0) && ((0 < *(int *)(iVar1 + 4) && (iVar1 != -0x10)))) {
      FUN_00506af0();
      local_4 = 0;
      FUN_006708b0();
      local_4._0_1_ = 1;
      iVar1 = FUN_005d29d0();
      local_4._0_1_ = 2;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0067baa0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045a430();
      local_4 = 0xffffffff;
      FUN_00501480();
      ExceptionList = local_c;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}

