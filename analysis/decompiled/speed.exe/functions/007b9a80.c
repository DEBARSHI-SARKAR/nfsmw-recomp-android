/* speed.exe 007b9a80 FUN_007b9a80; analysis pseudocode, not buildable source.
 * calls 0055afa0 FUN_0055afa0
 * calls 00586290 FUN_00586290
 * calls 005251a0 FUN_005251a0
 * calls 00548440 FUN_00548440
 * calls 0045da30 FUN_0045da30
 * calls 00576470 FUN_00576470
 * calls 00525220 FUN_00525220
 * calls 00516c90 FUN_00516c90
 * calls 007b3c00 FUN_007b3c00
 * calls 00576b50 FUN_00576b50
 * calls 007a77f0 FUN_007a77f0
 */

undefined4 * __thiscall FUN_007b9a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883533;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008b7df8;
  param_1[0xb] = 0;
  local_4 = 0;
  FUN_0055afa0(*param_2,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_1c[0] = -0x4255a86c;
  local_1c[1] = 0xe69d4f7c;
  local_1c[2] = 0x73272ed2;
  local_1c[3] = 0xc61c8d3a;
  param_2 = (undefined4 *)0x0;
  do {
    iVar4 = local_1c[(int)param_2];
    iVar8 = 0;
    do {
      local_20 = local_20 & 0xffffff00;
      local_28 = 0;
      local_24 = 0;
      FUN_00576b50(iVar8,&local_28,&local_24);
      if (local_28 != 0) {
        iVar6 = 0;
        piVar3 = &DAT_00905ee0;
        do {
          if (*piVar3 == local_28) {
            puVar7 = &DAT_00905ee0 + iVar6 * 7;
            goto LAB_007b9b45;
          }
          piVar3 = piVar3 + 7;
          iVar6 = iVar6 + 1;
        } while ((int)piVar3 < 0x90612c);
        puVar7 = (undefined4 *)0x0;
LAB_007b9b45:
        if (iVar4 == puVar7[2]) {
          piVar3 = param_1 + param_1[0xb] * 3 + 0x1d;
          *piVar3 = local_28;
          piVar3[1] = local_24;
          piVar3[2] = local_20;
          param_1[0xb] = param_1[0xb] + 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 6);
    param_2 = (undefined4 *)((int)param_2 + 1);
    if (3 < (int)param_2) {
      puVar7 = param_1 + 0x1d;
      param_2 = (undefined4 *)0x3;
      do {
        iVar4 = FUN_0045da30(3);
        uVar5 = *puVar7;
        local_24 = puVar7[1];
        local_20 = puVar7[2];
        puVar1 = param_1 + iVar4 * 3 + 0x1d;
        *puVar7 = *puVar1;
        puVar7[1] = puVar1[1];
        puVar7[2] = puVar1[2];
        *puVar1 = uVar5;
        puVar1[1] = local_24;
        puVar1[2] = local_20;
        puVar7 = puVar7 + 3;
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
      uVar5 = FUN_005251a0(param_1[4],0xc1f62308);
      param_1[0xc] = uVar5;
      uVar5 = FUN_005251a0(param_1[4],0xf5a2a087);
      param_1[0xd] = uVar5;
      uVar5 = FUN_005251a0(param_1[4],0x2cbe1dd0);
      param_1[0xe] = uVar5;
      FUN_00548440(*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) + 1,param_1[0xc],param_1[0xd],
                   uVar5);
      FUN_007a77f0();
      FUN_00525220(param_1[4],0xbdb541b3,0x9a375734);
      FUN_00525220(param_1[4],0x7603f3d5,0x9a375734);
      cVar2 = FUN_00576470(1);
      if (cVar2 != '\0') {
        FUN_00516c90(0x9f04347d,param_1[4],0);
      }
      cVar2 = FUN_00576470(2);
      if (cVar2 != '\0') {
        FUN_00516c90(0x5b032d25,param_1[4],0);
      }
      cVar2 = FUN_00576470(3);
      if (cVar2 != '\0') {
        FUN_00516c90(0x96b11f47,param_1[4],0);
      }
      FUN_007b3c00(0,0x7f8aaf09);
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}

