/* speed.exe 0083db90 FUN_0083db90; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0083db90(byte *param_1)

{
  byte bVar1;
  ushort *unaff_ESI;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *unaff_ESI = (ushort)bVar1;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    *unaff_ESI = param_1[1] & 0xff3f | (bVar1 & 0x1f) << 6;
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    *unaff_ESI = (ushort)bVar1 << 0xc | param_1[2] & 0xff3f | (param_1[1] & 0xff3f) << 6;
    return 3;
  }
  return 4;
}

