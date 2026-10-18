/* speed.exe 0082a1d0 FUN_0082a1d0; analysis pseudocode, not buildable source.
 */

int FUN_0082a1d0(int param_1)

{
  if (-1 < param_1) {
    if (param_1 <= (int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12)) {
      return *(int *)(DAT_009c2964 + 0x18) +
             (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + param_1 * 2) * 4;
    }
  }
  return 0;
}

