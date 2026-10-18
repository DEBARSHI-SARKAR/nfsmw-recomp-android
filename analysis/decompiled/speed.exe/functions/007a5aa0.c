/* speed.exe 007a5aa0 FUN_007a5aa0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 00514d10 FUN_00514d10
 * calls 00515b90 FUN_00515b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007a5aa0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_EDI;
  undefined4 *puVar3;
  longlong lVar4;
  float local_8;
  float local_4;
  undefined4 uVar5;
  
  local_8 = _DAT_0089096c;
  local_4 = *(float *)(param_1 + 4);
  if (_DAT_0089096c <= *(float *)(param_1 + 0x10) - local_4) {
    do {
      local_4 = local_4 + _DAT_0089096c;
      local_8 = local_8 + _DAT_0089096c;
    } while (_DAT_0089096c <= *(float *)(param_1 + 0x10) - local_4);
    if (_DAT_00890da4 <= local_8) {
      local_8 = _DAT_00890da4;
    }
  }
  uVar1 = FUN_00573140("HEAT_X%.0f",(double)local_8);
  FUN_00515b90(*(undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = FUN_00573140("HEAT_X%.0f",(double)local_8);
  FUN_00515b90(*(undefined4 *)(param_1 + 0x20),uVar1);
  if (*(float *)(param_1 + 0x10) != *(float *)(param_1 + 0x14)) {
    FUN_00514d10(*(undefined4 *)(param_1 + 0x20),0x209c24,1);
  }
  iVar2 = 10;
  local_8 = local_4 + _DAT_0089096c;
  if (local_4 <= local_8) {
    lVar4 = (ulonglong)unaff_EDI << 0x20;
    puVar3 = (undefined4 *)(param_1 + 0x4c);
    do {
      if (iVar2 < 0) {
        return;
      }
      iVar2 = iVar2 + -1;
      local_8 = local_8 - _DAT_00890cd4;
      puVar3 = puVar3 + -1;
      if (local_8 + _DAT_00891034 < *(float *)(param_1 + 0xc)) {
        uVar1 = 0x13ff6c;
        if (local_8 + _DAT_00891034 < *(float *)(param_1 + 0x10)) {
          uVar1 = 0x63c;
        }
      }
      else {
        uVar1 = 0xccfa;
      }
      uVar5 = (undefined4)((ulonglong)lVar4 >> 0x20);
      lVar4 = CONCAT44(uVar5,1);
      FUN_00514d10(*puVar3,uVar1,1,uVar5);
    } while (local_4 <= local_8);
  }
  return;
}

