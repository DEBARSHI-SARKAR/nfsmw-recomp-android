/* speed.exe 008260cf FUN_008260cf; analysis pseudocode, not buildable source.
 */

void FUN_008260cf(undefined4 *param_1,byte param_2,int param_3)

{
  *param_1 = FUN_00825ef3;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  if (param_3 == 0) {
    if ((param_2 & 2) == 0) {
      param_1[9] = FUN_00827790;
    }
    else {
      param_1[9] = FUN_00827860;
    }
  }
  else {
    *(undefined2 *)((int)param_1 + 0x2a) = 1;
    if ((param_2 & 2) == 0) {
      param_1[9] = FUN_0082741d;
    }
    else {
      param_1[9] = FUN_008274f0;
    }
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

