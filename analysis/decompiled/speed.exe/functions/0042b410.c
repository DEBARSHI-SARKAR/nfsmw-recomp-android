/* speed.exe 0042b410 FUN_0042b410; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005cc240 FUN_005cc240
 */

void __fastcall FUN_0042b410(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 *puVar8;
  
  bVar2 = true;
  if (((param_1[0x1e] == 2) && ((int *)*param_1 != (int *)0x0)) && (*(int *)*param_1 == 4)) {
    bVar2 = false;
  }
  param_1[0x1e] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x1d] = 0;
  if ((bVar2) && (puVar8 = (undefined4 *)param_1[3], puVar8 != puVar8 + param_1[5])) {
    do {
      piVar1 = (int *)*puVar8;
      piVar4 = (int *)FUN_005d59f0(&LAB_004038e0);
      if (piVar4 != (int *)0x0) {
        uVar5 = FUN_005cc240(0,extraout_ECX);
        (**(code **)(*piVar4 + 0x84))(uVar5);
        cVar3 = (**(code **)(*piVar1 + 0x88))();
        if (cVar3 != '\0') {
          piVar4 = (int *)FUN_005d59f0(&LAB_00403700);
          piVar4 = (int *)(**(code **)(*piVar4 + 0xa0))();
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0xe4))(piVar1);
          }
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != (undefined4 *)(param_1[3] + param_1[5] * 4));
  }
  iVar6 = param_1[5];
  iVar7 = iVar6;
  if (0 < iVar6) {
    do {
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_1[5] = iVar7;
  }
  if (param_1[3] != 0) {
    (**(code **)(param_1[2] + 8))(param_1[3],param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

