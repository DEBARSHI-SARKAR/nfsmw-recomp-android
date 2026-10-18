/* speed.exe 0058c590 FUN_0058c590; analysis pseudocode, not buildable source.
 * calls 0057acc0 FUN_0057acc0
 */

void __thiscall
FUN_0058c590(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if (param_2 < 4) {
    if ((((0 < param_3) && (param_3 < *(int *)(param_1 + 0xc))) &&
        (*(int *)(param_2 * 0x78 + 0x88 + param_1) < param_3)) &&
       (param_2 == *(int *)(param_1 + 0x10))) {
      FUN_0057acc0(param_5);
    }
    param_1 = param_2 * 0x78 + param_1;
    *(int *)(param_1 + 0x88) = param_3;
    *(undefined4 *)(param_1 + 0x7c) = param_4;
  }
  return;
}

