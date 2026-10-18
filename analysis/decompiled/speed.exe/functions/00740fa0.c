/* speed.exe 00740fa0 FUN_00740fa0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00740fa0(int param_1,int param_2)

{
  ushort uVar1;
  
  if (((*(char *)(DAT_0091cf90 + 0x141) != '\0') || (DAT_00926064 != 0)) && (DAT_009b10a5 == '\0'))
  {
    uVar1 = *(ushort *)(param_1 + 0x122c + param_2 * 2);
    if (uVar1 < 0xfe01) {
      *(ushort *)(param_1 + 0x122c + param_2 * 2) = uVar1 + 1;
    }
  }
  return;
}

