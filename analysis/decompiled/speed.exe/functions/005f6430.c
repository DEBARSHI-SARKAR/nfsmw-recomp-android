/* speed.exe 005f6430 FUN_005f6430; analysis pseudocode, not buildable source.
 * calls 005f62f0 FUN_005f62f0
 * calls 005ec420 FUN_005ec420
 */

void __thiscall FUN_005f6430(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005f62f0();
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(param_2 + 4);
    iVar1 = param_3;
    do {
      FUN_005ec420(&param_3,puVar2 + -1);
      if (param_3 != *(int *)(param_1 + 0x9c)) {
        *(undefined4 *)(param_3 + 0x18) = puVar2[1];
        *(undefined4 *)(param_3 + 0x14) = *puVar2;
      }
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

