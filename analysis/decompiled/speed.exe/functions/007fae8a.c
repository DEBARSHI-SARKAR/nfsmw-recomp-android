/* speed.exe 007fae8a FUN_007fae8a; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007fae8a(int param_1,int param_2)

{
  undefined1 *in_EAX;
  int iVar1;
  
  iVar1 = 0x10;
  do {
    *in_EAX = (&DAT_009c1640)[*(ushort *)(param_1 + 2) & 0x1ff];
    in_EAX[1] = (&DAT_009c1640)[*(ushort *)(param_1 + 6) & 0x1ff];
    in_EAX[2] = (&DAT_009c1640)[*(ushort *)(param_1 + 10) & 0x1ff];
    in_EAX[3] = (&DAT_009c1640)[*(ushort *)(param_1 + 0xe) & 0x1ff];
    in_EAX[4] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x12) & 0x1ff];
    in_EAX[5] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x16) & 0x1ff];
    in_EAX[6] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x1a) & 0x1ff];
    in_EAX[7] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x1e) & 0x1ff];
    in_EAX[8] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x22) & 0x1ff];
    in_EAX[9] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x26) & 0x1ff];
    in_EAX[10] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x2a) & 0x1ff];
    in_EAX[0xb] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x2e) & 0x1ff];
    in_EAX[0xc] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x32) & 0x1ff];
    in_EAX[0xd] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x36) & 0x1ff];
    in_EAX[0xe] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x3a) & 0x1ff];
    in_EAX[0xf] = (&DAT_009c1640)[*(ushort *)(param_1 + 0x3e) & 0x1ff];
    param_1 = param_1 + 0x40;
    in_EAX = in_EAX + param_2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

