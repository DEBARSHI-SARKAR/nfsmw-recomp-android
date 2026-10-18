/* speed.exe 00622070 FUN_00622070; analysis pseudocode, not buildable source.
 * calls 007668a0 FUN_007668a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00622070(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876ee8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6c6c;
  uVar5 = DAT_00901ad0 * DAT_00901acc;
  DAT_00901acc = uVar5 & 0xffff;
  local_4 = 0;
  fVar4 = (float)((int)uVar5 >> 8 & 0xffff) * _DAT_00890fc8 * _DAT_00890980;
  fVar1 = (float)param_1[3];
  fVar2 = fVar1 + (float)param_1[5];
  fVar3 = fVar2 + (float)param_1[7];
  if (fVar4 < fVar1 == (fVar4 == fVar1)) {
    if (fVar4 < fVar2 == (fVar4 == fVar2)) {
      if (fVar4 < fVar3 == (fVar4 == fVar3)) {
        if (fVar3 + (float)param_1[9] < fVar4) goto LAB_00622148;
        iVar6 = param_1[8];
      }
      else {
        iVar6 = param_1[6];
      }
    }
    else {
      iVar6 = param_1[4];
    }
  }
  else {
    iVar6 = param_1[2];
  }
  if (iVar6 != 0) {
    FUN_007668a0(param_1[10]);
  }
LAB_00622148:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

