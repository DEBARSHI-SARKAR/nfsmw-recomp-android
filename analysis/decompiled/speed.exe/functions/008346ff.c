/* speed.exe 008346ff FUN_008346ff; analysis pseudocode, not buildable source.
 * calls 0083458f FUN_0083458f
 */

uint FUN_008346ff(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  uint local_c;
  int local_8;
  
  local_18 = 0;
  bVar2 = false;
  local_28 = -1;
  iVar8 = param_1 / 2;
  if (10 < iVar8) {
    iVar8 = 10;
  }
  uVar4 = FUN_0083458f();
  iVar3 = DAT_009c31a8;
  uVar9 = (uVar4 >> 0x10) * param_1;
  uVar4 = uVar9 >> 0x10;
  local_c = uVar4;
  if (param_2 == -1) {
    return uVar9 >> 0x10;
  }
  do {
    iVar7 = -1;
    local_24 = -1;
    local_20 = iVar8;
    if (0x20 < iVar8) {
      local_20 = 0x20;
    }
    local_14 = 0;
    bVar1 = false;
    local_8 = iVar3;
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      if (iVar5 < local_20) {
        iVar7 = local_24;
        if (((&DAT_009c312a)[local_8 * 2] == (short)param_2) &&
           (iVar6 = iVar5 + 1, (&DAT_009c3128)[local_8 * 2] == (short)local_c)) {
          bVar1 = true;
          iVar7 = iVar5;
          local_24 = iVar5;
        }
      }
      else {
        bVar1 = true;
      }
      iVar5 = local_8 + -1;
      if (local_8 + -1 < 0) {
        iVar5 = local_8 + 0x1f;
      }
      local_8 = iVar5;
      local_14 = local_14 + 1;
      if (0x20 < local_14) {
        bVar1 = true;
      }
      iVar5 = iVar6;
    } while (!bVar1);
    if (iVar7 == -1) {
      bVar2 = true;
      iVar7 = local_28;
LAB_008347e2:
      local_28 = iVar7;
      uVar4 = local_c;
    }
    else if (local_28 < iVar7) goto LAB_008347e2;
    local_18 = local_18 + 1;
    if (0x1f < local_18) {
      bVar2 = true;
    }
    if (bVar2) {
      DAT_009c31a8 = iVar3 + 1;
      if (0x1f < DAT_009c31a8) {
        DAT_009c31a8 = 0;
      }
      iVar8 = DAT_009c31a8;
      (&DAT_009c3128)[DAT_009c31a8 * 2] = (short)uVar4;
      (&DAT_009c312a)[iVar8 * 2] = (short)param_2;
      return local_c;
    }
    uVar9 = FUN_0083458f();
    local_c = (uVar9 >> 0x10) * param_1 >> 0x10;
  } while( true );
}

