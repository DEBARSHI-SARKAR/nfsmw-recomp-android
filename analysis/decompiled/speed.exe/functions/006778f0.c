/* speed.exe 006778f0 FUN_006778f0; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 006eec20 FUN_006eec20
 * calls 005d0370 FUN_005d0370
 * calls 006e9f60 FUN_006e9f60
 * calls 00672840 FUN_00672840
 * calls 00486130 FUN_00486130
 * calls 0066fb40 FUN_0066fb40
 * calls 006269b0 FUN_006269b0
 * calls 006e9f80 FUN_006e9f80
 * calls 00728920 FUN_00728920
 * calls 00454810 FUN_00454810
 * calls 006e9f20 FUN_006e9f20
 */

void __fastcall FUN_006778f0(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  (**(code **)(*(int *)(param_1 + 0x34) + 100))();
  (**(code **)(*(int *)(param_1 + 0x34) + 0x7c))();
  FUN_006eec20();
  FUN_006e9f80();
  FUN_006e9f60();
  if ((*(int *)(param_1 + 0xf0) != 0) && (*(char *)(param_1 + 0xec) != '\x01')) {
    iVar3 = FUN_00723c90(*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x2c));
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xef;
      FUN_00728920();
    }
    *(undefined1 *)(param_1 + 0xec) = 1;
  }
  (**(code **)(*(int *)(param_1 + 0x34) + 0x10))(0,0);
  cVar2 = (**(code **)(*(int *)(param_1 + 0xe4) + 4))(&stack0xffffffb8);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0xd0);
    if (iVar3 != 0) {
      FUN_0066fb40();
      FUN_005d0370(iVar3,8,0);
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  else {
    FUN_00672840(&stack0xffffffb4,1);
  }
  pcVar4 = (char *)FUN_00454810(0x5739788b,0);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)FUN_006269b0(1);
  }
  cVar2 = *pcVar4;
  pcVar4 = (char *)FUN_00454810(0x73c58cbf,0);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)FUN_006269b0(1);
  }
  if (*pcVar4 == '\0') {
    if (cVar2 == '\0') goto LAB_00677a24;
  }
  else if (*(int **)(param_1 + 0xd0) != (int *)0x0) {
    puVar1 = (uint *)(**(int **)(param_1 + 0xd0) + 0x10);
    *puVar1 = *puVar1 & 0xfffffeff;
  }
  FUN_006e9f20(*(undefined4 *)(*(int *)(param_1 + 0xac) + 8));
LAB_00677a24:
  if ((*(byte *)(param_1 + 0xda) & 1) == 0) {
    pcVar4 = (char *)FUN_00454810(0xe9d83d0c,0);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)FUN_006269b0(1);
    }
    if (*pcVar4 != '\0') {
      FUN_00486130(param_1 + 0x94);
      *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) | 1;
    }
  }
  return;
}

