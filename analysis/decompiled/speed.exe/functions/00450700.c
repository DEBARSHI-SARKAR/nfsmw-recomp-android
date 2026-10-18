/* speed.exe 00450700 FUN_00450700; analysis pseudocode, not buildable source.
 * calls 007514e0 FUN_007514e0
 * calls 0044a670 FUN_0044a670
 * calls 0072dff0 FUN_0072dff0
 * calls 0044ea30 FUN_0044ea30
 * calls 0044e920 FUN_0044e920
 */

void FUN_00450700(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_0044a670(param_1);
  if (piVar3 != (int *)0x0) {
    FUN_0044ea30();
    FUN_0044e920();
    FUN_007514e0(piVar3[0x44]);
    DAT_0090d9e8 = 0;
    if (*(char *)(*(int *)(piVar3[4] + 0x10) + 0x30) != '\0') {
      FUN_0072dff0();
    }
    piVar1 = (int *)piVar3[2];
    iVar2 = piVar3[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    (**(code **)(*piVar3 + 0x34))(1);
  }
  return;
}

