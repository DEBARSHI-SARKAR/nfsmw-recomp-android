/* speed.exe 00739b40 FUN_00739b40; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_00739b40(int param_1,int param_2,int *param_3,int *param_4,char param_5)

{
  switch(param_2) {
  case 0x1c:
  case 0x2b:
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x30c) == '\x02') {
        *param_3 = 0;
        *param_4 = 0;
        return 1;
      }
      if (*(char *)(param_1 + 0x30c) == '\x01') {
        *param_3 = 0;
      }
      else {
        *param_3 = (param_5 == '\0') + 1;
      }
      *param_4 = (uint)(param_2 != 0x2b) * 2 + 2;
      return 1;
    }
    if (param_2 == 0x2b) {
      if (param_5 != '\0') {
        *param_3 = *(int *)(param_1 + 0x10);
        *param_4 = 2;
        return 1;
      }
      *param_3 = 0;
      *param_4 = 2;
      return 1;
    }
    break;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  }
  return 0;
}

