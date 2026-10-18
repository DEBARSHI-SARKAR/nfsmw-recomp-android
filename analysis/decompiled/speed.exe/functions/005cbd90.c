/* speed.exe 005cbd90 FUN_005cbd90; analysis pseudocode, not buildable source.
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 */

void FUN_005cbd90(int param_1,int param_2,int param_3,char *param_4)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char local_30 [48];
  
  local_30[0] = 'Y';
  local_30[1] = '\x03';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = -0x49;
  local_30[5] = '\v';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = -0x49;
  local_30[9] = '\x0e';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = -0x19;
  local_30[0xd] = '\x11';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[0x10] = -0xb;
  local_30[0x11] = '\v';
  local_30[0x12] = '\0';
  local_30[0x13] = '\0';
  local_30[0x14] = -0x7f;
  local_30[0x15] = '\x02';
  local_30[0x16] = '\0';
  local_30[0x17] = '\0';
  local_30[0x18] = '3';
  local_30[0x19] = '\b';
  local_30[0x1a] = '\0';
  local_30[0x1b] = '\0';
  local_30[0x1c] = 'C';
  local_30[0x1d] = '\t';
  local_30[0x1e] = '\0';
  local_30[0x1f] = '\0';
  local_30[0x20] = -0x7d;
  local_30[0x21] = '\f';
  local_30[0x22] = '\0';
  local_30[0x23] = '\0';
  local_30[0x24] = 'q';
  local_30[0x25] = '\x12';
  local_30[0x26] = '\0';
  local_30[0x27] = '\0';
  local_30[0x28] = '\'';
  local_30[0x29] = '\x13';
  local_30[0x2a] = '\0';
  local_30[0x2b] = '\0';
  local_30[0x2c] = -0x5d;
  local_30[0x2d] = '\r';
  local_30[0x2e] = '\0';
  local_30[0x2f] = '\0';
  pcVar3 = param_4;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_4 + 1);
  pcVar5 = _malloc(iVar4 * 4);
  iVar6 = 0;
  iVar7 = 0;
  pcVar3 = pcVar5;
  if (0 < iVar4) {
    do {
      *pcVar3 = local_30[iVar6 * 4] * param_4[iVar7];
      pcVar3[1] = local_30[iVar6 * 4 + 4] * param_4[iVar7];
      pcVar3[2] = local_30[(iVar6 + 1) * 4 + 4] * param_4[iVar7];
      pcVar3[3] = local_30[(iVar6 + 3) * 4] * param_4[iVar7];
      iVar6 = (iVar6 + 4) % 0xc;
      iVar7 = iVar7 + 1;
      pcVar3 = pcVar3 + 4;
    } while (iVar7 < iVar4);
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      iVar7 = iVar6 % (iVar4 * 4);
      pbVar1 = (byte *)(iVar6 + param_3);
      iVar6 = iVar6 + 1;
      *pbVar1 = pcVar5[iVar7] ^ pbVar1[param_1 - param_3];
    } while (iVar6 < param_2);
  }
  thunk_FUN_007c7250(pcVar5);
  return;
}

