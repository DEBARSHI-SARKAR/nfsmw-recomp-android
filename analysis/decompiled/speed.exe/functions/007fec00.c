/* speed.exe 007fec00 FUN_007fec00; analysis pseudocode, not buildable source.
 */

void FUN_007fec00(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = param_3;
  if (param_2 != 3) {
    param_3 = (byte *)((param_2 - 4U) / 3 + 1);
    do {
      uVar4 = (uint)param_1[1];
      bVar1 = *param_1;
      *pbVar2 = bVar1;
      pbVar2[1] = (byte)(uVar4 * 0x9a + 0x80 + (uint)bVar1 * 0x66 >> 8);
      uVar3 = (uint)param_1[2];
      pbVar2[2] = (byte)(uVar4 * 0xcd + 0x80 + uVar3 * 0x33 >> 8);
      pbVar2[3] = (byte)(uVar3 * 0xcd + 0x80 + uVar4 * 0x33 >> 8);
      param_1 = param_1 + 3;
      pbVar2[4] = (byte)((uint)*param_1 * 0x66 + 0x80 + uVar3 * 0x9a >> 8);
      pbVar2 = pbVar2 + 5;
      param_3 = (byte *)((int)param_3 + -1);
    } while (param_3 != (byte *)0x0);
  }
  uVar3 = (uint)param_1[1];
  bVar1 = *param_1;
  *pbVar2 = bVar1;
  pbVar2[1] = (byte)(uVar3 * 0x9a + 0x80 + (uint)bVar1 * 0x66 >> 8);
  bVar1 = param_1[2];
  pbVar2[2] = (byte)(uVar3 * 0xcd + 0x80 + (uint)bVar1 * 0x33 >> 8);
  pbVar2[3] = (byte)((uint)bVar1 * 0xcd + 0x80 + uVar3 * 0x33 >> 8);
  pbVar2[4] = bVar1;
  return;
}

