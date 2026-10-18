/* speed.exe 0085cbb0 FUN_0085cbb0; analysis pseudocode, not buildable source.
 * calls 0085be30 FUN_0085be30
 * calls 0085bc60 FUN_0085bc60
 */

void FUN_0085cbb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x18c) == 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_4;
    FUN_0085bc60(param_1,param_2,param_3);
    FUN_0085be30(param_1);
    *(undefined4 *)(param_1 + 0x18c) = 1;
  }
  return;
}

