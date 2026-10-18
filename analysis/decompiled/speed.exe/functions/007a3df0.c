/* speed.exe 007a3df0 FUN_007a3df0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 005816b0 FUN_005816b0
 * calls 0056e2b0 FUN_0056e2b0
 */

bool FUN_007a3df0(int *param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0056e2b0();
  if (iVar1 == 1) {
    iVar1 = FUN_005816b0();
    return iVar1 != 0x3f;
  }
  iVar1 = FUN_0056e2b0();
  if (iVar1 == 2) {
    if (param_2 == 1) {
      uVar2 = FUN_005816b0();
      switch(uVar2) {
      case 5:
      case 0xc:
      case 0x16:
      case 0x3f:
      case 0x43:
      case 0x4a:
        goto switchD_007a3e3e_caseD_5;
      default:
        return false;
      }
    }
    if (param_2 == 0x10) {
      iVar1 = FUN_00460bf0("M3GTRCAREERSTART");
      return *param_1 == iVar1;
    }
  }
switchD_007a3e3e_caseD_5:
  return true;
}

