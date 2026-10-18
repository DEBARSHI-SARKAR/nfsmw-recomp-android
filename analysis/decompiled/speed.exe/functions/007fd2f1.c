/* speed.exe 007fd2f1 FUN_007fd2f1; analysis pseudocode, not buildable source.
 * calls 007fd063 FUN_007fd063
 * calls 007fd03b FUN_007fd03b
 * calls 007fd11d FUN_007fd11d
 */

void FUN_007fd2f1(int *param_1,undefined4 param_2)

{
  if (param_1[*param_1 + 0xf] != param_1[0xe]) {
    param_1[0xe] = param_1[1];
    FUN_007fd03b(param_1);
    FUN_007fd11d(param_1,param_2);
    FUN_007fd063(param_1,param_2);
  }
  return;
}

