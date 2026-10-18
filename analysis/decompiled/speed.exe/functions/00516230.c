/* speed.exe 00516230 FUN_00516230; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 */

undefined4 FUN_00516230(int param_1)

{
  if ((*(byte *)(param_1 + 0x1c) & 0x40) != 0) {
    FUN_00514c70(param_1);
    if ((*(uint *)(param_1 + 0x1c) & 0x10000000) != 0) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xefffffff;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return 1;
}

