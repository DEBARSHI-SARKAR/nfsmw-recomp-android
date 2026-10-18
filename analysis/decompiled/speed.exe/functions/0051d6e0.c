/* speed.exe 0051d6e0 FUN_0051d6e0; analysis pseudocode, not buildable source.
 * calls 0063cd80 FUN_0063cd80
 * calls 0051d410 FUN_0051d410
 * calls 006284d0 FUN_006284d0
 * calls 00634370 FUN_00634370
 * calls 00628c50 FUN_00628c50
 */

void __fastcall FUN_0051d6e0(int param_1)

{
  char cVar1;
  
  FUN_00634370();
  cVar1 = FUN_00628c50();
  if ((cVar1 == '\0') || (*(int *)(param_1 + 0xe4) != 3)) {
    FUN_006284d0();
  }
  else {
    FUN_0063cd80();
  }
  *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x84) = 1;
  FUN_0051d410();
  return;
}

