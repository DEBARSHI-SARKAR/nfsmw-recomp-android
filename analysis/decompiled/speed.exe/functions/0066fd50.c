/* speed.exe 0066fd50 FUN_0066fd50; analysis pseudocode, not buildable source.
 * calls 006686d0 FUN_006686d0
 */

int __thiscall
FUN_0066fd50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  FUN_006686d0(param_1);
  *(undefined4 *)(param_1 + 4) = 0xa6b47fac;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(int *)(param_1 + 8) = param_1;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_7;
  return param_1;
}

