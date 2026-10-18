/* speed.exe 0044efc0 FUN_0044efc0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0044efc0(int *param_1,char param_2,char param_3)

{
  if (((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) && (param_2 != '\0')) {
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    FUN_00447cc0(param_1 + 6);
    if (param_3 == '\0') {
      FUN_0044bee0();
      FUN_0044ee40();
    }
    if (param_1[3] != 0) {
      FUN_00466330(param_1[3]);
      param_1[3] = 0;
    }
    if (*param_1 != 0) {
      FUN_00466330(*param_1);
      *param_1 = 0;
    }
    if (param_1[2] != 0) {
      FUN_00466330(param_1[2]);
      param_1[2] = 0;
    }
    if (param_1[1] != 0) {
      FUN_00466330(param_1[1]);
      param_1[1] = 0;
    }
    if (param_1[4] != 0) {
      FUN_00466330(param_1[4]);
      param_1[4] = 0;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return;
}

