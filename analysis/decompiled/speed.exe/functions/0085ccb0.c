/* speed.exe 0085ccb0 FUN_0085ccb0; analysis pseudocode, not buildable source.
 * calls 0085be30 FUN_0085be30
 * calls 0085bbb0 FUN_0085bbb0
 */

void FUN_0085ccb0(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x18c) != 0) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) {
    FUN_0085bbb0(param_1,param_2);
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    FUN_0085be30(param_1);
  }
  return;
}

