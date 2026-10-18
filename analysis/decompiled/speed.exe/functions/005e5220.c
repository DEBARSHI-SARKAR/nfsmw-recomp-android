/* speed.exe 005e5220 FUN_005e5220; analysis pseudocode, not buildable source.
 * calls 004546a0 FUN_004546a0
 * calls 00455fd0 FUN_00455fd0
 * calls 0045a430 FUN_0045a430
 * calls 00454810 FUN_00454810
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 * calls 00452430 FUN_00452430
 */

undefined4 FUN_005e5220(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008751b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = (char *)FUN_00454810(0x3e9156ca,0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)FUN_006269b0(1);
  }
  if (*pcVar1 == '\0') {
    iVar2 = FUN_004546a0();
    while( true ) {
      if (iVar2 == 0) {
        ExceptionList = local_c;
        return 0;
      }
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = FUN_00455fd0(0x5cea9d46,iVar2,0,0);
      FUN_00452380(uVar3,uVar5,uVar6);
      local_4 = 0;
      if (local_18 == 0) {
        local_18 = FUN_006269b0(8);
      }
      local_4 = 1;
      iVar2 = FUN_00452430();
      iVar4 = FUN_00452430();
      if (iVar4 == iVar2) break;
      iVar2 = FUN_004546a0();
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = local_c;
  return 0;
}

