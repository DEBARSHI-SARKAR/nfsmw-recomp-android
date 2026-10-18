/* speed.exe 004b6650 FUN_004b6650; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 00829310 FUN_00829310
 * calls 00829500 FUN_00829500
 * calls 0082a020 FUN_0082a020
 * calls 004b65b0 FUN_004b65b0
 */

void __thiscall FUN_004b6650(int param_1,int *param_2)

{
  if ((char)param_2[1] == '\0') {
    if ((&DAT_009121d8)[*param_2] == 0) goto LAB_004b66aa;
  }
  else {
    if ((&DAT_009121d8)[*param_2] == 0) goto LAB_004b66aa;
    FUN_00829310(param_2[9]);
    FUN_004b65b0(param_2);
  }
  FUN_00829500(param_2[9]);
  (&DAT_009121d8)[*param_2] = 0;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
LAB_004b66aa:
  if ((DAT_009121e4 == 0) && (DAT_009121e0 == 0 && (DAT_009121dc == 0 && DAT_009121d8 == 0))) {
    FUN_0081bccb();
    FUN_0082a020();
    FUN_0081bcd9();
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

