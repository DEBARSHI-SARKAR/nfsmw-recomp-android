/* speed.exe 005011f0 FUN_005011f0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00464080 FUN_00464080
 * calls 006616f0 FUN_006616f0
 * calls 004647c0 FUN_004647c0
 * calls 0065fd30 FUN_0065fd30
 * calls 0064abe0 FUN_0064abe0
 */

void FUN_005011f0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  int local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  int local_404;
  undefined1 auStack_400 [1024];
  
  local_418 = 0;
  local_414 = 0;
  local_410 = 0;
  local_40c = 0;
  local_424 = *(undefined4 *)(param_3 + 0x1c);
  local_428 = *(undefined4 *)(param_3 + 8);
  local_408 = 0;
  local_404 = 0;
  local_420 = *(undefined4 *)(*(int *)(param_3 + 0x10) + 4);
  local_41c = param_3;
  (**(code **)(param_1 + 0x10))(&local_428);
  *(undefined4 *)(param_3 + 0x3c) = local_410;
  *(undefined4 *)(param_3 + 0x24) = local_418;
  *(undefined4 *)(param_3 + 0x28) = local_414;
  *(undefined4 *)(param_3 + 0x40) = local_40c;
  if (local_404 != 0) {
    uVar2 = FUN_0065fd30(*(undefined4 *)(param_3 + 8),6,0,local_408,local_404);
    *(undefined4 *)(param_3 + 0x20) = uVar2;
    FUN_004647c0(auStack_400,"%s: StrmHdrRes",*(undefined4 *)(param_3 + 8));
    uVar4 = 0x2000;
    if ((*(short *)(param_3 + 0xc) != 0) &&
       (iVar3 = FUN_00464080((int)*(short *)(param_3 + 0xc)), local_404 < iVar3)) {
      uVar4 = *(byte *)(param_3 + 0xc) & 0xf | 0x2040;
    }
    FUN_0064abe0(uVar4,auStack_400);
    FUN_006616f0(&LAB_004fb5a0,param_3);
  }
  if (*(int *)(param_3 + 0x20) == 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    pcVar1 = *(code **)(iVar3 + 8);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(param_3 + 0x14) = 1;
    FUN_004655f0(iVar3);
    *(undefined4 *)(param_3 + 0x10) = 0;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
  }
  return;
}

