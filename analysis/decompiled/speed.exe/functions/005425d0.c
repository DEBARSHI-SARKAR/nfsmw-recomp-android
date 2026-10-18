/* speed.exe 005425d0 FUN_005425d0; analysis pseudocode, not buildable source.
 * calls 005bbb80 FUN_005bbb80
 * calls 00525790 FUN_00525790
 */

void __fastcall FUN_005425d0(int *param_1)

{
  FUN_005bbb80();
  *(undefined1 *)(*param_1 + 0x524c) = 0;
  if ((char)param_1[1] != '\0') {
    FUN_00525790(1);
    if (0 < DAT_0091cae4) {
      DAT_0091cae4 = DAT_0091cae4 + -1;
    }
  }
  return;
}

