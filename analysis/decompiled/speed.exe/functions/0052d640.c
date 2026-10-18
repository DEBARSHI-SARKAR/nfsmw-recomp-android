/* speed.exe 0052d640 FUN_0052d640; analysis pseudocode, not buildable source.
 * calls 0056ecf0 FUN_0056ecf0
 * calls 0059bd30 FUN_0059bd30
 * calls 0056f180 FUN_0056f180
 * calls 00593880 FUN_00593880
 * calls 0056f120 FUN_0056f120
 * calls 005881c0 FUN_005881c0
 * calls 005252d0 FUN_005252d0
 * calls 00591160 FUN_00591160
 * calls 00652ad0 _malloc
 * calls 00573140 FUN_00573140
 * calls 00581cb0 FUN_00581cb0
 * calls 0056bc10 FUN_0056bc10
 * calls 00580ea0 FUN_00580ea0
 * calls 00593560 FUN_00593560
 */

void __fastcall FUN_0052d640(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_34;
  int local_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f494;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00593880();
  local_34 = 0;
  local_30 = 0;
  do {
    piVar5 = (int *)FUN_0056ecf0(local_30);
    if (((*piVar5 != -1) && (cVar4 = FUN_0056f180(0xf0002), cVar4 != '\0')) &&
       (iVar6 = FUN_0056f120(*(undefined1 *)((int)piVar5 + 0x11)), iVar6 != 0)) {
      uVar7 = FUN_00591160();
      uVar3 = *(undefined4 *)(iVar6 + 0x10);
      uVar8 = FUN_00581cb0();
      uVar9 = FUN_00580ea0(*piVar5,1);
      uVar1 = *(ushort *)(iVar6 + 0x14);
      uVar2 = *(ushort *)(iVar6 + 0x16);
      if (*(char *)(iVar6 + 4) == '\0') {
        iVar6 = (-(uint)(uVar2 != 0) & 0x4c997267) + 0xd3efe2e5;
      }
      else {
        iVar6 = 0x35e4e01f;
      }
      puVar10 = _malloc(0x34);
      local_4 = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        FUN_005881c0(0,0);
        puVar10[6] = uVar7;
        puVar10[8] = uVar3;
        *puVar10 = &PTR_FUN_0089c2d4;
        puVar10[7] = iVar6;
        puVar10[9] = uVar8;
        puVar10[10] = uVar9 & 0xffff;
        puVar10[0xb] = (uint)uVar1;
        puVar10[0xc] = (uint)uVar2;
      }
      local_4 = 0xffffffff;
      FUN_0059bd30(puVar10);
      local_34 = local_34 + 1;
    }
    local_30 = local_30 + 1;
  } while (local_30 < 200);
  if (local_34 < *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x4c)) {
    do {
      local_34 = local_34 + 1;
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_0056bc10(0x73af0386);
      uVar7 = FUN_00573140("CAR_%d",local_34,uVar7);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("BOUNTY_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("FINES_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("UNSERVED_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("TO_DRIVE_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("EVADED_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar7 = FUN_00573140("BUSTED_%d",local_34,&DAT_00890978);
      FUN_005252d0(uVar3,uVar7);
    } while (local_34 < *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x4c));
  }
  FUN_00593560(0);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  ExceptionList = pvStack_c;
  return;
}

