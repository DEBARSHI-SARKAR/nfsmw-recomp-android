/* speed.exe 007a2960 FUN_007a2960; analysis pseudocode, not buildable source.
 * calls 00516b50 FUN_00516b50
 * calls 00516990 FUN_00516990
 */

void FUN_007a2960(void)

{
  char cVar1;
  
  cVar1 = FUN_00516b50("GarageMain.fng");
  if (cVar1 == '\0') {
    FUN_00516990("GarageMain.fng",100);
  }
  return;
}

