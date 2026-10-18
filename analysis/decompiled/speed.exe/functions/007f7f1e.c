/* speed.exe 007f7f1e FUN_007f7f1e; analysis pseudocode, not buildable source.
 * calls 007f1bf7 FUN_007f1bf7
 * calls 007f82d2 FUN_007f82d2
 * calls 004c7f30 FUN_004c7f30
 * calls 007f78c0 FUN_007f78c0
 */

void __fastcall FUN_007f7f1e(int *param_1)

{
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x19])(1);
    param_1[0x19] = 0;
  }
  if (*param_1 != 0) {
    FUN_007f82d2(1);
    *param_1 = 0;
  }
  if (param_1[0x17] != 0) {
    (*DAT_00909e58)(param_1[0x17]);
    param_1[0x17] = 0;
  }
  FUN_004c7f30(param_1[0xc]);
  param_1[0xc] = 0;
  if ((char)param_1[5] != '\0') {
    FUN_004c7f30(param_1[0xd]);
    param_1[0xd] = 0;
  }
  if (param_1[8] != 0) {
    FUN_007f78c0(param_1[8]);
    param_1[8] = 0;
  }
  if (param_1[10] != 0) {
    FUN_007f78c0(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[1] != 0) {
    (*DAT_00909e58)(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (*DAT_00909e58)(param_1[2]);
    param_1[2] = 0;
  }
  FUN_007f1bf7(param_1 + 0x1e,0xc,2,&DAT_007f781c);
  return;
}

