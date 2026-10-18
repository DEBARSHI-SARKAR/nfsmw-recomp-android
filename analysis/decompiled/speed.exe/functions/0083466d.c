/* speed.exe 0083466d FUN_0083466d; analysis pseudocode, not buildable source.
 */

int FUN_0083466d(short param_1,int param_2,short param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = -1;
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  iVar7 = 0;
  bVar1 = false;
  iVar4 = DAT_009c31a8;
  iVar5 = 0;
  do {
    iVar3 = iVar2;
    iVar6 = iVar5;
    if ((param_2 <= iVar5) ||
       (((&DAT_009c312a)[iVar4 * 2] == param_3 &&
        (iVar6 = iVar5 + 1, iVar3 = iVar5, (&DAT_009c3128)[iVar4 * 2] == param_1)))) {
      bVar1 = true;
      iVar2 = iVar3;
    }
    iVar5 = iVar4 + -1;
    if (iVar5 < 0) {
      iVar5 = iVar4 + 0x1f;
    }
    iVar7 = iVar7 + 1;
    if (0x20 < iVar7) {
      bVar1 = true;
    }
    iVar4 = iVar5;
    iVar5 = iVar6;
  } while (!bVar1);
  return iVar2;
}

