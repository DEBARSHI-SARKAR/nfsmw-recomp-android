/* speed.exe 004915e0 FUN_004915e0; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004915e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      (**(code **)(*(int *)(param_1 + 8) + iVar1 * 8))
                (*(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar1 * 8));
    }
    (*(code *)PTR_FUN_008ee4d4)(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 4) << 3);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar3[3];
    (*(code *)*puVar3)(puVar3[1],puVar3[2]);
    (*(code *)PTR_FUN_008ee4d4)(puVar3,0x10);
    puVar3 = puVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

