/* speed.exe 00844a10 FUN_00844a10; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00844a10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1834) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1834) + 4 + param_2 * 0x14);
  }
  return 0;
}

