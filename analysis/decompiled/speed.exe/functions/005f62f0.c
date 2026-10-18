/* speed.exe 005f62f0 FUN_005f62f0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 005f5300 FUN_005f5300
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 005e5f90 FUN_005e5f90
 * calls 00455fd0 FUN_00455fd0
 * calls 00456b20 FUN_00456b20
 * calls 006269b0 FUN_006269b0
 * calls 00456b00 FUN_00456b00
 */

void __fastcall FUN_005f62f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_34 [2];
  int local_2c;
  int local_28;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875c00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e5f90(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 4));
  *(int *)(*(int *)(param_1 + 0x9c) + 4) = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(int *)(*(int *)(param_1 + 0x9c) + 8) = *(int *)(param_1 + 0x9c);
  iVar1 = FUN_00456b00();
  if (iVar1 != 0) {
    local_28 = -0x40800000;
    local_2c = -0x40800000;
    local_34[0] = iVar1;
    do {
      uVar7 = 0;
      uVar6 = 0;
      uVar2 = FUN_00455fd0(0xe4c3d904,iVar1,0,0);
      FUN_00452380(uVar2,uVar6,uVar7);
      local_4 = 0;
      if (local_18 == 0) {
        local_18 = FUN_006269b0(8);
      }
      local_4 = 1;
      uVar5 = (uint)(*(int *)(local_18 + 4) != 2);
      pcVar3 = (char *)FUN_00454810(0xab4a196f,0);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)FUN_006269b0(1);
      }
      if (*pcVar3 != '\0') {
        uVar5 = uVar5 | 2;
      }
      piVar4 = (int *)FUN_005f5300(local_34);
      *piVar4 = iVar1;
      piVar4[1] = local_2c;
      piVar4[2] = local_28;
      piVar4[3] = uVar5;
      iVar1 = FUN_00456b20(iVar1);
      local_4 = 0xffffffff;
      local_34[0] = iVar1;
      FUN_0045a430();
    } while (iVar1 != 0);
  }
  ExceptionList = local_c;
  return;
}

