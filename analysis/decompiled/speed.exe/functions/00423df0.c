/* speed.exe 00423df0 FUN_00423df0; analysis pseudocode, not buildable source.
 * calls 00423860 FUN_00423860
 * calls 005d59f0 FUN_005d59f0
 * calls 004190c0 FUN_004190c0
 * calls 0040e200 FUN_0040e200
 * calls 005cc240 FUN_005cc240
 * calls 005eda20 FUN_005eda20
 * calls 00403370 FUN_00403370
 * calls 0041ae50 FUN_0041ae50
 * calls 00471bf0 FUN_00471bf0
 * calls 0056a540 FUN_0056a540
 * calls 005de310 FUN_005de310
 * calls 005edd10 FUN_005edd10
 */

void __thiscall FUN_00423df0(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  
  piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
  param_2 = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 4))();
      FUN_00423860(uVar4);
      iVar5 = *(int *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(iVar5 + 0x18);
      cVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x8c))();
      if (cVar1 != '\0') {
        FUN_00471bf0(piVar2);
        FUN_0056a540();
        FUN_005de310();
        FUN_005edd10();
      }
      fVar11 = (float10)(**(code **)(*piVar3 + 4))();
      param_2 = (int *)(float)fVar11;
      if (fVar11 < (float10)*(float *)(param_1 + 0xac)) {
        param_2 = *(int **)(param_1 + 0xac);
      }
      (**(code **)(*piVar3 + 8))(param_2);
      (**(code **)(*piVar3 + 0x48))();
      FUN_004190c0();
      return;
    }
    piVar3 = (int *)FUN_005d59f0(&LAB_004038e0);
    if (piVar3 != (int *)0x0) {
      FUN_0041ae50(&param_2);
      iVar5 = (**(code **)(*(int *)(param_1 + 0x10) + 0x140))();
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0;
      }
      else if ((*(int *)(param_1 + 0x148) < 3) && (*(int *)(param_1 + 0x228) != 2)) {
        puVar6 = (undefined4 *)FUN_00403370();
        *(undefined4 *)(param_1 + 0xdc) = *puVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(*(int *)(iVar5 + 8) + 0x80);
        if (2 < *(int *)(param_1 + 0x170)) {
          if (*(char *)(param_1 + 0x180) == '\0') {
            *(undefined1 *)(param_1 + 0x180) = 1;
          }
          else {
            *(undefined4 *)(param_1 + 0xdc) = 0x3e4ccccd;
            *(undefined1 *)(param_1 + 0x180) = 0;
          }
        }
      }
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
      piVar7 = (int *)FUN_005cc240("copcross");
      piVar8 = (int *)FUN_005cc240("copsuv");
      param_2 = (int *)FUN_005cc240("copsuvl");
      piVar9 = (int *)FUN_005cc240("copsporthench");
      uVar4 = (**(code **)(*piVar2 + 0x4c))();
      piVar10 = (int *)FUN_005cc240(uVar4);
      if ((((piVar10 == piVar8) || (piVar10 == param_2)) || (piVar10 == piVar7)) ||
         (piVar10 == piVar9)) {
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
        if (piVar10 == piVar7) {
          *(undefined4 *)(param_1 + 0x174) = 1;
        }
      }
      else {
        piVar7 = (int *)(**(code **)(*piVar2 + 0x44))();
        if (*piVar7 == DAT_0092c4f4) {
          *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
          *(undefined1 *)(param_1 + 0xe5) = 0;
        }
        else {
          *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x194) + 1;
        }
      }
      FUN_005eda20("total_cops_in_pursuit",(float)*(int *)(param_1 + 0x148));
      cVar1 = FUN_0040e200(&param_2);
      if (((cVar1 != '\0') && (*(int *)(param_1 + 0x144) == 0)) &&
         ((**(code **)(*param_2 + 4))(), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(*(int *)(iVar5 + 8) + 0x88);
      }
      (**(code **)(*piVar3 + 0x18))(*(undefined4 *)(param_1 + 0x84),0);
      cVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x4c))(piVar2);
      if (cVar1 != '\0') {
        (**(code **)(*piVar3 + 0x28))();
        *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
      }
      (**(code **)(*(int *)(param_1 + 0x10) + 0xe4))(piVar2);
    }
  }
  FUN_004190c0();
  return;
}

