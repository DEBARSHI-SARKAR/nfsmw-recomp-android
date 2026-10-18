/* speed.exe 0056e100 FUN_0056e100; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

undefined4 FUN_0056e100(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00460dd0(param_1,"carlot");
  if (iVar1 == 0) {
    return 0x4eaee18b;
  }
  iVar1 = FUN_00460dd0(param_1,"safehouse");
  if (iVar1 == 0) {
    return 0xed39f69;
  }
  iVar1 = FUN_00460dd0(param_1,"customshop");
  uVar2 = 0xcf07089;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

