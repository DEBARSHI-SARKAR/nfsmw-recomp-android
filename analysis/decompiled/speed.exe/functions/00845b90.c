/* speed.exe 00845b90 FUN_00845b90; analysis pseudocode, not buildable source.
 */

void FUN_00845b90(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_2 == 0) {
    param_2 = 0x1ff;
  }
  bVar1 = (byte)(param_2 >> 6) & 7;
  bVar2 = (byte)(param_2 >> 3) & 7;
  bVar3 = (byte)param_2 & 7;
  *param_1 = (bVar1 << 3 | bVar1) << 2 | bVar1 >> 1;
  param_1[1] = (bVar2 << 3 | bVar2) << 2 | bVar2 >> 1;
  param_1[2] = (bVar3 << 3 | bVar3) << 2 | bVar3 >> 1;
  param_1[3] = 0xff;
  return;
}

