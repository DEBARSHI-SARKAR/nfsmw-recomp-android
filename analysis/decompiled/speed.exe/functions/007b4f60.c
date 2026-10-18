/* speed.exe 007b4f60 FUN_007b4f60; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007b4e20 FUN_007b4e20
 * calls 0056e2c0 FUN_0056e2c0
 * calls 0058a9f0 FUN_0058a9f0
 */

void __fastcall FUN_007b4f60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  
  cVar3 = FUN_0058a9f0(1,0x136253,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x136253;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  iVar1 = param_1 + 0x2c;
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x136252,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x136252;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x136251,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x136251;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x136250,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x136250;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x13624f,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x13624f;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x13624e,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x13624e;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9666,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9666;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9665,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9665;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9664,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9664;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9663,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9663;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9662,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9662;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9661,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9661;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x9660,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x9660;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x965f,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x965f;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x3a94520,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x3a94520;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0xcb6aaf2f,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = -0x349550d1;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x2cf370f0,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x2cf370f0;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x2cf385b2,*(undefined4 *)(param_1 + 0x1a8));
  piVar4 = _malloc(0x10);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4[2] = 0x2cf385b2;
    *(bool *)(piVar4 + 3) = cVar3 == '\0';
  }
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  *puVar2 = piVar4;
  *(int **)(param_1 + 0x30) = piVar4;
  piVar4[1] = (int)puVar2;
  *piVar4 = iVar1;
  cVar3 = FUN_0058a9f0(1,0x34498eb2,*(undefined4 *)(param_1 + 0x1a8));
  if (cVar3 != '\0') {
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x34498eb2;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
  }
  cVar3 = FUN_0056e2c0();
  if (cVar3 != '\0') {
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x634d1bd2;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = -0x1ef8a79e;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x2d642b8;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x3d3401a;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x3d8a6d1;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x54653c71;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = -0x1eea1530;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x54655133;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x582f21d9;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
    piVar4 = _malloc(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4[2] = 0x363a1fea;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x30);
    *puVar2 = piVar4;
    *(int **)(param_1 + 0x30) = piVar4;
    piVar4[1] = (int)puVar2;
    *piVar4 = iVar1;
  }
  FUN_007b4e20(*(undefined4 *)(param_1 + 0x1a8));
  return;
}

