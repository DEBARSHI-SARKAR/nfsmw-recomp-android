/* speed.exe 0073bf20 FUN_0073bf20; analysis pseudocode, not buildable source.
 */

int FUN_0073bf20(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = 0x7fffffff;
  iVar8 = 0;
  local_c = 0x7fffffff;
  local_8 = -1;
  local_4 = -1;
  iVar2 = -1;
  if (0 < DAT_00904a10) {
    piVar6 = (int *)&DAT_009af390;
    iVar7 = 0;
    do {
      iVar2 = piVar6[-2] - param_1;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar3 = piVar6[-1] - param_2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar4 = *piVar6 - param_3;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      iVar5 = piVar6[1] - param_4;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      iVar5 = iVar2 + iVar3 + iVar4 + iVar5;
      if (iVar5 < local_c) {
        local_c = iVar5;
        local_8 = iVar8;
      }
      iVar5 = iVar5 - (*(int *)((int)&DAT_009aee70 + iVar7) >> 0xc);
      if (iVar5 < iVar1) {
        iVar1 = iVar5;
        local_4 = iVar8;
      }
      iVar2 = *(int *)((int)&DAT_009aea70 + iVar7) >> 10;
      *(int *)((int)&DAT_009aee70 + iVar7) = iVar2 * 0x400 + *(int *)((int)&DAT_009aee70 + iVar7);
      iVar3 = DAT_00904a10;
      *(int *)((int)&DAT_009aea70 + iVar7) = *(int *)((int)&DAT_009aea70 + iVar7) - iVar2;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 5;
      iVar2 = local_8;
    } while (iVar8 < iVar3);
  }
  (&DAT_009aea70)[iVar2] = (&DAT_009aea70)[iVar2] + 0x40;
  (&DAT_009aee70)[iVar2] = (&DAT_009aee70)[iVar2] + -0x10000;
  return local_4;
}

