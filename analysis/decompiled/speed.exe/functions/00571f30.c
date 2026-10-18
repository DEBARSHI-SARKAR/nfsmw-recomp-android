/* speed.exe 00571f30 FUN_00571f30; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

void FUN_00571f30(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_MainMenu_fng_008f4320;
  do {
    iVar1 = FUN_00460dd0(param_1,*ppuVar2);
    if (iVar1 == 0) {
      ppuVar2[1] = param_2;
    }
    ppuVar2 = ppuVar2 + 2;
  } while ((int)ppuVar2 < 0x8f48b0);
  return;
}

