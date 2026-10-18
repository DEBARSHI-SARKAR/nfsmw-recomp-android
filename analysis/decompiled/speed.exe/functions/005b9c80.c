/* speed.exe 005b9c80 FUN_005b9c80; analysis pseudocode, not buildable source.
 * calls 005b45b0 FUN_005b45b0
 */

void __thiscall FUN_005b9c80(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005b45b0(param_2,param_1 + 0x74,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x60),1);
  FUN_005b45b0(param_3,param_1 + 0x78,param_1 + 0x80,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 100),0);
  return;
}

