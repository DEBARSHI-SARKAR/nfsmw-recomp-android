/* speed.exe 0084cde0 FUN_0084cde0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6610 FUN_007c6610
 * calls 0084c580 FUN_0084c580
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0084cde0(int param_1,undefined4 param_2,char *param_3,undefined1 *param_4,char *param_5,
                int param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int local_30c;
  int local_308;
  char local_304 [256];
  char local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_30c = 0;
  if ((int)param_5 < 5) {
    return -1;
  }
  *param_4 = 0;
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 != *(int *)(param_1 + 0x2c)) {
    local_308 = -0x28 - iVar7;
    do {
      if (((*(char *)(iVar7 + 0x28) != '\0') && (iVar2 = FUN_0084c580(), iVar2 == 0)) &&
         ((param_6 != 0 || (*(int *)(iVar7 + 0x19c) == 0)))) {
        pcVar6 = (char *)(iVar7 + 0x108);
        cVar1 = *(char *)(iVar7 + 0x108);
        while (cVar1 != '\0') {
          pcVar3 = local_304;
          cVar1 = *pcVar6;
          while ((cVar1 != '\0' && (cVar1 != '\t'))) {
            *pcVar3 = cVar1;
            pcVar4 = pcVar6 + 1;
            pcVar3 = pcVar3 + 1;
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar4;
          }
          *pcVar3 = '\0';
          if (*pcVar6 == '\t') {
            pcVar6 = pcVar6 + 1;
          }
          pcVar3 = local_304;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          if (((4 < (uint)((int)pcVar3 - (int)(local_304 + 1))) && (local_304[3] == ':')) &&
             ((local_304[3] = '\0', *param_3 == '\0' ||
              (iVar2 = FUN_007c6610(param_3,local_304), iVar2 != 0)))) {
            local_304[3] = ':';
            pcVar3 = (char *)(iVar7 + 0x28);
            do {
              cVar1 = *pcVar3;
              (local_204 + local_308)[(int)pcVar3] = cVar1;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcVar3 = local_204;
            cVar1 = local_204[0];
            while (cVar1 != '\0') {
              pcVar4 = pcVar3 + 1;
              pcVar3 = pcVar3 + 1;
              cVar1 = *pcVar4;
            }
            *pcVar3 = '\t';
            pcVar3 = pcVar3 + 1;
            pcVar4 = (char *)(iVar7 + 0x48);
            iVar2 = (int)pcVar3 - (int)pcVar4;
            do {
              cVar1 = *pcVar4;
              pcVar4[iVar2] = cVar1;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            cVar1 = *pcVar3;
            while (cVar1 != '\0') {
              pcVar4 = pcVar3 + 1;
              pcVar3 = pcVar3 + 1;
              cVar1 = *pcVar4;
            }
            *pcVar3 = '\t';
            pcVar3 = pcVar3 + 1;
            pcVar4 = local_304;
            cVar1 = local_304[0];
            while (cVar1 != '\0') {
              if (*pcVar4 == '~') {
                if (pcVar4[1] != '1') {
                  if (pcVar4[1] == '2') goto LAB_0084cfd2;
                  goto LAB_0084cfc5;
                }
                pcVar5 = (char *)(iVar7 + 0x184);
                if (*(char *)(iVar7 + 0x184) == '\0') {
LAB_0084cfd2:
                  if (*pcVar4 != '\0') goto LAB_0084d07d;
                  break;
                }
                iVar2 = (int)pcVar3 - (int)pcVar5;
                do {
                  cVar1 = *pcVar5;
                  pcVar5[iVar2] = cVar1;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 != '\0');
                cVar1 = *pcVar3;
                while (cVar1 != '\0') {
                  pcVar5 = pcVar3 + 1;
                  pcVar3 = pcVar3 + 1;
                  cVar1 = *pcVar5;
                }
                pcVar4 = pcVar4 + 1;
              }
              else {
LAB_0084cfc5:
                *pcVar3 = *pcVar4;
                pcVar3 = pcVar3 + 1;
              }
              pcVar5 = pcVar4 + 1;
              pcVar4 = pcVar4 + 1;
              cVar1 = *pcVar5;
            }
            *pcVar3 = '\n';
            pcVar3[1] = '\0';
            pcVar3 = local_204;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            if (param_5 < pcVar3 + (5 - (int)(local_204 + 1))) {
              *param_4 = 0x2e;
              param_4[1] = 0x2e;
              param_4[2] = 0x2e;
              param_4[3] = 10;
              param_4[4] = 0;
              return local_30c;
            }
            pcVar3 = local_204;
            iVar2 = (int)param_4 - (int)pcVar3;
            do {
              cVar1 = *pcVar3;
              pcVar3[iVar2] = cVar1;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcVar3 = local_204;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            param_4 = param_4 + ((int)pcVar3 - (int)(local_204 + 1));
            pcVar3 = local_204;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            param_5 = param_5 + -((int)pcVar3 - (int)(local_204 + 1));
            local_30c = local_30c + 1;
          }
LAB_0084d07d:
          cVar1 = *pcVar6;
        }
      }
      iVar7 = iVar7 + 0x1a4;
      local_308 = local_308 + -0x1a4;
    } while (iVar7 != *(int *)(param_1 + 0x2c));
  }
  return local_30c;
}

