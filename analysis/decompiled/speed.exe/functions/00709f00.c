/* speed.exe 00709f00 FUN_00709f00; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00464080 FUN_00464080
 * calls 00707610 FUN_00707610
 */

undefined4 FUN_00709f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00464080(DAT_00901bc8);
  if (param_1 <= iVar1) {
    uVar2 = FUN_00465a70(param_1,(DAT_00901bc8 & 0xf) + 0x1000);
    return uVar2;
  }
  if (DAT_00992295 != '\0') {
    FUN_00707610();
  }
  return 0;
}

