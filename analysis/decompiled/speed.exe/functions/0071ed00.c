/* speed.exe 0071ed00 FUN_0071ed00; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 004100a0 FUN_004100a0
 * calls 005d59f0 FUN_005d59f0
 * calls 00469da0 FUN_00469da0
 * calls 005cc240 FUN_005cc240
 * calls 00704e00 FUN_00704e00
 * calls 0071aff0 FUN_0071aff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071ed00(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_00993cc8;
  if (DAT_00993cc8 != 0) {
    if (DAT_0092d884 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)*DAT_0092d87c;
    }
    piVar4 = (int *)FUN_00704e00();
    uVar1 = *(uint *)(param_1 + 0x24);
    if ((((uVar1 & 0x20000) != 0) && (*(int **)(param_1 + 0x2c) != piVar4)) &&
       (*(float *)(*(int *)(iVar2 + 0x184) + 0x80) <=
        (float)(DAT_00925ae8 - *(int *)(param_1 + 0x1c)) * _DAT_00890984)) {
      *(int **)(param_1 + 0x2c) = piVar4;
      *(uint *)(param_1 + 0x24) = uVar1 & 0xfffdffff;
      if ((uVar1 & 1) != 0) {
        *(uint *)(param_1 + 0x24) = uVar1 & 0xfffdffff | 0x10000000;
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffe00;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    if (((piVar4 != (int *)0x0) && (piVar6 != (int *)0x0)) &&
       ((*(uint *)(param_1 + 0x24) & 0x20000) == 0)) {
      (**(code **)(*piVar4 + 0x1c))();
      puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0xc))();
      uStack_14 = *puVar5;
      uStack_10 = puVar5[1];
      uStack_c = puVar5[2];
      piVar6 = (int *)FUN_00704e00();
      uVar7 = (**(code **)(*piVar6 + 0x38))(&uStack_14);
      fVar10 = (float10)FUN_004100a0(uVar7);
      *(float *)(param_1 + 0x20) = (float)fVar10;
      if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x10000001;
        *(int *)(param_1 + 0x10) = DAT_00925ae8;
      }
      iVar8 = (**(code **)(*piVar4 + 0x50))();
      iVar9 = *(int *)(iVar8 + 4);
      if (((iVar9 != 0) && (*(int *)(iVar8 + 8) - iVar9 >> 2 != 0)) &&
         (iVar9 != *(int *)(iVar8 + 8))) {
        do {
          piVar6 = (int *)FUN_005d59f0(&LAB_004038e0);
          if (piVar6 != (int *)0x0) {
            piVar4 = (int *)FUN_005d59f0(&LAB_00404ff0);
            fVar10 = (float10)(**(code **)(*piVar6 + 0x74))();
            if ((fVar10 < (float10)_DAT_00890968 != (fVar10 == (float10)_DAT_00890968)) ||
               ((piVar4 != (int *)0x0 && (cVar3 = (**(code **)(*piVar4 + 4))(), cVar3 != '\0')))) {
              if ((*(uint *)(param_1 + 0x24) & 2) == 0) {
                *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x10000002;
                uVar7 = FUN_005cc240("RBLOS");
                iVar9 = FUN_00469da0(1);
                *(undefined4 *)(iVar9 + 4) = uVar7;
                FUN_0065faf0();
                goto LAB_0071eea5;
              }
              break;
            }
          }
          iVar9 = iVar9 + 4;
        } while (iVar9 != *(int *)(iVar8 + 8));
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
    }
LAB_0071eea5:
    uVar1 = *(uint *)(param_1 + 0x24);
    if ((((uVar1 & 0x400) == 0) && ((*(byte *)(iVar2 + 0x54) & 1) != 0)) ||
       ((((((uVar1 & 0x800) == 0 && ((*(uint *)(iVar2 + 0x54) >> 1 & 1) != 0)) ||
          (((uVar1 & 0x1000) == 0 && ((*(uint *)(iVar2 + 0x54) >> 2 & 1) != 0)))) ||
         (((uVar1 & 0x400) != 0 && ((*(byte *)(iVar2 + 0x54) & 1) == 0)))) ||
        ((((uVar1 & 0x800) != 0 && ((*(uint *)(iVar2 + 0x54) >> 1 & 1) == 0)) ||
         (((uVar1 & 0x1000) != 0 && ((*(uint *)(iVar2 + 0x54) >> 2 & 1) == 0)))))))) {
      FUN_0071aff0();
    }
  }
  return;
}

