/* speed.exe 004ba9e0 FUN_004ba9e0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004ba9e0(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0xc) * 0xc) {
    puVar1 = (undefined2 *)(iVar2 + 10);
    do {
      puVar1[-1] = 0;
      *(undefined4 *)(puVar1 + -3) = 0;
      *puVar1 = 0;
      iVar2 = iVar2 + 0xc;
      puVar1 = puVar1 + 6;
    } while (iVar2 != *(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 0xc);
  }
  return;
}

