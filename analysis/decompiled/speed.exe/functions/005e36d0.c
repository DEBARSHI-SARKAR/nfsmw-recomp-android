/* speed.exe 005e36d0 FUN_005e36d0; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 005e2580 FUN_005e2580
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 * calls 00452430 FUN_00452430
 */

undefined4 FUN_005e36d0(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(0xd1e66b67,0,0);
  local_4 = 0;
  pcVar1 = (char *)FUN_00454810(0x3e9156ca,0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)FUN_006269b0(1);
  }
  if (*pcVar1 == '\0') {
    iVar2 = FUN_004546a0();
    while (iVar2 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = FUN_00455fd0(0x5cea9d46,iVar2,0,0);
      FUN_00452380(uVar3,uVar5,uVar6);
      local_4._0_1_ = 1;
      if (local_2c == 0) {
        local_2c = FUN_006269b0(8);
      }
      local_4._0_1_ = 2;
      iVar2 = FUN_00452430();
      iVar4 = FUN_00452430();
      if (iVar2 == iVar4) {
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0045a430();
        local_4 = 0xffffffff;
        FUN_0045a430();
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = FUN_004546a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0045a430();
    }
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 0;
}

