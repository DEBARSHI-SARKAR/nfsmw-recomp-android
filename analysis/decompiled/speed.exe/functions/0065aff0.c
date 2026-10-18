/* speed.exe 0065aff0 FUN_0065aff0; analysis pseudocode, not buildable source.
 * calls 0064da50 FUN_0064da50
 * calls 007c66d0 _malloc
 * calls 007c7250 FUN_007c7250
 */

int FUN_0065aff0(byte *param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte *local_24;
  byte *local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  
  iVar2 = param_2;
  puVar4 = _malloc(0x8100);
  puVar5 = _malloc(0x8000);
  puVar11 = puVar4;
  for (iVar8 = 0x2040; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar11 = puVar5;
  for (iVar8 = 0x2000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_24 = (byte *)(param_3 + 4);
  local_20 = (byte *)((int)param_3 + 0x11);
  pbVar12 = (byte *)((int)param_3 + 0x12);
  local_34 = 0;
  local_18 = 0;
  *param_3 = 0x5a4c444a;
  *(undefined1 *)(param_3 + 1) = 2;
  *(undefined1 *)((int)param_3 + 5) = 0x10;
  *(undefined2 *)((int)param_3 + 6) = 0;
  param_3[2] = param_2;
  param_3[3] = 0;
  local_14 = 0;
  local_3c = 0xff00;
  local_38 = 0xff00;
  do {
    if (param_2 < 0) {
      if ((local_3c & 0xff00) != 0) {
        do {
          uVar1 = (ushort)local_3c >> 1;
          local_3c = (uint)uVar1;
        } while ((uVar1 & 0xff00) != 0);
      }
      *local_24 = (byte)local_3c;
      if ((local_38 & 0xff00) != 0) {
        do {
          uVar1 = (ushort)local_38 >> 1;
          local_38 = (uint)uVar1;
        } while ((uVar1 & 0xff00) != 0);
      }
      *local_20 = (byte)local_38;
      param_3[3] = (int)pbVar12 - (int)param_3;
      FUN_007c7250(puVar4);
      FUN_007c7250(puVar5);
      return (int)pbVar12 - (int)param_3;
    }
    local_30 = 0x1002;
    if (param_2 < 0x1002) {
      local_30 = param_2;
    }
    piVar10 = (int *)puVar5[(((uint)param_1[2] << 4 ^ (uint)param_1[1]) << 4 ^ (uint)*param_1) *
                            -0x1a1 & 0x1fff];
    iVar8 = 2;
    local_2c = 2;
    local_1c = (int *)0x0;
    if (piVar10 == (int *)0x0) {
LAB_0065b227:
      FUN_0064da50(param_1,local_34);
      pbVar6 = pbVar12 + 1;
      *pbVar12 = *param_1;
      local_3c = local_3c >> 1 & 0x7f7f;
      param_1 = param_1 + 1;
      local_34 = local_34 + 1;
      param_2 = param_2 + -1;
    }
    else {
      do {
        if (0x1001 < iVar8) break;
        iVar9 = 0;
        if (3 < local_30) {
          pbVar6 = param_1;
          do {
            iVar8 = local_2c;
            if (*(int *)(pbVar6 + (piVar10[1] - (int)param_1)) != *(int *)pbVar6) break;
            pbVar6 = pbVar6 + 4;
            iVar9 = iVar9 + 4;
          } while ((int)(pbVar6 + (3 - (int)param_1)) < local_30);
        }
        if (iVar9 < local_30) {
          pbVar6 = param_1 + iVar9;
          do {
            iVar8 = local_2c;
            if (pbVar6[piVar10[1] - (int)param_1] != *pbVar6) break;
            iVar9 = iVar9 + 1;
            pbVar6 = pbVar6 + 1;
          } while (iVar9 < local_30);
        }
        if ((iVar8 < iVar9) && (((iVar9 < 0x23 || (local_34 - *piVar10 < 0x10)) || (iVar8 < 0x23))))
        {
          iVar8 = iVar9;
          local_2c = iVar9;
          local_1c = piVar10;
        }
        piVar10 = (int *)piVar10[3];
      } while (piVar10 != (int *)0x0);
      if (iVar8 < 3) goto LAB_0065b227;
      local_3c = local_3c >> 1;
      iVar9 = (local_34 - *local_1c) + -1;
      bVar3 = (byte)iVar9;
      if (iVar9 < 0x10) {
        local_38 = local_38 >> 1;
        bVar7 = (byte)(iVar8 + -3 >> 4) & 0xf0 | bVar3;
        pbVar12[1] = (char)iVar8 - 3;
      }
      else {
        if (0x22 < iVar8) {
          iVar8 = 0x22;
        }
        local_38 = local_38 >> 1 & 0x7f7f;
        bVar7 = (byte)((local_34 - *local_1c) + -0x11 >> 3) & 0xe0 | (char)iVar8 - 3U;
        pbVar12[1] = bVar3 - 0x10;
      }
      *pbVar12 = bVar7;
      pbVar6 = pbVar12 + 2;
      param_2 = param_2 - iVar8;
      do {
        FUN_0064da50(param_1,local_34);
        param_1 = param_1 + 1;
        local_34 = local_34 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    pbVar13 = pbVar6;
    if ((ushort)local_3c < 0x100) {
      *local_24 = (byte)local_3c;
      local_3c = 0xff00;
      pbVar13 = pbVar6 + 1;
      local_24 = pbVar6;
    }
    pbVar12 = pbVar13;
    if ((ushort)local_38 < 0x100) {
      *local_20 = (byte)local_38;
      local_38 = 0xff00;
      pbVar12 = pbVar13 + 1;
      local_20 = pbVar13;
    }
    local_18 = local_18 + 1;
    if (((local_18 & 0x1fff) == 0) && (iVar8 = 10 - (param_2 * 10) / iVar2, iVar8 != local_14)) {
      local_14 = iVar8;
    }
  } while( true );
}

