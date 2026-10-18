/* speed.exe 007f85de FUN_007f85de; analysis pseudocode, not buildable source.
 * calls 007c5f80 _tolower
 */

int FUN_007f85de(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (*unaff_EDI != '\0') {
    pcVar3 = unaff_EDI;
    do {
      if (pcVar3[param_1 - (int)unaff_EDI] == '\0') break;
      iVar1 = _tolower((int)pcVar3[param_1 - (int)unaff_EDI]);
      iVar2 = _tolower((int)*pcVar3);
      if (iVar2 - iVar1 != 0) {
        return iVar2 - iVar1;
      }
      local_8 = local_8 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
  }
  return (int)unaff_EDI[local_8] - (int)*(char *)(local_8 + param_1);
}

