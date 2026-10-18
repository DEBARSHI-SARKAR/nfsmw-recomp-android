/* speed.exe 0050e850 FUN_0050e850; analysis pseudocode, not buildable source.
 * calls 00460ca0 FUN_00460ca0
 */

int __thiscall
FUN_0050e850(int param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
            undefined1 param_9,undefined1 param_10,undefined1 *param_11)

{
  *(undefined4 *)(param_1 + 0x5c) = param_5;
  *(undefined1 *)(param_1 + 0x68) = param_8;
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined1 *)(param_1 + 0x69) = param_9;
  *(undefined1 *)(param_1 + 0x6a) = param_10;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = &DAT_00890978;
  }
  FUN_00460ca0(param_1,param_2,0x10);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_00890978;
  }
  FUN_00460ca0(param_1 + 0x14,param_3,0x10);
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = &DAT_00890978;
  }
  FUN_00460ca0(param_1 + 0x28,param_4,0x32);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  if (param_11 == (undefined1 *)0x0) {
    param_11 = &DAT_00890978;
  }
  FUN_00460ca0(param_1 + 0x6b,param_11,0x32);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  return param_1;
}

