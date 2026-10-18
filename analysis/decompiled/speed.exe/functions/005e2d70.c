/* speed.exe 005e2d70 FUN_005e2d70; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 * calls 00452430 FUN_00452430
 */

undefined4 FUN_005e2d70(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874fe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004546a0();
  while( true ) {
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = FUN_00455fd0(0x5cea9d46,iVar1,0,0);
    FUN_00452380(uVar2,uVar5,uVar6);
    local_4 = 0;
    if (local_18 == 0) {
      local_18 = FUN_006269b0(8);
    }
    local_4 = 1;
    piVar3 = (int *)FUN_00454810(0xa0697302,0);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)FUN_006269b0(4);
    }
    iVar1 = *piVar3;
    iVar4 = FUN_00452430();
    if (iVar1 == iVar4) break;
    iVar1 = FUN_004546a0();
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return 1;
}

