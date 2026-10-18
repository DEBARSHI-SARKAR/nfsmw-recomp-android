/* speed.exe 00723ad0 FUN_00723ad0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00723ad0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(param_1 + 0x2c0);
  fVar2 = _DAT_00890968;
  if (0 < iVar4) {
    piVar5 = (int *)(param_1 + 0x2c4);
    do {
      iVar1 = *piVar5;
      if (((*(char *)(iVar1 + 0xb) != '\0') && (*(int *)(iVar1 + 0xc) != 3)) &&
         (*(int *)(iVar1 + 0xc) != 4)) {
        fVar3 = (float)((int)(*(int *)(iVar1 + 0x18) + (*(int *)(iVar1 + 0x18) >> 0x1f & 0x3ffU)) >>
                       10) * _DAT_00891218;
        if (*(int *)(iVar1 + 0x44) == 1) {
          fVar3 = fVar3 * _DAT_00891054;
        }
        if (*(int *)(iVar1 + 0x44) == 2) {
          fVar3 = fVar3 * _DAT_00895074;
        }
        fVar2 = fVar3 + fVar2;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(float *)(param_1 + 0x18c) = fVar2;
  return;
}

