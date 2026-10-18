/* speed.exe 005bc530 FUN_005bc530; analysis pseudocode, not buildable source.
 * calls 005b85a0 FUN_005b85a0
 * calls 005b7780 FUN_005b7780
 * calls 005b8610 FUN_005b8610
 */

void __thiscall
FUN_005bc530(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_4 + 0x24);
  piVar6 = (int *)(param_4 + 0x28);
  if ((int)param_5 <= (int)param_6) {
    if (param_6 == *(uint *)(param_4 + 0xc)) {
      param_6 = param_6 + 1;
    }
    param_4 = 0;
    if (0 < iVar1) {
      puVar5 = (uint *)(*piVar6 + 8);
      while (*puVar5 < param_5) {
        param_4 = param_4 + 1;
        puVar5 = puVar5 + 3;
        if (iVar1 <= param_4) {
          return;
        }
      }
      if (param_4 < iVar1) {
        piVar6 = (int *)(*piVar6 + param_4 * 0xc);
        do {
          if (param_6 <= (uint)piVar6[2]) {
            return;
          }
          uVar2 = piVar6[1];
          if (uVar2 < 0xfffffffc) {
            if (uVar2 == 0xfffffffb) {
              iVar7 = *piVar6;
              uVar4 = 0xfffffffb;
            }
            else {
              if (uVar2 != 0) {
                if (uVar2 != 0xfffffffa) goto LAB_005bc60a;
                uVar4 = 0xfffffffa;
                goto LAB_005bc642;
              }
              iVar7 = *piVar6;
              iVar3 = 0;
              if (iVar7 == 0x1b3909aa) {
LAB_005bc5db:
                uVar4 = FUN_005b85a0(iVar3);
                FUN_005b8610(uVar4,1);
                goto LAB_005bc64e;
              }
              uVar4 = 0;
            }
LAB_005bc647:
            FUN_005b7780(iVar7,param_3,param_1,uVar4,0);
          }
          else {
            if (uVar2 == 0xfffffffc) {
              uVar4 = 0xfffffffc;
LAB_005bc642:
              iVar7 = *piVar6;
              goto LAB_005bc647;
            }
            if (uVar2 == 0xffffffff) {
              (**(code **)(**(int **)(param_2 + 0x108) + 0x18))(*piVar6,param_3,0,param_1);
            }
            else {
LAB_005bc60a:
              uVar4 = FUN_005b85a0(uVar2);
              iVar7 = *piVar6;
              if (iVar7 == 0x1b3909aa) {
                iVar3 = piVar6[1];
                goto LAB_005bc5db;
              }
              if (param_3 != 0) goto LAB_005bc647;
            }
          }
LAB_005bc64e:
          param_4 = param_4 + 1;
          piVar6 = piVar6 + 3;
        } while (param_4 < iVar1);
      }
    }
  }
  return;
}

