/* speed.exe 007fe913 FUN_007fe913; analysis pseudocode, not buildable source.
 */

void FUN_007fe913(byte *param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar4 = param_3;
  if (param_2 != 4) {
    param_3 = (byte *)((param_2 - 5U >> 2) + 1);
    do {
      bVar1 = param_1[1];
      bVar2 = *param_1;
      *pbVar4 = bVar2;
      pbVar4[1] = (byte)((uint)bVar1 * 0xcd + 0x80 + (uint)bVar2 * 0x33 >> 8);
      bVar2 = param_1[2];
      bVar3 = param_1[3];
      pbVar4[2] = (byte)((uint)bVar1 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
      param_1 = param_1 + 4;
      pbVar4[3] = (byte)((uint)bVar3 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
      pbVar4[4] = (byte)((uint)*param_1 * 0x33 + 0x80 + (uint)bVar3 * 0xcd >> 8);
      pbVar4 = pbVar4 + 5;
      param_3 = (byte *)((int)param_3 + -1);
    } while (param_3 != (byte *)0x0);
  }
  bVar1 = param_1[1];
  bVar2 = *param_1;
  *pbVar4 = bVar2;
  pbVar4[1] = (byte)((uint)bVar1 * 0xcd + 0x80 + (uint)bVar2 * 0x33 >> 8);
  bVar2 = param_1[2];
  bVar3 = param_1[3];
  pbVar4[2] = (byte)((uint)bVar1 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
  pbVar4[3] = (byte)((uint)bVar3 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
  pbVar4[4] = bVar3;
  return;
}

