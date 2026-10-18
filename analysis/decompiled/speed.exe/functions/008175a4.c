/* speed.exe 008175a4 FUN_008175a4; analysis pseudocode, not buildable source.
 * calls 008174ef FUN_008174ef
 */

void FUN_008175a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_120 [24];
  int local_c0 [40];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_008174ef(param_2,param_1,local_120);
  piVar6 = local_120 + 1;
  local_14 = 4;
  do {
    local_10 = piVar6[-1];
    iVar13 = piVar6[2];
    iVar9 = piVar6[1];
    iVar8 = *piVar6;
    if (((local_10 != 0 || iVar13 != 0) || iVar9 != 0) || iVar8 != 0) {
      iVar12 = iVar8 * 0xfb15 >> 0x10;
      iVar10 = iVar8 * 0x31f1 >> 0x10;
      iVar8 = iVar13 * 0x8e3a >> 0x10;
      iVar13 = iVar13 * 0xd4db >> 0x10;
      iVar11 = (iVar10 + iVar8) * 0xb505;
      local_1c = iVar13 + iVar12;
      iVar13 = (iVar12 - iVar13) * 0xb505;
      local_20 = iVar10 - iVar8;
      iVar8 = local_10 * 0xb505 >> 0x10;
      local_c = iVar9 * 0x61f8 >> 0x10;
      sVar5 = (short)((uint)(local_10 * 0xb505) >> 0x10);
      sVar3 = sVar5 - (short)((uint)(iVar9 * 0xec83) >> 0x10);
      local_18 = (iVar9 * 0xec83 >> 0x10) + iVar8;
      sVar5 = sVar5 - (short)((uint)iVar13 >> 0x10);
      local_8 = local_c + (iVar11 >> 0x10);
      local_10 = (iVar13 >> 0x10) + iVar8;
      sVar1 = (short)local_1c;
      sVar2 = (short)local_18;
      sVar4 = (short)((uint)iVar11 >> 0x10) - (short)((uint)(iVar9 * 0x61f8) >> 0x10);
      piVar6[6] = (int)(short)(sVar2 - sVar1);
      piVar6[-1] = (int)(short)(sVar1 + sVar2);
      piVar6[1] = (int)(short)((short)local_10 - (short)local_8);
      *piVar6 = (int)(short)((short)local_8 + (short)local_10);
      piVar6[3] = (int)(short)(sVar3 - (short)local_20);
      piVar6[2] = (int)(short)((short)local_20 + sVar3);
      piVar6[4] = (int)(short)(sVar4 + sVar5);
      piVar6[5] = (int)(short)(sVar5 - sVar4);
    }
    piVar6 = piVar6 + 8;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  piVar6 = local_c0;
  puVar7 = (undefined2 *)(param_3 + 0x10);
  local_14 = 8;
  do {
    iVar13 = piVar6[-0x18];
    local_18 = iVar13;
    if (((*piVar6 == 0 && iVar13 == 0) && piVar6[-0x10] == 0) && piVar6[-8] == 0) {
      puVar7[-8] = 0;
      puVar7[0x30] = 0;
      *puVar7 = 0;
      puVar7[8] = 0;
      puVar7[0x10] = 0;
      puVar7[0x18] = 0;
      puVar7[0x20] = 0;
      puVar7[0x28] = 0;
    }
    else {
      local_8 = piVar6[-0x10] * 0x31f1 >> 0x10;
      iVar8 = piVar6[-0x10] * 0xfb15 >> 0x10;
      iVar9 = *piVar6 * 0x8e3a >> 0x10;
      iVar10 = *piVar6 * 0xd4db >> 0x10;
      local_1c = iVar10 + iVar8;
      local_20 = local_8 - iVar9;
      local_c = piVar6[-8] * 0x61f8 >> 0x10;
      local_8 = (local_8 + iVar9) * 0xb505 >> 0x10;
      local_18 = local_8 - local_c;
      iVar9 = (iVar8 - iVar10) * 0xb505 >> 0x10;
      local_8 = local_c + local_8;
      iVar10 = iVar13 * 0xb505 >> 0x10;
      local_10 = iVar9 + 8 + iVar10;
      iVar8 = piVar6[-8] * 0xec83 >> 0x10;
      iVar13 = iVar8 + 8 + iVar10;
      puVar7[-8] = (short)(iVar13 + local_1c >> 4);
      puVar7[0x30] = (short)(iVar13 - local_1c >> 4);
      iVar13 = (iVar10 - iVar8) + 8;
      puVar7[8] = (short)(local_10 - local_8 >> 4);
      iVar9 = (iVar10 - iVar9) + 8;
      puVar7[0x18] = (short)(iVar13 - local_20 >> 4);
      *puVar7 = (short)(local_8 + local_10 >> 4);
      puVar7[0x10] = (short)(iVar13 + local_20 >> 4);
      puVar7[0x20] = (short)(iVar9 + local_18 >> 4);
      puVar7[0x28] = (short)(iVar9 - local_18 >> 4);
    }
    piVar6 = piVar6 + 1;
    puVar7 = puVar7 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  return;
}

