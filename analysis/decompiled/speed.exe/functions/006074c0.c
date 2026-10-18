/* speed.exe 006074c0 FUN_006074c0; analysis pseudocode, not buildable source.
 */

uint FUN_006074c0(uint param_1)

{
  if (0xffff < param_1) {
    if (0xffffff < param_1) {
      return (byte)(&DAT_008a3fc7)[param_1 >> 0x18] + 0x18;
    }
    return (byte)(&DAT_008a3fc7)[param_1 >> 0x10 & 0xff] + 0x10;
  }
  if (0xff < param_1) {
    return (byte)(&DAT_008a3fc7)[param_1 >> 8 & 0xff] + 8;
  }
  if (param_1 != 0) {
    return (uint)(byte)(&DAT_008a3fc7)[param_1 & 0xff];
  }
  return 0xffffffff;
}

