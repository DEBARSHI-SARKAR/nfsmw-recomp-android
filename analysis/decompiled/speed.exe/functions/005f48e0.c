/* speed.exe 005f48e0 FUN_005f48e0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 004546c0 FUN_004546c0
 * calls 00452430 FUN_00452430
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 * calls 005f48e0 FUN_005f48e0
 * calls 004546a0 FUN_004546a0
 * calls 00452d40 FUN_00452d40
 * calls 00452bd0 FUN_00452bd0
 * calls 005e69d0 FUN_005e69d0
 * calls 005f0100 FUN_005f0100
 * calls 00455fd0 FUN_00455fd0
 * calls 006269b0 FUN_006269b0
 */

void FUN_005f48e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_20 [8];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_004546a0();
  iVar1 = param_2;
  do {
    if (iVar2 == 0) {
LAB_005f49b4:
      uVar7 = 0;
      FUN_004546c0(local_34,0x916e0e78);
      local_4 = 2;
      iVar2 = FUN_00452d40();
      local_4 = 0xffffffff;
      FUN_00452bd0();
      if (iVar2 != 0) {
        do {
          puVar5 = (undefined4 *)FUN_00454810(0x916e0e78,uVar7);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)FUN_006269b0(4);
          }
          uVar9 = 0;
          uVar8 = 0;
          uVar3 = FUN_00455fd0(0x5cea9d46,*puVar5,0,0);
          FUN_00452380(uVar3,uVar8,uVar9);
          local_4 = 3;
          if (local_18 == 0) {
            local_18 = FUN_006269b0(8);
          }
          local_4 = 4;
          FUN_005f48e0(local_20,iVar1,param_3);
          local_4 = 0xffffffff;
          FUN_0045a430();
          uVar7 = uVar7 + 1;
          FUN_004546c0(local_34,0x916e0e78);
          local_4 = 2;
          uVar6 = FUN_00452d40();
          local_4 = 0xffffffff;
          FUN_00452bd0();
        } while (uVar7 < uVar6);
      }
      ExceptionList = local_c;
      return;
    }
    if (iVar2 == param_3) {
      param_1 = FUN_00452430();
      iVar2 = *(int *)(iVar1 + 4);
      iVar4 = FUN_005e69d0(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
      FUN_005f0100(1);
      *(int *)(iVar2 + 4) = iVar4;
      **(int **)(iVar4 + 4) = iVar4;
      goto LAB_005f49b4;
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar3 = FUN_00455fd0(0x5cea9d46,iVar2,0,0);
    FUN_00452380(uVar3,uVar8,uVar9);
    local_4 = 0;
    if (local_2c == 0) {
      local_2c = FUN_006269b0(8);
    }
    local_4 = 1;
    iVar2 = FUN_004546a0();
    local_4 = 0xffffffff;
    FUN_0045a430();
  } while( true );
}

