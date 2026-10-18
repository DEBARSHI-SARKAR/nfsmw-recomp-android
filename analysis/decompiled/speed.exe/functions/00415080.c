/* speed.exe 00415080 FUN_00415080; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 00408810 FUN_00408810
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00415080(int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x48))();
  if (*(char *)(iVar2 + 0x50) != '\0') {
    pfVar3 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 8))();
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    fStack_c = *pfVar3 * _DAT_008910e4 + *pfVar4;
    fStack_8 = pfVar3[1] * _DAT_008910e4 + pfVar4[1];
    fStack_4 = pfVar3[2] * _DAT_008910e4 + pfVar4[2];
    cVar1 = FUN_00408810(&fStack_c,(float *)(iVar2 + 0x98));
    *(char *)(param_1 + 0x80) = '\x01' - (cVar1 != '\0');
    pfVar3 = (float *)(param_1 + 0x74);
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 4))();
    *pfVar3 = *(float *)(iVar2 + 0x98) - *pfVar4;
    *(float *)(param_1 + 0x78) = *(float *)(iVar2 + 0x9c) - pfVar4[1];
    *(float *)(param_1 + 0x7c) = *(float *)(iVar2 + 0xa0) - pfVar4[2];
    FUN_0040fe20(pfVar3,pfVar3);
  }
  return;
}

