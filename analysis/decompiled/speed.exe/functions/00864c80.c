/* speed.exe 00864c80 FUN_00864c80; analysis pseudocode, not buildable source.
 * calls 00866260 FUN_00866260
 * calls 00866990 FUN_00866990
 * calls 00866230 FUN_00866230
 */

undefined4 FUN_00864c80(int param_1,int param_2,undefined4 param_3)

{
  if (((param_2 == 0x69646576) || (param_2 == 0x6f646576)) || (param_2 == 0x6c6f6f70)) {
    FUN_00866260(*(undefined4 *)(param_1 + 0x48),param_2,param_3);
  }
  else {
    if (param_2 == 0x7175616c) {
      FUN_00866990(0x7175616c,param_3);
      return 0;
    }
    if (param_2 == 0x6d696372) {
      FUN_00866230(*(undefined4 *)(param_1 + 0x48),param_3);
      return 0;
    }
    if (param_2 == 0x74696d65) {
      *(undefined4 *)(param_1 + 0x40) = param_3;
      return 0;
    }
  }
  return 0;
}

