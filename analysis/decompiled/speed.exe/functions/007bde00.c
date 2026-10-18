/* speed.exe 007bde00 FUN_007bde00; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 007b8040 FUN_007b8040
 * calls 00524850 FUN_00524850
 * calls 0056f250 FUN_0056f250
 * calls 005816b0 FUN_005816b0
 * calls 00747ae0 FUN_00747ae0
 * calls 007aeb90 FUN_007aeb90
 * calls 00516c90 FUN_00516c90
 * calls 0056f100 FUN_0056f100
 * calls 00652ad0 _malloc
 */

void __fastcall FUN_007bde00(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *local_34;
  int local_30;
  undefined **local_2c [3];
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  uVar2 = 0x4f;
  if (DAT_00905e38 != -1) {
    if (DAT_00905e38 == 0) {
      uVar2 = 0x4f;
    }
    else if (DAT_00905e38 == 1) {
      uVar2 = 0x50;
    }
    else if (DAT_00905e38 == 2) {
      uVar2 = 0x51;
    }
    DAT_00905e38 = -1;
  }
  FUN_007b8040(uVar2);
  iVar3 = FUN_00747ae0(0x6212682b,0);
  *(int *)(param_1 + 0x2e0) = iVar3;
  if (iVar3 < 2) {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x2c3cc2d3);
    FUN_00514c70(uVar2);
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x53639a10);
    FUN_00514c70(uVar2);
  }
  else {
    FUN_00516c90(0x1a7240f3,*(undefined4 *)(param_1 + 0x10),0);
  }
  iVar3 = 0x4f;
  local_34 = &DAT_009b9e3c;
  piVar6 = (int *)(param_1 + 0x2d4);
  local_30 = 3;
  do {
    if (*local_34 == 0) {
      local_2c[0] = &PTR_FUN_008b7518;
      local_20 = 0;
      local_18 = 0;
      local_14 = 7;
      local_10 = 0;
      local_c = 1;
      local_8 = 0;
      local_4 = 0;
      local_1c = iVar3;
      iVar4 = FUN_007aeb90(local_2c);
      local_2c[0] = &PTR_FUN_008b7518;
      if (iVar4 == 0) {
        FUN_0056f100(*(undefined1 *)(DAT_009b9ec4 + 0x10));
        iVar4 = iVar3;
        uVar2 = FUN_005816b0(iVar3);
        iVar4 = FUN_0056f250(uVar2,iVar4);
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar4 + 0xc) + 0xc);
      }
      if (iVar4 == 0) {
        *piVar6 = 0;
      }
      else {
        puVar5 = _malloc(0x2c);
        if (puVar5 == (undefined4 *)0x0) {
          *piVar6 = 0;
        }
        else {
          bVar1 = *(byte *)(iVar4 + 5);
          *puVar5 = &PTR_FUN_008b7518;
          puVar5[3] = iVar4;
          puVar5[4] = iVar3;
          puVar5[5] = (int)(char)(bVar1 >> 5);
          puVar5[6] = 7;
          *(undefined1 *)(puVar5 + 7) = 0;
          puVar5[8] = 1;
          puVar5[9] = 0;
          *(undefined1 *)(puVar5 + 10) = 0;
          *piVar6 = (int)puVar5;
        }
      }
    }
    else {
      *piVar6 = *local_34;
      *local_34 = 0;
    }
    local_34 = local_34 + 1;
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 1;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  return;
}

