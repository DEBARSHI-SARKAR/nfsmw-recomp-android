/* speed.exe 0077a100 FUN_0077a100; analysis pseudocode, not buildable source.
 * calls 00772030 FUN_00772030
 */

void __fastcall FUN_0077a100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00772030();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

