/* speed.exe 0083c9b0 FUN_0083c9b0; analysis pseudocode, not buildable source.
 * calls 0083adc0 FUN_0083adc0
 * calls 0083c7e0 FUN_0083c7e0
 * calls 0083c880 FUN_0083c880
 * calls 0083a670 FUN_0083a670
 * calls 0083a980 FUN_0083a980
 * calls 007df440 __snprintf
 * calls 0083acd0 FUN_0083acd0
 * calls 0083bb00 FUN_0083bb00
 * calls 0083afb0 FUN_0083afb0
 */

int FUN_0083c9b0(byte *param_1,size_t param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  size_t sVar7;
  undefined1 *local_4;
  
  local_4 = &DAT_00890978;
  sVar7 = param_2;
  if (*param_3 == 0x7e) {
    param_3 = param_3 + 1;
    bVar1 = *param_1;
    while (bVar1 != 0) {
      if ((int)sVar7 < 2) goto LAB_0083ca3c;
      pbVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      sVar7 = sVar7 - 1;
      bVar1 = *pbVar5;
    }
    if (((1 < (int)sVar7) && ((int)sVar7 < (int)param_2)) && ('\x1f' < (char)param_1[-1])) {
      *param_1 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
      param_1 = param_1 + 1;
      sVar7 = sVar7 - 1;
    }
  }
  else if ((*param_3 == 0x2c) && (*param_1 != 0)) {
    do {
      if ((int)sVar7 < 2) break;
      pbVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      sVar7 = sVar7 - 1;
    } while (*pbVar5 != 0);
    do {
      if ((int)param_2 <= (int)sVar7) break;
      if (' ' < (char)param_1[-1]) {
        if (((int)sVar7 < (int)param_2) && (param_1[-1] == 0x3d)) {
          param_3 = param_3 + 1;
        }
        break;
      }
      param_1 = param_1 + -1;
      sVar7 = sVar7 + 1;
    } while( true );
  }
LAB_0083ca3c:
  bVar1 = *param_3;
  if (bVar1 != 0) {
    puVar6 = &param_3;
    do {
      pbVar5 = param_3 + 1;
      if ((int)sVar7 < 2) break;
      if (bVar1 < 0x21) {
        *param_1 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
        param_1 = param_1 + 1;
        sVar7 = sVar7 - 1;
        bVar1 = *pbVar5;
        while ((bVar1 != 0 && ((char)bVar1 < '!'))) {
          pbVar4 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar1 = *pbVar4;
        }
      }
      else if (bVar1 == 0x23) {
        param_3 = pbVar5;
        iVar2 = __snprintf((char *)param_1,sVar7,"%d",puVar6[1]);
LAB_0083cacf:
        param_1 = param_1 + iVar2;
        sVar7 = sVar7 - iVar2;
LAB_0083cad3:
        puVar6 = puVar6 + 1;
      }
      else if (bVar1 == 0x25) {
        bVar1 = *pbVar5;
        if (bVar1 != 0) {
          pbVar5 = param_3 + 2;
          *param_1 = 0;
          param_3 = pbVar5;
          if (bVar1 == 0x73) {
            iVar2 = FUN_0083c880(param_1,sVar7,0,puVar6[1]);
          }
          else if (bVar1 == 100) {
            iVar2 = FUN_0083a980(param_1,sVar7,0,puVar6[1]);
          }
          else if (bVar1 == 0x74) {
            iVar2 = FUN_0083afb0(param_1,sVar7,0,puVar6[1]);
          }
          else if (bVar1 == 0x61) {
            iVar2 = FUN_0083adc0(param_1,sVar7,0,puVar6[1]);
          }
          else if (bVar1 == 0x66) {
            iVar2 = FUN_0083acd0(param_1,sVar7,0,puVar6[1]);
          }
          else {
            if (bVar1 != 0x65) {
              if (bVar1 == 0x69) {
                local_4 = (undefined1 *)puVar6[1];
                puVar6 = puVar6 + 1;
              }
              else {
                if (bVar1 == 0x78) {
                  uVar3 = FUN_0083a670(local_4,puVar6[1]);
                  iVar2 = FUN_0083c7e0(param_1,sVar7,0,uVar3);
                  goto LAB_0083cacb;
                }
                if (bVar1 == 0x72) {
                  pbVar4 = (byte *)puVar6[1];
                  bVar1 = *pbVar4;
                  puVar6 = puVar6 + 1;
                  for (; (bVar1 != 0 && (0 < (int)sVar7)); sVar7 = sVar7 - 1) {
                    *param_1 = bVar1;
                    bVar1 = pbVar4[1];
                    param_1 = param_1 + 1;
                    pbVar4 = pbVar4 + 1;
                  }
                }
              }
              goto LAB_0083cad7;
            }
            iVar2 = FUN_0083bb00(param_1,sVar7,0,puVar6[1]);
          }
LAB_0083cacb:
          if (0 < iVar2) goto LAB_0083cacf;
          goto LAB_0083cad3;
        }
      }
      else {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        sVar7 = sVar7 - 1;
      }
LAB_0083cad7:
      bVar1 = *pbVar5;
      param_3 = pbVar5;
    } while (bVar1 != 0);
  }
  if (((s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40] == '\n') && (param_2 != sVar7)) &&
     (1 < (int)sVar7)) {
    *param_1 = 10;
    param_1 = param_1 + 1;
    sVar7 = sVar7 - 1;
  }
  if (0 < (int)sVar7) {
    *param_1 = 0;
  }
  return param_2 - sVar7;
}

