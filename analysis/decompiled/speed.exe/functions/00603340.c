/* speed.exe 00603340 FUN_00603340; analysis pseudocode, not buildable source.
 * calls 00456b00 FUN_00456b00
 * calls 00602590 FUN_00602590
 * calls 00456b20 FUN_00456b20
 * calls 00452380 FUN_00452380
 * calls 006269b0 FUN_006269b0
 * calls 0045a430 FUN_0045a430
 * calls 005e36d0 FUN_005e36d0
 * calls 00455fd0 FUN_00455fd0
 */

int __thiscall FUN_00603340(int param_1,int param_2)

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
  puStack_8 = &LAB_00876287;
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
    cVar1 = FUN_005e36d0(local_20);
    if (cVar1 != '\0') {
      if (param_2 != 0) {
        local_4._0_1_ = 2;
        if (param_2 + iVar4 * 0x14 != 0) {
          FUN_00602590(iVar2,iVar4 * 0x30 + *(int *)(param_1 + 8));
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

