/* speed.exe 0079c960 FUN_0079c960; analysis pseudocode, not buildable source.
 * calls 0079c840 FUN_0079c840
 * calls 00794ef0 FUN_00794ef0
 */

undefined4 __fastcall FUN_0079c960(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0079c840();
    FUN_00794ef0(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  return 0;
}

