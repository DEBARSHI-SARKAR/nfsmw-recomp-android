/* speed.exe 00680840 FUN_00680840; analysis pseudocode, not buildable source.
 * calls 00789870 FUN_00789870
 * calls 0067d270 FUN_0067d270
 */

void __fastcall FUN_00680840(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = DAT_0092c658;
  FUN_0067d270(&local_4,&local_c);
  uVar5 = 0;
  if (((local_4 == *(int *)(param_1 + 0x94)) || (*(int *)(local_4 + 0x10) == 0)) ||
     (*(char *)(*(int *)(local_4 + 0x10) + 0x2d) != '\0')) {
    uVar8 = 0;
    piVar7 = &local_4;
    local_4 = 0;
    local_c = 0;
    local_8 = 3;
    uVar4 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x60))(piVar7,0);
    cVar1 = FUN_00789870(uVar4,piVar7,uVar8);
    *(char *)(param_1 + 0x188) = '\x01' - (cVar1 != '\0');
    return;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x4c))();
  if (*(int *)(iVar2 + 0x38) != DAT_00988e84) {
    *(undefined1 *)(param_1 + 0x188) = 0;
    return;
  }
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    uVar6 = 0;
    iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 8))();
    if (iVar2 != 0) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x44))(uVar6);
        if (*(int *)(iVar2 + 4) == DAT_00988e84) {
          uVar5 = uVar5 + 1;
        }
        uVar6 = uVar6 + 1;
        uVar3 = (**(code **)(**(int **)(param_1 + 0xf0) + 8))();
      } while (uVar6 < uVar3);
    }
    *(char *)(param_1 + 0x188) = '\x01' - (uVar5 < 2);
    return;
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}

