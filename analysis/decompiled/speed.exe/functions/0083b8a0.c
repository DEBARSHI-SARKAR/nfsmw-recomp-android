/* speed.exe 0083b8a0 FUN_0083b8a0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0083b8a0(byte *param_1,uint *param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *local_410;
  uint *local_408;
  uint local_404 [257];
  
  if (param_3 < 0) {
    local_408 = (uint *)((int)param_2 + 0xffff);
  }
  else {
    local_408 = (uint *)((int)param_2 + param_3);
  }
  if (param_1 == (byte *)0x0) {
    param_1 = &DAT_00890978;
  }
  if (param_2 == (uint *)0x0) {
    param_2 = local_404;
  }
  bVar2 = *param_4;
  puVar10 = param_2;
  local_410 = param_2;
  while ((bVar2 != 0 && (bVar3 = *param_1, 0x20 < bVar3))) {
    iVar5 = 0;
    pbVar7 = param_4;
    while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
      pbVar7 = pbVar7 + 1;
      iVar5 = (bVar2 & 0xf) + iVar5 * 10;
      bVar2 = *pbVar7;
    }
    bVar2 = *pbVar7;
    if (bVar2 == 0x6c) {
      iVar5 = 8;
LAB_0083b95d:
      if (bVar3 == 0x2d) {
        param_1 = param_1 + 1;
      }
      uVar4 = 0;
      do {
        if (0xf < (byte)(&DAT_008c6408)[*param_1]) {
          if ((0 < iVar5) && (*param_1 == 0x2c)) {
            param_1 = param_1 + 1;
          }
          break;
        }
        uVar4 = uVar4 << 4 | (uint)(byte)(&DAT_008c6408)[*param_1];
        iVar5 = iVar5 + -1;
        param_1 = param_1 + 1;
      } while (0 < iVar5);
      if (bVar3 == 0x2d) {
        uVar4 = -uVar4;
      }
      if (bVar2 == 0x6c) {
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
        local_410 = puVar10;
      }
      else if (bVar2 == 0x62) {
        *(byte *)puVar10 = (byte)uVar4;
        puVar10 = (uint *)((int)puVar10 + 1);
        local_410 = puVar10;
      }
      else if (bVar2 == 0x77) {
        *(short *)puVar10 = (short)uVar4;
        puVar10 = (uint *)((int)puVar10 + 2);
        local_410 = puVar10;
      }
    }
    else {
      if (bVar2 == 0x62) {
        iVar5 = 2;
        goto LAB_0083b95d;
      }
      if (bVar2 == 0x77) {
        iVar5 = 4;
        goto LAB_0083b95d;
      }
      if ((bVar2 == 0x73) && (0 < iVar5)) {
        iVar8 = 0;
        puVar10 = local_410;
        while (((bVar2 = *param_1, 0x2f < bVar2 || (bVar2 == 0x25)) &&
               ((int)((1 - (int)local_410) + (int)puVar10) < iVar5))) {
          if (bVar2 == 0x25) {
            pbVar9 = param_1 + 1;
            pbVar1 = param_1 + 2;
            param_1 = param_1 + 3;
            *(undefined *)puVar10 = (&DAT_008c6408)[*pbVar9] << 4 | (&DAT_008c6408)[*pbVar1];
            iVar8 = iVar8 + 1;
            puVar10 = (uint *)((int)puVar10 + 1);
          }
          else {
            param_1 = param_1 + 1;
            *(byte *)puVar10 = bVar2;
            iVar8 = iVar8 + 1;
            puVar10 = (uint *)((int)puVar10 + 1);
          }
        }
        if (iVar8 < iVar5) {
          uVar4 = iVar5 - iVar8;
          pbVar9 = (byte *)(iVar8 + (int)local_410);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            pbVar9[0] = 0;
            pbVar9[1] = 0;
            pbVar9[2] = 0;
            pbVar9[3] = 0;
            pbVar9 = pbVar9 + 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pbVar9 = 0;
            pbVar9 = pbVar9 + 1;
          }
          iVar8 = iVar8 + uVar4;
        }
        puVar10 = (uint *)((int)local_410 + iVar8);
        local_410 = puVar10;
        if (*param_1 == 0x2c) {
          param_1 = param_1 + 1;
        }
      }
      else if (bVar2 == 0x61) {
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        puVar10 = (uint *)((int)puVar10 + iVar5);
        local_410 = puVar10;
      }
    }
    if (local_408 <= puVar10) break;
    param_4 = pbVar7 + 1;
    if (pbVar7[1] == 0x2a) {
      param_4 = pbVar7;
    }
    bVar2 = *param_4;
  }
  iVar5 = (int)puVar10 - (int)param_2;
  if (iVar5 < param_3) {
    for (uVar4 = (uint)(param_3 - iVar5) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = param_3 - iVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar10 = 0;
      puVar10 = (uint *)((int)puVar10 + 1);
    }
  }
  return iVar5;
}

