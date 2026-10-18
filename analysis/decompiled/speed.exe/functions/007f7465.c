/* speed.exe 007f7465 FUN_007f7465; analysis pseudocode, not buildable source.
 * calls 007f7439 FUN_007f7439
 * calls 007c5f80 _tolower
 * calls 007ca7e0 _isdigit
 * calls 007f7465 FUN_007f7465
 */

uint FUN_007f7465(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  pcVar2 = (char *)FUN_007f7439(param_2);
  if (pcVar2 == (char *)0x0) {
LAB_007f754f:
    do {
      cVar1 = *param_2;
      if (cVar1 == '*') {
        do {
          iVar3 = FUN_007f7465(param_1,param_2 + 1);
          if (iVar3 != 0) {
            return 1;
          }
          cVar1 = *param_1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        return 0;
      }
      if (cVar1 == '?') {
        bVar7 = *param_1 == '\0';
LAB_007f756f:
        if (bVar7) {
          return 0;
        }
      }
      else {
        if (cVar1 == '#') {
          iVar3 = _isdigit((int)*param_1);
          bVar7 = iVar3 == 0;
          goto LAB_007f756f;
        }
        if (cVar1 == '~') {
          iVar3 = FUN_007f7465(param_1,param_2 + 1);
          return (uint)(iVar3 == 0);
        }
        iVar3 = _tolower((int)*param_1);
        iVar6 = _tolower((int)*param_2);
        if (iVar6 != iVar3) {
          return 0;
        }
        if (*param_2 == '\0') {
          return 1;
        }
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while( true );
  }
  cVar1 = *pcVar2;
  if (cVar1 == '&') {
    *pcVar2 = '\0';
    iVar3 = FUN_007f7465(param_1,param_2);
    if ((iVar3 == 0) || (iVar3 = FUN_007f7465(param_1,pcVar2 + 1), iVar3 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *pcVar2 = '&';
    return uVar4;
  }
  if (cVar1 != '|') {
    if ((cVar1 != '!') && (cVar1 != '~')) {
      if (cVar1 == '^') {
        *pcVar2 = '\0';
        uVar4 = FUN_007f7465(param_1,pcVar2 + 1);
        uVar5 = FUN_007f7465(param_1,param_2);
        *pcVar2 = '^';
        return uVar4 ^ uVar5;
      }
      goto LAB_007f754f;
    }
    *pcVar2 = '\0';
    iVar3 = FUN_007f7465(param_1,param_2);
    if (iVar3 == 0) {
      iVar3 = FUN_007f7465(param_1,pcVar2 + 1);
      uVar4 = 0;
      if (iVar3 == 0) goto LAB_007f7547;
    }
    uVar4 = 1;
LAB_007f7547:
    *pcVar2 = '!';
    return uVar4;
  }
  *pcVar2 = '\0';
  iVar3 = FUN_007f7465(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = FUN_007f7465(param_1,pcVar2 + 1);
    uVar4 = 0;
    if (iVar3 == 0) goto LAB_007f74e8;
  }
  uVar4 = 1;
LAB_007f74e8:
  *pcVar2 = '|';
  return uVar4;
}

