/* speed.exe 005360a0 FUN_005360a0; analysis pseudocode, not buildable source.
 * calls 00525940 FUN_00525940
 */

undefined4 FUN_005360a0(void)

{
  if (*(int *)(DAT_0091cf90 + 0x19c) == 2) {
    *(undefined4 *)(DAT_0091cf90 + 0x13c) = 0;
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 0x400;
    FUN_00525940("MainMenu_Sub.fng",0,0,0);
    return 1;
  }
  return 0;
}

