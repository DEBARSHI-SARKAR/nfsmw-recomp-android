/* speed.exe 005d91c0 FUN_005d91c0; analysis pseudocode, not buildable source.
 * calls 005d8d00 FUN_005d8d00
 * calls 005d8b00 FUN_005d8b00
 * calls 005d9050 FUN_005d9050
 * calls 005d8b60 FUN_005d8b60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d91c0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_005d9050();
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 == iVar2) {
    FUN_005d8d00(*(undefined4 *)(param_1 + 0x24));
    return;
  }
  local_4 = _DAT_0089096c;
  if ((iVar1 == 3) || (iVar1 == 2)) {
    if (iVar2 <= iVar1) goto LAB_005d91fb;
  }
  else if (iVar1 < iVar2) {
LAB_005d91fb:
    local_4 = _DAT_00890968;
  }
  fVar3 = *(float *)(param_1 + 0x20);
  local_c = fVar3;
  local_8 = local_4;
  if (local_4 < fVar3) {
    local_c = local_4;
    local_8 = fVar3;
  }
  if (local_8 - local_c <= _DAT_008a3624) {
    if (iVar1 < iVar2) {
      FUN_005d8b00();
    }
    else {
      FUN_005d8b60();
    }
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar1 != iVar2) {
      if ((iVar1 == 3) || (iVar1 == 2)) {
        if (iVar1 < iVar2) goto LAB_005d928b;
      }
      else if (iVar2 <= iVar1) {
LAB_005d928b:
        FUN_005d8d00(_DAT_0089096c);
        return;
      }
      FUN_005d8d00(_DAT_00890968);
      return;
    }
    local_4 = *(float *)(param_1 + 0x24);
  }
  FUN_005d8d00(local_4);
  return;
}

