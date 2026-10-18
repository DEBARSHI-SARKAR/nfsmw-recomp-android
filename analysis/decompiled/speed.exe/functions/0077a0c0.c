/* speed.exe 0077a0c0 FUN_0077a0c0; analysis pseudocode, not buildable source.
 * calls 00771f50 FUN_00771f50
 */

void __fastcall FUN_0077a0c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00771f50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0xf) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

