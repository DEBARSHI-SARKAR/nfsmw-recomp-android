/* speed.exe 005dd410 FUN_005dd410; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 00633840 FUN_00633840
 * calls 006269b0 FUN_006269b0
 * calls 005d9c80 FUN_005d9c80
 */

undefined4 FUN_005dd410(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_c;
  
  local_c = 0;
  iVar4 = FUN_005d9c80();
  piVar3 = param_1;
  if (iVar4 != 0) {
    do {
      iVar4 = FUN_00454810(0x56e1436d,local_c);
      if (iVar4 != 0) {
        pbVar2 = *(byte **)(iVar4 + 4);
        if (pbVar2[3] == 0) {
          uVar5 = FUN_00633840(*(undefined4 *)(pbVar2 + 8));
          *(undefined4 *)(pbVar2 + 4) = uVar5;
          pbVar2[3] = 1;
        }
        iVar4 = (**(code **)(*piVar3 + 0x10))();
        bVar1 = pbVar2[2];
        pbVar8 = (byte *)((uint)*pbVar2 + iVar4 + 0x10);
        pbVar9 = pbVar2 + pbVar2[1] + 0xc;
        for (uVar7 = (uint)(bVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          pbVar9 = pbVar9 + 4;
        }
        for (uVar7 = bVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pbVar9 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar9 = pbVar9 + 1;
        }
        param_1 = (int *)CONCAT31(param_1._1_3_,1);
        if (*(code **)(pbVar2 + 4) != (code *)0x0) {
          (**(code **)(pbVar2 + 4))(piVar3,0,pbVar2 + 8,1,&param_1);
        }
        pcVar6 = (char *)FUN_00454810(0xd038cfa,0);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = (char *)FUN_006269b0(1);
        }
        if (*pcVar6 == '\0') {
          if ((char)param_1 != '\0') {
            return 1;
          }
        }
        else if ((char)param_1 == '\0') {
          return 0;
        }
      }
      local_c = local_c + 1;
      uVar7 = FUN_005d9c80();
    } while (local_c < uVar7);
  }
  return 1;
}

