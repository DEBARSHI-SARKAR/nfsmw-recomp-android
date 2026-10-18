/* speed.exe 0083c880 FUN_0083c880; analysis pseudocode, not buildable source.
 * calls 0083a330 FUN_0083a330
 * calls 0083c4e0 FUN_0083c4e0
 */

int FUN_0083c880(byte *param_1,int param_2,int param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if (param_4 == (byte *)0x0) {
    FUN_0083c4e0(param_1,param_3);
    return 0;
  }
  pbVar2 = (byte *)FUN_0083a330(param_1,param_2,param_3,2);
  if (pbVar2 != (byte *)0x0) {
    pbVar4 = param_1 + param_2 + (-1 - (int)pbVar2);
    bVar3 = *param_4;
    pbVar5 = param_4;
    if (bVar3 != 0) {
      do {
        if ((bVar3 == 0x20) || (bVar3 == 0x2c)) {
          *pbVar2 = 0x22;
          pbVar2 = pbVar2 + 1;
          pbVar4 = pbVar4 + -2;
          break;
        }
        bVar3 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
      bVar3 = *param_4;
      for (; (bVar3 != 0 && (0 < (int)pbVar4)); pbVar4 = pbVar4 + iVar1) {
        if (((&DAT_008c62f8)[*param_4] & 1) == 0) {
          *pbVar2 = *param_4;
          pbVar2 = pbVar2 + 1;
          iVar1 = -1;
        }
        else {
          if (2 < (int)pbVar4) {
            *pbVar2 = 0x25;
            pbVar2[1] = (&DAT_008c63f8)[*param_4 >> 4];
            pbVar2[2] = (&DAT_008c63f8)[*param_4 & 0xf];
            pbVar2 = pbVar2 + 3;
          }
          iVar1 = -3;
        }
        bVar3 = param_4[1];
        param_4 = param_4 + 1;
      }
    }
    if ((*pbVar5 == 0x20) || (*pbVar5 == 0x2c)) {
      *pbVar2 = 0x22;
      pbVar2 = pbVar2 + 1;
    }
    if (DAT_0090d314 <= (int)pbVar4) {
      if ((DAT_0090d314 != 0) && (param_3 != 0)) {
        *pbVar2 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
        pbVar2 = pbVar2 + 1;
      }
      *pbVar2 = 0;
      return (int)pbVar2 - (int)param_1;
    }
    pbVar4 = pbVar2;
    if (pbVar2 != param_1) {
      while (pbVar2 = pbVar4 + -1, 0x1f < pbVar4[-1]) {
        pbVar4 = pbVar2;
        if (pbVar2 == param_1) {
          *pbVar2 = 0;
          return -1;
        }
      }
      if (*pbVar2 == 10) {
        pbVar2 = pbVar4;
      }
    }
    *pbVar2 = 0;
  }
  return -1;
}

