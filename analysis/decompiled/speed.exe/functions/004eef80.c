/* speed.exe 004eef80 FUN_004eef80; analysis pseudocode, not buildable source.
 * calls 004dcc60 FUN_004dcc60
 * calls 004e6a00 FUN_004e6a00
 * calls 00460bf0 FUN_00460bf0
 * calls 004eedc0 FUN_004eedc0
 * calls 004b02b0 FUN_004b02b0
 */

void __fastcall FUN_004eef80(int param_1)

{
  if ((*(char *)(param_1 + 0x22) == '\x02') && (*(char *)(param_1 + 8) != '\0')) {
    FUN_00460bf0("GB_NOS");
    if (*(int *)(param_1 + 0x30) == 0) {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x34) + 0x1d4) != 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_004eedc0(0,0,*(undefined4 *)(*(int *)(param_1 + 0x18) + 0xcc));
        FUN_004b02b0(0,0x3f800000,400,0);
      }
    }
    else if ((*(int *)(param_1 + 0x30) == 1) &&
            (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x34) + 0x1d4) == 0)) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004dcc60();
      }
      FUN_004b02b0(*(undefined4 *)(param_1 + 0x58),0,1000,0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if ((*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0xb0) != '\0') &&
       (*(int *)(param_1 + 0x2c) == 0)) {
      FUN_004e6a00();
    }
  }
  return;
}

