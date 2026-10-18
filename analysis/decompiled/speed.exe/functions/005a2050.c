/* speed.exe 005a2050 FUN_005a2050; analysis pseudocode, not buildable source.
 * calls 0058e210 FUN_0058e210
 * calls 005de350 FUN_005de350
 * calls 00652ad0 _malloc
 * calls 00593250 FUN_00593250
 */

void __fastcall FUN_005a2050(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = FUN_005de350(2);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x4b0ff103,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(1);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x8ec1a6ec,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(4);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x370f331d,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(8);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x8462a784,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(0x10);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0xdff254ba,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(0x20);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x7dbd5b34,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(0x40);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0x2b1de2a9,0,0,cVar2 != '\0');
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
  cVar2 = FUN_005de350(0x80);
  pvVar3 = _malloc(0x2c);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0058e210(5,0xb0ef5c12,0,0,cVar2 != '\0');
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
  return;
}

