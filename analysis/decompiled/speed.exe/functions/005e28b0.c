/* speed.exe 005e28b0 FUN_005e28b0; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a430 FUN_0045a430
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 */

undefined4 FUN_005e28b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00874fc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004546a0();
  while( true ) {
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return 0;
    }
    if (iVar1 == param_1) break;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = FUN_00455fd0(0x5cea9d46,iVar1,0,0);
    FUN_00452380(uVar2,uVar3,uVar4);
    local_4 = 0;
    if (local_18 == 0) {
      local_18 = FUN_006269b0(8);
    }
    local_4 = 1;
    iVar1 = FUN_004546a0();
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return 1;
}

