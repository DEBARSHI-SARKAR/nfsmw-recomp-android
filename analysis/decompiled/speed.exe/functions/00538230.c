/* speed.exe 00538230 FUN_00538230; analysis pseudocode, not buildable source.
 * calls 00525940 FUN_00525940
 * calls 00537900 FUN_00537900
 */

void __fastcall FUN_00538230(int param_1)

{
  if (*(char *)(param_1 + 0x11a3) == '\x01') {
    *(undefined1 *)(param_1 + 0x11a3) = 0;
    if ((*(char *)(DAT_0091cf90 + 0x16c) != '\0') || (*(int *)(DAT_0091cf90 + 0x13c) == 0)) {
      FUN_00537900();
      return;
    }
    FUN_00525940(PTR_s_OL_LobbyRoom_fng_008f32b4,0,0,0);
  }
  return;
}

