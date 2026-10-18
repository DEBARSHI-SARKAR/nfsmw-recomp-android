/* speed.exe 00715820 FUN_00715820; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00713750 FUN_00713750
 */

void __fastcall FUN_00715820(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *local_4;
  
  iVar8 = *(int *)(param_1 + 0x5c);
  if (iVar8 != *(int *)(param_1 + 0x60)) {
    do {
      piVar1 = *(int **)(iVar8 + 4);
      local_4 = piVar1;
      cVar5 = (**(code **)(*piVar1 + 0x1ac))();
      if ((cVar5 == '\0') || (cVar5 = (**(code **)(*piVar1 + 0x1a0))(), cVar5 != '\0')) {
        piVar9 = *(int **)(param_1 + 0xec);
        if ((piVar9 != (int *)0x0) &&
           ((*(int *)(param_1 + 0xf0) - (int)piVar9 >> 2 != 0 &&
            (piVar9 != *(int **)(param_1 + 0xf0))))) {
          do {
            if ((int *)*piVar9 != (int *)0x0) {
              iVar6 = (**(code **)(*(int *)*piVar9 + 0x28))();
              iVar7 = (**(code **)(*piVar1 + 0x28))();
              if (iVar6 == iVar7) {
                FID_conflict__memcpy
                          (piVar9,piVar9 + 1,
                           (*(int *)(param_1 + 0xf0) - (int)(piVar9 + 1) >> 2) << 2);
                *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -4;
                break;
              }
            }
            piVar9 = piVar9 + 1;
          } while (piVar9 != *(int **)(param_1 + 0xf0));
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 0xec);
        bVar4 = false;
        if (piVar9 != *(int **)(param_1 + 0xf0)) {
          do {
            piVar2 = (int *)*piVar9;
            if (piVar2 != (int *)0x0) {
              iVar6 = (**(code **)(*piVar1 + 0x28))();
              iVar7 = (**(code **)(*piVar2 + 0x28))();
              if (iVar7 == iVar6) {
                bVar4 = true;
              }
            }
            piVar9 = piVar9 + 1;
          } while (piVar9 != *(int **)(param_1 + 0xf0));
          if (bVar4) goto LAB_0071595a;
        }
        cVar5 = (**(code **)(*piVar1 + 0x1a0))();
        if (cVar5 == '\0') {
          FUN_00713750(&local_4);
        }
      }
LAB_0071595a:
      iVar8 = iVar8 + 8;
    } while (iVar8 != *(int *)(param_1 + 0x60));
  }
  puVar3 = *(undefined4 **)(param_1 + 0xec);
  if ((puVar3 != (undefined4 *)0x0) && (*(int *)(param_1 + 0xf0) - (int)puVar3 >> 2 == 1)) {
    *(undefined4 *)(param_1 + 0xfc) = *puVar3;
  }
  if ((*(int *)(param_1 + 0xec) != 0) &&
     (*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 2 != 0)) {
    *(undefined4 *)(param_1 + 0x210) = DAT_00925ae8;
  }
  return;
}

