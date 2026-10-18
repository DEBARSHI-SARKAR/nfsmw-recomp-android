/* speed.exe 00422480 FUN_00422480; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005d59f0 FUN_005d59f0
 * calls 00402c80 FUN_00402c80
 * calls 006269b0 FUN_006269b0
 * calls 00407d50 FUN_00407d50
 * calls 0045a7e0 FUN_0045a7e0
 * calls 0045a430 FUN_0045a430
 */

void __thiscall FUN_00422480(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 auStack_20 [4];
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00868018;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xc4) != *param_2) {
    ExceptionList = &local_c;
    if (*(undefined4 **)(param_1 + 0xb8) != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      (**(code **)**(undefined4 **)(param_1 + 0xb8))(1);
    }
    *(int *)(param_1 + 0xc4) = *param_2;
    for (piVar2 = DAT_0090d8e8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
      if (*piVar2 == *param_2) {
        uVar1 = (*(code *)piVar2[1])(*(undefined4 *)(param_1 + 0x34));
        goto LAB_004224e7;
      }
    }
    uVar1 = 0;
LAB_004224e7:
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    iVar3 = (**(code **)(*piVar2 + 0x58))();
    if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) &&
       (piVar2 = (int *)FUN_005d59f0(&LAB_004039e0), piVar2 != (int *)0x0)) {
      (**(code **)(*(int *)(param_1 + 0x4c) + 0x94))();
      uVar4 = FUN_00402c80();
      uVar6 = 0;
      FUN_00407d50(0,0,0);
      uStack_4 = 0;
      if (uVar4 != 0) {
        do {
          piVar5 = (int *)FUN_00454810(0x489212da,uVar6);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)FUN_006269b0(0x10);
          }
          if (*piVar5 == *(int *)(param_1 + 0xc4)) {
            FUN_0045a7e0(piVar5 + 1);
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      if (iStack_1c == 0) {
        iVar3 = FUN_00454810(0x75a2bcd7,0);
        if (iVar3 == 0) {
          iVar3 = FUN_006269b0(0xc);
        }
        FUN_0045a7e0(iVar3);
      }
      (**(code **)(*piVar2 + 0x18))(auStack_20);
      uStack_4 = 0xffffffff;
      FUN_0045a430();
    }
  }
  ExceptionList = local_c;
  return;
}

