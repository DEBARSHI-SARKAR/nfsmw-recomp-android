/* speed.exe 007992f0 FUN_007992f0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00652af0 FUN_00652af0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00793340 FUN_00793340
 * calls 00460c70 FUN_00460c70
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls 0083c880 FUN_0083c880
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

int __thiscall FUN_007992f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 local_40;
  undefined4 local_3f;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  uVar1 = FUN_0056e340();
  iVar2 = FUN_00460d20(param_2,uVar1);
  if (iVar2 == 0) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return 0;
  }
  for (piVar3 = (int *)*param_1; piVar3 != param_1; piVar3 = (int *)*piVar3) {
    iVar2 = FUN_00460d20(piVar3 + 4,param_2);
    if (iVar2 == 0) {
      iVar2 = piVar3[0x93];
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      return iVar2;
    }
  }
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 == 0x20) {
    piVar3 = (int *)param_1[1];
    iVar2 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar2;
    *(int **)(iVar2 + 4) = piVar5;
    iVar2 = *param_1;
    *param_1 = (int)piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    piVar3[1] = (int)param_1;
    piVar5 = piVar3 + 2;
    for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    piVar3[0x93] = 0;
    FUN_00460c70(piVar3 + 4,param_2);
  }
  else {
    piVar3 = (int *)FUN_00652af0(0x250,8);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3[0x93] = 0;
      piVar5 = piVar3 + 2;
      for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
    }
    if (piVar3 == (int *)0x0) goto LAB_007994c6;
    FUN_00460c70(piVar3 + 4,param_2);
    iVar2 = *param_1;
    *param_1 = (int)piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    piVar3[1] = (int)param_1;
    *piVar3 = iVar2;
  }
  local_40 = 0;
  puVar4 = &local_3f;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  FUN_0083c880(&local_40,0x40,&DAT_008b6d40,param_2);
  uVar8 = 0;
  pcVar7 = FUN_00797140;
  puVar6 = &local_40;
  uVar1 = 0x6f6e6c6e;
  FUN_00794f80(0x6f6e6c6e,puVar6,FUN_00797140,param_1,param_3,param_4,0);
  iVar2 = FUN_00793340(uVar1,puVar6,pcVar7,param_1,param_3,param_4,uVar8);
  piVar3[0x93] = iVar2;
  if (iVar2 != -1) {
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    return iVar2;
  }
  piVar5 = piVar3 + 2;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  piVar3[0x93] = 0;
LAB_007994c6:
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return -1;
}

