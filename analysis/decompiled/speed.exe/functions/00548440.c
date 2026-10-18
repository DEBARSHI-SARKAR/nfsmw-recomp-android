/* speed.exe 00548440 FUN_00548440; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00530240 FUN_00530240
 */

void __thiscall
FUN_00548440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00514c70(param_3);
  FUN_00514c70(*(undefined4 *)(param_1 + 0x30));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x34));
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_00530240();
  }
  return;
}

