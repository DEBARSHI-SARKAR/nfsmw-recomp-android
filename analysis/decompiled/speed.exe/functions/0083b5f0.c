/* speed.exe 0083b5f0 FUN_0083b5f0; analysis pseudocode, not buildable source.
 * calls 0083a330 FUN_0083a330
 */

int FUN_0083b5f0(byte *param_1,int param_2,int param_3,uint *param_4,int param_5,byte *param_6)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  uint local_4;
  
  local_4 = 0;
  if (param_5 < 0) {
    puVar2 = param_4 + 0x4000;
  }
  else {
    puVar2 = (uint *)((int)param_4 + param_5);
  }
  pbVar1 = param_1 + param_2 + -2;
  pbVar3 = (byte *)FUN_0083a330(param_1,param_2,param_3,0);
  if (pbVar3 == (byte *)0x0) {
    return -1;
  }
  bVar6 = *param_6;
  pbVar8 = param_6;
joined_r0x0083b64b:
  if ((bVar6 == 0) || (puVar2 <= param_4)) {
    bVar6 = pbVar3[-1];
    while (bVar6 == 0x2c) {
      pbVar1 = pbVar3 + -2;
      pbVar3 = pbVar3 + -1;
      bVar6 = *pbVar1;
    }
    if ((DAT_0090d314 != 0) && (param_3 != 0)) {
      *pbVar3 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = 0;
    return (int)pbVar3 - (int)param_1;
  }
  if (bVar6 == 0x23) {
    pbVar8 = pbVar8 + 1;
    do {
      bVar6 = *pbVar8;
      param_6 = pbVar8;
      if (bVar6 == 0) break;
      pbVar8 = pbVar8 + 1;
      param_6 = pbVar8;
    } while (bVar6 != 0x3d);
  }
  iVar10 = 0;
  bVar6 = *pbVar8;
  while (('/' < (char)bVar6 && (param_6 = pbVar8, (char)bVar6 < ':'))) {
    pbVar8 = pbVar8 + 1;
    iVar10 = (bVar6 & 0xf) + iVar10 * 10;
    param_6 = pbVar8;
    bVar6 = *pbVar8;
  }
  bVar6 = *pbVar8;
  if (bVar6 == 0x61) {
    iVar5 = iVar10;
    if (iVar10 == 0) {
      iVar5 = 1;
    }
    param_4 = (uint *)((int)param_4 + iVar5);
  }
  iVar5 = 0;
  if (bVar6 == 0x62) {
    local_4 = (uint)(byte)*param_4;
    param_4 = (uint *)((int)param_4 + 1);
    iVar5 = 2;
  }
  if (bVar6 == 0x77) {
    local_4 = (uint)(ushort)*param_4;
    param_4 = (uint *)((int)param_4 + 2);
    iVar5 = 4;
  }
  if (bVar6 != 0x6c) {
    if (iVar5 != 0) goto LAB_0083b6ef;
    goto LAB_0083b763;
  }
  local_4 = *param_4;
  param_4 = param_4 + 1;
  iVar5 = 8;
LAB_0083b6ef:
  if (pbVar3 + iVar5 <= pbVar1) {
    pbVar4 = pbVar3;
    if (0xffff0000 < local_4) {
      local_4 = -local_4;
      *pbVar3 = 0x2d;
      pbVar4 = pbVar3 + 1;
    }
    iVar9 = 0x1c;
    do {
      if ((local_4 >> ((byte)iVar9 & 0x1f) & 0xf) != 0) goto joined_r0x0083b736;
      iVar9 = iVar9 + -4;
    } while (-1 < iVar9);
    goto LAB_0083b751;
  }
  if (pbVar3 == param_1) goto LAB_0083b84f;
  while (pbVar1 = pbVar3 + -1, pbVar3 = pbVar3 + -1, 0x1f < *pbVar1) {
    if (pbVar3 == param_1) {
      *pbVar3 = 0;
      return -1;
    }
  }
LAB_0083b849:
  if (*pbVar3 == 10) {
    pbVar3 = pbVar3 + 1;
  }
LAB_0083b84f:
  *pbVar3 = 0;
  return -1;
joined_r0x0083b736:
  for (; -1 < iVar9; iVar9 = iVar9 + -4) {
    *pbVar4 = (&DAT_008c63f8)[local_4 >> ((byte)iVar9 & 0x1f) & 0xf];
    pbVar4 = pbVar4 + 1;
  }
LAB_0083b751:
  pbVar7 = pbVar3 + iVar5;
  pbVar3 = pbVar4;
  pbVar8 = param_6;
  if (pbVar4 < pbVar7) {
    *pbVar4 = 0x2c;
    pbVar3 = pbVar4 + 1;
  }
LAB_0083b763:
  pbVar4 = pbVar3;
  if ((*pbVar8 != 0x73) || (iVar10 < 1)) {
LAB_0083b7da:
    if (pbVar8[1] != 0x2a) {
      pbVar8 = pbVar8 + 1;
      param_6 = pbVar8;
    }
    bVar6 = *pbVar8;
    pbVar3 = pbVar4;
    goto joined_r0x0083b64b;
  }
  iVar5 = 0;
  if (iVar10 < 1) {
LAB_0083b7be:
    pbVar4 = pbVar3 + 1;
    param_4 = (uint *)((int)param_4 + (iVar10 - iVar5));
    if (pbVar4 <= pbVar1) {
      *pbVar3 = 0x2c;
      pbVar8 = param_6;
      goto LAB_0083b7da;
    }
    if (pbVar3 == param_1) goto LAB_0083b84f;
    while (pbVar1 = pbVar3 + -1, pbVar3 = pbVar3 + -1, 0x1f < *pbVar1) {
      if (pbVar3 == param_1) {
        *pbVar3 = 0;
        return -1;
      }
    }
  }
  else {
    pbVar8 = pbVar3 + 3;
    while( true ) {
      bVar6 = (byte)*param_4;
      if (bVar6 == 0) goto LAB_0083b7be;
      if (pbVar1 < pbVar8) break;
      pbVar4 = pbVar3;
      if (((&DAT_008c62f8)[bVar6] & 4) != 0) {
        *pbVar3 = 0x25;
        pbVar3[1] = (&DAT_008c63f8)[(byte)((byte)*param_4 >> 4)];
        pbVar4 = pbVar3 + 2;
        pbVar8 = pbVar8 + 2;
        bVar6 = (&DAT_008c63f8)[(byte)*param_4 & 0xf];
      }
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar6;
      pbVar8 = pbVar8 + 1;
      iVar5 = iVar5 + 1;
      param_4 = (uint *)((int)param_4 + 1);
      if (iVar10 <= iVar5) goto LAB_0083b7be;
    }
    if (pbVar3 == param_1) goto LAB_0083b84f;
    while (pbVar1 = pbVar3 + -1, pbVar3 = pbVar3 + -1, 0x1f < *pbVar1) {
      if (pbVar3 == param_1) {
        *pbVar3 = 0;
        return -1;
      }
    }
  }
  goto LAB_0083b849;
}

