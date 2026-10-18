/* speed.exe 004c3980 FUN_004c3980; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 004b0790 FUN_004b0790
 * calls 0045f340 FUN_0045f340
 * calls 00469b90 FUN_00469b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c3980(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  undefined1 local_94 [4];
  undefined4 local_90;
  int local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar5 = FUN_004b0790(*(int *)(param_1 + 0x34) + 0x40,0,local_94);
    if ((iVar5 != 0) &&
       (fVar8 = (float10)FUN_0045f340(*(int *)(param_1 + 0x34) + 0x40,iVar5 + 0x40),
       fVar8 < (float10)_DAT_00896384)) {
      iVar1 = *(int *)(param_1 + 0x34);
      fVar2 = *(float *)(iVar1 + 0x50) - *(float *)(iVar5 + 0x50);
      fVar4 = *(float *)(iVar1 + 0x54) - *(float *)(iVar5 + 0x54);
      fVar3 = *(float *)(iVar1 + 0x58) - *(float *)(iVar5 + 0x58);
      local_88 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
      if (_DAT_0089654c <= local_88) {
        local_90 = 8;
        local_7c = *(undefined4 *)(iVar1 + 0x44);
        local_78 = *(undefined4 *)(iVar1 + 0x48);
        local_80 = *(undefined4 *)(iVar1 + 0x40);
        local_8c = param_1;
        local_70 = param_1;
        if (*(int *)(iVar1 + 0x228) == 2) {
          uVar6 = FUN_005cc240("BlewByCop");
          iVar5 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                               DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                               DAT_008a2fc8,DAT_008a2fcc,
                               *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x230),0);
          *(undefined4 *)(iVar5 + 4) = uVar6;
          FUN_0065faf0();
        }
        piVar7 = (int *)(**(code **)(*DAT_00911f80 + 0xc))(&local_90);
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0xc))(local_94);
          return;
        }
      }
    }
  }
  return;
}

