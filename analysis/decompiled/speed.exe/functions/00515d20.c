/* speed.exe 00515d20 FUN_00515d20; analysis pseudocode, not buildable source.
 * calls 004643d0 FUN_004643d0
 * calls 0057e8c0 FUN_0057e8c0
 */

undefined4 __fastcall FUN_00515d20(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    uVar1 = FUN_004643d0(&DAT_0091c5c0,param_1);
    if (*(uint *)(unaff_ESI + 0x68) < 0x400) {
      (&DAT_0091c5bf)[*(uint *)(unaff_ESI + 0x68)] = 0;
    }
    FUN_0057e8c0(&DAT_0091c5c0);
    *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400002;
    return uVar1;
  }
  return 0;
}

