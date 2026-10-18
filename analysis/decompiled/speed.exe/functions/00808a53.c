/* speed.exe 00808a53 FUN_00808a53; analysis pseudocode, not buildable source.
 */

void FUN_00808a53(int param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int local_54 [14];
  int local_1c;
  char *local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  local_10 = 0;
  pbVar4 = (byte *)(param_1 + 0x73a);
  local_14 = (char *)(param_1 + 0x7a9);
  local_8 = -10;
  do {
    local_c = pbVar4 + 0x46;
    local_1c = 3;
    pcVar2 = local_14;
    pbVar3 = pbVar4;
    do {
      iVar5 = 0;
      iVar1 = 0;
      do {
        if (local_10 == iVar1) {
          local_54[iVar1] = 0;
        }
        else {
          local_54[iVar1] = (uint)pbVar3[iVar1 + local_8] * 100;
        }
        iVar5 = iVar5 + local_54[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 < 10);
      *local_c = -(char)((ulonglong)((uint)*pbVar3 * 0xff) /
                        (ulonglong)(longlong)(int)(pbVar3[-10] + 1 + (uint)*pbVar3)) - 1;
      iVar1 = local_54[2] + local_54[4] + local_54[3] + local_54[0];
      pcVar2[-1] = (char)((uint)(iVar1 * 0xff) / (iVar5 + 1U)) + '\x01';
      *pcVar2 = (char)((uint)((local_54[2] + local_54[0]) * 0xff) / (iVar1 + 1U)) + '\x01';
      iVar1 = local_54[6] + local_54[9] + local_54[8] + local_54[5];
      pcVar2[1] = (char)((uint)((local_54[1] + local_54[7]) * 0xff) /
                        (uint)(iVar1 + local_54[7] + 1 + local_54[1])) + '\x01';
      pcVar2[2] = (char)((uint)(local_54[0] * 0xff) / (local_54[2] + local_54[0] + 1U)) + '\x01';
      pcVar2[3] = (char)((uint)(local_54[3] * 0xff) / (local_54[4] + local_54[3] + 1U)) + '\x01';
      pcVar2[4] = (char)((uint)(local_54[1] * 0xff) / (local_54[1] + local_54[7] + 1U)) + '\x01';
      local_c = local_c + 10;
      pcVar2[5] = (char)((uint)((local_54[6] + local_54[5]) * 0xff) / (iVar1 + 1U)) + '\x01';
      pcVar2[6] = (char)((uint)(local_54[5] * 0xff) / (local_54[6] + local_54[5] + 1U)) + '\x01';
      pbVar3 = pbVar3 + 0x14;
      local_1c = local_1c + -1;
      pcVar2[7] = (char)((uint)(local_54[8] * 0xff) / (local_54[9] + local_54[8] + 1U)) + '\x01';
      pcVar2 = pcVar2 + 0x5a;
    } while (local_1c != 0);
    local_10 = local_10 + 1;
    local_14 = local_14 + 9;
    pbVar4 = pbVar4 + 1;
    local_8 = local_8 + -1;
  } while (-0x14 < local_8);
  return;
}

