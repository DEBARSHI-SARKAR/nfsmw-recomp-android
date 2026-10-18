/* speed.exe 007357f0 FUN_007357f0; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 * calls 007a1010 FUN_007a1010
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007357f0(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 3) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)((int)param_1 + 0x105) = 0;
    _DAT_009b4584 = DAT_00925ae8;
    param_1[0x1f] = DAT_00925b14;
    cVar1 = FUN_0078eba0();
    if (cVar1 != '\0') {
      FUN_007a1010();
      return;
    }
  }
  return;
}

