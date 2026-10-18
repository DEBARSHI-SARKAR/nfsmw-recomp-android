/* speed.exe 0083f4f0 FUN_0083f4f0; analysis pseudocode, not buildable source.
 * calls 0078af60 thunk_FUN_004655f0
 * calls 0084bcf0 FUN_0084bcf0
 */

void FUN_0083f4f0(int *param_1)

{
  (**(code **)(*param_1 + 0x20))(*param_1,0);
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 4))(*param_1);
  }
  thunk_FUN_004655f0(param_1[0x65]);
  FUN_0084bcf0(param_1 + 0x68);
  thunk_FUN_004655f0(param_1);
  return;
}

