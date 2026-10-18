/* speed.exe 0077d080 FUN_0077d080; analysis pseudocode, not buildable source.
 * calls 0077a230 FUN_0077a230
 */

int __fastcall FUN_0077d080(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0077a230();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

