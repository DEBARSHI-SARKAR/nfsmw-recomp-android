/* speed.exe 0042ebf0 FUN_0042ebf0; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 005d59f0 FUN_005d59f0
 * calls 0042ea90 FUN_0042ea90
 * calls 005cc240 FUN_005cc240
 */

void __thiscall FUN_0042ebf0(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  int *local_8;
  int *local_4;
  
  piVar1 = (int *)*DAT_0092d87c;
  if (piVar1 != (int *)0x0) {
    piVar9 = *(int **)param_1[0x35];
    bVar2 = false;
    local_8 = (int *)0x0;
    piVar10 = (int *)0x0;
    local_4 = param_1;
    if (piVar9 != (int *)param_1[0x35]) {
      do {
        piVar10 = (int *)piVar9[2];
        iVar4 = (**(code **)(*piVar10 + 8))();
        iVar4 = *(int *)(iVar4 + 0x1c);
        iVar5 = (**(code **)(*piVar1 + 4))();
        if (iVar4 == iVar5) {
          bVar2 = true;
          break;
        }
        piVar9 = (int *)*piVar9;
        piVar10 = local_8;
      } while (piVar9 != (int *)local_4[0x35]);
    }
    piVar9 = local_4;
    (**(code **)(*piVar1 + 4))();
    piVar6 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar6 != (int *)0x0) {
      param_2 = (int *)(float)(int)param_2;
      fVar11 = (float10)(**(code **)(*piVar6 + 4))();
      if (fVar11 < (float10)(float)param_2) {
        fVar11 = (float10)(**(code **)(*piVar6 + 4))();
        local_4 = (int *)(float)fVar11;
        ppiVar7 = &param_2;
        if ((float10)(float)param_2 <= fVar11) {
          ppiVar7 = &local_4;
        }
        (**(code **)(*piVar6 + 8))(*ppiVar7);
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x138))();
        }
      }
    }
    if (bVar2) {
      cVar3 = (**(code **)(*piVar9 + 0x20))();
      if (cVar3 == '\0') {
        FUN_0042ea90(piVar10);
      }
    }
    else {
      iVar4 = FUN_005cc240("AIPursuit");
      for (piVar10 = DAT_0092c668; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
        if (*piVar10 == iVar4) {
          (*(code *)piVar10[1])(0,0,0);
          break;
        }
      }
      uVar8 = FUN_005d59f0(&LAB_004038c0);
      (**(code **)(piVar9[-10] + 8))(uVar8);
      (**(code **)(*piVar1 + 4))();
      piVar9 = (int *)FUN_005d59f0(&LAB_00402820);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 4))(uVar8);
      }
      piVar9 = (int *)FUN_005d59f0(&LAB_004038c0);
      if (piVar9 != (int *)0x0) {
        uVar8 = (**(code **)(*piVar1 + 4))();
        (**(code **)(*piVar9 + 8))(uVar8);
        FUN_00423860(uVar8);
        FUN_0042ea90(piVar9);
        return;
      }
    }
  }
  return;
}

