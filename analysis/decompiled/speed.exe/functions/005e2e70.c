/* speed.exe 005e2e70 FUN_005e2e70; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 005e2580 FUN_005e2580
 * calls 006269b0 FUN_006269b0
 * calls 00452430 FUN_00452430
 * calls 00460d20 FUN_00460d20
 */

undefined4 __fastcall FUN_005e2e70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_2c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875000;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00454810(0x918c796e,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  iVar3 = *piVar1;
  iVar2 = FUN_00452430();
  if (iVar3 != iVar2) {
    ExceptionList = local_c;
    return 0;
  }
  piVar1 = (int *)FUN_00454810(0x857fe432,0);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_006269b0(4);
  }
  iVar3 = *piVar1;
  iVar2 = FUN_00452430();
  if (iVar3 != iVar2) {
    FUN_005e2580(*piVar1,0,0);
    local_4 = 0;
    iVar3 = FUN_00460d20(*local_2c,**(undefined4 **)(param_1 + 0xc));
    if (iVar3 != 0) {
      iVar3 = FUN_00452430();
      while( true ) {
        if (iVar3 == 0) {
          local_4 = 0xffffffff;
          FUN_0045a430();
          ExceptionList = local_c;
          return 0;
        }
        if (iVar3 == *piVar1) break;
        FUN_005e2580(iVar3,0,0);
        local_4._0_1_ = 1;
        iVar3 = FUN_004546a0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0045a430();
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return 1;
}

