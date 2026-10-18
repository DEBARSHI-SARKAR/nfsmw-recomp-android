/* speed.exe 006e16f0 FUN_006e16f0; analysis pseudocode, not buildable source.
 * calls 006dcda0 FUN_006dcda0
 * calls 006dcc00 FUN_006dcc00
 * calls 006dca60 FUN_006dca60
 * calls 006d8eb0 FUN_006d8eb0
 * calls 006d8680 FUN_006d8680
 * calls 006d8a60 FUN_006d8a60
 * calls 006d8aa0 FUN_006d8aa0
 */

void __thiscall FUN_006e16f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4478 + param_2 * 4) != 0) &&
     (*(int *)(param_1 + 0x2220 + param_2 * 4) == 1)) {
    iVar1 = param_1 + param_2 * 0x28;
    iVar2 = *(int *)(iVar1 + 0x4938);
    *(undefined4 *)(param_1 + 0x2220 + param_2 * 4) = 0;
    if (iVar2 == 1) {
      FUN_006d8680(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4f58),
                   *(undefined4 *)(param_1 + (param_2 * 3 + 0x13d7) * 4),
                   *(undefined4 *)(param_1 + 0x4f60 + param_2 * 0xc));
    }
    if (*(int *)(iVar1 + 0x493c) == 1) {
      FUN_006d8a60(param_2,*(undefined4 *)(param_1 + 0x4f70 + param_2 * 8),
                   *(undefined4 *)(param_1 + 0x4f74 + param_2 * 8));
    }
    if (*(int *)(iVar1 + 0x4940) == 1) {
      FUN_006d8aa0(param_2,*(undefined4 *)(param_1 + 0x4f80 + param_2 * 4));
    }
    if (*(int *)(iVar1 + 0x494c) == 1) {
      FUN_006dca60(param_2,*(undefined4 *)(param_1 + 0x4fa0 + param_2 * 4));
    }
    if (*(int *)(iVar1 + 0x4950) == 1) {
      FUN_006dcc00(param_2,*(undefined4 *)(param_1 + 0x4fa8 + param_2 * 4));
    }
    if (*(int *)(iVar1 + 0x4954) == 1) {
      FUN_006d8eb0(param_2,*(undefined4 *)(param_1 + 0x4fb0 + param_2 * 4));
    }
    if (*(int *)(iVar1 + 0x4958) == 1) {
      FUN_006dcda0(param_2,*(undefined4 *)(param_1 + param_2 * 0xc + 0x4fb8),
                   *(undefined4 *)(param_1 + (param_2 * 3 + 0x13ef) * 4),
                   *(undefined4 *)(param_1 + 0x4fc0 + param_2 * 0xc));
    }
    *(undefined4 *)(param_1 + 0x4938 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x493c + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x4940 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x4944 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + (param_2 * 5 + 0x929) * 8) = 0;
    *(undefined4 *)(param_1 + 0x494c + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x4950 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x4954 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x4958 + param_2 * 0x28) = 0;
    *(undefined4 *)(param_1 + 0x495c + param_2 * 0x28) = 0;
  }
  return;
}

