/* speed.exe 00822ef7 FUN_00822ef7; analysis pseudocode, not buildable source.
 * calls 00825b08 FUN_00825b08
 * calls 00825a7d FUN_00825a7d
 * calls 0081bcd9 FUN_0081bcd9
 * calls 00825b12 FUN_00825b12
 * calls 00821537 FUN_00821537
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00825aba FUN_00825aba
 * calls 008259cc FUN_008259cc
 * calls 00822050 FUN_00822050
 * calls 00822bec FUN_00822bec
 * calls 0081bccb FUN_0081bccb
 * calls 00824500 FUN_00824500
 * calls 00825a40 FUN_00825a40
 * calls 00825afc FUN_00825afc
 * calls 008259db FUN_008259db
 */

void FUN_00822ef7(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  
  FUN_00825b08(&LAB_00822b36);
  FUN_00825b12(&LAB_00822b3b);
  FUN_00825afc(FUN_00819670);
  if (DAT_009c2251 != '\0') {
    (*DAT_009c2534)();
  }
  DAT_009c2310 = *param_1;
  DAT_009c2314 = param_1[1];
  DAT_009c2318 = param_1[2];
  FUN_0081bccb();
  FUN_00821537();
  iVar5 = 0;
  iVar1 = 0;
  if (0 < DAT_0090bd18) {
    do {
      *(undefined4 *)(DAT_009c2324 + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0090bd18);
  }
  puVar6 = &DAT_009c23f0;
  do {
    uVar2 = FUN_0081e9e7(0x10bc);
    puVar6[-2] = uVar2;
    *puVar6 = uVar2 + 8;
    if ((uVar2 + 8 & 0x3f) != 0) {
      do {
        *puVar6 = *puVar6 + 4;
      } while ((*puVar6 & 0x3f) != 0);
    }
    puVar6 = puVar6 + 1;
  } while ((int)puVar6 < 0x9c23f8);
  if (DAT_009c2318._2_1_ != '\0') {
    DAT_009c2428 = FUN_0081e9e7((DAT_009c2318 >> 8 & 0xff) << 9);
  }
  iVar1 = 0;
  if (DAT_009c2318._1_1_ != '\0') {
    puVar6 = (uint *)&DAT_009c2410;
    do {
      uVar2 = FUN_0081e9e7(0x440);
      puVar6[-6] = uVar2;
      *puVar6 = uVar2;
      if ((uVar2 & 0x3f) != 0) {
        do {
          *puVar6 = *puVar6 + 4;
        } while ((*puVar6 & 0x3f) != 0);
      }
      iVar1 = iVar1 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar1 < (int)(DAT_009c2318 >> 8 & 0xff));
  }
  if ((char)DAT_009c2318 != '\0') {
    DAT_009c2520 = FUN_0081e9e7((DAT_0090bd18 * 8 + 0x5c) * (DAT_009c2318 & 0xff));
    FUN_00822050(DAT_009c2520,(DAT_0090bd18 * 8 + 0x5c) * (DAT_009c2318 & 0xff));
    iVar1 = (DAT_009c2318 & 0xff) * 0x5c + DAT_009c2520;
    iVar4 = 0;
    if ((DAT_009c2318 & 0xff) != 0) {
      iVar3 = 0;
      do {
        *(int *)(iVar3 + 0x34 + DAT_009c2520) = iVar1;
        iVar1 = iVar1 + DAT_0090bd18 * 4;
        *(int *)(iVar3 + 0x38 + DAT_009c2520) = iVar1;
        iVar1 = iVar1 + DAT_0090bd18 * 4;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x5c;
      } while (iVar4 < (int)(DAT_009c2318 & 0xff));
    }
  }
  FUN_0081bcd9();
  FUN_00825aba();
  FUN_00825a7d();
  FUN_00825a40();
  FUN_008259db();
  FUN_00822bec();
  if (DAT_009c2318._1_1_ != '\0') {
    puVar8 = &DAT_009c2448;
    puVar7 = &DAT_009c2478;
    do {
      *puVar8 = 0;
      FUN_008259cc(puVar7);
      *(undefined2 *)(puVar7 + 0x18) = 0;
      puVar7[0x1a] = 0;
      FUN_00824500(puVar8,puVar7);
      FUN_00822050(puVar8[-0xe],0x400);
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 0x1c;
      puVar8 = puVar8 + 1;
    } while (iVar5 < (int)(DAT_009c2318 >> 8 & 0xff));
  }
  return;
}

