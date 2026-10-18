/* speed.exe 00524770 FUN_00524770; analysis pseudocode, not buildable source.
 * calls 006466b0 FUN_006466b0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00524770(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar1,0x28c,0);
    *param_1 = 0;
  }
  return;
}

