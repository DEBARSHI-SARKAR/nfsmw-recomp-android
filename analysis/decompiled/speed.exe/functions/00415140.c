/* speed.exe 00415140 FUN_00415140; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00415140(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(byte *)(param_1 + 0xcc) & 4) != 0) {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x14))();
    if ((cVar2 == '\0') && (*(int **)(param_1 + 0xd4) != (int *)0x0)) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
      if (cVar2 == '\0') {
        piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
        fVar6 = (float10)(**(code **)(*piVar3 + 0x90))();
        if ((float10)_DAT_00890dac <= fVar6) {
          *(undefined1 *)(param_1 + 0xa7) = 0;
          return;
        }
      }
      *(undefined1 *)(param_1 + 0xa7) = 1;
      pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xd0) + 4))();
      fStack_c = *(float *)(param_1 + 0x88) - *pfVar4;
      fStack_8 = *(float *)(param_1 + 0x8c) - pfVar4[1];
      fStack_4 = *(float *)(param_1 + 0x90) - pfVar4[2];
      FUN_0040fe20(&fStack_c,&fStack_c);
      iVar5 = (**(code **)(**(int **)(param_1 + 0xd0) + 0xa4))();
      fVar1 = fStack_c * *(float *)(iVar5 + 0x20) +
              fStack_4 * *(float *)(iVar5 + 0x28) + fStack_8 * *(float *)(iVar5 + 0x24);
      cVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
      if ((cVar2 != '\0') && (_DAT_00890968 < fVar1)) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 0xc))(2);
        return;
      }
      cVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
      if ((cVar2 == '\0') && (fVar1 < _DAT_008910e8)) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 0xc))(0);
      }
    }
  }
  return;
}

