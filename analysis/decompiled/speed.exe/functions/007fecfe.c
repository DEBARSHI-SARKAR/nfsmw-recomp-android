/* speed.exe 007fecfe FUN_007fecfe; analysis pseudocode, not buildable source.
 */

void FUN_007fecfe(byte *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int local_8;
  
  if (param_3 != (byte *)0x0) {
    pbVar3 = param_1 + param_2 * 2;
    local_8 = (int)param_3;
    param_3 = param_1 + param_2 * 4;
    do {
      uVar1 = (uint)param_1[param_2];
      param_1[param_2] = (byte)((uint)*param_1 * 0x66 + 0x80 + uVar1 * 0x9a >> 8);
      uVar2 = (uint)*pbVar3;
      *pbVar3 = (byte)(uVar1 * 0xcd + 0x80 + uVar2 * 0x33 >> 8);
      pbVar3[param_2] = (byte)(uVar2 * 0xcd + 0x80 + uVar1 * 0x33 >> 8);
      param_1 = param_1 + 1;
      pbVar3 = pbVar3 + 1;
      *param_3 = (byte)((uint)param_3[param_2] * 0x66 + 0x80 + uVar2 * 0x9a >> 8);
      param_3 = param_3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

