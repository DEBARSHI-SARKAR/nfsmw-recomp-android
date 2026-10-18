/* speed.exe 0072c300 FUN_0072c300; analysis pseudocode, not buildable source.
 * calls 00727e60 FUN_00727e60
 * calls 00658a00 FUN_00658a00
 */

void __thiscall FUN_0072c300(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = 0;
  DAT_00915f78 = 1;
  *(undefined4 *)(param_2 + 0x3c) = DAT_00982b78;
  FUN_00658a00(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x54),param_2);
  DAT_00915f78 = 0;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  *(undefined4 *)(param_2 + 0xc) = 3;
  FUN_00727e60(param_2);
  return;
}

