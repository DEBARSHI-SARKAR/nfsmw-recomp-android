/* speed.exe 00727340 FUN_00727340; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00727280 FUN_00727280
 */

void FUN_00727340(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00460bf0(param_1);
  if (DAT_009a3a20 != 0) {
    FUN_00727280((int)*(short *)(DAT_009a3a20 + 0x8a),uVar1,param_2);
    return;
  }
  FUN_00727280(0,uVar1,param_2);
  return;
}

