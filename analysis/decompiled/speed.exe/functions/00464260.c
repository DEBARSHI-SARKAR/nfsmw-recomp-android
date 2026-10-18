/* speed.exe 00464260 FUN_00464260; analysis pseudocode, not buildable source.
 */

void FUN_00464260(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int local_8c;
  char local_87 [131];
  
  local_8c = 0;
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    local_8c = 0;
    while (cVar1 != '\0') {
      iVar4 = local_8c + 1;
      local_8c = local_8c + 1;
      cVar1 = param_2[iVar4];
    }
  }
  iVar4 = 0;
  if (0 < local_8c) {
    do {
      uVar2 = local_8c - iVar4;
      if (0x7e < (int)uVar2) {
        uVar2 = 0x7e;
      }
      pcVar5 = param_2 + iVar4;
      pcVar6 = local_87;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      iVar4 = iVar4 + uVar2;
      local_87[uVar2] = '\0';
    } while (iVar4 < local_8c);
  }
  return;
}

