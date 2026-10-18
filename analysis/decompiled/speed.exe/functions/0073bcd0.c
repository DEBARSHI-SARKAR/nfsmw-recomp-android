/* speed.exe 0073bcd0 FUN_0073bcd0; analysis pseudocode, not buildable source.
 */

void FUN_0073bcd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;
  
  iVar7 = 0;
  local_c = 0;
  local_8 = 0;
  if (0 < DAT_00904a10) {
    piVar5 = (int *)&DAT_009af3a0;
    iVar2 = 0;
    do {
      iVar4 = piVar5[-5];
      iVar1 = iVar2 + 1;
      iVar6 = iVar2;
      piVar8 = piVar5;
      for (iVar3 = iVar1; iVar3 < DAT_00904a10; iVar3 = iVar3 + 1) {
        if (*piVar8 < iVar4) {
          iVar6 = iVar3;
          iVar4 = *piVar8;
        }
        piVar8 = piVar8 + 5;
        iVar7 = local_c;
      }
      iVar3 = iVar6 * 0x14;
      if (iVar2 != iVar6) {
        iVar7 = *(int *)(&DAT_009af388 + iVar3);
        *(int *)(&DAT_009af388 + iVar3) = piVar5[-6];
        piVar5[-6] = iVar7;
        iVar7 = *(int *)(&DAT_009af38c + iVar3);
        *(int *)(&DAT_009af38c + iVar3) = piVar5[-5];
        piVar5[-5] = iVar7;
        iVar7 = *(int *)(&DAT_009af390 + iVar3);
        *(int *)(&DAT_009af390 + iVar3) = piVar5[-4];
        piVar5[-4] = iVar7;
        iVar7 = *(int *)(&DAT_009af394 + iVar3);
        *(int *)(&DAT_009af394 + iVar3) = piVar5[-3];
        piVar5[-3] = iVar7;
        iVar7 = (&DAT_009af398)[iVar6 * 5];
        (&DAT_009af398)[iVar6 * 5] = piVar5[-2];
        piVar5[-2] = iVar7;
        iVar7 = local_c;
      }
      if (iVar4 != iVar7) {
        iVar3 = iVar7 + 1;
        (&DAT_009ae4a0)[iVar7] = local_8 + iVar2 >> 1;
        iVar7 = iVar4;
        local_c = iVar4;
        local_8 = iVar2;
        if (iVar3 < iVar4) {
          piVar8 = &DAT_009ae4a0 + iVar3;
          for (iVar4 = iVar4 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar8 = iVar2;
            piVar8 = piVar8 + 1;
          }
        }
      }
      piVar5 = piVar5 + 5;
      iVar2 = iVar1;
    } while (iVar1 < DAT_00904a10);
  }
  iVar1 = DAT_00904a10;
  iVar2 = iVar7 + 1;
  (&DAT_009ae4a0)[iVar7] = DAT_00904a10 + -1 + local_8 >> 1;
  if (iVar2 < 0x100) {
    piVar5 = &DAT_009ae4a0 + iVar2;
    for (iVar7 = 0x100 - iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar5 = iVar1 + -1;
      piVar5 = piVar5 + 1;
    }
  }
  return;
}

