/* speed.exe 007a31d0 FUN_007a31d0; analysis pseudocode, not buildable source.
 */

void FUN_007a31d0(void)

{
  *(byte *)(DAT_0091cf90 + 0x141) = ~(byte)(*(uint *)(DAT_0091cf90 + 300) >> 6) & 1;
  *(undefined1 *)(DAT_0091cf90 + 0x191) = 0;
  *(char *)(DAT_0091cf90 + 400) = (*(int *)(DAT_0091cf90 + 0x168) == 1) * '\x02' + '\x01';
  *(undefined1 *)(DAT_0091cf90 + 0x142) = 1;
  *(undefined1 *)(DAT_0091cf90 + 0x143) = 1;
  *(undefined1 *)(DAT_0091cf90 + 0x15f) = 1;
  *(undefined4 *)(DAT_0091cf90 + 0x160) = 6;
  *(undefined1 *)(DAT_0091cf90 + 0x173) = 0;
  *(undefined1 *)(DAT_0091cf90 + 0x138) = 2;
  return;
}

