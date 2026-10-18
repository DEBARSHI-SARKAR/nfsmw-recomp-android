/* speed.exe 007feaa0 FUN_007feaa0; analysis pseudocode, not buildable source.
 */

void FUN_007feaa0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (param_3 != 0) {
    pbVar4 = param_1 + param_2 * 3;
    do {
      bVar1 = param_1[param_2];
      param_1[param_2] = (byte)((uint)*param_1 * 0x33 + 0x80 + (uint)bVar1 * 0xcd >> 8);
      bVar2 = param_1[param_2 * 2];
      bVar3 = *pbVar4;
      param_1[param_2 * 2] = (byte)((uint)bVar1 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
      *pbVar4 = (byte)((uint)bVar3 * 0x66 + 0x80 + (uint)bVar2 * 0x9a >> 8);
      param_1 = param_1 + 1;
      pbVar4[param_2] = bVar3;
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

