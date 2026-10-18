/* speed.exe 00727300 FUN_00727300; analysis pseudocode, not buildable source.
 * calls 00727280 FUN_00727280
 */

void FUN_00727300(undefined4 param_1,undefined4 param_2)

{
  if (DAT_009a3a20 != 0) {
    FUN_00727280((int)*(short *)(DAT_009a3a20 + 0x8a),param_1,param_2);
    return;
  }
  FUN_00727280(0,param_1,param_2);
  return;
}

