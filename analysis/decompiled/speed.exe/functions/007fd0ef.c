/* speed.exe 007fd0ef FUN_007fd0ef; analysis pseudocode, not buildable source.
 * calls 007fd063 FUN_007fd063
 */

void FUN_007fd0ef(int *param_1,undefined4 param_2)

{
  if (param_1[*param_1 + 0xf] != param_1[0xe]) {
    param_1[0xe] = param_1[1];
    (*DAT_009c6a74)(param_1);
    FUN_007fd063(param_1,param_2);
  }
  return;
}

