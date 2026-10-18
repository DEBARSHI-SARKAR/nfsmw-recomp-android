/* speed.exe 00486130 FUN_00486130; analysis pseudocode, not buildable source.
 * calls 00478ef0 FUN_00478ef0
 * calls 00485a60 FUN_00485a60
 */

void FUN_00486130(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  for (puVar1 = (undefined4 *)**(undefined4 **)(DAT_00911050 + 4);
      (puVar1 != *(undefined4 **)(DAT_00911050 + 4) && (puVar1[2] != param_1));
      puVar1 = (undefined4 *)*puVar1) {
  }
  puVar2 = *(undefined4 **)(DAT_00911050 + 4);
  if (puVar1 == puVar2) {
    iVar3 = FUN_00478ef0(puVar2,puVar2[1],&param_1);
    FUN_00485a60(1);
    puVar2[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return;
}

