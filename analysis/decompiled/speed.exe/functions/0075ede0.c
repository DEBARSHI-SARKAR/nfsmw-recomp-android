/* speed.exe 0075ede0 FUN_0075ede0; analysis pseudocode, not buildable source.
 * calls 0075ec00 FUN_0075ec00
 * calls 004546a0 FUN_004546a0
 * calls 00456b20 FUN_00456b20
 * calls 00455bc0 FUN_00455bc0
 * calls 00455fd0 FUN_00455fd0
 * calls 006269b0 FUN_006269b0
 * calls 00453fc0 FUN_00453fc0
 * calls 0075da90 FUN_0075da90
 * calls 0045a430 FUN_0045a430
 * calls 00452380 FUN_00452380
 * calls 00456b00 FUN_00456b00
 */

void FUN_0075ede0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24 [3];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008815c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00455bc0(0x4a97ec8f);
  iVar1 = FUN_00456b00();
  uVar2 = FUN_00453fc0();
  FUN_0075da90(uVar2);
  while (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = FUN_00455fd0(0x4a97ec8f,iVar1,0,0);
    FUN_00452380(uVar2,uVar4,uVar5);
    local_4 = 0;
    if (local_18 == 0) {
      local_18 = FUN_006269b0(0x50);
    }
    local_4 = 1;
    if ((*(int *)(local_18 + 0x18) != DAT_0091ddbc) &&
       (iVar3 = FUN_004546a0(), iVar3 == -0x595436df)) {
      local_24[0] = *(undefined4 *)(local_18 + 0x24);
      FUN_0075ec00(local_24);
    }
    iVar1 = FUN_00456b20(iVar1);
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return;
}

