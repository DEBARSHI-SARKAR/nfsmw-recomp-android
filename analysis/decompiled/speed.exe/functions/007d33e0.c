/* speed.exe 007d33e0 __setlocale_lk; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007c9470 _strncmp
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 007d3b60 __setlocale_get_all
 * calls 007d3790 __setlocale_set_cat
 * calls 007d3c70 __expandlocale
 * calls 007d1120 _strcmp
 * calls 007e2460 _strpbrk
 * calls 007d0cd0 _strlen
 * calls 007cae00 _strcspn
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setlocale_lk
   
   Library: Visual Studio 2003 Debug */

int __setlocale_lk(int param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined4 local_b8;
  undefined4 local_b4;
  char *local_a4;
  int local_9c;
  int local_98;
  char local_94 [136];
  undefined4 local_c;
  int local_8;
  
  local_c = DAT_00906980;
  if (param_1 == 0) {
    bVar1 = true;
    local_9c = 0;
    if (param_2 == (char *)0x0) {
      local_8 = __setlocale_get_all();
    }
    else if (((*param_2 == 'L') && (param_2[1] == 'C')) && (param_2[2] == '_')) {
      local_a4 = param_2;
      do {
        pcVar2 = _strpbrk(local_a4,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar5 = (int)pcVar2 - (int)local_a4, sVar5 == 0)) ||
           (*pcVar2 == ';')) {
          return 0;
        }
        local_98 = 1;
        while ((local_98 < 6 &&
               ((iVar3 = _strncmp(*(char **)(local_98 * 0xc + 0x906c78),local_a4,sVar5), iVar3 != 0
                || (sVar4 = _strlen(*(char **)(local_98 * 0xc + 0x906c78)), sVar5 != sVar4))))) {
          local_98 = local_98 + 1;
        }
        pcVar2 = pcVar2 + 1;
        sVar5 = _strcspn(pcVar2,";");
        if ((sVar5 == 0) && (*pcVar2 != ';')) {
          return 0;
        }
        if (local_98 < 6) {
          _strncpy(local_94,pcVar2,sVar5);
          local_94[sVar5] = '\0';
          iVar3 = __setlocale_set_cat(local_98,local_94);
          if (iVar3 != 0) {
            local_9c = local_9c + 1;
          }
        }
        local_a4 = pcVar2 + sVar5;
        if (*local_a4 != '\0') {
          local_a4 = local_a4 + 1;
        }
      } while (*local_a4 != '\0');
      if (local_9c == 0) {
        local_b4 = 0;
        local_8 = local_b4;
      }
      else {
        local_8 = __setlocale_get_all();
      }
    }
    else {
      iVar3 = __expandlocale(param_2,local_94,0,0,0);
      local_8 = 0;
      if (iVar3 != 0) {
        local_8 = iVar3;
        for (local_98 = 0; local_98 < 6; local_98 = local_98 + 1) {
          if (local_98 != 0) {
            iVar3 = _strcmp(local_94,(char *)(&DAT_00906c7c)[local_98 * 3]);
            if (iVar3 == 0) {
              local_9c = local_9c + 1;
            }
            else {
              iVar3 = __setlocale_set_cat(local_98,local_94);
              if (iVar3 == 0) {
                bVar1 = false;
              }
              else {
                local_9c = local_9c + 1;
              }
            }
          }
        }
        if (bVar1) {
          local_8 = __setlocale_get_all();
          __free_dbg(DAT_00906c7c,2);
          DAT_00906c7c = 0;
        }
        else if (local_9c == 0) {
          local_b8 = 0;
          local_8 = local_b8;
        }
        else {
          local_8 = __setlocale_get_all();
        }
      }
    }
  }
  else if (param_2 == (char *)0x0) {
    local_8 = (&DAT_00906c7c)[param_1 * 3];
  }
  else {
    local_8 = __setlocale_set_cat(param_1,param_2);
  }
  return local_8;
}

