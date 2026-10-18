/* speed.exe 007b5a50 FUN_007b5a50; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 005910e0 FUN_005910e0
 * calls 007a93e0 FUN_007a93e0
 * calls 00516b50 FUN_00516b50
 * calls 00591e90 FUN_00591e90
 * calls 0056f210 FUN_0056f210
 * calls 0056f100 FUN_0056f100
 * calls 0056f2b0 FUN_0056f2b0
 * calls 007af110 FUN_007af110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007b5a50(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_310 [196];
  
  puVar2 = (undefined4 *)FUN_0056f100(*(undefined1 *)(*(int *)(param_1 + 4) + 0x10));
  puVar5 = (undefined4 *)(param_1 + 0x1c);
  for (iVar3 = 0x66; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(**(undefined4 **)(param_1 + 4),0,local_310);
  FUN_0056f2b0(local_310);
  cVar1 = FUN_00516b50("GarageMain.fng");
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00591e90("GarageMain.fng");
  }
  puVar2 = local_310;
  puVar5 = &DAT_009ba088;
  for (iVar4 = 0xc4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_009b9e48 = 1;
  if (iVar3 != 0) {
    FUN_007a93e0(&DAT_009ba088,1);
  }
  iVar3 = *(int *)(param_1 + 0x1b4);
  while( true ) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -4;
    }
    if (param_1 == -0x1b4) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x1b0;
    }
    if (iVar3 == iVar4) break;
    iVar4 = *(int *)(iVar3 + 0xc);
    if (*(char *)(iVar4 + 0x1c) == '\0') {
      FUN_007af110(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc));
      iVar3 = *(int *)(iVar3 + 4);
    }
    else if (*(int *)(iVar4 + 0x14) == 7) {
      *(uint *)(param_1 + 0x150) =
           *(uint *)(param_1 + 0x150) | 1 << ((byte)*(int *)(iVar4 + 0x18) & 0x1f);
      FUN_0056f210(param_1 + 8);
      iVar3 = *(int *)(iVar3 + 4);
    }
    else {
      *(int *)(param_1 + 0x134 + *(int *)(iVar4 + 0x18) * 4) = *(int *)(iVar4 + 0x14);
      FUN_0056f210(param_1 + 8);
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  return;
}

