/* speed.exe 00838930 FUN_00838930; analysis pseudocode, not buildable source.
 * calls 00837bf0 FUN_00837bf0
 * calls 0083e3b0 FUN_0083e3b0
 * calls 008375e0 FUN_008375e0
 * calls 00847850 FUN_00847850
 * calls 00847b60 FUN_00847b60
 * calls 0083e190 FUN_0083e190
 */

void FUN_00838930(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    iVar2 = FUN_00837bf0(param_1,0xffffffff);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
      if (iVar3 != 0) {
        uVar4 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar2);
        iVar3 = FUN_0083e3b0(uVar4);
        if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0x100), piVar1 != (int *)0x0)) {
          FUN_008375e0(piVar1,0);
          FUN_0083e190(piVar1[3]);
          piVar1[3] = 0;
          if (*piVar1 != 0) {
            *(undefined4 *)(*piVar1 + 0x100) = 0;
          }
          (**(code **)(piVar1[4] + 4))(piVar1);
        }
      }
    }
    FUN_00847850(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}

