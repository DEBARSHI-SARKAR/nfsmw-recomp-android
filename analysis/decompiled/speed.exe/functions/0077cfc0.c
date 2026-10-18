/* speed.exe 0077cfc0 FUN_0077cfc0; analysis pseudocode, not buildable source.
 * calls 00771d20 FUN_00771d20
 */

int __fastcall FUN_0077cfc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00771d20();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

