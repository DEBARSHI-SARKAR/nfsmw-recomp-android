/* speed.exe 0063b790 FUN_0063b790; analysis pseudocode, not buildable source.
 * calls 005ca910 FUN_005ca910
 * calls 005cc240 FUN_005cc240
 * calls 0041cb10 FUN_0041cb10
 * calls 00620ff0 FUN_00620ff0
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_0063b790(undefined4 *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  undefined4 auStack_98 [16];
  undefined1 uStack_58;
  int *piStack_54;
  undefined1 uStack_50;
  undefined4 local_4c [12];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087950b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7ca8;
  local_4 = 0;
  FUN_005ca910();
  local_18 = param_1[3];
  local_1c = param_1[2];
  local_14 = param_1[4];
  local_10 = 0x3f800000;
  if (param_1[5] != 0) {
    iVar3 = FUN_005d51f0();
    if ((iVar3 != 0) && (piVar2 = *(int **)(iVar3 + 4), piVar2 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar2 + 0x20))();
      if (iVar3 == 0) {
        uVar1 = *(undefined1 *)(param_1 + 10);
        FUN_00620ff0();
        uStack_a4 = 0xa6b47fac;
        puStack_a0 = auStack_a8;
        puVar4 = local_4c;
        puVar5 = auStack_98;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uStack_50 = 0;
        uStack_58 = uVar1;
        piStack_54 = piVar2;
        FUN_005cc240("Smackable");
        iVar3 = FUN_0041cb10();
        if ((iVar3 != 0) || (iVar3 = param_1[0xb], iVar3 == 0)) goto LAB_0063b91b;
      }
      else {
        iVar3 = param_1[0xb];
      }
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x100;
    }
  }
LAB_0063b91b:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

