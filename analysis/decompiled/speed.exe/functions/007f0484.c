/* speed.exe 007f0484 FUN_007f0484; analysis pseudocode, not buildable source.
 * calls 007f0378 FUN_007f0378
 */

undefined4 FUN_007f0484(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  piVar1 = param_2;
  iVar3 = 0;
  local_8 = 1;
  if (0 < *param_2) {
    do {
      iVar4 = iVar3 * 4;
      uVar2 = FUN_007f0378(*(undefined4 *)(iVar4 + piVar1[1]),&param_2,piVar1[4]);
      *(undefined4 *)(iVar4 + piVar1[2]) = uVar2;
      if (*(int *)(iVar4 + piVar1[2]) == 0) {
        local_8 = 0;
      }
      if (piVar1[3] != 0) {
        *(int **)(piVar1[3] + iVar4) = param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  return local_8;
}

