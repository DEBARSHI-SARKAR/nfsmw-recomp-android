/* speed.exe 0057fb50 FUN_0057fb50; analysis pseudocode, not buildable source.
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00452430 FUN_00452430
 * calls 0045a8a0 FUN_0045a8a0
 * calls 00564d80 FUN_00564d80
 * calls 0045a430 FUN_0045a430
 * calls 0045beb0 FUN_0045beb0
 */

int FUN_0057fb50(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051e1a0(0xeec2271a,0,0);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar4 = 0;
  uVar5 = *(int *)(DAT_0091cf90 + 0x10) + 0x414;
  FUN_0045beb0(local_18 + 0xc);
  FUN_00564d80(&local_40,0,0);
  local_4._0_1_ = 2;
  iVar1 = FUN_00452430();
  iVar2 = 0;
  while ((piVar3 = (int *)((199 < iVar2) - 1 & uVar5), *piVar3 == -1 || (piVar3[2] != iVar1))) {
    iVar2 = iVar2 + 1;
    uVar5 = uVar5 + 0x14;
    if (199 < iVar2) {
LAB_0057fc08:
      local_4._0_1_ = 1;
      FUN_0045a430();
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_38 != 0) {
        FUN_0045a8a0();
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return iVar4;
    }
  }
  iVar4 = *piVar3;
  goto LAB_0057fc08;
}

