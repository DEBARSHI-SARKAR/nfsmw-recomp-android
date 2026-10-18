/* speed.exe 00794180 FUN_00794180; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00652ad0 _malloc
 * calls 007c4b80 FUN_007c4b80
 * calls 0078a310 FUN_0078a310
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00794180(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  byte local_112;
  int local_110;
  float local_10c;
  float local_108;
  uint local_104;
  undefined1 local_100;
  undefined4 local_ff [62];
  
  local_108 = (float)*(int *)(param_2 + 0x400) * _DAT_00890f14;
  local_110 = FUN_007c4b80();
  iVar3 = FUN_007c4b80();
  local_112 = 1;
  bVar1 = (char)(iVar3 / 0xf3) + 1;
  bVar1 = bVar1 + (0xf3 < (int)(iVar3 % 0xf3 + (uint)bVar1 * 5));
  if (bVar1 != 0) {
    local_104 = (uint)bVar1;
    local_108 = 1.4013e-45;
    do {
      piVar4 = _malloc(0x418);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *(undefined1 *)(piVar4 + 3) = 0;
        piVar4[0x103] = 0;
        piVar4[0x104] = 0;
        *(undefined1 *)(piVar4 + 0x105) = 1;
      }
      iVar3 = param_1;
      if (param_1 < DAT_009b46d8) {
        iVar3 = DAT_009b46d8;
      }
      if (DAT_009b46dc < iVar3) {
        iVar3 = DAT_009b46dc;
      }
      FUN_0078a310(iVar3 - DAT_009b46d8,DAT_009b46d4);
      FUN_0078a310(0,8 - DAT_009b46d4);
      *(byte *)(piVar4 + 2) = local_112;
      FUN_0078a310(local_108,8);
      *(byte *)((int)piVar4 + 9) = bVar1;
      FUN_0078a310(local_104,8);
      if (local_112 < bVar1) {
        sVar2 = 0x770;
      }
      else {
        sVar2 = (short)*(undefined4 *)(param_2 + 0x400) - (short)*(undefined4 *)(param_2 + 0x404);
      }
      *(short *)((int)piVar4 + 10) = sVar2;
      FUN_0078a310((int)sVar2,0x10);
      if (local_112 < bVar1) {
        local_10c = 3.33509e-43;
      }
      else {
        local_110 = *(int *)(param_2 + 0x400) - *(int *)(param_2 + 0x404);
        local_10c = (float)local_110 * _DAT_00890f14;
        local_110 = FUN_007c4b80();
        local_10c = (float)FUN_007c4b80();
      }
      if ((local_112 == bVar1) && (0 < (int)local_10c)) {
        local_10c = (float)((int)local_10c + -1);
      }
      local_100 = 0;
      puVar5 = local_ff;
      for (iVar3 = 0x3c; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      if (0 < (int)local_10c) {
        iVar3 = 0;
        do {
          local_110 = 0;
          FUN_0078a3a0(&local_110,8);
          *(undefined1 *)((int)local_ff + iVar3 + -1) = (undefined1)local_110;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_10c);
      }
      iVar3 = 0;
      if (0 < (int)local_10c) {
        do {
          FUN_0078a310(*(undefined1 *)((int)local_ff + iVar3 + -1),8);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_10c);
      }
      if ((local_112 == bVar1) &&
         (iVar3 = *(int *)(param_2 + 0x400) - *(int *)(param_2 + 0x404), iVar3 != 0)) {
        local_110 = 0;
        FUN_0078a3a0(&local_110,iVar3);
        FUN_0078a310(local_110,iVar3);
      }
      puVar5 = *(undefined4 **)(param_3 + 4);
      *puVar5 = piVar4;
      *(int **)(param_3 + 4) = piVar4;
      piVar4[1] = (int)puVar5;
      local_112 = local_112 + 1;
      *piVar4 = param_3;
      local_108 = (float)((int)local_108 + 1);
    } while (local_112 <= bVar1);
  }
  return;
}

