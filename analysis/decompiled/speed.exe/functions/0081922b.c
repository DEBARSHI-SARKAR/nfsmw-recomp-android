/* speed.exe 0081922b FUN_0081922b; analysis pseudocode, not buildable source.
 */

uint FUN_0081922b(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  pbVar2 = param_1;
  local_8 = 0;
  local_c = 0;
  param_1 = (byte *)0x4;
  do {
    uVar3 = (uint)pbVar2[2];
    uVar4 = (uint)*pbVar2;
    uVar5 = (uint)pbVar2[6];
    local_8 = local_8 + uVar4 + uVar3 + (uint)pbVar2[4] + uVar5;
    pbVar1 = pbVar2 + 4;
    pbVar2 = pbVar2 + param_2 * 2;
    local_c = uVar5 * uVar5 + local_c +
              uVar4 * uVar4 + uVar3 * uVar3 + (uint)*pbVar1 * (uint)*pbVar1;
    param_1 = (byte *)((int)param_1 + -1);
  } while (param_1 != (byte *)0x0);
  return (uint)(local_c * 0x10 - local_8 * local_8) >> 8;
}

