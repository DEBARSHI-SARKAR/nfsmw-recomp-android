/* speed.exe 00501050 FUN_00501050; analysis pseudocode, not buildable source.
 * calls 00500f40 FUN_00500f40
 * calls 00500b00 FUN_00500b00
 */

void FUN_00501050(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00500b00(param_1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x28);
    puVar3 = *(undefined4 **)(iVar1 + 0x24);
    if (0 < iVar2) {
      do {
        if (puVar3[5] != 0) {
          *(undefined2 *)((int)puVar3 + 0x12) = 1;
          FUN_00500f40(*puVar3,iVar1);
        }
        puVar3 = puVar3 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

