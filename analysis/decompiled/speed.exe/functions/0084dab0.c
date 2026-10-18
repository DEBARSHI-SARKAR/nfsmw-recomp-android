/* speed.exe 0084dab0 FUN_0084dab0; analysis pseudocode, not buildable source.
 * calls 0086210a lineGetDevCaps
 * calls 007d6cb0 __security_check_cookie
 * calls 00846110 FUN_00846110
 * calls 008620e0 lineNegotiateAPIVersion
 * calls EXTERNAL:000000c3 wsprintfA
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084dab0(int param_1,char *param_2,LPSTR param_3,char *param_4,CHAR param_5)

{
  char cVar1;
  HLINEAPP hLineApp;
  LPSTR pCVar2;
  DWORD DVar3;
  char *pcVar4;
  LONG LVar5;
  char *pcVar6;
  int iVar7;
  linedevcaps_tag *plVar8;
  bool bVar9;
  DWORD local_42c;
  DWORD local_424;
  lineextensionid_tag local_420;
  linedevcaps_tag local_410 [3];
  undefined4 local_c;
  
  pCVar2 = param_3;
  local_c = DAT_00906980;
  *param_3 = '*';
  param_3[1] = '\0';
  param_3[2] = '\0';
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0xffffffff;
  }
  if (0x3f < (int)param_4) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 + (2 - (int)(param_2 + 1)) <= param_4) {
      local_42c = 0;
      if (*(int *)(param_1 + 0x84) != 0) {
        do {
          LVar5 = lineNegotiateAPIVersion
                            (*(HLINEAPP *)(param_1 + 0x88),local_42c,0x10004,0x20002,&local_424,
                             &local_420);
          if (LVar5 == 0) {
            hLineApp = *(HLINEAPP *)(param_1 + 0x88);
            plVar8 = local_410;
            for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
              plVar8->dwTotalSize = 0;
              plVar8 = (linedevcaps_tag *)&plVar8->dwNeededSize;
            }
            local_410[0].dwTotalSize = 0x400;
            lineGetDevCaps(hLineApp,local_42c,local_424,0,local_410);
            DVar3 = local_410[0].dwLineNameOffset;
            if (local_410[0].dwRingModes != 0) {
              iVar7 = 10;
              bVar9 = true;
              pcVar4 = param_2;
              pcVar6 = "localhost";
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                bVar9 = *pcVar4 == *pcVar6;
                pcVar4 = pcVar4 + 1;
                pcVar6 = pcVar6 + 1;
              } while (bVar9);
              pcVar4 = (char *)((int)&local_410[0].dwTotalSize + local_410[0].dwLineNameOffset);
              if (bVar9) {
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                if (param_4 < pcVar6 + (2 - ((int)&local_410[0].dwTotalSize +
                                            local_410[0].dwLineNameOffset + 1))) {
                  return 0xfffffffa;
                }
                if (param_3 != pCVar2) {
                  *param_3 = param_5;
                  param_3 = param_3 + 1;
                  param_4 = param_4 + -1;
                }
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6[(int)param_3 - (int)pcVar4] = cVar1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                pcVar6 = pcVar4;
                do {
                  cVar1 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 != '\0');
                param_3 = param_3 + ((int)pcVar6 - ((int)&local_410[0].dwTotalSize + DVar3 + 1));
                do {
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                } while (cVar1 != '\0');
                param_4 = param_4 + -((int)pcVar4 - ((int)&local_410[0].dwTotalSize + DVar3 + 1));
              }
              else {
                iVar7 = FUN_00846110(param_2,pcVar4);
                if (iVar7 == 0) {
                  wsprintfA(param_3,"%d%c",local_42c,0);
                  return 1;
                }
              }
            }
          }
          local_42c = local_42c + 1;
        } while (local_42c < *(uint *)(param_1 + 0x84));
      }
      *param_3 = '\0';
      param_3[1] = '\0';
      return 1;
    }
  }
  return 0xfffffffa;
}

