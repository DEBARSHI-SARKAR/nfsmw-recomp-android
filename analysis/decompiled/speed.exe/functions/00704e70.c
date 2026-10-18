/* speed.exe 00704e70 FUN_00704e70; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00704e70(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  
  if ((*(int **)(param_1 + 0x130) == (int *)0x0) ||
     (cVar5 = (**(code **)(**(int **)(param_1 + 0x130) + 0x8c))(), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(int **)(param_1 + 0x134) == (int *)0x0) ||
     (cVar5 = (**(code **)(**(int **)(param_1 + 0x134) + 0x8c))(), cVar5 != '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (DAT_0092fd34 != 0) {
    if (bVar3) goto LAB_00705025;
    piVar6 = DAT_0092fd2c;
    if (DAT_0092fd2c != DAT_0092fd2c + DAT_0092fd34) {
      do {
        piVar1 = (int *)*piVar6;
        cVar5 = (**(code **)(*piVar1 + 0x8c))();
        if ((cVar5 == '\0') || (bVar3)) {
          if (!bVar4) {
            piVar2 = *(int **)(param_1 + 0x134);
            bVar4 = true;
            if (piVar2 != piVar1) {
              if (piVar2 != (int *)0x0) {
                cVar5 = (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(piVar2);
                if (cVar5 != '\0') {
                  (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_1 + 0x134));
                }
                *(undefined4 *)(param_1 + 0x134) = 0;
              }
              cVar5 = (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(piVar1);
              if ((cVar5 == '\0') &&
                 (cVar5 = (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar1), cVar5 != '\0')) {
                *(int **)(param_1 + 0x134) = piVar1;
              }
              *(int **)(param_1 + 0x134) = piVar1;
            }
          }
        }
        else {
          piVar2 = *(int **)(param_1 + 0x130);
          bVar3 = true;
          if (piVar2 != piVar1) {
            *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
            if (piVar2 == (int *)0x0) {
              *(undefined4 *)(param_1 + 0x228) = DAT_00925ae8;
            }
            else {
              cVar5 = (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(piVar2);
              if (cVar5 != '\0') {
                (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))(*(undefined4 *)(param_1 + 0x130));
              }
              *(undefined4 *)(param_1 + 0x130) = 0;
            }
            cVar5 = (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(piVar1);
            if (cVar5 == '\0') {
              (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar1);
            }
            *(int **)(param_1 + 0x130) = piVar1;
          }
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != DAT_0092fd2c + DAT_0092fd34);
    }
  }
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x228) = DAT_00925ae8;
    *(undefined4 *)(param_1 + 0x1d4) = 2;
  }
LAB_00705025:
  if (((!bVar4) && (*(undefined4 *)(param_1 + 0x134) = 0, *(int *)(param_1 + 0x1d4) == 3)) &&
     (*(int *)(param_1 + 0x130) == 0)) {
    *(undefined4 *)(param_1 + 0x1d4) = 2;
  }
  return;
}

