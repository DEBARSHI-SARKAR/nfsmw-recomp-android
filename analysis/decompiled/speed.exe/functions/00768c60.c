/* speed.exe 00768c60 FUN_00768c60; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

uint FUN_00768c60(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00460dd0(param_1,&DAT_008b5bec);
  if (iVar1 != 0) {
    uVar2 = FUN_00460dd0(param_1,&DAT_008b5be4);
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
  }
  return 1;
}

