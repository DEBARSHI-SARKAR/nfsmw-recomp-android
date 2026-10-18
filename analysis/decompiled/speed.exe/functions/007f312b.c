/* speed.exe 007f312b FUN_007f312b; analysis pseudocode, not buildable source.
 * calls 007f3156 FUN_007f3156
 */

bool __thiscall FUN_007f312b(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  
  FUN_007f3156(param_2);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  bVar2 = iVar1 != *(int *)(param_1 + 0x10);
  if (bVar2) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return !bVar2;
}

