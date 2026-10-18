/* speed.exe 0083ecf0 FUN_0083ecf0; analysis pseudocode, not buildable source.
 * calls 0084d1b0 FUN_0084d1b0
 * calls 0084cde0 FUN_0084cde0
 */

void FUN_0083ecf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  FUN_0084cde0(*(int *)(param_1 + 0xa4),param_2,&DAT_00890978,param_3,param_4,0);
  return;
}

