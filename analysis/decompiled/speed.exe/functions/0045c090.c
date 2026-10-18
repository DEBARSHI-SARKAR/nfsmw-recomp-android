/* speed.exe 0045c090 FUN_0045c090; analysis pseudocode, not buildable source.
 * calls 00452720 FUN_00452720
 * calls 0045c030 FUN_0045c030
 */

void __fastcall FUN_0045c090(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_4;
  
  local_4 = param_1;
  FUN_00452720();
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 != 0) {
    iVar3 = iVar5 << 4;
    do {
      uVar4 = *(uint *)(iVar3 + -8 + *(int *)(param_1 + 0x2c));
      piVar1 = *(int **)(param_1 + 4);
      iVar5 = iVar5 + -1;
      if ((uVar4 < (uint)piVar1[2]) &&
         (piVar2 = *(int **)(*piVar1 + 4 + uVar4 * 8), piVar2 != (int *)0x0)) {
        uVar4 = *(uint *)(iVar3 + -8 + *(int *)(param_1 + 0x2c));
        if (uVar4 < (uint)piVar1[2]) {
          local_4 = *(int *)(*piVar1 + uVar4 * 8);
        }
        else {
          local_4 = 0;
        }
        (**(code **)(*piVar2 + 0xc))(param_1,&local_4,*(int *)(param_1 + 0x30) + iVar5 * 4);
      }
      iVar3 = iVar3 + -0x10;
    } while (iVar5 != 0);
  }
  FUN_0045c030();
  uVar4 = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  if (1 < *(uint *)(param_1 + 0x14)) {
    local_4 = 0x10;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + local_4);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc) + local_4);
      if (iVar5 != 0) {
        (*(code *)**(undefined4 **)puVar6[1])
                  (*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar4 * 4),iVar5,puVar6[3]);
      }
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      uVar4 = uVar4 + 1;
      local_4 = local_4 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  return;
}

