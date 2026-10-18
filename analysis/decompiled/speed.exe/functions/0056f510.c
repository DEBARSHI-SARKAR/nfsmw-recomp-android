/* speed.exe 0056f510 FUN_0056f510; analysis pseudocode, not buildable source.
 */

undefined2 __thiscall FUN_0056f510(undefined2 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return *param_1;
  case 2:
    return param_1[1];
  default:
    return 0;
  case 4:
    return param_1[2];
  case 8:
    return param_1[3];
  case 0x10:
    return param_1[4];
  case 0x20:
    return param_1[5];
  case 0x40:
    return param_1[6];
  case 0x80:
    return param_1[7];
  }
}

