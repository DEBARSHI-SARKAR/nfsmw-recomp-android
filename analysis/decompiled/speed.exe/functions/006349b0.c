/* speed.exe 006349b0 FUN_006349b0; analysis pseudocode, not buildable source.
 * calls 007f0e0f FUN_007f0e0f
 * calls 006284a0 FUN_006284a0
 * calls 00634900 FUN_00634900
 * calls 00628940 FUN_00628940
 */

void __fastcall FUN_006349b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  bool bVar5;
  float10 fVar6;
  int iStack_c;
  
  if ((*(int *)(param_1 + 0x24) == 0) && (DAT_00982bec != 0)) {
    if (*(char *)(param_1 + 0x183c) != '\0') {
      FUN_00634900();
      return;
    }
    FUN_007f0e0f(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0x400);
    if (DAT_0091f1d8 != 0) {
      iVar1 = (**(code **)(*DAT_0091f1e0 + 4))();
      DAT_0091f148 = *(undefined4 *)(iVar1 + 8);
      iVar1 = (**(code **)(*DAT_0091f1e0 + 4))();
      piVar2 = DAT_0091f1e0;
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar1 = (**(code **)(*piVar2 + 4))();
      bVar5 = *(char *)(iVar1 + 0xc) != '\0';
      DAT_0091f1d5 = DAT_0091f1d4 == 0 && bVar5;
      DAT_0091f1d6 = !bVar5 & DAT_0091f1d4;
      DAT_0091f1d4 = bVar5;
      iVar1 = (**(code **)(*DAT_0091f1e0 + 4))();
      bVar5 = *(char *)(iVar1 + 0xd) != '\0';
      DAT_0091f1dd = DAT_0091f1dc == 0 && bVar5;
      DAT_0091f1de = !bVar5 & DAT_0091f1dc;
      DAT_0091f1dc = bVar5;
      iVar1 = (**(code **)(*DAT_0091f1e0 + 4))();
      bVar5 = *(char *)(iVar1 + 0xe) != '\0';
      DAT_0091f14d = DAT_0091f14c == 0 && bVar5;
      DAT_0091f14e = !bVar5 & DAT_0091f14c;
      DAT_0091f14c = bVar5;
      FUN_006284a0();
      pfVar4 = *(float **)(param_1 + 0x20);
      iStack_c = 0;
      piVar2 = &DAT_0091f41c;
      do {
        *pfVar4 = 0.0;
        iVar1 = 0;
        piVar3 = piVar2;
        do {
          if (*piVar3 != 0) {
            fVar6 = (float10)FUN_00628940(iStack_c,iVar1);
            if (fVar6 < (float10)*pfVar4) {
              fVar6 = (float10)*pfVar4;
            }
            *pfVar4 = (float)fVar6;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 3;
        } while (iVar1 < 4);
        pfVar4 = pfVar4 + 1;
        iStack_c = iStack_c + 1;
        piVar2 = piVar2 + 0xd;
      } while ((int)piVar2 < 0x92038c);
    }
  }
  return;
}

