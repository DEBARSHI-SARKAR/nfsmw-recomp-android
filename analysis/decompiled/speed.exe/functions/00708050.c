/* speed.exe 00708050 FUN_00708050; analysis pseudocode, not buildable source.
 * calls 00704e00 FUN_00704e00
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00708050(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  
  iVar4 = DAT_00993cc8;
  if ((*(int *)(DAT_00993cc8 + 0x138) == 2) &&
     (((*(int *)(DAT_00993cc8 + 0x1d4) == 0 || (*(int *)(DAT_00993cc8 + 0x1d4) == 1)) &&
      (*(short *)(DAT_00993cc8 + 0x148) < 2)))) {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar8 = *(int *)(DAT_00993cc8 + 0x5c);
    if (iVar8 != *(int *)(DAT_00993cc8 + 0x60)) {
      do {
        piVar2 = *(int **)(iVar8 + 4);
        iVar5 = (**(code **)(*piVar2 + 0x28))();
        if ((((iVar5 != 0) &&
             (iVar5 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,iVar5), iVar5 != 0))
            && ((piVar3 = *(int **)(iVar5 + 4), piVar3 != (int *)0x0 &&
                ((iVar5 = (**(code **)(*piVar3 + 0x70))(), iVar5 == iVar1 &&
                 (piVar6 = (int *)FUN_005d59f0(&LAB_004040e0), piVar6 != (int *)0x0)))))) &&
           (fVar9 = (float10)(**(code **)(*piVar6 + 0x90))(),
           (float10)_DAT_008967e0 * fVar9 + (float10)_DAT_00890dd0 <
           (float10)*(float *)(iVar4 + 0x108))) {
          piVar6 = (int *)FUN_00704e00();
          if (piVar6 != (int *)0x0) {
            iVar5 = *piVar6;
            uVar7 = (**(code **)(*piVar3 + 0x34))();
            iVar5 = (**(code **)(iVar5 + 0x58))(uVar7);
            if (iVar5 != 0) goto LAB_0070815f;
          }
          (**(code **)(*piVar2 + 0x140))();
        }
LAB_0070815f:
        iVar8 = iVar8 + 8;
      } while (iVar8 != *(int *)(iVar4 + 0x60));
    }
  }
  return;
}

