/* speed.exe 004debc0 FUN_004debc0; analysis pseudocode, not buildable source.
 * calls 0081bab9 FUN_0081bab9
 * calls 0081da87 FUN_0081da87
 * calls 0081d93a FUN_0081d93a
 */

void __fastcall FUN_004debc0(int param_1)

{
  if ((((*(char *)(param_1 + 8) != '\0') && (*(char *)(*(int *)(param_1 + 0x28) + 0x97) != '\0')) &&
      (*(int *)(DAT_00911fa8 + 0x70) != 1)) &&
     (((*(int *)(DAT_00911fa8 + 0x70) != 8 && (*(char *)(*(int *)(param_1 + 0x28) + 0x96) != '\0'))
      && (DAT_00914290 != 0)))) {
    FUN_0081bab9();
    FUN_0081d93a();
    FUN_0081da87((&DAT_00914260)[*(int *)(*(int *)(param_1 + 0x28) + 0x98)]);
  }
  return;
}

