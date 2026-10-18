/* speed.exe 005e87f0 FUN_005e87f0; analysis pseudocode, not buildable source.
 * calls 00783b60 FUN_00783b60
 * calls 00452430 FUN_00452430
 * calls 005d9ab0 FUN_005d9ab0
 * calls 00454810 FUN_00454810
 * calls 005e85a0 FUN_005e85a0
 * calls 006269b0 FUN_006269b0
 * calls 005e2b10 FUN_005e2b10
 * calls 005e87f0 FUN_005e87f0
 */

void FUN_005e87f0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(short *)(param_2 + 0x1a) != 0) {
    do {
      iVar1 = FUN_00452430();
      iVar3 = DAT_0091dff8;
      if (DAT_0091dff8 != 0) {
        while (iVar2 = FUN_00452430(), iVar2 != iVar1) {
          iVar3 = *(int *)(iVar3 + 0x24);
          if ((iVar3 == DAT_0091dff8) || (iVar3 == 0)) goto LAB_005e88af;
        }
        if (iVar3 != 0) {
          if ((char)param_1 == '\0') {
            FUN_005e85a0();
          }
          else {
            *(int *)(iVar3 + 200) = *(int *)(iVar3 + 200) + 1;
            if (*(char *)(iVar3 + 0xc4) == '\0') {
              if (*(int *)(iVar3 + 0x74) == 0) {
                FUN_00783b60(iVar3 + 0x28);
                *(undefined4 *)(iVar3 + 0x74) = 1;
              }
              *(uint *)(iVar3 + 0x38) = *(uint *)(iVar3 + 0x38) | 0x100;
              FUN_005e2b10();
              *(undefined1 *)(iVar3 + 0xc4) = 1;
            }
          }
        }
      }
LAB_005e88af:
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_2 + 0x1a));
  }
  param_2 = 0;
  iVar3 = FUN_005d9ab0();
  if (iVar3 != 0) {
    do {
      puVar4 = (uint *)FUN_00454810(0x916e0e78,param_2);
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)FUN_006269b0(4);
      }
      uVar6 = *puVar4 >> ((byte)*(undefined4 *)(DAT_0091e00c + 0x60) & 0x1f);
      uVar5 = 0;
      uVar7 = uVar6;
      do {
        uVar7 = *(uint *)(DAT_0091e00c + 0x70) & uVar7;
        if (*(uint *)(*(int *)(DAT_0091e00c + 0x78) + uVar7 * 8) == uVar6) {
          iVar3 = *(int *)(*(int *)(DAT_0091e00c + 0x78) + 4 + uVar7 * 8);
          if (iVar3 != 0) {
            FUN_005e87f0(param_1,iVar3);
          }
          break;
        }
        uVar7 = uVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= *(uint *)(DAT_0091e00c + 0x74));
      param_2 = param_2 + 1;
      uVar7 = FUN_005d9ab0();
    } while (param_2 < uVar7);
  }
  return;
}

