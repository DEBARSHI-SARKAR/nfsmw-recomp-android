/* speed.exe 00509710 FUN_00509710; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 005094c0 FUN_005094c0
 * calls 00466340 FUN_00466340
 */

int * __thiscall FUN_00509710(int *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  if ((*param_1 == 0x400) && ((*(uint *)(*(int *)(param_2 + 0x8c) + 0x18) >> 0x12 & 1) != 0)) {
    bVar5 = false;
    piVar7 = (int *)param_1[0xde];
    do {
      if (piVar7 == param_1 + 0xde) {
        if (!bVar5) {
          bVar5 = false;
          piVar7 = (int *)param_1[0xde];
          goto LAB_005097c1;
        }
        break;
      }
      piVar3 = (int *)*piVar7;
      if ((short)piVar7[7] != 0) {
        piVar6 = (int *)piVar7[2];
        iVar8 = 0;
        if (piVar6 != piVar7 + 2) {
          do {
            puVar1 = (ushort *)(piVar6 + 7);
            piVar6 = (int *)*piVar6;
            iVar8 = iVar8 + (uint)*puVar1;
          } while (piVar6 != piVar7 + 2);
          if (((iVar8 != 0) && ((piVar7[6] & 0x8000000U) != 0)) && ((piVar7[6] & 0x4040000U) == 0))
          {
            bVar5 = true;
            FUN_005094c0();
            FUN_00463ca0(DAT_00916068,piVar7);
          }
        }
      }
      piVar7 = piVar3;
    } while (!bVar5);
  }
  goto LAB_005097f9;
  while( true ) {
    piVar3 = (int *)*piVar7;
    if ((piVar7[6] & 0x40000U) == 0) {
      bVar5 = true;
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,piVar7);
    }
    piVar7 = piVar3;
    if (bVar5) break;
LAB_005097c1:
    if (piVar7 == param_1 + 0xde) break;
  }
LAB_005097f9:
  piVar7 = (int *)FUN_00466340(DAT_00916060);
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar7[4] = 0;
  piVar7[5] = 0;
  piVar7[6] = 0;
  piVar7[8] = 0;
  piVar7[0xc] = 0;
  piVar7[0xd] = 0;
  piVar7[0xe] = 0;
  piVar7[0x10] = 0;
  *piVar7 = 0;
  piVar7[1] = 0;
  piVar7[2] = 0;
  piVar7[3] = 0;
  piVar7[0x16] = 0;
  piVar7[0x15] = 0;
  piVar7[0x14] = 0;
  piVar7[0x17] = 0;
  piVar7[0x18] = 0;
  piVar7[0x19] = 0;
  *(undefined2 *)(piVar7 + 0x1a) = 0;
  *(undefined2 *)((int)piVar7 + 0x6a) = 0;
  *(undefined2 *)(piVar7 + 0x1b) = 0;
  *(undefined1 *)((int)piVar7 + 0x6e) = 0;
  *(undefined1 *)((int)piVar7 + 0x6f) = 0;
  piVar7[0x17] = *(uint *)(param_2 + 0x18) & 0xffff0000;
  puVar4 = *(undefined4 **)(param_2 + 0x84);
  *puVar4 = piVar7;
  *(int **)(param_2 + 0x84) = piVar7;
  piVar7[1] = (int)puVar4;
  *piVar7 = param_2 + 0x80;
  uVar2 = *(ushort *)(param_2 + 0x1e);
  *param_1 = *param_1 + 1;
  param_1[uVar2 + 1] = param_1[uVar2 + 1] + 1;
  return piVar7;
}

