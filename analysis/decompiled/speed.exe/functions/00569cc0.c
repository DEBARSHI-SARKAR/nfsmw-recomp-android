/* speed.exe 00569cc0 FUN_00569cc0; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 005169b0 FUN_005169b0
 */

void FUN_00569cc0(void)

{
  char cVar1;
  
  cVar1 = FUN_00516b50("EA_Trax.fng");
  if (cVar1 != '\0') {
    FUN_005169b0("EA_Trax.fng");
  }
  return;
}

