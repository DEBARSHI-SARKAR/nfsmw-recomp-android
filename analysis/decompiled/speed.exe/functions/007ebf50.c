/* speed.exe 007ebf50 FUN_007ebf50; analysis pseudocode, not buildable source.
 */

void FUN_007ebf50(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  param_2[1] = 1;
  param_2[2] = 0;
  switch(param_1) {
  case 8:
    *param_2 = 1;
    param_2[1] = 2;
    param_2[2] = 1;
    return;
  case 9:
    *param_2 = 2;
    param_2[2] = 1;
    param_2[1] = 2;
    return;
  case 10:
    *param_2 = 4;
    param_2[1] = 2;
    param_2[2] = 1;
    return;
  case 0xb:
    *param_2 = 8;
    param_2[1] = 2;
    param_2[2] = 1;
    return;
  case 0xc:
    *param_2 = 1;
    param_2[2] = 2;
    param_2[1] = 2;
    return;
  case 0xd:
    *param_2 = 2;
    param_2[2] = 2;
    param_2[1] = 2;
    return;
  case 0xe:
    *param_2 = 4;
    param_2[2] = 2;
    param_2[1] = 2;
    return;
  case 0xf:
    *param_2 = 8;
    param_2[2] = 2;
    param_2[1] = 2;
  }
  return;
}

