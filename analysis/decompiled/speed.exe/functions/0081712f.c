/* speed.exe 0081712f FUN_0081712f; analysis pseudocode, not buildable source.
 * calls 00816d40 FUN_00816d40
 */

void FUN_0081712f(undefined4 param_1,undefined4 param_2,int param_3)

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
  int local_124 [16];
  int local_e4 [8];
  int local_c4 [8];
  int local_a4 [8];
  int local_84 [8];
  int local_64 [8];
  int local_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00816d40(param_2,param_1,local_124);
  piVar6 = local_124 + 1;
  local_20 = 8;
  do {
    local_10 = piVar6[2];
    local_c = piVar6[6];
    iVar9 = piVar6[4];
    iVar10 = *piVar6;
    local_1c = piVar6[1];
    iVar11 = piVar6[-1];
    local_18 = piVar6[5];
    if (((((((iVar11 != 0 || local_18 != 0) || iVar9 != 0) || piVar6[3] != 0) || local_10 != 0) ||
         local_1c != 0) || local_c != 0) || iVar10 != 0) {
      iVar8 = (iVar10 * 0xfb15 >> 0x10) + (local_c * 0x31f1 >> 0x10);
      iVar10 = (iVar10 * 0x31f1 >> 0x10) - (local_c * 0xfb15 >> 0x10);
      local_8 = iVar10;
      local_c = (local_10 * 0xd4db >> 0x10) + (iVar9 * 0x8e3a >> 0x10);
      iVar12 = (iVar9 * 0xd4db >> 0x10) - (local_10 * 0x8e3a >> 0x10);
      iVar13 = (iVar8 - local_c) * 0xb505;
      local_c = local_c + iVar8;
      local_10 = iVar13 >> 0x10;
      iVar8 = (iVar10 - iVar12) * 0xb505;
      iVar9 = (iVar11 - piVar6[3]) * 0xb505;
      local_8 = iVar9 >> 0x10;
      local_24 = iVar12 + iVar10;
      sVar5 = (short)((uint)(local_1c * 0xec83) >> 0x10) +
              (short)((uint)(local_18 * 0x61f8) >> 0x10);
      local_18 = (local_1c * 0x61f8 >> 0x10) - (local_18 * 0xec83 >> 0x10);
      sVar1 = (short)((uint)((iVar11 + piVar6[3]) * 0xb505) >> 0x10);
      sVar3 = sVar1 - sVar5;
      sVar1 = sVar1 + sVar5;
      local_14 = local_8 + local_10;
      local_1c = (iVar8 >> 0x10) - local_18;
      sVar4 = (short)((uint)iVar9 >> 0x10) - (short)((uint)iVar13 >> 0x10);
      sVar2 = (short)((uint)iVar8 >> 0x10) + (short)local_18;
      sVar5 = (short)local_c;
      piVar6[6] = (int)(short)(sVar1 - sVar5);
      piVar6[-1] = (int)(short)(sVar5 + sVar1);
      piVar6[1] = (int)(short)((short)local_14 - sVar2);
      piVar6[3] = (int)(short)(sVar3 - (short)local_24);
      *piVar6 = (int)(short)((short)local_14 + sVar2);
      piVar6[2] = (int)(short)((short)local_24 + sVar3);
      piVar6[4] = (int)(short)((short)local_1c + sVar4);
      piVar6[5] = (int)(short)(sVar4 - (short)local_1c);
    }
    piVar6 = piVar6 + 8;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  puVar7 = (undefined2 *)(param_3 + 0x10);
  piVar6 = local_124 + 8;
  local_20 = 8;
  do {
    iVar9 = piVar6[-8];
    local_14 = iVar9;
    if (((((((piVar6[0x30] == 0 && piVar6[0x28] == 0) && piVar6[0x20] == 0) && piVar6[8] == 0) &&
          piVar6[0x10] == 0) && *piVar6 == 0) && iVar9 == 0) && piVar6[0x18] == 0) {
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
      iVar11 = (*piVar6 * 0x31f1 >> 0x10) - (piVar6[0x30] * 0xfb15 >> 0x10);
      local_8 = iVar11;
      iVar10 = (piVar6[0x30] * 0x31f1 >> 0x10) + (*piVar6 * 0xfb15 >> 0x10);
      iVar8 = (piVar6[0x10] * 0xd4db >> 0x10) + (piVar6[0x20] * 0x8e3a >> 0x10);
      iVar12 = (piVar6[0x20] * 0xd4db >> 0x10) - (piVar6[0x10] * 0x8e3a >> 0x10);
      local_c = iVar8 + iVar10;
      local_10 = (iVar10 - iVar8) * 0xb505 >> 0x10;
      local_24 = iVar12 + iVar11;
      local_18 = piVar6[0x28];
      local_8 = (iVar9 - piVar6[0x18]) * 0xb505 >> 0x10;
      iVar8 = (local_18 * 0x61f8 >> 0x10) + (piVar6[8] * 0xec83 >> 0x10);
      local_14 = (piVar6[8] * 0x61f8 >> 0x10) - (local_18 * 0xec83 >> 0x10);
      iVar10 = (iVar11 - iVar12) * 0xb505 >> 0x10;
      local_1c = iVar10 - local_14;
      local_14 = local_14 + iVar10;
      iVar11 = (iVar9 + piVar6[0x18]) * 0xb505 >> 0x10;
      iVar9 = iVar8 + 8 + iVar11;
      iVar10 = local_8 + 8 + local_10;
      iVar11 = (iVar11 - iVar8) + 8;
      iVar8 = (local_8 - local_10) + 8;
      puVar7[0x30] = (short)(iVar9 - local_c >> 4);
      puVar7[-8] = (short)(local_c + iVar9 >> 4);
      puVar7[8] = (short)(iVar10 - local_14 >> 4);
      puVar7[0x18] = (short)(iVar11 - local_24 >> 4);
      puVar7[0x10] = (short)(iVar11 + local_24 >> 4);
      puVar7[0x28] = (short)(iVar8 - local_1c >> 4);
      *puVar7 = (short)(local_14 + iVar10 >> 4);
      puVar7[0x20] = (short)(iVar8 + local_1c >> 4);
    }
    piVar6 = piVar6 + 1;
    puVar7 = puVar7 + 1;
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  return;
}

