/* speed.exe 008009cc FUN_008009cc; analysis pseudocode, not buildable source.
 */

void FUN_008009cc(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc + param_3 * 4);
  *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_3 * 0x80 + *(int *)(param_1 + 4));
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(&DAT_008c4d50 + *(int *)(param_1 + 8) * 4);
  return;
}

