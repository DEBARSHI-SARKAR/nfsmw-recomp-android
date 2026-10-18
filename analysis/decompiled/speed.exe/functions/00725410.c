/* speed.exe 00725410 FUN_00725410; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00725410(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_c;
  
  local_c = 0;
  if (0 < *param_2) {
    piVar7 = param_2 + 4;
    piVar5 = param_2;
    do {
      iVar2 = piVar5[0x40];
      iVar3 = piVar5[1];
      if (piVar7 != (int *)0x0) {
        piVar8 = piVar7;
        piVar9 = (int *)(iVar3 * 0x50 + 0x40 + param_1);
        for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x1d0 + iVar3 * 4) = 1;
      iVar6 = param_1 + iVar3 * 0xc;
      *(undefined4 *)(iVar6 + 0xc) = 1;
      iVar1 = iVar3 * 0x50 + param_1;
      pcVar4 = *(code **)(iVar1 + 0x8c);
      if (pcVar4 == (code *)0x0) {
        *(int *)(iVar6 + 4) = iVar2;
      }
      else {
        (*pcVar4)(iVar3,param_1);
      }
      if (*(float *)(iVar1 + 0x50) < _DAT_00890dc4) {
        *(undefined4 *)(iVar6 + 0xc) = 0;
      }
      local_c = local_c + 1;
      piVar7 = piVar7 + 0x14;
      piVar5 = piVar5 + 1;
    } while (local_c < *param_2);
  }
  return;
}

