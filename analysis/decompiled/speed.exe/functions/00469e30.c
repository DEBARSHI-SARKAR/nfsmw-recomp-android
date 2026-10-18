/* speed.exe 00469e30 FUN_00469e30; analysis pseudocode, not buildable source.
 * calls 00734fe0 FUN_00734fe0
 */

uint FUN_00469e30(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  if (((((uVar1 & 4) == 0) || (*DAT_0091cf90 != '\x02')) && ((uVar1 >> 6 & 1) == 0)) &&
     (((uVar1 >> 3 & 1) == 0 || (uVar1 = FUN_00734fe0(), (char)uVar1 != '\0')))) {
    return CONCAT31((int3)((uint)*(int *)(DAT_0091cf90 + 0x10) >> 8),
                    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x47));
  }
  return uVar1 & 0xffffff00;
}

