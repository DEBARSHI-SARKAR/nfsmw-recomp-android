/* speed.exe 0083eca0 FUN_0083eca0; analysis pseudocode, not buildable source.
 * calls 0084d0f0 FUN_0084d0f0
 * calls 0084d1b0 FUN_0084d1b0
 */

void FUN_0083eca0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = FUN_0084d1b0(0x10);
    *(undefined4 *)(param_1 + 0xa4) = uVar1;
  }
  if (param_2 == 0) {
    param_2 = param_1 + 4;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    return;
  }
  FUN_0084d0f0(*(int *)(param_1 + 0xa4),param_2,param_3,0,0);
  return;
}

