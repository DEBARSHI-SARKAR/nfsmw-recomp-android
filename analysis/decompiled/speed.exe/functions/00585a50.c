/* speed.exe 00585a50 FUN_00585a50; analysis pseudocode, not buildable source.
 * calls 005857e0 FUN_005857e0
 * calls 00516a20 FUN_00516a20
 * calls 005855b0 FUN_005855b0
 */

void FUN_00585a50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_00516a20();
  puVar3 = (undefined4 *)FUN_005857e0(param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[4] = 0;
    FUN_005855b0();
    piVar1 = (int *)puVar3[2];
    iVar2 = puVar3[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    (**(code **)*puVar3)(1);
  }
  return;
}

