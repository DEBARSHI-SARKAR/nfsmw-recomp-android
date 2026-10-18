/* speed.exe 00463f00 FUN_00463f00; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00463f00(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_20 [32];
  
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = '\0';
  if (*param_1 != 0) {
    pcVar2 = local_20;
    iVar3 = 0x1f;
    iVar4 = *param_1 - (int)pcVar2;
    do {
      cVar1 = pcVar2[iVar4];
      iVar3 = iVar3 + -1;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      pcVar2 = pcVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}

