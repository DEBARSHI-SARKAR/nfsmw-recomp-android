/* speed.exe 0064bfe0 FUN_0064bfe0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0064bdf0 FUN_0064bdf0
 */

undefined4 __thiscall FUN_0064bfe0(int param_1,undefined4 param_2,float param_3,char param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  local_8 = 0;
  pfVar5 = (float *)(param_1 + 0x18);
  iVar6 = -1;
  do {
    cVar1 = *(char *)(param_1 + 0x24 + local_8);
    iVar7 = iVar6;
    if (cVar1 <= param_4) {
      iVar7 = local_8;
      if (pfVar5[-6] == 0.0) break;
      if (-1 < iVar6) {
        cVar2 = *(char *)(param_1 + 0x24 + iVar6);
        iVar7 = iVar6;
        if (cVar2 < cVar1) goto LAB_0064c068;
        if (cVar1 == cVar2) {
          FUN_0064bdf0(*(undefined4 *)(param_1 + 0xc + iVar6 * 4));
          iVar3 = FUN_007c4b80();
          FUN_0064bdf0(pfVar5[-3]);
          iVar4 = FUN_007c4b80();
          if (iVar3 < iVar4) goto LAB_0064c068;
        }
      }
      if ((*(char *)(param_1 + 0x24 + local_8) < param_4) || (iVar7 = iVar6, *pfVar5 < param_3)) {
        iVar7 = local_8;
      }
    }
LAB_0064c068:
    local_8 = local_8 + 1;
    pfVar5 = pfVar5 + 1;
    iVar6 = iVar7;
  } while (local_8 < 3);
  if (iVar7 < 0) {
    return 0;
  }
  *(float *)(param_1 + 0x18 + iVar7 * 4) = param_3;
  *(undefined4 *)(param_1 + iVar7 * 4) = param_2;
  *(undefined4 *)(param_1 + 0xc + iVar7 * 4) = 0;
  *(char *)(iVar7 + 0x24 + param_1) = param_4;
  return 1;
}

