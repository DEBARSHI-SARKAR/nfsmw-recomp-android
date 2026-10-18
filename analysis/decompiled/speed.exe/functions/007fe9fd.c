/* speed.exe 007fe9fd FUN_007fe9fd; analysis pseudocode, not buildable source.
 */

void FUN_007fe9fd(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  if (param_3 != 0) {
    pbVar5 = param_1 + param_2 * 3;
    do {
      bVar2 = param_1[param_2];
      param_1[param_2] = (byte)((uint)*param_1 * 0x33 + 0x80 + (uint)bVar2 * 0xcd >> 8);
      bVar3 = param_1[param_2 * 2];
      bVar4 = *pbVar5;
      param_1[param_2 * 2] = (byte)((uint)bVar2 * 0x66 + 0x80 + (uint)bVar3 * 0x9a >> 8);
      *pbVar5 = (byte)((uint)bVar4 * 0x66 + 0x80 + (uint)bVar3 * 0x9a >> 8);
      pbVar1 = param_1 + param_2 * 5;
      param_1 = param_1 + 1;
      pbVar5[param_2] = (byte)((uint)*pbVar1 * 0x33 + 0x80 + (uint)bVar4 * 0xcd >> 8);
      pbVar5 = pbVar5 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

