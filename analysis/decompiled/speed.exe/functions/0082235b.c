/* speed.exe 0082235b FUN_0082235b; analysis pseudocode, not buildable source.
 * calls 00822ea5 FUN_00822ea5
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082235b(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1 * 0x90 + DAT_009c21f4;
  iVar4 = param_1 * 0x88 + DAT_009c2014;
  iVar3 = 0;
  fVar1 = (float)(int)*(char *)(iVar2 + 0x5f) * *(float *)(iVar2 + 0x48) * _DAT_00890bf0;
  if (DAT_009c1fd8 != 0) {
    do {
      FUN_00822ea5(param_1,iVar3,fVar1 * *(float *)(iVar4 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_009c1fd8);
  }
  return;
}

