/* speed.exe 00585ae0 FUN_00585ae0; analysis pseudocode, not buildable source.
 * calls 0064ad70 FUN_0064ad70
 * calls 005857e0 FUN_005857e0
 * calls 00516a20 FUN_00516a20
 * calls 005855b0 FUN_005855b0
 */

undefined4 FUN_00585ae0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if ((*param_1 != 0x30203) && (*param_1 != 0x30210)) {
    return 0;
  }
  FUN_0064ad70();
  FUN_00516a20();
  puVar3 = (undefined4 *)FUN_005857e0(param_1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[4] = 0;
    FUN_005855b0();
    iVar1 = puVar3[1];
    piVar2 = (int *)puVar3[2];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    (**(code **)*puVar3)(1);
  }
  return 1;
}

