/* speed.exe 007fafb9 FUN_007fafb9; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007fafb9(int param_1,int param_2)

{
  undefined1 *in_EAX;
  int iVar1;
  
  iVar1 = 8;
  do {
    *in_EAX = (&DAT_009c1640)[*(ushort *)(param_1 + 2) & 0x1ff];
    in_EAX[1] = (&DAT_009c1640)[*(ushort *)(param_1 + 6) & 0x1ff];
    in_EAX[2] = (&DAT_009c1640)[*(ushort *)(param_1 + 10) & 0x1ff];
    in_EAX[3] = (&DAT_009c1640)[*(ushort *)(param_1 + 0xe) & 0x1ff];
    in_EAX[4] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x12) & 0x1ff];
    in_EAX[5] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x16) & 0x1ff];
    in_EAX[6] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x1a) & 0x1ff];
    in_EAX[7] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x1e) & 0x1ff];
    in_EAX = in_EAX + param_2;
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 0x20;
  } while (iVar1 != 0);
  return;
}

