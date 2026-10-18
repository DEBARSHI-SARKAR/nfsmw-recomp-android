/* speed.exe 00410e70 FUN_00410e70; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 00405680 FUN_00405680
 * calls 005d59f0 FUN_005d59f0
 * calls 00406450 FUN_00406450
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00410e70(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  int unaff_retaddr;
  undefined4 uVar10;
  float fVar11;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x54) + 4))(0);
  if (cVar1 != '\0') {
    puVar7 = *(undefined4 **)(param_1 + 200);
    piVar8 = (int *)0x0;
    fVar11 = 0.0;
    if (puVar7 != puVar7 + *(int *)(param_1 + 0xd0)) {
      do {
        piVar3 = (int *)*puVar7;
        piVar2 = (int *)(**(code **)(*piVar3 + 0x44))();
        if ((((*piVar2 == unaff_retaddr) && (cVar1 = (**(code **)(*piVar3 + 0x88))(), cVar1 != '\0')
             ) && (fVar9 = (float10)(**(code **)(*piVar3 + 0x60))(), (float10)_DAT_00890da4 < fVar9)
            ) && (((piVar2 = (int *)FUN_005d59f0(&LAB_00404ff0), piVar2 != (int *)0x0 &&
                   (fVar9 = (float10)(**(code **)(*piVar2 + 0x18))(), (float10)fVar11 < fVar9)) &&
                  ((float10)_DAT_00890fc8 < fVar9)))) {
          fVar11 = (float)fVar9;
          piVar8 = piVar3;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined4 *)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0) * 4));
      if (piVar8 != (int *)0x0) {
        FUN_00406450(piVar8);
        piVar3 = (int *)(**(code **)(*piVar8 + 4))();
        uVar4 = FUN_005cc240("SoundAI");
        uVar10 = 5;
        uVar5 = (**(code **)(*piVar3 + 0x34))(5);
        iVar6 = FUN_00405680(uVar5,uVar10);
        *(undefined4 *)(iVar6 + 4) = uVar4;
        FUN_0065faf0();
      }
    }
    return piVar8;
  }
  return (int *)0x0;
}

