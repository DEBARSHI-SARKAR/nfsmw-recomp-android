/* speed.exe 00866f20 FUN_00866f20; analysis pseudocode, not buildable source.
 * calls 00866920 FUN_00866920
 */

uint FUN_00866f20(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  if ((*(uint *)(param_1 + 0x18 + param_4 * 4) & param_5) != 0) {
    return 0xffffffff;
  }
  FUN_00866920(*(undefined4 *)(param_1 + 8 + param_4 * 4),param_2,param_3);
  *(int *)(param_1 + 0x10 + param_4 * 4) = *(int *)(param_1 + 0x10 + param_4 * 4) + 1;
  *(uint *)(param_1 + 0x18 + param_4 * 4) = *(uint *)(param_1 + 0x18 + param_4 * 4) | param_5;
  return (uint)(param_4 == 0);
}

