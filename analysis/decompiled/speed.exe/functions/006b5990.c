/* speed.exe 006b5990 FUN_006b5990; analysis pseudocode, not buildable source.
 * calls 006b4cc0 FUN_006b4cc0
 */

undefined * FUN_006b5990(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (0x3f < param_1) {
    return (undefined *)0x0;
  }
  if (&DAT_00935a48 + param_1 * 0x6c != (undefined *)0x0) {
    FUN_006b4cc0(param_2,param_3,param_4);
    return &DAT_00935a48 + param_1 * 0x6c;
  }
  return (undefined *)0x0;
}

