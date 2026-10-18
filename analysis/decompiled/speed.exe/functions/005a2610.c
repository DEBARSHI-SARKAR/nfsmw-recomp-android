/* speed.exe 005a2610 FUN_005a2610; analysis pseudocode, not buildable source.
 * calls 0058e210 FUN_0058e210
 * calls 005de330 FUN_005de330
 * calls 00652ad0 _malloc
 * calls 00593250 FUN_00593250
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a2610(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873614;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(1,0x4d64888d,DAT_0091d3dc,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(0,0xa999f6e2,(float)DAT_0091d3e0,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(0,0x23f6e732,(float)DAT_0091d3e4,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(0,0x291c816,(float)DAT_0091d3e8,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(0,0x29daba15,(float)DAT_0091d3ec,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(0,0xd9bb7d2d,(float)DAT_0091d3f0,0,0);
  }
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  pvVar3 = _malloc(0x2c);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    iVar4 = FUN_005de330(0,0);
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
    iVar4 = FUN_0058e210(0,0xb7dfff96,fVar2,uVar6,uVar7);
  }
  local_4 = 0xffffffff;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)(iVar4 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar5;
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5[1] = (int)puVar1;
  *piVar5 = param_1 + 0x3c;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_00593250(iVar4,0);
  }
  ExceptionList = local_c;
  return;
}

