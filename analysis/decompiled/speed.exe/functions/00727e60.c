/* speed.exe 00727e60 FUN_00727e60; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 006cb2a0 FUN_006cb2a0
 * calls 0072c300 FUN_0072c300
 */

void __thiscall FUN_00727e60(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xc) == 4) {
    FUN_0072c300(param_2);
  }
  if (*(int *)(param_2 + 0xc) == 3) {
    if (((*(int *)(param_2 + 0x3c) != 0) && (*(int *)(param_2 + 0x3c) == DAT_00982b78)) &&
       (*(int *)(param_1 + 0x2b4) != DAT_00982b78)) {
      DAT_00915f79 = 1;
      FUN_006cb2a0();
      DAT_00915f79 = 0;
      *(int *)(param_1 + 0x2b4) = DAT_00982b78;
    }
    *(undefined4 *)(param_2 + 0x3c) = 0;
    FUN_004655f0(*(undefined4 *)(param_2 + 0x4c));
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  return;
}

