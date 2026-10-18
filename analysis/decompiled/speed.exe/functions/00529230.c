/* speed.exe 00529230 FUN_00529230; analysis pseudocode, not buildable source.
 * calls 00527940 FUN_00527940
 * calls 00525940 FUN_00525940
 */

void __thiscall FUN_00529230(int param_1,undefined4 param_2)

{
  if ((*(char *)(DAT_0091cf90 + 4) != '\0') && (DAT_008f8708 != 0)) {
    FUN_00527940(*(undefined4 *)(param_1 + 0x10),param_2,0x400b3,0,0,0,0);
    return;
  }
  FUN_00525940(param_2,0,0,0);
  return;
}

