/* speed.exe 0042a390 FUN_0042a390; analysis pseudocode, not buildable source.
 * calls 00401d30 FUN_00401d30
 * calls 00401d70 FUN_00401d70
 * calls 00402060 FUN_00402060
 * calls 00423730 FUN_00423730
 * calls 00653e20 FUN_00653e20
 * calls 0040fe20 FUN_0040fe20
 * calls 00401b80 FUN_00401b80
 * calls 00403f40 FUN_00403f40
 * calls 00401c10 FUN_00401c10
 * calls 00653790 FUN_00653790
 * calls 006533b0 FUN_006533b0
 * calls 00415290 FUN_00415290
 * calls 00409b40 FUN_00409b40
 * calls 007c44e0 FUN_007c44e0
 * calls 00401ce0 FUN_00401ce0
 * calls 00401870 FUN_00401870
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042a390(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  float unaff_EBX;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 auStack_2c [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined1 auStack_18 [16];
  float fStack_8;
  
  piVar9 = (int *)(param_1 + 0x4c);
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  (**(code **)(*piVar4 + 0x30))();
  cVar3 = (**(code **)(*piVar9 + 0x14))();
  if (cVar3 != '\0') {
    FUN_00415290(param_2);
    return;
  }
  uVar5 = (**(code **)(*piVar9 + 0x18))();
  if ((uVar5 & 1) != 0) {
    iStack_34 = *(int *)(param_1 + 0xd8);
    if ((*(int **)(param_1 + 0xe0) != (int *)0x0) && (iStack_34 != 0)) {
      (**(code **)(**(int **)(param_1 + 0xe0) + 0x14))(0);
      (**(code **)(**(int **)(param_1 + 0xe0) + 0x2c))(0);
      piVar4 = (int *)(**(code **)(*piVar9 + 4))();
      piVar6 = (int *)(**(code **)(*piVar4 + 0x54))();
      fVar10 = (float10)(**(code **)(*piVar6 + 0x30))();
      if ((*(float *)(param_1 + 0x84) != _DAT_00890968) || (_DAT_0089096c <= (float)fVar10)) {
        uVar7 = (**(code **)(*piVar4 + 0x60))(auStack_20);
        FUN_00401ce0(param_1 + 0x88,uVar7);
        uStack_1c = 0;
        FUN_0040fe20(auStack_20,auStack_20);
        (**(code **)(*piVar6 + 0x34))(auStack_2c);
        auStack_2c[0] = 0;
        FUN_0040fe20(auStack_30,auStack_30);
        puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x24))();
        uStack_3c = *puVar8;
        iStack_34 = puVar8[2];
        uStack_38 = 0;
        if (_DAT_00890dc4 < unaff_EBX) {
          FUN_0040fe20(&uStack_3c,&uStack_3c);
        }
        fVar10 = (float10)FUN_00401d70(unaff_EBX,0,0x3f800000);
        FUN_00401b80(auStack_30,_DAT_0089096c - (float)fVar10,auStack_18);
        FUN_00401c10(&uStack_3c,(float)fVar10,auStack_18,auStack_18);
        FUN_0040fe20(auStack_18,auStack_18);
        FUN_00401870(auStack_30,auStack_24,&uStack_3c);
        fVar14 = fStack_8;
        uVar15 = 0;
        uVar7 = 0;
        fVar13 = fStack_8;
        FUN_00401d30(uStack_38,0x3f800000,fStack_8,0,0);
        fVar10 = (float10)FUN_007c44e0();
        FUN_00653e20((float)(fVar10 * (float10)_DAT_0089096c),fVar13,uVar7,uVar15);
        FUN_00401870(auStack_18,auStack_24,&uStack_3c);
        uVar15 = 0;
        uVar7 = 0;
        FUN_00401d30(uStack_38,0x3f800000,fVar14,0,0);
        fVar10 = (float10)FUN_007c44e0();
        FUN_00653e20((float)(fVar10 * (float10)_DAT_0089096c),fVar14,uVar7,uVar15);
        iVar1 = *(int *)(param_1 + 0x740);
        iVar2 = *(int *)(param_1 + 0x73c);
        fVar14 = *(float *)(iVar1 + 0x7c) * _DAT_00890968 + *(float *)(iVar2 + 0x7c);
        fVar11 = (float10)FUN_00403f40(0xbf000000,0x3f000000);
        fVar10 = (float10)_DAT_00890968;
        fVar12 = (float10)FUN_00403f40();
        fVar10 = (float10)FUN_00402060((float)(fVar12 + (float10)(float)(fVar11 * fVar10)));
        fVar11 = (float10)FUN_00402060(*(float *)(iVar1 + 0x5c) * _DAT_00890968 +
                                       *(float *)(iVar2 + 0x5c),0xc1200000,0x41200000);
        fVar12 = ABS(fVar11);
        if ((float10)fVar14 * fVar11 < (float10)_DAT_00890968) {
          fVar12 = -fVar12;
        }
        *(float *)(*(int *)(param_1 + 0x748) + 0xac) = fVar14;
        *(float *)(*(int *)(param_1 + 0x748) + 0xb0) = (float)fVar10;
        *(float *)(*(int *)(param_1 + 0x748) + 0xb4) = (float)fVar11;
        fVar10 = (float10)FUN_00653790(ABS(fVar14 * _DAT_00890974));
        FUN_00423730((float)fVar10,(float)fVar12 * _DAT_00890974,fStack_8,0xc7c34f80);
        if (unaff_EBX < _DAT_00890bf8) {
          fVar10 = (float10)FUN_006533b0(unaff_EBX);
          fVar11 = (float10)FUN_006533b0(unaff_EBX);
          fStack_8 = (float)fVar11;
          fVar11 = (float10)FUN_006533b0(unaff_EBX);
          *(float *)(*(int *)(param_1 + 0x748) + 0x58) = fStack_8;
          *(float *)(*(int *)(param_1 + 0x748) + 0x5c) = (float)fVar10;
          *(float *)(*(int *)(param_1 + 0x748) + 0x60) = (float)fVar11;
        }
        fVar10 = (float10)(**(code **)(*piStack_40 + 0x6c))();
        fStack_8 = (float)fVar10;
        fVar11 = (float10)FUN_00409b40();
        fVar10 = (float10)_DAT_00890510;
        *(undefined1 *)(param_1 + 0xa8) = 0;
        fStack_8 = (float)(fVar11 / ((float10)fStack_8 * fVar10));
        if ((*(int **)(param_1 + 0xd4) != (int *)0x0) &&
           (cVar3 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))(), cVar3 != '\0')) {
          piVar9 = (int *)(**(code **)(*piVar9 + 8))();
          fVar10 = (float10)(**(code **)(*piVar9 + 0x90))();
          if ((float10)_DAT_00890968 <= fVar10) {
            fStack_8 = 0.0;
          }
          else if (_DAT_00890968 <= fStack_8) {
            fStack_8 = -1.0;
          }
          else {
            fStack_8 = 1.0;
          }
        }
        iVar1 = **(int **)(param_1 + 0xe0);
        fVar10 = (float10)FUN_00401d70(fStack_8,0xbf800000,0x3f800000);
        (**(code **)(iVar1 + 0x14))((float)fVar10);
      }
    }
  }
  return;
}

