/* speed.exe 0064b770 FUN_0064b770; analysis pseudocode, not buildable source.
 * calls 00730d20 FUN_00730d20
 * calls 00621e80 FUN_00621e80
 * calls 006e8d20 FUN_006e8d20
 * calls 00516ee0 FUN_00516ee0
 * calls 0062c9a0 FUN_0062c9a0
 * calls 00627400 FUN_00627400
 * calls 00516f00 FUN_00516f00
 */

void __fastcall FUN_0064b770(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00879ffe;
  local_c = ExceptionList;
  if (DAT_009258bc == '\0') {
    ExceptionList = &local_c;
    iVar2 = FUN_006e8d20();
    if (iVar2 == 3) {
      cVar1 = FUN_00730d20(param_1);
      if (cVar1 != '\0') {
        DAT_009258bc = '\x01';
        FUN_00516ee0("TrackStreamerLoadingBar");
        iVar2 = FUN_00627400(0xc);
        local_4 = 0;
        if (iVar2 != 0) {
          FUN_0062c9a0(1);
          ExceptionList = local_c;
          return;
        }
      }
    }
  }
  else {
    ExceptionList = &local_c;
    cVar1 = FUN_00730d20(param_1);
    if (cVar1 == '\0') {
      DAT_009258bc = cVar1;
      iVar2 = FUN_00627400(0xc);
      local_4 = 1;
      if (iVar2 != 0) {
        FUN_00621e80(0x16a259);
      }
      local_4 = 0xffffffff;
      FUN_00516f00("TrackStreamerLoadingBar",iVar2);
    }
  }
  ExceptionList = local_c;
  return;
}

