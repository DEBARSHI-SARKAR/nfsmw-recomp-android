/* speed.exe 0083215e FUN_0083215e; analysis pseudocode, not buildable source.
 * calls 00831d65 FUN_00831d65
 * calls 0083204b FUN_0083204b
 * calls 00832d6d FUN_00832d6d
 * calls 008346ff FUN_008346ff
 * calls 00831d15 FUN_00831d15
 * calls 00834580 FUN_00834580
 * calls 008320b7 FUN_008320b7
 */

undefined4 FUN_0083215e(int *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_c;
  int local_8;
  
  uVar7 = 0;
  if ((DAT_009c29e8 == 0) && (DAT_009c29e8 = 1, param_1 != (int *)0x0)) {
    local_c = *param_1;
    iVar3 = FUN_00831d15(&local_c);
    if ((iVar3 != 0) &&
       (((iVar4 = FUN_00831d65(&local_c,&local_8), iVar4 != 0 &&
         (cVar1 = *(char *)(iVar3 + 9), uVar5 = FUN_008346ff(100,0xffffffff),
         (int)(uVar5 & 0xffff) <= (int)cVar1)) &&
        (iVar4 = FUN_008320b7(*(undefined2 *)(iVar3 + 4),local_8), -1 < iVar4)))) {
      local_c = iVar4;
      iVar6 = FUN_00834580();
      if (iVar6 == DAT_009c2a1c) {
        DAT_009c29f0 = DAT_009c29f0 + 1;
      }
      else {
        DAT_009c29f0 = 0;
      }
      sVar2 = DAT_009c29f0;
      DAT_009c2a1c = iVar6;
      (&DAT_009c2ae0)[iVar4 * 4] = iVar6;
      iVar6 = (&DAT_009c2aec)[iVar4 * 4];
      (&DAT_009c2ae8)[iVar4 * 4] = iVar3;
      (&DAT_009c2ae7)[iVar4 * 0x10] = (char)local_8;
      (&DAT_009c2ae4)[iVar4 * 8] = sVar2;
      if (iVar6 != 0) {
        FUN_00832d6d(iVar6);
      }
      (&DAT_009c2aec)[iVar4 * 4] = param_1;
      (&DAT_009c2aa0)[local_8] = (&DAT_009c2aa0)[local_8] + 1;
      (&DAT_009c2ae6)[iVar4 * 0x10] = 1;
      (&DAT_009c2ac0)[local_8] = local_c;
      if ((*(byte *)(iVar3 + 10) & 0x20) != 0) {
        FUN_0083204b(local_8);
      }
      uVar7 = 1;
    }
  }
  DAT_009c29e8 = 0;
  return uVar7;
}

