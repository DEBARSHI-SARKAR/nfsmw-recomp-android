/* speed.exe 0083b4d0 FUN_0083b4d0; analysis pseudocode, not buildable source.
 */

byte * FUN_0083b4d0(char *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  
  pbVar2 = param_2 + param_3;
  if ((param_1 != (char *)0x0) && ((cVar3 = *param_1, cVar3 == '$' || (cVar3 == '^')))) {
    if (param_2 == (byte *)0x0) {
      bVar7 = param_1[1];
      pcVar5 = param_1 + 1;
      if (cVar3 != '$') {
        while (0x7f < bVar7) {
          pbVar2 = (byte *)(pcVar5 + 1);
          pcVar5 = pcVar5 + 1;
          bVar7 = *pbVar2;
        }
        return (byte *)((int)((int)(pcVar5 + (-1 - (int)param_1)) * 7 +
                             ((int)(pcVar5 + (-1 - (int)param_1)) * 7 >> 0x1f & 7U)) >> 3);
      }
      for (; (0x2f < bVar7 && (0x2f < (byte)pcVar5[1])); pcVar5 = pcVar5 + 2) {
        bVar7 = pcVar5[2];
      }
      return (byte *)((int)(pcVar5 + (-1 - (int)param_1)) / 2);
    }
    if (0 < param_3) {
      if (cVar3 == '$') {
        bVar7 = param_1[1];
        pbVar9 = (byte *)(param_1 + 1);
        if (0x2f < bVar7) {
          while ((pbVar1 = pbVar9 + 1, 0x2f < *pbVar1 && (param_2 < pbVar2))) {
            pbVar9 = pbVar9 + 2;
            *param_2 = (&DAT_008c6408)[bVar7] << 4 | (&DAT_008c6408)[*pbVar1];
            bVar7 = *pbVar9;
            param_2 = param_2 + 1;
            if (bVar7 < 0x30) {
              return param_2 + (param_3 - (int)pbVar2);
            }
          }
        }
      }
      else {
        pbVar9 = (byte *)(param_1 + 1);
        bVar7 = *pbVar9;
        uVar6 = 0;
        iVar4 = 0;
        while ((0x7f < bVar7 && (param_2 < pbVar2))) {
          iVar8 = iVar4 + 7;
          uVar6 = uVar6 | (bVar7 & 0x7f) << ((byte)iVar4 & 0x1f);
          if (7 < iVar8) {
            *param_2 = (byte)uVar6;
            param_2 = param_2 + 1;
            uVar6 = uVar6 >> 8;
            iVar8 = iVar4 + -1;
          }
          bVar7 = pbVar9[1];
          pbVar9 = pbVar9 + 1;
          iVar4 = iVar8;
        }
      }
      return param_2 + (param_3 - (int)pbVar2);
    }
  }
  return (byte *)0xffffffff;
}

