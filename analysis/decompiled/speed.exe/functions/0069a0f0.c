/* speed.exe 0069a0f0 FUN_0069a0f0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void __fastcall FUN_0069a0f0(int param_1)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 0x60);
  FUN_005c5e80(*(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28) +
               *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
               *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
  return;
}

