/* speed.exe 0083c650 FUN_0083c650; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 */

undefined4 FUN_0083c650(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = param_1 + param_2;
  if ((param_3 == (byte *)0x0) || (*param_3 == 0)) {
    return 0;
  }
  pbVar4 = param_1;
  pbVar5 = param_1;
  pbVar6 = param_1;
  if (*param_1 != 0) {
    do {
      bVar1 = *pbVar5;
      if (bVar1 < 0x21) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar4 = pbVar5 + 1;
        pbVar5 = pbVar4;
      }
      else if (bVar1 == 0x3d) {
        if (pbVar5 == pbVar4) {
          *pbVar6 = 0;
          break;
        }
        *pbVar5 = 0;
        iVar2 = FUN_0083a670(param_3,pbVar4);
        if (iVar2 == 0) {
          *pbVar5 = 0x3d;
          *pbVar6 = 0x3d;
          pbVar6 = pbVar6 + 1;
          pbVar5 = pbVar5 + 1;
        }
        else {
          pbVar6 = pbVar6 + ((int)pbVar4 - (int)pbVar5);
          bVar1 = pbVar5[1];
          pbVar4 = pbVar5;
          while (pbVar4 = pbVar4 + 1, pbVar5 = pbVar4, bVar1 != 0) {
            if (bVar1 == 0x3d) {
              if (*pbVar4 != 0) {
                bVar1 = pbVar4[-1];
                while (pbVar5 = pbVar4, 0x20 < bVar1) {
                  pbVar5 = pbVar4 + -2;
                  pbVar4 = pbVar4 + -1;
                  bVar1 = *pbVar5;
                }
              }
              break;
            }
            bVar1 = pbVar4[1];
          }
        }
      }
      else {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      }
    } while (*pbVar5 != 0);
    for (; (pbVar6 != param_1 && (pbVar6[-1] < 0x21)); pbVar6 = pbVar6 + -1) {
    }
  }
  if (pbVar3 + -2 <= pbVar6) {
    *pbVar6 = 0;
    if (pbVar6 + 1 < pbVar3) {
      if (DAT_0090d314 != 0) {
        *pbVar6 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
        pbVar6 = pbVar6 + 1;
      }
      *pbVar6 = 0;
    }
    return 0xffffffff;
  }
  if (pbVar6 != param_1) {
    *pbVar6 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pbVar6 = pbVar6 + 1;
  }
  if (*param_3 == 0) {
LAB_0083c79e:
    if (*param_3 != 0) {
      pbVar3 = pbVar6;
      if (pbVar6 != param_1) {
        while (pbVar3 = pbVar6 + -1, 0x1f < pbVar6[-1]) {
          pbVar6 = pbVar3;
          if (pbVar3 == param_1) {
            *pbVar3 = 0;
            return 0xffffffff;
          }
        }
        if (*pbVar3 == 10) {
          pbVar3 = pbVar6;
        }
      }
      *pbVar3 = 0;
      return 0xffffffff;
    }
  }
  else {
    do {
      if (pbVar3 + -1 <= pbVar6) goto LAB_0083c79e;
      *pbVar6 = *param_3;
      pbVar4 = param_3 + 1;
      pbVar6 = pbVar6 + 1;
      param_3 = param_3 + 1;
    } while (*pbVar4 != 0);
  }
  *pbVar6 = 0;
  return 1;
}

