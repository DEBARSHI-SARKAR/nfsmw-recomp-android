/* speed.exe 007970b0 FUN_007970b0; analysis pseudocode, not buildable source.
 * calls 0083a980 FUN_0083a980
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 */

void __fastcall FUN_007970b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_90;
  undefined4 local_8f;
  
  if (*(int *)(param_1 + 0x230) == 0) {
    return;
  }
  FUN_0083a980(*(int *)(param_1 + 0x230),0x80,&DAT_008b68e0,0x14);
  local_90 = 0;
  puVar2 = &local_8f;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_0083c880(&local_90,0x80,&DAT_008b6e6c,*(undefined4 *)(param_1 + 0x230));
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  puVar5 = &LAB_00794ff0;
  puVar4 = &local_90;
  uVar3 = 0x61757869;
  FUN_00794f80(0x61757869,puVar4,&LAB_00794ff0,param_1,0,0,0);
  FUN_00793340(uVar3,puVar4,puVar5,param_1,uVar6,uVar7,uVar8);
  return;
}

