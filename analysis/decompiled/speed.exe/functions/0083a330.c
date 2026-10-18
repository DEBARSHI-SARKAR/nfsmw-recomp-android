/* speed.exe 0083a330 FUN_0083a330; analysis pseudocode, not buildable source.
 */

byte * FUN_0083a330(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  iVar7 = 0;
  if ((param_1 == (byte *)0x0) || (*param_1 == 0x3d)) {
    return (byte *)0x0;
  }
  bVar9 = param_3 == (byte *)0x0;
  if (bVar9) {
    *param_1 = 0;
    param_3 = &DAT_00890978;
  }
  bVar6 = *param_3;
  pbVar2 = param_1;
  while (bVar6 != 0) {
    if (*pbVar2 != 0) {
      pbVar2 = pbVar2 + 1;
    }
    iVar4 = iVar7 + 1;
    iVar7 = iVar7 + 1;
    bVar6 = param_3[iVar4];
  }
  bVar6 = *pbVar2;
  if (bVar6 != 0) {
    pbVar3 = pbVar2 + -iVar7;
    iVar4 = (int)pbVar3 - (int)param_3;
    do {
      if (bVar6 == 0x3d) {
        if (pbVar3[iVar7 + -1] < 0x21) {
          return (byte *)0x0;
        }
        if ((pbVar3 == param_1) || (param_3[iVar4 + -1] < 0x21)) {
          pbVar5 = param_3;
          if ((&DAT_008c6508)[*pbVar3] == (&DAT_008c6508)[*param_3]) {
            do {
              pbVar1 = pbVar5 + iVar4 + 1;
              pbVar8 = pbVar5 + 1;
              pbVar5 = pbVar5 + 1;
            } while ((&DAT_008c6508)[*pbVar1] == (&DAT_008c6508)[*pbVar8]);
          }
          if (*pbVar5 == 0) {
            if (*pbVar2 != 0) {
              bVar6 = *pbVar2;
              pbVar3 = pbVar2;
              pbVar5 = pbVar2;
              pbVar8 = (byte *)0x0;
              if (0x1f < bVar6) goto LAB_0083a427;
              goto LAB_0083a443;
            }
            break;
          }
        }
      }
      bVar6 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (bVar6 != 0);
  }
  goto LAB_0083a483;
LAB_0083a443:
  if (*pbVar3 < 0x20) goto LAB_0083a448;
  goto LAB_0083a45d;
  while( true ) {
    bVar6 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
    pbVar3 = pbVar5;
    if (bVar6 < 0x20) break;
LAB_0083a427:
    pbVar3 = pbVar8;
    pbVar8 = pbVar5;
    if (((bVar6 != 0x20) && (pbVar8 = pbVar3, bVar6 == 0x3d)) && (pbVar3 != (byte *)0x0))
    goto LAB_0083a443;
  }
LAB_0083a448:
  bVar6 = *pbVar3;
  do {
    if (bVar6 == 0) break;
    bVar6 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
  } while (bVar6 < 0x20);
LAB_0083a45d:
  bVar6 = *pbVar3;
  pbVar2 = pbVar2 + -iVar7;
  *pbVar2 = bVar6;
  while (bVar6 != 0) {
    bVar6 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
    *pbVar2 = bVar6;
  }
LAB_0083a483:
  if (((pbVar2 == param_1) || (pbVar2[-1] < 0x20)) ||
     ((uint)pbVar2[-1] == (int)s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40])) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  if ((int)(param_1 + (param_2 - (int)pbVar2)) < DAT_0090d314 + iVar4 + iVar7 + 2 + param_4) {
    return (byte *)0x0;
  }
  if (iVar4 != 0) {
    *pbVar2 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pbVar2 = pbVar2 + 1;
  }
  bVar6 = *param_3;
  while (bVar6 != 0) {
    *pbVar2 = bVar6;
    pbVar3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
    param_3 = param_3 + 1;
    bVar6 = *pbVar3;
  }
  if (!bVar9) {
    *pbVar2 = 0x3d;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = 0;
  return pbVar2;
}

