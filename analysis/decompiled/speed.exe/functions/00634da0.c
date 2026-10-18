/* speed.exe 00634da0 FUN_00634da0; analysis pseudocode, not buildable source.
 * calls 00460bc0 FUN_00460bc0
 */

undefined4 FUN_00634da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0091f1d8;
  if ((((param_1 == 1) || (iVar1 = DAT_0091f150, param_1 == 3)) && (iVar1 != 0)) && (iVar1 != -4)) {
    if (iVar1 + 0x114 == 0) {
      return 0;
    }
    uVar2 = FUN_00460bc0(iVar1 + 0x114);
    return uVar2;
  }
  uVar2 = FUN_00460bc0(&DAT_00890978);
  return uVar2;
}

