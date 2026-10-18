/* speed.exe 005cbfe0 FUN_005cbfe0; analysis pseudocode, not buildable source.
 * calls 00666590 FUN_00666590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cbfe0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char local_8 [4];
  char local_4 [4];
  
  _DAT_0091df38 = local_8;
  local_8 = (char  [4])s_AppName_008a34d0._0_4_;
  local_4 = (char  [4])s_AppName_008a34d0._4_4_;
  iVar3 = 1;
  _DAT_0091dfb8 = 1;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    _DAT_0091df38 = local_8;
    while (((_DAT_0091dfb8 = iVar3, cVar2 != '\0' && (iVar3 < 0x20)) && (*param_3 != '\0'))) {
      do {
        if (*param_3 != ' ') break;
        *param_3 = '\0';
        pcVar1 = param_3 + 1;
        param_3 = param_3 + 1;
      } while (*pcVar1 != '\0');
      if (*param_3 == '\0') break;
      *(char **)(&DAT_0091df38 + iVar3 * 4) = param_3;
      iVar3 = iVar3 + 1;
      _DAT_0091dfb8 = iVar3;
      if (*param_3 == '\0') break;
      while (*param_3 != ' ') {
        pcVar1 = param_3 + 1;
        param_3 = param_3 + 1;
        if (*pcVar1 == '\0') {
          FUN_00666590(iVar3,&DAT_0091df38);
          return;
        }
      }
      cVar2 = *param_3;
    }
  }
  FUN_00666590(iVar3,&DAT_0091df38);
  return;
}

