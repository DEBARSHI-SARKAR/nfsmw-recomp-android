/* speed.exe 007a9db0 FUN_007a9db0; analysis pseudocode, not buildable source.
 * calls 007a93e0 FUN_007a93e0
 * calls 00516b50 FUN_00516b50
 * calls 00591e90 FUN_00591e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a9db0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  cVar1 = FUN_00516b50("GarageMain.fng");
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00591e90("GarageMain.fng");
  }
  puVar4 = &DAT_009ba088;
  for (iVar3 = 0xc4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  _DAT_009b9e48 = param_2;
  if (iVar2 != 0) {
    FUN_007a93e0(&DAT_009ba088,param_2);
  }
  return;
}

