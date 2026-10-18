/* speed.exe 00645ec0 FUN_00645ec0; analysis pseudocode, not buildable source.
 * calls 00644180 FUN_00644180
 * calls 006279b0 FUN_006279b0
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00660200 FUN_00660200
 * calls 006450c0 FUN_006450c0
 */

void __fastcall FUN_00645ec0(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    FUN_00644180();
    iVar1 = FUN_0064c9b0();
    if (iVar1 == 0) {
      FUN_006279b0();
      FUN_006450c0();
    }
    iVar1 = FUN_0064c9b0();
    if (iVar1 == 0) {
      FUN_00660200(0xffffffff,8,2);
    }
    DAT_0092038a = 0;
  }
  return;
}

