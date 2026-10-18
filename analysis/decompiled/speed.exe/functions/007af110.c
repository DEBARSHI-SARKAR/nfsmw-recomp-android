/* speed.exe 007af110 FUN_007af110; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 * calls 005910e0 FUN_005910e0
 * calls 007a93e0 FUN_007a93e0
 * calls 00516b50 FUN_00516b50
 * calls 00591e90 FUN_00591e90
 * calls 0056f270 FUN_0056f270
 * calls 0056f2b0 FUN_0056f2b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007af110(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_310 [196];
  
  FUN_0056f270(param_2,param_3);
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_005910e0(**(undefined4 **)(param_1 + 4),0,local_310);
  FUN_0056f2b0(local_310);
  cVar1 = FUN_00516b50("GarageMain.fng");
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00591e90("GarageMain.fng");
  }
  puVar4 = local_310;
  puVar5 = &DAT_009ba088;
  for (iVar3 = 0xc4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_009b9e48 = 1;
  if (iVar2 != 0) {
    FUN_007a93e0(&DAT_009ba088,1);
  }
  return;
}

