/* speed.exe 004dd540 FUN_004dd540; analysis pseudocode, not buildable source.
 */

void FUN_004dd540(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  switch(param_1) {
  case 1:
    *param_2 = 0x39;
    *param_3 = 3;
    *param_4 = 6;
    return;
  case 2:
    *param_2 = 9;
    *param_3 = 3;
    *param_4 = 6;
    return;
  case 3:
    *param_2 = 0x21;
    break;
  case 4:
    *param_2 = 0x4b;
    *param_3 = 3;
    *param_4 = 3;
    return;
  case 5:
  case 7:
    *param_2 = 0x54;
    *param_3 = 2;
    *param_4 = 3;
    return;
  default:
    *param_2 = 0;
    *param_3 = 3;
    *param_4 = 3;
    return;
  case 8:
  case 9:
    *param_2 = 0x2d;
    break;
  case 0xb:
    *param_2 = 0x1b;
    *param_3 = 2;
    *param_4 = 3;
    return;
  case 0xc:
    *param_2 = 0x15;
    *param_3 = 1;
    *param_4 = 6;
    return;
  }
  *param_3 = 2;
  *param_4 = 6;
  return;
}

