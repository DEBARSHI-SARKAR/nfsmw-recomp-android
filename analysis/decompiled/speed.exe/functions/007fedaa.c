/* speed.exe 007fedaa FUN_007fedaa; analysis pseudocode, not buildable source.
 */

void FUN_007fedaa(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = param_1;
  if (param_3 != 0) {
    pbVar3 = param_1 + param_2 * 2;
    param_1 = (byte *)param_3;
    do {
      uVar2 = (uint)pbVar4[param_2];
      pbVar4[param_2] = (byte)((uint)*pbVar4 * 0x66 + 0x80 + uVar2 * 0x9a >> 8);
      bVar1 = *pbVar3;
      *pbVar3 = (byte)(uVar2 * 0xcd + 0x80 + (uint)bVar1 * 0x33 >> 8);
      pbVar3[param_2] = (byte)((uint)bVar1 * 0xcd + 0x80 + uVar2 * 0x33 >> 8);
      pbVar4[param_2 * 4] = bVar1;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
      param_1 = (byte *)((int)param_1 + -1);
    } while (param_1 != (byte *)0x0);
  }
  return;
}

