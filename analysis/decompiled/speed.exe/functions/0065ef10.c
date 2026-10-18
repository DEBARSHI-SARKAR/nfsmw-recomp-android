/* speed.exe 0065ef10 FUN_0065ef10; analysis pseudocode, not buildable source.
 * calls 0065e210 FUN_0065e210
 */

void __fastcall FUN_0065ef10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065e210();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

