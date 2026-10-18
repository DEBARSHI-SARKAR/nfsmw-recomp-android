/* speed.exe 004cb2d0 FUN_004cb2d0; analysis pseudocode, not buildable source.
 * calls 00456b20 FUN_00456b20
 * calls 006269b0 FUN_006269b0
 * calls 00452380 FUN_00452380
 * calls 0045a430 FUN_0045a430
 * calls 004c7140 FUN_004c7140
 * calls 004ba9e0 FUN_004ba9e0
 * calls 00455bc0 FUN_00455bc0
 * calls 004c1020 FUN_004c1020
 * calls 00456b00 FUN_00456b00
 * calls 00455fd0 FUN_00455fd0
 */

void __fastcall FUN_004cb2d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c220;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00455bc0(0xc593dd47);
  iVar1 = FUN_00456b00();
  if (iVar1 != 0) {
    local_30 = &local_2c;
    do {
      uVar4 = 0;
      uVar3 = 0;
      local_2c = 0x108;
      local_28 = 0;
      local_24 = 0;
      local_22 = 0;
      uVar2 = FUN_00455fd0(0xc593dd47,iVar1,0,0);
      FUN_00452380(uVar2,uVar3,uVar4);
      local_4 = 0;
      if (local_18 == 0) {
        local_18 = FUN_006269b0(0x1c);
      }
      local_2c = *(undefined4 *)(local_18 + 4);
      local_4 = 1;
      uVar2 = FUN_004c7140(*(int *)(param_1 + 4),
                           *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 0xc,&local_2c,0);
      FUN_004c1020(uVar2,1,&local_30);
      iVar1 = FUN_00456b20(iVar1);
      local_4 = 0xffffffff;
      FUN_0045a430();
    } while (iVar1 != 0);
  }
  FUN_004ba9e0();
  ExceptionList = local_c;
  return;
}

