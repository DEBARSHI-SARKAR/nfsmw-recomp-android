/* speed.exe 00461d00 FUN_00461d00; analysis pseudocode, not buildable source.
 * calls 00465bb0 FUN_00465bb0
 * calls 00461b40 FUN_00461b40
 * calls 00652ad0 _malloc
 * calls 00461c20 FUN_00461c20
 */

void __thiscall FUN_00461d00(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar8 = param_4;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *param_1 = 1;
  cVar3 = *param_2;
  pcVar10 = (char *)(param_1 + 1);
  *pcVar10 = cVar3;
  if (cVar3 != '\0') {
    pcVar4 = pcVar10;
    do {
      cVar3 = pcVar4[(int)(param_2 + (1 - (int)pcVar10))];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar3;
    } while (cVar3 != '\0');
  }
  pvVar5 = _malloc(param_4 + 1);
  param_1[0x15] = pvVar5;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_00461b40(((int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4) + 0x20);
  param_1[0x58] = 0;
  local_c = 0;
  param_2 = (char *)0x1;
  cVar3 = FUN_00461c20(param_1[0x15],param_3,iVar8,&local_c,&param_2);
  iVar8 = 0;
  do {
    if (cVar3 == '\0') {
      iVar9 = param_1[0x55];
      iVar8 = iVar9 + -1;
      if (-1 < iVar8) {
        iVar6 = param_1[0x57];
        do {
          *(short *)(iVar8 * 0xc + 2 + iVar6) = (short)iVar9 - (short)iVar8;
          iVar6 = param_1[0x57];
          if (*(char *)(iVar8 * 0xc + 1 + iVar6) != '\0') {
            iVar9 = iVar8;
          }
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      return;
    }
    iVar9 = 0;
    pcVar10 = (char *)(param_1[0x15] + iVar8);
    if (pcVar10 != (char *)0x0) {
      cVar3 = *pcVar10;
      while (cVar3 != '\0') {
        iVar6 = iVar9 + 1;
        iVar9 = iVar9 + 1;
        cVar3 = pcVar10[iVar6];
      }
    }
    if (param_1[0x55] == param_1[0x56]) {
      FUN_00461b40((param_1[0x56] * 4) / 3 + 1);
    }
    iVar6 = param_1[0x55];
    param_1[0x55] = iVar6 + 1;
    pbVar1 = (byte *)(param_1[0x57] + iVar6 * 0xc);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    pbVar1[8] = 0;
    pbVar1[9] = 0;
    pbVar1[10] = 0;
    pbVar1[0xb] = 0;
    *(undefined2 *)(pbVar1 + 8) = param_2._0_2_;
    *(int *)(pbVar1 + 4) = iVar8;
    if (pcVar10[iVar9 + -1] == ':') {
      iVar6 = 0;
      pbVar1[1] = 1;
      if (0 < iVar9) {
        do {
          bVar7 = pcVar10[iVar6];
          if (('`' < (char)bVar7) && ((char)bVar7 < '{')) {
            bVar7 = bVar7 & 0x5f;
          }
          pcVar10[iVar6] = bVar7;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar9);
      }
    }
    local_8 = iVar8 + 1 + iVar9;
    if (((1 < (int)param_1[0x55]) && (pbVar1[1] == 0)) && (pbVar1[-0xb] != 0)) {
      local_4 = param_1[(pbVar1[-0xc] + 1) * 0x15] + *(int *)(pbVar1 + -8);
      pcVar10 = "INCLUDESCRIPT:";
      if (local_4 != 0) {
        do {
          cVar3 = pcVar10[*(int *)(pbVar1 + -8) + param_1[(pbVar1[-0xc] + 1) * 0x15] + -0x894254];
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          if ((cVar3 == '\0') || (cVar2 == '\0')) break;
        } while (cVar3 == cVar2);
        local_4 = (int)cVar3 - (int)cVar2;
        if (local_4 == 0) {
          FUN_00465bb0(param_1[(*pbVar1 + 1) * 0x15] + *(int *)(pbVar1 + 4));
        }
      }
    }
    cVar3 = FUN_00461c20(param_1[0x15] + local_8,param_3,param_4,&local_c,&param_2);
    iVar8 = local_8;
  } while( true );
}

