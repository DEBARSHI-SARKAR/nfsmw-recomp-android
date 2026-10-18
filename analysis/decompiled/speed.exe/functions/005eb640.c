/* speed.exe 005eb640 FUN_005eb640; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 005e3800 FUN_005e3800
 * calls 005e9be0 FUN_005e9be0
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 00456b20 FUN_00456b20
 * calls 006269b0 FUN_006269b0
 * calls 00456b00 FUN_00456b00
 */

int FUN_005eb640(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_20 [8];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008754f7;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_00456b00();
  while (iVar2 != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar3 = FUN_00455fd0(0x5cea9d46,iVar2,0,0);
    FUN_00452380(uVar3,uVar5,uVar6);
    local_4 = 0;
    if (local_18 == 0) {
      local_18 = FUN_006269b0(8);
    }
    local_4 = 1;
    cVar1 = FUN_005e3800(local_20);
    if (cVar1 != '\0') {
      if (param_1 != 0) {
        local_4._0_1_ = 2;
        if (iVar4 * 0x1c + param_1 != 0) {
          FUN_005e9be0(iVar2);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
      }
      iVar4 = iVar4 + 1;
    }
    iVar2 = FUN_00456b20(iVar2);
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return iVar4;
}

