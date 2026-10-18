/* speed.exe 0083325a FUN_0083325a; analysis pseudocode, not buildable source.
 * calls 00832f04 FUN_00832f04
 */

byte __thiscall FUN_0083325a(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  
  if ((int)(uint)*(ushort *)(param_1 + 10) <= (int)*(short *)(in_EAX + 6)) {
    return 0;
  }
  param_2 = param_2 + (uint)*(byte *)(param_1 + 5) * (int)*(short *)(in_EAX + 6);
  iVar1 = FUN_00832f04(param_1);
  return *(byte *)(iVar1 + param_2 / 8) & '\x01' << ((byte)(param_2 % 8) & 0x1f);
}

