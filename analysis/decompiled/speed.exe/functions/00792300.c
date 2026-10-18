/* speed.exe 00792300 FUN_00792300; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00652ad0 _malloc
 * calls 0078f940 FUN_0078f940
 * calls 007c4b80 FUN_007c4b80
 * calls 0078a310 FUN_0078a310
 * calls 0078a510 FUN_0078a510
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00792300(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_ff [62];
  
  piVar1 = _malloc(0x418);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar1 + 3) = 0;
    piVar1[0x103] = 0;
    piVar1[0x104] = 0;
    *(undefined1 *)(piVar1 + 0x105) = 1;
  }
  local_108 = 0.0;
  FUN_0078a3a0(&local_108,8 - DAT_009b46d4);
  local_108 = 0.0;
  FUN_0078a3a0(&local_108,8);
  *(undefined1 *)(piVar1 + 2) = local_108._0_1_;
  local_108 = 0.0;
  FUN_0078a3a0(&local_108,8);
  *(undefined1 *)((int)piVar1 + 9) = local_108._0_1_;
  local_108 = 0.0;
  FUN_0078a3a0(&local_108,0x10);
  *(undefined2 *)((int)piVar1 + 10) = local_108._0_2_;
  iVar2 = *(int *)(param_1 + 0x400);
  local_100 = 0;
  puVar4 = local_ff;
  for (iVar3 = 0x3c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_108 = (float)(iVar2 - *(int *)(param_1 + 0x404)) * _DAT_00890f14;
  local_104 = FUN_007c4b80();
  iVar2 = FUN_007c4b80();
  if (0 < iVar2) {
    FUN_0078f940(&local_100,iVar2);
    FUN_0078a510(&local_100,iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x400) - *(int *)(param_1 + 0x404);
  if (iVar2 == 8) {
    local_108 = 0.0;
    FUN_0078a3a0(&local_108,8);
    fVar5 = (float)((uint)local_108 & 0xff);
  }
  else {
    if (iVar2 < 1) goto LAB_00792479;
    local_108 = 0.0;
    FUN_0078a3a0(&local_108,iVar2);
    fVar5 = local_108;
  }
  FUN_0078a310(fVar5,iVar2);
LAB_00792479:
  puVar4 = *(undefined4 **)(param_2 + 4);
  *puVar4 = piVar1;
  *(int **)(param_2 + 4) = piVar1;
  *piVar1 = param_2;
  piVar1[1] = (int)puVar4;
  return (char)piVar1[2] == *(char *)((int)piVar1 + 9);
}

