/* speed.exe 0077a050 FUN_0077a050; analysis pseudocode, not buildable source.
 * calls 00771e00 FUN_00771e00
 */

void __fastcall FUN_0077a050(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00771e00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

