/* speed.exe 0082f9f0 FUN_0082f9f0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082f9f0(int param_1)

{
  short sVar1;
  
  if (((-1 < param_1) && (param_1 < (int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12)))
     && (sVar1 = *(short *)(*(int *)(DAT_009c2964 + 0x18) +
                           (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + param_1 * 2) * 4),
        0 < sVar1)) {
    return *(undefined4 *)(*(int *)(DAT_009c2964 + 0x3c) + -8 + sVar1 * 8);
  }
  return 0;
}

