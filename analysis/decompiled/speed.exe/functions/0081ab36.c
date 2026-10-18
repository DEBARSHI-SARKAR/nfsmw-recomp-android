/* speed.exe 0081ab36 FUN_0081ab36; analysis pseudocode, not buildable source.
 * calls 0083163c FUN_0083163c
 * calls 008317bc FUN_008317bc
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls EXTERNAL:0000008d VirtualProtect
 * calls 008315e6 FUN_008315e6
 * calls 0081e9e7 FUN_0081e9e7
 * calls 0081962e FUN_0081962e
 * calls 00831611 FUN_00831611
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0081ab36(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined2 *local_10;
  undefined2 local_c;
  undefined2 local_a;
  char local_5;
  
  iVar2 = param_1;
  DAT_009c21d4 = &LAB_0081ab18;
  DAT_009c21d8 = &LAB_0081aa84;
  FUN_0081bccb();
  local_5 = DAT_009c1bec == 0;
  FUN_0081962e(param_1 + 0x50);
  iVar8 = 0;
  piVar9 = param_2;
  if (0 < *param_2) {
    do {
      piVar3 = (int *)(piVar9[1] + param_1);
      iVar8 = iVar8 + 1;
      *piVar3 = (int)((&PTR_LAB_0090bc40)[*piVar3] + (-4 - (int)piVar3));
      piVar9 = piVar9 + 1;
    } while (iVar8 < *param_2);
  }
  param_2 = (int *)((int)param_2 - *(int *)(param_1 + 0x30));
  piVar3 = (int *)(*(int *)(param_1 + 0x34) + (int)param_2);
  iVar8 = 0;
  piVar9 = piVar3;
  if (0 < *piVar3) {
    do {
      piVar6 = (int *)(piVar9[1] + param_1);
      *piVar6 = *piVar6 + param_1;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < *piVar3);
  }
  piVar9 = (int *)(*(int *)(param_1 + 0x38) + (int)param_2);
  param_1 = 0;
  if (0 < *piVar9) {
    piVar3 = piVar9 + 1;
    do {
      local_10 = (undefined2 *)(piVar3[1] + (int)param_2);
      local_c = *local_10;
      local_a = local_10[1];
      local_10 = local_10 + 2;
      if ((char)piVar3[2] == '\0') {
        FUN_0083163c(&local_10);
      }
      else if ((char)piVar3[2] == '\x01') {
        FUN_00831611(&local_10);
      }
      else {
        FUN_008315e6(&local_10);
      }
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 3;
    } while (param_1 < *piVar9);
  }
  iVar8 = *(int *)(iVar2 + 0x1c) + iVar2;
  param_1 = 0;
  if (*(short *)(iVar2 + 10) != 0) {
    do {
      *(int *)(iVar8 + 0x28) = *(int *)(iVar8 + 0x28) + iVar2;
      *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + iVar2;
      VirtualProtect(*(LPVOID *)(iVar8 + 0x28),
                     *(int *)(iVar8 + 0x2c) - (int)*(LPVOID *)(iVar8 + 0x28),0x40,(PDWORD)&param_2);
      *(undefined1 **)(iVar8 + 0x14) = &LAB_0081a86b;
      *(int *)(iVar8 + 0x18) = iVar8;
      FUN_008317bc(iVar8 + 4,iVar8 + 0xc);
      iVar4 = 0;
      if (*(char *)(iVar8 + 0x24) != '\0') {
        do {
          *(int *)(*(int *)(iVar8 + 0x3c + iVar4 * 4) + *(int *)(iVar8 + 0x2c)) = iVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(iVar8 + 0x24));
      }
      param_1 = param_1 + 1;
      iVar8 = iVar8 + 0x3c + ((uint)*(byte *)(iVar8 + 0x27) + (uint)*(byte *)(iVar8 + 0x24)) * 4;
    } while (param_1 < (int)(uint)*(ushort *)(iVar2 + 10));
  }
  pcVar7 = param_3;
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(undefined4 *)(iVar2 + 0x48) = 0;
  }
  else {
    pcVar5 = param_3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)FUN_0081e9e7(pcVar5 + (1 - (int)(param_3 + 1)));
    *(char **)(iVar2 + 0x48) = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)(iVar2 + 0x4c) = param_4;
  }
  if (local_5 != '\0') {
    _DAT_009c1bfc = &LAB_0081f98a;
    _DAT_009c1bf4 = DAT_009c1b5c;
    _DAT_009c1bf8 = 0;
    if (DAT_009c1b5c != (undefined *)0x0) {
      *(undefined **)(DAT_009c1b5c + 4) = &DAT_009c1bf4;
    }
    DAT_009c1b5c = &DAT_009c1bf4;
  }
  FUN_0081bcd9();
  return;
}

