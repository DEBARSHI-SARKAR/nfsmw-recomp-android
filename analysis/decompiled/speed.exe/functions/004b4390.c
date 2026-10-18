/* speed.exe 004b4390 FUN_004b4390; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 */

void __fastcall FUN_004b4390(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xb8) = 1;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x14) == 3) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
    iVar1 = FUN_0045da30(7);
    *(int *)(param_1 + 0xa4) = iVar1 + 5;
  }
  return;
}

