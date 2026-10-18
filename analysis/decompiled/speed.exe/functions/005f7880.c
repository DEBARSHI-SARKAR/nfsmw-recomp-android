/* speed.exe 005f7880 FUN_005f7880; analysis pseudocode, not buildable source.
 * calls 005f6490 FUN_005f6490
 * calls 00454810 FUN_00454810
 * calls 005d9ab0 FUN_005d9ab0
 * calls 006269b0 FUN_006269b0
 * calls 005f7880 FUN_005f7880
 */

void __thiscall FUN_005f7880(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (**(code **)(*param_2 + 4))();
  if (iVar2 == 1) {
    puVar3 = (undefined4 *)FUN_00454810(0xf833c06f,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_006269b0(4);
    }
    uVar1 = *puVar3;
    iVar2 = FUN_00454810(0xfd3cf790,0);
    if (iVar2 == 0) {
      FUN_006269b0(4);
    }
    pcVar4 = (char *)FUN_00454810(0x9652af0f,0);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_006269b0(1);
    }
    if ((*pcVar4 != '\0') || ((char)param_3 != '\0')) {
      FUN_005f6490(uVar1);
    }
  }
  uVar8 = 0;
  iVar2 = FUN_005d9ab0();
  if (iVar2 != 0) {
    do {
      puVar5 = (uint *)FUN_00454810(0x916e0e78,uVar8);
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_006269b0(4);
      }
      uVar7 = *puVar5 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
      uVar9 = 0;
      uVar6 = uVar7;
      do {
        uVar6 = *(uint *)(param_1 + 0x70) & uVar6;
        if (*(uint *)(*(int *)(param_1 + 0x78) + uVar6 * 8) == uVar7) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4 + uVar6 * 8);
          if (iVar2 != 0) {
            FUN_005f7880(iVar2,param_3);
          }
          break;
        }
        uVar6 = uVar6 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 <= *(uint *)(param_1 + 0x74));
      uVar8 = uVar8 + 1;
      uVar6 = FUN_005d9ab0();
    } while (uVar8 < uVar6);
  }
  return;
}

