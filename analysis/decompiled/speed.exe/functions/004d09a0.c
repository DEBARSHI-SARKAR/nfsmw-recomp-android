/* speed.exe 004d09a0 FUN_004d09a0; analysis pseudocode, not buildable source.
 * calls 0064cef0 thunk_FUN_007ec59c
 * calls 004b45c0 FUN_004b45c0
 * calls 00661c70 FUN_00661c70
 * calls 004d0610 FUN_004d0610
 * calls 004e3f80 FUN_004e3f80
 */

void __fastcall FUN_004d09a0(int param_1)

{
  int *piVar1;
  
  DAT_0091205c = 0;
  piVar1 = &DAT_00911f60;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x18))();
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x911f94);
  while ((((DAT_0091236c != 0 || (DAT_00912378 != 0)) || (DAT_0091237d != '\0')) ||
         (DAT_0091230c < DAT_00912310 + -1))) {
    FUN_004d0610(0x3dcccccd);
    FUN_00661c70();
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_004e3f80();
  }
  if (DAT_00912100 != 0) {
    FUN_004b45c0();
  }
  thunk_FUN_007ec59c();
  return;
}

