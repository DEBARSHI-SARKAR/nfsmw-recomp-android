/* speed.exe 0056f410 FUN_0056f410; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0056f410(short *param_1,byte param_2)

{
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((param_2 & 8) != 0) {
    param_1[3] = param_1[3] + 1;
  }
  if ((param_2 & 0x20) != 0) {
    param_1[5] = param_1[5] + 1;
  }
  if ((param_2 & 0x10) != 0) {
    param_1[4] = param_1[4] + 1;
  }
  if ((char)param_2 < '\0') {
    param_1[7] = param_1[7] + 1;
  }
  if ((param_2 & 2) != 0) {
    param_1[1] = param_1[1] + 1;
  }
  if ((param_2 & 4) != 0) {
    param_1[2] = param_1[2] + 1;
  }
  if ((param_2 & 0x40) != 0) {
    param_1[6] = param_1[6] + 1;
  }
  if ((param_2 & 1) != 0) {
    *param_1 = *param_1 + 1;
  }
  return;
}

