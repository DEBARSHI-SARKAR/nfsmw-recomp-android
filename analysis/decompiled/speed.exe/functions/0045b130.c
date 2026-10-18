/* speed.exe 0045b130 FUN_0045b130; analysis pseudocode, not buildable source.
 * calls 0045b160 FUN_0045b160
 */

void __fastcall FUN_0045b130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045b160();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

