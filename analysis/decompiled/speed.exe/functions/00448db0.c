/* speed.exe 00448db0 FUN_00448db0; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00448cc0 FUN_00448cc0
 * calls 00448cd0 FUN_00448cd0
 * calls 004a91a0 FUN_004a91a0
 * calls 00491f50 FUN_00491f50
 * calls 00652ad0 _malloc
 */

undefined4 __thiscall FUN_00448db0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar3 = (*(code *)PTR_FUN_008ee4d0)(0x30,0);
  uVar1 = param_3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004a91a0(param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  puVar5 = _malloc(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_008936e8;
    puVar5[1] = 0;
  }
  *(undefined4 **)(param_1 + 0x14) = puVar5;
  param_3 = 0;
  cVar2 = FUN_00491f50("AnimationBank",&param_3,&param_2);
  uVar6 = -(uint)(cVar2 != '\0') & param_2;
  *(uint *)(param_1 + 0x18) = uVar6;
  (**(code **)**(undefined4 **)(param_1 + 0x14))(uVar6);
  (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  return 0;
}

