/* speed.exe 0056c6e0 FUN_0056c6e0; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00516b90 FUN_00516b90
 * calls 005258b0 FUN_005258b0
 * calls 005425d0 FUN_005425d0
 */

void FUN_0056c6e0(int param_1)

{
  char cVar1;
  
  if (DAT_008f5360 == param_1) {
    cVar1 = FUN_00516b90(DAT_008f5350);
    if (cVar1 != '\0') {
      if (DAT_008f5328 == 4) {
        FUN_005425d0();
      }
      else {
        FUN_005258b0(1);
      }
    }
    DAT_008f5360 = 0;
    FUN_00516c90(0xd731d75e,0,0);
  }
  return;
}

