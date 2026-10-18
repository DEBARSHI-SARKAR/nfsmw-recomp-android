/* speed.exe 00741780 FUN_00741780; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 005e8b20 FUN_005e8b20
 * calls 005fffd0 FUN_005fffd0
 * calls 005e3390 FUN_005e3390
 * calls 005ddec0 FUN_005ddec0
 * calls 0078a540 FUN_0078a540
 * calls 007c4b80 FUN_007c4b80
 * calls 0078a310 FUN_0078a310
 * calls 00653100 FUN_00653100
 * calls 00794f80 FUN_00794f80
 * calls 0078f8a0 FUN_0078f8a0
 * calls 0078b670 FUN_0078b670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00741780(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  short *psVar10;
  char cVar11;
  float10 fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined1 local_80c [1036];
  undefined1 auStack_400 [1024];
  
  iVar4 = *(int *)(DAT_0091cf90 + 0x168);
  uVar5 = 0xff;
  if (iVar4 == 1) {
    uVar5 = 0;
  }
  else if (iVar4 == 0) {
    uVar5 = 1;
  }
  else if (iVar4 == 2) {
    uVar5 = 2;
  }
  FUN_0078f8a0();
  FUN_0078a310(3,8);
  cVar11 = *(int *)(param_1 + 8) != 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  FUN_0078a310(cVar11,8);
  FUN_0078a310(uVar5,8);
  FUN_0078a310(*(undefined1 *)(*(int *)(param_1 + 4) + 0x1149),8);
  FUN_0078a310((int)(short)DAT_00904fb8,0x10);
  FUN_0078a310(DAT_00904fbc,8);
  FUN_0078a310((undefined1)DAT_00904fd8,8);
  puVar9 = DAT_0092d84c;
  if (DAT_0092d84c != DAT_0092d84c + DAT_0092d854) {
    do {
      piVar2 = (int *)*puVar9;
      piVar3 = (int *)FUN_005d59f0(&LAB_00402840);
      if (piVar3 == (int *)0x0) break;
      iVar4 = (**(code **)(*piVar3 + 8))();
      uVar5 = (**(code **)(*piVar2 + 4))();
      iVar6 = FUN_005e8b20(uVar5);
      FUN_0078a310(*(undefined1 *)(iVar4 + 0x1149),8);
      FUN_0078a310(*(undefined1 *)(iVar6 + 0x10),8);
      FUN_0078a310(*(undefined1 *)(iVar4 + 0x1170),8);
      FUN_0078a310(0,8);
      FUN_0078a540((float)*(int *)(iVar6 + 0x28));
      fVar12 = (float10)FUN_005ddec0();
      FUN_0078a540((float)fVar12);
      if (*(int *)(iVar6 + 0x28) == 0) {
        fVar13 = 0.0;
      }
      else {
        fVar12 = (float10)FUN_005fffd0(*(undefined4 *)(iVar6 + 0xc));
        fVar13 = (float)fVar12;
      }
      FUN_0078a540(fVar13);
      fVar12 = (float10)FUN_005e3390();
      FUN_0078a540((float)fVar12);
      FUN_0078a540(*(undefined4 *)(iVar6 + 0x100));
      FUN_0078a540(*(undefined4 *)(iVar6 + 0x124));
      FUN_0078a540(*(undefined4 *)(iVar6 + 0x128));
      FUN_0078a540(*(undefined4 *)(iVar4 + 0x1218));
      FUN_0078a540(*(undefined4 *)(iVar4 + 0x121c));
      FUN_0078a540(0);
      FUN_0078a540(*(undefined4 *)(iVar6 + 0x108));
      iVar6 = *(int *)(iVar4 + 0x1144);
      if (iVar6 == 4) {
        uVar5 = 1;
      }
      else if (iVar6 == 5) {
        uVar5 = 3;
      }
      else if (iVar6 == 6) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
      }
      FUN_0078a310(uVar5,8);
      uVar8 = 0;
      psVar10 = (short *)(iVar4 + 0x122e);
      iVar6 = 2;
      do {
        bVar7 = (byte)iVar6;
        if (psVar10[-1] != 0) {
          uVar8 = uVar8 | 1 << (bVar7 - 2 & 0x1f);
        }
        if (*psVar10 != 0) {
          uVar8 = uVar8 | 1 << (bVar7 - 1 & 0x1f);
        }
        if (psVar10[1] != 0) {
          uVar8 = uVar8 | 1 << (bVar7 & 0x1f);
        }
        if (psVar10[2] != 0) {
          uVar8 = uVar8 | 1 << (bVar7 + 1 & 0x1f);
        }
        iVar1 = iVar6 + 2;
        psVar10 = psVar10 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar1 < 0x10);
      FUN_0078a310((int)(short)uVar8,0x10);
      psVar10 = (short *)(iVar4 + 0x122c);
      iVar4 = 0x10;
      do {
        if (*psVar10 != 0) {
          FUN_0078a310((int)*psVar10,0x10);
        }
        psVar10 = psVar10 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      puVar9 = puVar9 + 1;
    } while (puVar9 != DAT_0092d84c + DAT_0092d854);
  }
  FUN_007c4b80();
  if (DAT_009b4174 != 0) {
    uVar5 = FUN_007c4b80(auStack_400,0x400,1);
    FUN_00653100(local_80c,uVar5);
    puVar14 = auStack_400;
    FUN_00794f80(puVar14);
    FUN_0078b670(puVar14);
    return;
  }
  return;
}

