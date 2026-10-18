/* speed.exe 00798800 FUN_00798800; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00840c60 FUN_00840c60
 * calls 00460f20 FUN_00460f20
 * calls 00793340 FUN_00793340
 * calls 00795c50 FUN_00795c50
 * calls 0083c880 FUN_0083c880
 * calls 0079ca30 FUN_0079ca30
 * calls 0083acd0 FUN_0083acd0
 * calls 00460ca0 FUN_00460ca0
 * calls 0078bf10 FUN_0078bf10
 * calls 00460d20 FUN_00460d20
 * calls 00798790 FUN_00798790
 * calls 00796d30 FUN_00796d30
 */

undefined4 __thiscall FUN_00798800(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_29c;
  undefined1 local_298;
  undefined4 local_297;
  undefined1 local_255;
  undefined1 local_250;
  undefined4 local_24f;
  undefined1 local_208;
  undefined4 local_207;
  
  if (*(int *)(param_1 + 0x1c) != -1) {
    local_250 = 0;
    puVar3 = &local_24f;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_00798790(&local_250,0x40);
    local_29c = *(int *)(param_1 + 0x28);
    FUN_0078bf10(&local_29c);
    local_298 = 0;
    puVar3 = &local_297;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    *(undefined1 *)((int)puVar3 + 2) = 0;
    FUN_00796d30();
    iVar2 = FUN_00794f80();
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00794f80(0x73656c66);
      iVar2 = FUN_00840c60(*(undefined4 *)(iVar2 + 0x38));
    }
    iVar2 = iVar2 + 0x1e0;
    iVar1 = FUN_00460f20(iVar2,0x5e);
    if (iVar1 == 0) {
      FUN_00460ca0(&local_298,iVar2,0x43);
      local_255 = 0;
    }
    else {
      FUN_00460ca0(&local_298,iVar2,iVar1 - iVar2);
      (&local_298)[iVar1 - iVar2] = 0;
    }
    iVar2 = local_29c;
    if ((((param_2 != '\0') || (local_29c != *(int *)(param_1 + 0x28))) ||
        (iVar1 = FUN_00460d20(&local_250,param_1 + 0xac), iVar1 != 0)) ||
       (iVar1 = FUN_00460d20(&local_298,param_1 + 0x68), iVar1 != 0)) {
      local_208 = 0;
      puVar3 = &local_207;
      for (iVar1 = 0x7f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      *(undefined2 *)puVar3 = 0;
      *(undefined1 *)((int)puVar3 + 2) = 0;
      FUN_0083c880(&local_208,0x200,&DAT_008b4cbc,param_1 + 0x44);
      FUN_0083c880(&local_208,0x200,&DAT_008b6fb0,&local_298);
      FUN_0083c880(&local_208,0x200,"PARAMS",&local_250);
      FUN_0083acd0(&local_208,0x200,"CUSTFLAGS",iVar2);
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      puVar6 = &LAB_007964d0;
      puVar5 = &local_208;
      uVar4 = 0x7561646d;
      FUN_00794f80(0x7561646d,puVar5,&LAB_007964d0,param_1,0,0,0);
      FUN_00793340(uVar4,puVar5,puVar6,param_1,uVar7,uVar8,uVar9);
    }
    uVar7 = 0;
    uVar4 = 0;
    FUN_0079ca30(0,0);
    FUN_00795c50(uVar4,uVar7);
    return 0;
  }
  return 0;
}

