/* speed.exe 0067c040 FUN_0067c040; analysis pseudocode, not buildable source.
 * calls 0067bf80 FUN_0067bf80
 * calls 006e8d10 FUN_006e8d10
 */

undefined4 FUN_0067c040(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 0x34027) {
    if (DAT_00925860 == 0) {
      cVar1 = FUN_006e8d10();
      if (cVar1 != '\0') {
        FUN_0067bf80();
      }
    }
    return 1;
  }
  return 0;
}

