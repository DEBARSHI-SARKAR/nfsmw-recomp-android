/* speed.exe 00644e40 FUN_00644e40; analysis pseudocode, not buildable source.
 * calls 006440b0 FUN_006440b0
 */

undefined4 __fastcall FUN_00644e40(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_2c;
  int *piStack_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  uVar5 = 0;
  for (piVar6 = DAT_00920e4c; piVar6 != DAT_00920e4c + DAT_00920e54; piVar6 = piVar6 + 1) {
    iVar7 = *piVar6;
    iVar8 = *(int *)(iVar7 + 0x268);
    if ((((-1 < iVar8) && (*(int *)(param_1 + 8 + iVar8 * 4) != 0)) &&
        (*(char *)(iVar7 + 0x281) != '\0')) && ((-1 < iVar8 && (0 < *(int *)(iVar7 + 0x26c))))) {
      uVar5 = uVar5 | 1 << ((byte)iVar8 & 0x1f);
    }
  }
  iVar7 = 0;
  local_2c = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar6 = (int *)(param_1 + 8);
    do {
      if (((int *)*piVar6 != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)*piVar6 + 4))(), cVar2 == '\0')) {
        local_2c = local_2c | 1 << ((byte)iVar7 & 0x1f);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < *(int *)(param_1 + 4));
  }
  cVar2 = -((local_2c & uVar5) != 0);
  bVar1 = false;
  if ((uVar5 != 0) &&
     ((char)('\x01' - ((*(uint *)(param_1 + 0x48) & uVar5) != 0)) != (char)(cVar2 + '\x01'))) {
    bVar1 = true;
  }
  piVar6 = DAT_00920e4c;
  if (DAT_00920e4c != DAT_00920e4c + DAT_00920e54) {
    do {
      iVar7 = *piVar6;
      iVar8 = *(int *)(iVar7 + 0x268);
      if ((-1 < iVar8) && (*(int *)(param_1 + 8 + iVar8 * 4) != 0)) {
        if ((bVar1) && ((0 < *(int *)(iVar7 + 0x26c) && (-1 < iVar8)))) {
          uStack_24 = 0x89;
          uStack_1c = 0;
          iStack_20 = iVar8;
          FUN_006440b0(&uStack_24);
        }
        iVar3 = *(int *)(iVar7 + 0x268);
        if ((local_2c & 1 << ((byte)iVar8 & 0x1f)) == 0) {
          if ((-1 < iVar3) && (*(char *)(iVar7 + 0x280) != '\x01')) {
            puVar9 = &uStack_c;
            uStack_c = 0x87;
            uStack_4 = 0;
            iStack_8 = iVar3;
            goto LAB_00644fed;
          }
        }
        else if ((-1 < iVar3) && (*(char *)(iVar7 + 0x280) != '\0')) {
          puVar9 = &uStack_18;
          uStack_18 = 0x88;
          uStack_10 = 0;
          iStack_14 = iVar3;
LAB_00644fed:
          FUN_006440b0(puVar9);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != DAT_00920e4c + DAT_00920e54);
  }
  if ((bVar1) && (iVar7 = 0, 0 < *(int *)(param_1 + 4))) {
    iVar8 = 0;
    piStack_28 = (int *)(param_1 + 8);
    do {
      piVar6 = (int *)*piStack_28;
      if (piVar6 != (int *)0x0) {
        iVar4 = 0;
        iVar3 = (**(code **)(*piVar6 + 0x14))();
        if (0 < iVar3) {
          do {
            if (((-1 < iVar8) && (iVar3 = (**(code **)(*piVar6 + 0x14))(), iVar7 < iVar3)) &&
               (piVar6[6] + iVar8 != 0)) {
              **(undefined4 **)(piVar6[6] + iVar8 + 0xc) = 0;
            }
            iVar4 = iVar4 + 1;
            iVar3 = (**(code **)(*piVar6 + 0x14))();
          } while (iVar4 < iVar3);
        }
      }
      iVar7 = iVar7 + 1;
      piStack_28 = piStack_28 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 4));
  }
  *(uint *)(param_1 + 0x48) = local_2c;
  if ((uVar5 != 0) && (cVar2 == -1)) {
    return 1;
  }
  return 0;
}

