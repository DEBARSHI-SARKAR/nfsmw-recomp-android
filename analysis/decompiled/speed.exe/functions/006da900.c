/* speed.exe 006da900 FUN_006da900; analysis pseudocode, not buildable source.
 * calls 006d9980 FUN_006d9980
 */

undefined4 __fastcall FUN_006da900(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)piVar1[10];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    piVar1[10] = 0;
  }
  iVar4 = 0;
  if (0 < piVar1[4]) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0x54 + piVar1[5]);
      if (iVar3 != 0) {
        if (*(int *)(iVar5 + piVar1[5] + 0x50) != 0) {
          FUN_006d9980(iVar3);
        }
        *(undefined4 *)(iVar5 + 0x54 + piVar1[5]) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x68;
    } while (iVar4 < piVar1[4]);
  }
  iVar4 = *piVar1;
  piVar1 = (int *)piVar1[1];
  *piVar1 = iVar4;
  *(int **)(iVar4 + 4) = piVar1;
  *param_1 = 0;
  return 1;
}

