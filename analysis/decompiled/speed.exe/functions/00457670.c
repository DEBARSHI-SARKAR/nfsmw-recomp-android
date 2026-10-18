/* speed.exe 00457670 FUN_00457670; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00457670(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint local_10;
  int local_c;
  
  local_c = 0;
  bVar7 = false;
  piVar12 = (int *)(*(int *)(param_1 + 0x1c) + 8);
  do {
    piVar13 = (int *)(*piVar12 + local_c);
    switch((short)piVar12[1]) {
    case 1:
    case 5:
      *piVar13 = 0;
      break;
    case 2:
      local_c = *(int *)((uint)*(ushort *)((int)piVar12 + 6) * 0x10 + *(int *)(param_1 + 0xc));
      break;
    case 3:
      *piVar13 = *(int *)((uint)*(ushort *)((int)piVar12 + 6) * 0x10 + *(int *)(param_1 + 0xc)) +
                 piVar12[2];
      break;
    case 4:
      iVar3 = *(int *)((uint)*(ushort *)((int)piVar12 + 6) * 0x10 + *(int *)(param_1 + 0xc));
      piVar2 = *(int **)(iVar3 + 0x30);
      for (piVar9 = piVar2; (piVar9 != piVar2 + *(int *)(iVar3 + 0x34) && (*piVar9 != piVar12[2]));
          piVar9 = piVar9 + 1) {
      }
      uVar10 = (int)piVar9 - (int)piVar2 >> 2;
      if ((uVar10 < *(uint *)(iVar3 + 0x34)) && (uVar10 != 0xffffffff)) {
        *piVar13 = *(int *)(uVar10 * 0x10 + *(int *)(iVar3 + 0x2c));
      }
      else {
        *piVar13 = 0;
      }
      break;
    default:
      bVar7 = true;
    }
    piVar12 = piVar12 + 3;
  } while (!bVar7);
  iVar3 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_10 = 0;
  if (iVar3 != 0) {
    local_c = 0;
    piVar12 = (int *)(iVar4 + 0x1c);
    do {
      uVar5 = **(uint **)(param_1 + 4);
      uVar10 = uVar5 + (*(uint **)(param_1 + 4))[2] * 8;
      uVar1 = uVar5;
      iVar11 = (int)(uVar10 - uVar5) >> 3;
      while (iVar8 = iVar11, 0 < iVar8) {
        iVar11 = iVar8 / 2;
        if (*(uint *)(uVar1 + iVar11 * 8) < (uint)piVar12[-3]) {
          uVar1 = uVar1 + 8 + iVar11 * 8;
          iVar11 = iVar8 + (-1 - iVar11);
        }
      }
      if (uVar1 < uVar10) {
        iVar11 = (int)(uVar1 - uVar5) >> 3;
      }
      else {
        iVar11 = -1;
      }
      *(int *)(local_c + 8 + *(int *)(param_1 + 0x2c)) = iVar11;
      uVar10 = *(uint *)(local_c + 8 + *(int *)(param_1 + 0x2c));
      if ((uVar10 < (uint)(*(int **)(param_1 + 4))[2]) &&
         (puVar6 = *(undefined4 **)(**(int **)(param_1 + 4) + 4 + uVar10 * 8),
         puVar6 != (undefined4 *)0x0)) {
        *(int *)(*(int *)(param_1 + 0x30) + local_10 * 4) = piVar12[-4];
        (**(code **)*puVar6)
                  (param_1,piVar12 + -3,piVar12 + -4,piVar12[-2] + iVar4 + 0xc + iVar3 * 0x14,
                   *(int *)(param_1 + 0x20) + *piVar12,piVar12[-1]);
      }
      local_10 = local_10 + 1;
      local_c = local_c + 0x10;
      piVar12 = piVar12 + 5;
    } while (local_10 < *(uint *)(param_1 + 0x34));
  }
  piVar12 = *(int **)(param_1 + 0xc);
  if (*piVar12 != 0) {
    (*(code *)**(undefined4 **)piVar12[1])(**(undefined4 **)(param_1 + 0x10),*piVar12,piVar12[3]);
  }
  piVar12[3] = 0;
  *piVar12 = 0;
  piVar12[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}

