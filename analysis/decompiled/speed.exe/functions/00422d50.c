/* speed.exe 00422d50 FUN_00422d50; analysis pseudocode, not buildable source.
 * calls 00422d50 FUN_00422d50
 * calls 00415f60 FUN_00415f60
 * calls 00766680 FUN_00766680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00422d50(char *param_1,ushort *param_2,float param_3,float param_4,char param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  int local_18;
  ushort *local_14;
  undefined4 local_10;
  uint local_c;
  float local_8;
  undefined4 local_4;
  
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  local_c = *(uint *)(param_2 + 2);
  uVar1 = *param_2;
  puVar9 = (ushort *)((short)uVar1 * 0x16 + DAT_009b38c0);
  fVar4 = *(float *)(param_2 + 4);
  while( true ) {
    bVar7 = (byte)puVar9[5];
    if (((bVar7 >> 6 & 1) != 0) && (local_c == 0)) {
      return;
    }
    fVar6 = (float)puVar9[2] * _DAT_008eb34c;
    if ((param_5 != '\0') || (param_5 = '\0', ((~(bVar7 >> 5) ^ bVar7 >> 1) & 1) == 0)) {
      param_5 = '\x01';
    }
    if ((_DAT_00890968 < param_3) &&
       (fVar5 = param_3 / fVar6 + fVar4, fVar5 < _DAT_0089096c != (fVar5 == _DAT_0089096c))) {
      local_10 = CONCAT22(local_10._2_2_,uVar1);
      *(undefined4 *)(param_1 + 100) = local_10;
      *(uint *)(param_1 + 0x68) = local_c;
      *(float *)(param_1 + 0x6c) = fVar5;
      local_4 = 0;
      param_1[0x70] = '\0';
      param_1[0x71] = '\0';
      param_1[0x72] = '\0';
      param_1[0x73] = '\0';
      local_8 = fVar5;
    }
    fVar5 = param_4 / fVar6 + fVar4;
    if (fVar5 < _DAT_0089096c != (fVar5 == _DAT_0089096c)) break;
    fVar6 = (_DAT_0089096c - fVar4) * fVar6;
    iVar10 = (uint)puVar9[local_c] * 0x20 + DAT_009b38bc;
    param_3 = param_3 - fVar6;
    param_4 = param_4 - fVar6;
    puVar8 = (ushort *)FUN_00766680(iVar10,uVar1);
    if (puVar8 == (ushort *)0x0) {
      iVar10 = (uint)puVar9[local_c] * 0x20 + DAT_009b38bc;
      local_18 = 0;
      if (*(int *)(param_1 + 0x98) < 10) {
        local_14 = (ushort *)(iVar10 + 0x12);
        while ((*(int *)(param_1 + 0x94) < 0x20 && (local_18 < (int)(uint)*(byte *)(iVar10 + 0x10)))
              ) {
          uVar2 = *local_14;
          if (uVar2 != uVar1) {
            puVar9 = (ushort *)((uint)uVar2 * 0x16 + DAT_009b38c0);
            uVar3 = puVar9[5];
            bVar7 = (byte)(uVar3 >> 8);
            if ((((bVar7 >> 5 | bVar7 >> 4) & 1) == 0) && ((*param_1 == '\0' || ((short)uVar3 < 0)))
               ) {
              local_c = (uint)((uint)*puVar9 * 0x20 + DAT_009b38bc == iVar10);
              local_10 = CONCAT22(local_10._2_2_,uVar2);
              local_8 = 0.0;
              local_4 = 0;
              FUN_00422d50(&local_10,param_3,param_4,param_5);
            }
          }
          local_18 = local_18 + 1;
          local_14 = local_14 + 1;
          if (9 < *(int *)(param_1 + 0x98)) {
            return;
          }
        }
      }
      return;
    }
    uVar1 = puVar8[4];
    local_c = (uint)(iVar10 == (uint)*puVar8 * 0x20 + DAT_009b38bc);
    puVar9 = puVar8;
    fVar4 = _DAT_00890968;
  }
  local_8 = param_4 / fVar6 + fVar4;
  local_10 = CONCAT22(local_10._2_2_,uVar1);
  local_4 = 0;
  FUN_00415f60(&local_10,param_5);
  return;
}

