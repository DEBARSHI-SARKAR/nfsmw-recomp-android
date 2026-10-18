/* speed.exe 00704130 FUN_00704130; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 00456b20 FUN_00456b20
 * calls 00456b00 FUN_00456b00
 * calls 006269b0 FUN_006269b0
 * calls 004cb220 FUN_004cb220
 * calls 004ba9b0 FUN_004ba9b0
 * calls 004cb270 FUN_004cb270
 * calls 00452380 FUN_00452380
 * calls 0045a430 FUN_0045a430
 * calls 00455bc0 FUN_00455bc0
 */

void FUN_00704130(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f990;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_009933fc == 0) {
    ExceptionList = &local_c;
    FUN_00455bc0(0xc593dd47);
    iVar1 = FUN_00456b00();
    while (iVar1 != 0) {
      uVar5 = 0;
      uVar4 = 0;
      uVar2 = FUN_00455fd0(0xc593dd47,iVar1,0,0);
      FUN_00452380(uVar2,uVar4,uVar5);
      local_4 = 0;
      if (local_18 == 0) {
        local_18 = FUN_006269b0(0x1c);
      }
      local_4 = 1;
      FUN_004cb220(iVar1,*(undefined4 *)(local_18 + 4));
      iVar1 = FUN_00456b20(iVar1);
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
  }
  uVar3 = 0;
  if (DAT_009933fc != 0) {
    do {
      iVar1 = DAT_009933f4 + uVar3 * 8;
      FUN_004ba9b0(*(undefined4 *)(DAT_009933f4 + uVar3 * 8));
      FUN_004cb270(*(undefined4 *)(iVar1 + 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_009933fc);
  }
  ExceptionList = local_c;
  return;
}

