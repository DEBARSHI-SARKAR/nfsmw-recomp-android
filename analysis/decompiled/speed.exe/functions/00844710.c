/* speed.exe 00844710 FUN_00844710; analysis pseudocode, not buildable source.
 * calls 00844280 FUN_00844280
 */

uint FUN_00844710(int *param_1,int *param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    piVar3 = param_1 + 8;
    do {
      iVar4 = 0x10;
      bVar8 = true;
      piVar6 = piVar3;
      piVar7 = param_2;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *piVar6 == *piVar7;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (uVar2 != 0xffffffff) {
          piVar3 = param_1 + uVar2 * 0x13 + 8;
          *(char *)((int)piVar3 + 0x43) = (char)param_1[2] + -1;
          goto LAB_008447a6;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x13;
    } while (uVar2 < (uint)param_1[1]);
  }
  iVar4 = param_1[1];
  if (iVar4 == *param_1) {
    iVar4 = FUN_00844280();
  }
  else {
    param_1[1] = iVar4 + 1;
  }
  piVar3 = param_1 + iVar4 * 0x13 + 8;
  piVar6 = piVar3;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *param_2;
    param_2 = param_2 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar3[0x11] = param_3;
  piVar3[0x12] = param_4;
  *(undefined2 *)(piVar3 + 0x10) = 0x8000;
  cVar5 = (char)param_1[2] + -1;
  *(char *)((int)piVar3 + 0x43) = cVar5;
  *(char *)((int)piVar3 + 0x42) = cVar5;
LAB_008447a6:
  uVar1 = *(ushort *)(piVar3 + 0x10);
  if ((uVar1 & 0x2000) != 0) {
    return 0xfffffffe;
  }
  uVar2 = uVar1 & 0xffff0fff;
  if ((uVar1 & 0xfff) == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

