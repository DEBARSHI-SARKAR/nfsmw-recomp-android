/* speed.exe 0083bbe0 FUN_0083bbe0; analysis pseudocode, not buildable source.
 * calls 0083a0f0 FUN_0083a0f0
 * calls 0084a730 FUN_0084a730
 * calls 0083a290 FUN_0083a290
 */

void FUN_0083bbe0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (char *)0x0) goto LAB_0083bdb6;
  cVar1 = *param_1;
  if (cVar1 == '$') {
    bVar5 = (&DAT_008c6408)[param_1[1]];
    pcVar2 = (char *)0x0;
    pcVar3 = param_1;
    if (0xf < bVar5) goto LAB_0083bdb6;
    do {
      uVar6 = (uint)bVar5;
      bVar5 = (&DAT_008c6408)[pcVar3[2]];
      param_1 = (char *)((int)pcVar2 << 4 | uVar6);
      pcVar2 = param_1;
      pcVar3 = pcVar3 + 1;
    } while (bVar5 < 0x10);
  }
  else {
    if ((cVar1 < '0') || ('9' < cVar1)) goto LAB_0083bdb6;
    pcVar3 = (char *)FUN_0083a0f0();
    if (' ' < *pcVar3) {
      if ('9' < cVar1) goto LAB_0083bdb6;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0xffffffff;
      FUN_0083a0f0();
      FUN_0083a0f0();
      FUN_0083a0f0();
      FUN_0083a0f0();
      FUN_0083a0f0();
      FUN_0083a0f0();
      if ((((local_10 < 0x7b2) || (0x83b < local_10)) || (local_14 < 1)) ||
         (((0xc < local_14 || (local_18 < 1)) || (iVar4 = local_10, 0x1f < local_18)))) {
        iVar4 = 0;
      }
      if (((local_1c < 0) || (0x17 < local_1c)) ||
         (((local_20 < 0 || (((0x3b < local_20 || (local_24 < 0)) || (0x3d < local_24)))) ||
          (iVar4 == 0)))) goto LAB_0083bdb6;
      local_10 = iVar4 + -0x76c;
      local_14 = local_14 + -1;
      param_1 = (char *)FUN_0083a290(&local_24);
    }
  }
  if (param_1 != (char *)0x0) {
    return;
  }
LAB_0083bdb6:
  if (param_2 == 0) {
    FUN_0084a730();
  }
  return;
}

