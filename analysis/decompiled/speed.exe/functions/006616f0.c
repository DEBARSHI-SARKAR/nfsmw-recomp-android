/* speed.exe 006616f0 FUN_006616f0; analysis pseudocode, not buildable source.
 * calls 00660ee0 FUN_00660ee0
 * calls 0064ac00 FUN_0064ac00
 */

void __thiscall FUN_006616f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  DAT_00925858 = DAT_00925858 + 1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    FUN_0064ac00(*(uint *)(param_1 + 0x10) >> 3 & 0xffffff01);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    FUN_00660ee0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x40),&LAB_0064acb0,param_1,0);
  }
  return;
}

