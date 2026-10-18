/* speed.exe 006135d0 FUN_006135d0; analysis pseudocode, not buildable source.
 * calls 0060cd30 FUN_0060cd30
 */

int __fastcall FUN_006135d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0060cd30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

