/* speed.exe 007a4590 FUN_007a4590; analysis pseudocode, not buildable source.
 * calls 005fba70 FUN_005fba70
 * calls 00460dd0 FUN_00460dd0
 * calls 00460d20 FUN_00460d20
 * calls 0056e2b0 FUN_0056e2b0
 */

char FUN_007a4590(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0056e2b0();
  if (iVar1 == 1) {
    uVar2 = FUN_005fba70("19.8.1");
    iVar1 = FUN_00460d20(uVar2);
    if (iVar1 != 0) {
      uVar2 = FUN_005fba70("19.8.4");
      iVar1 = FUN_00460d20(uVar2);
      if (iVar1 != 0) {
        uVar2 = FUN_005fba70("19.8.10");
        iVar1 = FUN_00460d20(uVar2);
        if (iVar1 != 0) {
          uVar2 = FUN_005fba70("19.8.15");
          iVar1 = FUN_00460d20(uVar2);
          if (iVar1 != 0) {
            uVar2 = FUN_005fba70("19.8.29");
            iVar1 = FUN_00460d20(uVar2);
            return '\x01' - (iVar1 != 0);
          }
        }
      }
    }
  }
  else {
    iVar1 = FUN_0056e2b0();
    if (iVar1 == 2) {
      uVar2 = FUN_005fba70("19.8.15");
      iVar1 = FUN_00460dd0(uVar2);
      if (iVar1 != 0) {
        uVar2 = FUN_005fba70("19.8.45");
        iVar1 = FUN_00460dd0(uVar2);
        return '\x01' - (iVar1 != 0);
      }
    }
  }
  return '\x01';
}

