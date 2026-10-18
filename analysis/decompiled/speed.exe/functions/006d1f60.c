/* speed.exe 006d1f60 FUN_006d1f60; analysis pseudocode, not buildable source.
 * calls 006c1010 FUN_006c1010
 */

void __fastcall FUN_006d1f60(undefined1 *param_1)

{
  *param_1 = 0;
  if ((DAT_0093cb18 != '\0') && (DAT_0093caf4 != (int *)0x0)) {
    (**(code **)(*DAT_0093caf4 + 0x30))(DAT_0093caf4);
    DAT_0093cb18 = '\0';
  }
  FUN_006c1010();
  return;
}

