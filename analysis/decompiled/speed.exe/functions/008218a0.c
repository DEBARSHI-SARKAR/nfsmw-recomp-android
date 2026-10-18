/* speed.exe 008218a0 FUN_008218a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008218a0(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x90 + DAT_009c21f4;
  fVar1 = (float)(int)*(short *)(iVar2 + 0x42) * (float)(int)*(char *)(iVar2 + 0x2b) *
          *(float *)(iVar2 + 0x38) * _DAT_008c5ca8;
  *(float *)(iVar2 + 0x48) = fVar1;
  if (*(int *)(iVar2 + 0x7c) != 0) {
    *(float *)(iVar2 + 0x48) =
         (float)(int)*(char *)((uint)*(byte *)(iVar2 + 0x6b) + *(int *)(iVar2 + 0x7c)) * fVar1 *
         _DAT_00890bf0;
  }
  if (*(int *)(iVar2 + 0x74) != 0) {
    *(float *)(iVar2 + 0x48) =
         (float)(int)*(char *)(*(int *)(iVar2 + 0x74) +
                              (int)ROUND(*(float *)(iVar2 + 0x48) * _DAT_00896ab4));
  }
  *(float *)(iVar2 + 0x48) = _DAT_0090bd14 * *(float *)(iVar2 + 0x48);
  return;
}

