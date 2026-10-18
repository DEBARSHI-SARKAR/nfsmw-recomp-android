/* speed.exe 007816c0 FUN_007816c0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0077d470 FUN_0077d470
 */

void __fastcall FUN_007816c0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_0077d470();
    FUN_005d0370(iVar1,0xc,0);
  }
  *param_1 = 0;
  return;
}

