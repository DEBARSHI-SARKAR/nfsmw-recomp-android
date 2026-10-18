/* speed.exe 007b5bb0 FUN_007b5bb0; analysis pseudocode, not buildable source.
 * calls 007aef70 FUN_007aef70
 * calls 0056f250 FUN_0056f250
 * calls 007a4ff0 FUN_007a4ff0
 * calls 00672e80 FUN_00672e80
 * calls 00652ad0 _malloc
 * calls 007b5870 FUN_007b5870
 * calls 007a9f00 FUN_007a9f00
 * calls 005816b0 FUN_005816b0
 * calls 007a4e50 FUN_007a4e50
 * calls 0056f100 FUN_0056f100
 * calls 007aeca0 FUN_007aeca0
 * calls 007aeb90 FUN_007aeb90
 */

void __fastcall FUN_007b5bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  uint local_74;
  int local_70;
  int local_6c;
  undefined **local_64 [3];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined **local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883308;
  pvStack_c = ExceptionList;
  local_6c = 0;
  ExceptionList = &pvStack_c;
  do {
    iVar4 = FUN_00672e80(param_1 + 8,local_6c);
    local_70 = 0;
    if (0 < iVar4) {
      local_2c = 0;
      local_28 = 0;
      local_1c = 1;
      local_18 = 1;
      local_14 = 0;
      local_10 = 0;
      local_38[0] = &PTR_FUN_008b7518;
      iVar8 = 0;
      local_20 = local_6c;
      do {
        iVar1 = iVar8 + 1;
        local_4 = 0;
        switch(local_6c) {
        case 0:
        case 2:
        case 5:
        case 6:
          iVar11 = 3;
          break;
        case 1:
        case 3:
        case 4:
          iVar11 = 4;
          break;
        default:
          iVar11 = -1;
        }
        local_24 = iVar1;
        iVar5 = FUN_00672e80(param_1 + 8,local_6c);
        cVar3 = FUN_007a4e50(local_38,((iVar11 + iVar8) - iVar5) + 1);
        if (cVar3 == '\0') {
          local_70 = iVar1;
        }
        local_4 = 0xffffffff;
        iVar8 = iVar1;
      } while (iVar1 < iVar4);
      if (local_70 != 0) {
        local_64[0] = &PTR_FUN_008b7518;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_48 = 1;
        local_44 = 1;
        local_40 = 0;
        local_3c = 0;
        local_4c = local_6c;
        puVar6 = (undefined4 *)FUN_007aeb90(local_64);
        local_64[0] = &PTR_FUN_008b7518;
        if (puVar6 != (undefined4 *)0x0) {
          iVar4 = puVar6[1];
          piVar2 = (int *)puVar6[2];
          *piVar2 = iVar4;
          *(int **)(iVar4 + 4) = piVar2;
          (**(code **)*puVar6)(1);
          *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + -1;
        }
        puVar7 = _malloc(0x2c);
        puVar6 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[9] = 0;
          *puVar7 = &PTR_FUN_008b7518;
          puVar7[5] = local_70;
          puVar7[6] = local_6c;
          *(undefined1 *)(puVar7 + 7) = 1;
          puVar7[8] = 1;
          *(undefined1 *)(puVar7 + 10) = 0;
          puVar6 = puVar7;
        }
        local_74 = 1;
        switch(local_6c) {
        case 0:
        case 2:
        case 5:
        case 6:
          iVar4 = 3;
          break;
        case 1:
        case 3:
        case 4:
          iVar4 = 4;
          break;
        default:
          iVar4 = -1;
        }
        iVar8 = FUN_00672e80(param_1 + 8,local_6c);
        iVar4 = ((iVar4 + local_70) - iVar8) + 1;
        cVar3 = FUN_007a4e50(puVar6,iVar4);
        if (cVar3 == '\0') {
          cVar3 = FUN_007a4ff0(puVar6,iVar4);
          if (cVar3 != '\0') {
            local_74 = 3;
          }
        }
        else {
          local_74 = 2;
        }
        if (puVar6 == (undefined4 *)0x0) {
LAB_007b5e09:
          iVar4 = FUN_007aeca0(puVar6);
          if (iVar4 != 0) {
            local_74 = local_74 | 0x20;
          }
        }
        else {
          if (*(char *)(puVar6 + 7) == '\0') {
            uVar9 = puVar6[4];
            FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
            uVar10 = FUN_005816b0(uVar9);
            iVar4 = FUN_0056f250(uVar10,uVar9);
            bVar12 = iVar4 == puVar6[3];
LAB_007b5e07:
            if (!bVar12) goto LAB_007b5e09;
          }
          else {
            iVar4 = puVar6[6];
            if (*(char *)(puVar6 + 10) == '\0') {
              iVar8 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
              bVar12 = puVar6[5] == *(int *)(iVar8 + 0x118 + iVar4 * 4);
              goto LAB_007b5e07;
            }
            iVar8 = FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
            if ((*(uint *)(iVar8 + 0x134) & 1 << ((byte)iVar4 & 0x1f)) == 0) goto LAB_007b5e09;
          }
          local_74 = local_74 | 0x10;
        }
        puVar6[8] = local_74;
        uVar9 = FUN_007aef70(puVar6);
        puVar6[9] = uVar9;
        FUN_007b5870(puVar6);
        (**(code **)*puVar6)(1);
      }
    }
    local_6c = local_6c + 1;
    if (6 < local_6c) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

