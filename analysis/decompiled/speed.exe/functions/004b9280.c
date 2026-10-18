/* speed.exe 004b9280 FUN_004b9280; analysis pseudocode, not buildable source.
 * calls 0081d51c FUN_0081d51c
 * calls 004af350 FUN_004af350
 * calls 0081b190 FUN_0081b190
 */

void __fastcall FUN_004b9280(int param_1)

{
  int iVar1;
  
  if ((char)(*(int **)(param_1 + 0xfc))[0xe] == '\0') {
    iVar1 = **(int **)(param_1 + 0xfc);
    if (iVar1 == 3) {
      iVar1 = FUN_0081b190();
      if (0 < iVar1) {
LAB_004b92ad:
        FUN_004af350();
        return;
      }
    }
    else if (iVar1 == 4) {
      iVar1 = FUN_0081d51c();
      if ((0 < iVar1) && (*(char *)(param_1 + 0x10d) == '\0')) goto LAB_004b92ad;
    }
  }
  return;
}

