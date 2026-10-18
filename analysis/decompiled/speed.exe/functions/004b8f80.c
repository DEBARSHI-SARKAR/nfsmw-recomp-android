/* speed.exe 004b8f80 FUN_004b8f80; analysis pseudocode, not buildable source.
 * calls 007040a0 FUN_007040a0
 */

void __thiscall FUN_004b8f80(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    switch(param_4) {
    case 1:
      FUN_007040a0(1,param_2,1);
      return;
    case 5:
    case 6:
      FUN_007040a0(0,param_2,param_4);
      return;
    case 7:
      if (*(int *)(param_1 + 0x58) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xfc) = param_2;
      }
      if (*(int *)(param_1 + 0x5c) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x28) = param_2;
      }
    }
  }
  else if (param_3 == 7) {
    FUN_007040a0(0,param_2,param_4);
    return;
  }
  return;
}

