/* speed.exe 007eff71 FUN_007eff71; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000093 CreateFileA
 */

HANDLE __thiscall FUN_007eff71(int *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  HANDLE pvVar5;
  uint uVar6;
  char *pcVar7;
  uint dwCreationDisposition;
  bool bVar8;
  char local_118 [260];
  uint local_14;
  DWORD local_10;
  uint local_c;
  uint local_8;
  
  bVar8 = (param_3 & 1) == 0;
  local_10 = 0x80000000;
  local_8 = 0x80;
  if (bVar8) {
    local_10 = 0xc0000000;
  }
  local_c = (uint)!bVar8;
  local_14 = param_3 & 2;
  if (local_14 == 0) {
    dwCreationDisposition = (-(uint)((param_3 & 4) != 0) & 2) + 3;
  }
  else {
    dwCreationDisposition = ~(param_3 >> 2) & 1 | 2;
  }
  if ((param_3 & 8) != 0) {
    local_8 = 0x20000080;
  }
  if ((param_3 & 0x10) != 0) {
    local_8 = local_8 | 0x8000000;
  }
  if ((*param_2 == '/') || (*param_2 == '\\')) {
    pcVar2 = (char *)(**(code **)(*param_1 + 0x30))();
    pcVar7 = local_118;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
      pcVar3 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = (int)pcVar3 - (int)param_2;
    pcVar7 = &stack0xfffffee7;
    do {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar2 != '\0');
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *param_2;
      param_2 = param_2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    param_2 = local_118;
  }
  pvVar5 = CreateFileA(param_2,local_10,local_c,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                       local_8,(HANDLE)0x0);
  if ((pvVar5 == (HANDLE)0xffffffff) &&
     (((local_14 != 2 || ((param_3 & 4) != 0)) ||
      (pvVar5 = CreateFileA(param_2,local_10,local_c,(LPSECURITY_ATTRIBUTES)0x0,
                            dwCreationDisposition & 0xfffffffd | 1,local_8,(HANDLE)0x0),
      pvVar5 == (HANDLE)0xffffffff)))) {
    pvVar5 = (HANDLE)0xffffffff;
  }
  return pvVar5;
}

